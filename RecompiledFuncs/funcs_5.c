#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8000D818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D818: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000D81C: b           L_8000D82C
    // 0x8000D820: nop

        goto L_8000D82C;
    // 0x8000D820: nop

    // 0x8000D824: b           L_8000D82C
    // 0x8000D828: nop

        goto L_8000D82C;
    // 0x8000D828: nop

L_8000D82C:
    // 0x8000D82C: jr          $ra
    // 0x8000D830: nop

    return;
    // 0x8000D830: nop

;}
RECOMP_FUNC void func_8002C144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C14C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8002C150: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8002C154: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8002C158: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8002C15C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002C160: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8002C164: jal         0x80067748
    // 0x8002C168: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x8002C168: nop

    after_0:
    // 0x8002C16C: b           L_8002C174
    // 0x8002C170: nop

        goto L_8002C174;
    // 0x8002C170: nop

L_8002C174:
    // 0x8002C174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C17C: jr          $ra
    // 0x8002C180: nop

    return;
    // 0x8002C180: nop

;}
RECOMP_FUNC void Math_Mat3f_Scale(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013B70: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80013B74: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80013B78: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80013B7C: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80013B80: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80013B84:
    // 0x80013B84: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80013B88: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80013B8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80013B90: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80013B94: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80013B98: addu        $t9, $a0, $t7
    ctx->r25 = ADD32(ctx->r4, ctx->r15);
    // 0x80013B9C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80013BA0: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
    // 0x80013BA4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80013BA8: lwc1        $f16, 0x10($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80013BAC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80013BB0: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x80013BB4: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x80013BB8: addu        $t3, $a0, $t1
    ctx->r11 = ADD32(ctx->r4, ctx->r9);
    // 0x80013BBC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80013BC0: swc1        $f18, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f18.u32l;
    // 0x80013BC4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80013BC8: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80013BCC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80013BD0: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x80013BD4: lwc1        $f4, 0x20($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80013BD8: addu        $t8, $a0, $t5
    ctx->r24 = ADD32(ctx->r4, ctx->r13);
    // 0x80013BDC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80013BE0: swc1        $f8, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f8.u32l;
    // 0x80013BE4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80013BE8: nop

    // 0x80013BEC: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80013BF0: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x80013BF4: bne         $at, $zero, L_80013B84
    if (ctx->r1 != 0) {
        // 0x80013BF8: sw          $t9, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r25;
            goto L_80013B84;
    }
    // 0x80013BF8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80013BFC: b           L_80013C04
    // 0x80013C00: nop

        goto L_80013C04;
    // 0x80013C00: nop

L_80013C04:
    // 0x80013C04: jr          $ra
    // 0x80013C08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80013C08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800083EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800083EC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800083F0: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x800083F4: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800083F8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800083FC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80008400: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80008404: lh          $t6, -0x5C9C($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5C9C);
    // 0x80008408: nop

    // 0x8000840C: beq         $t6, $zero, L_80008448
    if (ctx->r14 == 0) {
        // 0x80008410: nop
    
            goto L_80008448;
    }
    // 0x80008410: nop

    // 0x80008414: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80008418: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8000841C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80008420: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80008424: lw          $t7, 0x2D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D5C);
    // 0x80008428: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8000842C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80008430: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80008434: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x80008438: nop

    // 0x8000843C: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x80008440: beq         $t1, $zero, L_80008450
    if (ctx->r9 == 0) {
        // 0x80008444: nop
    
            goto L_80008450;
    }
    // 0x80008444: nop

L_80008448:
    // 0x80008448: b           L_8000873C
    // 0x8000844C: nop

        goto L_8000873C;
    // 0x8000844C: nop

L_80008450:
    // 0x80008450: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80008454: lb          $t2, 0x2DB4($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X2DB4);
    // 0x80008458: nop

    // 0x8000845C: blez        $t2, L_8000847C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80008460: nop
    
            goto L_8000847C;
    }
    // 0x80008460: nop

    // 0x80008464: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80008468: lb          $t3, 0x2DB5($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X2DB5);
    // 0x8000846C: nop

    // 0x80008470: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x80008474: beq         $at, $zero, L_80008484
    if (ctx->r1 == 0) {
        // 0x80008478: nop
    
            goto L_80008484;
    }
    // 0x80008478: nop

L_8000847C:
    // 0x8000847C: b           L_8000873C
    // 0x80008480: nop

        goto L_8000873C;
    // 0x80008480: nop

L_80008484:
    // 0x80008484: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008488: lwc1        $f4, 0x2DAC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2DAC);
    // 0x8000848C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80008490: nop

    // 0x80008494: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80008498: nop

    // 0x8000849C: bc1t        L_800084C4
    if (c1cs) {
        // 0x800084A0: nop
    
            goto L_800084C4;
    }
    // 0x800084A0: nop

    // 0x800084A4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800084A8: lwc1        $f8, 0x2DB0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2DB0);
    // 0x800084AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800084B0: nop

    // 0x800084B4: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800084B8: nop

    // 0x800084BC: bc1f        L_800084CC
    if (!c1cs) {
        // 0x800084C0: nop
    
            goto L_800084CC;
    }
    // 0x800084C0: nop

L_800084C4:
    // 0x800084C4: b           L_8000873C
    // 0x800084C8: nop

        goto L_8000873C;
    // 0x800084C8: nop

L_800084CC:
    // 0x800084CC: bne         $a0, $zero, L_800084EC
    if (ctx->r4 != 0) {
        // 0x800084D0: nop
    
            goto L_800084EC;
    }
    // 0x800084D0: nop

    // 0x800084D4: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800084D8: lw          $t4, -0x5CFC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5CFC);
    // 0x800084DC: nop

    // 0x800084E0: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x800084E4: beq         $at, $zero, L_80008610
    if (ctx->r1 == 0) {
        // 0x800084E8: nop
    
            goto L_80008610;
    }
    // 0x800084E8: nop

L_800084EC:
    // 0x800084EC: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800084F0: lh          $t5, -0x5C9C($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X5C9C);
    // 0x800084F4: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
    // 0x800084F8: blez        $t5, L_80008588
    if (SIGNED(ctx->r13) <= 0) {
        // 0x800084FC: nop
    
            goto L_80008588;
    }
    // 0x800084FC: nop

L_80008500:
    // 0x80008500: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80008504: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80008508: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000850C: lw          $t8, 0x2DA8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2DA8);
    // 0x80008510: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80008514: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80008518: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000851C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80008520: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80008524: nop

    // 0x80008528: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x8000852C: nop

    // 0x80008530: bgez        $t1, L_80008540
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80008534: nop
    
            goto L_80008540;
    }
    // 0x80008534: nop

    // 0x80008538: b           L_8000856C
    // 0x8000853C: nop

        goto L_8000856C;
    // 0x8000853C: nop

L_80008540:
    // 0x80008540: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80008544: nop

    // 0x80008548: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x8000854C: nop

    // 0x80008550: bne         $t3, $a0, L_8000856C
    if (ctx->r11 != ctx->r4) {
        // 0x80008554: nop
    
            goto L_8000856C;
    }
    // 0x80008554: nop

    // 0x80008558: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8000855C: nop

    // 0x80008560: sw          $t4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r12;
    // 0x80008564: b           L_80008588
    // 0x80008568: nop

        goto L_80008588;
    // 0x80008568: nop

L_8000856C:
    // 0x8000856C: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x80008570: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80008574: lh          $t7, -0x5C9C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5C9C);
    // 0x80008578: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8000857C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80008580: bne         $at, $zero, L_80008500
    if (ctx->r1 != 0) {
        // 0x80008584: sw          $t6, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r14;
            goto L_80008500;
    }
    // 0x80008584: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
L_80008588:
    // 0x80008588: bne         $a1, $zero, L_800085D8
    if (ctx->r5 != 0) {
        // 0x8000858C: nop
    
            goto L_800085D8;
    }
    // 0x8000858C: nop

    // 0x80008590: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80008594: lh          $t9, -0x5C9C($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X5C9C);
    // 0x80008598: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x8000859C: nop

    // 0x800085A0: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800085A4: beq         $at, $zero, L_800085D0
    if (ctx->r1 == 0) {
        // 0x800085A8: nop
    
            goto L_800085D0;
    }
    // 0x800085A8: nop

    // 0x800085AC: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x800085B0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800085B4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800085B8: lw          $t1, 0x2DA8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2DA8);
    // 0x800085BC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800085C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800085C4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800085C8: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x800085CC: sh          $t0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r8;
L_800085D0:
    // 0x800085D0: b           L_8000873C
    // 0x800085D4: nop

        goto L_8000873C;
    // 0x800085D4: nop

L_800085D8:
    // 0x800085D8: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800085DC: lh          $t5, -0x5C9C($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X5C9C);
    // 0x800085E0: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x800085E4: nop

    // 0x800085E8: bne         $t5, $t6, L_80008608
    if (ctx->r13 != ctx->r14) {
        // 0x800085EC: nop
    
            goto L_80008608;
    }
    // 0x800085EC: nop

    // 0x800085F0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800085F4: lb          $t7, 0x2DB6($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X2DB6);
    // 0x800085F8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800085FC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80008600: sb          $t8, 0x2DB6($at)
    MEM_B(0X2DB6, ctx->r1) = ctx->r24;
    // 0x80008604: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
L_80008608:
    // 0x80008608: b           L_80008638
    // 0x8000860C: nop

        goto L_80008638;
    // 0x8000860C: nop

L_80008610:
    // 0x80008610: bne         $a1, $zero, L_80008620
    if (ctx->r5 != 0) {
        // 0x80008614: nop
    
            goto L_80008620;
    }
    // 0x80008614: nop

    // 0x80008618: b           L_8000873C
    // 0x8000861C: nop

        goto L_8000873C;
    // 0x8000861C: nop

L_80008620:
    // 0x80008620: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80008624: lb          $t9, 0x2DB6($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X2DB6);
    // 0x80008628: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000862C: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80008630: sb          $t2, 0x2DB6($at)
    MEM_B(0X2DB6, ctx->r1) = ctx->r10;
    // 0x80008634: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
L_80008638:
    // 0x80008638: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000863C: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80008640: lh          $t3, -0x5C9C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X5C9C);
    // 0x80008644: lb          $t1, 0x2DB6($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X2DB6);
    // 0x80008648: nop

    // 0x8000864C: slt         $at, $t1, $t3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80008650: bne         $at, $zero, L_80008660
    if (ctx->r1 != 0) {
        // 0x80008654: nop
    
            goto L_80008660;
    }
    // 0x80008654: nop

    // 0x80008658: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000865C: sb          $zero, 0x2DB6($at)
    MEM_B(0X2DB6, ctx->r1) = 0;
L_80008660:
    // 0x80008660: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80008664: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80008668: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000866C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80008670: lw          $t4, 0x2D5C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D5C);
    // 0x80008674: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80008678: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000867C: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80008680: sw          $t5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r13;
    // 0x80008684: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x80008688: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000868C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80008690: lw          $t8, 0x2DA8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2DA8);
    // 0x80008694: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80008698: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000869C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800086A0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800086A4: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x800086A8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800086AC: lh          $t1, 0x14($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X14);
    // 0x800086B0: nop

    // 0x800086B4: sh          $t1, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r9;
    // 0x800086B8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800086BC: nop

    // 0x800086C0: sh          $a0, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r4;
    // 0x800086C4: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x800086C8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800086CC: lb          $t5, 0x22($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X22);
    // 0x800086D0: nop

    // 0x800086D4: sb          $t5, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r13;
    // 0x800086D8: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x800086DC: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800086E0: lb          $t8, 0x23($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X23);
    // 0x800086E4: nop

    // 0x800086E8: sb          $t8, 0x5($t9)
    MEM_B(0X5, ctx->r25) = ctx->r24;
    // 0x800086EC: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x800086F0: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800086F4: lbu         $t1, 0x25($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X25);
    // 0x800086F8: nop

    // 0x800086FC: sb          $t1, 0x6($t3)
    MEM_B(0X6, ctx->r11) = ctx->r9;
    // 0x80008700: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80008704: nop

    // 0x80008708: sb          $a1, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r5;
    // 0x8000870C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80008710: lb          $t4, 0x2DB4($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X2DB4);
    // 0x80008714: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80008718: nop

    // 0x8000871C: sb          $t4, 0x8($t5)
    MEM_B(0X8, ctx->r13) = ctx->r12;
    // 0x80008720: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80008724: lb          $t6, 0x2DB5($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X2DB5);
    // 0x80008728: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8000872C: nop

    // 0x80008730: sb          $t6, 0x9($t7)
    MEM_B(0X9, ctx->r15) = ctx->r14;
    // 0x80008734: b           L_8000873C
    // 0x80008738: nop

        goto L_8000873C;
    // 0x80008738: nop

L_8000873C:
    // 0x8000873C: jr          $ra
    // 0x80008740: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80008740: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8000FF44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FF44: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8000FF48: bne         $a0, $zero, L_8000FF58
    if (ctx->r4 != 0) {
        // 0x8000FF4C: nop
    
            goto L_8000FF58;
    }
    // 0x8000FF4C: nop

    // 0x8000FF50: b           L_80010004
    // 0x8000FF54: nop

        goto L_80010004;
    // 0x8000FF54: nop

L_8000FF58:
    // 0x8000FF58: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8000FF5C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000FF60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000FF64: lw          $t8, 0x5D50($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5D50);
    // 0x8000FF68: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000FF6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8000FF70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000FF74: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8000FF78: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8000FF7C: nop

    // 0x8000FF80: lw          $at, 0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X4);
    // 0x8000FF84: nop

    // 0x8000FF88: sw          $at, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r1;
    // 0x8000FF8C: lw          $t3, 0x8($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X8);
    // 0x8000FF90: nop

    // 0x8000FF94: sw          $t3, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r11;
    // 0x8000FF98: lw          $at, 0xC($t0)
    ctx->r1 = MEM_W(ctx->r8, 0XC);
    // 0x8000FF9C: nop

    // 0x8000FFA0: sw          $at, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r1;
    // 0x8000FFA4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8000FFA8: nop

    // 0x8000FFAC: lw          $at, 0x10($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X10);
    // 0x8000FFB0: nop

    // 0x8000FFB4: sw          $at, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r1;
    // 0x8000FFB8: lw          $t7, 0x14($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X14);
    // 0x8000FFBC: nop

    // 0x8000FFC0: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x8000FFC4: lw          $at, 0x18($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X18);
    // 0x8000FFC8: nop

    // 0x8000FFCC: sw          $at, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r1;
    // 0x8000FFD0: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8000FFD4: nop

    // 0x8000FFD8: lw          $at, 0x1C($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X1C);
    // 0x8000FFDC: nop

    // 0x8000FFE0: sw          $at, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r1;
    // 0x8000FFE4: lw          $t1, 0x20($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X20);
    // 0x8000FFE8: nop

    // 0x8000FFEC: sw          $t1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r9;
    // 0x8000FFF0: lw          $at, 0x24($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X24);
    // 0x8000FFF4: nop

    // 0x8000FFF8: sw          $at, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r1;
    // 0x8000FFFC: b           L_80010004
    // 0x80010000: nop

        goto L_80010004;
    // 0x80010000: nop

L_80010004:
    // 0x80010004: jr          $ra
    // 0x80010008: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80010008: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void alSeqNextEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045DE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80045DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80045DEC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80045DF0: jal         0x80045D98
    // 0x80045DF4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    static_0_80045D98(rdram, ctx);
        goto after_0;
    // 0x80045DF4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    after_0:
    // 0x80045DF8: lw          $t6, 0xC($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XC);
    // 0x80045DFC: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80045E00: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80045E04: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80045E08: sw          $t7, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r15;
    // 0x80045E0C: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80045E10: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80045E14: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80045E18: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80045E1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80045E20: bne         $a0, $at, L_80045EE0
    if (ctx->r4 != ctx->r1) {
        // 0x80045E24: andi        $a1, $a0, 0xFF
        ctx->r5 = ctx->r4 & 0XFF;
            goto L_80045EE0;
    }
    // 0x80045E24: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x80045E28: lbu         $v0, 0x0($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X0);
    // 0x80045E2C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80045E30: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80045E34: sw          $t9, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r25;
    // 0x80045E38: bne         $v0, $at, L_80045EA8
    if (ctx->r2 != ctx->r1) {
        // 0x80045E3C: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_80045EA8;
    }
    // 0x80045E3C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80045E40: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80045E44: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    // 0x80045E48: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x80045E4C: sb          $a1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r5;
    // 0x80045E50: sb          $t0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r8;
    // 0x80045E54: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80045E58: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80045E5C: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80045E60: sw          $t7, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r15;
    // 0x80045E64: sb          $v0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r2;
    // 0x80045E68: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80045E6C: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80045E70: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80045E74: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80045E78: sb          $a0, 0xB($a3)
    MEM_B(0XB, ctx->r7) = ctx->r4;
    // 0x80045E7C: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80045E80: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x80045E84: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x80045E88: sw          $t9, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r25;
    // 0x80045E8C: sb          $a1, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r5;
    // 0x80045E90: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80045E94: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80045E98: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80045E9C: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    // 0x80045EA0: b           L_80045ED8
    // 0x80045EA4: sb          $a0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r4;
        goto L_80045ED8;
    // 0x80045EA4: sb          $a0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r4;
L_80045EA8:
    // 0x80045EA8: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x80045EAC: bne         $v0, $at, L_80045ED8
    if (ctx->r2 != ctx->r1) {
        // 0x80045EB0: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_80045ED8;
    }
    // 0x80045EB0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80045EB4: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
    // 0x80045EB8: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x80045EBC: sb          $a1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r5;
    // 0x80045EC0: sb          $t0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r8;
    // 0x80045EC4: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80045EC8: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80045ECC: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80045ED0: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80045ED4: sb          $a0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r4;
L_80045ED8:
    // 0x80045ED8: b           L_80045F58
    // 0x80045EDC: sh          $zero, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = 0;
        goto L_80045F58;
    // 0x80045EDC: sh          $zero, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = 0;
L_80045EE0:
    // 0x80045EE0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80045EE4: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x80045EE8: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
    // 0x80045EEC: beq         $t6, $zero, L_80045F14
    if (ctx->r14 == 0) {
        // 0x80045EF0: sw          $t1, 0x4($a3)
        MEM_W(0X4, ctx->r7) = ctx->r9;
            goto L_80045F14;
    }
    // 0x80045EF0: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x80045EF4: sb          $a1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r5;
    // 0x80045EF8: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80045EFC: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80045F00: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80045F04: sw          $t7, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r15;
    // 0x80045F08: sb          $a0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r4;
    // 0x80045F0C: b           L_80045F20
    // 0x80045F10: sh          $a1, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r5;
        goto L_80045F20;
    // 0x80045F10: sh          $a1, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r5;
L_80045F14:
    // 0x80045F14: lh          $t8, 0x1A($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X1A);
    // 0x80045F18: sb          $a0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r4;
    // 0x80045F1C: sb          $t8, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r24;
L_80045F20:
    // 0x80045F20: lbu         $v0, 0x8($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X8);
    // 0x80045F24: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x80045F28: andi        $t9, $v0, 0xF0
    ctx->r25 = ctx->r2 & 0XF0;
    // 0x80045F2C: beq         $t9, $at, L_80045F54
    if (ctx->r25 == ctx->r1) {
        // 0x80045F30: addiu       $at, $zero, 0xD0
        ctx->r1 = ADD32(0, 0XD0);
            goto L_80045F54;
    }
    // 0x80045F30: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x80045F34: beql        $t9, $at, L_80045F58
    if (ctx->r25 == ctx->r1) {
        // 0x80045F38: sb          $zero, 0xA($a3)
        MEM_B(0XA, ctx->r7) = 0;
            goto L_80045F58;
    }
    goto skip_0;
    // 0x80045F38: sb          $zero, 0xA($a3)
    MEM_B(0XA, ctx->r7) = 0;
    skip_0:
    // 0x80045F3C: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80045F40: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80045F44: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80045F48: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    // 0x80045F4C: b           L_80045F58
    // 0x80045F50: sb          $a0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r4;
        goto L_80045F58;
    // 0x80045F50: sb          $a0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r4;
