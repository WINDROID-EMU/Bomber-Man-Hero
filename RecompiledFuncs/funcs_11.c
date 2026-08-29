#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8001EC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EC38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EC3C: sw          $zero, -0x1F60($at)
    MEM_W(-0X1F60, ctx->r1) = 0;
    // 0x8001EC40: jr          $ra
    // 0x8001EC44: nop

    return;
    // 0x8001EC44: nop

    // 0x8001EC48: jr          $ra
    // 0x8001EC4C: nop

    return;
    // 0x8001EC4C: nop

;}
RECOMP_FUNC void func_80001440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001448: lui         $t6, 0x1B
    ctx->r14 = S32(0X1B << 16);
    // 0x8000144C: lui         $t7, 0x1B
    ctx->r15 = S32(0X1B << 16);
    // 0x80001450: addiu       $t7, $t7, 0x3930
    ctx->r15 = ADD32(ctx->r15, 0X3930);
    // 0x80001454: addiu       $t6, $t6, -0x1330
    ctx->r14 = ADD32(ctx->r14, -0X1330);
    // 0x80001458: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000145C: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001460: jal         0x8000068C
    // 0x80001464: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001464: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001468: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x8000146C: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x80001470: addiu       $t9, $t9, -0x57D0
    ctx->r25 = ADD32(ctx->r25, -0X57D0);
    // 0x80001474: addiu       $t8, $t8, -0x66C0
    ctx->r24 = ADD32(ctx->r24, -0X66C0);
    // 0x80001478: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x8000147C: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x80001480: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80001484: jal         0x8000068C
    // 0x80001488: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80001488: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x8000148C: b           L_80001494
    // 0x80001490: nop

        goto L_80001494;
    // 0x80001490: nop

L_80001494:
    // 0x80001494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000149C: jr          $ra
    // 0x800014A0: nop

    return;
    // 0x800014A0: nop

;}
RECOMP_FUNC void func_800014A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800014A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800014A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800014AC: lui         $t6, 0x1B
    ctx->r14 = S32(0X1B << 16);
    // 0x800014B0: lui         $t7, 0x1B
    ctx->r15 = S32(0X1B << 16);
    // 0x800014B4: addiu       $t7, $t7, 0x6C30
    ctx->r15 = ADD32(ctx->r15, 0X6C30);
    // 0x800014B8: addiu       $t6, $t6, 0x3930
    ctx->r14 = ADD32(ctx->r14, 0X3930);
    // 0x800014BC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800014C0: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800014C4: jal         0x8000068C
    // 0x800014C8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800014C8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x800014CC: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x800014D0: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x800014D4: addiu       $t9, $t9, -0x66C0
    ctx->r25 = ADD32(ctx->r25, -0X66C0);
    // 0x800014D8: addiu       $t8, $t8, -0x6F30
    ctx->r24 = ADD32(ctx->r24, -0X6F30);
    // 0x800014DC: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x800014E0: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x800014E4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800014E8: jal         0x8000068C
    // 0x800014EC: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x800014EC: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x800014F0: b           L_800014F8
    // 0x800014F4: nop

        goto L_800014F8;
    // 0x800014F4: nop

L_800014F8:
    // 0x800014F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800014FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001500: jr          $ra
    // 0x80001504: nop

    return;
    // 0x80001504: nop

;}
RECOMP_FUNC void func_80026548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026548: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8002654C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026550: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80026554: lwc1        $f4, -0x1EC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80026558: nop

    // 0x8002655C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80026560: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80026564: lwc1        $f6, -0x1EBC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80026568: nop

    // 0x8002656C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80026570: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80026574: lwc1        $f8, -0x1EB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80026578: nop

    // 0x8002657C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80026580: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80026584: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80026588: addiu       $t7, $t6, 0x1260
    ctx->r15 = ADD32(ctx->r14, 0X1260);
    // 0x8002658C: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x80026590: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x80026594: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80026598:
    // 0x80026598: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8002659C: nop

    // 0x800265A0: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x800265A4: nop

    // 0x800265A8: beq         $t0, $zero, L_800269B0
    if (ctx->r8 == 0) {
        // 0x800265AC: nop
    
            goto L_800269B0;
    }
    // 0x800265AC: nop

    // 0x800265B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800265B4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800265B8: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800265BC: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800265C0: nop

    // 0x800265C4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800265C8: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x800265CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800265D0: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800265D4: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800265D8: nop

    // 0x800265DC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800265E0: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x800265E4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800265E8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800265EC: lwc1        $f10, 0x8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800265F0: nop

    // 0x800265F4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800265F8: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x800265FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80026600: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80026604: lh          $t5, 0xE6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE6);
    // 0x80026608: nop

    // 0x8002660C: bne         $t5, $at, L_80026784
    if (ctx->r13 != ctx->r1) {
        // 0x80026610: nop
    
            goto L_80026784;
    }
    // 0x80026610: nop

    // 0x80026614: lh          $t6, 0xE4($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XE4);
    // 0x80026618: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8002661C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80026620: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80026624: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x80026628: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002662C: lb          $t8, 0x4D94($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4D94);
    // 0x80026630: nop

    // 0x80026634: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80026638: bne         $t9, $zero, L_80026784
    if (ctx->r25 != 0) {
        // 0x8002663C: nop
    
            goto L_80026784;
    }
    // 0x8002663C: nop

    // 0x80026640: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80026644: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80026648: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8002664C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80026650: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80026654: lw          $t0, 0x7984($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7984);
    // 0x80026658: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8002665C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80026660: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80026664: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80026668: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8002666C: bgez        $t0, L_80026684
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80026670: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80026684;
    }
    // 0x80026670: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80026674: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80026678: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002667C: nop

    // 0x80026680: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_80026684:
    // 0x80026684: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80026688: nop

    // 0x8002668C: bc1f        L_80026774
    if (!c1cs) {
        // 0x80026690: nop
    
            goto L_80026774;
    }
    // 0x80026690: nop

    // 0x80026694: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_80026698:
    // 0x80026698: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8002669C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800266A0: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800266A4: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x800266A8: lh          $t4, 0x10E($t5)
    ctx->r12 = MEM_H(ctx->r13, 0X10E);
    // 0x800266AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800266B0: beq         $t4, $at, L_800266C4
    if (ctx->r12 == ctx->r1) {
        // 0x800266B4: nop
    
            goto L_800266C4;
    }
    // 0x800266B4: nop

    // 0x800266B8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800266BC: jal         0x800272E8
    // 0x800266C0: nop

    func_800272E8(rdram, ctx);
        goto after_0;
    // 0x800266C0: nop

    after_0:
L_800266C4:
    // 0x800266C4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800266C8: nop

    // 0x800266CC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800266D0: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x800266D4: bne         $at, $zero, L_80026698
    if (ctx->r1 != 0) {
        // 0x800266D8: sw          $t7, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r15;
            goto L_80026698;
    }
    // 0x800266D8: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x800266DC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_800266E0:
    // 0x800266E0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800266E4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800266E8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800266EC: addu        $t2, $t8, $t0
    ctx->r10 = ADD32(ctx->r24, ctx->r8);
    // 0x800266F0: lh          $t1, 0xE8($t2)
    ctx->r9 = MEM_H(ctx->r10, 0XE8);
    // 0x800266F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800266F8: beq         $t1, $at, L_8002671C
    if (ctx->r9 == ctx->r1) {
        // 0x800266FC: nop
    
            goto L_8002671C;
    }
    // 0x800266FC: nop

    // 0x80026700: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80026704: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80026708: sll         $t4, $t5, 1
    ctx->r12 = S32(ctx->r13 << 1);
    // 0x8002670C: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x80026710: lh          $a0, 0xE8($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XE8);
    // 0x80026714: jal         0x8001A928
    // 0x80026718: nop

    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x80026718: nop

    after_1:
L_8002671C:
    // 0x8002671C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80026720: nop

    // 0x80026724: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80026728: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x8002672C: bne         $at, $zero, L_800266E0
    if (ctx->r1 != 0) {
        // 0x80026730: sw          $t9, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r25;
            goto L_800266E0;
    }
    // 0x80026730: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x80026734: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80026738: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002673C: lh          $t0, 0xFC($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XFC);
    // 0x80026740: nop

    // 0x80026744: beq         $t0, $at, L_80026760
    if (ctx->r8 == ctx->r1) {
        // 0x80026748: nop
    
            goto L_80026760;
    }
    // 0x80026748: nop

    // 0x8002674C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80026750: nop

    // 0x80026754: lh          $a0, 0xFC($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XFC);
    // 0x80026758: jal         0x8002613C
    // 0x8002675C: nop

    func_8002613C(rdram, ctx);
        goto after_2;
    // 0x8002675C: nop

    after_2:
L_80026760:
    // 0x80026760: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80026764: jal         0x8001A928
    // 0x80026768: nop

    func_8001A928(rdram, ctx);
        goto after_3;
    // 0x80026768: nop

    after_3:
    // 0x8002676C: b           L_8002677C
    // 0x80026770: nop

        goto L_8002677C;
    // 0x80026770: nop

L_80026774:
    // 0x80026774: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80026778: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_8002677C:
    // 0x8002677C: b           L_8002678C
    // 0x80026780: nop

        goto L_8002678C;
    // 0x80026780: nop

L_80026784:
    // 0x80026784: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80026788: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_8002678C:
    // 0x8002678C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80026790: nop

    // 0x80026794: beq         $t3, $zero, L_800269B0
    if (ctx->r11 == 0) {
        // 0x80026798: nop
    
            goto L_800269B0;
    }
    // 0x80026798: nop

    // 0x8002679C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800267A0: nop

    // 0x800267A4: sb          $zero, 0x131($t4)
    MEM_B(0X131, ctx->r12) = 0;
    // 0x800267A8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800267AC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800267B0: lh          $t7, 0xE4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE4);
    // 0x800267B4: nop

    // 0x800267B8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800267BC: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x800267C0: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x800267C4: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800267C8: lb          $t8, 0x4D94($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4D94);
    // 0x800267CC: nop

    // 0x800267D0: andi        $t0, $t8, 0x4
    ctx->r8 = ctx->r24 & 0X4;
    // 0x800267D4: bne         $t0, $zero, L_800268E4
    if (ctx->r8 != 0) {
        // 0x800267D8: nop
    
            goto L_800268E4;
    }
    // 0x800267D8: nop

    // 0x800267DC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800267E0: lh          $t2, 0x798C($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X798C);
    // 0x800267E4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800267E8: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800267EC: nop

    // 0x800267F0: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800267F4: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x800267F8: nop

    // 0x800267FC: bc1f        L_800268CC
    if (!c1cs) {
        // 0x80026800: nop
    
            goto L_800268CC;
    }
    // 0x80026800: nop

    // 0x80026804: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80026808: lh          $t1, 0x7994($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7994);
    // 0x8002680C: nop

    // 0x80026810: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80026814: nop

    // 0x80026818: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8002681C: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80026820: nop

    // 0x80026824: bc1f        L_800268CC
    if (!c1cs) {
        // 0x80026828: nop
    
            goto L_800268CC;
    }
    // 0x80026828: nop

    // 0x8002682C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80026830: lh          $t5, 0x799C($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X799C);
    // 0x80026834: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80026838: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8002683C: nop

    // 0x80026840: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80026844: c.le.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl <= ctx->f4.fl;
    // 0x80026848: nop

    // 0x8002684C: bc1f        L_800268CC
    if (!c1cs) {
        // 0x80026850: nop
    
            goto L_800268CC;
    }
    // 0x80026850: nop

    // 0x80026854: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80026858: lh          $t3, 0x79A4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X79A4);
    // 0x8002685C: nop

    // 0x80026860: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80026864: nop

    // 0x80026868: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8002686C: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80026870: nop

    // 0x80026874: bc1f        L_800268CC
    if (!c1cs) {
        // 0x80026878: nop
    
            goto L_800268CC;
    }
    // 0x80026878: nop

    // 0x8002687C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80026880: lh          $t4, 0x79AC($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X79AC);
    // 0x80026884: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80026888: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8002688C: nop

    // 0x80026890: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80026894: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80026898: nop

    // 0x8002689C: bc1f        L_800268CC
    if (!c1cs) {
        // 0x800268A0: nop
    
            goto L_800268CC;
    }
    // 0x800268A0: nop

    // 0x800268A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800268A8: lh          $t6, 0x79B8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X79B8);
    // 0x800268AC: nop

    // 0x800268B0: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x800268B4: nop

    // 0x800268B8: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800268BC: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x800268C0: nop

    // 0x800268C4: bc1t        L_800268E4
    if (c1cs) {
        // 0x800268C8: nop
    
            goto L_800268E4;
    }
    // 0x800268C8: nop

L_800268CC:
    // 0x800268CC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800268D0: nop

    // 0x800268D4: lbu         $t9, 0x131($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X131);
    // 0x800268D8: nop

    // 0x800268DC: ori         $t8, $t9, 0x2
    ctx->r24 = ctx->r25 | 0X2;
    // 0x800268E0: sb          $t8, 0x131($t7)
    MEM_B(0X131, ctx->r15) = ctx->r24;
L_800268E4:
    // 0x800268E4: lui         $at, 0xC470
    ctx->r1 = S32(0XC470 << 16);
    // 0x800268E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800268EC: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800268F0: nop

    // 0x800268F4: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x800268F8: nop

    // 0x800268FC: bc1f        L_80026998
    if (!c1cs) {
        // 0x80026900: nop
    
            goto L_80026998;
    }
    // 0x80026900: nop

    // 0x80026904: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80026908: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002690C: nop

    // 0x80026910: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x80026914: nop

    // 0x80026918: bc1f        L_80026998
    if (!c1cs) {
        // 0x8002691C: nop
    
            goto L_80026998;
    }
    // 0x8002691C: nop

    // 0x80026920: lui         $at, 0xC3F0
    ctx->r1 = S32(0XC3F0 << 16);
    // 0x80026924: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80026928: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8002692C: nop

    // 0x80026930: c.le.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl <= ctx->f8.fl;
    // 0x80026934: nop

    // 0x80026938: bc1f        L_80026998
    if (!c1cs) {
        // 0x8002693C: nop
    
            goto L_80026998;
    }
    // 0x8002693C: nop

    // 0x80026940: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x80026944: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80026948: nop

    // 0x8002694C: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x80026950: nop

    // 0x80026954: bc1f        L_80026998
    if (!c1cs) {
        // 0x80026958: nop
    
            goto L_80026998;
    }
    // 0x80026958: nop

    // 0x8002695C: lui         $at, 0xC470
    ctx->r1 = S32(0XC470 << 16);
    // 0x80026960: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80026964: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80026968: nop

    // 0x8002696C: c.le.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl <= ctx->f10.fl;
    // 0x80026970: nop

    // 0x80026974: bc1f        L_80026998
    if (!c1cs) {
        // 0x80026978: nop
    
            goto L_80026998;
    }
    // 0x80026978: nop

    // 0x8002697C: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80026980: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80026984: nop

    // 0x80026988: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x8002698C: nop

    // 0x80026990: bc1t        L_800269B0
    if (c1cs) {
        // 0x80026994: nop
    
            goto L_800269B0;
    }
    // 0x80026994: nop

L_80026998:
    // 0x80026998: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8002699C: nop

    // 0x800269A0: lbu         $t2, 0x131($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X131);
    // 0x800269A4: nop

    // 0x800269A8: ori         $t1, $t2, 0x4
    ctx->r9 = ctx->r10 | 0X4;
    // 0x800269AC: sb          $t1, 0x131($t0)
    MEM_B(0X131, ctx->r8) = ctx->r9;
L_800269B0:
    // 0x800269B0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800269B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800269B8: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x800269BC: slti        $at, $t6, 0x4E
    ctx->r1 = SIGNED(ctx->r14) < 0X4E ? 1 : 0;
    // 0x800269C0: addiu       $t3, $t5, 0x150
    ctx->r11 = ADD32(ctx->r13, 0X150);
    // 0x800269C4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x800269C8: bne         $at, $zero, L_80026598
    if (ctx->r1 != 0) {
        // 0x800269CC: sw          $t6, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r14;
            goto L_80026598;
    }
    // 0x800269CC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x800269D0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800269D4: lw          $t9, 0x796C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X796C);
    // 0x800269D8: nop

    // 0x800269DC: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x800269E0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_800269E4:
    // 0x800269E4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800269E8: jal         0x800261BC
    // 0x800269EC: nop

    func_800261BC(rdram, ctx);
        goto after_4;
    // 0x800269EC: nop

    after_4:
    // 0x800269F0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800269F4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800269F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800269FC: bne         $t8, $at, L_80026AF0
    if (ctx->r24 != ctx->r1) {
        // 0x80026A00: nop
    
            goto L_80026AF0;
    }
    // 0x80026A00: nop

    // 0x80026A04: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80026A08: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80026A0C: sll         $t1, $t2, 4
    ctx->r9 = S32(ctx->r10 << 4);
    // 0x80026A10: addu        $t0, $t7, $t1
    ctx->r8 = ADD32(ctx->r15, ctx->r9);
    // 0x80026A14: lh          $t5, 0x2($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X2);
    // 0x80026A18: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80026A1C: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80026A20: nop

    // 0x80026A24: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80026A28: sub.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x80026A2C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80026A30: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80026A34: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80026A38: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x80026A3C: addu        $t9, $t3, $t6
    ctx->r25 = ADD32(ctx->r11, ctx->r14);
    // 0x80026A40: lh          $t8, 0x4($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X4);
    // 0x80026A44: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80026A48: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80026A4C: nop

    // 0x80026A50: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80026A54: sub.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80026A58: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80026A5C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80026A60: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80026A64: sll         $t1, $t7, 4
    ctx->r9 = S32(ctx->r15 << 4);
    // 0x80026A68: addu        $t0, $t2, $t1
    ctx->r8 = ADD32(ctx->r10, ctx->r9);
    // 0x80026A6C: lh          $t5, 0x6($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X6);
    // 0x80026A70: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80026A74: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80026A78: nop

    // 0x80026A7C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80026A80: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80026A84: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80026A88: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80026A8C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80026A90: mul.s       $f16, $f18, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80026A94: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80026A98: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80026A9C: lw          $t4, 0x797C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X797C);
    // 0x80026AA0: mul.s       $f4, $f8, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80026AA4: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80026AA8: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80026AAC: mul.s       $f18, $f10, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80026AB0: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80026AB4: bgez        $t4, L_80026ACC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80026AB8: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80026ACC;
    }
    // 0x80026AB8: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80026ABC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80026AC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80026AC4: nop

    // 0x80026AC8: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_80026ACC:
    // 0x80026ACC: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80026AD0: nop

    // 0x80026AD4: bc1f        L_80026AE8
    if (!c1cs) {
        // 0x80026AD8: nop
    
            goto L_80026AE8;
    }
    // 0x80026AD8: nop

    // 0x80026ADC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80026AE0: jal         0x800260FC
    // 0x80026AE4: nop

    func_800260FC(rdram, ctx);
        goto after_5;
    // 0x80026AE4: nop

    after_5:
L_80026AE8:
    // 0x80026AE8: b           L_80026D8C
    // 0x80026AEC: nop

        goto L_80026D8C;
    // 0x80026AEC: nop

L_80026AF0:
    // 0x80026AF0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80026AF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80026AF8: bne         $t3, $at, L_80026D8C
    if (ctx->r11 != ctx->r1) {
        // 0x80026AFC: nop
    
            goto L_80026D8C;
    }
    // 0x80026AFC: nop

    // 0x80026B00: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80026B04: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80026B08: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x80026B0C: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80026B10: lh          $t2, 0x0($t7)
    ctx->r10 = MEM_H(ctx->r15, 0X0);
    // 0x80026B14: nop

    // 0x80026B18: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80026B1C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80026B20: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80026B24: sll         $t5, $t0, 4
    ctx->r13 = S32(ctx->r8 << 4);
    // 0x80026B28: addu        $t4, $t1, $t5
    ctx->r12 = ADD32(ctx->r9, ctx->r13);
    // 0x80026B2C: lh          $t3, 0x2($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X2);
    // 0x80026B30: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80026B34: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80026B38: nop

    // 0x80026B3C: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80026B40: sub.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80026B44: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80026B48: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80026B4C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80026B50: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x80026B54: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80026B58: lh          $t2, 0x4($t7)
    ctx->r10 = MEM_H(ctx->r15, 0X4);
    // 0x80026B5C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80026B60: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80026B64: nop

    // 0x80026B68: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80026B6C: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80026B70: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80026B74: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80026B78: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80026B7C: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x80026B80: addu        $t4, $t0, $t5
    ctx->r12 = ADD32(ctx->r8, ctx->r13);
    // 0x80026B84: lh          $t3, 0x6($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X6);
    // 0x80026B88: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80026B8C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80026B90: nop

    // 0x80026B94: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80026B98: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80026B9C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80026BA0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80026BA4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80026BA8: mul.s       $f18, $f6, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80026BAC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80026BB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80026BB4: lw          $t6, 0x797C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X797C);
    // 0x80026BB8: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80026BBC: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x80026BC0: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80026BC4: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80026BC8: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80026BCC: bgez        $t6, L_80026BE4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80026BD0: cvt.s.w     $f10, $f18
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80026BE4;
    }
    // 0x80026BD0: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80026BD4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80026BD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80026BDC: nop

    // 0x80026BE0: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_80026BE4:
    // 0x80026BE4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80026BE8: nop

    // 0x80026BEC: bc1t        L_80026C20
    if (c1cs) {
        // 0x80026BF0: nop
    
            goto L_80026C20;
    }
    // 0x80026BF0: nop

    // 0x80026BF4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80026BF8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80026BFC: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80026C00: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x80026C04: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x80026C08: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80026C0C: lb          $t7, 0x4D94($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4D94);
    // 0x80026C10: nop

    // 0x80026C14: andi        $t2, $t7, 0x2
    ctx->r10 = ctx->r15 & 0X2;
    // 0x80026C18: beq         $t2, $zero, L_80026D8C
    if (ctx->r10 == 0) {
        // 0x80026C1C: nop
    
            goto L_80026D8C;
    }
    // 0x80026C1C: nop

L_80026C20:
    // 0x80026C20: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80026C24: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026C28: sh          $t1, 0x5108($at)
    MEM_H(0X5108, ctx->r1) = ctx->r9;
    // 0x80026C2C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80026C30: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80026C34: sll         $t4, $t5, 4
    ctx->r12 = S32(ctx->r13 << 4);
    // 0x80026C38: addu        $t3, $t0, $t4
    ctx->r11 = ADD32(ctx->r8, ctx->r12);
    // 0x80026C3C: lh          $t6, 0x2($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X2);
    // 0x80026C40: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026C44: sh          $t6, 0x510A($at)
    MEM_H(0X510A, ctx->r1) = ctx->r14;
    // 0x80026C48: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80026C4C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80026C50: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x80026C54: addu        $t2, $t9, $t7
    ctx->r10 = ADD32(ctx->r25, ctx->r15);
    // 0x80026C58: lh          $t1, 0x4($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X4);
    // 0x80026C5C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026C60: sh          $t1, 0x510C($at)
    MEM_H(0X510C, ctx->r1) = ctx->r9;
    // 0x80026C64: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80026C68: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80026C6C: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x80026C70: addu        $t3, $t5, $t4
    ctx->r11 = ADD32(ctx->r13, ctx->r12);
    // 0x80026C74: lh          $t6, 0x6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X6);
    // 0x80026C78: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026C7C: sh          $t6, 0x510E($at)
    MEM_H(0X510E, ctx->r1) = ctx->r14;
    // 0x80026C80: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80026C84: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80026C88: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x80026C8C: addu        $t2, $t8, $t7
    ctx->r10 = ADD32(ctx->r24, ctx->r15);
    // 0x80026C90: lh          $t1, 0x8($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X8);
    // 0x80026C94: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026C98: sh          $t1, 0x5110($at)
    MEM_H(0X5110, ctx->r1) = ctx->r9;
    // 0x80026C9C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80026CA0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80026CA4: sll         $t4, $t5, 4
    ctx->r12 = S32(ctx->r13 << 4);
    // 0x80026CA8: addu        $t3, $t0, $t4
    ctx->r11 = ADD32(ctx->r8, ctx->r12);
    // 0x80026CAC: lh          $t6, 0xA($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XA);
    // 0x80026CB0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026CB4: sh          $t6, 0x5112($at)
    MEM_H(0X5112, ctx->r1) = ctx->r14;
    // 0x80026CB8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80026CBC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80026CC0: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x80026CC4: addu        $t2, $t9, $t7
    ctx->r10 = ADD32(ctx->r25, ctx->r15);
    // 0x80026CC8: lh          $t1, 0xC($t2)
    ctx->r9 = MEM_H(ctx->r10, 0XC);
    // 0x80026CCC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026CD0: sh          $t1, 0x5114($at)
    MEM_H(0X5114, ctx->r1) = ctx->r9;
    // 0x80026CD4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80026CD8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80026CDC: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x80026CE0: addu        $t3, $t5, $t4
    ctx->r11 = ADD32(ctx->r13, ctx->r12);
    // 0x80026CE4: lh          $t6, 0xE($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XE);
    // 0x80026CE8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026CEC: sh          $t6, 0x5116($at)
    MEM_H(0X5116, ctx->r1) = ctx->r14;
    // 0x80026CF0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80026CF4: addiu       $t8, $t8, 0x5108
    ctx->r24 = ADD32(ctx->r24, 0X5108);
    // 0x80026CF8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026CFC: sw          $t8, 0x5100($at)
    MEM_W(0X5100, ctx->r1) = ctx->r24;
    // 0x80026D00: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80026D04: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026D08: sw          $t9, 0x5198($at)
    MEM_W(0X5198, ctx->r1) = ctx->r25;
    // 0x80026D0C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80026D10: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026D14: sw          $t7, 0x519C($at)
    MEM_W(0X519C, ctx->r1) = ctx->r15;
    // 0x80026D18: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80026D1C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80026D20: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80026D24: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x80026D28: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x80026D2C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80026D30: lw          $t9, 0x4DA4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DA4);
    // 0x80026D34: nop

    // 0x80026D38: jalr        $t9
    // 0x80026D3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x80026D3C: nop

    after_6:
    // 0x80026D40: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80026D44: lw          $t0, 0x5198($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5198);
    // 0x80026D48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80026D4C: beq         $t0, $at, L_80026D8C
    if (ctx->r8 == ctx->r1) {
        // 0x80026D50: nop
    
            goto L_80026D8C;
    }
    // 0x80026D50: nop

    // 0x80026D54: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80026D58: lw          $t4, 0x5198($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5198);
    // 0x80026D5C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80026D60: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80026D64: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80026D68: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80026D6C: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80026D70: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80026D74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80026D78: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80026D7C: sh          $t5, 0x424C($at)
    MEM_H(0X424C, ctx->r1) = ctx->r13;
    // 0x80026D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80026D84: jal         0x8002617C
    // 0x80026D88: nop

    func_8002617C(rdram, ctx);
        goto after_7;
    // 0x80026D88: nop

    after_7:
L_80026D8C:
    // 0x80026D8C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80026D90: nop

    // 0x80026D94: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80026D98: slti        $at, $t8, 0x80
    ctx->r1 = SIGNED(ctx->r24) < 0X80 ? 1 : 0;
    // 0x80026D9C: bne         $at, $zero, L_800269E4
    if (ctx->r1 != 0) {
        // 0x80026DA0: sw          $t8, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r24;
            goto L_800269E4;
    }
    // 0x80026DA0: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x80026DA4: b           L_80026DAC
    // 0x80026DA8: nop

        goto L_80026DAC;
    // 0x80026DA8: nop

L_80026DAC:
    // 0x80026DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80026DB0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80026DB4: jr          $ra
    // 0x80026DB8: nop

    return;
    // 0x80026DB8: nop