L_80045F54:
    // 0x80045F54: sb          $zero, 0xA($a3)
    MEM_B(0XA, ctx->r7) = 0;
L_80045F58:
    // 0x80045F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80045F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80045F60: jr          $ra
    // 0x80045F64: nop

    return;
    // 0x80045F64: nop

;}
RECOMP_FUNC void Debug_SetBg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D638: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001D63C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D640: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8001D644: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8001D648: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8001D64C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8001D650: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D654: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8001D658: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D65C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8001D660: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8001D664: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8001D668: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8001D66C: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8001D670: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8001D674: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8001D678: nop

    // 0x8001D67C: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8001D680: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001D684: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8001D688: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D68C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8001D690: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8001D694: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8001D698: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8001D69C: lui         $t3, 0xFF10
    ctx->r11 = S32(0XFF10 << 16);
    // 0x8001D6A0: ori         $t3, $t3, 0x13F
    ctx->r11 = ctx->r11 | 0X13F;
    // 0x8001D6A4: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8001D6A8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001D6AC: lw          $t5, -0x1EF4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1EF4);
    // 0x8001D6B0: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8001D6B4: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x8001D6B8: lw          $a0, -0x7E98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7E98);
    // 0x8001D6BC: jal         0x800358D0
    // 0x8001D6C0: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x8001D6C0: nop

    after_0:
    // 0x8001D6C4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8001D6C8: nop

    // 0x8001D6CC: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x8001D6D0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8001D6D4: nop

    // 0x8001D6D8: beq         $t7, $zero, L_8001D778
    if (ctx->r15 == 0) {
        // 0x8001D6DC: nop
    
            goto L_8001D778;
    }
    // 0x8001D6DC: nop

    // 0x8001D6E0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001D6E4: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8001D6E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D6EC: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8001D6F0: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8001D6F4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8001D6F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8001D6FC: lui         $t0, 0xF700
    ctx->r8 = S32(0XF700 << 16);
    // 0x8001D700: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8001D704: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x8001D708: lbu         $t5, 0x3B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X3B);
    // 0x8001D70C: lbu         $t9, 0x3F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3F);
    // 0x8001D710: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8001D714: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8001D718: andi        $t7, $t6, 0x7C0
    ctx->r15 = ctx->r14 & 0X7C0;
    // 0x8001D71C: andi        $t4, $t3, 0xF800
    ctx->r12 = ctx->r11 & 0XF800;
    // 0x8001D720: sra         $t0, $t9, 2
    ctx->r8 = S32(SIGNED(ctx->r25) >> 2);
    // 0x8001D724: andi        $t1, $t0, 0x3E
    ctx->r9 = ctx->r8 & 0X3E;
    // 0x8001D728: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x8001D72C: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x8001D730: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x8001D734: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8001D738: sll         $t5, $t3, 16
    ctx->r13 = S32(ctx->r11 << 16);
    // 0x8001D73C: or          $t6, $t5, $t3
    ctx->r14 = ctx->r13 | ctx->r11;
    // 0x8001D740: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x8001D744: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001D748: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8001D74C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D750: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8001D754: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8001D758: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8001D75C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8001D760: lui         $t0, 0xF64F
    ctx->r8 = S32(0XF64F << 16);
    // 0x8001D764: ori         $t0, $t0, 0xC3BC
    ctx->r8 = ctx->r8 | 0XC3BC;
    // 0x8001D768: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    // 0x8001D76C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8001D770: nop

    // 0x8001D774: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
L_8001D778:
    // 0x8001D778: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001D77C: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8001D780: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D784: addiu       $t5, $t2, 0x8
    ctx->r13 = ADD32(ctx->r10, 0X8);
    // 0x8001D788: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8001D78C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8001D790: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D794: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8001D798: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x8001D79C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D7A0: nop

    // 0x8001D7A4: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8001D7A8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001D7AC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8001D7B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D7B4: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8001D7B8: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8001D7BC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8001D7C0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8001D7C4: lui         $t0, 0xBA00
    ctx->r8 = S32(0XBA00 << 16);
    // 0x8001D7C8: ori         $t0, $t0, 0x1402
    ctx->r8 = ctx->r8 | 0X1402;
    // 0x8001D7CC: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    // 0x8001D7D0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8001D7D4: nop

    // 0x8001D7D8: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8001D7DC: b           L_8001D7E4
    // 0x8001D7E0: nop

        goto L_8001D7E4;
    // 0x8001D7E0: nop

L_8001D7E4:
    // 0x8001D7E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D7E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8001D7EC: jr          $ra
    // 0x8001D7F0: nop

    return;
    // 0x8001D7F0: nop

;}
RECOMP_FUNC void func_8000B390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B390: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000B394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B398: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000B39C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000B3A0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000B3A4: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x8000B3A8: jal         0x8000AC1C
    // 0x8000B3AC: nop

    func_8000AC1C(rdram, ctx);
        goto after_0;
    // 0x8000B3AC: nop

    after_0:
    // 0x8000B3B0: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8000B3B4: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8000B3B8: nop

    // 0x8000B3BC: bgez        $t6, L_8000B3CC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8000B3C0: nop
    
            goto L_8000B3CC;
    }
    // 0x8000B3C0: nop

    // 0x8000B3C4: b           L_8000B3F4
    // 0x8000B3C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000B3F4;
    // 0x8000B3C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000B3CC:
    // 0x8000B3CC: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x8000B3D0: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x8000B3D4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8000B3D8: jal         0x8000BD20
    // 0x8000B3DC: nop

    func_8000BD20(rdram, ctx);
        goto after_1;
    // 0x8000B3DC: nop

    after_1:
    // 0x8000B3E0: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x8000B3E4: b           L_8000B3F4
    // 0x8000B3E8: nop

        goto L_8000B3F4;
    // 0x8000B3E8: nop

    // 0x8000B3EC: b           L_8000B3F4
    // 0x8000B3F0: nop

        goto L_8000B3F4;
    // 0x8000B3F0: nop

L_8000B3F4:
    // 0x8000B3F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B3F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000B3FC: jr          $ra
    // 0x8000B400: nop

    return;
    // 0x8000B400: nop

;}
RECOMP_FUNC void _frexpf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040A78: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x80040A7C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80040A80: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80040A84: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80040A88: c.eq.d      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.d == ctx->f2.d;
    // 0x80040A8C: nop

    // 0x80040A90: bc1fl       L_80040AA4
    if (!c1cs) {
        // 0x80040A94: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_80040AA4;
    }
    goto skip_0;
    // 0x80040A94: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_0:
    // 0x80040A98: jr          $ra
    // 0x80040A9C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x80040A9C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x80040AA0: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_80040AA4:
    // 0x80040AA4: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x80040AA8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80040AAC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80040AB0: bc1fl       L_80040AC4
    if (!c1cs) {
        // 0x80040AB4: neg.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
            goto L_80040AC4;
    }
    goto skip_1;
    // 0x80040AB4: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
    skip_1:
    // 0x80040AB8: b           L_80040AC4
    // 0x80040ABC: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
        goto L_80040AC4;
    // 0x80040ABC: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x80040AC0: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
L_80040AC4:
    // 0x80040AC4: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x80040AC8: nop

    // 0x80040ACC: bc1fl       L_80040B04
    if (!c1cs) {
        // 0x80040AD0: lui         $at, 0x3FE0
        ctx->r1 = S32(0X3FE0 << 16);
            goto L_80040B04;
    }
    goto skip_2;
    // 0x80040AD0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    skip_2:
    // 0x80040AD4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80040AD8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80040ADC: nop

L_80040AE0:
    // 0x80040AE0: mul.d       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f16.d);
    // 0x80040AE4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80040AE8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80040AEC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80040AF0: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x80040AF4: nop

    // 0x80040AF8: bc1t        L_80040AE0
    if (c1cs) {
        // 0x80040AFC: nop
    
            goto L_80040AE0;
    }
    // 0x80040AFC: nop

    // 0x80040B00: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
L_80040B04:
    // 0x80040B04: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80040B08: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80040B0C: nop

    // 0x80040B10: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x80040B14: nop

    // 0x80040B18: bc1fl       L_80040B40
    if (!c1cs) {
        // 0x80040B1C: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_80040B40;
    }
    goto skip_3;
    // 0x80040B1C: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_3:
    // 0x80040B20: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
L_80040B24:
    // 0x80040B24: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80040B28: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x80040B2C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80040B30: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80040B34: bc1tl       L_80040B24
    if (c1cs) {
        // 0x80040B38: add.d       $f0, $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
            goto L_80040B24;
    }
    goto skip_4;
    // 0x80040B38: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
    skip_4:
    // 0x80040B3C: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_80040B40:
    // 0x80040B40: nop

    // 0x80040B44: bc1fl       L_80040B58
    if (!c1cs) {
        // 0x80040B48: neg.d       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
            goto L_80040B58;
    }
    goto skip_5;
    // 0x80040B48: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
    skip_5:
    // 0x80040B4C: b           L_80040B58
    // 0x80040B50: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
        goto L_80040B58;
    // 0x80040B50: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
    // 0x80040B54: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
L_80040B58:
    // 0x80040B58: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x80040B5C: jr          $ra
    // 0x80040B60: nop

    return;
    // 0x80040B60: nop

;}
RECOMP_FUNC void func_800171E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800171E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800171E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800171E8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800171EC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800171F0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800171F4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800171F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800171FC: bne         $t6, $at, L_8001720C
    if (ctx->r14 != ctx->r1) {
        // 0x80017200: nop
    
            goto L_8001720C;
    }
    // 0x80017200: nop

    // 0x80017204: b           L_8001744C
    // 0x80017208: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8001744C;
    // 0x80017208: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8001720C:
    // 0x8001720C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80017210: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80017214: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80017218: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001721C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80017220: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80017224: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80017228: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8001722C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80017230: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80017234: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80017238: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001723C: lwc1        $f6, -0x1EC0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80017240: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017244: lwc1        $f10, -0x1EB8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80017248: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8001724C: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80017250: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80017254: jal         0x80015634
    // 0x80017258: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_0;
    // 0x80017258: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8001725C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80017260: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017264: lwc1        $f16, -0x1EB4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EB4);
    // 0x80017268: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001726C: lwc1        $f18, -0x1EC0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80017270: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017274: lwc1        $f4, -0x1EAC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EAC);
    // 0x80017278: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001727C: lwc1        $f6, -0x1EB8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80017280: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80017284: jal         0x80015634
    // 0x80017288: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_1;
    // 0x80017288: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_1:
    // 0x8001728C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80017290: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80017294: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017298: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x8001729C: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800172A0: nop

    // 0x800172A4: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800172A8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x800172AC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800172B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800172B4: lwc1        $f4, -0x1EB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x800172B8: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800172BC: nop

    // 0x800172C0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800172C4: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x800172C8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800172CC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800172D0: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x800172D4: nop

    // 0x800172D8: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800172DC: jal         0x800366E0
    // 0x800172E0: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_2;
    // 0x800172E0: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_2:
    // 0x800172E4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800172E8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800172EC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800172F0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800172F4: lwc1        $f11, -0x43D8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X43D8);
    // 0x800172F8: lwc1        $f10, -0x43D4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X43D4);
    // 0x800172FC: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80017300: mul.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f10.d);
    // 0x80017304: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80017308: jal         0x80034970
    // 0x8001730C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x8001730C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x80017310: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80017314: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80017318: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8001731C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80017320: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80017324: nop

    // 0x80017328: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8001732C: nop

    // 0x80017330: bc1f        L_80017348
    if (!c1cs) {
        // 0x80017334: nop
    
            goto L_80017348;
    }
    // 0x80017334: nop

    // 0x80017338: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8001733C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80017340: b           L_80017378
    // 0x80017344: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
        goto L_80017378;
    // 0x80017344: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
L_80017348:
    // 0x80017348: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x8001734C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80017350: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80017354: nop

    // 0x80017358: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x8001735C: nop

    // 0x80017360: bc1f        L_80017378
    if (!c1cs) {
        // 0x80017364: nop
    
            goto L_80017378;
    }
    // 0x80017364: nop

    // 0x80017368: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x8001736C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80017370: nop

    // 0x80017374: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_80017378:
    // 0x80017378: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8001737C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80017380: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80017384: nop

    // 0x80017388: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8001738C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x80017390: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80017394: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80017398: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001739C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x800173A0: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800173A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800173A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800173AC: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800173B0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800173B4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800173B8: nop

    // 0x800173BC: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800173C0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800173C4: nop

    // 0x800173C8: andi        $at, $v0, 0x4
    ctx->r1 = ctx->r2 & 0X4;
    // 0x800173CC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800173D0: beq         $v0, $zero, L_80017424
    if (ctx->r2 == 0) {
        // 0x800173D4: nop
    
            goto L_80017424;
    }
    // 0x800173D4: nop

    // 0x800173D8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800173DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800173E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800173E4: sub.s       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800173E8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800173EC: nop

    // 0x800173F0: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800173F4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800173F8: nop

    // 0x800173FC: andi        $at, $v0, 0x4
    ctx->r1 = ctx->r2 & 0X4;
    // 0x80017400: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80017404: bne         $v0, $zero, L_8001741C
    if (ctx->r2 != 0) {
        // 0x80017408: nop
    
            goto L_8001741C;
    }
    // 0x80017408: nop

    // 0x8001740C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80017410: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80017414: b           L_80017434
    // 0x80017418: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80017434;
    // 0x80017418: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_8001741C:
    // 0x8001741C: b           L_80017434
    // 0x80017420: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80017434;
    // 0x80017420: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80017424:
    // 0x80017424: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80017428: nop

    // 0x8001742C: bltz        $v0, L_8001741C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80017430: nop
    
            goto L_8001741C;
    }
    // 0x80017430: nop

L_80017434:
    // 0x80017434: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80017438: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8001743C: b           L_8001744C
    // 0x80017440: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_8001744C;
    // 0x80017440: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x80017444: b           L_8001744C
    // 0x80017448: nop

        goto L_8001744C;
    // 0x80017448: nop

L_8001744C:
    // 0x8001744C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80017450: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80017454: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80017458: jr          $ra
    // 0x8001745C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8001745C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void _free(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800303A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800303AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800303B0: jal         0x800309D0
    // 0x800303B4: nop

    free_game(rdram, ctx);
        goto after_0;
    // 0x800303B4: nop

    after_0:
    // 0x800303B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800303BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800303C0: jr          $ra
    // 0x800303C4: nop

    return;
    // 0x800303C4: nop

;}
RECOMP_FUNC void func_8001A958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A95C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A960: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001A964: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001A968: jal         0x8001A88C
    // 0x8001A96C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001A88C(rdram, ctx);
        goto after_0;
    // 0x8001A96C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8001A970: b           L_8001A978
    // 0x8001A974: nop

        goto L_8001A978;
    // 0x8001A974: nop

L_8001A978:
    // 0x8001A978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A980: jr          $ra
    // 0x8001A984: nop

    return;
    // 0x8001A984: nop

;}
RECOMP_FUNC void func_80024EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024EF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80024EF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80024EFC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80024F00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80024F04: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80024F08: jal         0x80024C10
    // 0x80024F0C: nop

    func_80024C10(rdram, ctx);
        goto after_0;
    // 0x80024F0C: nop

    after_0:
    // 0x80024F10: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80024F14: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80024F18: jal         0x80024D20
    // 0x80024F1C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80024D20(rdram, ctx);
        goto after_1;
    // 0x80024F1C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80024F20: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80024F24: nop

    // 0x80024F28: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80024F2C: beq         $at, $zero, L_80024F40
    if (ctx->r1 == 0) {
        // 0x80024F30: nop
    
            goto L_80024F40;
    }
    // 0x80024F30: nop

    // 0x80024F34: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x80024F38: b           L_80024F48
    // 0x80024F3C: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_80024F48;
    // 0x80024F3C: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_80024F40:
    // 0x80024F40: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80024F44: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_80024F48:
    // 0x80024F48: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80024F4C: nop

    // 0x80024F50: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80024F54: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80024F58: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80024F5C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80024F60: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80024F64: lhu         $t3, 0x26($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X26);
    // 0x80024F68: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80024F6C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80024F70: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80024F74: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80024F78: sb          $t1, 0x7448($at)
    MEM_B(0X7448, ctx->r1) = ctx->r9;
    // 0x80024F7C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80024F80: lhu         $t6, 0x26($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X26);
    // 0x80024F84: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80024F88: addu        $a2, $t6, $t5
    ctx->r6 = ADD32(ctx->r14, ctx->r13);
    // 0x80024F8C: addiu       $a2, $a2, -0x8
    ctx->r6 = ADD32(ctx->r6, -0X8);
    // 0x80024F90: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80024F94: addiu       $t8, $t7, -0x8
    ctx->r24 = ADD32(ctx->r15, -0X8);
    // 0x80024F98: addiu       $t9, $t9, 0x7450
    ctx->r25 = ADD32(ctx->r25, 0X7450);
    // 0x80024F9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80024FA0: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x80024FA4: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x80024FA8: bgez        $a2, L_80024FB8
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80024FAC: sra         $t0, $a2, 3
        ctx->r8 = S32(SIGNED(ctx->r6) >> 3);
            goto L_80024FB8;
    }
    // 0x80024FAC: sra         $t0, $a2, 3
    ctx->r8 = S32(SIGNED(ctx->r6) >> 3);
    // 0x80024FB0: addiu       $at, $a2, 0x7
    ctx->r1 = ADD32(ctx->r6, 0X7);
    // 0x80024FB4: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_80024FB8:
    // 0x80024FB8: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80024FBC: jal         0x8001F798
    // 0x80024FC0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    Eeprom_Write(rdram, ctx);
        goto after_2;
    // 0x80024FC0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_2:
    // 0x80024FC4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80024FC8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80024FCC: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80024FD0: addiu       $t3, $t3, 0x7450
    ctx->r11 = ADD32(ctx->r11, 0X7450);
    // 0x80024FD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80024FD8: lhu         $a3, 0x26($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X26);
    // 0x80024FDC: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x80024FE0: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x80024FE4: bgez        $t2, L_80024FF4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80024FE8: sra         $a2, $t2, 3
        ctx->r6 = S32(SIGNED(ctx->r10) >> 3);
            goto L_80024FF4;
    }
    // 0x80024FE8: sra         $a2, $t2, 3
    ctx->r6 = S32(SIGNED(ctx->r10) >> 3);
    // 0x80024FEC: addiu       $at, $t2, 0x7
    ctx->r1 = ADD32(ctx->r10, 0X7);
    // 0x80024FF0: sra         $a2, $at, 3
    ctx->r6 = S32(SIGNED(ctx->r1) >> 3);
L_80024FF4:
    // 0x80024FF4: jal         0x8001F798
    // 0x80024FF8: nop

    Eeprom_Write(rdram, ctx);
        goto after_3;
    // 0x80024FF8: nop

    after_3:
    // 0x80024FFC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80025000: nop

    // 0x80025004: addu        $t4, $v0, $t1
    ctx->r12 = ADD32(ctx->r2, ctx->r9);
    // 0x80025008: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8002500C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80025010: lhu         $t8, 0x26($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X26);
    // 0x80025014: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025018: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002501C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80025020: sb          $zero, 0x7448($at)
    MEM_B(0X7448, ctx->r1) = 0;
    // 0x80025024: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80025028: lhu         $t5, 0x26($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X26);
    // 0x8002502C: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80025030: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x80025034: addiu       $a2, $a2, -0x8
    ctx->r6 = ADD32(ctx->r6, -0X8);
    // 0x80025038: addu        $t0, $t6, $t5
    ctx->r8 = ADD32(ctx->r14, ctx->r13);
    // 0x8002503C: addiu       $t3, $t0, -0x8
    ctx->r11 = ADD32(ctx->r8, -0X8);
    // 0x80025040: addiu       $t2, $t2, 0x7450
    ctx->r10 = ADD32(ctx->r10, 0X7450);
    // 0x80025044: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80025048: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x8002504C: addu        $a1, $t3, $t2
    ctx->r5 = ADD32(ctx->r11, ctx->r10);
    // 0x80025050: bgez        $a2, L_80025060
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80025054: sra         $t1, $a2, 3
        ctx->r9 = S32(SIGNED(ctx->r6) >> 3);
            goto L_80025060;
    }
    // 0x80025054: sra         $t1, $a2, 3
    ctx->r9 = S32(SIGNED(ctx->r6) >> 3);
    // 0x80025058: addiu       $at, $a2, 0x7
    ctx->r1 = ADD32(ctx->r6, 0X7);
    // 0x8002505C: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_80025060:
    // 0x80025060: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80025064: jal         0x8001F798
    // 0x80025068: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    Eeprom_Write(rdram, ctx);
        goto after_4;
    // 0x80025068: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_4:
    // 0x8002506C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80025070: nop

    // 0x80025074: addu        $t7, $v0, $t4
    ctx->r15 = ADD32(ctx->r2, ctx->r12);
    // 0x80025078: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8002507C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80025080: b           L_80025090
    // 0x80025084: nop

        goto L_80025090;
    // 0x80025084: nop

    // 0x80025088: b           L_80025090
    // 0x8002508C: nop

        goto L_80025090;
    // 0x8002508C: nop

L_80025090:
    // 0x80025090: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80025094: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80025098: jr          $ra
    // 0x8002509C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8002509C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000CE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CE24: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8000CE28: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8000CE2C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8000CE30: bgez        $a0, L_8000CE3C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8000CE34: nop
    
            goto L_8000CE3C;
    }
    // 0x8000CE34: nop

    // 0x8000CE38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8000CE3C:
    // 0x8000CE3C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000CE40: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x8000CE44: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x8000CE48: blez        $t6, L_8000CF28
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8000CE4C: nop
    
            goto L_8000CF28;
    }
    // 0x8000CE4C: nop

L_8000CE50:
    // 0x8000CE50: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8000CE54: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000CE58: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000CE5C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000CE60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000CE64: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000CE68: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000CE6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000CE70: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8000CE74: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8000CE78: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8000CE7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000CE80: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8000CE84: nop

    // 0x8000CE88: beq         $t2, $at, L_8000CE98
    if (ctx->r10 == ctx->r1) {
        // 0x8000CE8C: nop
    
            goto L_8000CE98;
    }
    // 0x8000CE8C: nop

    // 0x8000CE90: b           L_8000CF0C
    // 0x8000CE94: nop

        goto L_8000CF0C;
    // 0x8000CE94: nop

L_8000CE98:
    // 0x8000CE98: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8000CE9C: nop

    // 0x8000CEA0: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x8000CEA4: nop

    // 0x8000CEA8: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x8000CEAC: beq         $t5, $zero, L_8000CEBC
    if (ctx->r13 == 0) {
        // 0x8000CEB0: nop
    
            goto L_8000CEBC;
    }
    // 0x8000CEB0: nop

    // 0x8000CEB4: b           L_8000CF0C
    // 0x8000CEB8: nop

        goto L_8000CF0C;
    // 0x8000CEB8: nop

L_8000CEBC:
    // 0x8000CEBC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8000CEC0: nop

    // 0x8000CEC4: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8000CEC8: nop

    // 0x8000CECC: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x8000CED0: bne         $t8, $zero, L_8000CF00
    if (ctx->r24 != 0) {
        // 0x8000CED4: nop
    
            goto L_8000CF00;
    }
    // 0x8000CED4: nop

    // 0x8000CED8: lbu         $t9, 0x28($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X28);
    // 0x8000CEDC: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x8000CEE0: beq         $t9, $t0, L_8000CF00
    if (ctx->r25 == ctx->r8) {
        // 0x8000CEE4: nop
    
            goto L_8000CF00;
    }
    // 0x8000CEE4: nop

    // 0x8000CEE8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8000CEEC: nop

    // 0x8000CEF0: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x8000CEF4: nop

    // 0x8000CEF8: ori         $t3, $t2, 0x8
    ctx->r11 = ctx->r10 | 0X8;
    // 0x8000CEFC: sw          $t3, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r11;
L_8000CF00:
    // 0x8000CF00: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8000CF04: nop

    // 0x8000CF08: sb          $a0, 0x28($t4)
    MEM_B(0X28, ctx->r12) = ctx->r4;
L_8000CF0C:
    // 0x8000CF0C: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x8000CF10: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000CF14: lw          $t8, -0x5CF4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CF4);
    // 0x8000CF18: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x8000CF1C: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8000CF20: bne         $at, $zero, L_8000CE50
    if (ctx->r1 != 0) {
        // 0x8000CF24: sw          $t7, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r15;
            goto L_8000CE50;
    }
    // 0x8000CF24: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
L_8000CF28:
    // 0x8000CF28: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000CF2C: sb          $a0, 0x2D7C($at)
    MEM_B(0X2D7C, ctx->r1) = ctx->r4;
    // 0x8000CF30: b           L_8000CF38
    // 0x8000CF34: nop

        goto L_8000CF38;
    // 0x8000CF34: nop

L_8000CF38:
    // 0x8000CF38: jr          $ra
    // 0x8000CF3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8000CF3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001A488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A488: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8001A48C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8001A490: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8001A494: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8001A498: addiu       $t7, $t7, 0x5290
    ctx->r15 = ADD32(ctx->r15, 0X5290);
    // 0x8001A49C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001A4A0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001A4A4: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8001A4A8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8001A4AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001A4B0: lw          $t0, 0x18($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18);
    // 0x8001A4B4: nop

    // 0x8001A4B8: sw          $t0, -0x1C54($at)
    MEM_W(-0X1C54, ctx->r1) = ctx->r8;
    // 0x8001A4BC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8001A4C0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A4C4: lw          $t2, 0x28($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X28);
    // 0x8001A4C8: nop

    // 0x8001A4CC: sw          $t2, 0x5D50($at)
    MEM_W(0X5D50, ctx->r1) = ctx->r10;
    // 0x8001A4D0: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8001A4D4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A4D8: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x8001A4DC: nop

    // 0x8001A4E0: sw          $t4, 0x5D54($at)
    MEM_W(0X5D54, ctx->r1) = ctx->r12;
    // 0x8001A4E4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8001A4E8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A4EC: lw          $t6, 0x30($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X30);
    // 0x8001A4F0: nop

    // 0x8001A4F4: sw          $t6, 0x5D58($at)
    MEM_W(0X5D58, ctx->r1) = ctx->r14;
    // 0x8001A4F8: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8001A4FC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A500: lw          $t8, 0x34($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X34);
    // 0x8001A504: nop

    // 0x8001A508: sw          $t8, 0x5D5C($at)
    MEM_W(0X5D5C, ctx->r1) = ctx->r24;
    // 0x8001A50C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8001A510: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A514: lw          $t0, 0x38($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X38);
    // 0x8001A518: nop

    // 0x8001A51C: sw          $t0, 0x5D60($at)
    MEM_W(0X5D60, ctx->r1) = ctx->r8;
    // 0x8001A520: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8001A524: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A528: lw          $t2, 0x3C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X3C);
    // 0x8001A52C: nop

    // 0x8001A530: sw          $t2, -0x5C30($at)
    MEM_W(-0X5C30, ctx->r1) = ctx->r10;
    // 0x8001A534: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8001A538: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A53C: lw          $t4, 0x40($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X40);
    // 0x8001A540: nop

    // 0x8001A544: sw          $t4, 0x5D64($at)
    MEM_W(0X5D64, ctx->r1) = ctx->r12;
    // 0x8001A548: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8001A54C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A550: lw          $t6, 0x44($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X44);
    // 0x8001A554: nop

    // 0x8001A558: sw          $t6, -0x5C2C($at)
    MEM_W(-0X5C2C, ctx->r1) = ctx->r14;
    // 0x8001A55C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8001A560: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A564: lw          $t8, 0x48($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X48);
    // 0x8001A568: nop

    // 0x8001A56C: sw          $t8, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = ctx->r24;
    // 0x8001A570: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8001A574: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8001A578: lw          $t0, 0x4C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4C);
    // 0x8001A57C: addiu       $t1, $t1, 0x5D30
    ctx->r9 = ADD32(ctx->r9, 0X5D30);
    // 0x8001A580: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8001A584: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8001A588: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8001A58C: lw          $t3, 0x50($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X50);
    // 0x8001A590: addiu       $t4, $t4, 0x5D30
    ctx->r12 = ADD32(ctx->r12, 0X5D30);
    // 0x8001A594: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8001A598: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8001A59C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8001A5A0: lw          $t6, 0x54($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X54);
    // 0x8001A5A4: addiu       $t7, $t7, 0x5D30
    ctx->r15 = ADD32(ctx->r15, 0X5D30);
    // 0x8001A5A8: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x8001A5AC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8001A5B0: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8001A5B4: lw          $t9, 0x58($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X58);
    // 0x8001A5B8: addiu       $t0, $t0, 0x5D40
    ctx->r8 = ADD32(ctx->r8, 0X5D40);
    // 0x8001A5BC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8001A5C0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8001A5C4: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8001A5C8: lw          $t2, 0x5C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X5C);
    // 0x8001A5CC: addiu       $t3, $t3, 0x5D40
    ctx->r11 = ADD32(ctx->r11, 0X5D40);
    // 0x8001A5D0: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8001A5D4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8001A5D8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001A5DC: lw          $t5, 0x60($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X60);
    // 0x8001A5E0: addiu       $t6, $t6, 0x5D40
    ctx->r14 = ADD32(ctx->r14, 0X5D40);
    // 0x8001A5E4: sw          $t5, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r13;
    // 0x8001A5E8: b           L_8001A5F0
    // 0x8001A5EC: nop

        goto L_8001A5F0;
    // 0x8001A5EC: nop

L_8001A5F0:
    // 0x8001A5F0: jr          $ra
    // 0x8001A5F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8001A5F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80016FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016FD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80016FD4: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80016FD8: jal         0x800042D8
    // 0x80016FDC: nop

    func_800042D8(rdram, ctx);
        goto after_0;
    // 0x80016FDC: nop

    after_0:
    // 0x80016FE0: b           L_80016FE8
    // 0x80016FE4: nop

        goto L_80016FE8;
    // 0x80016FE4: nop

L_80016FE8:
    // 0x80016FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016FEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016FF0: jr          $ra
    // 0x80016FF4: nop

    return;
    // 0x80016FF4: nop

;}
RECOMP_FUNC void func_8000B1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B1FC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8000B200: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8000B204: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000B208: nop

    // 0x8000B20C: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x8000B210: nop

    // 0x8000B214: bc1f        L_8000B224
    if (!c1cs) {
        // 0x8000B218: nop
    
            goto L_8000B224;
    }
    // 0x8000B218: nop

    // 0x8000B21C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B220: swc1        $f12, 0x2DA0($at)
    MEM_W(0X2DA0, ctx->r1) = ctx->f12.u32l;
L_8000B224:
    // 0x8000B224: bltz        $a2, L_8000B234
    if (SIGNED(ctx->r6) < 0) {
        // 0x8000B228: nop
    
            goto L_8000B234;
    }
    // 0x8000B228: nop

    // 0x8000B22C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B230: sh          $a2, 0x2D9E($at)
    MEM_H(0X2D9E, ctx->r1) = ctx->r6;
L_8000B234:
    // 0x8000B234: bltz        $a1, L_8000B24C
    if (SIGNED(ctx->r5) < 0) {
        // 0x8000B238: nop
    
            goto L_8000B24C;
    }
    // 0x8000B238: nop

    // 0x8000B23C: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x8000B240: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B244: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000B248: swc1        $f8, 0x2DA4($at)
    MEM_W(0X2DA4, ctx->r1) = ctx->f8.u32l;
L_8000B24C:
    // 0x8000B24C: jr          $ra
    // 0x8000B250: nop

    return;
    // 0x8000B250: nop

    // 0x8000B254: jr          $ra
    // 0x8000B258: nop

    return;
    // 0x8000B258: nop

;}
RECOMP_FUNC void func_8000FD9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FD9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000FDA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000FDA4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000FDA8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8000FDAC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8000FDB0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8000FDB4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000FDB8: sw          $zero, 0x5820($at)
    MEM_W(0X5820, ctx->r1) = 0;
    // 0x8000FDBC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000FDC0: lw          $t6, 0x5820($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5820);
    // 0x8000FDC4: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8000FDC8: lw          $a1, -0x1EFC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EFC);
    // 0x8000FDCC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000FDD0: addiu       $t8, $t8, 0x5828
    ctx->r24 = ADD32(ctx->r24, 0X5828);
    // 0x8000FDD4: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x8000FDD8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8000FDDC: jal         0x800362A8
    // 0x8000FDE0: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    guMtxL2F(rdram, ctx);
        goto after_0;
    // 0x8000FDE0: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_0:
    // 0x8000FDE4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8000FDE8: nop

    // 0x8000FDEC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8000FDF0: nop

    // 0x8000FDF4: bne         $t0, $zero, L_8000FE34
    if (ctx->r8 != 0) {
        // 0x8000FDF8: nop
    
            goto L_8000FE34;
    }
    // 0x8000FDF8: nop

    // 0x8000FDFC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8000FE00: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8000FE04: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8000FE08: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8000FE0C: lw          $t3, 0x28($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X28);
    // 0x8000FE10: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8000FE14: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8000FE18: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8000FE1C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8000FE20: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8000FE24: jal         0x8000EEE8
    // 0x8000FE28: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_8000EEE8(rdram, ctx);
        goto after_1;
    // 0x8000FE28: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_1:
    // 0x8000FE2C: b           L_8000FE80
    // 0x8000FE30: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
        goto L_8000FE80;
    // 0x8000FE30: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
L_8000FE34:
    // 0x8000FE34: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8000FE38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000FE3C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8000FE40: nop

    // 0x8000FE44: bne         $t6, $at, L_8000FE80
    if (ctx->r14 != ctx->r1) {
        // 0x8000FE48: nop
    
            goto L_8000FE80;
    }
    // 0x8000FE48: nop

    // 0x8000FE4C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8000FE50: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8000FE54: lw          $a0, 0x28($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X28);
    // 0x8000FE58: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8000FE5C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8000FE60: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8000FE64: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8000FE68: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8000FE6C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8000FE70: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8000FE74: jal         0x8000FC08
    // 0x8000FE78: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_8000FC08(rdram, ctx);
        goto after_2;
    // 0x8000FE78: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_2:
    // 0x8000FE7C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
L_8000FE80:
    // 0x8000FE80: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x8000FE84: b           L_8000FE94
    // 0x8000FE88: nop

        goto L_8000FE94;
    // 0x8000FE88: nop

    // 0x8000FE8C: b           L_8000FE94
    // 0x8000FE90: nop

        goto L_8000FE94;
    // 0x8000FE90: nop

L_8000FE94:
    // 0x8000FE94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000FE98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000FE9C: jr          $ra
    // 0x8000FEA0: nop

    return;
    // 0x8000FEA0: nop

;}
RECOMP_FUNC void func_8001D284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D284: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D288: lb          $t6, -0x1EE4($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1EE4);
    // 0x8001D28C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001D290: beq         $t6, $at, L_8001D2B0
    if (ctx->r14 == ctx->r1) {
        // 0x8001D294: nop
    
            goto L_8001D2B0;
    }
    // 0x8001D294: nop

    // 0x8001D298: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8001D29C: beq         $t6, $at, L_8001D2B0
    if (ctx->r14 == ctx->r1) {
        // 0x8001D2A0: nop
    
            goto L_8001D2B0;
    }
    // 0x8001D2A0: nop

    // 0x8001D2A4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8001D2A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D2AC: sb          $t7, -0x1EE4($at)
    MEM_B(-0X1EE4, ctx->r1) = ctx->r15;
L_8001D2B0:
    // 0x8001D2B0: jr          $ra
    // 0x8001D2B4: nop

    return;
    // 0x8001D2B4: nop

    // 0x8001D2B8: jr          $ra
    // 0x8001D2BC: nop

    return;
    // 0x8001D2BC: nop

;}
RECOMP_FUNC void func_8001BBDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BBDC: beq         $a1, $zero, L_8001BC2C
    if (ctx->r5 == 0) {
        // 0x8001BBE0: nop
    
            goto L_8001BC2C;
    }
    // 0x8001BBE0: nop

    // 0x8001BBE4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001BBE8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BBEC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001BBF0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BBF4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8001BBF8: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8001BBFC: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x8001BC00: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8001BC04: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001BC08: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001BC0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001BC10: lbu         $t9, 0x130($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X130);
    // 0x8001BC14: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x8001BC18: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8001BC1C: addu        $t2, $t1, $t7
    ctx->r10 = ADD32(ctx->r9, ctx->r15);
    // 0x8001BC20: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x8001BC24: b           L_8001BC74
    // 0x8001BC28: sb          $t0, 0x130($t2)
    MEM_B(0X130, ctx->r10) = ctx->r8;
        goto L_8001BC74;
    // 0x8001BC28: sb          $t0, 0x130($t2)
    MEM_B(0X130, ctx->r10) = ctx->r8;
L_8001BC2C:
    // 0x8001BC2C: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x8001BC30: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x8001BC34: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001BC38: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x8001BC3C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8001BC40: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8001BC44: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8001BC48: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8001BC4C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8001BC50: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001BC54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001BC58: lbu         $t6, 0x130($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X130);
    // 0x8001BC5C: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8001BC60: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001BC64: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8001BC68: addu        $t1, $t9, $t4
    ctx->r9 = ADD32(ctx->r25, ctx->r12);
    // 0x8001BC6C: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x8001BC70: sb          $t8, 0x130($t1)
    MEM_B(0X130, ctx->r9) = ctx->r24;
L_8001BC74:
    // 0x8001BC74: jr          $ra
    // 0x8001BC78: nop

    return;
    // 0x8001BC78: nop

    // 0x8001BC7C: jr          $ra
    // 0x8001BC80: nop

    return;
    // 0x8001BC80: nop

;}
RECOMP_FUNC void guMtxIdent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036278: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8003627C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036280: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80036284: jal         0x800361F0
    // 0x80036288: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80036288: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8003628C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80036290: jal         0x800360F0
    // 0x80036294: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80036294: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x80036298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003629C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800362A0: jr          $ra
    // 0x800362A4: nop

    return;
    // 0x800362A4: nop

;}
RECOMP_FUNC void func_800246F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800246F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800246F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800246F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800246FC: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x80024700: nop

    // 0x80024704: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x80024708: bne         $t7, $zero, L_80024718
    if (ctx->r15 != 0) {
        // 0x8002470C: nop
    
            goto L_80024718;
    }
    // 0x8002470C: nop

    // 0x80024710: b           L_80024734
    // 0x80024714: nop

        goto L_80024734;
    // 0x80024714: nop

L_80024718:
    // 0x80024718: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002471C: addiu       $t8, $t8, 0xD38
    ctx->r24 = ADD32(ctx->r24, 0XD38);
    // 0x80024720: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80024724: jal         0x8005FAA0
    // 0x80024728: addiu       $a1, $t8, 0x1000
    ctx->r5 = ADD32(ctx->r24, 0X1000);
    func_8005FAA0(rdram, ctx);
        goto after_0;
    // 0x80024728: addiu       $a1, $t8, 0x1000
    ctx->r5 = ADD32(ctx->r24, 0X1000);
    after_0:
    // 0x8002472C: b           L_80024734
    // 0x80024730: nop

        goto L_80024734;
    // 0x80024730: nop

L_80024734:
    // 0x80024734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80024738: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002473C: jr          $ra
    // 0x80024740: nop

    return;
    // 0x80024740: nop