;}
RECOMP_FUNC void alHeapInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800326A0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x800326A4: andi        $t6, $a1, 0xF
    ctx->r14 = ctx->r5 & 0XF;
    // 0x800326A8: subu        $v0, $v1, $t6
    ctx->r2 = SUB32(ctx->r3, ctx->r14);
    // 0x800326AC: beq         $v1, $v0, L_800326BC
    if (ctx->r3 == ctx->r2) {
        // 0x800326B0: addu        $t7, $a1, $v0
        ctx->r15 = ADD32(ctx->r5, ctx->r2);
            goto L_800326BC;
    }
    // 0x800326B0: addu        $t7, $a1, $v0
    ctx->r15 = ADD32(ctx->r5, ctx->r2);
    // 0x800326B4: b           L_800326C0
    // 0x800326B8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
        goto L_800326C0;
    // 0x800326B8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
L_800326BC:
    // 0x800326BC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_800326C0:
    // 0x800326C0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x800326C4: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x800326C8: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x800326CC: jr          $ra
    // 0x800326D0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    return;
    // 0x800326D0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void Math_CalcAngleSimple(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800156C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800156C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800156CC: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x800156D0: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x800156D4: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800156D8: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800156DC: jal         0x80014F50
    // 0x800156E0: nop

    Math_Atan2f(rdram, ctx);
        goto after_0;
    // 0x800156E0: nop

    after_0:
    // 0x800156E4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x800156E8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800156EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800156F0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800156F4: nop

    // 0x800156F8: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x800156FC: nop

    // 0x80015700: bc1f        L_80015720
    if (!c1cs) {
        // 0x80015704: nop
    
            goto L_80015720;
    }
    // 0x80015704: nop

    // 0x80015708: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8001570C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80015710: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015714: nop

    // 0x80015718: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8001571C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
L_80015720:
    // 0x80015720: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015724: b           L_80015734
    // 0x80015728: nop

        goto L_80015734;
    // 0x80015728: nop

    // 0x8001572C: b           L_80015734
    // 0x80015730: nop

        goto L_80015734;
    // 0x80015730: nop

L_80015734:
    // 0x80015734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001573C: jr          $ra
    // 0x80015740: nop

    return;
    // 0x80015740: nop

;}
RECOMP_FUNC void func_80025460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025460: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80025464: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80025468: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8002546C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80025470: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80025474: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80025478: bgez        $a1, L_80025488
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8002547C: sra         $t8, $a1, 3
        ctx->r24 = S32(SIGNED(ctx->r5) >> 3);
            goto L_80025488;
    }
    // 0x8002547C: sra         $t8, $a1, 3
    ctx->r24 = S32(SIGNED(ctx->r5) >> 3);
    // 0x80025480: addiu       $at, $a1, 0x7
    ctx->r1 = ADD32(ctx->r5, 0X7);
    // 0x80025484: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_80025488:
    // 0x80025488: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002548C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80025490: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80025494: lbu         $t0, 0x7495($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7495);
    // 0x80025498: nop

    // 0x8002549C: sb          $t0, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r8;
    // 0x800254A0: lbu         $t1, 0x3($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3);
    // 0x800254A4: bgez        $a1, L_800254B8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800254A8: andi        $t2, $a1, 0x7
        ctx->r10 = ctx->r5 & 0X7;
            goto L_800254B8;
    }
    // 0x800254A8: andi        $t2, $a1, 0x7
    ctx->r10 = ctx->r5 & 0X7;
    // 0x800254AC: beq         $t2, $zero, L_800254B8
    if (ctx->r10 == 0) {
        // 0x800254B0: nop
    
            goto L_800254B8;
    }
    // 0x800254B0: nop

    // 0x800254B4: addiu       $t2, $t2, -0x8
    ctx->r10 = ADD32(ctx->r10, -0X8);
L_800254B8:
    // 0x800254B8: srav        $t3, $t1, $t2
    ctx->r11 = S32(SIGNED(ctx->r9) >> (ctx->r10 & 31));
    // 0x800254BC: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x800254C0: beq         $t4, $zero, L_800254D0
    if (ctx->r12 == 0) {
        // 0x800254C4: nop
    
            goto L_800254D0;
    }
    // 0x800254C4: nop

    // 0x800254C8: b           L_800254E0
    // 0x800254CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800254E0;
    // 0x800254CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800254D0:
    // 0x800254D0: b           L_800254E0
    // 0x800254D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800254E0;
    // 0x800254D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800254D8: b           L_800254E0
    // 0x800254DC: nop

        goto L_800254E0;
    // 0x800254DC: nop

L_800254E0:
    // 0x800254E0: jr          $ra
    // 0x800254E4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800254E4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Math_SolvePlaneX(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015C24: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80015C28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80015C2C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80015C30: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80015C34: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x80015C38: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x80015C3C: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80015C40: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80015C44: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80015C48: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80015C4C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80015C50: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80015C54: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80015C58: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80015C5C: bne         $t6, $zero, L_80015C6C
    if (ctx->r14 != 0) {
        // 0x80015C60: nop
    
            goto L_80015C6C;
    }
    // 0x80015C60: nop

    // 0x80015C64: beq         $t7, $zero, L_80015CE8
    if (ctx->r15 == 0) {
        // 0x80015C68: nop
    
            goto L_80015CE8;
    }
    // 0x80015C68: nop

L_80015C6C:
    // 0x80015C6C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80015C70: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80015C74: jal         0x8003687C
    // 0x80015C78: nop

    __ll_to_f_recomp(rdram, ctx);
        goto after_0;
    // 0x80015C78: nop

    after_0:
    // 0x80015C7C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80015C80: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80015C84: jal         0x8003687C
    // 0x80015C88: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    __ll_to_f_recomp(rdram, ctx);
        goto after_1;
    // 0x80015C88: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    after_1:
    // 0x80015C8C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80015C90: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80015C94: nor         $a0, $a0, $zero
    ctx->r4 = ~(ctx->r4 | 0);
    // 0x80015C98: sltiu       $at, $a1, 0x1
    ctx->r1 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80015C9C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80015CA0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80015CA4: jal         0x8003687C
    // 0x80015CA8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    __ll_to_f_recomp(rdram, ctx);
        goto after_2;
    // 0x80015CA8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_2:
    // 0x80015CAC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80015CB0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80015CB4: jal         0x8003687C
    // 0x80015CB8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __ll_to_f_recomp(rdram, ctx);
        goto after_3;
    // 0x80015CB8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_3:
    // 0x80015CBC: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80015CC0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80015CC4: mul.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x80015CC8: nop

    // 0x80015CCC: mul.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x80015CD0: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80015CD4: add.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x80015CD8: nop

    // 0x80015CDC: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80015CE0: b           L_80015CF4
    // 0x80015CE4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
        goto L_80015CF4;
    // 0x80015CE4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
L_80015CE8:
    // 0x80015CE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80015CEC: nop

    // 0x80015CF0: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
L_80015CF4:
    // 0x80015CF4: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80015CF8: b           L_80015D08
    // 0x80015CFC: nop

        goto L_80015D08;
    // 0x80015CFC: nop

    // 0x80015D00: b           L_80015D08
    // 0x80015D04: nop

        goto L_80015D08;
    // 0x80015D04: nop

L_80015D08:
    // 0x80015D08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80015D0C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80015D10: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80015D14: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80015D18: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015D1C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80015D20: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80015D24: jr          $ra
    // 0x80015D28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80015D28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ResetActiveController(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E1C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E1C4: sh          $zero, -0x1C82($at)
    MEM_H(-0X1C82, ctx->r1) = 0;
    // 0x8001E1C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E1CC: sh          $zero, -0x1C7C($at)
    MEM_H(-0X1C7C, ctx->r1) = 0;
    // 0x8001E1D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001E1D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E1D8: swc1        $f4, -0x1C74($at)
    MEM_W(-0X1C74, ctx->r1) = ctx->f4.u32l;
    // 0x8001E1DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001E1E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E1E4: swc1        $f6, -0x1C6C($at)
    MEM_W(-0X1C6C, ctx->r1) = ctx->f6.u32l;
    // 0x8001E1E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E1EC: sh          $zero, -0x1C64($at)
    MEM_H(-0X1C64, ctx->r1) = 0;
    // 0x8001E1F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E1F4: sh          $zero, -0x1C60($at)
    MEM_H(-0X1C60, ctx->r1) = 0;
    // 0x8001E1F8: jr          $ra
    // 0x8001E1FC: nop

    return;
    // 0x8001E1FC: nop

    // 0x8001E200: jr          $ra
    // 0x8001E204: nop

    return;
    // 0x8001E204: nop

;}
RECOMP_FUNC void thread6_func(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001A74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80001A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001A7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80001A80: jal         0x80000924
    // 0x80001A84: nop

    clear_compression_buffer(rdram, ctx);
        goto after_0;
    // 0x80001A84: nop

    after_0:
    // 0x80001A88: jal         0x800007F4
    // 0x80001A8C: nop

    func_800007F4(rdram, ctx);
        goto after_1;
    // 0x80001A8C: nop

    after_1:
    // 0x80001A90: jal         0x80000BE8
    // 0x80001A94: nop

    load_game_section(rdram, ctx);
        goto after_2;
    // 0x80001A94: nop

    after_2:
    // 0x80001A98: jal         0x8001D440
    // 0x80001A9C: nop

    func_8001D440(rdram, ctx);
        goto after_3;
    // 0x80001A9C: nop

    after_3:
    // 0x80001AA0: jal         0x8001DFC8
    // 0x80001AA4: nop

    InitControllers(rdram, ctx);
        goto after_4;
    // 0x80001AA4: nop

    after_4:
    // 0x80001AA8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80001AAC: lw          $t6, -0x5D80($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5D80);
    // 0x80001AB0: nop

    // 0x80001AB4: beq         $t6, $zero, L_80001B04
    if (ctx->r14 == 0) {
        // 0x80001AB8: nop
    
            goto L_80001B04;
    }
    // 0x80001AB8: nop

    // 0x80001ABC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80001AC0: lwc1        $f12, -0x4590($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4590);
    // 0x80001AC4: jal         0x800319F0
    // 0x80001AC8: nop

    osViSetYScale_recomp(rdram, ctx);
        goto after_5;
    // 0x80001AC8: nop

    after_5:
    // 0x80001ACC: lui         $t7, 0x25
    ctx->r15 = S32(0X25 << 16);
    // 0x80001AD0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80001AD4: addiu       $t8, $t8, -0x5890
    ctx->r24 = ADD32(ctx->r24, -0X5890);
    // 0x80001AD8: ori         $t7, $t7, 0x270
    ctx->r15 = ctx->r15 | 0X270;
    // 0x80001ADC: sw          $t7, 0x530($t8)
    MEM_W(0X530, ctx->r24) = ctx->r15;
    // 0x80001AE0: lui         $t9, 0x25
    ctx->r25 = S32(0X25 << 16);
    // 0x80001AE4: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80001AE8: addiu       $t0, $t0, -0x5890
    ctx->r8 = ADD32(ctx->r8, -0X5890);
    // 0x80001AEC: ori         $t9, $t9, 0x270
    ctx->r25 = ctx->r25 | 0X270;
    // 0x80001AF0: sw          $t9, 0x544($t0)
    MEM_W(0X544, ctx->r8) = ctx->r25;
    // 0x80001AF4: lui         $t1, 0x2F5
    ctx->r9 = S32(0X2F5 << 16);
    // 0x80001AF8: ori         $t1, $t1, 0xB2D2
    ctx->r9 = ctx->r9 | 0XB2D2;
    // 0x80001AFC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80001B00: sw          $t1, -0x4B68($at)
    MEM_W(-0X4B68, ctx->r1) = ctx->r9;
L_80001B04:
    // 0x80001B04: jal         0x80025E28
    // 0x80001B08: nop

    func_80025E28(rdram, ctx);
        goto after_6;
    // 0x80001B08: nop

    after_6:
    // 0x80001B0C: jal         0x8001FAD4
    // 0x80001B10: nop

    Init_Pak(rdram, ctx);
        goto after_7;
    // 0x80001B10: nop

    after_7:
    // 0x80001B14: jal         0x8001F9DC
    // 0x80001B18: nop

    Check_PakState(rdram, ctx);
        goto after_8;
    // 0x80001B18: nop

    after_8:
    // 0x80001B1C: jal         0x80016DD4
    // 0x80001B20: nop

    func_80016DD4(rdram, ctx);
        goto after_9;
    // 0x80001B20: nop

    after_9:
    // 0x80001B24: jal         0x80016E84
    // 0x80001B28: nop

    func_80016E84(rdram, ctx);
        goto after_10;
    // 0x80001B28: nop

    after_10:
    // 0x80001B2C: jal         0x8001D1F4
    // 0x80001B30: nop

    func_8001D1F4(rdram, ctx);
        goto after_11;
    // 0x80001B30: nop

    after_11:
    // 0x80001B34: addiu       $t2, $zero, 0x1234
    ctx->r10 = ADD32(0, 0X1234);
    // 0x80001B38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B3C: sh          $t2, -0x1F6E($at)
    MEM_H(-0X1F6E, ctx->r1) = ctx->r10;
    // 0x80001B40: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80001B44: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80001B48: sw          $t3, 0x527C($at)
    MEM_W(0X527C, ctx->r1) = ctx->r11;
    // 0x80001B4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B50: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x80001B54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B58: sw          $zero, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = 0;
    // 0x80001B5C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80001B60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B64: sw          $t4, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = ctx->r12;
    // 0x80001B68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B6C: sb          $zero, -0x1C1C($at)
    MEM_B(-0X1C1C, ctx->r1) = 0;
    // 0x80001B70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B74: sb          $zero, -0x1C09($at)
    MEM_B(-0X1C09, ctx->r1) = 0;
    // 0x80001B78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B7C: sb          $zero, -0x1BFC($at)
    MEM_B(-0X1BFC, ctx->r1) = 0;
    // 0x80001B80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B84: sb          $zero, -0x1BEC($at)
    MEM_B(-0X1BEC, ctx->r1) = 0;
    // 0x80001B88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B8C: sh          $zero, -0x1BE4($at)
    MEM_H(-0X1BE4, ctx->r1) = 0;
    // 0x80001B90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B94: sb          $zero, -0x1C14($at)
    MEM_B(-0X1C14, ctx->r1) = 0;
    // 0x80001B98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001B9C: sb          $zero, -0x1C12($at)
    MEM_B(-0X1C12, ctx->r1) = 0;
    // 0x80001BA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001BA4: sh          $zero, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = 0;
    // 0x80001BA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001BAC: sb          $zero, -0x1BDC($at)
    MEM_B(-0X1BDC, ctx->r1) = 0;
    // 0x80001BB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001BB4: sb          $zero, -0x1C04($at)
    MEM_B(-0X1C04, ctx->r1) = 0;
    // 0x80001BB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001BBC: sb          $zero, -0x1BF4($at)
    MEM_B(-0X1BF4, ctx->r1) = 0;
    // 0x80001BC0: jal         0x80083180
    // 0x80001BC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80083180(rdram, ctx);
        goto after_12;
    // 0x80001BC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
L_80001BC8:
    // 0x80001BC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001BCC: sb          $zero, -0x1C24($at)
    MEM_B(-0X1C24, ctx->r1) = 0;
    // 0x80001BD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001BD4: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x80001BD8: jal         0x800FE898
    // 0x80001BDC: nop

    func_800FE898(rdram, ctx);
        goto after_13;
    // 0x80001BDC: nop

    after_13:
    // 0x80001BE0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80001BE4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80001BE8: nop

    // 0x80001BEC: sltiu       $at, $t5, 0xA
    ctx->r1 = ctx->r13 < 0XA ? 1 : 0;
    // 0x80001BF0: beq         $at, $zero, L_80001CC8
    if (ctx->r1 == 0) {
        // 0x80001BF4: nop
    
            goto L_80001CC8;
    }
    // 0x80001BF4: nop

    // 0x80001BF8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80001BFC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80001C00: addu        $at, $at, $t5
    gpr jr_addend_80001C0C = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80001C04: lw          $t5, -0x458C($at)
    ctx->r13 = ADD32(ctx->r1, -0X458C);
    // 0x80001C08: nop

    // 0x80001C0C: jr          $t5
    // 0x80001C10: nop

    switch (jr_addend_80001C0C >> 2) {
        case 0: goto L_80001C14; break;
        case 1: goto L_80001C3C; break;
        case 2: goto L_80001C54; break;
        case 3: goto L_80001C70; break;
        case 4: goto L_80001C78; break;
        case 5: goto L_80001C80; break;
        case 6: goto L_80001CC8; break;
        case 7: goto L_80001CC8; break;
        case 8: goto L_80001CA0; break;
        case 9: goto L_80001CB8; break;
        default: switch_error(__func__, 0x80001C0C, 0x8004BA74);
    }
    // 0x80001C10: nop

L_80001C14:
    // 0x80001C14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001C18: sw          $zero, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = 0;
    // 0x80001C1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001C20: sb          $zero, -0x1C24($at)
    MEM_B(-0X1C24, ctx->r1) = 0;
    // 0x80001C24: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001C28: lw          $a0, 0x4228($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4228);
    // 0x80001C2C: jal         0x80083180
    // 0x80001C30: nop

    func_80083180(rdram, ctx);
        goto after_14;
    // 0x80001C30: nop

    after_14:
    // 0x80001C34: b           L_80001CD0
    // 0x80001C38: nop

        goto L_80001CD0;
    // 0x80001C38: nop

L_80001C3C:
    // 0x80001C3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001C40: sb          $zero, -0x1C24($at)
    MEM_B(-0X1C24, ctx->r1) = 0;
    // 0x80001C44: jal         0x80083180
    // 0x80001C48: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_80083180(rdram, ctx);
        goto after_15;
    // 0x80001C48: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_15:
    // 0x80001C4C: b           L_80001CD0
    // 0x80001C50: nop

        goto L_80001CD0;
    // 0x80001C50: nop

L_80001C54:
    // 0x80001C54: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80001C58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80001C5C: sb          $t6, -0x1C24($at)
    MEM_B(-0X1C24, ctx->r1) = ctx->r14;
    // 0x80001C60: jal         0x80083180
    // 0x80001C64: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_80083180(rdram, ctx);
        goto after_16;
    // 0x80001C64: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_16:
    // 0x80001C68: b           L_80001CD0
    // 0x80001C6C: nop

        goto L_80001CD0;
    // 0x80001C6C: nop

L_80001C70:
    // 0x80001C70: b           L_80001CD0
    // 0x80001C74: nop

        goto L_80001CD0;
    // 0x80001C74: nop

L_80001C78:
    // 0x80001C78: b           L_80001CD0
    // 0x80001C7C: nop

        goto L_80001CD0;
    // 0x80001C7C: nop

L_80001C80:
    // 0x80001C80: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80001C84: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80001C88: jal         0x80016F38
    // 0x80001C8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_17;
    // 0x80001C8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x80001C90: jal         0x8002F738
    // 0x80001C94: nop

    func_8002F738(rdram, ctx);
        goto after_18;
    // 0x80001C94: nop

    after_18:
    // 0x80001C98: b           L_80001CD0
    // 0x80001C9C: nop

        goto L_80001CD0;
    // 0x80001C9C: nop

L_80001CA0:
    // 0x80001CA0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001CA4: lw          $a0, 0x4224($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4224);
    // 0x80001CA8: jal         0x8005E230
    // 0x80001CAC: nop

    Demo_Start(rdram, ctx);
        goto after_19;
    // 0x80001CAC: nop

    after_19:
    // 0x80001CB0: b           L_80001CD0
    // 0x80001CB4: nop

        goto L_80001CD0;
    // 0x80001CB4: nop

L_80001CB8:
    // 0x80001CB8: jal         0x80021158
    // 0x80001CBC: nop

    func_80021158(rdram, ctx);
        goto after_20;
    // 0x80001CBC: nop

    after_20:
    // 0x80001CC0: b           L_80001CD0
    // 0x80001CC4: nop

        goto L_80001CD0;
    // 0x80001CC4: nop

L_80001CC8:
    // 0x80001CC8: b           L_80001CD0
    // 0x80001CCC: nop

        goto L_80001CD0;
    // 0x80001CCC: nop

L_80001CD0:
    // 0x80001CD0: b           L_80001BC8
    // 0x80001CD4: nop

        goto L_80001BC8;
    // 0x80001CD4: nop

    // 0x80001CD8: b           L_80001CE0
    // 0x80001CDC: nop

        goto L_80001CE0;
    // 0x80001CDC: nop

L_80001CE0:
    // 0x80001CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001CE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80001CE8: jr          $ra
    // 0x80001CEC: nop

    return;
    // 0x80001CEC: nop

;}
RECOMP_FUNC void func_80011EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011EF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80011EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80011EF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80011EFC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80011F00: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80011F04: lw          $t7, 0x64($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X64);
    // 0x80011F08: nop

    // 0x80011F0C: sw          $t7, 0x5D54($at)
    MEM_W(0X5D54, ctx->r1) = ctx->r15;
    // 0x80011F10: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80011F14: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80011F18: lw          $t9, 0x68($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X68);
    // 0x80011F1C: nop

    // 0x80011F20: sw          $t9, 0x5D58($at)
    MEM_W(0X5D58, ctx->r1) = ctx->r25;
    // 0x80011F24: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80011F28: lw          $t0, -0x5C30($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5C30);
    // 0x80011F2C: nop

    // 0x80011F30: beq         $t0, $zero, L_80011F48
    if (ctx->r8 == 0) {
        // 0x80011F34: nop
    
            goto L_80011F48;
    }
    // 0x80011F34: nop

    // 0x80011F38: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80011F3C: lw          $a0, -0x5C30($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5C30);
    // 0x80011F40: jal         0x800309D0
    // 0x80011F44: nop

    free_game(rdram, ctx);
        goto after_0;
    // 0x80011F44: nop

    after_0:
L_80011F48:
    // 0x80011F48: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80011F4C: sw          $zero, -0x5C30($at)
    MEM_W(-0X5C30, ctx->r1) = 0;
    // 0x80011F50: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80011F54: sw          $zero, 0x5D64($at)
    MEM_W(0X5D64, ctx->r1) = 0;
    // 0x80011F58: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80011F5C: lw          $t1, 0x5D58($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5D58);
    // 0x80011F60: nop

    // 0x80011F64: beq         $t1, $zero, L_800120E4
    if (ctx->r9 == 0) {
        // 0x80011F68: nop
    
            goto L_800120E4;
    }
    // 0x80011F68: nop

    // 0x80011F6C: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80011F70: lw          $t2, 0x5D58($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5D58);
    // 0x80011F74: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80011F78: sw          $zero, 0x5D64($at)
    MEM_W(0X5D64, ctx->r1) = 0;
    // 0x80011F7C: blez        $t2, L_80012000
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80011F80: sw          $zero, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = 0;
            goto L_80012000;
    }
    // 0x80011F80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80011F84:
    // 0x80011F84: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80011F88: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80011F8C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80011F90: lw          $t3, 0x5D54($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5D54);
    // 0x80011F94: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80011F98: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80011F9C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80011FA0: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80011FA4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80011FA8: lw          $t8, 0x5D64($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5D64);
    // 0x80011FAC: nop

    // 0x80011FB0: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80011FB4: beq         $at, $zero, L_80011FE4
    if (ctx->r1 == 0) {
        // 0x80011FB8: nop
    
            goto L_80011FE4;
    }
    // 0x80011FB8: nop

    // 0x80011FBC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80011FC0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80011FC4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80011FC8: lw          $t9, 0x5D54($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5D54);
    // 0x80011FCC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80011FD0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80011FD4: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80011FD8: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80011FDC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80011FE0: sw          $t4, 0x5D64($at)
    MEM_W(0X5D64, ctx->r1) = ctx->r12;
L_80011FE4:
    // 0x80011FE4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80011FE8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80011FEC: lw          $t6, 0x5D58($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5D58);
    // 0x80011FF0: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80011FF4: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80011FF8: bne         $at, $zero, L_80011F84
    if (ctx->r1 != 0) {
        // 0x80011FFC: sw          $t5, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r13;
            goto L_80011F84;
    }
    // 0x80011FFC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_80012000:
    // 0x80012000: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80012004: lw          $t7, 0x5D64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5D64);
    // 0x80012008: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001200C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80012010: sw          $t8, 0x5D64($at)
    MEM_W(0X5D64, ctx->r1) = ctx->r24;
    // 0x80012014: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80012018: lw          $a0, 0x5D64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5D64);
    // 0x8001201C: nop

    // 0x80012020: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80012024: jal         0x8002FC34
    // 0x80012028: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    malloc_game(rdram, ctx);
        goto after_1;
    // 0x80012028: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x8001202C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80012030: sw          $v0, -0x5C30($at)
    MEM_W(-0X5C30, ctx->r1) = ctx->r2;
    // 0x80012034: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80012038: lw          $t9, 0x5D64($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5D64);
    // 0x8001203C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80012040: blez        $t9, L_800120E4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80012044: nop
    
            goto L_800120E4;
    }
    // 0x80012044: nop

L_80012048:
    // 0x80012048: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8001204C: lw          $t1, 0x5D58($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5D58);
    // 0x80012050: nop

    // 0x80012054: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80012058: bltz        $t2, L_800120AC
    if (SIGNED(ctx->r10) < 0) {
        // 0x8001205C: sw          $t2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r10;
            goto L_800120AC;
    }
    // 0x8001205C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
L_80012060:
    // 0x80012060: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80012064: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80012068: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8001206C: lw          $t4, 0x5D54($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5D54);
    // 0x80012070: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x80012074: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80012078: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8001207C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80012080: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80012084: nop

    // 0x80012088: bne         $t7, $t8, L_80012098
    if (ctx->r15 != ctx->r24) {
        // 0x8001208C: nop
    
            goto L_80012098;
    }
    // 0x8001208C: nop

    // 0x80012090: b           L_800120AC
    // 0x80012094: nop

        goto L_800120AC;
    // 0x80012094: nop

L_80012098:
    // 0x80012098: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8001209C: nop

    // 0x800120A0: addiu       $t9, $t0, -0x1
    ctx->r25 = ADD32(ctx->r8, -0X1);
    // 0x800120A4: bgez        $t9, L_80012060
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800120A8: sw          $t9, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r25;
            goto L_80012060;
    }
    // 0x800120A8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_800120AC:
    // 0x800120AC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800120B0: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800120B4: lw          $t2, -0x5C30($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5C30);
    // 0x800120B8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800120BC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800120C0: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800120C4: sw          $t1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r9;
    // 0x800120C8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800120CC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800120D0: lw          $t8, 0x5D64($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5D64);
    // 0x800120D4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800120D8: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800120DC: bne         $at, $zero, L_80012048
    if (ctx->r1 != 0) {
        // 0x800120E0: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80012048;
    }
    // 0x800120E0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_800120E4:
    // 0x800120E4: b           L_800120EC
    // 0x800120E8: nop

        goto L_800120EC;
    // 0x800120E8: nop

L_800120EC:
    // 0x800120EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800120F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800120F4: jr          $ra
    // 0x800120F8: nop

    return;
    // 0x800120F8: nop

;}
RECOMP_FUNC void alCSeqTicksToSec(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034440: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80034444: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80034448: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8003444C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80034450: bgez        $a2, L_80034464
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80034454: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80034464;
    }
    // 0x80034454: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80034458: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8003445C: nop

    // 0x80034460: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80034464:
    // 0x80034464: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80034468: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8003446C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80034470: lw          $t7, 0x40($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X40);
    // 0x80034474: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80034478: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8003447C: bgez        $t7, L_80034490
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80034480: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80034490;
    }
    // 0x80034480: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80034484: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80034488: nop

    // 0x8003448C: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_80034490:
    // 0x80034490: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034494: ldc1        $f18, -0x3D28($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3D28);
    // 0x80034498: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x8003449C: mul.d       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x800344A0: div.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x800344A4: jr          $ra
    // 0x800344A8: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    return;
    // 0x800344A8: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