;}
RECOMP_FUNC void guMtxXFMF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036360: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80036364: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80036368: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8003636C: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80036370: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80036374: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80036378: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8003637C: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80036380: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80036384: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80036388: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8003638C: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80036390: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80036394: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80036398: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x8003639C: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800363A0: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x800363A4: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x800363A8: mul.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800363AC: lwc1        $f18, 0x24($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X24);
    // 0x800363B0: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x800363B4: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800363B8: mul.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x800363BC: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x800363C0: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x800363C4: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800363C8: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
    // 0x800363CC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800363D0: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800363D4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800363D8: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800363DC: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x800363E0: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x800363E4: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800363E8: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x800363EC: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x800363F0: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800363F4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800363F8: jr          $ra
    // 0x800363FC: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    return;
    // 0x800363FC: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800241CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800241CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800241D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800241D4: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x800241D8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
L_800241DC:
    // 0x800241DC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800241E0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800241E4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800241E8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800241EC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800241F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800241F4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800241F8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800241FC: lh          $t9, 0x4254($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4254);
    // 0x80024200: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80024204: beq         $t9, $at, L_800242C0
    if (ctx->r25 == ctx->r1) {
        // 0x80024208: nop
    
            goto L_800242C0;
    }
    // 0x80024208: nop

    // 0x8002420C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80024210: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80024214: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80024218: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002421C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80024220: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80024224: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80024228: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8002422C: lh          $t2, 0x4254($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4254);
    // 0x80024230: nop

    // 0x80024234: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80024238: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8002423C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80024240: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80024244: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80024248: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8002424C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80024250: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80024254: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80024258: lbu         $t5, 0x425A($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X425A);
    // 0x8002425C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80024260: bne         $t5, $at, L_80024280
    if (ctx->r13 != ctx->r1) {
        // 0x80024264: nop
    
            goto L_80024280;
    }
    // 0x80024264: nop

    // 0x80024268: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002426C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80024270: jal         0x800225D8
    // 0x80024274: nop

    func_800225D8(rdram, ctx);
        goto after_0;
    // 0x80024274: nop

    after_0:
    // 0x80024278: b           L_800242C0
    // 0x8002427C: nop

        goto L_800242C0;
    // 0x8002427C: nop

L_80024280:
    // 0x80024280: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80024284: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80024288: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002428C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80024290: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80024294: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80024298: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002429C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800242A0: lbu         $t8, 0x425A($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X425A);
    // 0x800242A4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800242A8: bne         $t8, $at, L_800242C0
    if (ctx->r24 != ctx->r1) {
        // 0x800242AC: nop
    
            goto L_800242C0;
    }
    // 0x800242AC: nop

    // 0x800242B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800242B4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800242B8: jal         0x800225D8
    // 0x800242BC: nop

    func_800225D8(rdram, ctx);
        goto after_1;
    // 0x800242BC: nop

    after_1:
L_800242C0:
    // 0x800242C0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800242C4: nop

    // 0x800242C8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800242CC: slti        $at, $t0, 0xE
    ctx->r1 = SIGNED(ctx->r8) < 0XE ? 1 : 0;
    // 0x800242D0: bne         $at, $zero, L_800241DC
    if (ctx->r1 != 0) {
        // 0x800242D4: sw          $t0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r8;
            goto L_800241DC;
    }
    // 0x800242D4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800242D8: b           L_800242E0
    // 0x800242DC: nop

        goto L_800242E0;
    // 0x800242DC: nop

L_800242E0:
    // 0x800242E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800242E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800242E8: jr          $ra
    // 0x800242EC: nop

    return;
    // 0x800242EC: nop

;}
RECOMP_FUNC void _bzero(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B380: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x8003B384: bne         $at, $zero, L_8003B3FC
    if (ctx->r1 != 0) {
        // 0x8003B388: negu        $v1, $a0
        ctx->r3 = SUB32(0, ctx->r4);
            goto L_8003B3FC;
    }
    // 0x8003B388: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x8003B38C: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8003B390: beq         $v1, $zero, L_8003B3A0
    if (ctx->r3 == 0) {
        // 0x8003B394: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_8003B3A0;
    }
    // 0x8003B394: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8003B398: swl         $zero, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, 0);
    // 0x8003B39C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_8003B3A0:
    // 0x8003B3A0: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x8003B3A4: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x8003B3A8: beq         $a3, $zero, L_8003B3DC
    if (ctx->r7 == 0) {
        // 0x8003B3AC: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_8003B3DC;
    }
    // 0x8003B3AC: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x8003B3B0: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_8003B3B4:
    // 0x8003B3B4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x8003B3B8: sw          $zero, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = 0;
    // 0x8003B3BC: sw          $zero, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = 0;
    // 0x8003B3C0: sw          $zero, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = 0;
    // 0x8003B3C4: sw          $zero, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = 0;
    // 0x8003B3C8: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x8003B3CC: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x8003B3D0: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x8003B3D4: bne         $a0, $a3, L_8003B3B4
    if (ctx->r4 != ctx->r7) {
        // 0x8003B3D8: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_8003B3B4;
    }
    // 0x8003B3D8: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_8003B3DC:
    // 0x8003B3DC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8003B3E0: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x8003B3E4: beq         $a3, $zero, L_8003B3FC
    if (ctx->r7 == 0) {
        // 0x8003B3E8: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_8003B3FC;
    }
    // 0x8003B3E8: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x8003B3EC: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_8003B3F0:
    // 0x8003B3F0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8003B3F4: bne         $a0, $a3, L_8003B3F0
    if (ctx->r4 != ctx->r7) {
        // 0x8003B3F8: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_8003B3F0;
    }
    // 0x8003B3F8: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_8003B3FC:
    // 0x8003B3FC: blez        $a1, L_8003B414
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8003B400: nop
    
            goto L_8003B414;
    }
    // 0x8003B400: nop

    // 0x8003B404: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
L_8003B408:
    // 0x8003B408: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003B40C: bne         $a0, $a1, L_8003B408
    if (ctx->r4 != ctx->r5) {
        // 0x8003B410: sb          $zero, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = 0;
            goto L_8003B408;
    }
    // 0x8003B410: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
L_8003B414:
    // 0x8003B414: jr          $ra
    // 0x8003B418: nop

    return;
    // 0x8003B418: nop

;}
RECOMP_FUNC void alSeqGetTicks(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045D88: jr          $ra
    // 0x80045D8C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    return;
    // 0x80045D8C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void alSndpSetVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035400: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80035404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035408: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003540C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80035410: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80035414: sh          $t7, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r15;
    // 0x80035418: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x8003541C: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80035420: sh          $t6, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r14;
    // 0x80035424: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80035428: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003542C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80035430: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x80035434: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80035438: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8003543C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80035440: jal         0x8003E80C
    // 0x80035444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x80035444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80035448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003544C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80035450: jr          $ra
    // 0x80035454: nop

    return;
    // 0x80035454: nop

;}
RECOMP_FUNC void guPerspectiveF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036C40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80036C44: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80036C48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036C4C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80036C50: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80036C54: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80036C58: jal         0x800361F0
    // 0x80036C5C: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80036C5C: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x80036C60: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80036C64: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80036C68: ldc1        $f6, -0x3C10($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3C10);
    // 0x80036C6C: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80036C70: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80036C74: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80036C78: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80036C7C: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    // 0x80036C80: div.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f10.fl);
    // 0x80036C84: jal         0x80036570
    // 0x80036C88: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80036C88: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x80036C8C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80036C90: jal         0x80034970
    // 0x80036C94: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80036C94: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80036C98: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80036C9C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80036CA0: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80036CA4: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80036CA8: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80036CAC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80036CB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80036CB4: add.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x80036CB8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80036CBC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80036CC0: sub.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x80036CC4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80036CC8: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x80036CCC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80036CD0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80036CD4: div.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f12.fl);
    // 0x80036CD8: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x80036CDC: div.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80036CE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80036CE4: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x80036CE8: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80036CEC: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x80036CF0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80036CF4: nop

    // 0x80036CF8: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
    // 0x80036CFC: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80036D00: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80036D04: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x80036D08: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80036D0C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80036D10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80036D14: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80036D18: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80036D1C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80036D20: beq         $v1, $a0, L_80036D64
    if (ctx->r3 == ctx->r4) {
        // 0x80036D24: lwc1        $f14, 0xC($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
            goto L_80036D64;
    }
    // 0x80036D24: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
L_80036D28:
    // 0x80036D28: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80036D2C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80036D30: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80036D34: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80036D38: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80036D3C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80036D40: mul.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80036D44: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80036D48: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x80036D4C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80036D50: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80036D54: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80036D58: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80036D5C: bne         $v1, $a0, L_80036D28
    if (ctx->r3 != ctx->r4) {
        // 0x80036D60: swc1        $f2, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
            goto L_80036D28;
    }
    // 0x80036D60: swc1        $f2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
L_80036D64:
    // 0x80036D64: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80036D68: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80036D6C: swc1        $f10, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f10.u32l;
    // 0x80036D70: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80036D74: nop

    // 0x80036D78: mul.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80036D7C: swc1        $f8, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80036D80: swc1        $f4, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80036D84: swc1        $f2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
    // 0x80036D88: beq         $a1, $zero, L_80036E60
    if (ctx->r5 == 0) {
        // 0x80036D8C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_80036E60;
    }
    // 0x80036D8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80036D90: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80036D94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80036D98: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x80036D9C: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80036DA0: c.le.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d <= ctx->f8.d;
    // 0x80036DA4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80036DA8: bc1fl       L_80036DBC
    if (!c1cs) {
        // 0x80036DAC: mtc1        $at, $f11
        ctx->f_odd[(11 - 1) * 2] = ctx->r1;
            goto L_80036DBC;
    }
    goto skip_0;
    // 0x80036DAC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x80036DB0: b           L_80036E60
    // 0x80036DB4: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
        goto L_80036E60;
    // 0x80036DB4: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x80036DB8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
L_80036DBC:
    // 0x80036DBC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80036DC0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80036DC4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80036DC8: div.d       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80036DCC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80036DD0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80036DD4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80036DD8: nop

    // 0x80036DDC: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x80036DE0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80036DE4: nop

    // 0x80036DE8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80036DEC: beql        $t8, $zero, L_80036E40
    if (ctx->r24 == 0) {
        // 0x80036DF0: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_80036E40;
    }
    goto skip_1;
    // 0x80036DF0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x80036DF4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80036DF8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80036DFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80036E00: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x80036E04: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80036E08: nop

    // 0x80036E0C: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x80036E10: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80036E14: nop

    // 0x80036E18: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80036E1C: bne         $t8, $zero, L_80036E34
    if (ctx->r24 != 0) {
        // 0x80036E20: nop
    
            goto L_80036E34;
    }
    // 0x80036E20: nop

    // 0x80036E24: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80036E28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80036E2C: b           L_80036E4C
    // 0x80036E30: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80036E4C;
    // 0x80036E30: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80036E34:
    // 0x80036E34: b           L_80036E4C
    // 0x80036E38: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80036E4C;
    // 0x80036E38: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80036E3C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_80036E40:
    // 0x80036E40: nop

    // 0x80036E44: bltz        $t8, L_80036E34
    if (SIGNED(ctx->r24) < 0) {
        // 0x80036E48: nop
    
            goto L_80036E34;
    }
    // 0x80036E48: nop

L_80036E4C:
    // 0x80036E4C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80036E50: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80036E54: bgtz        $t9, L_80036E60
    if (SIGNED(ctx->r25) > 0) {
        // 0x80036E58: sh          $t8, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r24;
            goto L_80036E60;
    }
    // 0x80036E58: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80036E5C: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
L_80036E60:
    // 0x80036E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036E64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80036E68: jr          $ra
    // 0x80036E6C: nop

    return;
    // 0x80036E6C: nop

;}
RECOMP_FUNC void func_800042D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800042D8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800042DC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800042E0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800042E4: lw          $t6, 0x2EBC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EBC);
    // 0x800042E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800042EC: beq         $t6, $at, L_800042FC
    if (ctx->r14 == ctx->r1) {
        // 0x800042F0: nop
    
            goto L_800042FC;
    }
    // 0x800042F0: nop

    // 0x800042F4: jr          $ra
    // 0x800042F8: nop

    return;
    // 0x800042F8: nop

L_800042FC:
    // 0x800042FC: bgez        $a0, L_80004308
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80004300: nop
    
            goto L_80004308;
    }
    // 0x80004300: nop

    // 0x80004304: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80004308:
    // 0x80004308: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000430C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80004310: swc1        $f4, 0x2EC8($at)
    MEM_W(0X2EC8, ctx->r1) = ctx->f4.u32l;
    // 0x80004314: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80004318: lh          $t7, 0x2ED2($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X2ED2);
    // 0x8000431C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80004320: sh          $t7, 0x2ECE($at)
    MEM_H(0X2ECE, ctx->r1) = ctx->r15;
    // 0x80004324: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80004328: lh          $t8, 0x2ED2($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X2ED2);
    // 0x8000432C: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    // 0x80004330: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80004334: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80004338: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000433C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80004340: nop

    // 0x80004344: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80004348: swc1        $f18, 0x2EC4($at)
    MEM_W(0X2EC4, ctx->r1) = ctx->f18.u32l;
    // 0x8000434C: jr          $ra
    // 0x80004350: nop

    return;
    // 0x80004350: nop

    // 0x80004354: jr          $ra
    // 0x80004358: nop

    return;
    // 0x80004358: nop

;}
RECOMP_FUNC void func_8001B234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B238: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8001B23C:
    // 0x8001B23C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001B240: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B244: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B248: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001B24C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B250: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001B254: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8001B258: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8001B25C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8001B260: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8001B264: lh          $t0, 0x4298($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4298);
    // 0x8001B268: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001B26C: beq         $t0, $at, L_8001B424
    if (ctx->r8 == ctx->r1) {
        // 0x8001B270: sw          $t0, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r8;
            goto L_8001B424;
    }
    // 0x8001B270: sw          $t0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r8;
    // 0x8001B274: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8001B278: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001B27C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001B280: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8001B284: lbu         $t3, -0x3D61($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3D61);
    // 0x8001B288: nop

    // 0x8001B28C: bne         $t3, $a1, L_8001B424
    if (ctx->r11 != ctx->r5) {
        // 0x8001B290: nop
    
            goto L_8001B424;
    }
    // 0x8001B290: nop

    // 0x8001B294: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8001B298: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001B29C: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x8001B2A0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8001B2A4: lw          $t7, -0x3D68($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D68);
    // 0x8001B2A8: nop

    // 0x8001B2AC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8001B2B0: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8001B2B4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001B2B8: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8001B2BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001B2C0: lbu         $t9, -0x3D63($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3D63);
    // 0x8001B2C4: nop

    // 0x8001B2C8: sb          $t9, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r25;
    // 0x8001B2CC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8001B2D0: nop

    // 0x8001B2D4: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x8001B2D8: nop

    // 0x8001B2DC: beq         $t1, $zero, L_8001B378
    if (ctx->r9 == 0) {
        // 0x8001B2E0: nop
    
            goto L_8001B378;
    }
    // 0x8001B2E0: nop

    // 0x8001B2E4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8001B2E8: lbu         $t4, 0xB($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XB);
    // 0x8001B2EC: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8001B2F0: lw          $t8, 0xC($t2)
    ctx->r24 = MEM_W(ctx->r10, 0XC);
    // 0x8001B2F4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001B2F8: lbu         $t7, 0x0($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X0);
    // 0x8001B2FC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001B300: sll         $t1, $a2, 3
    ctx->r9 = S32(ctx->r6 << 3);
    // 0x8001B304: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8001B308: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8001B30C: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x8001B310: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8001B314: lw          $t3, -0x3560($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3560);
    // 0x8001B318: nop

    // 0x8001B31C: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x8001B320: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8001B324: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001B328: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8001B32C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B330: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x8001B334: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8001B338: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x8001B33C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8001B340: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x8001B344: lbu         $t8, 0x16($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X16);
    // 0x8001B348: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8001B34C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8001B350: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x8001B354: sll         $t1, $t9, 8
    ctx->r9 = S32(ctx->r25 << 8);
    // 0x8001B358: or          $t0, $t1, $at
    ctx->r8 = ctx->r9 | ctx->r1;
    // 0x8001B35C: ori         $t3, $t0, 0x6
    ctx->r11 = ctx->r8 | 0X6;
    // 0x8001B360: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8001B364: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x8001B368: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8001B36C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001B370: addu        $t7, $t5, $at
    ctx->r15 = ADD32(ctx->r13, ctx->r1);
    // 0x8001B374: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
L_8001B378:
    // 0x8001B378: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8001B37C: nop

    // 0x8001B380: lw          $t6, 0x8($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X8);
    // 0x8001B384: nop

    // 0x8001B388: beq         $t6, $zero, L_8001B424
    if (ctx->r14 == 0) {
        // 0x8001B38C: nop
    
            goto L_8001B424;
    }
    // 0x8001B38C: nop

    // 0x8001B390: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8001B394: lbu         $t0, 0xB($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XB);
    // 0x8001B398: lw          $t1, 0x8($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X8);
    // 0x8001B39C: lw          $t7, 0x10($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X10);
    // 0x8001B3A0: addu        $t3, $t1, $t0
    ctx->r11 = ADD32(ctx->r9, ctx->r8);
    // 0x8001B3A4: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8001B3A8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001B3AC: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x8001B3B0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8001B3B4: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8001B3B8: addu        $t2, $t7, $t5
    ctx->r10 = ADD32(ctx->r15, ctx->r13);
    // 0x8001B3BC: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x8001B3C0: lw          $t1, -0x3560($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3560);
    // 0x8001B3C4: nop

    // 0x8001B3C8: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x8001B3CC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8001B3D0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001B3D4: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8001B3D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B3DC: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8001B3E0: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8001B3E4: sw          $t3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r11;
    // 0x8001B3E8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8001B3EC: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x8001B3F0: lbu         $t7, 0x17($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X17);
    // 0x8001B3F4: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8001B3F8: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x8001B3FC: andi        $t2, $t5, 0xFFFF
    ctx->r10 = ctx->r13 & 0XFFFF;
    // 0x8001B400: sll         $t6, $t2, 8
    ctx->r14 = S32(ctx->r10 << 8);
    // 0x8001B404: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8001B408: ori         $t1, $t8, 0x6
    ctx->r9 = ctx->r24 | 0X6;
    // 0x8001B40C: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x8001B410: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x8001B414: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8001B418: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001B41C: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x8001B420: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
L_8001B424:
    // 0x8001B424: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B428: nop

    // 0x8001B42C: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x8001B430: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x8001B434: bne         $at, $zero, L_8001B23C
    if (ctx->r1 != 0) {
        // 0x8001B438: sw          $t5, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r13;
            goto L_8001B23C;
    }
    // 0x8001B438: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8001B43C: b           L_8001B444
    // 0x8001B440: nop

        goto L_8001B444;
    // 0x8001B440: nop

L_8001B444:
    // 0x8001B444: jr          $ra
    // 0x8001B448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001B448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80024CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024CB4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80024CB8: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80024CBC: beq         $at, $zero, L_80024CE4
    if (ctx->r1 == 0) {
        // 0x80024CC0: nop
    
            goto L_80024CE4;
    }
    // 0x80024CC0: nop

    // 0x80024CC4: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80024CC8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80024CCC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80024CD0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80024CD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80024CD8: lbu         $t7, 0x74BF($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X74BF);
    // 0x80024CDC: b           L_80024D04
    // 0x80024CE0: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
        goto L_80024D04;
    // 0x80024CE0: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
L_80024CE4:
    // 0x80024CE4: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x80024CE8: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80024CEC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80024CF0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80024CF4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80024CF8: lbu         $t9, 0x7467($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X7467);
    // 0x80024CFC: nop

    // 0x80024D00: sb          $t9, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r25;
L_80024D04:
    // 0x80024D04: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
    // 0x80024D08: b           L_80024D18
    // 0x80024D0C: nop

        goto L_80024D18;
    // 0x80024D0C: nop

    // 0x80024D10: b           L_80024D18
    // 0x80024D14: nop

        goto L_80024D18;
    // 0x80024D14: nop

L_80024D18:
    // 0x80024D18: jr          $ra
    // 0x80024D1C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80024D1C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void _loadOutputBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046894: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80046898: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004689C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800468A0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800468A4: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x800468A8: lw          $t6, 0x24($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X24);
    // 0x800468AC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800468B0: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x800468B4: beq         $t6, $zero, L_80046A70
    if (ctx->r14 == 0) {
        // 0x800468B8: or          $t2, $a0, $zero
        ctx->r10 = ctx->r4 | 0;
            goto L_80046A70;
    }
    // 0x800468B8: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x800468BC: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x800468C0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x800468C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800468C8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x800468CC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x800468D0: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x800468D4: jal         0x80046420
    // 0x800468D8: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    _doModFunc(rdram, ctx);
        goto after_0;
    // 0x800468D8: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    after_0:
    // 0x800468DC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800468E0: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x800468E4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800468E8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x800468EC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800468F0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800468F4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800468F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800468FC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80046900: addiu       $a2, $zero, 0x280
    ctx->r6 = ADD32(0, 0X280);
    // 0x80046904: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80046908: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8004690C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80046910: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80046914: nop

    // 0x80046918: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8004691C: nop

    // 0x80046920: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80046924: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80046928: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x8004692C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80046930: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80046934: sub.d       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f4.d - ctx->f16.d;
    // 0x80046938: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
    // 0x8004693C: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80046940: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x80046944: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80046948: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8004694C: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80046950: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80046954: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80046958: nop

    // 0x8004695C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80046960: nop

    // 0x80046964: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80046968: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8004696C: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80046970: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x80046974: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x80046978: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x8004697C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80046980: subu        $t4, $t8, $t9
    ctx->r12 = SUB32(ctx->r24, ctx->r25);
    // 0x80046984: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x80046988: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8004698C: addu        $t0, $t7, $t6
    ctx->r8 = ADD32(ctx->r15, ctx->r14);
    // 0x80046990: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x80046994: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80046998: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8004699C: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x800469A0: subu        $a1, $t0, $t3
    ctx->r5 = SUB32(ctx->r8, ctx->r11);
    // 0x800469A4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x800469A8: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x800469AC: addu        $a3, $t1, $t8
    ctx->r7 = ADD32(ctx->r9, ctx->r24);
    // 0x800469B0: jal         0x80046708
    // 0x800469B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    _loadBuffer(rdram, ctx);
        goto after_1;
    // 0x800469B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x800469B8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800469BC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800469C0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800469C4: addiu       $t4, $t3, 0x280
    ctx->r12 = ADD32(ctx->r11, 0X280);
    // 0x800469C8: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x800469CC: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x800469D0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800469D4: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x800469D8: sll         $t4, $s1, 1
    ctx->r12 = S32(ctx->r17 << 1);
    // 0x800469DC: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x800469E0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800469E4: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x800469E8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800469EC: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x800469F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800469F4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800469F8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x800469FC: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
    // 0x80046A00: mul.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80046A04: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x80046A08: lw          $t7, 0x24($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X24);
    // 0x80046A0C: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x80046A10: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x80046A14: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x80046A18: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80046A1C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80046A20: nop

    // 0x80046A24: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x80046A28: or          $t4, $t8, $at
    ctx->r12 = ctx->r24 | ctx->r1;
    // 0x80046A2C: or          $t5, $t4, $t9
    ctx->r13 = ctx->r12 | ctx->r25;
    // 0x80046A30: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x80046A34: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80046A38: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x80046A3C: jal         0x800358D0
    // 0x80046A40: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80046A40: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_2:
    // 0x80046A44: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80046A48: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80046A4C: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80046A50: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x80046A54: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x80046A58: sw          $zero, 0x24($t8)
    MEM_W(0X24, ctx->r24) = 0;
    // 0x80046A5C: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x80046A60: addu        $t9, $t4, $t1
    ctx->r25 = ADD32(ctx->r12, ctx->r9);
    // 0x80046A64: subu        $t5, $t9, $s1
    ctx->r13 = SUB32(ctx->r25, ctx->r17);
    // 0x80046A68: b           L_80046AA0
    // 0x80046A6C: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
        goto L_80046AA0;
    // 0x80046A6C: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
L_80046A70:
    // 0x80046A70: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80046A74: lw          $t7, 0x18($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X18);
    // 0x80046A78: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80046A7C: negu        $t8, $t6
    ctx->r24 = SUB32(0, ctx->r14);
    // 0x80046A80: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x80046A84: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80046A88: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80046A8C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x80046A90: addu        $a1, $t7, $t4
    ctx->r5 = ADD32(ctx->r15, ctx->r12);
    // 0x80046A94: jal         0x80046708
    // 0x80046A98: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    _loadBuffer(rdram, ctx);
        goto after_3;
    // 0x80046A98: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_3:
    // 0x80046A9C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80046AA0:
    // 0x80046AA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80046AA4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80046AA8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80046AAC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80046AB0: jr          $ra
    // 0x80046AB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80046AB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void Math_CalcAngleRotated(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015634: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80015638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001563C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x80015640: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x80015644: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80015648: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8001564C: jal         0x80014F50
    // 0x80015650: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_Atan2f(rdram, ctx);
        goto after_0;
    // 0x80015650: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_0:
    // 0x80015654: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80015658: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001565C: nop

    // 0x80015660: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80015664: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80015668: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8001566C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80015670: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015674: nop

    // 0x80015678: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8001567C: nop

    // 0x80015680: bc1f        L_800156A0
    if (!c1cs) {
        // 0x80015684: nop
    
            goto L_800156A0;
    }
    // 0x80015684: nop

    // 0x80015688: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8001568C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80015690: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015694: nop

    // 0x80015698: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8001569C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
L_800156A0:
    // 0x800156A0: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800156A4: b           L_800156B4
    // 0x800156A8: nop

        goto L_800156B4;
    // 0x800156A8: nop

    // 0x800156AC: b           L_800156B4
    // 0x800156B0: nop

        goto L_800156B4;
    // 0x800156B0: nop

L_800156B4:
    // 0x800156B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800156B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800156BC: jr          $ra
    // 0x800156C0: nop

    return;
    // 0x800156C0: nop

;}
RECOMP_FUNC void func_800259A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800259A0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800259A4: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800259A8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800259AC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800259B0: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x800259B4: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x800259B8: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x800259BC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800259C0: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x800259C4: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_800259C8:
    // 0x800259C8: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x800259CC: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800259D0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800259D4: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x800259D8: addiu       $t1, $t1, 0x7450
    ctx->r9 = ADD32(ctx->r9, 0X7450);
    // 0x800259DC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800259E0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800259E4: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x800259E8: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x800259EC: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x800259F0: sb          $t3, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r11;
    // 0x800259F4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800259F8: nop

    // 0x800259FC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80025A00: slti        $at, $t8, 0x78
    ctx->r1 = SIGNED(ctx->r24) < 0X78 ? 1 : 0;
    // 0x80025A04: bne         $at, $zero, L_800259C8
    if (ctx->r1 != 0) {
        // 0x80025A08: sw          $t8, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r24;
            goto L_800259C8;
    }
    // 0x80025A08: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80025A0C: b           L_80025A14
    // 0x80025A10: nop

        goto L_80025A14;
    // 0x80025A10: nop

L_80025A14:
    // 0x80025A14: jr          $ra
    // 0x80025A18: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80025A18: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800239E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800239E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800239E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800239EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800239F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800239F4: sb          $zero, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = 0;
    // 0x800239F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800239FC: sw          $zero, 0x7648($at)
    MEM_W(0X7648, ctx->r1) = 0;
    // 0x80023A00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80023A04: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80023A08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80023A0C: lh          $t7, 0x104($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X104);
    // 0x80023A10: nop

    // 0x80023A14: beq         $t7, $at, L_80023B4C
    if (ctx->r15 == ctx->r1) {
        // 0x80023A18: nop
    
            goto L_80023B4C;
    }
    // 0x80023A18: nop

    // 0x80023A1C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023A20: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80023A24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80023A28: lbu         $t9, 0x10A($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X10A);
    // 0x80023A2C: nop

    // 0x80023A30: bne         $t9, $at, L_80023A74
    if (ctx->r25 != ctx->r1) {
        // 0x80023A34: nop
    
            goto L_80023A74;
    }
    // 0x80023A34: nop

    // 0x80023A38: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80023A3C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80023A40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80023A44: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80023A48: nop

    // 0x80023A4C: beq         $t1, $at, L_80023A6C
    if (ctx->r9 == ctx->r1) {
        // 0x80023A50: nop
    
            goto L_80023A6C;
    }
    // 0x80023A50: nop

    // 0x80023A54: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80023A58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023A5C: sw          $t2, 0x7648($at)
    MEM_W(0X7648, ctx->r1) = ctx->r10;
    // 0x80023A60: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80023A64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023A68: sb          $t3, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r11;
L_80023A6C:
    // 0x80023A6C: b           L_80023B4C
    // 0x80023A70: nop

        goto L_80023B4C;
    // 0x80023A70: nop

L_80023A74:
    // 0x80023A74: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80023A78: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80023A7C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80023A80: lbu         $t5, 0x10A($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X10A);
    // 0x80023A84: nop

    // 0x80023A88: bne         $t5, $at, L_80023B28
    if (ctx->r13 != ctx->r1) {
        // 0x80023A8C: nop
    
            goto L_80023B28;
    }
    // 0x80023A8C: nop

    // 0x80023A90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80023A94: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80023A98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80023A9C: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80023AA0: nop

    // 0x80023AA4: beq         $t7, $at, L_80023B20
    if (ctx->r15 == ctx->r1) {
        // 0x80023AA8: nop
    
            goto L_80023B20;
    }
    // 0x80023AA8: nop

    // 0x80023AAC: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x80023AB0: lb          $s0, 0x523E($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X523E);
    // 0x80023AB4: nop

    // 0x80023AB8: beq         $s0, $zero, L_80023AE0
    if (ctx->r16 == 0) {
        // 0x80023ABC: nop
    
            goto L_80023AE0;
    }
    // 0x80023ABC: nop

    // 0x80023AC0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80023AC4: beq         $s0, $at, L_80023AF0
    if (ctx->r16 == ctx->r1) {
        // 0x80023AC8: nop
    
            goto L_80023AF0;
    }
    // 0x80023AC8: nop

    // 0x80023ACC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80023AD0: beq         $s0, $at, L_80023B00
    if (ctx->r16 == ctx->r1) {
        // 0x80023AD4: nop
    
            goto L_80023B00;
    }
    // 0x80023AD4: nop

    // 0x80023AD8: b           L_80023B10
    // 0x80023ADC: nop

        goto L_80023B10;
    // 0x80023ADC: nop

L_80023AE0:
    // 0x80023AE0: jal         0x80023404
    // 0x80023AE4: nop

    func_80023404(rdram, ctx);
        goto after_0;
    // 0x80023AE4: nop

    after_0:
    // 0x80023AE8: b           L_80023B20
    // 0x80023AEC: nop

        goto L_80023B20;
    // 0x80023AEC: nop

L_80023AF0:
    // 0x80023AF0: jal         0x80023754
    // 0x80023AF4: nop

    func_80023754(rdram, ctx);
        goto after_1;
    // 0x80023AF4: nop

    after_1:
    // 0x80023AF8: b           L_80023B20
    // 0x80023AFC: nop

        goto L_80023B20;
    // 0x80023AFC: nop

L_80023B00:
    // 0x80023B00: jal         0x80023534
    // 0x80023B04: nop

    func_80023534(rdram, ctx);
        goto after_2;
    // 0x80023B04: nop

    after_2:
    // 0x80023B08: b           L_80023B20
    // 0x80023B0C: nop

        goto L_80023B20;
    // 0x80023B0C: nop

L_80023B10:
    // 0x80023B10: jal         0x80023904
    // 0x80023B14: nop

    func_80023904(rdram, ctx);
        goto after_3;
    // 0x80023B14: nop

    after_3:
    // 0x80023B18: b           L_80023B20
    // 0x80023B1C: nop

        goto L_80023B20;
    // 0x80023B1C: nop

L_80023B20:
    // 0x80023B20: b           L_80023B4C
    // 0x80023B24: nop

        goto L_80023B4C;
    // 0x80023B24: nop

L_80023B28:
    // 0x80023B28: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023B2C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80023B30: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80023B34: lbu         $t9, 0x10A($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X10A);
    // 0x80023B38: nop

    // 0x80023B3C: bne         $t9, $at, L_80023B4C
    if (ctx->r25 != ctx->r1) {
        // 0x80023B40: nop
    
            goto L_80023B4C;
    }
    // 0x80023B40: nop

    // 0x80023B44: jal         0x80022B54
    // 0x80023B48: nop

    func_80022B54(rdram, ctx);
        goto after_4;
    // 0x80023B48: nop

    after_4:
L_80023B4C:
    // 0x80023B4C: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x80023B50: lb          $s0, 0x523E($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X523E);
    // 0x80023B54: nop

    // 0x80023B58: beq         $s0, $zero, L_80023B8C
    if (ctx->r16 == 0) {
        // 0x80023B5C: nop
    
            goto L_80023B8C;
    }
    // 0x80023B5C: nop

    // 0x80023B60: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80023B64: beq         $s0, $at, L_80023B8C
    if (ctx->r16 == ctx->r1) {
        // 0x80023B68: nop
    
            goto L_80023B8C;
    }
    // 0x80023B68: nop

    // 0x80023B6C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80023B70: beq         $s0, $at, L_80023B8C
    if (ctx->r16 == ctx->r1) {
        // 0x80023B74: nop
    
            goto L_80023B8C;
    }
    // 0x80023B74: nop

    // 0x80023B78: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80023B7C: beq         $s0, $at, L_80023B8C
    if (ctx->r16 == ctx->r1) {
        // 0x80023B80: nop
    
            goto L_80023B8C;
    }
    // 0x80023B80: nop

    // 0x80023B84: b           L_80023CB4
    // 0x80023B88: nop

        goto L_80023CB4;
    // 0x80023B88: nop

L_80023B8C:
    // 0x80023B8C: jal         0x80086AD0
    // 0x80023B90: nop

    func_80086AD0(rdram, ctx);
        goto after_5;
    // 0x80023B90: nop

    after_5:
    // 0x80023B94: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80023B98: lbu         $t0, -0x1F80($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1F80);
    // 0x80023B9C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80023BA0: bne         $t0, $at, L_80023BC4
    if (ctx->r8 != ctx->r1) {
        // 0x80023BA4: nop
    
            goto L_80023BC4;
    }
    // 0x80023BA4: nop

    // 0x80023BA8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80023BAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023BB0: sw          $t1, 0x7648($at)
    MEM_W(0X7648, ctx->r1) = ctx->r9;
    // 0x80023BB4: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80023BB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023BBC: b           L_80023CAC
    // 0x80023BC0: sb          $t2, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r10;
        goto L_80023CAC;
    // 0x80023BC0: sb          $t2, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r10;
L_80023BC4:
    // 0x80023BC4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80023BC8: lbu         $t3, -0x1F80($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1F80);
    // 0x80023BCC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80023BD0: beq         $t3, $at, L_80023BE4
    if (ctx->r11 == ctx->r1) {
        // 0x80023BD4: nop
    
            goto L_80023BE4;
    }
    // 0x80023BD4: nop

    // 0x80023BD8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80023BDC: bne         $t3, $at, L_80023C64
    if (ctx->r11 != ctx->r1) {
        // 0x80023BE0: nop
    
            goto L_80023C64;
    }
    // 0x80023BE0: nop

L_80023BE4:
    // 0x80023BE4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80023BE8: lb          $t4, 0x523E($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X523E);
    // 0x80023BEC: nop

    // 0x80023BF0: bne         $t4, $zero, L_80023C14
    if (ctx->r12 != 0) {
        // 0x80023BF4: nop
    
            goto L_80023C14;
    }
    // 0x80023BF4: nop

    // 0x80023BF8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80023BFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023C00: sw          $t5, 0x7648($at)
    MEM_W(0X7648, ctx->r1) = ctx->r13;
    // 0x80023C04: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80023C08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023C0C: b           L_80023C5C
    // 0x80023C10: sb          $t6, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r14;
        goto L_80023C5C;
    // 0x80023C10: sb          $t6, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r14;
L_80023C14:
    // 0x80023C14: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80023C18: lb          $t7, 0x523E($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X523E);
    // 0x80023C1C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80023C20: bne         $t7, $at, L_80023C5C
    if (ctx->r15 != ctx->r1) {
        // 0x80023C24: nop
    
            goto L_80023C5C;
    }
    // 0x80023C24: nop

    // 0x80023C28: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023C2C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80023C30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80023C34: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x80023C38: nop

    // 0x80023C3C: bne         $t9, $at, L_80023C5C
    if (ctx->r25 != ctx->r1) {
        // 0x80023C40: nop
    
            goto L_80023C5C;
    }
    // 0x80023C40: nop

    // 0x80023C44: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80023C48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023C4C: sw          $t0, 0x7648($at)
    MEM_W(0X7648, ctx->r1) = ctx->r8;
    // 0x80023C50: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80023C54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023C58: sb          $t1, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r9;
L_80023C5C:
    // 0x80023C5C: b           L_80023CAC
    // 0x80023C60: nop

        goto L_80023CAC;
    // 0x80023C60: nop

L_80023C64:
    // 0x80023C64: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80023C68: lbu         $t2, -0x1F80($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1F80);
    // 0x80023C6C: nop

    // 0x80023C70: beq         $t2, $zero, L_80023CAC
    if (ctx->r10 == 0) {
        // 0x80023C74: nop
    
            goto L_80023CAC;
    }
    // 0x80023C74: nop

    // 0x80023C78: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80023C7C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80023C80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80023C84: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x80023C88: nop

    // 0x80023C8C: bne         $t4, $at, L_80023CAC
    if (ctx->r12 != ctx->r1) {
        // 0x80023C90: nop
    
            goto L_80023CAC;
    }
    // 0x80023C90: nop

    // 0x80023C94: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80023C98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023C9C: sw          $t5, 0x7648($at)
    MEM_W(0X7648, ctx->r1) = ctx->r13;
    // 0x80023CA0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80023CA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023CA8: sb          $t6, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r14;
L_80023CAC:
    // 0x80023CAC: b           L_80023CB4
    // 0x80023CB0: nop

        goto L_80023CB4;
    // 0x80023CB0: nop

L_80023CB4:
    // 0x80023CB4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80023CB8: lb          $t7, -0x1C04($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C04);
    // 0x80023CBC: nop

    // 0x80023CC0: bne         $t7, $zero, L_80023E60
    if (ctx->r15 != 0) {
        // 0x80023CC4: nop
    
            goto L_80023E60;
    }
    // 0x80023CC4: nop

    // 0x80023CC8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023CCC: lw          $t8, 0x78F4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X78F4);
    // 0x80023CD0: nop

    // 0x80023CD4: bne         $t8, $zero, L_80023E0C
    if (ctx->r24 != 0) {
        // 0x80023CD8: nop
    
            goto L_80023E0C;
    }
    // 0x80023CD8: nop

    // 0x80023CDC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80023CE0: lb          $t9, -0x1C34($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1C34);
    // 0x80023CE4: nop

    // 0x80023CE8: bne         $t9, $zero, L_80023E0C
    if (ctx->r25 != 0) {
        // 0x80023CEC: nop
    
            goto L_80023E0C;
    }
    // 0x80023CEC: nop

    // 0x80023CF0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80023CF4: lw          $t0, 0x7648($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7648);
    // 0x80023CF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80023CFC: bne         $t0, $at, L_80023D68
    if (ctx->r8 != ctx->r1) {
        // 0x80023D00: nop
    
            goto L_80023D68;
    }
    // 0x80023D00: nop

    // 0x80023D04: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80023D08: lb          $t1, 0x5244($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X5244);
    // 0x80023D0C: nop

    // 0x80023D10: beq         $t1, $zero, L_80023D2C
    if (ctx->r9 == 0) {
        // 0x80023D14: nop
    
            goto L_80023D2C;
    }
    // 0x80023D14: nop

    // 0x80023D18: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80023D1C: lb          $t2, 0x5244($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X5244);
    // 0x80023D20: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023D24: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80023D28: sb          $t3, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r11;