;}
RECOMP_FUNC void func_80024D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024D20: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80024D24: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80024D28: beq         $at, $zero, L_80024D4C
    if (ctx->r1 == 0) {
        // 0x80024D2C: nop
    
            goto L_80024D4C;
    }
    // 0x80024D2C: nop

    // 0x80024D30: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80024D34: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80024D38: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80024D3C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80024D40: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80024D44: b           L_80024D64
    // 0x80024D48: sb          $a1, 0x74BF($at)
    MEM_B(0X74BF, ctx->r1) = ctx->r5;
        goto L_80024D64;
    // 0x80024D48: sb          $a1, 0x74BF($at)
    MEM_B(0X74BF, ctx->r1) = ctx->r5;
L_80024D4C:
    // 0x80024D4C: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x80024D50: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80024D54: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80024D58: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80024D5C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80024D60: sb          $a1, 0x7467($at)
    MEM_B(0X7467, ctx->r1) = ctx->r5;
L_80024D64:
    // 0x80024D64: jr          $ra
    // 0x80024D68: nop

    return;
    // 0x80024D68: nop

    // 0x80024D6C: jr          $ra
    // 0x80024D70: nop

    return;
    // 0x80024D70: nop

;}
RECOMP_FUNC void func_800260FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800260FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80026100: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80026104: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80026108: lbu         $t6, 0x5118($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5118);
    // 0x8002610C: nop

    // 0x80026110: andi        $t7, $t6, 0xFC
    ctx->r15 = ctx->r14 & 0XFC;
    // 0x80026114: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
    // 0x80026118: lbu         $t8, 0x7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X7);
    // 0x8002611C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026120: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80026124: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x80026128: sb          $t9, 0x5118($at)
    MEM_B(0X5118, ctx->r1) = ctx->r25;
    // 0x8002612C: b           L_80026134
    // 0x80026130: nop

        goto L_80026134;
    // 0x80026130: nop

L_80026134:
    // 0x80026134: jr          $ra
    // 0x80026138: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80026138: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800022A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800022A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800022A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800022A8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800022AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800022B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800022B4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800022B8: nop

    // 0x800022BC: lw          $t7, 0x274($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X274);
    // 0x800022C0: nop

    // 0x800022C4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x800022C8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800022CC: nop

    // 0x800022D0: sw          $zero, 0x274($t8)
    MEM_W(0X274, ctx->r24) = 0;
    // 0x800022D4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800022D8: nop

    // 0x800022DC: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x800022E0: nop

    // 0x800022E4: andi        $t1, $t0, 0x10
    ctx->r9 = ctx->r8 & 0X10;
    // 0x800022E8: beq         $t1, $zero, L_80002388
    if (ctx->r9 == 0) {
        // 0x800022EC: nop
    
            goto L_80002388;
    }
    // 0x800022EC: nop

    // 0x800022F0: jal         0x80032160
    // 0x800022F4: addiu       $a0, $t9, 0x10
    ctx->r4 = ADD32(ctx->r25, 0X10);
    osSpTaskYielded_recomp(rdram, ctx);
        goto after_0;
    // 0x800022F4: addiu       $a0, $t9, 0x10
    ctx->r4 = ADD32(ctx->r25, 0X10);
    after_0:
    // 0x800022F8: beq         $v0, $zero, L_80002388
    if (ctx->r2 == 0) {
        // 0x800022FC: nop
    
            goto L_80002388;
    }
    // 0x800022FC: nop

    // 0x80002300: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80002304: nop

    // 0x80002308: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8000230C: nop

    // 0x80002310: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x80002314: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x80002318: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8000231C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80002320: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x80002324: nop

    // 0x80002328: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x8000232C: bne         $t7, $at, L_80002380
    if (ctx->r15 != ctx->r1) {
        // 0x80002330: nop
    
            goto L_80002380;
    }
    // 0x80002330: nop

    // 0x80002334: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80002338: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8000233C: lw          $t0, 0x268($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X268);
    // 0x80002340: nop

    // 0x80002344: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80002348: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8000234C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80002350: nop

    // 0x80002354: sw          $t9, 0x268($t3)
    MEM_W(0X268, ctx->r11) = ctx->r25;
    // 0x80002358: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8000235C: nop

    // 0x80002360: lw          $t2, 0x270($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X270);
    // 0x80002364: nop

    // 0x80002368: bne         $t2, $zero, L_80002380
    if (ctx->r10 != 0) {
        // 0x8000236C: nop
    
            goto L_80002380;
    }
    // 0x8000236C: nop

    // 0x80002370: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80002374: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80002378: nop

    // 0x8000237C: sw          $t5, 0x270($t6)
    MEM_W(0X270, ctx->r14) = ctx->r13;
L_80002380:
    // 0x80002380: b           L_800023B0
    // 0x80002384: nop

        goto L_800023B0;
    // 0x80002384: nop

L_80002388:
    // 0x80002388: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8000238C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80002390: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80002394: nop

    // 0x80002398: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x8000239C: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x800023A0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800023A4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800023A8: jal         0x80002574
    // 0x800023AC: nop

    func_80002574(rdram, ctx);
        goto after_1;
    // 0x800023AC: nop

    after_1:
L_800023B0:
    // 0x800023B0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800023B4: nop

    // 0x800023B8: lw          $t9, 0x274($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X274);
    // 0x800023BC: lw          $t2, 0x278($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X278);
    // 0x800023C0: sltiu       $t3, $t9, 0x1
    ctx->r11 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x800023C4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800023C8: sltiu       $t5, $t2, 0x1
    ctx->r13 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x800023CC: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x800023D0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800023D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800023D8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800023DC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800023E0: jal         0x80002890
    // 0x800023E4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_80002890(rdram, ctx);
        goto after_2;
    // 0x800023E4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x800023E8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800023EC: nop

    // 0x800023F0: beq         $v0, $t8, L_8000240C
    if (ctx->r2 == ctx->r24) {
        // 0x800023F4: nop
    
            goto L_8000240C;
    }
    // 0x800023F4: nop

    // 0x800023F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800023FC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80002400: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80002404: jal         0x800026F4
    // 0x80002408: nop

    func_800026F4(rdram, ctx);
        goto after_3;
    // 0x80002408: nop

    after_3:
L_8000240C:
    // 0x8000240C: b           L_80002414
    // 0x80002410: nop

        goto L_80002414;
    // 0x80002410: nop

L_80002414:
    // 0x80002414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002418: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000241C: jr          $ra
    // 0x80002420: nop

    return;
    // 0x80002420: nop

;}
RECOMP_FUNC void func_800032E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800032E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800032EC: b           L_800032FC
    // 0x800032F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800032FC;
    // 0x800032F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800032F4: b           L_800032FC
    // 0x800032F8: nop

        goto L_800032FC;
    // 0x800032F8: nop

L_800032FC:
    // 0x800032FC: jr          $ra
    // 0x80003300: nop

    return;
    // 0x80003300: nop

;}
RECOMP_FUNC void func_8001F38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F38C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001F390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F394: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8001F398: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8001F39C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8001F3A0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8001F3A4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8001F3A8: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001F3AC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001F3B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F3B4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8001F3B8: jal         0x80038690
    // 0x8001F3BC: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    osPfsFreeBlocks_recomp(rdram, ctx);
        goto after_0;
    // 0x8001F3BC: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    after_0:
    // 0x8001F3C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8001F3C4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F3C8: nop

    // 0x8001F3CC: bne         $t9, $zero, L_8001F408
    if (ctx->r25 != 0) {
        // 0x8001F3D0: nop
    
            goto L_8001F408;
    }
    // 0x8001F3D0: nop

    // 0x8001F3D4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8001F3D8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8001F3DC: lw          $t1, 0x210($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X210);
    // 0x8001F3E0: nop

    // 0x8001F3E4: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8001F3E8: nop

    // 0x8001F3EC: sltu        $at, $t3, $t2
    ctx->r1 = ctx->r11 < ctx->r10 ? 1 : 0;
    // 0x8001F3F0: beq         $at, $zero, L_8001F400
    if (ctx->r1 == 0) {
        // 0x8001F3F4: nop
    
            goto L_8001F400;
    }
    // 0x8001F3F4: nop

    // 0x8001F3F8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8001F3FC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_8001F400:
    // 0x8001F400: b           L_8001F410
    // 0x8001F404: nop

        goto L_8001F410;
    // 0x8001F404: nop

L_8001F408:
    // 0x8001F408: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8001F40C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_8001F410:
    // 0x8001F410: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8001F414: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8001F418: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x8001F41C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8001F420: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F424: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8001F428: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8001F42C: jal         0x800387E0
    // 0x8001F430: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    osPfsNumFiles_recomp(rdram, ctx);
        goto after_1;
    // 0x8001F430: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_1:
    // 0x8001F434: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8001F438: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F43C: nop

    // 0x8001F440: bne         $t9, $zero, L_8001F46C
    if (ctx->r25 != 0) {
        // 0x8001F444: nop
    
            goto L_8001F46C;
    }
    // 0x8001F444: nop

    // 0x8001F448: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001F44C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8001F450: nop

    // 0x8001F454: bne         $t0, $t1, L_8001F464
    if (ctx->r8 != ctx->r9) {
        // 0x8001F458: nop
    
            goto L_8001F464;
    }
    // 0x8001F458: nop

    // 0x8001F45C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8001F460: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_8001F464:
    // 0x8001F464: b           L_8001F474
    // 0x8001F468: nop

        goto L_8001F474;
    // 0x8001F468: nop

L_8001F46C:
    // 0x8001F46C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8001F470: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_8001F474:
    // 0x8001F474: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8001F478: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8001F47C: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8001F480: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001F484: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F488: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001F48C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8001F490: sw          $t4, 0x6C($t8)
    MEM_W(0X6C, ctx->r24) = ctx->r12;
    // 0x8001F494: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F498: b           L_8001F4A8
    // 0x8001F49C: nop

        goto L_8001F4A8;
    // 0x8001F49C: nop

    // 0x8001F4A0: b           L_8001F4A8
    // 0x8001F4A4: nop

        goto L_8001F4A8;
    // 0x8001F4A4: nop

L_8001F4A8:
    // 0x8001F4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F4AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8001F4B0: jr          $ra
    // 0x8001F4B4: nop

    return;
    // 0x8001F4B4: nop

;}
RECOMP_FUNC void Debug_ShockTest(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020C44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80020C48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80020C4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80020C50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80020C54: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x80020C58: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80020C5C: nop

    // 0x80020C60: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x80020C64: beq         $t8, $zero, L_80020C74
    if (ctx->r24 == 0) {
        // 0x80020C68: nop
    
            goto L_80020C74;
    }
    // 0x80020C68: nop

    // 0x80020C6C: jal         0x8001D2C0
    // 0x80020C70: nop

    func_8001D2C0(rdram, ctx);
        goto after_0;
    // 0x80020C70: nop

    after_0:
L_80020C74:
    // 0x80020C74: jal         0x8001D1D4
    // 0x80020C78: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x80020C78: nop

    after_1:
    // 0x80020C7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80020C80: bne         $v0, $at, L_80020C90
    if (ctx->r2 != ctx->r1) {
        // 0x80020C84: nop
    
            goto L_80020C90;
    }
    // 0x80020C84: nop

    // 0x80020C88: b           L_80020F08
    // 0x80020C8C: nop

        goto L_80020F08;
    // 0x80020C8C: nop

L_80020C90:
    // 0x80020C90: jal         0x8001D1D4
    // 0x80020C94: nop

    func_8001D1D4(rdram, ctx);
        goto after_2;
    // 0x80020C94: nop

    after_2:
    // 0x80020C98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80020C9C: bne         $v0, $at, L_80020CB0
    if (ctx->r2 != ctx->r1) {
        // 0x80020CA0: nop
    
            goto L_80020CB0;
    }
    // 0x80020CA0: nop

    // 0x80020CA4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80020CA8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80020CAC: sw          $t9, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r25;
L_80020CB0:
    // 0x80020CB0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80020CB4: addiu       $t0, $t0, -0x1D10
    ctx->r8 = ADD32(ctx->r8, -0X1D10);
    // 0x80020CB8: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80020CBC: nop

    // 0x80020CC0: andi        $t2, $t1, 0x800
    ctx->r10 = ctx->r9 & 0X800;
    // 0x80020CC4: beq         $t2, $zero, L_80020CF8
    if (ctx->r10 == 0) {
        // 0x80020CC8: nop
    
            goto L_80020CF8;
    }
    // 0x80020CC8: nop

    // 0x80020CCC: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80020CD0: lw          $t3, -0x59C4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X59C4);
    // 0x80020CD4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020CD8: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80020CDC: bgez        $t4, L_80020CF0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80020CE0: sw          $t4, -0x59C4($at)
        MEM_W(-0X59C4, ctx->r1) = ctx->r12;
            goto L_80020CF0;
    }
    // 0x80020CE0: sw          $t4, -0x59C4($at)
    MEM_W(-0X59C4, ctx->r1) = ctx->r12;
    // 0x80020CE4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80020CE8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020CEC: sw          $t5, -0x59C4($at)
    MEM_W(-0X59C4, ctx->r1) = ctx->r13;
L_80020CF0:
    // 0x80020CF0: b           L_80020D3C
    // 0x80020CF4: nop

        goto L_80020D3C;
    // 0x80020CF4: nop

L_80020CF8:
    // 0x80020CF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80020CFC: addiu       $t6, $t6, -0x1D10
    ctx->r14 = ADD32(ctx->r14, -0X1D10);
    // 0x80020D00: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80020D04: nop

    // 0x80020D08: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x80020D0C: beq         $t8, $zero, L_80020D3C
    if (ctx->r24 == 0) {
        // 0x80020D10: nop
    
            goto L_80020D3C;
    }
    // 0x80020D10: nop

    // 0x80020D14: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80020D18: lw          $t9, -0x59C4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X59C4);
    // 0x80020D1C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020D20: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80020D24: sw          $t0, -0x59C4($at)
    MEM_W(-0X59C4, ctx->r1) = ctx->r8;
    // 0x80020D28: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80020D2C: bne         $at, $zero, L_80020D3C
    if (ctx->r1 != 0) {
        // 0x80020D30: nop
    
            goto L_80020D3C;
    }
    // 0x80020D30: nop

    // 0x80020D34: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020D38: sw          $zero, -0x59C4($at)
    MEM_W(-0X59C4, ctx->r1) = 0;
L_80020D3C:
    // 0x80020D3C: lui         $s0, 0x8005
    ctx->r16 = S32(0X8005 << 16);
    // 0x80020D40: lw          $s0, -0x59C4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X59C4);
    // 0x80020D44: nop

    // 0x80020D48: beq         $s0, $zero, L_80020D70
    if (ctx->r16 == 0) {
        // 0x80020D4C: nop
    
            goto L_80020D70;
    }
    // 0x80020D4C: nop

    // 0x80020D50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80020D54: beq         $s0, $at, L_80020DDC
    if (ctx->r16 == ctx->r1) {
        // 0x80020D58: nop
    
            goto L_80020DDC;
    }
    // 0x80020D58: nop

    // 0x80020D5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80020D60: beq         $s0, $at, L_80020E48
    if (ctx->r16 == ctx->r1) {
        // 0x80020D64: nop
    
            goto L_80020E48;
    }
    // 0x80020D64: nop

    // 0x80020D68: b           L_80020EB4
    // 0x80020D6C: nop

        goto L_80020EB4;
    // 0x80020D6C: nop

L_80020D70:
    // 0x80020D70: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80020D74: addiu       $t1, $t1, -0x1D10
    ctx->r9 = ADD32(ctx->r9, -0X1D10);
    // 0x80020D78: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80020D7C: nop

    // 0x80020D80: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x80020D84: beq         $t3, $zero, L_80020DA4
    if (ctx->r11 == 0) {
        // 0x80020D88: nop
    
            goto L_80020DA4;
    }
    // 0x80020D88: nop

    // 0x80020D8C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80020D90: lw          $t4, -0x59D0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X59D0);
    // 0x80020D94: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020D98: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80020D9C: b           L_80020DD4
    // 0x80020DA0: sw          $t5, -0x59D0($at)
    MEM_W(-0X59D0, ctx->r1) = ctx->r13;
        goto L_80020DD4;
    // 0x80020DA0: sw          $t5, -0x59D0($at)
    MEM_W(-0X59D0, ctx->r1) = ctx->r13;
L_80020DA4:
    // 0x80020DA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80020DA8: addiu       $t6, $t6, -0x1D10
    ctx->r14 = ADD32(ctx->r14, -0X1D10);
    // 0x80020DAC: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80020DB0: nop

    // 0x80020DB4: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x80020DB8: beq         $t8, $zero, L_80020DD4
    if (ctx->r24 == 0) {
        // 0x80020DBC: nop
    
            goto L_80020DD4;
    }
    // 0x80020DBC: nop

    // 0x80020DC0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80020DC4: lw          $t9, -0x59D0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X59D0);
    // 0x80020DC8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020DCC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80020DD0: sw          $t0, -0x59D0($at)
    MEM_W(-0X59D0, ctx->r1) = ctx->r8;
L_80020DD4:
    // 0x80020DD4: b           L_80020EB4
    // 0x80020DD8: nop

        goto L_80020EB4;
    // 0x80020DD8: nop

L_80020DDC:
    // 0x80020DDC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80020DE0: addiu       $t1, $t1, -0x1D10
    ctx->r9 = ADD32(ctx->r9, -0X1D10);
    // 0x80020DE4: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80020DE8: nop

    // 0x80020DEC: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x80020DF0: beq         $t3, $zero, L_80020E10
    if (ctx->r11 == 0) {
        // 0x80020DF4: nop
    
            goto L_80020E10;
    }
    // 0x80020DF4: nop

    // 0x80020DF8: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80020DFC: lw          $t4, -0x59CC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X59CC);
    // 0x80020E00: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020E04: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80020E08: b           L_80020E40
    // 0x80020E0C: sw          $t5, -0x59CC($at)
    MEM_W(-0X59CC, ctx->r1) = ctx->r13;
        goto L_80020E40;
    // 0x80020E0C: sw          $t5, -0x59CC($at)
    MEM_W(-0X59CC, ctx->r1) = ctx->r13;
L_80020E10:
    // 0x80020E10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80020E14: addiu       $t6, $t6, -0x1D10
    ctx->r14 = ADD32(ctx->r14, -0X1D10);
    // 0x80020E18: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80020E1C: nop

    // 0x80020E20: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x80020E24: beq         $t8, $zero, L_80020E40
    if (ctx->r24 == 0) {
        // 0x80020E28: nop
    
            goto L_80020E40;
    }
    // 0x80020E28: nop

    // 0x80020E2C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80020E30: lw          $t9, -0x59CC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X59CC);
    // 0x80020E34: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020E38: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80020E3C: sw          $t0, -0x59CC($at)
    MEM_W(-0X59CC, ctx->r1) = ctx->r8;
L_80020E40:
    // 0x80020E40: b           L_80020EB4
    // 0x80020E44: nop

        goto L_80020EB4;
    // 0x80020E44: nop

L_80020E48:
    // 0x80020E48: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80020E4C: addiu       $t1, $t1, -0x1D10
    ctx->r9 = ADD32(ctx->r9, -0X1D10);
    // 0x80020E50: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80020E54: nop

    // 0x80020E58: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x80020E5C: beq         $t3, $zero, L_80020E7C
    if (ctx->r11 == 0) {
        // 0x80020E60: nop
    
            goto L_80020E7C;
    }
    // 0x80020E60: nop

    // 0x80020E64: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80020E68: lw          $t4, -0x59C8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X59C8);
    // 0x80020E6C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020E70: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80020E74: b           L_80020EAC
    // 0x80020E78: sw          $t5, -0x59C8($at)
    MEM_W(-0X59C8, ctx->r1) = ctx->r13;
        goto L_80020EAC;
    // 0x80020E78: sw          $t5, -0x59C8($at)
    MEM_W(-0X59C8, ctx->r1) = ctx->r13;
L_80020E7C:
    // 0x80020E7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80020E80: addiu       $t6, $t6, -0x1D10
    ctx->r14 = ADD32(ctx->r14, -0X1D10);
    // 0x80020E84: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80020E88: nop

    // 0x80020E8C: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x80020E90: beq         $t8, $zero, L_80020EAC
    if (ctx->r24 == 0) {
        // 0x80020E94: nop
    
            goto L_80020EAC;
    }
    // 0x80020E94: nop

    // 0x80020E98: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80020E9C: lw          $t9, -0x59C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X59C8);
    // 0x80020EA0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020EA4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80020EA8: sw          $t0, -0x59C8($at)
    MEM_W(-0X59C8, ctx->r1) = ctx->r8;
L_80020EAC:
    // 0x80020EAC: b           L_80020EB4
    // 0x80020EB0: nop

        goto L_80020EB4;
    // 0x80020EB0: nop

L_80020EB4:
    // 0x80020EB4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80020EB8: addiu       $t1, $t1, -0x1D50
    ctx->r9 = ADD32(ctx->r9, -0X1D50);
    // 0x80020EBC: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80020EC0: nop

    // 0x80020EC4: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x80020EC8: beq         $t3, $zero, L_80020EF0
    if (ctx->r11 == 0) {
        // 0x80020ECC: nop
    
            goto L_80020EF0;
    }
    // 0x80020ECC: nop

    // 0x80020ED0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80020ED4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020ED8: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x80020EDC: lw          $a2, -0x59C8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X59C8);
    // 0x80020EE0: lw          $a1, -0x59CC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X59CC);
    // 0x80020EE4: lw          $a0, -0x59D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X59D0);
    // 0x80020EE8: jal         0x8001FB3C
    // 0x80020EEC: nop

    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x80020EEC: nop

    after_3:
L_80020EF0:
    // 0x80020EF0: jal         0x8001FBAC
    // 0x80020EF4: nop

    func_8001FBAC(rdram, ctx);
        goto after_4;
    // 0x80020EF4: nop

    after_4:
    // 0x80020EF8: jal         0x8001994C
    // 0x80020EFC: nop

    func_8001994C(rdram, ctx);
        goto after_5;
    // 0x80020EFC: nop

    after_5:
    // 0x80020F00: b           L_80020F08
    // 0x80020F04: nop

        goto L_80020F08;
    // 0x80020F04: nop

L_80020F08:
    // 0x80020F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80020F0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80020F10: jr          $ra
    // 0x80020F14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80020F14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8001D440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D448: lui         $t7, 0x8034
    ctx->r15 = S32(0X8034 << 16);
    // 0x8001D44C: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8001D450: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8001D454: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8001D458: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8001D45C: sh          $t6, -0x7EB8($at)
    MEM_H(-0X7EB8, ctx->r1) = ctx->r14;
    // 0x8001D460: lui         $t9, 0x8034
    ctx->r25 = S32(0X8034 << 16);
    // 0x8001D464: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8001D468: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x8001D46C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8001D470: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001D474: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8001D478: sw          $t8, -0x7E98($at)
    MEM_W(-0X7E98, ctx->r1) = ctx->r24;
    // 0x8001D47C: lui         $t1, 0x8034
    ctx->r9 = S32(0X8034 << 16);
    // 0x8001D480: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8001D484: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8001D488: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8001D48C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8001D490: sh          $t0, 0x2B8($at)
    MEM_H(0X2B8, ctx->r1) = ctx->r8;
    // 0x8001D494: lui         $t3, 0x8034
    ctx->r11 = S32(0X8034 << 16);
    // 0x8001D498: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x8001D49C: lui         $t2, 0x8022
    ctx->r10 = S32(0X8022 << 16);
    // 0x8001D4A0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8001D4A4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001D4A8: addiu       $t2, $t2, 0x5800
    ctx->r10 = ADD32(ctx->r10, 0X5800);
    // 0x8001D4AC: sw          $t2, 0x2D8($at)
    MEM_W(0X2D8, ctx->r1) = ctx->r10;
    // 0x8001D4B0: jal         0x80037530
    // 0x8001D4B4: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x8001D4B4: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_0:
    // 0x8001D4B8: b           L_8001D4C0
    // 0x8001D4BC: nop

        goto L_8001D4C0;
    // 0x8001D4BC: nop

L_8001D4C0:
    // 0x8001D4C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D4C8: jr          $ra
    // 0x8001D4CC: nop

    return;
    // 0x8001D4CC: nop

;}
RECOMP_FUNC void guNormalize(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80042544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042548: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004254C: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80042550: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80042554: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80042558: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004255C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80042560: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80042564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80042568: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8004256C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80042570: jal         0x800366E0
    // 0x80042574: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x80042574: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_0:
    // 0x80042578: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004257C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80042580: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80042584: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80042588: div.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8004258C: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80042590: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80042594: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80042598: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8004259C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800425A0: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800425A4: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x800425A8: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800425AC: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x800425B0: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
    // 0x800425B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800425B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800425BC: jr          $ra
    // 0x800425C0: nop

    return;
    // 0x800425C0: nop

;}
RECOMP_FUNC void func_80009B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009B4C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80009B50: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80009B54: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80009B58: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80009B5C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80009B60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80009B64: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80009B68: lw          $t7, 0x2D84($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D84);
    // 0x80009B6C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80009B70: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80009B74: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80009B78: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80009B7C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80009B80: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80009B84: sh          $t9, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r25;
    // 0x80009B88: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80009B8C: nop

    // 0x80009B90: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80009B94: b           L_80009B9C
    // 0x80009B98: nop

        goto L_80009B9C;
    // 0x80009B98: nop

L_80009B9C:
    // 0x80009B9C: jr          $ra
    // 0x80009BA0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80009BA0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void _Printf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041EF0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x80041EF4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80041EF8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80041EFC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80041F00: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80041F04: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80041F08: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80041F0C: sw          $a3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r7;
    // 0x80041F10: lui         $s5, 0x8005
    ctx->r21 = S32(0X8005 << 16);
    // 0x80041F14: lui         $s6, 0x8005
    ctx->r22 = S32(0X8005 << 16);
    // 0x80041F18: lui         $s7, 0x8005
    ctx->r23 = S32(0X8005 << 16);
    // 0x80041F1C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80041F20: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80041F24: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80041F28: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80041F2C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80041F30: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80041F34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80041F38: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x80041F3C: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x80041F40: addiu       $s7, $s7, -0x4710
    ctx->r23 = ADD32(ctx->r23, -0X4710);
    // 0x80041F44: addiu       $s6, $s6, -0x386C
    ctx->r22 = ADD32(ctx->r22, -0X386C);
    // 0x80041F48: addiu       $s5, $s5, -0x46EC
    ctx->r21 = ADD32(ctx->r21, -0X46EC);
    // 0x80041F4C: addiu       $fp, $zero, 0xA
    ctx->r30 = ADD32(0, 0XA);
L_80041F50:
    // 0x80041F50: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x80041F54: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80041F58: addiu       $v1, $zero, 0x25
    ctx->r3 = ADD32(0, 0X25);
    // 0x80041F5C: beq         $v0, $zero, L_80041F84
    if (ctx->r2 == 0) {
        // 0x80041F60: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80041F84;
    }
    // 0x80041F60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80041F64: beql        $v1, $v0, L_80041F88
    if (ctx->r3 == ctx->r2) {
        // 0x80041F68: subu        $v0, $s2, $a3
        ctx->r2 = SUB32(ctx->r18, ctx->r7);
            goto L_80041F88;
    }
    goto skip_0;
    // 0x80041F68: subu        $v0, $s2, $a3
    ctx->r2 = SUB32(ctx->r18, ctx->r7);
    skip_0:
    // 0x80041F6C: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