L_80023D2C:
    // 0x80023D2C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80023D30: lb          $t4, 0x5244($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X5244);
    // 0x80023D34: nop

    // 0x80023D38: bne         $t4, $zero, L_80023D50
    if (ctx->r12 != 0) {
        // 0x80023D3C: nop
    
            goto L_80023D50;
    }
    // 0x80023D3C: nop

    // 0x80023D40: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80023D44: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80023D48: b           L_80023D60
    // 0x80023D4C: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
        goto L_80023D60;
    // 0x80023D4C: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
L_80023D50:
    // 0x80023D50: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80023D54: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80023D58: addiu       $t6, $zero, 0x3D
    ctx->r14 = ADD32(0, 0X3D);
    // 0x80023D5C: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
L_80023D60:
    // 0x80023D60: b           L_80023D8C
    // 0x80023D64: nop

        goto L_80023D8C;
    // 0x80023D64: nop

L_80023D68:
    // 0x80023D68: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023D6C: lw          $t8, 0x7648($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7648);
    // 0x80023D70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80023D74: bne         $t8, $at, L_80023D8C
    if (ctx->r24 != ctx->r1) {
        // 0x80023D78: nop
    
            goto L_80023D8C;
    }
    // 0x80023D78: nop

    // 0x80023D7C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80023D80: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80023D84: nop

    // 0x80023D88: sh          $zero, 0x108($t9)
    MEM_H(0X108, ctx->r25) = 0;
L_80023D8C:
    // 0x80023D8C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80023D90: lb          $t0, -0x1EF0($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1EF0);
    // 0x80023D94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80023D98: bne         $t0, $at, L_80023E04
    if (ctx->r8 != ctx->r1) {
        // 0x80023D9C: nop
    
            goto L_80023E04;
    }
    // 0x80023D9C: nop

    // 0x80023DA0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80023DA4: lh          $t1, -0x1EEE($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1EEE);
    // 0x80023DA8: nop

    // 0x80023DAC: bne         $t1, $zero, L_80023E04
    if (ctx->r9 != 0) {
        // 0x80023DB0: nop
    
            goto L_80023E04;
    }
    // 0x80023DB0: nop

    // 0x80023DB4: addiu       $t2, $zero, 0xB4
    ctx->r10 = ADD32(0, 0XB4);
    // 0x80023DB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023DBC: sh          $t2, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = ctx->r10;
    // 0x80023DC0: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80023DC4: lb          $t3, 0x5244($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X5244);
    // 0x80023DC8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023DCC: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80023DD0: sb          $t4, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r12;
    // 0x80023DD4: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80023DD8: lb          $t5, 0x5244($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X5244);
    // 0x80023DDC: nop

    // 0x80023DE0: bne         $t5, $zero, L_80023E04
    if (ctx->r13 != 0) {
        // 0x80023DE4: nop
    
            goto L_80023E04;
    }
    // 0x80023DE4: nop

    // 0x80023DE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80023DEC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80023DF0: nop

    // 0x80023DF4: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x80023DF8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80023DFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023E00: sb          $t7, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r15;
L_80023E04:
    // 0x80023E04: b           L_80023E60
    // 0x80023E08: nop

        goto L_80023E60;
    // 0x80023E08: nop

L_80023E0C:
    // 0x80023E0C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023E10: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80023E14: nop

    // 0x80023E18: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x80023E1C: nop

    // 0x80023E20: beq         $t9, $zero, L_80023E60
    if (ctx->r25 == 0) {
        // 0x80023E24: nop
    
            goto L_80023E60;
    }
    // 0x80023E24: nop

    // 0x80023E28: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80023E2C: lbu         $t0, -0x1F80($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1F80);
    // 0x80023E30: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80023E34: beq         $t0, $at, L_80023E54
    if (ctx->r8 == ctx->r1) {
        // 0x80023E38: nop
    
            goto L_80023E54;
    }
    // 0x80023E38: nop

    // 0x80023E3C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80023E40: beq         $t0, $at, L_80023E54
    if (ctx->r8 == ctx->r1) {
        // 0x80023E44: nop
    
            goto L_80023E54;
    }
    // 0x80023E44: nop

    // 0x80023E48: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80023E4C: bne         $t0, $at, L_80023E60
    if (ctx->r8 != ctx->r1) {
        // 0x80023E50: nop
    
            goto L_80023E60;
    }
    // 0x80023E50: nop

L_80023E54:
    // 0x80023E54: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80023E58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023E5C: sb          $t1, -0x1F30($at)
    MEM_B(-0X1F30, ctx->r1) = ctx->r9;
L_80023E60:
    // 0x80023E60: b           L_80023E68
    // 0x80023E64: nop

        goto L_80023E68;
    // 0x80023E64: nop

L_80023E68:
    // 0x80023E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80023E6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80023E70: jr          $ra
    // 0x80023E74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80023E74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001994C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001994C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80019950: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80019954: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80019958: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8001995C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80019960: lb          $t6, -0x1ECC($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1ECC);
    // 0x80019964: nop

    // 0x80019968: bne         $t6, $zero, L_80019B60
    if (ctx->r14 != 0) {
        // 0x8001996C: nop
    
            goto L_80019B60;
    }
    // 0x8001996C: nop

    // 0x80019970: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019974: lwc1        $f4, -0x1EA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x80019978: nop

    // 0x8001997C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80019980: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019984: lwc1        $f6, -0x1EA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80019988: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8001998C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80019990: nop

    // 0x80019994: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80019998: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8001999C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800199A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800199A4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800199A8: nop

    // 0x800199AC: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x800199B0: nop

    // 0x800199B4: bc1t        L_800199D8
    if (c1cs) {
        // 0x800199B8: nop
    
            goto L_800199D8;
    }
    // 0x800199B8: nop

    // 0x800199BC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800199C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800199C4: nop

    // 0x800199C8: c.eq.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl == ctx->f4.fl;
    // 0x800199CC: nop

    // 0x800199D0: bc1f        L_800199F0
    if (!c1cs) {
        // 0x800199D4: nop
    
            goto L_800199F0;
    }
    // 0x800199D4: nop

L_800199D8:
    // 0x800199D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800199DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800199E0: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800199E4: nop

    // 0x800199E8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800199EC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
L_800199F0:
    // 0x800199F0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800199F4: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800199F8: lwc1        $f5, -0x43C8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X43C8);
    // 0x800199FC: lwc1        $f4, -0x43C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X43C4);
    // 0x80019A00: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x80019A04: mul.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x80019A08: jal         0x80036570
    // 0x80019A0C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_0;
    // 0x80019A0C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_0:
    // 0x80019A10: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80019A14: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80019A18: lwc1        $f19, -0x43C0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X43C0);
    // 0x80019A1C: lwc1        $f18, -0x43BC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X43BC);
    // 0x80019A20: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80019A24: mul.d       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80019A28: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80019A2C: jal         0x80036570
    // 0x80019A30: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80019A30: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_1:
    // 0x80019A34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019A38: lwc1        $f4, -0x1E90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x80019A3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019A40: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80019A44: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80019A48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019A4C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80019A50: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80019A54: swc1        $f18, -0x1EB4($at)
    MEM_W(-0X1EB4, ctx->r1) = ctx->f18.u32l;
    // 0x80019A58: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80019A5C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80019A60: lwc1        $f7, -0x43B8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X43B8);
    // 0x80019A64: lwc1        $f6, -0x43B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X43B4);
    // 0x80019A68: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80019A6C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80019A70: jal         0x80034970
    // 0x80019A74: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80019A74: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_2:
    // 0x80019A78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019A7C: lwc1        $f10, -0x1E90($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x80019A80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019A84: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80019A88: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80019A8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019A90: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80019A94: swc1        $f4, -0x1EB0($at)
    MEM_W(-0X1EB0, ctx->r1) = ctx->f4.u32l;
    // 0x80019A98: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80019A9C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80019AA0: lwc1        $f11, -0x43B0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X43B0);
    // 0x80019AA4: lwc1        $f10, -0x43AC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X43AC);
    // 0x80019AA8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80019AAC: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80019AB0: jal         0x80034970
    // 0x80019AB4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x80019AB4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x80019AB8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80019ABC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80019AC0: lwc1        $f7, -0x43A8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X43A8);
    // 0x80019AC4: lwc1        $f6, -0x43A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X43A4);
    // 0x80019AC8: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80019ACC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80019AD0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80019AD4: jal         0x80036570
    // 0x80019AD8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x80019AD8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_4:
    // 0x80019ADC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019AE0: lwc1        $f10, -0x1E90($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x80019AE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019AE8: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80019AEC: lwc1        $f4, -0x1EB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80019AF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019AF4: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80019AF8: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80019AFC: swc1        $f6, -0x1EAC($at)
    MEM_W(-0X1EAC, ctx->r1) = ctx->f6.u32l;
    // 0x80019B00: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80019B04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80019B08: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80019B0C: nop

    // 0x80019B10: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80019B14: nop

    // 0x80019B18: bc1f        L_80019B50
    if (!c1cs) {
        // 0x80019B1C: nop
    
            goto L_80019B50;
    }
    // 0x80019B1C: nop

    // 0x80019B20: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80019B24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80019B28: nop

    // 0x80019B2C: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x80019B30: nop

    // 0x80019B34: bc1f        L_80019B50
    if (!c1cs) {
        // 0x80019B38: nop
    
            goto L_80019B50;
    }
    // 0x80019B38: nop

    // 0x80019B3C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80019B40: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80019B44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019B48: b           L_80019B60
    // 0x80019B4C: swc1        $f16, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f16.u32l;
        goto L_80019B60;
    // 0x80019B4C: swc1        $f16, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f16.u32l;
L_80019B50:
    // 0x80019B50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80019B54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80019B58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019B5C: swc1        $f4, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f4.u32l;
L_80019B60:
    // 0x80019B60: b           L_80019B68
    // 0x80019B64: nop

        goto L_80019B68;
    // 0x80019B64: nop

L_80019B68:
    // 0x80019B68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80019B6C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80019B70: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80019B74: jr          $ra
    // 0x80019B78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80019B78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000CFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CFA0: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x8000CFA4: lb          $v0, 0x2D7C($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X2D7C);
    // 0x8000CFA8: jr          $ra
    // 0x8000CFAC: nop

    return;
    // 0x8000CFAC: nop

    // 0x8000CFB0: jr          $ra
    // 0x8000CFB4: nop

    return;
    // 0x8000CFB4: nop

    // 0x8000CFB8: jr          $ra
    // 0x8000CFBC: nop

    return;
    // 0x8000CFBC: nop

;}
RECOMP_FUNC void func_80029BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029BD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029BD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029BD8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80029BDC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80029BE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80029BE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80029BE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029BEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80029BF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029BF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80029BF8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80029BFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80029C00: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80029C04: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80029C08: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80029C0C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80029C10: lwc1        $f12, 0x12C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X12C);
    // 0x80029C14: jal         0x80015538
    // 0x80029C18: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80029C18: nop

    after_0:
    // 0x80029C1C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80029C20: nop

    // 0x80029C24: swc1        $f0, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f0.u32l;
    // 0x80029C28: b           L_80029C30
    // 0x80029C2C: nop

        goto L_80029C30;
    // 0x80029C2C: nop

L_80029C30:
    // 0x80029C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80029C38: jr          $ra
    // 0x80029C3C: nop

    return;
    // 0x80029C3C: nop

;}
RECOMP_FUNC void func_8001A258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A258: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A25C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A260: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8001A264:
    // 0x8001A264: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A268: jal         0x80019D74
    // 0x8001A26C: nop

    Init_Obj(rdram, ctx);
        goto after_0;
    // 0x8001A26C: nop

    after_0:
    // 0x8001A270: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A274: nop

    // 0x8001A278: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001A27C: slti        $at, $t7, 0xCF
    ctx->r1 = SIGNED(ctx->r15) < 0XCF ? 1 : 0;
    // 0x8001A280: bne         $at, $zero, L_8001A264
    if (ctx->r1 != 0) {
        // 0x8001A284: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_8001A264;
    }
    // 0x8001A284: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8001A288: b           L_8001A290
    // 0x8001A28C: nop

        goto L_8001A290;
    // 0x8001A28C: nop

L_8001A290:
    // 0x8001A290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A294: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A298: jr          $ra
    // 0x8001A29C: nop

    return;
    // 0x8001A29C: nop

;}
RECOMP_FUNC void func_80025568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025568: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8002556C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80025570: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80025574: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80025578: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8002557C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80025580: bgez        $a1, L_80025590
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80025584: sra         $t8, $a1, 3
        ctx->r24 = S32(SIGNED(ctx->r5) >> 3);
            goto L_80025590;
    }
    // 0x80025584: sra         $t8, $a1, 3
    ctx->r24 = S32(SIGNED(ctx->r5) >> 3);
    // 0x80025588: addiu       $at, $a1, 0x7
    ctx->r1 = ADD32(ctx->r5, 0X7);
    // 0x8002558C: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_80025590:
    // 0x80025590: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80025594: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80025598: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8002559C: lbu         $t0, 0x7495($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7495);
    // 0x800255A0: nop

    // 0x800255A4: sb          $t0, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r8;
    // 0x800255A8: lbu         $t1, 0x3($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3);
    // 0x800255AC: bgez        $a1, L_800255C0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800255B0: andi        $t2, $a1, 0x7
        ctx->r10 = ctx->r5 & 0X7;
            goto L_800255C0;
    }
    // 0x800255B0: andi        $t2, $a1, 0x7
    ctx->r10 = ctx->r5 & 0X7;
    // 0x800255B4: beq         $t2, $zero, L_800255C0
    if (ctx->r10 == 0) {
        // 0x800255B8: nop
    
            goto L_800255C0;
    }
    // 0x800255B8: nop

    // 0x800255BC: addiu       $t2, $t2, -0x8
    ctx->r10 = ADD32(ctx->r10, -0X8);
L_800255C0:
    // 0x800255C0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800255C4: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x800255C8: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x800255CC: sb          $t5, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r13;
    // 0x800255D0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800255D4: lbu         $t6, 0x3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3);
    // 0x800255D8: bgez        $a1, L_800255E8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800255DC: sra         $t8, $a1, 3
        ctx->r24 = S32(SIGNED(ctx->r5) >> 3);
            goto L_800255E8;
    }
    // 0x800255DC: sra         $t8, $a1, 3
    ctx->r24 = S32(SIGNED(ctx->r5) >> 3);
    // 0x800255E0: addiu       $at, $a1, 0x7
    ctx->r1 = ADD32(ctx->r5, 0X7);
    // 0x800255E4: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_800255E8:
    // 0x800255E8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800255EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800255F0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800255F4: sb          $t6, 0x7495($at)
    MEM_B(0X7495, ctx->r1) = ctx->r14;
    // 0x800255F8: b           L_80025600
    // 0x800255FC: nop

        goto L_80025600;
    // 0x800255FC: nop

L_80025600:
    // 0x80025600: jr          $ra
    // 0x80025604: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80025604: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8002A560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A560: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A568: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002A56C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002A570: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002A574: jal         0x8002A46C
    // 0x8002A578: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x8002A578: nop

    after_0:
    // 0x8002A57C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8002A580: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8002A584: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002A588: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002A58C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A590: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002A594: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A598: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002A59C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002A5A0: lwc1        $f14, 0x418C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8002A5A4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002A5A8: jal         0x80015538
    // 0x8002A5AC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8002A5AC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x8002A5B0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8002A5B4: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8002A5B8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002A5BC: nop

    // 0x8002A5C0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8002A5C4: nop

    // 0x8002A5C8: bc1t        L_8002A5F0
    if (c1cs) {
        // 0x8002A5CC: nop
    
            goto L_8002A5F0;
    }
    // 0x8002A5CC: nop

    // 0x8002A5D0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8002A5D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002A5D8: nop

    // 0x8002A5DC: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8002A5E0: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002A5E4: nop

    // 0x8002A5E8: bc1f        L_8002A5F8
    if (!c1cs) {
        // 0x8002A5EC: nop
    
            goto L_8002A5F8;
    }
    // 0x8002A5EC: nop

L_8002A5F0:
    // 0x8002A5F0: b           L_8002A630
    // 0x8002A5F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A630;
    // 0x8002A5F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A5F8:
    // 0x8002A5F8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8002A5FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002A600: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8002A604: nop

    // 0x8002A608: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8002A60C: nop

    // 0x8002A610: bc1f        L_8002A620
    if (!c1cs) {
        // 0x8002A614: nop
    
            goto L_8002A620;
    }
    // 0x8002A614: nop

    // 0x8002A618: b           L_8002A630
    // 0x8002A61C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8002A630;
    // 0x8002A61C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002A620:
    // 0x8002A620: b           L_8002A630
    // 0x8002A624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002A630;
    // 0x8002A624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A628: b           L_8002A630
    // 0x8002A62C: nop

        goto L_8002A630;
    // 0x8002A62C: nop

L_8002A630:
    // 0x8002A630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002A638: jr          $ra
    // 0x8002A63C: nop

    return;
    // 0x8002A63C: nop

;}
RECOMP_FUNC void _collectPVoices(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035AA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80035AAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80035AB0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80035AB4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80035AB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80035ABC: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x80035AC0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80035AC4: addiu       $s2, $a0, 0x4
    ctx->r18 = ADD32(ctx->r4, 0X4);
    // 0x80035AC8: beql        $s0, $zero, L_80035AF4
    if (ctx->r16 == 0) {
        // 0x80035ACC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80035AF4;
    }
    goto skip_0;
    // 0x80035ACC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_80035AD0:
    // 0x80035AD0: jal         0x800357B0
    // 0x80035AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80035AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80035AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035ADC: jal         0x800357E0
    // 0x80035AE0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_1;
    // 0x80035AE0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x80035AE4: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x80035AE8: bne         $s0, $zero, L_80035AD0
    if (ctx->r16 != 0) {
        // 0x80035AEC: nop
    
            goto L_80035AD0;
    }
    // 0x80035AEC: nop

    // 0x80035AF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80035AF4:
    // 0x80035AF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80035AF8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80035AFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80035B00: jr          $ra
    // 0x80035B04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80035B04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000CB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CB34: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8000CB38: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8000CB3C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8000CB40: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000CB44: sb          $a0, 0x2D7A($at)
    MEM_B(0X2D7A, ctx->r1) = ctx->r4;
    // 0x8000CB48: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000CB4C: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x8000CB50: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x8000CB54: blez        $t6, L_8000CC20
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8000CB58: nop
    
            goto L_8000CC20;
    }
    // 0x8000CB58: nop

L_8000CB5C:
    // 0x8000CB5C: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8000CB60: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000CB64: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000CB68: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000CB6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000CB70: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000CB74: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000CB78: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000CB7C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8000CB80: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8000CB84: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8000CB88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000CB8C: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8000CB90: nop

    // 0x8000CB94: beq         $t2, $at, L_8000CBA4
    if (ctx->r10 == ctx->r1) {
        // 0x8000CB98: nop
    
            goto L_8000CBA4;
    }
    // 0x8000CB98: nop

    // 0x8000CB9C: b           L_8000CC04
    // 0x8000CBA0: nop

        goto L_8000CC04;
    // 0x8000CBA0: nop

L_8000CBA4:
    // 0x8000CBA4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8000CBA8: nop

    // 0x8000CBAC: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x8000CBB0: nop

    // 0x8000CBB4: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x8000CBB8: bne         $t5, $zero, L_8000CBF0
    if (ctx->r13 != 0) {
        // 0x8000CBBC: nop
    
            goto L_8000CBF0;
    }
    // 0x8000CBBC: nop

    // 0x8000CBC0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000CBC4: lb          $t7, 0x2D7A($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X2D7A);
    // 0x8000CBC8: lb          $t6, 0x22($t3)
    ctx->r14 = MEM_B(ctx->r11, 0X22);
    // 0x8000CBCC: nop

    // 0x8000CBD0: beq         $t6, $t7, L_8000CBF0
    if (ctx->r14 == ctx->r15) {
        // 0x8000CBD4: nop
    
            goto L_8000CBF0;
    }
    // 0x8000CBD4: nop

    // 0x8000CBD8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8000CBDC: nop

    // 0x8000CBE0: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8000CBE4: nop

    // 0x8000CBE8: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x8000CBEC: sw          $t0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r8;