L_80041F70:
    // 0x80041F70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80041F74: beq         $v0, $zero, L_80041F84
    if (ctx->r2 == 0) {
        // 0x80041F78: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80041F84;
    }
    // 0x80041F78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80041F7C: bnel        $v1, $v0, L_80041F70
    if (ctx->r3 != ctx->r2) {
        // 0x80041F80: lbu         $v0, 0x1($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X1);
            goto L_80041F70;
    }
    goto skip_1;
    // 0x80041F80: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    skip_1:
L_80041F84:
    // 0x80041F84: subu        $v0, $s2, $a3
    ctx->r2 = SUB32(ctx->r18, ctx->r7);
L_80041F88:
    // 0x80041F88: blez        $v0, L_80041FC0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80041F8C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80041FC0;
    }
    // 0x80041F8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80041F90: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80041F94: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80041F98: jalr        $s4
    // 0x80041F9C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_0;
    // 0x80041F9C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_0:
    // 0x80041FA0: beq         $v0, $zero, L_80041FB8
    if (ctx->r2 == 0) {
        // 0x80041FA4: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80041FB8;
    }
    // 0x80041FA4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80041FA8: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80041FAC: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x80041FB0: b           L_80041FC0
    // 0x80041FB4: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
        goto L_80041FC0;
    // 0x80041FB4: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
L_80041FB8:
    // 0x80041FB8: b           L_80042508
    // 0x80041FBC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80042508;
    // 0x80041FBC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80041FC0:
    // 0x80041FC0: bne         $s0, $zero, L_80041FD0
    if (ctx->r16 != 0) {
        // 0x80041FC4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80041FD0;
    }
    // 0x80041FC4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80041FC8: b           L_80042508
    // 0x80041FCC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80042508;
    // 0x80041FCC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80041FD0:
    // 0x80041FD0: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x80041FD4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x80041FD8: jal         0x8003A894
    // 0x80041FDC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    strchr_recomp(rdram, ctx);
        goto after_1;
    // 0x80041FDC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_1:
    // 0x80041FE0: beq         $v0, $zero, L_80042020
    if (ctx->r2 == 0) {
        // 0x80041FE4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80042020;
    }
    // 0x80041FE4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80041FE8:
    // 0x80041FE8: subu        $t9, $s0, $s6
    ctx->r25 = SUB32(ctx->r16, ctx->r22);
    // 0x80041FEC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80041FF0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80041FF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80041FF8: lw          $t7, -0x3864($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3864);
    // 0x80041FFC: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x80042000: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80042004: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80042008: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8004200C: sw          $t9, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r25;
    // 0x80042010: jal         0x8003A894
    // 0x80042014: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    strchr_recomp(rdram, ctx);
        goto after_2;
    // 0x80042014: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    after_2:
    // 0x80042018: bne         $v0, $zero, L_80041FE8
    if (ctx->r2 != 0) {
        // 0x8004201C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80041FE8;
    }
    // 0x8004201C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80042020:
    // 0x80042020: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x80042024: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80042028: lw          $t8, 0xE4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE4);
    // 0x8004202C: bne         $v0, $t6, L_80042074
    if (ctx->r2 != ctx->r14) {
        // 0x80042030: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80042074;
    }
    // 0x80042030: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80042034: addiu       $t7, $t8, 0x3
    ctx->r15 = ADD32(ctx->r24, 0X3);
    // 0x80042038: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8004203C: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x80042040: addiu       $t6, $t9, 0x4
    ctx->r14 = ADD32(ctx->r25, 0X4);
    // 0x80042044: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x80042048: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x8004204C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80042050: bgez        $t8, L_8004206C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80042054: sw          $t8, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = ctx->r24;
            goto L_8004206C;
    }
    // 0x80042054: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x80042058: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x8004205C: negu        $t7, $t8
    ctx->r15 = SUB32(0, ctx->r24);
    // 0x80042060: sw          $t7, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r15;
    // 0x80042064: ori         $t9, $t6, 0x4
    ctx->r25 = ctx->r14 | 0X4;
    // 0x80042068: sw          $t9, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r25;
L_8004206C:
    // 0x8004206C: b           L_800420D0
    // 0x80042070: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_800420D0;
    // 0x80042070: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_80042074:
    // 0x80042074: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    // 0x80042078: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x8004207C: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x80042080: bne         $at, $zero, L_800420D0
    if (ctx->r1 != 0) {
        // 0x80042084: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_800420D0;
    }
    // 0x80042084: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80042088: beql        $at, $zero, L_800420D4
    if (ctx->r1 == 0) {
        // 0x8004208C: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_800420D4;
    }
    goto skip_2;
    // 0x8004208C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    skip_2:
    // 0x80042090: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
L_80042094:
    // 0x80042094: slti        $at, $t8, 0x3E7
    ctx->r1 = SIGNED(ctx->r24) < 0X3E7 ? 1 : 0;
    // 0x80042098: beql        $at, $zero, L_800420B8
    if (ctx->r1 == 0) {
        // 0x8004209C: lbu         $a1, 0x1($s2)
        ctx->r5 = MEM_BU(ctx->r18, 0X1);
            goto L_800420B8;
    }
    goto skip_3;
    // 0x8004209C: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    skip_3:
    // 0x800420A0: multu       $t8, $fp
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800420A4: mflo        $t7
    ctx->r15 = lo;
    // 0x800420A8: addu        $t6, $a1, $t7
    ctx->r14 = ADD32(ctx->r5, ctx->r15);
    // 0x800420AC: addiu       $t9, $t6, -0x30
    ctx->r25 = ADD32(ctx->r14, -0X30);
    // 0x800420B0: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x800420B4: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
L_800420B8:
    // 0x800420B8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800420BC: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x800420C0: bne         $at, $zero, L_800420D0
    if (ctx->r1 != 0) {
        // 0x800420C4: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_800420D0;
    }
    // 0x800420C4: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x800420C8: bnel        $at, $zero, L_80042094
    if (ctx->r1 != 0) {
        // 0x800420CC: lw          $t8, 0xC8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XC8);
            goto L_80042094;
    }
    goto skip_4;
    // 0x800420CC: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    skip_4:
L_800420D0:
    // 0x800420D0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
L_800420D4:
    // 0x800420D4: beq         $a1, $at, L_800420E8
    if (ctx->r5 == ctx->r1) {
        // 0x800420D8: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_800420E8;
    }
    // 0x800420D8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800420DC: sw          $t8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r24;
    // 0x800420E0: b           L_8004217C
    // 0x800420E4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_8004217C;
    // 0x800420E4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_800420E8:
    // 0x800420E8: lbu         $t7, 0x1($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X1);
    // 0x800420EC: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x800420F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800420F4: bne         $v0, $t7, L_80042120
    if (ctx->r2 != ctx->r15) {
        // 0x800420F8: addiu       $t9, $t6, 0x3
        ctx->r25 = ADD32(ctx->r14, 0X3);
            goto L_80042120;
    }
    // 0x800420F8: addiu       $t9, $t6, 0x3
    ctx->r25 = ADD32(ctx->r14, 0X3);
    // 0x800420FC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80042100: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x80042104: addiu       $t7, $t8, 0x4
    ctx->r15 = ADD32(ctx->r24, 0X4);
    // 0x80042108: sw          $t7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r15;
    // 0x8004210C: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x80042110: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80042114: sw          $t6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r14;
    // 0x80042118: b           L_8004217C
    // 0x8004211C: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_8004217C;
    // 0x8004211C: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_80042120:
    // 0x80042120: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x80042124: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x80042128: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x8004212C: bne         $at, $zero, L_8004217C
    if (ctx->r1 != 0) {
        // 0x80042130: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_8004217C;
    }
    // 0x80042130: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80042134: beq         $at, $zero, L_8004217C
    if (ctx->r1 == 0) {
        // 0x80042138: nop
    
            goto L_8004217C;
    }
    // 0x80042138: nop

    // 0x8004213C: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
L_80042140:
    // 0x80042140: slti        $at, $t9, 0x3E7
    ctx->r1 = SIGNED(ctx->r25) < 0X3E7 ? 1 : 0;
    // 0x80042144: beql        $at, $zero, L_80042164
    if (ctx->r1 == 0) {
        // 0x80042148: lbu         $a1, 0x1($s2)
        ctx->r5 = MEM_BU(ctx->r18, 0X1);
            goto L_80042164;
    }
    goto skip_5;
    // 0x80042148: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    skip_5:
    // 0x8004214C: multu       $t9, $fp
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042150: mflo        $t7
    ctx->r15 = lo;
    // 0x80042154: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x80042158: addiu       $t6, $t8, -0x30
    ctx->r14 = ADD32(ctx->r24, -0X30);
    // 0x8004215C: sw          $t6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r14;
    // 0x80042160: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
L_80042164:
    // 0x80042164: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80042168: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x8004216C: bne         $at, $zero, L_8004217C
    if (ctx->r1 != 0) {
        // 0x80042170: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_8004217C;
    }
    // 0x80042170: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80042174: bnel        $at, $zero, L_80042140
    if (ctx->r1 != 0) {
        // 0x80042178: lw          $t9, 0xC4($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XC4);
            goto L_80042140;
    }
    goto skip_6;
    // 0x80042178: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    skip_6:
L_8004217C:
    // 0x8004217C: jal         0x8003A894
    // 0x80042180: addiu       $a0, $a0, -0x3870
    ctx->r4 = ADD32(ctx->r4, -0X3870);
    strchr_recomp(rdram, ctx);
        goto after_3;
    // 0x80042180: addiu       $a0, $a0, -0x3870
    ctx->r4 = ADD32(ctx->r4, -0X3870);
    after_3:
    // 0x80042184: beq         $v0, $zero, L_8004219C
    if (ctx->r2 == 0) {
        // 0x80042188: addiu       $s0, $sp, 0xA0
        ctx->r16 = ADD32(ctx->r29, 0XA0);
            goto L_8004219C;
    }
    // 0x80042188: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x8004218C: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x80042190: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80042194: b           L_800421A0
    // 0x80042198: sb          $t9, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r25;
        goto L_800421A0;
    // 0x80042198: sb          $t9, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r25;
L_8004219C:
    // 0x8004219C: sb          $zero, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = 0;
L_800421A0:
    // 0x800421A0: lbu         $t7, 0xD4($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XD4);
    // 0x800421A4: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x800421A8: addiu       $a2, $sp, 0xE4
    ctx->r6 = ADD32(ctx->r29, 0XE4);
    // 0x800421AC: bne         $v0, $t7, L_800421CC
    if (ctx->r2 != ctx->r15) {
        // 0x800421B0: addiu       $a3, $sp, 0x74
        ctx->r7 = ADD32(ctx->r29, 0X74);
            goto L_800421CC;
    }
    // 0x800421B0: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    // 0x800421B4: lbu         $t8, 0x0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X0);
    // 0x800421B8: addiu       $t6, $zero, 0x4C
    ctx->r14 = ADD32(0, 0X4C);
    // 0x800421BC: bne         $v0, $t8, L_800421CC
    if (ctx->r2 != ctx->r24) {
        // 0x800421C0: nop
    
            goto L_800421CC;
    }
    // 0x800421C0: nop

    // 0x800421C4: sb          $t6, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r14;
    // 0x800421C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800421CC:
    // 0x800421CC: jal         0x80041880
    // 0x800421D0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    static_0_80041880(rdram, ctx);
        goto after_4;
    // 0x800421D0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    after_4:
    // 0x800421D4: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x800421D8: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x800421DC: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x800421E0: subu        $t8, $t9, $t7
    ctx->r24 = SUB32(ctx->r25, ctx->r15);
    // 0x800421E4: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x800421E8: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x800421EC: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x800421F0: subu        $t8, $t9, $t7
    ctx->r24 = SUB32(ctx->r25, ctx->r15);
    // 0x800421F4: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x800421F8: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x800421FC: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x80042200: subu        $t8, $t9, $t7
    ctx->r24 = SUB32(ctx->r25, ctx->r15);
    // 0x80042204: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x80042208: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x8004220C: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x80042210: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x80042214: bne         $t8, $zero, L_80042280
    if (ctx->r24 != 0) {
        // 0x80042218: slt         $t6, $zero, $t9
        ctx->r14 = SIGNED(0) < SIGNED(ctx->r25) ? 1 : 0;
            goto L_80042280;
    }
    // 0x80042218: slt         $t6, $zero, $t9
    ctx->r14 = SIGNED(0) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8004221C: beql        $t6, $zero, L_80042284
    if (ctx->r14 == 0) {
        // 0x80042220: lw          $t9, 0xAC($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XAC);
            goto L_80042284;
    }
    goto skip_7;
    // 0x80042220: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    skip_7:
    // 0x80042224: beq         $t6, $zero, L_80042280
    if (ctx->r14 == 0) {
        // 0x80042228: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80042280;
    }
    // 0x80042228: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x8004222C: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80042230:
    // 0x80042230: bne         $at, $zero, L_80042240
    if (ctx->r1 != 0) {
        // 0x80042234: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80042240;
    }
    // 0x80042234: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80042238: b           L_80042240
    // 0x8004223C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80042240;
    // 0x8004223C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80042240:
    // 0x80042240: blez        $s0, L_80042274
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80042244: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80042274;
    }
    // 0x80042244: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80042248: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x8004224C: jalr        $s4
    // 0x80042250: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_5;
    // 0x80042250: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x80042254: beq         $v0, $zero, L_8004226C
    if (ctx->r2 == 0) {
        // 0x80042258: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_8004226C;
    }
    // 0x80042258: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8004225C: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x80042260: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x80042264: b           L_80042274
    // 0x80042268: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_80042274;
    // 0x80042268: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_8004226C:
    // 0x8004226C: b           L_80042508
    // 0x80042270: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80042508;
    // 0x80042270: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80042274:
    // 0x80042274: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80042278: bgtzl       $s1, L_80042230
    if (SIGNED(ctx->r17) > 0) {
        // 0x8004227C: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80042230;
    }
    goto skip_8;
    // 0x8004227C: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_8:
L_80042280:
    // 0x80042280: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
L_80042284:
    // 0x80042284: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80042288: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x8004228C: blezl       $t9, L_800422C4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80042290: lw          $t9, 0xB0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB0);
            goto L_800422C4;
    }
    goto skip_9;
    // 0x80042290: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    skip_9:
    // 0x80042294: jalr        $s4
    // 0x80042298: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_6;
    // 0x80042298: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_6:
    // 0x8004229C: beq         $v0, $zero, L_800422B8
    if (ctx->r2 == 0) {
        // 0x800422A0: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_800422B8;
    }
    // 0x800422A0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800422A4: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x800422A8: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x800422AC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800422B0: b           L_800422C0
    // 0x800422B4: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_800422C0;
    // 0x800422B4: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_800422B8:
    // 0x800422B8: b           L_80042508
    // 0x800422BC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80042508;
    // 0x800422BC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_800422C0:
    // 0x800422C0: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
L_800422C4:
    // 0x800422C4: slt         $t6, $zero, $t9
    ctx->r14 = SIGNED(0) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800422C8: beql        $t6, $zero, L_80042330
    if (ctx->r14 == 0) {
        // 0x800422CC: lw          $t9, 0xB4($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB4);
            goto L_80042330;
    }
    goto skip_10;
    // 0x800422CC: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    skip_10:
    // 0x800422D0: beq         $t6, $zero, L_8004232C
    if (ctx->r14 == 0) {
        // 0x800422D4: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_8004232C;
    }
    // 0x800422D4: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x800422D8: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_800422DC:
    // 0x800422DC: bne         $at, $zero, L_800422EC
    if (ctx->r1 != 0) {
        // 0x800422E0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800422EC;
    }
    // 0x800422E0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800422E4: b           L_800422EC
    // 0x800422E8: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_800422EC;
    // 0x800422E8: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_800422EC:
    // 0x800422EC: blez        $s0, L_80042320
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800422F0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80042320;
    }
    // 0x800422F0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800422F4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800422F8: jalr        $s4
    // 0x800422FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_7;
    // 0x800422FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x80042300: beq         $v0, $zero, L_80042318
    if (ctx->r2 == 0) {
        // 0x80042304: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80042318;
    }
    // 0x80042304: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80042308: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x8004230C: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x80042310: b           L_80042320
    // 0x80042314: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_80042320;
    // 0x80042314: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_80042318:
    // 0x80042318: b           L_80042508
    // 0x8004231C: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80042508;
    // 0x8004231C: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80042320:
    // 0x80042320: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80042324: bgtzl       $s1, L_800422DC
    if (SIGNED(ctx->r17) > 0) {
        // 0x80042328: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_800422DC;
    }
    goto skip_11;
    // 0x80042328: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_11:
L_8004232C:
    // 0x8004232C: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
L_80042330:
    // 0x80042330: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80042334: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    // 0x80042338: blezl       $t9, L_80042370
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8004233C: lw          $t9, 0xB8($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB8);
            goto L_80042370;
    }
    goto skip_12;
    // 0x8004233C: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    skip_12:
    // 0x80042340: jalr        $s4
    // 0x80042344: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_8;
    // 0x80042344: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_8:
    // 0x80042348: beq         $v0, $zero, L_80042364
    if (ctx->r2 == 0) {
        // 0x8004234C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80042364;
    }
    // 0x8004234C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80042350: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80042354: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x80042358: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8004235C: b           L_8004236C
    // 0x80042360: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_8004236C;
    // 0x80042360: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_80042364:
    // 0x80042364: b           L_80042508
    // 0x80042368: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80042508;
    // 0x80042368: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_8004236C:
    // 0x8004236C: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
L_80042370:
    // 0x80042370: slt         $t6, $zero, $t9
    ctx->r14 = SIGNED(0) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80042374: beql        $t6, $zero, L_800423DC
    if (ctx->r14 == 0) {
        // 0x80042378: lw          $t9, 0xBC($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XBC);
            goto L_800423DC;
    }
    goto skip_13;
    // 0x80042378: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    skip_13:
    // 0x8004237C: beq         $t6, $zero, L_800423D8
    if (ctx->r14 == 0) {
        // 0x80042380: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_800423D8;
    }
    // 0x80042380: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80042384: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80042388:
    // 0x80042388: bne         $at, $zero, L_80042398
    if (ctx->r1 != 0) {
        // 0x8004238C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80042398;
    }
    // 0x8004238C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80042390: b           L_80042398
    // 0x80042394: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80042398;
    // 0x80042394: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80042398:
    // 0x80042398: blez        $s0, L_800423CC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8004239C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_800423CC;
    }
    // 0x8004239C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800423A0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800423A4: jalr        $s4
    // 0x800423A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_9;
    // 0x800423A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x800423AC: beq         $v0, $zero, L_800423C4
    if (ctx->r2 == 0) {
        // 0x800423B0: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_800423C4;
    }
    // 0x800423B0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800423B4: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x800423B8: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x800423BC: b           L_800423CC
    // 0x800423C0: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_800423CC;
    // 0x800423C0: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_800423C4:
    // 0x800423C4: b           L_80042508
    // 0x800423C8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80042508;
    // 0x800423C8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_800423CC:
    // 0x800423CC: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x800423D0: bgtzl       $s1, L_80042388
    if (SIGNED(ctx->r17) > 0) {
        // 0x800423D4: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80042388;
    }
    goto skip_14;
    // 0x800423D4: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_14:
L_800423D8:
    // 0x800423D8: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
L_800423DC:
    // 0x800423DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800423E0: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x800423E4: blez        $t9, L_8004241C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800423E8: lw          $t7, 0xB4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB4);
            goto L_8004241C;
    }
    // 0x800423E8: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x800423EC: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x800423F0: jalr        $s4
    // 0x800423F4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_10;
    // 0x800423F4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_10:
    // 0x800423F8: beq         $v0, $zero, L_80042414
    if (ctx->r2 == 0) {
        // 0x800423FC: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80042414;
    }
    // 0x800423FC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80042400: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x80042404: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x80042408: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x8004240C: b           L_8004241C
    // 0x80042410: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
        goto L_8004241C;
    // 0x80042410: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
L_80042414:
    // 0x80042414: b           L_80042508
    // 0x80042418: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80042508;
    // 0x80042418: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_8004241C:
    // 0x8004241C: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x80042420: slt         $t8, $zero, $t9
    ctx->r24 = SIGNED(0) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80042424: beql        $t8, $zero, L_8004248C
    if (ctx->r24 == 0) {
        // 0x80042428: lw          $t9, 0xD0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XD0);
            goto L_8004248C;
    }
    goto skip_15;
    // 0x80042428: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    skip_15:
    // 0x8004242C: beq         $t8, $zero, L_80042488
    if (ctx->r24 == 0) {
        // 0x80042430: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80042488;
    }
    // 0x80042430: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80042434: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80042438:
    // 0x80042438: bne         $at, $zero, L_80042448
    if (ctx->r1 != 0) {
        // 0x8004243C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80042448;
    }
    // 0x8004243C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80042440: b           L_80042448
    // 0x80042444: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80042448;
    // 0x80042444: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80042448:
    // 0x80042448: blez        $s0, L_8004247C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8004244C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8004247C;
    }
    // 0x8004244C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80042450: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80042454: jalr        $s4
    // 0x80042458: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_11;
    // 0x80042458: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x8004245C: beq         $v0, $zero, L_80042474
    if (ctx->r2 == 0) {
        // 0x80042460: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80042474;
    }
    // 0x80042460: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80042464: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80042468: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8004246C: b           L_8004247C
    // 0x80042470: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
        goto L_8004247C;
    // 0x80042470: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
L_80042474:
    // 0x80042474: b           L_80042508
    // 0x80042478: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80042508;
    // 0x80042478: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_8004247C:
    // 0x8004247C: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80042480: bgtzl       $s1, L_80042438
    if (SIGNED(ctx->r17) > 0) {
        // 0x80042484: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80042438;
    }
    goto skip_16;
    // 0x80042484: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_16:
L_80042488:
    // 0x80042488: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
L_8004248C:
    // 0x8004248C: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x80042490: andi        $t8, $t9, 0x4
    ctx->r24 = ctx->r25 & 0X4;
    // 0x80042494: beq         $t8, $zero, L_80042500
    if (ctx->r24 == 0) {
        // 0x80042498: slt         $t7, $zero, $t6
        ctx->r15 = SIGNED(0) < SIGNED(ctx->r14) ? 1 : 0;
            goto L_80042500;
    }
    // 0x80042498: slt         $t7, $zero, $t6
    ctx->r15 = SIGNED(0) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8004249C: beq         $t7, $zero, L_80042500
    if (ctx->r15 == 0) {
        // 0x800424A0: nop
    
            goto L_80042500;
    }
    // 0x800424A0: nop

    // 0x800424A4: beq         $t7, $zero, L_80042500
    if (ctx->r15 == 0) {
        // 0x800424A8: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_80042500;
    }
    // 0x800424A8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x800424AC: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_800424B0:
    // 0x800424B0: bne         $at, $zero, L_800424C0
    if (ctx->r1 != 0) {
        // 0x800424B4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800424C0;
    }
    // 0x800424B4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800424B8: b           L_800424C0
    // 0x800424BC: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_800424C0;
    // 0x800424BC: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_800424C0:
    // 0x800424C0: blez        $s0, L_800424F4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800424C4: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_800424F4;
    }
    // 0x800424C4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800424C8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x800424CC: jalr        $s4
    // 0x800424D0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_12;
    // 0x800424D0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_12:
    // 0x800424D4: beq         $v0, $zero, L_800424EC
    if (ctx->r2 == 0) {
        // 0x800424D8: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_800424EC;
    }
    // 0x800424D8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800424DC: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x800424E0: addu        $t8, $t9, $s0
    ctx->r24 = ADD32(ctx->r25, ctx->r16);
    // 0x800424E4: b           L_800424F4
    // 0x800424E8: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_800424F4;
    // 0x800424E8: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_800424EC:
    // 0x800424EC: b           L_80042508
    // 0x800424F0: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80042508;
    // 0x800424F0: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_800424F4:
    // 0x800424F4: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x800424F8: bgtzl       $s1, L_800424B0
    if (SIGNED(ctx->r17) > 0) {
        // 0x800424FC: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_800424B0;
    }
    goto skip_17;
    // 0x800424FC: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_17:
L_80042500:
    // 0x80042500: b           L_80041F50
    // 0x80042504: addiu       $a3, $s2, 0x1
    ctx->r7 = ADD32(ctx->r18, 0X1);
        goto L_80041F50;
    // 0x80042504: addiu       $a3, $s2, 0x1
    ctx->r7 = ADD32(ctx->r18, 0X1);
L_80042508:
    // 0x80042508: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8004250C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80042510: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80042514: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80042518: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8004251C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80042520: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80042524: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80042528: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8004252C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80042530: jr          $ra
    // 0x80042534: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x80042534: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_8000D800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D800: jr          $ra
    // 0x8000D804: nop

    return;
    // 0x8000D804: nop

    // 0x8000D808: jr          $ra
    // 0x8000D80C: nop

    return;
    // 0x8000D80C: nop

    // 0x8000D810: jr          $ra
    // 0x8000D814: nop

    return;
    // 0x8000D814: nop

;}
RECOMP_FUNC void alSynStartVoiceParams(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002F794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F798: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002F79C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8002F7A0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8002F7A4: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8002F7A8: beql        $t6, $zero, L_8002F874
    if (ctx->r14 == 0) {
        // 0x8002F7AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002F874;
    }
    goto skip_0;
    // 0x8002F7AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8002F7B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002F7B4: jal         0x80035B20
    // 0x8002F7B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x8002F7B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002F7BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002F7C0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8002F7C4: beq         $v0, $zero, L_8002F870
    if (ctx->r2 == 0) {
        // 0x8002F7C8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8002F870;
    }
    // 0x8002F7C8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8002F7CC: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x8002F7D0: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x8002F7D4: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x8002F7D8: lw          $t9, 0xD8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XD8);
    // 0x8002F7DC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8002F7E0: sh          $t1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r9;
    // 0x8002F7E4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8002F7E8: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8002F7EC: lh          $t2, 0x1A($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X1A);
    // 0x8002F7F0: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002F7F4: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x8002F7F8: sh          $t2, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r10;
    // 0x8002F7FC: lbu         $t3, 0x2DB7($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X2DB7);
    // 0x8002F800: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x8002F804: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8002F808: beql        $t4, $zero, L_8002F81C
    if (ctx->r12 == 0) {
        // 0x8002F80C: sb          $t6, 0x12($v0)
        MEM_B(0X12, ctx->r2) = ctx->r14;
            goto L_8002F81C;
    }
    goto skip_1;
    // 0x8002F80C: sb          $t6, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r14;
    skip_1:
    // 0x8002F810: b           L_8002F81C
    // 0x8002F814: sb          $t5, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r13;
        goto L_8002F81C;
    // 0x8002F814: sb          $t5, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r13;
    // 0x8002F818: sb          $t6, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r14;
L_8002F81C:
    // 0x8002F81C: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x8002F820: sh          $t8, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r24;
    // 0x8002F824: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x8002F828: sb          $t7, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r15;
    // 0x8002F82C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8002F830: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x8002F834: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8002F838: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8002F83C: jal         0x80035A18
    // 0x8002F840: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    _timeToSamples(rdram, ctx);
        goto after_1;
    // 0x8002F840: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x8002F844: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F848: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8002F84C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002F850: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x8002F854: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8002F858: sw          $t9, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r25;
    // 0x8002F85C: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
    // 0x8002F860: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    // 0x8002F864: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8002F868: jalr        $t9
    // 0x8002F86C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8002F86C: nop

    after_2:
L_8002F870:
    // 0x8002F870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002F874:
    // 0x8002F874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002F878: jr          $ra
    // 0x8002F87C: nop

    return;
    // 0x8002F87C: nop

;}
RECOMP_FUNC void func_80010AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010AD0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80010AD4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80010AD8: lwc1        $f7, -0x4410($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4410);
    // 0x80010ADC: lwc1        $f6, -0x440C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X440C);
    // 0x80010AE0: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80010AE4: c.lt.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d < ctx->f4.d;
    // 0x80010AE8: nop

    // 0x80010AEC: bc1f        L_80010B0C
    if (!c1cs) {
        // 0x80010AF0: nop
    
            goto L_80010B0C;
    }
    // 0x80010AF0: nop

    // 0x80010AF4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80010AF8: lwc1        $f11, -0x4408($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X4408);
    // 0x80010AFC: lwc1        $f10, -0x4404($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4404);
    // 0x80010B00: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x80010B04: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80010B08: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
L_80010B0C:
    // 0x80010B0C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80010B10: lwc1        $f5, -0x4400($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4400);
    // 0x80010B14: lwc1        $f4, -0x43FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X43FC);
    // 0x80010B18: cvt.d.s     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.d = CVT_D_S(ctx->f14.fl);
    // 0x80010B1C: c.lt.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d < ctx->f18.d;
    // 0x80010B20: nop

    // 0x80010B24: bc1f        L_80010B44
    if (!c1cs) {
        // 0x80010B28: nop
    
            goto L_80010B44;
    }
    // 0x80010B28: nop

    // 0x80010B2C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80010B30: lwc1        $f9, -0x43F8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X43F8);
    // 0x80010B34: lwc1        $f8, -0x43F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X43F4);
    // 0x80010B38: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80010B3C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80010B40: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
L_80010B44:
    // 0x80010B44: sub.s       $f16, $f14, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80010B48: lwc1        $f18, 0x8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80010B4C: nop

    // 0x80010B50: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80010B54: b           L_80010B64
    // 0x80010B58: add.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f12.fl;
        goto L_80010B64;
    // 0x80010B58: add.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x80010B5C: b           L_80010B64
    // 0x80010B60: nop

        goto L_80010B64;
    // 0x80010B60: nop

L_80010B64:
    // 0x80010B64: jr          $ra
    // 0x80010B68: nop

    return;
    // 0x80010B68: nop

;}
RECOMP_FUNC void func_8001F5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F5F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001F5F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001F5F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001F5FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001F600: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001F604: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001F608: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F60C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8001F610: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001F614: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001F618: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F61C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8001F620: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8001F624: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8001F628: lw          $a1, 0x68($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X68);
    // 0x8001F62C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8001F630: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8001F634: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8001F638: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8001F63C: jal         0x8003939C
    // 0x8001F640: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x8001F640: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_0:
    // 0x8001F644: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8001F648: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F64C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8001F650: sll         $t5, $t4, 5
    ctx->r13 = S32(ctx->r12 << 5);
    // 0x8001F654: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8001F658: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8001F65C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8001F660: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x8001F664: sw          $t2, 0x80($t7)
    MEM_W(0X80, ctx->r15) = ctx->r10;
    // 0x8001F668: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8001F66C: b           L_8001F67C
    // 0x8001F670: nop

        goto L_8001F67C;
    // 0x8001F670: nop

    // 0x8001F674: b           L_8001F67C
    // 0x8001F678: nop

        goto L_8001F67C;
    // 0x8001F678: nop

L_8001F67C:
    // 0x8001F67C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F680: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001F684: jr          $ra
    // 0x8001F688: nop

    return;
    // 0x8001F688: nop

;}
RECOMP_FUNC void alSndpSetFXMix(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035460: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80035464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035468: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003546C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80035470: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80035474: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x80035478: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x8003547C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80035480: sb          $t0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r8;
    // 0x80035484: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80035488: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8003548C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80035490: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80035494: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80035498: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8003549C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x800354A0: jal         0x8003E80C
    // 0x800354A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x800354A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800354A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800354AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800354B0: jr          $ra
    // 0x800354B4: nop

    return;
    // 0x800354B4: nop

;}
RECOMP_FUNC void Math_Mat3f_Inverse(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E680: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000E684: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000E688: nop

    // 0x8000E68C: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x8000E690: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8000E694: nop

    // 0x8000E698: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8000E69C: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8000E6A0: nop

    // 0x8000E6A4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x8000E6A8: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8000E6AC: nop

    // 0x8000E6B0: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x8000E6B4: lwc1        $f16, 0x14($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8000E6B8: nop

    // 0x8000E6BC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8000E6C0: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x8000E6C4: nop

    // 0x8000E6C8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8000E6CC: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8000E6D0: nop

    // 0x8000E6D4: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8000E6D8: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8000E6DC: nop

    // 0x8000E6E0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8000E6E4: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8000E6E8: nop

    // 0x8000E6EC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8000E6F0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000E6F4: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000E6F8: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E6FC: mul.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8000E700: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000E704: swc1        $f18, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f18.u32l;
    // 0x8000E708: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x8000E70C: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000E710: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E714: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E718: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
    // 0x8000E71C: mul.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8000E720: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E724: swc1        $f4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f4.u32l;
    // 0x8000E728: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8000E72C: mul.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8000E730: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E734: add.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8000E738: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000E73C: nop

    // 0x8000E740: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8000E744: nop

    // 0x8000E748: mul.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8000E74C: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8000E750: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8000E754: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
    // 0x8000E758: lwc1        $f16, 0x10($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8000E75C: nop

    // 0x8000E760: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8000E764: nop

    // 0x8000E768: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8000E76C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8000E770: nop

    // 0x8000E774: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8000E778: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8000E77C: nop

    // 0x8000E780: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8000E784: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8000E788: add.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8000E78C: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8000E790: mul.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8000E794: nop

    // 0x8000E798: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8000E79C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8000E7A0: sub.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8000E7A4: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x8000E7A8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000E7AC: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E7B0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E7B4: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000E7B8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E7BC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E7C0: mul.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8000E7C4: sub.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8000E7C8: nop

    // 0x8000E7CC: div.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000E7D0: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x8000E7D4: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000E7D8: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E7DC: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000E7E0: mul.s       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8000E7E4: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E7E8: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E7EC: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000E7F0: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x8000E7F4: nop

    // 0x8000E7F8: div.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8000E7FC: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
    // 0x8000E800: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000E804: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E808: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000E80C: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000E810: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000E814: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E818: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8000E81C: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000E820: nop

    // 0x8000E824: div.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000E828: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x8000E82C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E830: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E834: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E838: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8000E83C: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E840: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E844: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000E848: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000E84C: nop

    // 0x8000E850: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8000E854: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x8000E858: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000E85C: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E860: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000E864: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8000E868: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E86C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E870: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8000E874: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8000E878: nop

    // 0x8000E87C: div.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8000E880: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x8000E884: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000E888: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E88C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000E890: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8000E894: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E898: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E89C: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8000E8A0: sub.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8000E8A4: nop

    // 0x8000E8A8: div.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8000E8AC: swc1        $f16, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f16.u32l;
    // 0x8000E8B0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E8B4: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E8B8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000E8BC: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000E8C0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E8C4: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E8C8: mul.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8000E8CC: sub.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8000E8D0: nop

    // 0x8000E8D4: div.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000E8D8: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x8000E8DC: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000E8E0: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E8E4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000E8E8: mul.s       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8000E8EC: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E8F0: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E8F4: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000E8F8: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x8000E8FC: nop

    // 0x8000E900: div.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8000E904: swc1        $f10, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f10.u32l;
    // 0x8000E908: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000E90C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000E910: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000E914: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000E918: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E91C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E920: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8000E924: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000E928: nop

    // 0x8000E92C: div.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000E930: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x8000E934: b           L_8000E93C
    // 0x8000E938: nop

        goto L_8000E93C;
    // 0x8000E938: nop

L_8000E93C:
    // 0x8000E93C: jr          $ra
    // 0x8000E940: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000E940: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void alSeqpGetState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034710: jr          $ra
    // 0x80034714: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    return;
    // 0x80034714: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
;}
RECOMP_FUNC void func_8002CA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CA80: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8002CA84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CA88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002CA8C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8002CA90: nop

    // 0x8002CA94: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8002CA98: nop

    // 0x8002CA9C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x8002CAA0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002CAA4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8002CAA8: nop

    // 0x8002CAAC: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8002CAB0: nop

    // 0x8002CAB4: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x8002CAB8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002CABC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8002CAC0: nop

    // 0x8002CAC4: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8002CAC8: nop

    // 0x8002CACC: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x8002CAD0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002CAD4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8002CAD8: nop

    // 0x8002CADC: lwc1        $f10, 0x24($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X24);
    // 0x8002CAE0: nop

    // 0x8002CAE4: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x8002CAE8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002CAEC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8002CAF0: nop

    // 0x8002CAF4: lwc1        $f16, 0x28($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X28);
    // 0x8002CAF8: nop

    // 0x8002CAFC: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x8002CB00: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002CB04: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8002CB08: nop

    // 0x8002CB0C: lwc1        $f18, 0x2C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x8002CB10: nop

    // 0x8002CB14: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x8002CB18: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CB1C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002CB20: nop

    // 0x8002CB24: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002CB28: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8002CB2C: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x8002CB30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002CB34: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CB38: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CB3C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8002CB40: jal         0x8002C144
    // 0x8002CB44: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    func_8002C144(rdram, ctx);
        goto after_0;
    // 0x8002CB44: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    after_0:
    // 0x8002CB48: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002CB4C: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x8002CB50: nop

    // 0x8002CB54: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8002CB58: beq         $t3, $zero, L_8002CB80
    if (ctx->r11 == 0) {
        // 0x8002CB5C: nop
    
            goto L_8002CB80;
    }
    // 0x8002CB5C: nop

    // 0x8002CB60: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002CB64: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x8002CB68: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002CB6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002CB70: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8002CB74: nop

    // 0x8002CB78: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8002CB7C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
L_8002CB80:
    // 0x8002CB80: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CB84: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CB88: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8002CB8C: jal         0x8002C144
    // 0x8002CB90: nop

    func_8002C144(rdram, ctx);
        goto after_1;
    // 0x8002CB90: nop

    after_1:
    // 0x8002CB94: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002CB98: lbu         $t5, 0x76E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76E0);
    // 0x8002CB9C: nop

    // 0x8002CBA0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8002CBA4: beq         $t6, $zero, L_8002CBC0
    if (ctx->r14 == 0) {
        // 0x8002CBA8: nop
    
            goto L_8002CBC0;
    }
    // 0x8002CBA8: nop

    // 0x8002CBAC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002CBB0: addiu       $t7, $t7, 0x7760
    ctx->r15 = ADD32(ctx->r15, 0X7760);
    // 0x8002CBB4: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8002CBB8: nop

    // 0x8002CBBC: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
L_8002CBC0:
    // 0x8002CBC0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002CBC4: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x8002CBC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002CBCC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8002CBD0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8002CBD4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8002CBD8: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8002CBDC: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CBE0: nop

    // 0x8002CBE4: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8002CBE8: nop

    // 0x8002CBEC: bc1f        L_8002CC00
    if (!c1cs) {
        // 0x8002CBF0: nop
    
            goto L_8002CC00;
    }
    // 0x8002CBF0: nop

    // 0x8002CBF4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8002CBF8: b           L_8002CC04
    // 0x8002CBFC: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
        goto L_8002CC04;
    // 0x8002CBFC: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_8002CC00:
    // 0x8002CC00: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_8002CC04:
    // 0x8002CC04: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CC08: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8002CC0C: nop

    // 0x8002CC10: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8002CC14: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x8002CC18: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8002CC1C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002CC20: nop

    // 0x8002CC24: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8002CC28: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x8002CC2C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8002CC30: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8002CC34: sb          $zero, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = 0;
    // 0x8002CC38: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8002CC3C:
    // 0x8002CC3C: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
    // 0x8002CC40: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8002CC44:
    // 0x8002CC44: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8002CC48: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002CC4C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8002CC50: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8002CC54: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8002CC58: addiu       $t5, $t5, -0x59A0
    ctx->r13 = ADD32(ctx->r13, -0X59A0);
    // 0x8002CC5C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8002CC60: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8002CC64: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CC68: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8002CC6C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8002CC70: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8002CC74: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8002CC78: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8002CC7C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CC80: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8002CC84: jal         0x8002C184
    // 0x8002CC88: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    func_8002C184(rdram, ctx);
        goto after_2;
    // 0x8002CC88: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    after_2:
    // 0x8002CC8C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8002CC90: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8002CC94: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8002CC98: bne         $t7, $at, L_8002CCC0
    if (ctx->r15 != ctx->r1) {
        // 0x8002CC9C: nop
    
            goto L_8002CCC0;
    }
    // 0x8002CC9C: nop

    // 0x8002CCA0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8002CCA4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002CCA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002CCAC: lbu         $t9, -0x5940($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X5940);
    // 0x8002CCB0: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x8002CCB4: nop

    // 0x8002CCB8: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x8002CCBC: sb          $t1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r9;
L_8002CCC0:
    // 0x8002CCC0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8002CCC4: nop

    // 0x8002CCC8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8002CCCC: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x8002CCD0: bne         $at, $zero, L_8002CC44
    if (ctx->r1 != 0) {
        // 0x8002CCD4: sw          $t3, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r11;
            goto L_8002CC44;
    }
    // 0x8002CCD4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x8002CCD8: lbu         $t4, 0x2F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X2F);
    // 0x8002CCDC: nop

    // 0x8002CCE0: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x8002CCE4: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8002CCE8: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x8002CCEC: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
    // 0x8002CCF0: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x8002CCF4: nop

    // 0x8002CCF8: bne         $t8, $zero, L_8002CD28
    if (ctx->r24 != 0) {
        // 0x8002CCFC: nop
    
            goto L_8002CD28;
    }
    // 0x8002CCFC: nop

    // 0x8002CD00: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8002CD04: nop

    // 0x8002CD08: beq         $t9, $zero, L_8002CD20
    if (ctx->r25 == 0) {
        // 0x8002CD0C: nop
    
            goto L_8002CD20;
    }
    // 0x8002CD0C: nop

    // 0x8002CD10: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8002CD14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002CD18: bne         $t0, $at, L_8002CD28
    if (ctx->r8 != ctx->r1) {
        // 0x8002CD1C: nop
    
            goto L_8002CD28;
    }
    // 0x8002CD1C: nop

L_8002CD20:
    // 0x8002CD20: b           L_8002CEA8
    // 0x8002CD24: nop

        goto L_8002CEA8;
    // 0x8002CD24: nop

L_8002CD28:
    // 0x8002CD28: lbu         $t1, 0x2F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2F);
    // 0x8002CD2C: nop

    // 0x8002CD30: bne         $t1, $zero, L_8002CD78
    if (ctx->r9 != 0) {
        // 0x8002CD34: nop
    
            goto L_8002CD78;
    }
    // 0x8002CD34: nop

    // 0x8002CD38: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002CD3C: nop

    // 0x8002CD40: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x8002CD44: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8002CD48: nop

    // 0x8002CD4C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8002CD50: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8002CD54: nop

    // 0x8002CD58: bgez        $t2, L_8002CD68
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8002CD5C: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_8002CD68;
    }
    // 0x8002CD5C: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8002CD60: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x8002CD64: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_8002CD68:
    // 0x8002CD68: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8002CD6C: lbu         $t4, 0x2E($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X2E);
    // 0x8002CD70: b           L_8002CDFC
    // 0x8002CD74: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
        goto L_8002CDFC;
    // 0x8002CD74: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
L_8002CD78:
    // 0x8002CD78: lbu         $t5, 0x2E($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X2E);
    // 0x8002CD7C: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x8002CD80: nop

    // 0x8002CD84: beq         $t5, $t6, L_8002CDFC
    if (ctx->r13 == ctx->r14) {
        // 0x8002CD88: nop
    
            goto L_8002CDFC;
    }
    // 0x8002CD88: nop

    // 0x8002CD8C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8002CD90: nop

    // 0x8002CD94: beq         $t7, $zero, L_8002CDFC
    if (ctx->r15 == 0) {
        // 0x8002CD98: nop
    
            goto L_8002CDFC;
    }
    // 0x8002CD98: nop

    // 0x8002CD9C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8002CDA0: nop

    // 0x8002CDA4: bgez        $t8, L_8002CDB4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8002CDA8: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_8002CDB4;
    }
    // 0x8002CDA8: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8002CDAC: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x8002CDB0: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_8002CDB4:
    // 0x8002CDB4: beq         $t9, $zero, L_8002CDFC
    if (ctx->r25 == 0) {
        // 0x8002CDB8: nop
    
            goto L_8002CDFC;
    }
    // 0x8002CDB8: nop

    // 0x8002CDBC: lbu         $t0, 0x2E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2E);
    // 0x8002CDC0: nop

    // 0x8002CDC4: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
    // 0x8002CDC8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8002CDCC: nop

    // 0x8002CDD0: bgez        $t1, L_8002CDE0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8002CDD4: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8002CDE0;
    }
    // 0x8002CDD4: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8002CDD8: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x8002CDDC: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_8002CDE0:
    // 0x8002CDE0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8002CDE4: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002CDE8: nop

    // 0x8002CDEC: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8002CDF0: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8002CDF4: nop

    // 0x8002CDF8: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
L_8002CDFC:
    // 0x8002CDFC: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CE00: nop

    // 0x8002CE04: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x8002CE08: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8002CE0C: nop

    // 0x8002CE10: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8002CE14: lbu         $t3, 0x2F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X2F);
    // 0x8002CE18: nop

    // 0x8002CE1C: sb          $t3, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r11;
    // 0x8002CE20: lbu         $t4, 0x2F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X2F);
    // 0x8002CE24: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002CE28: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x8002CE2C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002CE30: lw          $t6, -0x5938($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5938);
    // 0x8002CE34: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8002CE38: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CE3C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002CE40: mflo        $t8
    ctx->r24 = lo;
    // 0x8002CE44: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8002CE48: nop

    // 0x8002CE4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002CE50: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8002CE54: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8002CE58: lbu         $t9, 0x2F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2F);
    // 0x8002CE5C: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002CE60: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8002CE64: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002CE68: lw          $t1, -0x5934($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5934);
    // 0x8002CE6C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8002CE70: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8002CE74: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002CE78: mflo        $t3
    ctx->r11 = lo;
    // 0x8002CE7C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8002CE80: nop

    // 0x8002CE84: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8002CE88: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8002CE8C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8002CE90: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8002CE94: nop

    // 0x8002CE98: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8002CE9C: slti        $at, $t5, 0x1E
    ctx->r1 = SIGNED(ctx->r13) < 0X1E ? 1 : 0;
    // 0x8002CEA0: bne         $at, $zero, L_8002CC3C
    if (ctx->r1 != 0) {
        // 0x8002CEA4: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_8002CC3C;
    }
    // 0x8002CEA4: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
L_8002CEA8:
    // 0x8002CEA8: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CEAC: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CEB0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8002CEB4: jal         0x8002C184
    // 0x8002CEB8: nop

    func_8002C184(rdram, ctx);
        goto after_3;
    // 0x8002CEB8: nop

    after_3:
    // 0x8002CEBC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8002CEC0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8002CEC4: nop

    // 0x8002CEC8: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x8002CECC: beq         $at, $zero, L_8002CF24
    if (ctx->r1 == 0) {
        // 0x8002CED0: nop
    
            goto L_8002CF24;
    }
    // 0x8002CED0: nop

    // 0x8002CED4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8002CED8: nop

    // 0x8002CEDC: beq         $t7, $zero, L_8002CF24
    if (ctx->r15 == 0) {
        // 0x8002CEE0: nop
    
            goto L_8002CF24;
    }
    // 0x8002CEE0: nop

    // 0x8002CEE4: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CEE8: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CEEC: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8002CEF0: jal         0x8002C144
    // 0x8002CEF4: nop

    func_8002C144(rdram, ctx);
        goto after_4;
    // 0x8002CEF4: nop

    after_4:
    // 0x8002CEF8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002CEFC: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x8002CF00: nop

    // 0x8002CF04: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8002CF08: bne         $t9, $zero, L_8002CF24
    if (ctx->r25 != 0) {
        // 0x8002CF0C: nop
    
            goto L_8002CF24;
    }
    // 0x8002CF0C: nop

    // 0x8002CF10: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002CF14: addiu       $t0, $t0, 0x7760
    ctx->r8 = ADD32(ctx->r8, 0X7760);
    // 0x8002CF18: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002CF1C: nop

    // 0x8002CF20: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
L_8002CF24:
    // 0x8002CF24: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002CF28: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8002CF2C: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CF30: nop

    // 0x8002CF34: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
    // 0x8002CF38: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002CF3C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8002CF40: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CF44: nop

    // 0x8002CF48: swc1        $f16, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f16.u32l;
    // 0x8002CF4C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002CF50: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8002CF54: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8002CF58: nop

    // 0x8002CF5C: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x8002CF60: b           L_8002CF68
    // 0x8002CF64: nop

        goto L_8002CF68;
    // 0x8002CF64: nop

L_8002CF68:
    // 0x8002CF68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CF6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8002CF70: jr          $ra
    // 0x8002CF74: nop

    return;
    // 0x8002CF74: nop

;}
RECOMP_FUNC void func_80019D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019D2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019D34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80019D38:
    // 0x80019D38: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80019D3C: jal         0x80019CCC
    // 0x80019D40: nop

    func_80019CCC(rdram, ctx);
        goto after_0;
    // 0x80019D40: nop

    after_0:
    // 0x80019D44: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80019D48: nop

    // 0x80019D4C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80019D50: slti        $at, $t7, 0x100
    ctx->r1 = SIGNED(ctx->r15) < 0X100 ? 1 : 0;
    // 0x80019D54: bne         $at, $zero, L_80019D38
    if (ctx->r1 != 0) {
        // 0x80019D58: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80019D38;
    }
    // 0x80019D58: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80019D5C: b           L_80019D64
    // 0x80019D60: nop

        goto L_80019D64;
    // 0x80019D60: nop

L_80019D64:
    // 0x80019D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019D6C: jr          $ra
    // 0x80019D70: nop

    return;
    // 0x80019D70: nop

;}
RECOMP_FUNC void func_8001F8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F8A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001F8A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F8A8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001F8AC: lw          $t6, 0x6DF8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DF8);
    // 0x8001F8B0: nop

    // 0x8001F8B4: beq         $t6, $zero, L_8001F8C4
    if (ctx->r14 == 0) {
        // 0x8001F8B8: nop
    
            goto L_8001F8C4;
    }
    // 0x8001F8B8: nop

    // 0x8001F8BC: b           L_8001F928
    // 0x8001F8C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001F928;
    // 0x8001F8C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001F8C4:
    // 0x8001F8C4: jal         0x8001EEB0
    // 0x8001F8C8: nop

    GetSi_Status(rdram, ctx);
        goto after_0;
    // 0x8001F8C8: nop

    after_0:
    // 0x8001F8CC: beq         $v0, $zero, L_8001F8DC
    if (ctx->r2 == 0) {
        // 0x8001F8D0: nop
    
            goto L_8001F8DC;
    }
    // 0x8001F8D0: nop

    // 0x8001F8D4: b           L_8001F928
    // 0x8001F8D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001F928;
    // 0x8001F8D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001F8DC:
    // 0x8001F8DC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001F8E0: jal         0x8003A240
    // 0x8001F8E4: addiu       $a0, $a0, 0x6D90
    ctx->r4 = ADD32(ctx->r4, 0X6D90);
    osMotorStart_recomp(rdram, ctx);
        goto after_1;
    // 0x8001F8E4: addiu       $a0, $a0, 0x6D90
    ctx->r4 = ADD32(ctx->r4, 0X6D90);
    after_1:
    // 0x8001F8E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8001F8EC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F8F0: nop

    // 0x8001F8F4: beq         $t7, $zero, L_8001F920
    if (ctx->r15 == 0) {
        // 0x8001F8F8: nop
    
            goto L_8001F920;
    }
    // 0x8001F8F8: nop

    // 0x8001F8FC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8001F900: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001F904: sw          $t8, 0x6DF8($at)
    MEM_W(0X6DF8, ctx->r1) = ctx->r24;
    // 0x8001F908: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001F90C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8001F910: addiu       $a1, $a1, 0x6D90
    ctx->r5 = ADD32(ctx->r5, 0X6D90);
    // 0x8001F914: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x8001F918: jal         0x8003A55C
    // 0x8001F91C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osMotorInit_recomp(rdram, ctx);
        goto after_2;
    // 0x8001F91C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8001F920:
    // 0x8001F920: b           L_8001F928
    // 0x8001F924: nop

        goto L_8001F928;
    // 0x8001F924: nop

L_8001F928:
    // 0x8001F928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F92C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001F930: jr          $ra
    // 0x8001F934: nop

    return;
    // 0x8001F934: nop

;}
RECOMP_FUNC void func_800296AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800296AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800296B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800296B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800296B8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800296BC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800296C0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800296C4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800296C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800296CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800296D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800296D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800296D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800296DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800296E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800296E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800296E8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800296EC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800296F0: nop

    // 0x800296F4: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800296F8: nop

    // 0x800296FC: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80029700: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80029704: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80029708: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8002970C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80029710: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80029714: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80029718: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8002971C: jal         0x800294F0
    // 0x80029720: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800294F0(rdram, ctx);
        goto after_0;
    // 0x80029720: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80029724: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80029728: nop

    // 0x8002972C: bne         $t1, $zero, L_8002974C
    if (ctx->r9 != 0) {
        // 0x80029730: nop
    
            goto L_8002974C;
    }
    // 0x80029730: nop

    // 0x80029734: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029738: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8002973C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80029740: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80029744: b           L_80029760
    // 0x80029748: swc1        $f18, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f18.u32l;
        goto L_80029760;
    // 0x80029748: swc1        $f18, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f18.u32l;
L_8002974C:
    // 0x8002974C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80029750: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80029754: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80029758: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002975C: swc1        $f8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f8.u32l;
L_80029760:
    // 0x80029760: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80029764: nop

    // 0x80029768: bne         $t4, $zero, L_800297BC
    if (ctx->r12 != 0) {
        // 0x8002976C: nop
    
            goto L_800297BC;
    }
    // 0x8002976C: nop

    // 0x80029770: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80029774: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029778: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8002977C: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80029780: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    // 0x80029784: jal         0x80067748
    // 0x80029788: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    func_80067748(rdram, ctx);
        goto after_1;
    // 0x80029788: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    after_1:
    // 0x8002978C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80029790: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x80029794: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80029798: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8002979C: bne         $t7, $at, L_800297BC
    if (ctx->r15 != ctx->r1) {
        // 0x800297A0: nop
    
            goto L_800297BC;
    }
    // 0x800297A0: nop

    // 0x800297A4: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800297A8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800297AC: nop

    // 0x800297B0: swc1        $f18, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f18.u32l;
    // 0x800297B4: b           L_800297CC
    // 0x800297B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800297CC;
    // 0x800297B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800297BC:
    // 0x800297BC: b           L_800297CC
    // 0x800297C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800297CC;
    // 0x800297C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800297C4: b           L_800297CC
    // 0x800297C8: nop

        goto L_800297CC;
    // 0x800297C8: nop

L_800297CC:
    // 0x800297CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800297D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800297D4: jr          $ra
    // 0x800297D8: nop

    return;
    // 0x800297D8: nop

;}
RECOMP_FUNC void printf_stub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017FD8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80017FDC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80017FE0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80017FE4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80017FE8: b           L_80017FF0
    // 0x80017FEC: nop

        goto L_80017FF0;
    // 0x80017FEC: nop

L_80017FF0:
    // 0x80017FF0: jr          $ra
    // 0x80017FF4: nop

    return;
    // 0x80017FF4: nop