L_8000CBF0:
    // 0x8000CBF0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000CBF4: lb          $t1, 0x2D7A($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X2D7A);
    // 0x8000CBF8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8000CBFC: nop

    // 0x8000CC00: sb          $t1, 0x22($t2)
    MEM_B(0X22, ctx->r10) = ctx->r9;
L_8000CC04:
    // 0x8000CC04: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x8000CC08: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000CC0C: lw          $t3, -0x5CF4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X5CF4);
    // 0x8000CC10: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8000CC14: slt         $at, $t5, $t3
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8000CC18: bne         $at, $zero, L_8000CB5C
    if (ctx->r1 != 0) {
        // 0x8000CC1C: sw          $t5, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r13;
            goto L_8000CB5C;
    }
    // 0x8000CC1C: sw          $t5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r13;
L_8000CC20:
    // 0x8000CC20: b           L_8000CC28
    // 0x8000CC24: nop

        goto L_8000CC28;
    // 0x8000CC24: nop

L_8000CC28:
    // 0x8000CC28: jr          $ra
    // 0x8000CC2C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8000CC2C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800179B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800179B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800179B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800179B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800179BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800179C0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800179C4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800179C8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800179CC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800179D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800179D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800179D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800179DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800179E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800179E4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800179E8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800179EC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800179F0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800179F4: lh          $t1, 0x428C($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X428C);
    // 0x800179F8: nop

    // 0x800179FC: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    // 0x80017A00: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80017A04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017A08: bne         $t2, $at, L_80017A18
    if (ctx->r10 != ctx->r1) {
        // 0x80017A0C: nop
    
            goto L_80017A18;
    }
    // 0x80017A0C: nop

    // 0x80017A10: b           L_80017AF4
    // 0x80017A14: nop

        goto L_80017AF4;
    // 0x80017A14: nop

L_80017A18:
    // 0x80017A18: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80017A1C: jal         0x8000B4EC
    // 0x80017A20: nop

    func_8000B4EC(rdram, ctx);
        goto after_0;
    // 0x80017A20: nop

    after_0:
    // 0x80017A24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80017A28: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80017A2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80017A30: beq         $t3, $at, L_80017A40
    if (ctx->r11 == ctx->r1) {
        // 0x80017A34: nop
    
            goto L_80017A40;
    }
    // 0x80017A34: nop

    // 0x80017A38: bne         $t3, $zero, L_80017AEC
    if (ctx->r11 != 0) {
        // 0x80017A3C: nop
    
            goto L_80017AEC;
    }
    // 0x80017A3C: nop

L_80017A40:
    // 0x80017A40: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80017A44: nop

    // 0x80017A48: bne         $t4, $zero, L_80017AB8
    if (ctx->r12 != 0) {
        // 0x80017A4C: nop
    
            goto L_80017AB8;
    }
    // 0x80017A4C: nop

    // 0x80017A50: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80017A54: jal         0x8000AC1C
    // 0x80017A58: nop

    func_8000AC1C(rdram, ctx);
        goto after_1;
    // 0x80017A58: nop

    after_1:
    // 0x80017A5C: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80017A60: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x80017A64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017A68: beq         $t5, $at, L_80017A80
    if (ctx->r13 == ctx->r1) {
        // 0x80017A6C: nop
    
            goto L_80017A80;
    }
    // 0x80017A6C: nop

    // 0x80017A70: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80017A74: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x80017A78: jal         0x8000C6F8
    // 0x80017A7C: nop

    func_8000C6F8(rdram, ctx);
        goto after_2;
    // 0x80017A7C: nop

    after_2:
L_80017A80:
    // 0x80017A80: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80017A84: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80017A88: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80017A8C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80017A90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017A94: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80017A98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80017A9C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80017AA0: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80017AA4: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80017AA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80017AAC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80017AB0: b           L_80017AEC
    // 0x80017AB4: sh          $t6, 0x428C($at)
    MEM_H(0X428C, ctx->r1) = ctx->r14;
        goto L_80017AEC;
    // 0x80017AB4: sh          $t6, 0x428C($at)
    MEM_H(0X428C, ctx->r1) = ctx->r14;
L_80017AB8:
    // 0x80017AB8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80017ABC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80017AC0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80017AC4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80017AC8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80017ACC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80017AD0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80017AD4: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x80017AD8: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x80017ADC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80017AE0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80017AE4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80017AE8: sh          $t2, 0x428C($at)
    MEM_H(0X428C, ctx->r1) = ctx->r10;
L_80017AEC:
    // 0x80017AEC: b           L_80017AF4
    // 0x80017AF0: nop

        goto L_80017AF4;
    // 0x80017AF0: nop

L_80017AF4:
    // 0x80017AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017AF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80017AFC: jr          $ra
    // 0x80017B00: nop

    return;
    // 0x80017B00: nop

;}
RECOMP_FUNC void func_8000EEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000EEE8: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x8000EEEC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000EEF0: sw          $a0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r4;
    // 0x8000EEF4: sw          $a1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r5;
    // 0x8000EEF8: sw          $a2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r6;
    // 0x8000EEFC: sw          $a3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r7;
    // 0x8000EF00: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8000EF04: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x8000EF08: lw          $t6, 0xF4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF4);
    // 0x8000EF0C: nop

    // 0x8000EF10: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8000EF14: sw          $t7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r15;
    // 0x8000EF18: lw          $t8, 0xF4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF4);
    // 0x8000EF1C: nop

    // 0x8000EF20: addiu       $t9, $t8, 0xC
    ctx->r25 = ADD32(ctx->r24, 0XC);
    // 0x8000EF24: sw          $t9, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r25;
    // 0x8000EF28: lw          $t0, 0xF0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF0);
    // 0x8000EF2C: nop

    // 0x8000EF30: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8000EF34: nop

    // 0x8000EF38: sw          $t1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r9;
    // 0x8000EF3C: jal         0x800361F0
    // 0x8000EF40: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x8000EF40: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    after_0:
    // 0x8000EF44: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x8000EF48: nop

    // 0x8000EF4C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8000EF50: sw          $t3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r11;
    // 0x8000EF54: sw          $t2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r10;
    // 0x8000EF58: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x8000EF5C: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x8000EF60: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x8000EF64: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x8000EF68: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8000EF6C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8000EF70: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8000EF74: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8000EF78: ori         $t0, $t9, 0x6
    ctx->r8 = ctx->r25 | 0X6;
    // 0x8000EF7C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8000EF80: lw          $t2, 0xF4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF4);
    // 0x8000EF84: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x8000EF88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000EF8C: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x8000EF90: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8000EF94: lw          $t5, 0xE8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE8);
    // 0x8000EF98: nop

    // 0x8000EF9C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8000EFA0: sw          $t6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r14;
    // 0x8000EFA4: sw          $t5, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r13;
    // 0x8000EFA8: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x8000EFAC: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x8000EFB0: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x8000EFB4: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x8000EFB8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8000EFBC: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x8000EFC0: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x8000EFC4: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x8000EFC8: ori         $t3, $t2, 0x6
    ctx->r11 = ctx->r10 | 0X6;
    // 0x8000EFCC: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8000EFD0: lw          $t5, 0xF8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF8);
    // 0x8000EFD4: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x8000EFD8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000EFDC: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x8000EFE0: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8000EFE4: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x8000EFE8: nop

    // 0x8000EFEC: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8000EFF0: sw          $t9, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r25;
    // 0x8000EFF4: sw          $t8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r24;
    // 0x8000EFF8: lw          $t0, 0xE4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE4);
    // 0x8000EFFC: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x8000F000: lbu         $t1, 0x2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2);
    // 0x8000F004: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x8000F008: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000F00C: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x8000F010: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x8000F014: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8000F018: ori         $t6, $t5, 0x6
    ctx->r14 = ctx->r13 | 0X6;
    // 0x8000F01C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8000F020: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x8000F024: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x8000F028: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000F02C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8000F030: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8000F034: lw          $t1, 0xE8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F038: nop

    // 0x8000F03C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8000F040: sw          $t2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r10;
    // 0x8000F044: sw          $t1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r9;
    // 0x8000F048: lw          $t3, 0xE4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE4);
    // 0x8000F04C: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x8000F050: lbu         $t4, 0x3($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X3);
    // 0x8000F054: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x8000F058: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8000F05C: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8000F060: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8000F064: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8000F068: ori         $t9, $t8, 0x6
    ctx->r25 = ctx->r24 | 0X6;
    // 0x8000F06C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8000F070: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x8000F074: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x8000F078: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000F07C: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8000F080: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8000F084: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F088: nop

    // 0x8000F08C: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8000F090: sw          $t5, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r13;
    // 0x8000F094: sw          $t4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r12;
    // 0x8000F098: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x8000F09C: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8000F0A0: ori         $t6, $t6, 0x1701
    ctx->r14 = ctx->r14 | 0X1701;
    // 0x8000F0A4: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8000F0A8: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8000F0AC: lui         $t8, 0x80
    ctx->r24 = S32(0X80 << 16);
    // 0x8000F0B0: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8000F0B4: lw          $t1, 0x104($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X104);
    // 0x8000F0B8: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x8000F0BC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000F0C0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8000F0C4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000F0C8: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8000F0CC: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8000F0D0: nop

    // 0x8000F0D4: beq         $t4, $zero, L_8000F100
    if (ctx->r12 == 0) {
        // 0x8000F0D8: nop
    
            goto L_8000F100;
    }
    // 0x8000F0D8: nop

    // 0x8000F0DC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8000F0E0: beq         $t4, $at, L_8000F100
    if (ctx->r12 == ctx->r1) {
        // 0x8000F0E4: nop
    
            goto L_8000F100;
    }
    // 0x8000F0E4: nop

    // 0x8000F0E8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8000F0EC: beq         $t4, $at, L_8000F100
    if (ctx->r12 == ctx->r1) {
        // 0x8000F0F0: nop
    
            goto L_8000F100;
    }
    // 0x8000F0F0: nop

    // 0x8000F0F4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8000F0F8: bne         $t4, $at, L_8000F7DC
    if (ctx->r12 != ctx->r1) {
        // 0x8000F0FC: nop
    
            goto L_8000F7DC;
    }
    // 0x8000F0FC: nop

L_8000F100:
    // 0x8000F100: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x8000F104: lw          $t5, 0xEC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XEC);
    // 0x8000F108: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000F10C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000F110: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000F114: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8000F118: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x8000F11C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8000F120: beq         $s0, $at, L_8000F148
    if (ctx->r16 == ctx->r1) {
        // 0x8000F124: nop
    
            goto L_8000F148;
    }
    // 0x8000F124: nop

    // 0x8000F128: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8000F12C: beq         $s0, $at, L_8000F1F4
    if (ctx->r16 == ctx->r1) {
        // 0x8000F130: nop
    
            goto L_8000F1F4;
    }
    // 0x8000F130: nop

    // 0x8000F134: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8000F138: beq         $s0, $at, L_8000F52C
    if (ctx->r16 == ctx->r1) {
        // 0x8000F13C: nop
    
            goto L_8000F52C;
    }
    // 0x8000F13C: nop

    // 0x8000F140: b           L_8000F56C
    // 0x8000F144: nop

        goto L_8000F56C;
    // 0x8000F144: nop

L_8000F148:
    // 0x8000F148: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000F14C: jal         0x800361F0
    // 0x8000F150: addiu       $a0, $a0, 0x57E0
    ctx->r4 = ADD32(ctx->r4, 0X57E0);
    guMtxIdentF(rdram, ctx);
        goto after_1;
    // 0x8000F150: addiu       $a0, $a0, 0x57E0
    ctx->r4 = ADD32(ctx->r4, 0X57E0);
    after_1:
    // 0x8000F154: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000F158: lw          $t9, 0x5820($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5820);
    // 0x8000F15C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000F160: addiu       $t0, $t0, 0x5828
    ctx->r8 = ADD32(ctx->r8, 0X5828);
    // 0x8000F164: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000F168: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
    // 0x8000F16C: addu        $a1, $t1, $t0
    ctx->r5 = ADD32(ctx->r9, ctx->r8);
    // 0x8000F170: jal         0x8000E680
    // 0x8000F174: addiu       $a0, $a0, 0x57E0
    ctx->r4 = ADD32(ctx->r4, 0X57E0);
    Math_Mat3f_Inverse(rdram, ctx);
        goto after_2;
    // 0x8000F174: addiu       $a0, $a0, 0x57E0
    ctx->r4 = ADD32(ctx->r4, 0X57E0);
    after_2:
    // 0x8000F178: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8000F17C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8000F180: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8000F184: lw          $a3, -0x1C3C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1C3C);
    // 0x8000F188: lw          $a2, -0x1C44($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1C44);
    // 0x8000F18C: lw          $a1, -0x1C4C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1C4C);
    // 0x8000F190: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000F194: jal         0x80013B70
    // 0x8000F198: addiu       $a0, $a0, 0x57E0
    ctx->r4 = ADD32(ctx->r4, 0X57E0);
    Math_Mat3f_Scale(rdram, ctx);
        goto after_3;
    // 0x8000F198: addiu       $a0, $a0, 0x57E0
    ctx->r4 = ADD32(ctx->r4, 0X57E0);
    after_3:
    // 0x8000F19C: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000F1A0: lw          $t2, 0x5820($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5820);
    // 0x8000F1A4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000F1A8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8000F1AC: sw          $t3, 0x5820($at)
    MEM_W(0X5820, ctx->r1) = ctx->r11;
    // 0x8000F1B0: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000F1B4: lw          $t4, 0x5820($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5820);
    // 0x8000F1B8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000F1BC: sll         $t6, $t4, 6
    ctx->r14 = S32(ctx->r12 << 6);
    // 0x8000F1C0: addiu       $t5, $t6, -0x40
    ctx->r13 = ADD32(ctx->r14, -0X40);
    // 0x8000F1C4: addiu       $t7, $t7, 0x5828
    ctx->r15 = ADD32(ctx->r15, 0X5828);
    // 0x8000F1C8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000F1CC: addiu       $a0, $a0, 0x57E0
    ctx->r4 = ADD32(ctx->r4, 0X57E0);
    // 0x8000F1D0: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    // 0x8000F1D4: jal         0x80036400
    // 0x8000F1D8: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    guMtxCatF(rdram, ctx);
        goto after_4;
    // 0x8000F1D8: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    after_4:
    // 0x8000F1DC: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x8000F1E0: nop

    // 0x8000F1E4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8000F1E8: sw          $t9, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r25;
    // 0x8000F1EC: b           L_8000F634
    // 0x8000F1F0: nop

        goto L_8000F634;
    // 0x8000F1F0: nop

L_8000F1F4:
    // 0x8000F1F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000F1F8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000F1FC: sw          $t1, -0x5C70($at)
    MEM_W(-0X5C70, ctx->r1) = ctx->r9;
    // 0x8000F200: lw          $t0, 0xE8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F204: nop

    // 0x8000F208: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x8000F20C: sw          $t2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r10;
    // 0x8000F210: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    // 0x8000F214: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x8000F218: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x8000F21C: ori         $t3, $t3, 0xE02
    ctx->r11 = ctx->r11 | 0XE02;
    // 0x8000F220: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8000F224: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8000F228: nop

    // 0x8000F22C: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8000F230: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F234: nop

    // 0x8000F238: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8000F23C: sw          $t7, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r15;
    // 0x8000F240: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
    // 0x8000F244: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8000F248: lui         $t8, 0xB700
    ctx->r24 = S32(0XB700 << 16);
    // 0x8000F24C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8000F250: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8000F254: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x8000F258: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x8000F25C: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F260: nop

    // 0x8000F264: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8000F268: sw          $t3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r11;
    // 0x8000F26C: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    // 0x8000F270: lw          $t5, 0x80($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X80);
    // 0x8000F274: lui         $t4, 0xBB00
    ctx->r12 = S32(0XBB00 << 16);
    // 0x8000F278: ori         $t4, $t4, 0x1
    ctx->r12 = ctx->r12 | 0X1;
    // 0x8000F27C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8000F280: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8000F284: lui         $t6, 0x7C0
    ctx->r14 = S32(0X7C0 << 16);
    // 0x8000F288: ori         $t6, $t6, 0x7C0
    ctx->r14 = ctx->r14 | 0X7C0;
    // 0x8000F28C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8000F290: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F294: nop

    // 0x8000F298: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8000F29C: sw          $t9, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r25;
    // 0x8000F2A0: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    // 0x8000F2A4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8000F2A8: lui         $t1, 0xBA00
    ctx->r9 = S32(0XBA00 << 16);
    // 0x8000F2AC: ori         $t1, $t1, 0x1301
    ctx->r9 = ctx->r9 | 0X1301;
    // 0x8000F2B0: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x8000F2B4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8000F2B8: lui         $t2, 0x8
    ctx->r10 = S32(0X8 << 16);
    // 0x8000F2BC: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8000F2C0: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F2C4: nop

    // 0x8000F2C8: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8000F2CC: sw          $t5, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r13;
    // 0x8000F2D0: sw          $t4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r12;
    // 0x8000F2D4: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8000F2D8: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x8000F2DC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8000F2E0: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x8000F2E4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8000F2E8: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8000F2EC: lw          $t1, 0xE8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F2F0: nop

    // 0x8000F2F4: addiu       $t0, $t1, 0x8
    ctx->r8 = ADD32(ctx->r9, 0X8);
    // 0x8000F2F8: sw          $t0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r8;
    // 0x8000F2FC: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x8000F300: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8000F304: lui         $t2, 0xFB00
    ctx->r10 = S32(0XFB00 << 16);
    // 0x8000F308: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8000F30C: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x8000F310: lui         $t4, 0x4040
    ctx->r12 = S32(0X4040 << 16);
    // 0x8000F314: ori         $t4, $t4, 0x40FF
    ctx->r12 = ctx->r12 | 0X40FF;
    // 0x8000F318: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8000F31C: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F320: nop

    // 0x8000F324: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8000F328: sw          $t7, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r15;
    // 0x8000F32C: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x8000F330: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8000F334: lui         $t8, 0xFC30
    ctx->r24 = S32(0XFC30 << 16);
    // 0x8000F338: ori         $t8, $t8, 0xB261
    ctx->r24 = ctx->r24 | 0XB261;
    // 0x8000F33C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8000F340: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8000F344: lui         $t1, 0x4466
    ctx->r9 = S32(0X4466 << 16);
    // 0x8000F348: ori         $t1, $t1, 0x4924
    ctx->r9 = ctx->r9 | 0X4924;
    // 0x8000F34C: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x8000F350: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F354: nop

    // 0x8000F358: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8000F35C: sw          $t3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r11;
    // 0x8000F360: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    // 0x8000F364: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x8000F368: lui         $t4, 0xFD70
    ctx->r12 = S32(0XFD70 << 16);
    // 0x8000F36C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8000F370: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x8000F374: lui         $t6, 0x100
    ctx->r14 = S32(0X100 << 16);
    // 0x8000F378: addiu       $t6, $t6, 0x768
    ctx->r14 = ADD32(ctx->r14, 0X768);
    // 0x8000F37C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8000F380: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F384: nop

    // 0x8000F388: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8000F38C: sw          $t9, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r25;
    // 0x8000F390: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x8000F394: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8000F398: lui         $t1, 0xF570
    ctx->r9 = S32(0XF570 << 16);
    // 0x8000F39C: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x8000F3A0: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x8000F3A4: lui         $t2, 0x701
    ctx->r10 = S32(0X701 << 16);
    // 0x8000F3A8: ori         $t2, $t2, 0x4050
    ctx->r10 = ctx->r10 | 0X4050;
    // 0x8000F3AC: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8000F3B0: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F3B4: nop

    // 0x8000F3B8: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8000F3BC: sw          $t5, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r13;
    // 0x8000F3C0: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x8000F3C4: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8000F3C8: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8000F3CC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8000F3D0: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8000F3D4: nop

    // 0x8000F3D8: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8000F3DC: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F3E0: nop

    // 0x8000F3E4: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8000F3E8: sw          $t1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r9;
    // 0x8000F3EC: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x8000F3F0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8000F3F4: lui         $t0, 0xF300
    ctx->r8 = S32(0XF300 << 16);
    // 0x8000F3F8: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x8000F3FC: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8000F400: lui         $t3, 0x71F
    ctx->r11 = S32(0X71F << 16);
    // 0x8000F404: ori         $t3, $t3, 0xF200
    ctx->r11 = ctx->r11 | 0XF200;
    // 0x8000F408: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8000F40C: lw          $t5, 0xE8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F410: nop

    // 0x8000F414: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8000F418: sw          $t6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r14;
    // 0x8000F41C: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x8000F420: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8000F424: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8000F428: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8000F42C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8000F430: nop

    // 0x8000F434: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8000F438: lw          $t1, 0xE8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F43C: nop

    // 0x8000F440: addiu       $t0, $t1, 0x8
    ctx->r8 = ADD32(ctx->r9, 0X8);
    // 0x8000F444: sw          $t0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r8;
    // 0x8000F448: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x8000F44C: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x8000F450: lui         $t2, 0xF568
    ctx->r10 = S32(0XF568 << 16);
    // 0x8000F454: ori         $t2, $t2, 0x800
    ctx->r10 = ctx->r10 | 0X800;
    // 0x8000F458: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8000F45C: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x8000F460: lui         $t4, 0x1
    ctx->r12 = S32(0X1 << 16);
    // 0x8000F464: ori         $t4, $t4, 0x4050
    ctx->r12 = ctx->r12 | 0X4050;
    // 0x8000F468: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8000F46C: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F470: nop

    // 0x8000F474: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8000F478: sw          $t7, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r15;
    // 0x8000F47C: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x8000F480: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8000F484: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x8000F488: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8000F48C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8000F490: lui         $t1, 0x7
    ctx->r9 = S32(0X7 << 16);
    // 0x8000F494: ori         $t1, $t1, 0xC07C
    ctx->r9 = ctx->r9 | 0XC07C;
    // 0x8000F498: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x8000F49C: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F4A0: nop

    // 0x8000F4A4: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8000F4A8: sw          $t3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r11;
    // 0x8000F4AC: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x8000F4B0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8000F4B4: lw          $t4, -0x1EFC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1EFC);
    // 0x8000F4B8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8000F4BC: lw          $t8, 0xC0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0XC0);
    // 0x8000F4C0: lw          $t5, 0xC4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC4);
    // 0x8000F4C4: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8000F4C8: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8000F4CC: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8000F4D0: sll         $t0, $t1, 12
    ctx->r8 = S32(ctx->r9 << 12);
    // 0x8000F4D4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8000F4D8: or          $t2, $t0, $at
    ctx->r10 = ctx->r8 | ctx->r1;
    // 0x8000F4DC: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000F4E0: or          $t3, $t7, $t2
    ctx->r11 = ctx->r15 | ctx->r10;
    // 0x8000F4E4: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
    // 0x8000F4E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8000F4EC: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x8000F4F0: nop

    // 0x8000F4F4: lw          $t4, 0xC4($t6)
    ctx->r12 = MEM_W(ctx->r14, 0XC4);
    // 0x8000F4F8: lw          $t0, 0xC0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0XC0);
    // 0x8000F4FC: addiu       $t8, $t4, 0x7C
    ctx->r24 = ADD32(ctx->r12, 0X7C);
    // 0x8000F500: addiu       $t7, $t0, 0x7C
    ctx->r15 = ADD32(ctx->r8, 0X7C);
    // 0x8000F504: andi        $t2, $t7, 0xFFF
    ctx->r10 = ctx->r15 & 0XFFF;
    // 0x8000F508: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8000F50C: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x8000F510: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8000F514: sll         $t5, $t3, 12
    ctx->r13 = S32(ctx->r11 << 12);
    // 0x8000F518: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8000F51C: or          $t4, $t1, $t5
    ctx->r12 = ctx->r9 | ctx->r13;
    // 0x8000F520: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x8000F524: b           L_8000F634
    // 0x8000F528: nop

        goto L_8000F634;
    // 0x8000F528: nop