;}
RECOMP_FUNC void func_80023404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80023404: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80023408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002340C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80023410: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80023414: addiu       $at, $zero, 0x13E
    ctx->r1 = ADD32(0, 0X13E);
    // 0x80023418: lh          $t7, 0x106($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X106);
    // 0x8002341C: nop

    // 0x80023420: beq         $t7, $at, L_8002344C
    if (ctx->r15 == ctx->r1) {
        // 0x80023424: nop
    
            goto L_8002344C;
    }
    // 0x80023424: nop

    // 0x80023428: addiu       $at, $zero, 0x1B1
    ctx->r1 = ADD32(0, 0X1B1);
    // 0x8002342C: beq         $t7, $at, L_8002344C
    if (ctx->r15 == ctx->r1) {
        // 0x80023430: nop
    
            goto L_8002344C;
    }
    // 0x80023430: nop

    // 0x80023434: addiu       $at, $zero, 0x1B4
    ctx->r1 = ADD32(0, 0X1B4);
    // 0x80023438: beq         $t7, $at, L_8002344C
    if (ctx->r15 == ctx->r1) {
        // 0x8002343C: nop
    
            goto L_8002344C;
    }
    // 0x8002343C: nop

    // 0x80023440: addiu       $at, $zero, 0x1B5
    ctx->r1 = ADD32(0, 0X1B5);
    // 0x80023444: bne         $t7, $at, L_8002345C
    if (ctx->r15 != ctx->r1) {
        // 0x80023448: nop
    
            goto L_8002345C;
    }
    // 0x80023448: nop

L_8002344C:
    // 0x8002344C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80023450: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023454: b           L_8002351C
    // 0x80023458: sb          $t8, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r24;
        goto L_8002351C;
    // 0x80023458: sb          $t8, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r24;
L_8002345C:
    // 0x8002345C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80023460: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80023464: nop

    // 0x80023468: lh          $t0, 0x104($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X104);
    // 0x8002346C: nop

    // 0x80023470: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80023474: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80023478: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8002347C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80023480: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80023484: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80023488: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8002348C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80023490: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80023494: lb          $t3, 0x4252($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4252);
    // 0x80023498: nop

    // 0x8002349C: beq         $t3, $zero, L_800234BC
    if (ctx->r11 == 0) {
        // 0x800234A0: nop
    
            goto L_800234BC;
    }
    // 0x800234A0: nop

    // 0x800234A4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800234A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800234AC: sw          $t4, 0x7648($at)
    MEM_W(0X7648, ctx->r1) = ctx->r12;
    // 0x800234B0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800234B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800234B8: sb          $t5, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r13;
L_800234BC:
    // 0x800234BC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800234C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800234C4: sw          $t6, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r14;
    // 0x800234C8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800234CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800234D0: sw          $t7, 0x7A64($at)
    MEM_W(0X7A64, ctx->r1) = ctx->r15;
    // 0x800234D4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800234D8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800234DC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800234E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800234E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800234E8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800234EC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800234F0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800234F4: lh          $t0, 0x4234($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4234);
    // 0x800234F8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800234FC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80023500: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80023504: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x80023508: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x8002350C: lw          $t9, 0x4DAC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DAC);
    // 0x80023510: nop

    // 0x80023514: jalr        $t9
    // 0x80023518: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80023518: nop

    after_0:
L_8002351C:
    // 0x8002351C: b           L_80023524
    // 0x80023520: nop

        goto L_80023524;
    // 0x80023520: nop

L_80023524:
    // 0x80023524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002352C: jr          $ra
    // 0x80023530: nop

    return;
    // 0x80023530: nop

;}
RECOMP_FUNC void func_80000DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000DB4: lui         $t6, 0x14
    ctx->r14 = S32(0X14 << 16);
    // 0x80000DB8: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x80000DBC: addiu       $t7, $t7, -0x3AC0
    ctx->r15 = ADD32(ctx->r15, -0X3AC0);
    // 0x80000DC0: addiu       $t6, $t6, 0x7BB0
    ctx->r14 = ADD32(ctx->r14, 0X7BB0);
    // 0x80000DC4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80000DC8: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80000DCC: jal         0x8000068C
    // 0x80000DD0: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000DD0: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    after_0:
    // 0x80000DD4: lui         $t8, 0x15
    ctx->r24 = S32(0X15 << 16);
    // 0x80000DD8: lui         $t9, 0x15
    ctx->r25 = S32(0X15 << 16);
    // 0x80000DDC: addiu       $t9, $t9, 0x7A00
    ctx->r25 = ADD32(ctx->r25, 0X7A00);
    // 0x80000DE0: addiu       $t8, $t8, 0x7520
    ctx->r24 = ADD32(ctx->r24, 0X7520);
    // 0x80000DE4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80000DE8: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    // 0x80000DEC: jal         0x8000068C
    // 0x80000DF0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80000DF0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_1:
    // 0x80000DF4: b           L_80000DFC
    // 0x80000DF8: nop

        goto L_80000DFC;
    // 0x80000DF8: nop

L_80000DFC:
    // 0x80000DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000E04: jr          $ra
    // 0x80000E08: nop

    return;
    // 0x80000E08: nop

;}
RECOMP_FUNC void alLink(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800357E0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800357E4: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x800357E8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800357EC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x800357F0: beq         $v0, $zero, L_800357FC
    if (ctx->r2 == 0) {
        // 0x800357F4: nop
    
            goto L_800357FC;
    }
    // 0x800357F4: nop

    // 0x800357F8: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
L_800357FC:
    // 0x800357FC: jr          $ra
    // 0x80035800: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    return;
    // 0x80035800: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_8000401C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000401C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80004020: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80004024: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80004028: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000402C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80004030: lw          $t6, -0x5CC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CC0);
    // 0x80004034: nop

    // 0x80004038: bne         $t6, $zero, L_80004048
    if (ctx->r14 != 0) {
        // 0x8000403C: nop
    
            goto L_80004048;
    }
    // 0x8000403C: nop

    // 0x80004040: b           L_800041D0
    // 0x80004044: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800041D0;
    // 0x80004044: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80004048:
    // 0x80004048: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000404C: lw          $t8, 0x2EB0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2EB0);
    // 0x80004050: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x80004054: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x80004058: nop

    // 0x8000405C: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80004060: beq         $at, $zero, L_80004070
    if (ctx->r1 == 0) {
        // 0x80004064: nop
    
            goto L_80004070;
    }
    // 0x80004064: nop

    // 0x80004068: bgez        $t7, L_80004078
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8000406C: nop
    
            goto L_80004078;
    }
    // 0x8000406C: nop

L_80004070:
    // 0x80004070: b           L_800041D0
    // 0x80004074: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800041D0;
    // 0x80004074: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80004078:
    // 0x80004078: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000407C: lw          $t0, 0x2EB0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2EB0);
    // 0x80004080: addiu       $at, $zero, 0x5331
    ctx->r1 = ADD32(0, 0X5331);
    // 0x80004084: lh          $s0, 0x0($t0)
    ctx->r16 = MEM_H(ctx->r8, 0X0);
    // 0x80004088: nop

    // 0x8000408C: beq         $s0, $at, L_800040FC
    if (ctx->r16 == ctx->r1) {
        // 0x80004090: nop
    
            goto L_800040FC;
    }
    // 0x80004090: nop

    // 0x80004094: addiu       $at, $zero, 0x5332
    ctx->r1 = ADD32(0, 0X5332);
    // 0x80004098: beq         $s0, $at, L_800040A8
    if (ctx->r16 == ctx->r1) {
        // 0x8000409C: nop
    
            goto L_800040A8;
    }
    // 0x8000409C: nop

    // 0x800040A0: b           L_80004128
    // 0x800040A4: nop

        goto L_80004128;
    // 0x800040A4: nop

L_800040A8:
    // 0x800040A8: lh          $t2, 0x2A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2A);
    // 0x800040AC: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800040B0: lw          $t1, 0x2EB0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2EB0);
    // 0x800040B4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x800040B8: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x800040BC: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x800040C0: nop

    // 0x800040C4: bgez        $t5, L_800040D4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800040C8: nop
    
            goto L_800040D4;
    }
    // 0x800040C8: nop

    // 0x800040CC: b           L_800041D0
    // 0x800040D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800041D0;
    // 0x800040D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800040D4:
    // 0x800040D4: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x800040D8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800040DC: lw          $t6, 0x2EB4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EB4);
    // 0x800040E0: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800040E4: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x800040E8: lbu         $t0, 0x1($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X1);
    // 0x800040EC: nop

    // 0x800040F0: sb          $t0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r8;
    // 0x800040F4: b           L_80004130
    // 0x800040F8: nop

        goto L_80004130;
    // 0x800040F8: nop

L_800040FC:
    // 0x800040FC: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x80004100: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80004104: lw          $t2, 0x2EB0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2EB0);
    // 0x80004108: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x8000410C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80004110: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80004114: nop

    // 0x80004118: bgez        $t5, L_80004128
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8000411C: nop
    
            goto L_80004128;
    }
    // 0x8000411C: nop

    // 0x80004120: b           L_800041D0
    // 0x80004124: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800041D0;
    // 0x80004124: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80004128:
    // 0x80004128: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x8000412C: sb          $t8, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r24;
L_80004130:
    // 0x80004130: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80004134: jal         0x80002D90
    // 0x80004138: nop

    func_80002D90(rdram, ctx);
        goto after_0;
    // 0x80004138: nop

    after_0:
    // 0x8000413C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80004140: sh          $v0, 0x2ED0($at)
    MEM_H(0X2ED0, ctx->r1) = ctx->r2;
    // 0x80004144: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80004148: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x8000414C: jal         0x80034710
    // 0x80004150: nop

    alSeqpGetState(rdram, ctx);
        goto after_1;
    // 0x80004150: nop

    after_1:
    // 0x80004154: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80004158: bne         $v0, $at, L_80004190
    if (ctx->r2 != ctx->r1) {
        // 0x8000415C: nop
    
            goto L_80004190;
    }
    // 0x8000415C: nop

    // 0x80004160: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80004164: lw          $t6, 0x2EC0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EC0);
    // 0x80004168: nop

    // 0x8000416C: andi        $t9, $t6, 0x1
    ctx->r25 = ctx->r14 & 0X1;
    // 0x80004170: bne         $t9, $zero, L_80004190
    if (ctx->r25 != 0) {
        // 0x80004174: nop
    
            goto L_80004190;
    }
    // 0x80004174: nop

    // 0x80004178: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000417C: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80004180: jal         0x80034720
    // 0x80004184: nop

    alSeqpStop(rdram, ctx);
        goto after_2;
    // 0x80004184: nop

    after_2:
    // 0x80004188: b           L_8000419C
    // 0x8000418C: nop

        goto L_8000419C;
    // 0x8000418C: nop

L_80004190:
    // 0x80004190: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80004194: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80004198: sw          $t7, 0x2EBC($at)
    MEM_W(0X2EBC, ctx->r1) = ctx->r15;
L_8000419C:
    // 0x8000419C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800041A0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800041A4: swc1        $f4, 0x2EC4($at)
    MEM_W(0X2EC4, ctx->r1) = ctx->f4.u32l;
    // 0x800041A8: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x800041AC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800041B0: sh          $t0, 0x2ECC($at)
    MEM_H(0X2ECC, ctx->r1) = ctx->r8;
    // 0x800041B4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800041B8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800041BC: sw          $t1, 0x2EC0($at)
    MEM_W(0X2EC0, ctx->r1) = ctx->r9;
    // 0x800041C0: b           L_800041D0
    // 0x800041C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800041D0;
    // 0x800041C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800041C8: b           L_800041D0
    // 0x800041CC: nop

        goto L_800041D0;
    // 0x800041CC: nop

L_800041D0:
    // 0x800041D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800041D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800041D8: jr          $ra
    // 0x800041DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800041DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80013A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013A08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80013A0C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80013A10: lw          $t6, -0x5C2C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5C2C);
    // 0x80013A14: nop

    // 0x80013A18: beq         $t6, $zero, L_80013A30
    if (ctx->r14 == 0) {
        // 0x80013A1C: nop
    
            goto L_80013A30;
    }
    // 0x80013A1C: nop

    // 0x80013A20: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80013A24: lw          $a0, -0x5C2C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5C2C);
    // 0x80013A28: jal         0x800309D0
    // 0x80013A2C: nop

    free_game(rdram, ctx);
        goto after_0;
    // 0x80013A2C: nop

    after_0:
L_80013A30:
    // 0x80013A30: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80013A34: sw          $zero, -0x5C2C($at)
    MEM_W(-0X5C2C, ctx->r1) = 0;
    // 0x80013A38: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80013A3C: sw          $zero, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = 0;
    // 0x80013A40: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80013A44: lw          $t7, -0x5C30($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5C30);
    // 0x80013A48: nop

    // 0x80013A4C: beq         $t7, $zero, L_80013A64
    if (ctx->r15 == 0) {
        // 0x80013A50: nop
    
            goto L_80013A64;
    }
    // 0x80013A50: nop

    // 0x80013A54: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80013A58: lw          $a0, -0x5C30($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5C30);
    // 0x80013A5C: jal         0x800309D0
    // 0x80013A60: nop

    free_game(rdram, ctx);
        goto after_1;
    // 0x80013A60: nop

    after_1:
L_80013A64:
    // 0x80013A64: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80013A68: sw          $zero, -0x5C30($at)
    MEM_W(-0X5C30, ctx->r1) = 0;
    // 0x80013A6C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80013A70: sw          $zero, 0x5D64($at)
    MEM_W(0X5D64, ctx->r1) = 0;
    // 0x80013A74: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80013A78: nop

    // 0x80013A7C: lw          $t9, 0x6C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X6C);
    // 0x80013A80: nop

    // 0x80013A84: beq         $t9, $zero, L_80013A98
    if (ctx->r25 == 0) {
        // 0x80013A88: nop
    
            goto L_80013A98;
    }
    // 0x80013A88: nop

    // 0x80013A8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80013A90: jal         0x80013948
    // 0x80013A94: nop

    func_80013948(rdram, ctx);
        goto after_2;
    // 0x80013A94: nop

    after_2:
L_80013A98:
    // 0x80013A98: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80013A9C: nop

    // 0x80013AA0: lw          $t1, 0x64($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X64);
    // 0x80013AA4: nop

    // 0x80013AA8: beq         $t1, $zero, L_80013ABC
    if (ctx->r9 == 0) {
        // 0x80013AAC: nop
    
            goto L_80013ABC;
    }
    // 0x80013AAC: nop

    // 0x80013AB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80013AB4: jal         0x80013754
    // 0x80013AB8: nop

    func_80013754(rdram, ctx);
        goto after_3;
    // 0x80013AB8: nop

    after_3:
L_80013ABC:
    // 0x80013ABC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80013AC0: jal         0x800309D0
    // 0x80013AC4: nop

    free_game(rdram, ctx);
        goto after_4;
    // 0x80013AC4: nop

    after_4:
    // 0x80013AC8: b           L_80013AD0
    // 0x80013ACC: nop

        goto L_80013AD0;
    // 0x80013ACC: nop

L_80013AD0:
    // 0x80013AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80013AD8: jr          $ra
    // 0x80013ADC: nop

    return;
    // 0x80013ADC: nop

;}
RECOMP_FUNC void func_800194C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800194C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800194C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800194CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800194D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800194D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800194D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800194DC: jal         0x800193CC
    // 0x800194E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800193CC(rdram, ctx);
        goto after_0;
    // 0x800194E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800194E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800194E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800194EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800194F0: jal         0x80019448
    // 0x800194F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x800194F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x800194F8: b           L_80019500
    // 0x800194FC: nop

        goto L_80019500;
    // 0x800194FC: nop

L_80019500:
    // 0x80019500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80019508: jr          $ra
    // 0x8001950C: nop

    return;
    // 0x8001950C: nop

;}
RECOMP_FUNC void func_80016FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016FF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016FFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017000: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80017004: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x80017008: jal         0x8000435C
    // 0x8001700C: nop

    func_8000435C(rdram, ctx);
        goto after_0;
    // 0x8001700C: nop

    after_0:
    // 0x80017010: b           L_80017018
    // 0x80017014: nop

        goto L_80017018;
    // 0x80017014: nop

L_80017018:
    // 0x80017018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001701C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017020: jr          $ra
    // 0x80017024: nop

    return;
    // 0x80017024: nop

;}
RECOMP_FUNC void func_8001DC78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DC78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DC7C: sb          $zero, 0x76F8($at)
    MEM_B(0X76F8, ctx->r1) = 0;
    // 0x8001DC80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DC84: sb          $zero, 0x7708($at)
    MEM_B(0X7708, ctx->r1) = 0;
    // 0x8001DC88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DC8C: sw          $zero, 0x7718($at)
    MEM_W(0X7718, ctx->r1) = 0;
    // 0x8001DC90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DC94: sw          $zero, 0x7728($at)
    MEM_W(0X7728, ctx->r1) = 0;
    // 0x8001DC98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DC9C: sw          $zero, 0x7738($at)
    MEM_W(0X7738, ctx->r1) = 0;
    // 0x8001DCA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001DCA4: addiu       $t6, $t6, 0x7748
    ctx->r14 = ADD32(ctx->r14, 0X7748);
    // 0x8001DCA8: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x8001DCAC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001DCB0: addiu       $t7, $t7, 0x7758
    ctx->r15 = ADD32(ctx->r15, 0X7758);
    // 0x8001DCB4: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x8001DCB8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001DCBC: addiu       $t8, $t8, 0x7768
    ctx->r24 = ADD32(ctx->r24, 0X7768);
    // 0x8001DCC0: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x8001DCC4: jr          $ra
    // 0x8001DCC8: nop

    return;
    // 0x8001DCC8: nop

    // 0x8001DCCC: jr          $ra
    // 0x8001DCD0: nop

    return;
    // 0x8001DCD0: nop

;}
RECOMP_FUNC void func_800122F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800122F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800122F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800122F8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800122FC: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80012300: nop

    // 0x80012304: addiu       $t7, $t6, 0xC
    ctx->r15 = ADD32(ctx->r14, 0XC);
    // 0x80012308: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8001230C: jal         0x8002FC34
    // 0x80012310: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    malloc_game(rdram, ctx);
        goto after_0;
    // 0x80012310: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    after_0:
    // 0x80012314: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80012318: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8001231C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80012320: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80012324: nop

    // 0x80012328: sw          $t9, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->r25;
    // 0x8001232C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80012330: nop

    // 0x80012334: sw          $zero, 0x6C($t1)
    MEM_W(0X6C, ctx->r9) = 0;
    // 0x80012338: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8001233C: nop

    // 0x80012340: sw          $zero, 0x64($t2)
    MEM_W(0X64, ctx->r10) = 0;
    // 0x80012344: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_80012348:
    // 0x80012348: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8001234C: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80012350: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80012354: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80012358: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8001235C: lw          $t5, -0x5C28($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5C28);
    // 0x80012360: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x80012364: sw          $t5, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r13;
    // 0x80012368: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8001236C: nop

    // 0x80012370: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80012374: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x80012378: bne         $at, $zero, L_80012348
    if (ctx->r1 != 0) {
        // 0x8001237C: sw          $t9, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r25;
            goto L_80012348;
    }
    // 0x8001237C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80012380: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_80012384:
    // 0x80012384: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80012388: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8001238C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80012390: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80012394: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80012398: lw          $t2, -0x5C1C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5C1C);
    // 0x8001239C: addu        $t6, $t3, $t1
    ctx->r14 = ADD32(ctx->r11, ctx->r9);
    // 0x800123A0: sw          $t2, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r10;
    // 0x800123A4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800123A8: nop

    // 0x800123AC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800123B0: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x800123B4: bne         $at, $zero, L_80012384
    if (ctx->r1 != 0) {
        // 0x800123B8: sw          $t5, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r13;
            goto L_80012384;
    }
    // 0x800123B8: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x800123BC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800123C0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x800123C4: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x800123C8: nop

    // 0x800123CC: beq         $t8, $zero, L_80012428
    if (ctx->r24 == 0) {
        // 0x800123D0: nop
    
            goto L_80012428;
    }
    // 0x800123D0: nop

L_800123D4:
    // 0x800123D4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800123D8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800123DC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800123E0: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x800123E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800123E8: addu        $t1, $t9, $t3
    ctx->r9 = ADD32(ctx->r25, ctx->r11);
    // 0x800123EC: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x800123F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800123F4: bne         $t2, $at, L_80012404
    if (ctx->r10 != ctx->r1) {
        // 0x800123F8: nop
    
            goto L_80012404;
    }
    // 0x800123F8: nop

    // 0x800123FC: b           L_80012428
    // 0x80012400: nop

        goto L_80012428;
    // 0x80012400: nop

L_80012404:
    // 0x80012404: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80012408: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8001240C: addiu       $t4, $t6, 0x1
    ctx->r12 = ADD32(ctx->r14, 0X1);
    // 0x80012410: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x80012414: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x80012418: nop

    // 0x8001241C: sltu        $at, $t4, $t7
    ctx->r1 = ctx->r12 < ctx->r15 ? 1 : 0;
    // 0x80012420: bne         $at, $zero, L_800123D4
    if (ctx->r1 != 0) {
        // 0x80012424: nop
    
            goto L_800123D4;
    }
    // 0x80012424: nop

L_80012428:
    // 0x80012428: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8001242C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80012430: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x80012434: nop

    // 0x80012438: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x8001243C: beq         $at, $zero, L_80012470
    if (ctx->r1 == 0) {
        // 0x80012440: nop
    
            goto L_80012470;
    }
    // 0x80012440: nop

    // 0x80012444: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80012448: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8001244C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80012450: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80012454: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80012458: addu        $t6, $t3, $t2
    ctx->r14 = ADD32(ctx->r11, ctx->r10);
    // 0x8001245C: lw          $t5, 0x8($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X8);
    // 0x80012460: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80012464: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80012468: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x8001246C: sw          $t7, 0x5D50($at)
    MEM_W(0X5D50, ctx->r1) = ctx->r15;
L_80012470:
    // 0x80012470: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80012474: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80012478: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x8001247C: nop

    // 0x80012480: beq         $t8, $zero, L_800124DC
    if (ctx->r24 == 0) {
        // 0x80012484: nop
    
            goto L_800124DC;
    }
    // 0x80012484: nop

L_80012488:
    // 0x80012488: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8001248C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80012490: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80012494: subu        $t3, $t3, $t1
    ctx->r11 = SUB32(ctx->r11, ctx->r9);
    // 0x80012498: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001249C: addu        $t2, $t9, $t3
    ctx->r10 = ADD32(ctx->r25, ctx->r11);
    // 0x800124A0: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x800124A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800124A8: bne         $t6, $at, L_800124B8
    if (ctx->r14 != ctx->r1) {
        // 0x800124AC: nop
    
            goto L_800124B8;
    }
    // 0x800124AC: nop

    // 0x800124B0: b           L_800124DC
    // 0x800124B4: nop

        goto L_800124DC;
    // 0x800124B4: nop

L_800124B8:
    // 0x800124B8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800124BC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800124C0: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x800124C4: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x800124C8: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x800124CC: nop

    // 0x800124D0: sltu        $at, $t4, $t0
    ctx->r1 = ctx->r12 < ctx->r8 ? 1 : 0;
    // 0x800124D4: bne         $at, $zero, L_80012488
    if (ctx->r1 != 0) {
        // 0x800124D8: nop
    
            goto L_80012488;
    }
    // 0x800124D8: nop

L_800124DC:
    // 0x800124DC: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800124E0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800124E4: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x800124E8: nop

    // 0x800124EC: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x800124F0: beq         $at, $zero, L_80012C70
    if (ctx->r1 == 0) {
        // 0x800124F4: nop
    
            goto L_80012C70;
    }
    // 0x800124F4: nop

    // 0x800124F8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800124FC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80012500: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80012504: subu        $t6, $t6, $t2
    ctx->r14 = SUB32(ctx->r14, ctx->r10);
    // 0x80012508: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001250C: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x80012510: lw          $t7, 0x8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X8);
    // 0x80012514: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80012518: nop

    // 0x8001251C: addu        $t0, $t7, $t4
    ctx->r8 = ADD32(ctx->r15, ctx->r12);
    // 0x80012520: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80012524: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80012528: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8001252C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80012530: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80012534: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80012538: addu        $t2, $t1, $t9
    ctx->r10 = ADD32(ctx->r9, ctx->r25);
    // 0x8001253C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80012540: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80012544: nop

    // 0x80012548: sw          $t3, 0x68($t6)
    MEM_W(0X68, ctx->r14) = ctx->r11;
    // 0x8001254C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80012550: nop

    // 0x80012554: lw          $a0, 0x68($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X68);
    // 0x80012558: nop

    // 0x8001255C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80012560: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80012564: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012568: jal         0x8002FC34
    // 0x8001256C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    malloc_game(rdram, ctx);
        goto after_1;
    // 0x8001256C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x80012570: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80012574: nop

    // 0x80012578: sw          $v0, 0x64($t4)
    MEM_W(0X64, ctx->r12) = ctx->r2;
    // 0x8001257C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80012580: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80012584: lw          $t8, 0x68($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X68);
    // 0x80012588: nop

    // 0x8001258C: blez        $t8, L_80012C68
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80012590: nop
    
            goto L_80012C68;
    }
    // 0x80012590: nop

L_80012594:
    // 0x80012594: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80012598: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8001259C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800125A0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800125A4: lw          $t3, 0x64($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X64);
    // 0x800125A8: subu        $t5, $t5, $t6
    ctx->r13 = SUB32(ctx->r13, ctx->r14);
    // 0x800125AC: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x800125B0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800125B4: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x800125B8: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x800125BC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800125C0: nop

    // 0x800125C4: addiu       $t0, $t4, 0x4
    ctx->r8 = ADD32(ctx->r12, 0X4);
    // 0x800125C8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800125CC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800125D0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800125D4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800125D8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800125DC: lw          $t6, 0x64($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X64);
    // 0x800125E0: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x800125E4: lw          $t1, 0x0($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X0);
    // 0x800125E8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800125EC: addu        $t9, $t6, $t5
    ctx->r25 = ADD32(ctx->r14, ctx->r13);
    // 0x800125F0: sw          $t1, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r9;
    // 0x800125F4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800125F8: nop

    // 0x800125FC: addiu       $t4, $t7, 0x4
    ctx->r12 = ADD32(ctx->r15, 0X4);
    // 0x80012600: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80012604: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80012608: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8001260C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80012610: lw          $t8, 0x64($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X64);
    // 0x80012614: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80012618: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001261C: addu        $t6, $t8, $t3
    ctx->r14 = ADD32(ctx->r24, ctx->r11);
    // 0x80012620: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x80012624: nop

    // 0x80012628: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x8001262C: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x80012630: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80012634: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x80012638: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8001263C: jal         0x8002FC34
    // 0x80012640: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    malloc_game(rdram, ctx);
        goto after_2;
    // 0x80012640: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_2:
    // 0x80012644: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80012648: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8001264C: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80012650: lw          $t9, 0x64($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X64);
    // 0x80012654: subu        $t4, $t4, $t7
    ctx->r12 = SUB32(ctx->r12, ctx->r15);
    // 0x80012658: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001265C: addu        $t0, $t9, $t4
    ctx->r8 = ADD32(ctx->r25, ctx->r12);
    // 0x80012660: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x80012664: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80012668: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8001266C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80012670: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80012674: lw          $t8, 0x64($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X64);
    // 0x80012678: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x8001267C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80012680: addu        $t5, $t8, $t6
    ctx->r13 = ADD32(ctx->r24, ctx->r14);
    // 0x80012684: lw          $t1, 0x8($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X8);
    // 0x80012688: nop

    // 0x8001268C: blez        $t1, L_80012C44
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80012690: nop
    
            goto L_80012C44;
    }
    // 0x80012690: nop

L_80012694:
    // 0x80012694: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80012698: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8001269C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800126A0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800126A4: lw          $t0, 0x64($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X64);
    // 0x800126A8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800126AC: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x800126B0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800126B4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800126B8: subu        $t1, $t1, $t5
    ctx->r9 = SUB32(ctx->r9, ctx->r13);
    // 0x800126BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800126C0: addu        $t8, $t0, $t3
    ctx->r24 = ADD32(ctx->r8, ctx->r11);
    // 0x800126C4: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x800126C8: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x800126CC: subu        $t1, $t1, $t5
    ctx->r9 = SUB32(ctx->r9, ctx->r13);
    // 0x800126D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800126D4: addu        $t7, $t6, $t1
    ctx->r15 = ADD32(ctx->r14, ctx->r9);
    // 0x800126D8: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x800126DC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800126E0: nop

    // 0x800126E4: addiu       $t2, $t4, 0x4
    ctx->r10 = ADD32(ctx->r12, 0X4);
    // 0x800126E8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x800126EC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800126F0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800126F4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800126F8: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x800126FC: lw          $t3, 0x64($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X64);
    // 0x80012700: subu        $t5, $t5, $t8
    ctx->r13 = SUB32(ctx->r13, ctx->r24);
    // 0x80012704: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80012708: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8001270C: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x80012710: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012714: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80012718: lw          $t1, 0x4($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X4);
    // 0x8001271C: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x80012720: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012724: addu        $t4, $t1, $t7
    ctx->r12 = ADD32(ctx->r9, ctx->r15);
    // 0x80012728: lw          $a0, 0x4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X4);
    // 0x8001272C: nop

    // 0x80012730: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x80012734: jal         0x8002FC34
    // 0x80012738: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    malloc_game(rdram, ctx);
        goto after_3;
    // 0x80012738: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_3:
    // 0x8001273C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80012740: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80012744: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80012748: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8001274C: lw          $t8, 0x64($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X64);
    // 0x80012750: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x80012754: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80012758: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8001275C: subu        $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x80012760: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012764: addu        $t6, $t8, $t5
    ctx->r14 = ADD32(ctx->r24, ctx->r13);
    // 0x80012768: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8001276C: subu        $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x80012770: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012774: addu        $t4, $t9, $t7
    ctx->r12 = ADD32(ctx->r25, ctx->r15);
    // 0x80012778: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    // 0x8001277C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80012780: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80012784: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80012788: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8001278C: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80012790: lw          $t0, 0x64($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X64);
    // 0x80012794: subu        $t8, $t8, $t3
    ctx->r24 = SUB32(ctx->r24, ctx->r11);
    // 0x80012798: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8001279C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800127A0: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x800127A4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800127A8: addu        $t5, $t0, $t8
    ctx->r13 = ADD32(ctx->r8, ctx->r24);
    // 0x800127AC: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x800127B0: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x800127B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800127B8: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x800127BC: lw          $t4, 0x4($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X4);
    // 0x800127C0: nop

    // 0x800127C4: blez        $t4, L_80012890
    if (SIGNED(ctx->r12) <= 0) {
        // 0x800127C8: nop
    
            goto L_80012890;
    }
    // 0x800127C8: nop

L_800127CC:
    // 0x800127CC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800127D0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800127D4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800127D8: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x800127DC: lw          $t8, 0x64($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X64);
    // 0x800127E0: subu        $t1, $t1, $t5
    ctx->r9 = SUB32(ctx->r9, ctx->r13);
    // 0x800127E4: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x800127E8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800127EC: subu        $t4, $t4, $t7
    ctx->r12 = SUB32(ctx->r12, ctx->r15);
    // 0x800127F0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800127F4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800127F8: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x800127FC: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80012800: subu        $t4, $t4, $t7
    ctx->r12 = SUB32(ctx->r12, ctx->r15);
    // 0x80012804: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80012808: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001280C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80012810: addu        $t2, $t9, $t4
    ctx->r10 = ADD32(ctx->r25, ctx->r12);
    // 0x80012814: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x80012818: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8001281C: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x80012820: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x80012824: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80012828: nop

    // 0x8001282C: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x80012830: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80012834: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80012838: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8001283C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80012840: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80012844: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x80012848: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x8001284C: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80012850: lw          $t5, 0x64($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X64);
    // 0x80012854: subu        $t8, $t8, $t0
    ctx->r24 = SUB32(ctx->r24, ctx->r8);
    // 0x80012858: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001285C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80012860: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80012864: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012868: addu        $t3, $t5, $t8
    ctx->r11 = ADD32(ctx->r13, ctx->r24);
    // 0x8001286C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x80012870: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80012874: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012878: addu        $t9, $t1, $t7
    ctx->r25 = ADD32(ctx->r9, ctx->r15);
    // 0x8001287C: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x80012880: nop

    // 0x80012884: slt         $at, $t4, $t2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80012888: bne         $at, $zero, L_800127CC
    if (ctx->r1 != 0) {
        // 0x8001288C: nop
    
            goto L_800127CC;
    }
    // 0x8001288C: nop

L_80012890:
    // 0x80012890: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80012894: nop

    // 0x80012898: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8001289C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800128A0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800128A4: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800128A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800128AC: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x800128B0: lw          $t3, 0x64($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X64);
    // 0x800128B4: subu        $t1, $t1, $t6
    ctx->r9 = SUB32(ctx->r9, ctx->r14);
    // 0x800128B8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800128BC: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800128C0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800128C4: subu        $t2, $t2, $t4
    ctx->r10 = SUB32(ctx->r10, ctx->r12);
    // 0x800128C8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800128CC: addu        $t7, $t3, $t1
    ctx->r15 = ADD32(ctx->r11, ctx->r9);
    // 0x800128D0: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x800128D4: subu        $t2, $t2, $t4
    ctx->r10 = SUB32(ctx->r10, ctx->r12);
    // 0x800128D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800128DC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800128E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800128E4: addu        $t0, $t9, $t2
    ctx->r8 = ADD32(ctx->r25, ctx->r10);
    // 0x800128E8: swc1        $f8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f8.u32l;
    // 0x800128EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800128F0: nop

    // 0x800128F4: addiu       $t8, $t5, 0x4
    ctx->r24 = ADD32(ctx->r13, 0X4);
    // 0x800128F8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800128FC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80012900: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80012904: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80012908: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8001290C: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80012910: lw          $t1, 0x64($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X64);
    // 0x80012914: subu        $t4, $t4, $t7
    ctx->r12 = SUB32(ctx->r12, ctx->r15);
    // 0x80012918: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x8001291C: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80012920: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80012924: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x80012928: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8001292C: addu        $t9, $t1, $t4
    ctx->r25 = ADD32(ctx->r9, ctx->r12);
    // 0x80012930: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x80012934: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x80012938: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8001293C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80012940: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80012944: addu        $t8, $t2, $t5
    ctx->r24 = ADD32(ctx->r10, ctx->r13);
    // 0x80012948: swc1        $f18, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f18.u32l;
    // 0x8001294C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80012950: nop

    // 0x80012954: addiu       $t3, $t6, 0x4
    ctx->r11 = ADD32(ctx->r14, 0X4);
    // 0x80012958: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8001295C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80012960: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80012964: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80012968: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8001296C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80012970: lw          $t4, 0x64($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X64);
    // 0x80012974: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80012978: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8001297C: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80012980: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80012984: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x80012988: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001298C: addu        $t2, $t4, $t0
    ctx->r10 = ADD32(ctx->r12, ctx->r8);
    // 0x80012990: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x80012994: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x80012998: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8001299C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800129A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800129A4: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x800129A8: swc1        $f8, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f8.u32l;
    // 0x800129AC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800129B0: nop

    // 0x800129B4: addiu       $t1, $t7, 0x4
    ctx->r9 = ADD32(ctx->r15, 0X4);
    // 0x800129B8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800129BC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800129C0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800129C4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800129C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800129CC: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x800129D0: lw          $t0, 0x64($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X64);
    // 0x800129D4: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x800129D8: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x800129DC: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800129E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800129E4: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x800129E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800129EC: addu        $t5, $t0, $t8
    ctx->r13 = ADD32(ctx->r8, ctx->r24);
    // 0x800129F0: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x800129F4: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x800129F8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800129FC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80012A00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012A04: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80012A08: swc1        $f18, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f18.u32l;
    // 0x80012A0C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80012A10: nop

    // 0x80012A14: addiu       $t4, $t9, 0x4
    ctx->r12 = ADD32(ctx->r25, 0X4);
    // 0x80012A18: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x80012A1C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80012A20: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80012A24: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80012A28: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80012A2C: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x80012A30: lw          $t8, 0x64($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X64);
    // 0x80012A34: subu        $t3, $t3, $t5
    ctx->r11 = SUB32(ctx->r11, ctx->r13);
    // 0x80012A38: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80012A3C: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80012A40: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80012A44: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x80012A48: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80012A4C: addu        $t6, $t8, $t3
    ctx->r14 = ADD32(ctx->r24, ctx->r11);
    // 0x80012A50: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80012A54: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x80012A58: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80012A5C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80012A60: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80012A64: addu        $t4, $t7, $t9
    ctx->r12 = ADD32(ctx->r15, ctx->r25);
    // 0x80012A68: swc1        $f8, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f8.u32l;
    // 0x80012A6C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80012A70: nop

    // 0x80012A74: addiu       $t0, $t2, 0x4
    ctx->r8 = ADD32(ctx->r10, 0X4);
    // 0x80012A78: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80012A7C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80012A80: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80012A84: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80012A88: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80012A8C: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80012A90: lw          $t3, 0x64($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X64);
    // 0x80012A94: subu        $t1, $t1, $t6
    ctx->r9 = SUB32(ctx->r9, ctx->r14);
    // 0x80012A98: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80012A9C: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80012AA0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80012AA4: subu        $t2, $t2, $t4
    ctx->r10 = SUB32(ctx->r10, ctx->r12);
    // 0x80012AA8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80012AAC: addu        $t7, $t3, $t1
    ctx->r15 = ADD32(ctx->r11, ctx->r9);
    // 0x80012AB0: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80012AB4: subu        $t2, $t2, $t4
    ctx->r10 = SUB32(ctx->r10, ctx->r12);
    // 0x80012AB8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80012ABC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80012AC0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80012AC4: addu        $t0, $t9, $t2
    ctx->r8 = ADD32(ctx->r25, ctx->r10);
    // 0x80012AC8: swc1        $f18, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f18.u32l;
    // 0x80012ACC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80012AD0: nop

    // 0x80012AD4: addiu       $t8, $t5, 0x4
    ctx->r24 = ADD32(ctx->r13, 0X4);
    // 0x80012AD8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80012ADC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80012AE0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80012AE4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80012AE8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80012AEC: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80012AF0: lw          $t1, 0x64($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X64);
    // 0x80012AF4: subu        $t4, $t4, $t7
    ctx->r12 = SUB32(ctx->r12, ctx->r15);
    // 0x80012AF8: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80012AFC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80012B00: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80012B04: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x80012B08: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80012B0C: addu        $t9, $t1, $t4
    ctx->r25 = ADD32(ctx->r9, ctx->r12);
    // 0x80012B10: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x80012B14: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x80012B18: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80012B1C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80012B20: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80012B24: addu        $t8, $t2, $t5
    ctx->r24 = ADD32(ctx->r10, ctx->r13);
    // 0x80012B28: swc1        $f8, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f8.u32l;
    // 0x80012B2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80012B30: nop

    // 0x80012B34: addiu       $t3, $t6, 0x4
    ctx->r11 = ADD32(ctx->r14, 0X4);
    // 0x80012B38: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80012B3C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80012B40: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80012B44: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80012B48: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80012B4C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80012B50: lw          $t4, 0x64($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X64);
    // 0x80012B54: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80012B58: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80012B5C: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80012B60: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80012B64: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x80012B68: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80012B6C: addu        $t2, $t4, $t0
    ctx->r10 = ADD32(ctx->r12, ctx->r8);
    // 0x80012B70: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x80012B74: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x80012B78: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80012B7C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80012B80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80012B84: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x80012B88: swc1        $f18, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f18.u32l;
    // 0x80012B8C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80012B90: nop

    // 0x80012B94: addiu       $t1, $t7, 0x4
    ctx->r9 = ADD32(ctx->r15, 0X4);
    // 0x80012B98: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80012B9C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80012BA0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80012BA4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80012BA8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80012BAC: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x80012BB0: lw          $t0, 0x64($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X64);
    // 0x80012BB4: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x80012BB8: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80012BBC: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80012BC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80012BC4: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80012BC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012BCC: addu        $t5, $t0, $t8
    ctx->r13 = ADD32(ctx->r8, ctx->r24);
    // 0x80012BD0: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x80012BD4: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80012BD8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80012BDC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80012BE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012BE4: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80012BE8: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
    // 0x80012BEC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80012BF0: nop

    // 0x80012BF4: addiu       $t4, $t9, 0x4
    ctx->r12 = ADD32(ctx->r25, 0X4);
    // 0x80012BF8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x80012BFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80012C00: nop

    // 0x80012C04: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80012C08: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80012C0C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80012C10: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80012C14: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x80012C18: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80012C1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80012C20: lw          $t3, 0x64($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X64);
    // 0x80012C24: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80012C28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80012C2C: addu        $t1, $t3, $t7
    ctx->r9 = ADD32(ctx->r11, ctx->r15);
    // 0x80012C30: lw          $t9, 0x8($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X8);
    // 0x80012C34: nop

    // 0x80012C38: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80012C3C: bne         $at, $zero, L_80012694
    if (ctx->r1 != 0) {
        // 0x80012C40: nop
    
            goto L_80012694;
    }
    // 0x80012C40: nop

L_80012C44:
    // 0x80012C44: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80012C48: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80012C4C: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x80012C50: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x80012C54: lw          $t5, 0x68($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X68);
    // 0x80012C58: nop

    // 0x80012C5C: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80012C60: bne         $at, $zero, L_80012594
    if (ctx->r1 != 0) {
        // 0x80012C64: nop
    
            goto L_80012594;
    }
    // 0x80012C64: nop

L_80012C68:
    // 0x80012C68: b           L_80012C7C
    // 0x80012C6C: nop

        goto L_80012C7C;
    // 0x80012C6C: nop

L_80012C70:
    // 0x80012C70: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80012C74: nop

    // 0x80012C78: sw          $zero, 0x68($t6)
    MEM_W(0X68, ctx->r14) = 0;
L_80012C7C:
    // 0x80012C7C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80012C80: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80012C84: lw          $t7, 0x4($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X4);
    // 0x80012C88: nop

    // 0x80012C8C: beq         $t7, $zero, L_80012CE8
    if (ctx->r15 == 0) {
        // 0x80012C90: nop
    
            goto L_80012CE8;
    }
    // 0x80012C90: nop

L_80012C94:
    // 0x80012C94: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80012C98: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80012C9C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80012CA0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80012CA4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80012CA8: addu        $t4, $t1, $t9
    ctx->r12 = ADD32(ctx->r9, ctx->r25);
    // 0x80012CAC: lw          $t0, 0x0($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X0);
    // 0x80012CB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80012CB4: bne         $t0, $at, L_80012CC4
    if (ctx->r8 != ctx->r1) {
        // 0x80012CB8: nop
    
            goto L_80012CC4;
    }
    // 0x80012CB8: nop

    // 0x80012CBC: b           L_80012CE8
    // 0x80012CC0: nop

        goto L_80012CE8;
    // 0x80012CC0: nop

L_80012CC4:
    // 0x80012CC4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80012CC8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80012CCC: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x80012CD0: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x80012CD4: lw          $t3, 0x4($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X4);
    // 0x80012CD8: nop

    // 0x80012CDC: sltu        $at, $t5, $t3
    ctx->r1 = ctx->r13 < ctx->r11 ? 1 : 0;
    // 0x80012CE0: bne         $at, $zero, L_80012C94
    if (ctx->r1 != 0) {
        // 0x80012CE4: nop
    
            goto L_80012C94;
    }
    // 0x80012CE4: nop

L_80012CE8:
    // 0x80012CE8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80012CEC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80012CF0: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x80012CF4: nop

    // 0x80012CF8: sltu        $at, $t7, $t1
    ctx->r1 = ctx->r15 < ctx->r9 ? 1 : 0;
    // 0x80012CFC: beq         $at, $zero, L_8001350C
    if (ctx->r1 == 0) {
        // 0x80012D00: nop
    
            goto L_8001350C;
    }
    // 0x80012D00: nop

    // 0x80012D04: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80012D08: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80012D0C: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x80012D10: subu        $t0, $t0, $t4
    ctx->r8 = SUB32(ctx->r8, ctx->r12);
    // 0x80012D14: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80012D18: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x80012D1C: lw          $t6, 0x8($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X8);
    // 0x80012D20: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80012D24: nop

    // 0x80012D28: addu        $t3, $t6, $t5
    ctx->r11 = ADD32(ctx->r14, ctx->r13);
    // 0x80012D2C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80012D30: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80012D34: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80012D38: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x80012D3C: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x80012D40: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80012D44: addu        $t4, $t8, $t1
    ctx->r12 = ADD32(ctx->r24, ctx->r9);
    // 0x80012D48: lw          $t9, 0x4($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X4);
    // 0x80012D4C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80012D50: nop

    // 0x80012D54: sw          $t9, 0x70($t0)
    MEM_W(0X70, ctx->r8) = ctx->r25;
    // 0x80012D58: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80012D5C: nop

    // 0x80012D60: lw          $a0, 0x70($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X70);
    // 0x80012D64: nop

    // 0x80012D68: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80012D6C: jal         0x8002FC34
    // 0x80012D70: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    malloc_game(rdram, ctx);
        goto after_4;
    // 0x80012D70: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_4:
    // 0x80012D74: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80012D78: nop

    // 0x80012D7C: sw          $v0, 0x6C($t5)
    MEM_W(0X6C, ctx->r13) = ctx->r2;
    // 0x80012D80: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80012D84: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80012D88: lw          $t7, 0x70($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X70);
    // 0x80012D8C: nop

    // 0x80012D90: blez        $t7, L_80013504
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80012D94: nop
    
            goto L_80013504;
    }
    // 0x80012D94: nop

L_80012D98:
    // 0x80012D98: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80012D9C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80012DA0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80012DA4: lw          $t9, 0x6C($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X6C);
    // 0x80012DA8: lw          $t1, 0x0($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X0);
    // 0x80012DAC: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x80012DB0: addu        $t6, $t9, $t2
    ctx->r14 = ADD32(ctx->r25, ctx->r10);
    // 0x80012DB4: sw          $t1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r9;
    // 0x80012DB8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80012DBC: nop

    // 0x80012DC0: addiu       $t3, $t5, 0x4
    ctx->r11 = ADD32(ctx->r13, 0X4);
    // 0x80012DC4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80012DC8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80012DCC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80012DD0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80012DD4: lw          $t0, 0x6C($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X6C);
    // 0x80012DD8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80012DDC: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x80012DE0: addu        $t1, $t0, $t2
    ctx->r9 = ADD32(ctx->r8, ctx->r10);
    // 0x80012DE4: sw          $t8, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r24;
    // 0x80012DE8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80012DEC: nop

    // 0x80012DF0: addiu       $t5, $t6, 0x4
    ctx->r13 = ADD32(ctx->r14, 0X4);
    // 0x80012DF4: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x80012DF8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80012DFC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80012E00: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80012E04: lw          $t9, 0x6C($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X6C);
    // 0x80012E08: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x80012E0C: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x80012E10: addu        $t8, $t9, $t2
    ctx->r24 = ADD32(ctx->r25, ctx->r10);
    // 0x80012E14: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    // 0x80012E18: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80012E1C: nop

    // 0x80012E20: addiu       $t6, $t1, 0x4
    ctx->r14 = ADD32(ctx->r9, 0X4);
    // 0x80012E24: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80012E28: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80012E2C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80012E30: lw          $t3, 0x6C($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X6C);
    // 0x80012E34: sll         $t0, $t4, 4
    ctx->r8 = S32(ctx->r12 << 4);
    // 0x80012E38: addu        $t9, $t3, $t0
    ctx->r25 = ADD32(ctx->r11, ctx->r8);
    // 0x80012E3C: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x80012E40: nop

    // 0x80012E44: sll         $t2, $a0, 5
    ctx->r10 = S32(ctx->r4 << 5);
    // 0x80012E48: jal         0x8002FC34
    // 0x80012E4C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    malloc_game(rdram, ctx);
        goto after_5;
    // 0x80012E4C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_5:
    // 0x80012E50: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80012E54: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80012E58: lw          $t8, 0x6C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X6C);
    // 0x80012E5C: sll         $t6, $t1, 4
    ctx->r14 = S32(ctx->r9 << 4);
    // 0x80012E60: addu        $t5, $t8, $t6
    ctx->r13 = ADD32(ctx->r24, ctx->r14);
    // 0x80012E64: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x80012E68: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80012E6C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80012E70: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80012E74: lw          $t3, 0x6C($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X6C);
    // 0x80012E78: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x80012E7C: addu        $t2, $t3, $t9
    ctx->r10 = ADD32(ctx->r11, ctx->r25);
    // 0x80012E80: lw          $t7, 0x8($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X8);
    // 0x80012E84: nop

    // 0x80012E88: blez        $t7, L_800134E0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80012E8C: nop
    
            goto L_800134E0;
    }
    // 0x80012E8C: nop

L_80012E90:
    // 0x80012E90: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80012E94: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x80012E98: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x80012E9C: nop

    // 0x80012EA0: bne         $t8, $at, L_8001314C
    if (ctx->r24 != ctx->r1) {
        // 0x80012EA4: nop
    
            goto L_8001314C;
    }
    // 0x80012EA4: nop

    // 0x80012EA8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80012EAC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80012EB0: lw          $t0, 0x6C($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X6C);
    // 0x80012EB4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80012EB8: sll         $t9, $t3, 4
    ctx->r25 = S32(ctx->r11 << 4);
    // 0x80012EBC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80012EC0: addu        $t2, $t0, $t9
    ctx->r10 = ADD32(ctx->r8, ctx->r25);
    // 0x80012EC4: lw          $t7, 0x4($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X4);
    // 0x80012EC8: lw          $t5, 0x0($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X0);
    // 0x80012ECC: sll         $t8, $t1, 5
    ctx->r24 = S32(ctx->r9 << 5);
    // 0x80012ED0: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x80012ED4: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80012ED8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80012EDC: nop

    // 0x80012EE0: addiu       $t3, $t4, 0x4
    ctx->r11 = ADD32(ctx->r12, 0X4);
    // 0x80012EE4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80012EE8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80012EEC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80012EF0: lw          $t1, 0x6C($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X6C);
    // 0x80012EF4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80012EF8: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80012EFC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80012F00: addu        $t5, $t1, $t8
    ctx->r13 = ADD32(ctx->r9, ctx->r24);
    // 0x80012F04: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x80012F08: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80012F0C: sll         $t3, $t4, 5
    ctx->r11 = S32(ctx->r12 << 5);
    // 0x80012F10: addu        $t0, $t6, $t3
    ctx->r8 = ADD32(ctx->r14, ctx->r11);
    // 0x80012F14: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x80012F18: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80012F1C: nop

    // 0x80012F20: addiu       $t7, $t2, 0x4
    ctx->r15 = ADD32(ctx->r10, 0X4);
    // 0x80012F24: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80012F28: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80012F2C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80012F30: lw          $t4, 0x6C($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X6C);
    // 0x80012F34: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80012F38: sll         $t3, $t6, 4
    ctx->r11 = S32(ctx->r14 << 4);
    // 0x80012F3C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80012F40: addu        $t9, $t4, $t3
    ctx->r25 = ADD32(ctx->r12, ctx->r11);
    // 0x80012F44: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80012F48: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x80012F4C: sll         $t7, $t2, 5
    ctx->r15 = S32(ctx->r10 << 5);
    // 0x80012F50: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x80012F54: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x80012F58: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80012F5C: nop

    // 0x80012F60: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x80012F64: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80012F68: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80012F6C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80012F70: lw          $t3, 0x6C($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X6C);
    // 0x80012F74: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x80012F78: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80012F7C: addu        $t0, $t3, $t2
    ctx->r8 = ADD32(ctx->r11, ctx->r10);
    // 0x80012F80: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x80012F84: sll         $t1, $t8, 5
    ctx->r9 = S32(ctx->r24 << 5);
    // 0x80012F88: addu        $t5, $t7, $t1
    ctx->r13 = ADD32(ctx->r15, ctx->r9);
    // 0x80012F8C: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    // 0x80012F90: nop

    // 0x80012F94: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80012F98: jal         0x8002FC34
    // 0x80012F9C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    malloc_game(rdram, ctx);
        goto after_6;
    // 0x80012F9C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_6:
    // 0x80012FA0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80012FA4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80012FA8: lw          $t9, 0x6C($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X6C);
    // 0x80012FAC: sll         $t2, $t3, 4
    ctx->r10 = S32(ctx->r11 << 4);
    // 0x80012FB0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80012FB4: addu        $t0, $t9, $t2
    ctx->r8 = ADD32(ctx->r25, ctx->r10);
    // 0x80012FB8: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80012FBC: sll         $t1, $t7, 5
    ctx->r9 = S32(ctx->r15 << 5);
    // 0x80012FC0: addu        $t5, $t8, $t1
    ctx->r13 = ADD32(ctx->r24, ctx->r9);
    // 0x80012FC4: sw          $v0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r2;
    // 0x80012FC8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80012FCC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80012FD0: lw          $t4, 0x6C($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X6C);
    // 0x80012FD4: sll         $t9, $t3, 4
    ctx->r25 = S32(ctx->r11 << 4);
    // 0x80012FD8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80012FDC: addu        $t2, $t4, $t9
    ctx->r10 = ADD32(ctx->r12, ctx->r25);
    // 0x80012FE0: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x80012FE4: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80012FE8: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x80012FEC: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    // 0x80012FF0: nop

    // 0x80012FF4: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80012FF8: jal         0x8002FC34
    // 0x80012FFC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    malloc_game(rdram, ctx);
        goto after_7;
    // 0x80012FFC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_7:
    // 0x80013000: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80013004: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80013008: lw          $t3, 0x6C($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X6C);
    // 0x8001300C: sll         $t9, $t4, 4
    ctx->r25 = S32(ctx->r12 << 4);
    // 0x80013010: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80013014: addu        $t2, $t3, $t9
    ctx->r10 = ADD32(ctx->r11, ctx->r25);
    // 0x80013018: lw          $t7, 0x4($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X4);
    // 0x8001301C: sll         $t8, $t0, 5
    ctx->r24 = S32(ctx->r8 << 5);
    // 0x80013020: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
    // 0x80013024: sw          $v0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r2;
    // 0x80013028: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8001302C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80013030: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80013034: lw          $t6, 0x6C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X6C);
    // 0x80013038: sll         $t3, $t4, 4
    ctx->r11 = S32(ctx->r12 << 4);
    // 0x8001303C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80013040: addu        $t9, $t6, $t3
    ctx->r25 = ADD32(ctx->r14, ctx->r11);
    // 0x80013044: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x80013048: sll         $t7, $t0, 5
    ctx->r15 = S32(ctx->r8 << 5);
    // 0x8001304C: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x80013050: lw          $t1, 0x8($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X8);
    // 0x80013054: nop

    // 0x80013058: blez        $t1, L_80013144
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8001305C: nop
    
            goto L_80013144;
    }
    // 0x8001305C: nop