L_8000F52C:
    // 0x8000F52C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000F530: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000F534: sw          $t9, -0x5C6C($at)
    MEM_W(-0X5C6C, ctx->r1) = ctx->r25;
    // 0x8000F538: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F53C: nop

    // 0x8000F540: addiu       $t0, $t6, 0x8
    ctx->r8 = ADD32(ctx->r14, 0X8);
    // 0x8000F544: sw          $t0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r8;
    // 0x8000F548: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x8000F54C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8000F550: lui         $t7, 0xB700
    ctx->r15 = S32(0XB700 << 16);
    // 0x8000F554: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x8000F558: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8000F55C: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x8000F560: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x8000F564: b           L_8000F634
    // 0x8000F568: nop

        goto L_8000F634;
    // 0x8000F568: nop

L_8000F56C:
    // 0x8000F56C: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8000F570: lw          $t5, -0x5C70($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5C70);
    // 0x8000F574: nop

    // 0x8000F578: beq         $t5, $zero, L_8000F5E4
    if (ctx->r13 == 0) {
        // 0x8000F57C: nop
    
            goto L_8000F5E4;
    }
    // 0x8000F57C: nop

    // 0x8000F580: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F584: nop

    // 0x8000F588: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8000F58C: sw          $t8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r24;
    // 0x8000F590: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x8000F594: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8000F598: lui         $t9, 0xB600
    ctx->r25 = S32(0XB600 << 16);
    // 0x8000F59C: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x8000F5A0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8000F5A4: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x8000F5A8: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x8000F5AC: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F5B0: nop

    // 0x8000F5B4: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8000F5B8: sw          $t3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r11;
    // 0x8000F5BC: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x8000F5C0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8000F5C4: lui         $t1, 0xBB00
    ctx->r9 = S32(0XBB00 << 16);
    // 0x8000F5C8: sw          $t1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r9;
    // 0x8000F5CC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8000F5D0: nop

    // 0x8000F5D4: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8000F5D8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000F5DC: b           L_8000F62C
    // 0x8000F5E0: sw          $zero, -0x5C70($at)
    MEM_W(-0X5C70, ctx->r1) = 0;
        goto L_8000F62C;
    // 0x8000F5E0: sw          $zero, -0x5C70($at)
    MEM_W(-0X5C70, ctx->r1) = 0;
L_8000F5E4:
    // 0x8000F5E4: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000F5E8: lw          $t8, -0x5C6C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5C6C);
    // 0x8000F5EC: nop

    // 0x8000F5F0: beq         $t8, $zero, L_8000F62C
    if (ctx->r24 == 0) {
        // 0x8000F5F4: nop
    
            goto L_8000F62C;
    }
    // 0x8000F5F4: nop

    // 0x8000F5F8: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F5FC: nop

    // 0x8000F600: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8000F604: sw          $t6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r14;
    // 0x8000F608: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x8000F60C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8000F610: lui         $t0, 0xB600
    ctx->r8 = S32(0XB600 << 16);
    // 0x8000F614: sw          $t0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r8;
    // 0x8000F618: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8000F61C: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x8000F620: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8000F624: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000F628: sw          $zero, -0x5C6C($at)
    MEM_W(-0X5C6C, ctx->r1) = 0;
L_8000F62C:
    // 0x8000F62C: b           L_8000F634
    // 0x8000F630: nop

        goto L_8000F634;
    // 0x8000F630: nop

L_8000F634:
    // 0x8000F634: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
    // 0x8000F638: lw          $t1, 0xEC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XEC);
    // 0x8000F63C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x8000F640: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x8000F644: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8000F648: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000F64C: addu        $t8, $t1, $t4
    ctx->r24 = ADD32(ctx->r9, ctx->r12);
    // 0x8000F650: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8000F654: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000F658: nop

    // 0x8000F65C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8000F660: nop

    // 0x8000F664: bc1t        L_8000F6EC
    if (c1cs) {
        // 0x8000F668: nop
    
            goto L_8000F6EC;
    }
    // 0x8000F668: nop

    // 0x8000F66C: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x8000F670: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x8000F674: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8000F678: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x8000F67C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000F680: addu        $t7, $t9, $t0
    ctx->r15 = ADD32(ctx->r25, ctx->r8);
    // 0x8000F684: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8000F688: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x8000F68C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8000F690: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8000F694: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8000F698: jal         0x80013B70
    // 0x8000F69C: nop

    Math_Mat3f_Scale(rdram, ctx);
        goto after_5;
    // 0x8000F69C: nop

    after_5:
    // 0x8000F6A0: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000F6A4: lw          $t2, 0x5820($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5820);
    // 0x8000F6A8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000F6AC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8000F6B0: sw          $t3, 0x5820($at)
    MEM_W(0X5820, ctx->r1) = ctx->r11;
    // 0x8000F6B4: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8000F6B8: lw          $t5, 0x5820($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5820);
    // 0x8000F6BC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000F6C0: sll         $t1, $t5, 6
    ctx->r9 = S32(ctx->r13 << 6);
    // 0x8000F6C4: addiu       $t4, $t1, -0x40
    ctx->r12 = ADD32(ctx->r9, -0X40);
    // 0x8000F6C8: addiu       $t8, $t8, 0x5828
    ctx->r24 = ADD32(ctx->r24, 0X5828);
    // 0x8000F6CC: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    // 0x8000F6D0: addu        $a2, $t1, $t8
    ctx->r6 = ADD32(ctx->r9, ctx->r24);
    // 0x8000F6D4: jal         0x80036400
    // 0x8000F6D8: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    guMtxCatF(rdram, ctx);
        goto after_6;
    // 0x8000F6D8: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    after_6:
    // 0x8000F6DC: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8000F6E0: nop

    // 0x8000F6E4: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x8000F6E8: sw          $t9, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r25;
L_8000F6EC:
    // 0x8000F6EC: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x8000F6F0: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000F6F4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8000F6F8: lw          $t3, -0x1EFC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1EFC);
    // 0x8000F6FC: lw          $t0, 0x5820($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5820);
    // 0x8000F700: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000F704: sll         $t4, $t5, 6
    ctx->r12 = S32(ctx->r13 << 6);
    // 0x8000F708: addiu       $t2, $t2, 0x5828
    ctx->r10 = ADD32(ctx->r10, 0X5828);
    // 0x8000F70C: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    // 0x8000F710: sll         $t7, $t0, 6
    ctx->r15 = S32(ctx->r8 << 6);
    // 0x8000F714: addu        $a0, $t7, $t2
    ctx->r4 = ADD32(ctx->r15, ctx->r10);
    // 0x8000F718: jal         0x800360F0
    // 0x8000F71C: addiu       $a1, $a1, 0xE0
    ctx->r5 = ADD32(ctx->r5, 0XE0);
    guMtxF2L(rdram, ctx);
        goto after_7;
    // 0x8000F71C: addiu       $a1, $a1, 0xE0
    ctx->r5 = ADD32(ctx->r5, 0XE0);
    after_7:
    // 0x8000F720: lw          $t1, 0xE8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F724: nop

    // 0x8000F728: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x8000F72C: sw          $t8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r24;
    // 0x8000F730: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x8000F734: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8000F738: lui         $t6, 0x102
    ctx->r14 = S32(0X102 << 16);
    // 0x8000F73C: ori         $t6, $t6, 0x40
    ctx->r14 = ctx->r14 | 0X40;
    // 0x8000F740: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8000F744: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x8000F748: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8000F74C: lw          $t0, -0x1EFC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1EFC);
    // 0x8000F750: sll         $t2, $t7, 6
    ctx->r10 = S32(ctx->r15 << 6);
    // 0x8000F754: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x8000F758: addu        $a0, $t0, $t2
    ctx->r4 = ADD32(ctx->r8, ctx->r10);
    // 0x8000F75C: addiu       $a0, $a0, 0xE0
    ctx->r4 = ADD32(ctx->r4, 0XE0);
    // 0x8000F760: jal         0x800358D0
    // 0x8000F764: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_8;
    // 0x8000F764: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
    after_8:
    // 0x8000F768: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8000F76C: nop

    // 0x8000F770: sw          $v0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r2;
    // 0x8000F774: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F778: nop

    // 0x8000F77C: addiu       $t1, $t4, 0x8
    ctx->r9 = ADD32(ctx->r12, 0X8);
    // 0x8000F780: sw          $t1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r9;
    // 0x8000F784: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x8000F788: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8000F78C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8000F790: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8000F794: lw          $t0, 0x104($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X104);
    // 0x8000F798: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x8000F79C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8000F7A0: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
    // 0x8000F7A4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000F7A8: addu        $t7, $t9, $t2
    ctx->r15 = ADD32(ctx->r25, ctx->r10);
    // 0x8000F7AC: lw          $t5, 0x8($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X8);
    // 0x8000F7B0: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    // 0x8000F7B4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8000F7B8: addu        $t4, $t5, $t3
    ctx->r12 = ADD32(ctx->r13, ctx->r11);
    // 0x8000F7BC: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x8000F7C0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000F7C4: lw          $t8, 0x5820($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5820);
    // 0x8000F7C8: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8000F7CC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000F7D0: subu        $t0, $t8, $t6
    ctx->r8 = SUB32(ctx->r24, ctx->r14);
    // 0x8000F7D4: b           L_8000F854
    // 0x8000F7D8: sw          $t0, 0x5820($at)
    MEM_W(0X5820, ctx->r1) = ctx->r8;
        goto L_8000F854;
    // 0x8000F7D8: sw          $t0, 0x5820($at)
    MEM_W(0X5820, ctx->r1) = ctx->r8;
L_8000F7DC:
    // 0x8000F7DC: lw          $t2, 0x104($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X104);
    // 0x8000F7E0: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x8000F7E4: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x8000F7E8: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x8000F7EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000F7F0: addu        $t5, $t9, $t7
    ctx->r13 = ADD32(ctx->r25, ctx->r15);
    // 0x8000F7F4: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x8000F7F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000F7FC: bne         $t3, $at, L_8000F854
    if (ctx->r11 != ctx->r1) {
        // 0x8000F800: nop
    
            goto L_8000F854;
    }
    // 0x8000F800: nop

    // 0x8000F804: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x8000F808: lw          $t4, 0x100($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X100);
    // 0x8000F80C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8000F810: lw          $t1, 0xEC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XEC);
    // 0x8000F814: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x8000F818: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000F81C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8000F820: addu        $t0, $t1, $t6
    ctx->r8 = ADD32(ctx->r9, ctx->r14);
    // 0x8000F824: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x8000F828: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x8000F82C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8000F830: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x8000F834: lw          $a1, 0xF4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF4);
    // 0x8000F838: lw          $a2, 0xF8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XF8);
    // 0x8000F83C: lw          $a3, 0xFC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XFC);
    // 0x8000F840: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x8000F844: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8000F848: jal         0x8000E944
    // 0x8000F84C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_8000E944(rdram, ctx);
        goto after_9;
    // 0x8000F84C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_9:
    // 0x8000F850: sw          $v0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r2;
L_8000F854:
    // 0x8000F854: lw          $t5, 0xE8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE8);
    // 0x8000F858: lw          $t3, 0xF0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF0);
    // 0x8000F85C: nop

    // 0x8000F860: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x8000F864: lw          $v0, 0x108($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X108);
    // 0x8000F868: b           L_8000F878
    // 0x8000F86C: nop

        goto L_8000F878;
    // 0x8000F86C: nop

    // 0x8000F870: b           L_8000F878
    // 0x8000F874: nop

        goto L_8000F878;
    // 0x8000F874: nop

L_8000F878:
    // 0x8000F878: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000F87C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8000F880: jr          $ra
    // 0x8000F884: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x8000F884: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void alSndpDeallocate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035550: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80035554: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80035558: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003555C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80035560: sll         $v1, $t7, 2
    ctx->r3 = S32(ctx->r15 << 2);
    // 0x80035564: subu        $v1, $v1, $t7
    ctx->r3 = SUB32(ctx->r3, ctx->r15);
    // 0x80035568: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8003556C: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
    // 0x80035570: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x80035574: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
    // 0x80035578: bne         $t9, $zero, L_80035598
    if (ctx->r25 != 0) {
        // 0x8003557C: nop
    
            goto L_80035598;
    }
    // 0x8003557C: nop

    // 0x80035580: sw          $zero, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = 0;
    // 0x80035584: lw          $t1, 0x3C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X3C);
    // 0x80035588: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8003558C: bne         $t7, $t1, L_80035598
    if (ctx->r15 != ctx->r9) {
        // 0x80035590: nop
    
            goto L_80035598;
    }
    // 0x80035590: nop

    // 0x80035594: sw          $t2, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r10;
L_80035598:
    // 0x80035598: jr          $ra
    // 0x8003559C: nop

    return;
    // 0x8003559C: nop

;}
RECOMP_FUNC void func_8002B830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B830: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8002B834: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8002B838:
    // 0x8002B838: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8002B83C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002B840: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8002B844: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002B848: lh          $t8, 0x76A8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X76A8);
    // 0x8002B84C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002B850: bne         $t8, $at, L_8002B864
    if (ctx->r24 != ctx->r1) {
        // 0x8002B854: nop
    
            goto L_8002B864;
    }
    // 0x8002B854: nop

    // 0x8002B858: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x8002B85C: b           L_8002B88C
    // 0x8002B860: nop

        goto L_8002B88C;
    // 0x8002B860: nop

L_8002B864:
    // 0x8002B864: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8002B868: nop

    // 0x8002B86C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8002B870: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x8002B874: bne         $at, $zero, L_8002B838
    if (ctx->r1 != 0) {
        // 0x8002B878: sw          $t0, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r8;
            goto L_8002B838;
    }
    // 0x8002B878: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8002B87C: b           L_8002B88C
    // 0x8002B880: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8002B88C;
    // 0x8002B880: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8002B884: b           L_8002B88C
    // 0x8002B888: nop

        goto L_8002B88C;
    // 0x8002B888: nop

L_8002B88C:
    // 0x8002B88C: jr          $ra
    // 0x8002B890: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8002B890: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void _timeToSamples(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035A18: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x80035A1C: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80035A20: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80035A24: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80035A28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80035A2C: ldc1        $f4, -0x3C80($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3C80);
    // 0x80035A30: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80035A34: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80035A38: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80035A3C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80035A40: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80035A44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80035A48: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80035A4C: div.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x80035A50: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x80035A54: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x80035A58: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80035A5C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80035A60: nop

    // 0x80035A64: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x80035A68: jr          $ra
    // 0x80035A6C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x80035A6C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_800031CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800031CC: jr          $ra
    // 0x800031D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800031D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800031D4: jr          $ra
    // 0x800031D8: nop

    return;
    // 0x800031D8: nop

    // 0x800031DC: jr          $ra
    // 0x800031E0: nop

    return;
    // 0x800031E0: nop

;}
RECOMP_FUNC void func_800261E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800261E8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800261EC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x800261F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800261F4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800261F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800261FC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80026200: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80026204: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80026208: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002620C: lh          $t7, 0x424C($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X424C);
    // 0x80026210: nop

    // 0x80026214: sh          $t7, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r15;
    // 0x80026218: lh          $t8, 0x4($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4);
    // 0x8002621C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80026220: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80026224: lbu         $t9, 0x5118($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5118);
    // 0x80026228: nop

    // 0x8002622C: andi        $t0, $t9, 0x3
    ctx->r8 = ctx->r25 & 0X3;
    // 0x80026230: sb          $t0, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r8;
    // 0x80026234: lbu         $t1, 0x7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X7);
    // 0x80026238: lh          $t4, 0x4($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4);
    // 0x8002623C: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x80026240: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026244: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80026248: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8002624C: sb          $t3, 0x5118($at)
    MEM_B(0X5118, ctx->r1) = ctx->r11;
    // 0x80026250: b           L_80026258
    // 0x80026254: nop

        goto L_80026258;
    // 0x80026254: nop

L_80026258:
    // 0x80026258: jr          $ra
    // 0x8002625C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8002625C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