L_80013060:
    // 0x80013060: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80013064: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80013068: lw          $t3, 0x6C($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X6C);
    // 0x8001306C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80013070: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80013074: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80013078: addu        $t2, $t3, $t0
    ctx->r10 = ADD32(ctx->r11, ctx->r8);
    // 0x8001307C: lw          $t7, 0x4($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X4);
    // 0x80013080: lw          $t4, 0x0($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X0);
    // 0x80013084: sll         $t1, $t8, 5
    ctx->r9 = S32(ctx->r24 << 5);
    // 0x80013088: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8001308C: addu        $t5, $t7, $t1
    ctx->r13 = ADD32(ctx->r15, ctx->r9);
    // 0x80013090: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x80013094: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80013098: addu        $t0, $t6, $t3
    ctx->r8 = ADD32(ctx->r14, ctx->r11);
    // 0x8001309C: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x800130A0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800130A4: nop

    // 0x800130A8: addiu       $t8, $t2, 0x4
    ctx->r24 = ADD32(ctx->r10, 0X4);
    // 0x800130AC: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800130B0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800130B4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800130B8: lw          $t9, 0x6C($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X6C);
    // 0x800130BC: sll         $t3, $t6, 4
    ctx->r11 = S32(ctx->r14 << 4);
    // 0x800130C0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800130C4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800130C8: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x800130CC: lw          $t0, 0x4($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X4);
    // 0x800130D0: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x800130D4: sll         $t8, $t2, 5
    ctx->r24 = S32(ctx->r10 << 5);
    // 0x800130D8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800130DC: addu        $t7, $t0, $t8
    ctx->r15 = ADD32(ctx->r8, ctx->r24);
    // 0x800130E0: lw          $t5, 0x10($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X10);
    // 0x800130E4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800130E8: addu        $t3, $t5, $t9
    ctx->r11 = ADD32(ctx->r13, ctx->r25);
    // 0x800130EC: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x800130F0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800130F4: nop

    // 0x800130F8: addiu       $t2, $t4, 0x4
    ctx->r10 = ADD32(ctx->r12, 0X4);
    // 0x800130FC: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80013100: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80013104: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80013108: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x8001310C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80013110: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80013114: lw          $t6, 0x6C($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X6C);
    // 0x80013118: sll         $t9, $t5, 4
    ctx->r25 = S32(ctx->r13 << 4);
    // 0x8001311C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80013120: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x80013124: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x80013128: sll         $t2, $t4, 5
    ctx->r10 = S32(ctx->r12 << 5);
    // 0x8001312C: addu        $t0, $t3, $t2
    ctx->r8 = ADD32(ctx->r11, ctx->r10);
    // 0x80013130: lw          $t7, 0x8($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X8);
    // 0x80013134: nop

    // 0x80013138: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8001313C: bne         $at, $zero, L_80013060
    if (ctx->r1 != 0) {
        // 0x80013140: nop
    
            goto L_80013060;
    }
    // 0x80013140: nop

L_80013144:
    // 0x80013144: b           L_800134AC
    // 0x80013148: nop

        goto L_800134AC;
    // 0x80013148: nop

L_8001314C:
    // 0x8001314C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80013150: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80013154: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80013158: nop

    // 0x8001315C: bne         $t6, $at, L_800134AC
    if (ctx->r14 != ctx->r1) {
        // 0x80013160: nop
    
            goto L_800134AC;
    }
    // 0x80013160: nop

    // 0x80013164: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80013168: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8001316C: lw          $t3, 0x6C($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X6C);
    // 0x80013170: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80013174: sll         $t0, $t2, 4
    ctx->r8 = S32(ctx->r10 << 4);
    // 0x80013178: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8001317C: addu        $t8, $t3, $t0
    ctx->r24 = ADD32(ctx->r11, ctx->r8);
    // 0x80013180: lw          $t7, 0x4($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X4);
    // 0x80013184: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x80013188: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x8001318C: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x80013190: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x80013194: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80013198: nop

    // 0x8001319C: addiu       $t2, $t4, 0x4
    ctx->r10 = ADD32(ctx->r12, 0X4);
    // 0x800131A0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x800131A4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800131A8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800131AC: lw          $t5, 0x6C($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X6C);
    // 0x800131B0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800131B4: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x800131B8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800131BC: addu        $t1, $t5, $t6
    ctx->r9 = ADD32(ctx->r13, ctx->r14);
    // 0x800131C0: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x800131C4: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x800131C8: sll         $t2, $t4, 5
    ctx->r10 = S32(ctx->r12 << 5);
    // 0x800131CC: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x800131D0: sw          $t0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r8;
    // 0x800131D4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800131D8: nop

    // 0x800131DC: addiu       $t7, $t8, 0x4
    ctx->r15 = ADD32(ctx->r24, 0X4);
    // 0x800131E0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x800131E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800131E8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800131EC: lw          $t4, 0x6C($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X6C);
    // 0x800131F0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800131F4: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x800131F8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800131FC: addu        $t0, $t4, $t2
    ctx->r8 = ADD32(ctx->r12, ctx->r10);
    // 0x80013200: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x80013204: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80013208: sll         $t7, $t8, 5
    ctx->r15 = S32(ctx->r24 << 5);
    // 0x8001320C: addu        $t5, $t3, $t7
    ctx->r13 = ADD32(ctx->r11, ctx->r15);
    // 0x80013210: sw          $t6, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r14;
    // 0x80013214: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80013218: nop

    // 0x8001321C: addiu       $t9, $t1, 0x4
    ctx->r25 = ADD32(ctx->r9, 0X4);
    // 0x80013220: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80013224: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80013228: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8001322C: lw          $t8, 0x6C($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X6C);
    // 0x80013230: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80013234: sll         $t7, $t3, 4
    ctx->r15 = S32(ctx->r11 << 4);
    // 0x80013238: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8001323C: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x80013240: lw          $t5, 0x4($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X4);
    // 0x80013244: lw          $t2, 0x0($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X0);
    // 0x80013248: sll         $t9, $t1, 5
    ctx->r25 = S32(ctx->r9 << 5);
    // 0x8001324C: addu        $t4, $t5, $t9
    ctx->r12 = ADD32(ctx->r13, ctx->r25);
    // 0x80013250: sw          $t2, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->r10;
    // 0x80013254: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80013258: nop

    // 0x8001325C: addiu       $t3, $t0, 0x4
    ctx->r11 = ADD32(ctx->r8, 0X4);
    // 0x80013260: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80013264: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80013268: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8001326C: lw          $t1, 0x6C($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X6C);
    // 0x80013270: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80013274: sll         $t9, $t5, 4
    ctx->r25 = S32(ctx->r13 << 4);
    // 0x80013278: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8001327C: addu        $t2, $t1, $t9
    ctx->r10 = ADD32(ctx->r9, ctx->r25);
    // 0x80013280: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x80013284: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x80013288: sll         $t3, $t0, 5
    ctx->r11 = S32(ctx->r8 << 5);
    // 0x8001328C: addu        $t8, $t4, $t3
    ctx->r24 = ADD32(ctx->r12, ctx->r11);
    // 0x80013290: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    // 0x80013294: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80013298: nop

    // 0x8001329C: addiu       $t5, $t6, 0x4
    ctx->r13 = ADD32(ctx->r14, 0X4);
    // 0x800132A0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x800132A4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800132A8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800132AC: lw          $t2, 0x6C($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X6C);
    // 0x800132B0: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x800132B4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800132B8: addu        $t3, $t2, $t4
    ctx->r11 = ADD32(ctx->r10, ctx->r12);
    // 0x800132BC: lw          $t7, 0x4($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X4);
    // 0x800132C0: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x800132C4: addiu       $t1, $zero, 0x31
    ctx->r9 = ADD32(0, 0X31);
    // 0x800132C8: addu        $t5, $t7, $t6
    ctx->r13 = ADD32(ctx->r15, ctx->r14);
    // 0x800132CC: sw          $t1, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r9;
    // 0x800132D0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800132D4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800132D8: lw          $t0, 0x6C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X6C);
    // 0x800132DC: sll         $t4, $t2, 4
    ctx->r12 = S32(ctx->r10 << 4);
    // 0x800132E0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800132E4: addu        $t3, $t0, $t4
    ctx->r11 = ADD32(ctx->r8, ctx->r12);
    // 0x800132E8: lw          $t8, 0x4($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X4);
    // 0x800132EC: sll         $t6, $t7, 5
    ctx->r14 = S32(ctx->r15 << 5);
    // 0x800132F0: addu        $t1, $t8, $t6
    ctx->r9 = ADD32(ctx->r24, ctx->r14);
    // 0x800132F4: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    // 0x800132F8: nop

    // 0x800132FC: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80013300: jal         0x8002FC34
    // 0x80013304: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    malloc_game(rdram, ctx);
        goto after_8;
    // 0x80013304: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_8:
    // 0x80013308: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8001330C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80013310: lw          $t2, 0x6C($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X6C);
    // 0x80013314: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x80013318: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8001331C: addu        $t3, $t2, $t4
    ctx->r11 = ADD32(ctx->r10, ctx->r12);
    // 0x80013320: lw          $t7, 0x4($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X4);
    // 0x80013324: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x80013328: addu        $t1, $t7, $t6
    ctx->r9 = ADD32(ctx->r15, ctx->r14);
    // 0x8001332C: sw          $v0, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r2;
    // 0x80013330: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80013334: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80013338: lw          $t9, 0x6C($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X6C);
    // 0x8001333C: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x80013340: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80013344: addu        $t4, $t9, $t2
    ctx->r12 = ADD32(ctx->r25, ctx->r10);
    // 0x80013348: lw          $t3, 0x4($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X4);
    // 0x8001334C: sll         $t7, $t8, 5
    ctx->r15 = S32(ctx->r24 << 5);
    // 0x80013350: addu        $t6, $t3, $t7
    ctx->r14 = ADD32(ctx->r11, ctx->r15);
    // 0x80013354: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    // 0x80013358: nop

    // 0x8001335C: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80013360: jal         0x8002FC34
    // 0x80013364: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    malloc_game(rdram, ctx);
        goto after_9;
    // 0x80013364: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_9:
    // 0x80013368: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8001336C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80013370: lw          $t0, 0x6C($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X6C);
    // 0x80013374: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x80013378: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8001337C: addu        $t4, $t0, $t2
    ctx->r12 = ADD32(ctx->r8, ctx->r10);
    // 0x80013380: lw          $t8, 0x4($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X4);
    // 0x80013384: sll         $t7, $t3, 5
    ctx->r15 = S32(ctx->r11 << 5);
    // 0x80013388: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x8001338C: sw          $v0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r2;
    // 0x80013390: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80013394: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80013398: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8001339C: lw          $t5, 0x6C($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X6C);
    // 0x800133A0: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x800133A4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800133A8: addu        $t2, $t5, $t0
    ctx->r10 = ADD32(ctx->r13, ctx->r8);
    // 0x800133AC: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x800133B0: sll         $t8, $t3, 5
    ctx->r24 = S32(ctx->r11 << 5);
    // 0x800133B4: addu        $t7, $t4, $t8
    ctx->r15 = ADD32(ctx->r12, ctx->r24);
    // 0x800133B8: lw          $t6, 0x14($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X14);
    // 0x800133BC: nop

    // 0x800133C0: blez        $t6, L_800134AC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800133C4: nop
    
            goto L_800134AC;
    }
    // 0x800133C4: nop

L_800133C8:
    // 0x800133C8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800133CC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800133D0: lw          $t0, 0x6C($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X6C);
    // 0x800133D4: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x800133D8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800133DC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800133E0: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x800133E4: lw          $t8, 0x4($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X4);
    // 0x800133E8: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x800133EC: sll         $t6, $t7, 5
    ctx->r14 = S32(ctx->r15 << 5);
    // 0x800133F0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800133F4: addu        $t1, $t8, $t6
    ctx->r9 = ADD32(ctx->r24, ctx->r14);
    // 0x800133F8: lw          $t5, 0x18($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X18);
    // 0x800133FC: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80013400: addu        $t3, $t5, $t0
    ctx->r11 = ADD32(ctx->r13, ctx->r8);
    // 0x80013404: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80013408: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8001340C: nop

    // 0x80013410: addiu       $t7, $t4, 0x4
    ctx->r15 = ADD32(ctx->r12, 0X4);
    // 0x80013414: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80013418: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8001341C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80013420: lw          $t1, 0x6C($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X6C);
    // 0x80013424: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x80013428: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8001342C: addu        $t0, $t1, $t5
    ctx->r8 = ADD32(ctx->r9, ctx->r13);
    // 0x80013430: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x80013434: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80013438: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x8001343C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80013440: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80013444: addu        $t7, $t9, $t4
    ctx->r15 = ADD32(ctx->r25, ctx->r12);
    // 0x80013448: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8001344C: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80013450: addu        $t1, $t8, $t2
    ctx->r9 = ADD32(ctx->r24, ctx->r10);
    // 0x80013454: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
    // 0x80013458: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8001345C: nop

    // 0x80013460: addiu       $t0, $t5, 0x4
    ctx->r8 = ADD32(ctx->r13, 0X4);
    // 0x80013464: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80013468: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8001346C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80013470: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x80013474: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80013478: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8001347C: lw          $t7, 0x6C($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X6C);
    // 0x80013480: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x80013484: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80013488: addu        $t2, $t7, $t8
    ctx->r10 = ADD32(ctx->r15, ctx->r24);
    // 0x8001348C: lw          $t1, 0x4($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X4);
    // 0x80013490: sll         $t0, $t5, 5
    ctx->r8 = S32(ctx->r13 << 5);
    // 0x80013494: addu        $t3, $t1, $t0
    ctx->r11 = ADD32(ctx->r9, ctx->r8);
    // 0x80013498: lw          $t4, 0x14($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X14);
    // 0x8001349C: nop

    // 0x800134A0: slt         $at, $t9, $t4
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800134A4: bne         $at, $zero, L_800133C8
    if (ctx->r1 != 0) {
        // 0x800134A8: nop
    
            goto L_800133C8;
    }
    // 0x800134A8: nop

L_800134AC:
    // 0x800134AC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800134B0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800134B4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800134B8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800134BC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x800134C0: lw          $t2, 0x6C($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X6C);
    // 0x800134C4: sll         $t1, $t5, 4
    ctx->r9 = S32(ctx->r13 << 4);
    // 0x800134C8: addu        $t0, $t2, $t1
    ctx->r8 = ADD32(ctx->r10, ctx->r9);
    // 0x800134CC: lw          $t3, 0x8($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X8);
    // 0x800134D0: nop

    // 0x800134D4: slt         $at, $t7, $t3
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800134D8: bne         $at, $zero, L_80012E90
    if (ctx->r1 != 0) {
        // 0x800134DC: nop
    
            goto L_80012E90;
    }
    // 0x800134DC: nop

L_800134E0:
    // 0x800134E0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800134E4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800134E8: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x800134EC: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x800134F0: lw          $t8, 0x70($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X70);
    // 0x800134F4: nop

    // 0x800134F8: slt         $at, $t4, $t8
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800134FC: bne         $at, $zero, L_80012D98
    if (ctx->r1 != 0) {
        // 0x80013500: nop
    
            goto L_80012D98;
    }
    // 0x80013500: nop

L_80013504:
    // 0x80013504: b           L_80013518
    // 0x80013508: nop

        goto L_80013518;
    // 0x80013508: nop

L_8001350C:
    // 0x8001350C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80013510: nop

    // 0x80013514: sw          $zero, 0x70($t5)
    MEM_W(0X70, ctx->r13) = 0;
L_80013518:
    // 0x80013518: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8001351C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80013520: lw          $t1, 0x4($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X4);
    // 0x80013524: nop

    // 0x80013528: beq         $t1, $zero, L_80013584
    if (ctx->r9 == 0) {
        // 0x8001352C: nop
    
            goto L_80013584;
    }
    // 0x8001352C: nop

L_80013530:
    // 0x80013530: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80013534: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80013538: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8001353C: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x80013540: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80013544: addu        $t9, $t0, $t3
    ctx->r25 = ADD32(ctx->r8, ctx->r11);
    // 0x80013548: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8001354C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80013550: bne         $t6, $at, L_80013560
    if (ctx->r14 != ctx->r1) {
        // 0x80013554: nop
    
            goto L_80013560;
    }
    // 0x80013554: nop

    // 0x80013558: b           L_80013584
    // 0x8001355C: nop

        goto L_80013584;
    // 0x8001355C: nop

L_80013560:
    // 0x80013560: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80013564: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80013568: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x8001356C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x80013570: lw          $t2, 0x4($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X4);
    // 0x80013574: nop

    // 0x80013578: sltu        $at, $t8, $t2
    ctx->r1 = ctx->r24 < ctx->r10 ? 1 : 0;
    // 0x8001357C: bne         $at, $zero, L_80013530
    if (ctx->r1 != 0) {
        // 0x80013580: nop
    
            goto L_80013530;
    }
    // 0x80013580: nop

L_80013584:
    // 0x80013584: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80013588: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8001358C: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80013590: nop

    // 0x80013594: sltu        $at, $t1, $t0
    ctx->r1 = ctx->r9 < ctx->r8 ? 1 : 0;
    // 0x80013598: beq         $at, $zero, L_80013660
    if (ctx->r1 == 0) {
        // 0x8001359C: nop
    
            goto L_80013660;
    }
    // 0x8001359C: nop

    // 0x800135A0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800135A4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800135A8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800135AC: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x800135B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800135B4: addu        $t4, $t3, $t6
    ctx->r12 = ADD32(ctx->r11, ctx->r14);
    // 0x800135B8: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x800135BC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800135C0: bne         $t5, $at, L_80013660
    if (ctx->r13 != ctx->r1) {
        // 0x800135C4: nop
    
            goto L_80013660;
    }
    // 0x800135C4: nop

    // 0x800135C8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800135CC: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800135D0: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x800135D4: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x800135D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800135DC: addu        $t1, $t8, $t7
    ctx->r9 = ADD32(ctx->r24, ctx->r15);
    // 0x800135E0: lw          $t0, 0x8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X8);
    // 0x800135E4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800135E8: nop

    // 0x800135EC: addu        $t3, $t0, $t9
    ctx->r11 = ADD32(ctx->r8, ctx->r25);
    // 0x800135F0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800135F4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800135F8: nop

    // 0x800135FC: addiu       $t4, $t6, 0xC
    ctx->r12 = ADD32(ctx->r14, 0XC);
    // 0x80013600: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80013604: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_80013608:
    // 0x80013608: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8001360C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80013610: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x80013614: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80013618: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x8001361C: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x80013620: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x80013624: sw          $t1, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r9;
    // 0x80013628: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8001362C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80013630: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80013634: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80013638: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x8001363C: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x80013640: addu        $t0, $t7, $t4
    ctx->r8 = ADD32(ctx->r15, ctx->r12);
    // 0x80013644: sw          $t5, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r13;
    // 0x80013648: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8001364C: nop

    // 0x80013650: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x80013654: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x80013658: bne         $at, $zero, L_80013608
    if (ctx->r1 != 0) {
        // 0x8001365C: sw          $t1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r9;
            goto L_80013608;
    }
    // 0x8001365C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
L_80013660:
    // 0x80013660: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80013664: jal         0x80011EF0
    // 0x80013668: nop

    func_80011EF0(rdram, ctx);
        goto after_10;
    // 0x80013668: nop

    after_10:
    // 0x8001366C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80013670: jal         0x800120FC
    // 0x80013674: nop

    func_800120FC(rdram, ctx);
        goto after_11;
    // 0x80013674: nop

    after_11:
    // 0x80013678: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8001367C: b           L_8001368C
    // 0x80013680: nop

        goto L_8001368C;
    // 0x80013680: nop

    // 0x80013684: b           L_8001368C
    // 0x80013688: nop

        goto L_8001368C;
    // 0x80013688: nop

L_8001368C:
    // 0x8001368C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013690: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80013694: jr          $ra
    // 0x80013698: nop

    return;
    // 0x80013698: nop

;}
RECOMP_FUNC void Math_Mat3f_RotatePitch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013F6C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80013F70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013F74: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80013F78: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80013F7C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80013F80: lwc1        $f6, -0x5C0C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5C0C);
    // 0x80013F84: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80013F88: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x80013F8C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80013F90: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    // 0x80013F94: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x80013F98: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80013F9C: jal         0x80034970
    // 0x80013FA0: nop

    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80013FA0: nop

    after_0:
    // 0x80013FA4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80013FA8: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x80013FAC: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80013FB0: jal         0x80036570
    // 0x80013FB4: nop

    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80013FB4: nop

    after_1:
    // 0x80013FB8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80013FBC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80013FC0:
    // 0x80013FC0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80013FC4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80013FC8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80013FCC: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80013FD0: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x80013FD4: addu        $t3, $sp, $t1
    ctx->r11 = ADD32(ctx->r29, ctx->r9);
    // 0x80013FD8: swc1        $f10, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f10.u32l;
    // 0x80013FDC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80013FE0: nop

    // 0x80013FE4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80013FE8: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x80013FEC: bne         $at, $zero, L_80013FC0
    if (ctx->r1 != 0) {
        // 0x80013FF0: sw          $t5, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r13;
            goto L_80013FC0;
    }
    // 0x80013FF0: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80013FF4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80013FF8:
    // 0x80013FF8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80013FFC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80014000: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80014004: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x80014008: lwc1        $f16, 0x20($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X20);
    // 0x8001400C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80014010: addu        $t9, $sp, $t8
    ctx->r25 = ADD32(ctx->r29, ctx->r24);
    // 0x80014014: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80014018: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8001401C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80014020: nop

    // 0x80014024: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80014028: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001402C: swc1        $f16, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f16.u32l;
    // 0x80014030: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80014034: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80014038: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8001403C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80014040: lwc1        $f18, 0x20($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X20);
    // 0x80014044: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80014048: addu        $t5, $sp, $t3
    ctx->r13 = ADD32(ctx->r29, ctx->r11);
    // 0x8001404C: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80014050: lwc1        $f4, 0x1C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80014054: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80014058: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x8001405C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80014060: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80014064: swc1        $f6, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f6.u32l;
    // 0x80014068: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8001406C: nop

    // 0x80014070: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80014074: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80014078: bne         $at, $zero, L_80013FF8
    if (ctx->r1 != 0) {
        // 0x8001407C: sw          $t6, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r14;
            goto L_80013FF8;
    }
    // 0x8001407C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80014080: b           L_80014088
    // 0x80014084: nop

        goto L_80014088;
    // 0x80014084: nop

L_80014088:
    // 0x80014088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001408C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80014090: jr          $ra
    // 0x80014094: nop

    return;
    // 0x80014094: nop

;}
RECOMP_FUNC void sprintf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036BE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80036BE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80036BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036BF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80036BF4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80036BF8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80036BFC: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80036C00: addiu       $a0, $a0, 0x6BC0
    ctx->r4 = ADD32(ctx->r4, 0X6BC0);
    // 0x80036C04: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x80036C08: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80036C0C: jal         0x80041EF0
    // 0x80036C10: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    _Printf(rdram, ctx);
        goto after_0;
    // 0x80036C10: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x80036C14: bltz        $v0, L_80036C28
    if (SIGNED(ctx->r2) < 0) {
        // 0x80036C18: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80036C28;
    }
    // 0x80036C18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80036C1C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80036C20: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80036C24: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
L_80036C28:
    // 0x80036C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036C2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80036C30: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80036C34: jr          $ra
    // 0x80036C38: nop

    return;
    // 0x80036C38: nop

;}
RECOMP_FUNC void func_8002B114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B11C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B120: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002B124: jal         0x8002AE84
    // 0x8002B128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002AE84(rdram, ctx);
        goto after_0;
    // 0x8002B128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8002B12C: b           L_8002B134
    // 0x8002B130: nop

        goto L_8002B134;
    // 0x8002B130: nop

L_8002B134:
    // 0x8002B134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B13C: jr          $ra
    // 0x8002B140: nop

    return;
    // 0x8002B140: nop

;}
RECOMP_FUNC void alSeqpGetChlProgram(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034830: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80034834: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80034838: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x8003483C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80034840: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x80034844: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80034848: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8003484C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80034850: addiu       $t7, $sp, 0xC
    ctx->r15 = ADD32(ctx->r29, 0XC);
    // 0x80034854: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80034858: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8003485C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80034860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80034864: sw          $t3, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r11;
    // 0x80034868: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x8003486C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x80034870: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x80034874: sw          $t3, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r11;
    // 0x80034878: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x8003487C: blezl       $a2, L_800348B0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80034880: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800348B0;
    }
    goto skip_0;
    // 0x80034880: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
L_80034884:
    // 0x80034884: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x80034888: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8003488C: bnel        $v0, $t4, L_800348A0
    if (ctx->r2 != ctx->r12) {
        // 0x80034890: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800348A0;
    }
    goto skip_1;
    // 0x80034890: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x80034894: b           L_800348B0
    // 0x80034898: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800348B0;
    // 0x80034898: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8003489C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800348A0:
    // 0x800348A0: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800348A4: bne         $at, $zero, L_80034884
    if (ctx->r1 != 0) {
        // 0x800348A8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80034884;
    }
    // 0x800348A8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800348AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800348B0:
    // 0x800348B0: jr          $ra
    // 0x800348B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800348B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80017848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017848: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001784C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80017850: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80017854: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80017858: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8001785C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80017860: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80017864: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80017868: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8001786C: jal         0x80017460
    // 0x80017870: nop

    func_80017460(rdram, ctx);
        goto after_0;
    // 0x80017870: nop

    after_0:
    // 0x80017874: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80017878: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8001787C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80017880: jal         0x800171E0
    // 0x80017884: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    func_800171E0(rdram, ctx);
        goto after_1;
    // 0x80017884: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    after_1:
    // 0x80017888: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8001788C: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80017890: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80017894: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80017898: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8001789C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800178A0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800178A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800178A8: jal         0x80017028
    // 0x800178AC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80017028(rdram, ctx);
        goto after_2;
    // 0x800178AC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_2:
    // 0x800178B0: b           L_800178C0
    // 0x800178B4: nop

        goto L_800178C0;
    // 0x800178B4: nop

    // 0x800178B8: b           L_800178C0
    // 0x800178BC: nop

        goto L_800178C0;
    // 0x800178BC: nop

L_800178C0:
    // 0x800178C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800178C4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800178C8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800178CC: jr          $ra
    // 0x800178D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800178D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800178D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800178D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800178D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800178DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800178E0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800178E4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800178E8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800178EC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800178F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800178F4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800178F8: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x800178FC: lh          $a3, 0x36($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X36);
    // 0x80017900: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x80017904: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80017908: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8001790C: jal         0x80017028
    // 0x80017910: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80017028(rdram, ctx);
        goto after_0;
    // 0x80017910: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80017914: b           L_80017924
    // 0x80017918: nop

        goto L_80017924;
    // 0x80017918: nop

    // 0x8001791C: b           L_80017924
    // 0x80017920: nop

        goto L_80017924;
    // 0x80017920: nop

L_80017924:
    // 0x80017924: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80017928: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001792C: jr          $ra
    // 0x80017930: nop

    return;
    // 0x80017930: nop

;}
RECOMP_FUNC void alCents2Ratio(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034920: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80034924: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80034928: bltz        $a0, L_8003493C
    if (SIGNED(ctx->r4) < 0) {
        // 0x8003492C: lui         $at, 0x8005
        ctx->r1 = S32(0X8005 << 16);
            goto L_8003493C;
    }
    // 0x8003492C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034930: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034934: b           L_80034944
    // 0x80034938: lwc1        $f0, -0x3D20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3D20);
        goto L_80034944;
    // 0x80034938: lwc1        $f0, -0x3D20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3D20);
L_8003493C:
    // 0x8003493C: lwc1        $f0, -0x3D1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3D1C);
    // 0x80034940: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80034944:
    // 0x80034944: beq         $a0, $zero, L_80034968
    if (ctx->r4 == 0) {
        // 0x80034948: andi        $t6, $a0, 0x1
        ctx->r14 = ctx->r4 & 0X1;
            goto L_80034968;
    }
L_80034948:
    // 0x80034948: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x8003494C: beq         $t6, $zero, L_8003495C
    if (ctx->r14 == 0) {
        // 0x80034950: sra         $t7, $a0, 1
        ctx->r15 = S32(SIGNED(ctx->r4) >> 1);
            goto L_8003495C;
    }
    // 0x80034950: sra         $t7, $a0, 1
    ctx->r15 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80034954: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80034958: nop

L_8003495C:
    // 0x8003495C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80034960: bne         $t7, $zero, L_80034948
    if (ctx->r15 != 0) {
        // 0x80034964: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_80034948;
    }
    // 0x80034964: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_80034968:
    // 0x80034968: jr          $ra
    // 0x8003496C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8003496C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
