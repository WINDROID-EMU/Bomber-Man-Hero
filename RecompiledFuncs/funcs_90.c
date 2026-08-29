#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80334968_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334968: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033496C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334970: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334974: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334978: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033497C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334980: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334984: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334988: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033498C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334990: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334994: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334998: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033499C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803349A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803349A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803349A8: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x803349AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803349B0: jal         0x800175F0
    // 0x803349B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x803349B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x803349B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803349BC: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    // 0x803349C0: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803349C4: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x803349C8: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x803349CC: jal         0x8007EDF4
    // 0x803349D0: nop

    func_8007EDF4(rdram, ctx);
        goto after_1;
    // 0x803349D0: nop

    after_1:
    // 0x803349D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803349D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803349DC: jal         0x8002B114
    // 0x803349E0: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x803349E0: nop

    after_2:
    // 0x803349E4: b           L_803349EC
    // 0x803349E8: nop

        goto L_803349EC;
    // 0x803349E8: nop

L_803349EC:
    // 0x803349EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803349F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803349F4: jr          $ra
    // 0x803349F8: nop

    return;
    // 0x803349F8: nop

;}
RECOMP_FUNC void func_80335148_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335148: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8033514C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335150: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335154: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335158: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033515C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335160: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335164: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335168: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033516C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335170: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335174: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335178: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8033517C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80335180: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80335184: nop

    // 0x80335188: bne         $t0, $zero, L_80335534
    if (ctx->r8 != 0) {
        // 0x8033518C: nop
    
            goto L_80335534;
    }
    // 0x8033518C: nop

    // 0x80335190: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80335194:
    // 0x80335194: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80335198: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033519C: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x803351A0: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x803351A4: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x803351A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803351AC: beq         $t5, $at, L_80335514
    if (ctx->r13 == ctx->r1) {
        // 0x803351B0: nop
    
            goto L_80335514;
    }
    // 0x803351B0: nop

    // 0x803351B4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803351B8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_803351BC:
    // 0x803351BC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803351C0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803351C4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x803351C8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x803351CC: lh          $t2, 0xE8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XE8);
    // 0x803351D0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803351D4: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x803351D8: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x803351DC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803351E0: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x803351E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803351E8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803351EC: lh          $t3, 0x4254($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4254);
    // 0x803351F0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803351F4: nop

    // 0x803351F8: bne         $t3, $t4, L_8033534C
    if (ctx->r11 != ctx->r12) {
        // 0x803351FC: nop
    
            goto L_8033534C;
    }
    // 0x803351FC: nop

    // 0x80335200: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80335204: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80335208: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x8033520C: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x80335210: lh          $t9, 0xE8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XE8);
    // 0x80335214: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335218: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033521C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335220: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335224: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335228: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033522C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335230: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80335234: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80335238: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033523C: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x80335240: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80335244: lh          $t6, 0xE8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XE8);
    // 0x80335248: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033524C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80335250: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80335254: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335258: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033525C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335260: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80335264: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80335268: nop

    // 0x8033526C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80335270: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80335274: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80335278: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8033527C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80335280: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80335284: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335288: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033528C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335290: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80335294: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335298: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033529C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803352A0: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x803352A4: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x803352A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803352AC: nop

    // 0x803352B0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803352B4: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x803352B8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x803352BC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803352C0: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x803352C4: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x803352C8: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x803352CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803352D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803352D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803352D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803352DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803352E0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803352E4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803352E8: lwc1        $f16, 0x4158($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x803352EC: nop

    // 0x803352F0: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x803352F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352FC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80335300: jal         0x800281A4
    // 0x80335304: nop

    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x80335304: nop

    after_0:
    // 0x80335308: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8033530C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80335310: jal         0x8002B114
    // 0x80335314: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80335314: nop

    after_1:
    // 0x80335318: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033531C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80335320: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80335324: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80335328: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8033532C: jal         0x8002AE38
    // 0x80335330: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_8002AE38(rdram, ctx);
        goto after_2;
    // 0x80335330: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x80335334: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80335338: nop

    // 0x8033533C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80335340: nop

    // 0x80335344: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80335348: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
L_8033534C:
    // 0x8033534C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80335350: nop

    // 0x80335354: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x80335358: slti        $at, $t3, 0x6
    ctx->r1 = SIGNED(ctx->r11) < 0X6 ? 1 : 0;
    // 0x8033535C: bne         $at, $zero, L_803351BC
    if (ctx->r1 != 0) {
        // 0x80335360: sw          $t3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r11;
            goto L_803351BC;
    }
    // 0x80335360: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80335364: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80335368: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_8033536C:
    // 0x8033536C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80335370: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80335374: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80335378: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x8033537C: lh          $t1, 0xE8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XE8);
    // 0x80335380: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80335384: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80335388: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033538C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80335390: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335394: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80335398: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033539C: lh          $t0, 0x4254($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4254);
    // 0x803353A0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803353A4: nop

    // 0x803353A8: bne         $t0, $t4, L_803354FC
    if (ctx->r8 != ctx->r12) {
        // 0x803353AC: nop
    
            goto L_803354FC;
    }
    // 0x803353AC: nop

    // 0x803353B0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x803353B4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803353B8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x803353BC: addu        $t5, $t3, $t7
    ctx->r13 = ADD32(ctx->r11, ctx->r15);
    // 0x803353C0: lh          $t8, 0xE8($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XE8);
    // 0x803353C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803353C8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803353CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803353D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803353D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803353D8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803353DC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803353E0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803353E4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x803353E8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803353EC: sll         $t0, $t2, 1
    ctx->r8 = S32(ctx->r10 << 1);
    // 0x803353F0: addu        $t4, $t1, $t0
    ctx->r12 = ADD32(ctx->r9, ctx->r8);
    // 0x803353F4: lh          $t6, 0xE8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XE8);
    // 0x803353F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803353FC: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80335400: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80335404: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335408: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x8033540C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80335410: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335414: lwc1        $f18, 0x4150($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80335418: nop

    // 0x8033541C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80335420: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80335424: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80335428: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x8033542C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335430: lh          $t2, 0xE8($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XE8);
    // 0x80335434: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335438: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x8033543C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80335440: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80335444: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80335448: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033544C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80335450: lwc1        $f4, 0x4154($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80335454: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x80335458: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033545C: nop

    // 0x80335460: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80335464: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80335468: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8033546C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80335470: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x80335474: addu        $t3, $t0, $t6
    ctx->r11 = ADD32(ctx->r8, ctx->r14);
    // 0x80335478: lh          $t5, 0xE8($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XE8);
    // 0x8033547C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335480: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80335484: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335488: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033548C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335490: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335494: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80335498: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x8033549C: nop

    // 0x803354A0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x803354A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803354A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803354AC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x803354B0: jal         0x800281A4
    // 0x803354B4: nop

    func_800281A4(rdram, ctx);
        goto after_3;
    // 0x803354B4: nop

    after_3:
    // 0x803354B8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x803354BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803354C0: jal         0x8002B114
    // 0x803354C4: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x803354C4: nop

    after_4:
    // 0x803354C8: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803354CC: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803354D0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803354D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803354D8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803354DC: jal         0x8002AE38
    // 0x803354E0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_8002AE38(rdram, ctx);
        goto after_5;
    // 0x803354E0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_5:
    // 0x803354E4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803354E8: nop

    // 0x803354EC: lh          $t2, 0xA6($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XA6);
    // 0x803354F0: nop

    // 0x803354F4: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x803354F8: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_803354FC:
    // 0x803354FC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80335500: nop

    // 0x80335504: addiu       $t0, $t4, 0x1
    ctx->r8 = ADD32(ctx->r12, 0X1);
    // 0x80335508: slti        $at, $t0, 0xE
    ctx->r1 = SIGNED(ctx->r8) < 0XE ? 1 : 0;
    // 0x8033550C: bne         $at, $zero, L_8033536C
    if (ctx->r1 != 0) {
        // 0x80335510: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_8033536C;
    }
    // 0x80335510: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80335514:
    // 0x80335514: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80335518: nop

    // 0x8033551C: addiu       $t3, $t6, 0x1
    ctx->r11 = ADD32(ctx->r14, 0X1);
    // 0x80335520: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x80335524: bne         $at, $zero, L_80335194
    if (ctx->r1 != 0) {
        // 0x80335528: sw          $t3, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r11;
            goto L_80335194;
    }
    // 0x80335528: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8033552C: b           L_80335534
    // 0x80335530: nop

        goto L_80335534;
    // 0x80335530: nop

L_80335534:
    // 0x80335534: b           L_8033553C
    // 0x80335538: nop

        goto L_8033553C;
    // 0x80335538: nop

L_8033553C:
    // 0x8033553C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335540: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80335544: jr          $ra
    // 0x80335548: nop

    return;
    // 0x80335548: nop

;}
RECOMP_FUNC void func_80330244_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330244: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330248: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033024C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80330250: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330254: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80330258: lb          $t6, 0x2B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2B);
    // 0x8033025C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330260: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330264: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330268: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033026C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330270: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330274: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330278: lh          $t8, 0x4200($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4200);
    // 0x8033027C: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    // 0x80330280: blez        $t8, L_803304E4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80330284: nop
    
            goto L_803304E4;
    }
    // 0x80330284: nop

L_80330288:
    // 0x80330288: lb          $t9, 0x2B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X2B);
    // 0x8033028C: lh          $t1, 0x24($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X24);
    // 0x80330290: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330294: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330298: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033029C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803302A0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803302A4: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x803302A8: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x803302AC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803302B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803302B4: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x803302B8: nop

    // 0x803302BC: sh          $t4, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r12;
    // 0x803302C0: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x803302C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803302CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803302D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803302DC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803302E0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803302E4: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x803302E8: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x803302EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803302F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803302F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803302FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330300: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330304: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330308: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033030C: lb          $t1, 0x2B($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2B);
    // 0x80330310: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x80330314: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80330318: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x8033031C: lh          $t2, 0x24($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X24);
    // 0x80330320: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330324: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330328: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033032C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330330: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330334: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330338: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8033033C: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x80330340: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330344: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330348: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x8033034C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330350: lh          $t7, 0xE6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE6);
    // 0x80330354: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330358: addu        $t1, $t9, $t6
    ctx->r9 = ADD32(ctx->r25, ctx->r14);
    // 0x8033035C: sh          $t7, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r15;
    // 0x80330360: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x80330364: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330368: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x8033036C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80330370: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330374: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80330378: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033037C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330380: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330384: sh          $t2, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r10;
    // 0x80330388: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x8033038C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330390: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330394: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330398: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033039C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803303A0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803303A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303A8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803303AC: swc1        $f4, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f4.u32l;
    // 0x803303B0: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x803303B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803303B8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803303BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803303C0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803303C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803303C8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803303CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303D0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803303D4: swc1        $f6, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f6.u32l;
    // 0x803303D8: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x803303DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803303E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803303E4: jal         0x80019448
    // 0x803303E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x803303E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x803303EC: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x803303F0: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x803303F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803303F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303FC: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80330400: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330404: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330408: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x8033040C: lwc1        $f8, 0x1F40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1F40);
    // 0x80330410: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330414: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330418: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033041C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330420: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330424: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330428: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033042C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330430: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330434: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80330438: swc1        $f8, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f8.u32l;
    // 0x8033043C: lwc1        $f20, 0xC($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0XC);
    // 0x80330440: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330444: swc1        $f20, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f20.u32l;
    // 0x80330448: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x8033044C: nop

    // 0x80330450: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330454: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330458: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033045C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330460: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330464: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330468: swc1        $f20, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f20.u32l;
    // 0x8033046C: lh          $t8, 0x24($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X24);
    // 0x80330470: nop

    // 0x80330474: bne         $t8, $zero, L_803304A4
    if (ctx->r24 != 0) {
        // 0x80330478: nop
    
            goto L_803304A4;
    }
    // 0x80330478: nop

    // 0x8033047C: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x80330480: lb          $t9, 0x2B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X2B);
    // 0x80330484: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330488: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033048C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330490: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330494: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330498: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033049C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803304A0: sh          $t9, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r25;
L_803304A4:
    // 0x803304A4: lb          $t4, 0x2B($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X2B);
    // 0x803304A8: lh          $t1, 0x24($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X24);
    // 0x803304AC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803304B0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803304B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803304B8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803304BC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803304C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803304C4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803304C8: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x803304CC: lh          $t8, 0x4200($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4200);
    // 0x803304D0: sll         $t2, $t0, 16
    ctx->r10 = S32(ctx->r8 << 16);
    // 0x803304D4: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x803304D8: slt         $at, $t3, $t8
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x803304DC: bne         $at, $zero, L_80330288
    if (ctx->r1 != 0) {
        // 0x803304E0: sh          $t0, 0x24($sp)
        MEM_H(0X24, ctx->r29) = ctx->r8;
            goto L_80330288;
    }
    // 0x803304E0: sh          $t0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r8;
L_803304E4:
    // 0x803304E4: lb          $v0, 0x25($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X25);
    // 0x803304E8: b           L_803304F8
    // 0x803304EC: nop

        goto L_803304F8;
    // 0x803304EC: nop

    // 0x803304F0: b           L_803304F8
    // 0x803304F4: nop

        goto L_803304F8;
    // 0x803304F4: nop

L_803304F8:
    // 0x803304F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803304FC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80330500: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80330504: jr          $ra
    // 0x80330508: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80330508: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80331E4C_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E4C: jr          $ra
    // 0x80331E50: nop

    return;
    // 0x80331E50: nop

    // 0x80331E54: jr          $ra
    // 0x80331E58: nop

    return;
    // 0x80331E58: nop

;}
RECOMP_FUNC void func_803305D4_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803305D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803305D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803305DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803305E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803305E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803305E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803305EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803305F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803305FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330600: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330604: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330608: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033060C: nop

    // 0x80330610: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330614: nop

    // 0x80330618: bne         $t1, $zero, L_803306D8
    if (ctx->r9 != 0) {
        // 0x8033061C: nop
    
            goto L_803306D8;
    }
    // 0x8033061C: nop

    // 0x80330620: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330624: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330628: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033062C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80330630: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330634: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80330638: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033063C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330640: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80330644: nop

    // 0x80330648: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8033064C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80330650: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80330654: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
    // 0x80330658: nop

    // 0x8033065C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330660: nop

    // 0x80330664: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x80330668: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033066C: nop

    // 0x80330670: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x80330674: jal         0x80014E80
    // 0x80330678: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80330678: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x8033067C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80330680: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330684: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330688: swc1        $f10, 0xE0($t9)
    MEM_W(0XE0, ctx->r25) = ctx->f10.u32l;
    // 0x8033068C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330690: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330694: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80330698: nop

    // 0x8033069C: bne         $t1, $at, L_803306D8
    if (ctx->r9 != ctx->r1) {
        // 0x803306A0: nop
    
            goto L_803306D8;
    }
    // 0x803306A0: nop

    // 0x803306A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803306A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803306AC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803306B0: nop

    // 0x803306B4: swc1        $f16, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f16.u32l;
    // 0x803306B8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x803306BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803306C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803306C4: nop

    // 0x803306C8: swc1        $f18, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f18.u32l;
    // 0x803306CC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803306D0: nop

    // 0x803306D4: sh          $zero, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = 0;
L_803306D8:
    // 0x803306D8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803306DC: nop

    // 0x803306E0: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803306E4: nop

    // 0x803306E8: swc1        $f4, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f4.u32l;
    // 0x803306EC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803306F0: nop

    // 0x803306F4: lwc1        $f6, 0x40($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X40);
    // 0x803306F8: nop

    // 0x803306FC: swc1        $f6, 0xD8($t4)
    MEM_W(0XD8, ctx->r12) = ctx->f6.u32l;
    // 0x80330700: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330704: nop

    // 0x80330708: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033070C: lh          $t9, 0xA8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA8);
    // 0x80330710: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80330714: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80330718: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033071C: jal         0x80015538
    // 0x80330720: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80330720: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_1:
    // 0x80330724: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80330728: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033072C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80330730: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330734: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330738: nop

    // 0x8033073C: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80330740: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80330744: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80330748: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x8033074C: nop

    // 0x80330750: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330754: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330758: lh          $t5, 0xA6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA6);
    // 0x8033075C: lwc1        $f7, 0x1F48($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1F48);
    // 0x80330760: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80330764: lwc1        $f6, 0x1F4C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1F4C);
    // 0x80330768: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x8033076C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80330770: jal         0x80034970
    // 0x80330774: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80330774: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_2:
    // 0x80330778: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8033077C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330780: nop

    // 0x80330784: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80330788: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8033078C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80330790: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80330794: jal         0x80015538
    // 0x80330798: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80330798: nop

    after_3:
    // 0x8033079C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803307A0: nop

    // 0x803307A4: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
    // 0x803307A8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803307AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803307B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803307B4: lwc1        $f18, 0x44($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X44);
    // 0x803307B8: nop

    // 0x803307BC: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x803307C0: nop

    // 0x803307C4: bc1f        L_803307E8
    if (!c1cs) {
        // 0x803307C8: nop
    
            goto L_803307E8;
    }
    // 0x803307C8: nop

    // 0x803307CC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803307D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803307D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803307D8: lwc1        $f6, 0x44($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X44);
    // 0x803307DC: nop

    // 0x803307E0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803307E4: swc1        $f10, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f10.u32l;
L_803307E8:
    // 0x803307E8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803307EC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x803307F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803307F4: lwc1        $f16, 0x48($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X48);
    // 0x803307F8: nop

    // 0x803307FC: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80330800: nop

    // 0x80330804: bc1f        L_80330828
    if (!c1cs) {
        // 0x80330808: nop
    
            goto L_80330828;
    }
    // 0x80330808: nop

    // 0x8033080C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330810: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330814: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330818: lwc1        $f4, 0x48($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X48);
    // 0x8033081C: nop

    // 0x80330820: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330824: swc1        $f8, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f8.u32l;
L_80330828:
    // 0x80330828: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033082C: nop

    // 0x80330830: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80330834: nop

    // 0x80330838: slti        $at, $t1, 0xC
    ctx->r1 = SIGNED(ctx->r9) < 0XC ? 1 : 0;
    // 0x8033083C: beq         $at, $zero, L_8033085C
    if (ctx->r1 == 0) {
        // 0x80330840: nop
    
            goto L_8033085C;
    }
    // 0x80330840: nop

    // 0x80330844: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330848: nop

    // 0x8033084C: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x80330850: nop

    // 0x80330854: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80330858: sh          $t5, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r13;
L_8033085C:
    // 0x8033085C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330860: nop

    // 0x80330864: lh          $t4, 0xA6($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XA6);
    // 0x80330868: nop

    // 0x8033086C: slti        $at, $t4, 0x10E
    ctx->r1 = SIGNED(ctx->r12) < 0X10E ? 1 : 0;
    // 0x80330870: bne         $at, $zero, L_80330884
    if (ctx->r1 != 0) {
        // 0x80330874: nop
    
            goto L_80330884;
    }
    // 0x80330874: nop

    // 0x80330878: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033087C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80330880: sb          $t8, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r24;
L_80330884:
    // 0x80330884: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033088C: lw          $a2, 0xE0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0XE0);
    // 0x80330890: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x80330894: jal         0x800BFFCC
    // 0x80330898: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800BFFCC(rdram, ctx);
        goto after_4;
    // 0x80330898: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_4:
    // 0x8033089C: bne         $v0, $zero, L_803308C8
    if (ctx->r2 != 0) {
        // 0x803308A0: nop
    
            goto L_803308C8;
    }
    // 0x803308A0: nop

    // 0x803308A4: jal         0x80014E80
    // 0x803308A8: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x803308A8: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_5:
    // 0x803308AC: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x803308B0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803308B4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803308B8: swc1        $f16, 0xE0($t0)
    MEM_W(0XE0, ctx->r8) = ctx->f16.u32l;
    // 0x803308BC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803308C0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803308C4: sb          $t1, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r9;
L_803308C8:
    // 0x803308C8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803308CC: nop

    // 0x803308D0: lwc1        $f12, 0x40($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X40);
    // 0x803308D4: jal         0x80015744
    // 0x803308D8: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_6;
    // 0x803308D8: nop

    after_6:
    // 0x803308DC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x803308E0: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x803308E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803308E8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803308EC: jal         0x80015538
    // 0x803308F0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x803308F0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_7:
    // 0x803308F4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803308F8: nop

    // 0x803308FC: swc1        $f0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f0.u32l;
    // 0x80330900: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330904: nop

    // 0x80330908: lwc1        $f18, 0x3C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8033090C: nop

    // 0x80330910: swc1        $f18, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f18.u32l;
    // 0x80330914: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033091C: jal         0x80029C40
    // 0x80330920: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x80330920: nop

    after_8:
    // 0x80330924: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330928: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033092C: jal         0x80029D04
    // 0x80330930: nop

    func_80029D04(rdram, ctx);
        goto after_9;
    // 0x80330930: nop

    after_9:
    // 0x80330934: jal         0x8033193C
    // 0x80330938: nop

    func_8033193C_unk_bin_41(rdram, ctx);
        goto after_10;
    // 0x80330938: nop

    after_10:
    // 0x8033093C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330940: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330944: lbu         $t8, 0x132($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X132);
    // 0x80330948: nop

    // 0x8033094C: bne         $t8, $at, L_80330984
    if (ctx->r24 != ctx->r1) {
        // 0x80330950: nop
    
            goto L_80330984;
    }
    // 0x80330950: nop

    // 0x80330954: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330958: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033095C: jal         0x8002A1FC
    // 0x80330960: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_11;
    // 0x80330960: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_11:
    // 0x80330964: bne         $v0, $zero, L_80330984
    if (ctx->r2 != 0) {
        // 0x80330968: nop
    
            goto L_80330984;
    }
    // 0x80330968: nop

    // 0x8033096C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330970: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80330974: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x80330978: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033097C: nop

    // 0x80330980: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330984:
    // 0x80330984: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330988: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033098C: jal         0x8002A1FC
    // 0x80330990: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_12;
    // 0x80330990: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_12:
    // 0x80330994: beq         $v0, $zero, L_803309B4
    if (ctx->r2 == 0) {
        // 0x80330998: nop
    
            goto L_803309B4;
    }
    // 0x80330998: nop

    // 0x8033099C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803309A0: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x803309A4: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803309A8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803309AC: nop

    // 0x803309B0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803309B4:
    // 0x803309B4: b           L_803309BC
    // 0x803309B8: nop

        goto L_803309BC;
    // 0x803309B8: nop

L_803309BC:
    // 0x803309BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803309C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803309C4: jr          $ra
    // 0x803309C8: nop

    return;
    // 0x803309C8: nop

;}
RECOMP_FUNC void func_8033050C_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033050C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330510: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80330514: nop

    // 0x80330518: bne         $t6, $zero, L_80330550
    if (ctx->r14 != 0) {
        // 0x8033051C: nop
    
            goto L_80330550;
    }
    // 0x8033051C: nop

    // 0x80330520: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80330524: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80330528: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033052C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330530: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330534: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330538: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033053C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330540: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330544: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80330548: b           L_8033059C
    // 0x8033054C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_8033059C;
    // 0x8033054C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_80330550:
    // 0x80330550: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330554: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80330558: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033055C: bne         $t0, $at, L_80330594
    if (ctx->r8 != ctx->r1) {
        // 0x80330560: nop
    
            goto L_80330594;
    }
    // 0x80330560: nop

    // 0x80330564: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80330568: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x8033056C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330570: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330574: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330578: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033057C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330580: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330584: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330588: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8033058C: b           L_8033059C
    // 0x80330590: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
        goto L_8033059C;
    // 0x80330590: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_80330594:
    // 0x80330594: jr          $ra
    // 0x80330598: nop

    return;
    // 0x80330598: nop

L_8033059C:
    // 0x8033059C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803305A0: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x803305A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803305A8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803305AC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803305B0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803305B4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803305B8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803305BC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803305C0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803305C4: jr          $ra
    // 0x803305C8: nop

    return;
    // 0x803305C8: nop

    // 0x803305CC: jr          $ra
    // 0x803305D0: nop

    return;
    // 0x803305D0: nop

;}
RECOMP_FUNC void func_80331E6C_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331E74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E7C: jal         0x8002B0E4
    // 0x80331E80: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80331E80: nop

    after_0:
    // 0x80331E84: b           L_80331E8C
    // 0x80331E88: nop

        goto L_80331E8C;
    // 0x80331E88: nop

L_80331E8C:
    // 0x80331E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331E94: jr          $ra
    // 0x80331E98: nop

    return;
    // 0x80331E98: nop

;}
RECOMP_FUNC void func_80331E9C_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331EA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331EA8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331EAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331EB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331EB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331EB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331EBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331EC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331EC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331EC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331ECC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331ED0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331ED4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331ED8: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x80331EDC: nop

    // 0x80331EE0: beq         $t1, $at, L_80331F20
    if (ctx->r9 == ctx->r1) {
        // 0x80331EE4: nop
    
            goto L_80331F20;
    }
    // 0x80331EE4: nop

    // 0x80331EE8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331EEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331EF0: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x80331EF4: nop

    // 0x80331EF8: bne         $t3, $at, L_80331F20
    if (ctx->r11 != ctx->r1) {
        // 0x80331EFC: nop
    
            goto L_80331F20;
    }
    // 0x80331EFC: nop

    // 0x80331F00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F08: jal         0x80029C40
    // 0x80331F0C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80331F0C: nop

    after_0:
    // 0x80331F10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F18: jal         0x80029D04
    // 0x80331F1C: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80331F1C: nop

    after_1:
L_80331F20:
    // 0x80331F20: b           L_80331F28
    // 0x80331F24: nop

        goto L_80331F28;
    // 0x80331F24: nop

L_80331F28:
    // 0x80331F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331F2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331F30: jr          $ra
    // 0x80331F34: nop

    return;
    // 0x80331F34: nop

;}
RECOMP_FUNC void func_803309CC_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803309CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803309D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803309D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803309D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803309DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803309E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803309E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803309E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803309EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803309F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803309F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803309F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803309FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330A00: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330A04: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330A08: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80330A0C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330A10: nop

    // 0x80330A14: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x80330A18: nop

    // 0x80330A1C: bne         $t2, $zero, L_80330A78
    if (ctx->r10 != 0) {
        // 0x80330A20: nop
    
            goto L_80330A78;
    }
    // 0x80330A20: nop

    // 0x80330A24: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330A28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80330A2C: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
    // 0x80330A30: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80330A34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330A38: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330A3C: nop

    // 0x80330A40: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80330A44: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80330A48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330A4C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330A50: nop

    // 0x80330A54: swc1        $f6, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f6.u32l;
    // 0x80330A58: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80330A5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330A60: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330A64: nop

    // 0x80330A68: swc1        $f8, 0xE0($t7)
    MEM_W(0XE0, ctx->r15) = ctx->f8.u32l;
    // 0x80330A6C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330A70: nop

    // 0x80330A74: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_80330A78:
    // 0x80330A78: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330A7C: nop

    // 0x80330A80: lwc1        $f10, 0x3C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80330A84: nop

    // 0x80330A88: swc1        $f10, 0xD4($t9)
    MEM_W(0XD4, ctx->r25) = ctx->f10.u32l;
    // 0x80330A8C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330A90: nop

    // 0x80330A94: lwc1        $f16, 0x40($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80330A98: nop

    // 0x80330A9C: swc1        $f16, 0xD8($t0)
    MEM_W(0XD8, ctx->r8) = ctx->f16.u32l;
    // 0x80330AA0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330AA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330AA8: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x80330AAC: nop

    // 0x80330AB0: bne         $t2, $at, L_80330AE4
    if (ctx->r10 != ctx->r1) {
        // 0x80330AB4: nop
    
            goto L_80330AE4;
    }
    // 0x80330AB4: nop

    // 0x80330AB8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330ABC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330AC0: lw          $a2, 0xE0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0XE0);
    // 0x80330AC4: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    // 0x80330AC8: jal         0x800BFFCC
    // 0x80330ACC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_800BFFCC(rdram, ctx);
        goto after_0;
    // 0x80330ACC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_0:
    // 0x80330AD0: bne         $v0, $zero, L_80330AE4
    if (ctx->r2 != 0) {
        // 0x80330AD4: nop
    
            goto L_80330AE4;
    }
    // 0x80330AD4: nop

    // 0x80330AD8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330ADC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80330AE0: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
L_80330AE4:
    // 0x80330AE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330AE8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80330AEC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330AF0: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80330AF4: jal         0x80015538
    // 0x80330AF8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80330AF8: nop

    after_1:
    // 0x80330AFC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330B00: nop

    // 0x80330B04: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x80330B08: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330B0C: nop

    // 0x80330B10: lwc1        $f12, 0x40($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X40);
    // 0x80330B14: jal         0x80015744
    // 0x80330B18: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_2;
    // 0x80330B18: nop

    after_2:
    // 0x80330B1C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80330B20: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330B24: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80330B28: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330B2C: jal         0x80015538
    // 0x80330B30: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80330B30: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_3:
    // 0x80330B34: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330B38: nop

    // 0x80330B3C: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
    // 0x80330B40: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330B44: nop

    // 0x80330B48: lwc1        $f18, 0x3C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80330B4C: nop

    // 0x80330B50: swc1        $f18, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f18.u32l;
    // 0x80330B54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B5C: jal         0x80029C40
    // 0x80330B60: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80330B60: nop

    after_4:
    // 0x80330B64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B6C: jal         0x80029D04
    // 0x80330B70: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x80330B70: nop

    after_5:
    // 0x80330B74: jal         0x8033193C
    // 0x80330B78: nop

    func_8033193C_unk_bin_41(rdram, ctx);
        goto after_6;
    // 0x80330B78: nop

    after_6:
    // 0x80330B7C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330B80: nop

    // 0x80330B84: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x80330B88: nop

    // 0x80330B8C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80330B90: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x80330B94: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330B98: nop

    // 0x80330B9C: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x80330BA0: nop

    // 0x80330BA4: slti        $at, $t5, 0xA
    ctx->r1 = SIGNED(ctx->r13) < 0XA ? 1 : 0;
    // 0x80330BA8: bne         $at, $zero, L_80330C24
    if (ctx->r1 != 0) {
        // 0x80330BAC: nop
    
            goto L_80330C24;
    }
    // 0x80330BAC: nop

    // 0x80330BB0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80330BB4: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80330BB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330BBC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330BC0: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80330BC4: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80330BC8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330BCC: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80330BD0: nop

    // 0x80330BD4: bc1f        L_80330C24
    if (!c1cs) {
        // 0x80330BD8: nop
    
            goto L_80330C24;
    }
    // 0x80330BD8: nop

    // 0x80330BDC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330BE0: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80330BE4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330BE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330BEC: nop

    // 0x80330BF0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80330BF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BFC: jal         0x8002A1FC
    // 0x80330C00: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x80330C00: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_7:
    // 0x80330C04: bne         $v0, $zero, L_80330C24
    if (ctx->r2 != 0) {
        // 0x80330C08: nop
    
            goto L_80330C24;
    }
    // 0x80330C08: nop

    // 0x80330C0C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330C10: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80330C14: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80330C18: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330C1C: nop

    // 0x80330C20: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330C24:
    // 0x80330C24: b           L_80330C2C
    // 0x80330C28: nop

        goto L_80330C2C;
    // 0x80330C28: nop

L_80330C2C:
    // 0x80330C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330C30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330C34: jr          $ra
    // 0x80330C38: nop

    return;
    // 0x80330C38: nop

;}
RECOMP_FUNC void func_803310A0_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803310A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803310A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803310A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803310AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803310B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803310B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803310B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803310BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803310C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803310C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803310C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803310CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803310D0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803310D4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803310D8: nop

    // 0x803310DC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803310E0: nop

    // 0x803310E4: bne         $t1, $zero, L_8033112C
    if (ctx->r9 != 0) {
        // 0x803310E8: nop
    
            goto L_8033112C;
    }
    // 0x803310E8: nop

    // 0x803310EC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803310F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803310F4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803310F8: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x803310FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331100: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331104: nop

    // 0x80331108: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033110C: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80331110: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331114: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331118: nop

    // 0x8033111C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80331120: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331124: nop

    // 0x80331128: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_8033112C:
    // 0x8033112C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331130: nop

    // 0x80331134: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80331138: nop

    // 0x8033113C: swc1        $f8, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f8.u32l;
    // 0x80331140: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331144: nop

    // 0x80331148: lwc1        $f10, 0x40($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X40);
    // 0x8033114C: nop

    // 0x80331150: swc1        $f10, 0xD8($t8)
    MEM_W(0XD8, ctx->r24) = ctx->f10.u32l;
    // 0x80331154: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331158: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033115C: jal         0x80029C40
    // 0x80331160: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80331160: nop

    after_0:
    // 0x80331164: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331168: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033116C: jal         0x80029D04
    // 0x80331170: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80331170: nop

    after_1:
    // 0x80331174: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331178: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033117C: jal         0x8002A8B4
    // 0x80331180: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80331180: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_2:
    // 0x80331184: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033118C: jal         0x8002A9A4
    // 0x80331190: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A9A4(rdram, ctx);
        goto after_3;
    // 0x80331190: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_3:
    // 0x80331194: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331198: nop

    // 0x8033119C: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x803311A0: jal         0x80015744
    // 0x803311A4: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_4;
    // 0x803311A4: nop

    after_4:
    // 0x803311A8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x803311AC: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803311B0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803311B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803311B8: jal         0x80015538
    // 0x803311BC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803311BC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_5:
    // 0x803311C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803311C4: nop

    // 0x803311C8: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
    // 0x803311CC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803311D0: nop

    // 0x803311D4: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803311D8: nop

    // 0x803311DC: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    // 0x803311E0: jal         0x8033193C
    // 0x803311E4: nop

    func_8033193C_unk_bin_41(rdram, ctx);
        goto after_6;
    // 0x803311E4: nop

    after_6:
    // 0x803311E8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803311EC: nop

    // 0x803311F0: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x803311F4: nop

    // 0x803311F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803311FC: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x80331200: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331208: jal         0x8002A1FC
    // 0x8033120C: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x8033120C: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_7:
    // 0x80331210: bne         $v0, $zero, L_80331230
    if (ctx->r2 != 0) {
        // 0x80331214: nop
    
            goto L_80331230;
    }
    // 0x80331214: nop

    // 0x80331218: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033121C: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x80331220: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80331224: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331228: nop

    // 0x8033122C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80331230:
    // 0x80331230: b           L_80331238
    // 0x80331234: nop

        goto L_80331238;
    // 0x80331234: nop

L_80331238:
    // 0x80331238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033123C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331240: jr          $ra
    // 0x80331244: nop

    return;
    // 0x80331244: nop

;}
RECOMP_FUNC void func_8033193C_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033193C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331940: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331944: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331948: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033194C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331950: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331954: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331958: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033195C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331960: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331964: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331968: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033196C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331970: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331974: sb          $zero, 0x29($sp)
    MEM_B(0X29, ctx->r29) = 0;
    // 0x80331978: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033197C: nop

    // 0x80331980: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x80331984: nop

    // 0x80331988: blez        $t1, L_803319D0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8033198C: sh          $t1, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r9;
            goto L_803319D0;
    }
    // 0x8033198C: sh          $t1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r9;
L_80331990:
    // 0x80331990: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80331994: jal         0x803319F4
    // 0x80331998: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_803319F4_unk_bin_41(rdram, ctx);
        goto after_0;
    // 0x80331998: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_0:
    // 0x8033199C: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x803319A0: lb          $t3, 0x29($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X29);
    // 0x803319A4: sra         $t2, $s0, 16
    ctx->r10 = S32(SIGNED(ctx->r16) >> 16);
    // 0x803319A8: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x803319AC: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x803319B0: sb          $t4, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r12;
    // 0x803319B4: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x803319B8: nop

    // 0x803319BC: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x803319C0: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x803319C4: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803319C8: bgtz        $t8, L_80331990
    if (SIGNED(ctx->r24) > 0) {
        // 0x803319CC: sh          $t6, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r14;
            goto L_80331990;
    }
    // 0x803319CC: sh          $t6, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r14;
L_803319D0:
    // 0x803319D0: lb          $v0, 0x29($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X29);
    // 0x803319D4: b           L_803319E4
    // 0x803319D8: nop

        goto L_803319E4;
    // 0x803319D8: nop

    // 0x803319DC: b           L_803319E4
    // 0x803319E0: nop

        goto L_803319E4;
    // 0x803319E0: nop

L_803319E4:
    // 0x803319E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803319E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803319EC: jr          $ra
    // 0x803319F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803319F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330000_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330040: addiu       $a1, $a1, 0x3C7C
    ctx->r5 = ADD32(ctx->r5, 0X3C7C);
    // 0x80330044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033004C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
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
    // 0x80330060: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80330064: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80330068: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033006C: beq         $t1, $at, L_8033022C
    if (ctx->r9 == ctx->r1) {
        // 0x80330070: nop
    
            goto L_8033022C;
    }
    // 0x80330070: nop

    // 0x80330074: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x80330078: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033007C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330080: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330084: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330088: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033008C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330090: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330094: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80330098: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x8033009C: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x803300A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300A4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803300A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803300B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300B4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803300B8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803300BC: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x803300C0: sh          $t5, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r13;
    // 0x803300C4: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x803300C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300CC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803300D0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803300D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803300D8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803300DC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803300E0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803300E4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803300E8: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x803300EC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x803300F0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803300F4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803300F8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803300FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330100: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330104: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330108: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033010C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330110: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80330114: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x80330118: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8033011C: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80330120: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330124: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330128: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033012C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330130: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330134: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330138: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033013C: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x80330140: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x80330144: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80330148: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x8033014C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80330150: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330154: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330158: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8033015C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330160: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330164: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330168: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x8033016C: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x80330170: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330174: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80330178: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033017C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330180: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330184: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330188: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033018C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330190: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330194: swc1        $f10, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f10.u32l;
    // 0x80330198: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x8033019C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x803301A0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803301A4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803301A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803301AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803301B0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803301B4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803301B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301BC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803301C0: swc1        $f16, 0x4198($at)
    MEM_W(0X4198, ctx->r1) = ctx->f16.u32l;
    // 0x803301C4: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x803301C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301CC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803301D0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803301D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803301D8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803301DC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803301E0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803301E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803301E8: sh          $t0, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r8;
    // 0x803301EC: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x803301F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803301F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803301F8: jal         0x80019448
    // 0x803301FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x803301FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80330200: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80330204: jal         0x80330244
    // 0x80330208: nop

    func_80330244_unk_bin_41(rdram, ctx);
        goto after_2;
    // 0x80330208: nop

    after_2:
    // 0x8033020C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80330210: addiu       $t2, $t2, 0x7490
    ctx->r10 = ADD32(ctx->r10, 0X7490);
    // 0x80330214: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80330218: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033021C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330224: jal         0x8001C0EC
    // 0x80330228: addiu       $a3, $zero, 0x118
    ctx->r7 = ADD32(0, 0X118);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80330228: addiu       $a3, $zero, 0x118
    ctx->r7 = ADD32(0, 0X118);
    after_3:
L_8033022C:
    // 0x8033022C: b           L_80330234
    // 0x80330230: nop

        goto L_80330234;
    // 0x80330230: nop

L_80330234:
    // 0x80330234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033023C: jr          $ra
    // 0x80330240: nop

    return;
    // 0x80330240: nop

;}
RECOMP_FUNC void func_803319F4_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803319F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x803319F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803319FC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80331A00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331A04: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331A08: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331A0C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A20: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A24: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A28: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A2C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80331A30: lh          $t1, 0x4A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4A);
    // 0x80331A34: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80331A38: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80331A3C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80331A40: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x80331A44: nop

    // 0x80331A48: sh          $t4, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r12;
    // 0x80331A4C: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x80331A50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331A54: beq         $t5, $at, L_80331D04
    if (ctx->r13 == ctx->r1) {
        // 0x80331A58: nop
    
            goto L_80331D04;
    }
    // 0x80331A58: nop

    // 0x80331A5C: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x80331A60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A80: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80331A84: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80331A88: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331A8C: lh          $t0, 0xA8($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XA8);
    // 0x80331A90: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331A94: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80331A98: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331A9C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331AA0: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331AA4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331AA8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80331AAC: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x80331AB0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80331AB4: nop

    // 0x80331AB8: lwc1        $f12, 0x40($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X40);
    // 0x80331ABC: jal         0x80015744
    // 0x80331AC0: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_0;
    // 0x80331AC0: nop

    after_0:
    // 0x80331AC4: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80331AC8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331ACC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80331AD0: lwc1        $f9, 0x1F50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1F50);
    // 0x80331AD4: lwc1        $f8, 0x1F54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1F54);
    // 0x80331AD8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331ADC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80331AE0: jal         0x80036570
    // 0x80331AE4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80331AE4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80331AE8: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80331AEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331AF0: nop

    // 0x80331AF4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80331AF8: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x80331AFC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B00: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80331B04: lwc1        $f9, 0x1F58($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1F58);
    // 0x80331B08: lwc1        $f8, 0x1F5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1F5C);
    // 0x80331B0C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331B10: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80331B14: jal         0x80034970
    // 0x80331B18: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80331B18: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x80331B1C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80331B20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331B24: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331B28: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80331B2C: swc1        $f18, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f18.u32l;
    // 0x80331B30: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80331B34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331B38: nop

    // 0x80331B3C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x80331B40: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331B44: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80331B48: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80331B4C: nop

    // 0x80331B50: bne         $t8, $at, L_80331B78
    if (ctx->r24 != ctx->r1) {
        // 0x80331B54: nop
    
            goto L_80331B78;
    }
    // 0x80331B54: nop

    // 0x80331B58: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80331B5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331B60: nop

    // 0x80331B64: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80331B68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331B6C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80331B70: nop

    // 0x80331B74: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
L_80331B78:
    // 0x80331B78: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80331B7C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331B80: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331B84: lwc1        $f12, 0xD4($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x80331B88: jal         0x80015538
    // 0x80331B8C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80331B8C: nop

    after_3:
    // 0x80331B90: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80331B94: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B98: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80331B9C: lwc1        $f19, 0x1F60($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1F60);
    // 0x80331BA0: lwc1        $f18, 0x1F64($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1F64);
    // 0x80331BA4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80331BA8: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80331BAC: jal         0x80034970
    // 0x80331BB0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x80331BB0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x80331BB4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80331BB8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331BBC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80331BC0: swc1        $f8, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f8.u32l;
    // 0x80331BC4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331BC8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80331BCC: lwc1        $f19, 0x1F68($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1F68);
    // 0x80331BD0: lwc1        $f18, 0x1F6C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1F6C);
    // 0x80331BD4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80331BD8: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80331BDC: jal         0x80036570
    // 0x80331BE0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_5;
    // 0x80331BE0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_5:
    // 0x80331BE4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80331BE8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80331BEC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80331BF0: swc1        $f8, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f8.u32l;
    // 0x80331BF4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331BF8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80331BFC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331C00: lwc1        $f10, 0x28($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80331C04: nop

    // 0x80331C08: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80331C0C: swc1        $f18, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f18.u32l;
    // 0x80331C10: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80331C14: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331C18: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80331C1C: lwc1        $f6, 0x24($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X24);
    // 0x80331C20: nop

    // 0x80331C24: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331C28: swc1        $f8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f8.u32l;
    // 0x80331C2C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80331C30: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80331C34: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80331C38: lwc1        $f16, 0x2C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80331C3C: nop

    // 0x80331C40: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80331C44: swc1        $f18, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f18.u32l;
    // 0x80331C48: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80331C4C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80331C50: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80331C54: lwc1        $f6, 0x28($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80331C58: nop

    // 0x80331C5C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331C60: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
    // 0x80331C64: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80331C68: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331C6C: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80331C70: nop

    // 0x80331C74: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x80331C78: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80331C7C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331C80: lwc1        $f16, 0x18($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X18);
    // 0x80331C84: nop

    // 0x80331C88: swc1        $f16, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f16.u32l;
    // 0x80331C8C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80331C90: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331C94: lwc1        $f18, 0x3C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80331C98: nop

    // 0x80331C9C: swc1        $f18, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f18.u32l;
    // 0x80331CA0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80331CA4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80331CA8: lwc1        $f4, 0x40($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80331CAC: nop

    // 0x80331CB0: swc1        $f4, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f4.u32l;
    // 0x80331CB4: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80331CB8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80331CBC: lwc1        $f6, 0x44($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80331CC0: nop

    // 0x80331CC4: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x80331CC8: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80331CCC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331CD0: lwc1        $f8, 0x48($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X48);
    // 0x80331CD4: nop

    // 0x80331CD8: swc1        $f8, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f8.u32l;
    // 0x80331CDC: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80331CE0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331CE4: lwc1        $f10, 0xD4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x80331CE8: nop

    // 0x80331CEC: swc1        $f10, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f10.u32l;
    // 0x80331CF0: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80331CF4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331CF8: lwc1        $f16, 0xD8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XD8);
    // 0x80331CFC: nop

    // 0x80331D00: swc1        $f16, 0xD8($t5)
    MEM_W(0XD8, ctx->r13) = ctx->f16.u32l;
L_80331D04:
    // 0x80331D04: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x80331D08: nop

    // 0x80331D0C: sltu        $t7, $zero, $t6
    ctx->r15 = 0 < ctx->r14 ? 1 : 0;
    // 0x80331D10: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x80331D14: beq         $t8, $zero, L_80331D24
    if (ctx->r24 == 0) {
        // 0x80331D18: nop
    
            goto L_80331D24;
    }
    // 0x80331D18: nop

    // 0x80331D1C: b           L_80331D28
    // 0x80331D20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80331D28;
    // 0x80331D20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80331D24:
    // 0x80331D24: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80331D28:
    // 0x80331D28: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x80331D2C: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80331D30: b           L_80331D40
    // 0x80331D34: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_80331D40;
    // 0x80331D34: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80331D38: b           L_80331D40
    // 0x80331D3C: nop

        goto L_80331D40;
    // 0x80331D3C: nop

L_80331D40:
    // 0x80331D40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80331D48: jr          $ra
    // 0x80331D4C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80331D4C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80331248_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331248: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033124C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331250: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331254: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331258: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033125C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331260: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331264: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331268: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033126C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331270: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331274: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331278: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033127C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331280: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331284: nop

    // 0x80331288: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033128C: nop

    // 0x80331290: bne         $t1, $zero, L_80331328
    if (ctx->r9 != 0) {
        // 0x80331294: nop
    
            goto L_80331328;
    }
    // 0x80331294: nop

    // 0x80331298: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033129C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803312A0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803312A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803312A8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803312AC: nop

    // 0x803312B0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803312B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803312B8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803312BC: nop

    // 0x803312C0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803312C4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803312C8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803312CC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803312D0: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803312D4: jal         0x80015538
    // 0x803312D8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803312D8: nop

    after_0:
    // 0x803312DC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803312E0: nop

    // 0x803312E4: swc1        $f0, 0xDC($t7)
    MEM_W(0XDC, ctx->r15) = ctx->f0.u32l;
    // 0x803312E8: jal         0x80014E80
    // 0x803312EC: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x803312EC: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    after_1:
    // 0x803312F0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803312F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803312F8: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x803312FC: lwc1        $f12, 0xDC($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0XDC);
    // 0x80331300: jal         0x80015538
    // 0x80331304: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80331304: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_2:
    // 0x80331308: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033130C: nop

    // 0x80331310: swc1        $f0, 0xDC($t9)
    MEM_W(0XDC, ctx->r25) = ctx->f0.u32l;
    // 0x80331314: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80331318: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033131C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331320: nop

    // 0x80331324: swc1        $f10, 0xE0($t0)
    MEM_W(0XE0, ctx->r8) = ctx->f10.u32l;
L_80331328:
    // 0x80331328: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033132C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331330: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x80331334: nop

    // 0x80331338: bne         $t2, $at, L_80331380
    if (ctx->r10 != ctx->r1) {
        // 0x8033133C: nop
    
            goto L_80331380;
    }
    // 0x8033133C: nop

    // 0x80331340: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331344: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331348: lw          $a2, 0xE0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0XE0);
    // 0x8033134C: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    // 0x80331350: jal         0x800BFFCC
    // 0x80331354: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_800BFFCC(rdram, ctx);
        goto after_3;
    // 0x80331354: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_3:
    // 0x80331358: bne         $v0, $zero, L_80331380
    if (ctx->r2 != 0) {
        // 0x8033135C: nop
    
            goto L_80331380;
    }
    // 0x8033135C: nop

    // 0x80331360: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331364: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331368: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033136C: nop

    // 0x80331370: swc1        $f16, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f16.u32l;
    // 0x80331374: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331378: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8033137C: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
L_80331380:
    // 0x80331380: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331384: nop

    // 0x80331388: lwc1        $f18, 0x3C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x8033138C: nop

    // 0x80331390: swc1        $f18, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f18.u32l;
    // 0x80331394: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331398: nop

    // 0x8033139C: lwc1        $f4, 0x40($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X40);
    // 0x803313A0: nop

    // 0x803313A4: swc1        $f4, 0xD8($t8)
    MEM_W(0XD8, ctx->r24) = ctx->f4.u32l;
    // 0x803313A8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803313AC: nop

    // 0x803313B0: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x803313B4: jal         0x80015744
    // 0x803313B8: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_4;
    // 0x803313B8: nop

    after_4:
    // 0x803313BC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x803313C0: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803313C4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803313C8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803313CC: jal         0x80015538
    // 0x803313D0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803313D0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_5:
    // 0x803313D4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803313D8: nop

    // 0x803313DC: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
    // 0x803313E0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803313E4: nop

    // 0x803313E8: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803313EC: nop

    // 0x803313F0: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
    // 0x803313F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313FC: jal         0x80029C40
    // 0x80331400: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x80331400: nop

    after_6:
    // 0x80331404: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331408: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033140C: jal         0x80029D04
    // 0x80331410: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x80331410: nop

    after_7:
    // 0x80331414: jal         0x8033193C
    // 0x80331418: nop

    func_8033193C_unk_bin_41(rdram, ctx);
        goto after_8;
    // 0x80331418: nop

    after_8:
    // 0x8033141C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331420: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x80331424: lw          $a1, 0xDC($t2)
    ctx->r5 = MEM_W(ctx->r10, 0XDC);
    // 0x80331428: jal         0x800BFF20
    // 0x8033142C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_800BFF20(rdram, ctx);
        goto after_9;
    // 0x8033142C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_9:
    // 0x80331430: bne         $v0, $zero, L_8033145C
    if (ctx->r2 != 0) {
        // 0x80331434: nop
    
            goto L_8033145C;
    }
    // 0x80331434: nop

    // 0x80331438: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033143C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80331440: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80331444: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331448: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x8033144C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80331450: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331454: nop

    // 0x80331458: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8033145C:
    // 0x8033145C: b           L_80331464
    // 0x80331460: nop

        goto L_80331464;
    // 0x80331460: nop

L_80331464:
    // 0x80331464: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331468: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033146C: jr          $ra
    // 0x80331470: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80331470: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331D50_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331D58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331D60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331D68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331D70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331D78: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331D7C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80331D80: nop

    // 0x80331D84: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80331D88: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D8C: nop

    // 0x80331D90: addiu       $t0, $t9, -0x2
    ctx->r8 = ADD32(ctx->r25, -0X2);
    // 0x80331D94: sltiu       $at, $t0, 0x7
    ctx->r1 = ctx->r8 < 0X7 ? 1 : 0;
    // 0x80331D98: beq         $at, $zero, L_80331E2C
    if (ctx->r1 == 0) {
        // 0x80331D9C: nop
    
            goto L_80331E2C;
    }
    // 0x80331D9C: nop

    // 0x80331DA0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331DA4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331DA8: addu        $at, $at, $t0
    gpr jr_addend_80331DB4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331DAC: lw          $t0, 0x1F70($at)
    ctx->r8 = ADD32(ctx->r1, 0X1F70);
    // 0x80331DB0: nop

    // 0x80331DB4: jr          $t0
    // 0x80331DB8: nop

    switch (jr_addend_80331DB4 >> 2) {
        case 0: goto L_80331DEC; break;
        case 1: goto L_80331E0C; break;
        case 2: goto L_80331E1C; break;
        case 3: goto L_80331DFC; break;
        case 4: goto L_80331DCC; break;
        case 5: goto L_80331DDC; break;
        case 6: goto L_80331DBC; break;
        default: switch_error(__func__, 0x80331DB4, 0x80331F70);
    }
    // 0x80331DB8: nop

L_80331DBC:
    // 0x80331DBC: jal         0x803305D4
    // 0x80331DC0: nop

    func_803305D4_unk_bin_41(rdram, ctx);
        goto after_0;
    // 0x80331DC0: nop

    after_0:
    // 0x80331DC4: b           L_80331E34
    // 0x80331DC8: nop

        goto L_80331E34;
    // 0x80331DC8: nop

L_80331DCC:
    // 0x80331DCC: jal         0x80330C3C
    // 0x80331DD0: nop

    func_80330C3C_unk_bin_41(rdram, ctx);
        goto after_1;
    // 0x80331DD0: nop

    after_1:
    // 0x80331DD4: b           L_80331E34
    // 0x80331DD8: nop

        goto L_80331E34;
    // 0x80331DD8: nop

L_80331DDC:
    // 0x80331DDC: jal         0x803309CC
    // 0x80331DE0: nop

    func_803309CC_unk_bin_41(rdram, ctx);
        goto after_2;
    // 0x80331DE0: nop

    after_2:
    // 0x80331DE4: b           L_80331E34
    // 0x80331DE8: nop

        goto L_80331E34;
    // 0x80331DE8: nop

L_80331DEC:
    // 0x80331DEC: jal         0x803310A0
    // 0x80331DF0: nop

    func_803310A0_unk_bin_41(rdram, ctx);
        goto after_3;
    // 0x80331DF0: nop

    after_3:
    // 0x80331DF4: b           L_80331E34
    // 0x80331DF8: nop

        goto L_80331E34;
    // 0x80331DF8: nop

L_80331DFC:
    // 0x80331DFC: jal         0x80331248
    // 0x80331E00: nop

    func_80331248_unk_bin_41(rdram, ctx);
        goto after_4;
    // 0x80331E00: nop

    after_4:
    // 0x80331E04: b           L_80331E34
    // 0x80331E08: nop

        goto L_80331E34;
    // 0x80331E08: nop

L_80331E0C:
    // 0x80331E0C: jal         0x80331474
    // 0x80331E10: nop

    func_80331474_unk_bin_41(rdram, ctx);
        goto after_5;
    // 0x80331E10: nop

    after_5:
    // 0x80331E14: b           L_80331E34
    // 0x80331E18: nop

        goto L_80331E34;
    // 0x80331E18: nop

L_80331E1C:
    // 0x80331E1C: jal         0x8033168C
    // 0x80331E20: nop

    func_8033168C_unk_bin_41(rdram, ctx);
        goto after_6;
    // 0x80331E20: nop

    after_6:
    // 0x80331E24: b           L_80331E34
    // 0x80331E28: nop

        goto L_80331E34;
    // 0x80331E28: nop

L_80331E2C:
    // 0x80331E2C: b           L_80331E34
    // 0x80331E30: nop

        goto L_80331E34;
    // 0x80331E30: nop

L_80331E34:
    // 0x80331E34: b           L_80331E3C
    // 0x80331E38: nop

        goto L_80331E3C;
    // 0x80331E38: nop

L_80331E3C:
    // 0x80331E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331E40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331E44: jr          $ra
    // 0x80331E48: nop

    return;
    // 0x80331E48: nop

;}
RECOMP_FUNC void func_80331474_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331474: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033147C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331480: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331484: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331488: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033148C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331490: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331494: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331498: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033149C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803314A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803314A4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803314A8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803314AC: nop

    // 0x803314B0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803314B4: nop

    // 0x803314B8: bne         $t1, $zero, L_80331588
    if (ctx->r9 != 0) {
        // 0x803314BC: nop
    
            goto L_80331588;
    }
    // 0x803314BC: nop

    // 0x803314C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803314C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803314C8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803314CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803314D0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803314D4: nop

    // 0x803314D8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803314DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803314E0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803314E4: nop

    // 0x803314E8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803314EC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803314F0: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x803314F4: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
    // 0x803314F8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803314FC: nop

    // 0x80331500: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x80331504: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80331508: sh          $zero, 0x18($sp)
    MEM_H(0X18, ctx->r29) = 0;
    // 0x8033150C: lh          $t0, 0xB0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB0);
    // 0x80331510: nop

    // 0x80331514: blez        $t0, L_80331588
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80331518: nop
    
            goto L_80331588;
    }
    // 0x80331518: nop

L_8033151C:
    // 0x8033151C: lh          $t2, 0x18($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X18);
    // 0x80331520: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80331524: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80331528: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8033152C: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x80331530: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331534: beq         $t5, $at, L_80331560
    if (ctx->r13 == ctx->r1) {
        // 0x80331538: sh          $t5, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r13;
            goto L_80331560;
    }
    // 0x80331538: sh          $t5, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r13;
    // 0x8033153C: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x80331540: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331544: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331548: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033154C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331550: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331554: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331558: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033155C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80331560:
    // 0x80331560: lh          $t8, 0x18($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X18);
    // 0x80331564: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80331568: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033156C: sh          $t9, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r25;
    // 0x80331570: lh          $t3, 0xB0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB0);
    // 0x80331574: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x80331578: sra         $t2, $t0, 16
    ctx->r10 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8033157C: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80331580: bne         $at, $zero, L_8033151C
    if (ctx->r1 != 0) {
        // 0x80331584: nop
    
            goto L_8033151C;
    }
    // 0x80331584: nop

L_80331588:
    // 0x80331588: jal         0x8033193C
    // 0x8033158C: nop

    func_8033193C_unk_bin_41(rdram, ctx);
        goto after_0;
    // 0x8033158C: nop

    after_0:
    // 0x80331590: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331594: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331598: jal         0x80029C40
    // 0x8033159C: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x8033159C: nop

    after_1:
    // 0x803315A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315A8: jal         0x80029D04
    // 0x803315AC: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x803315AC: nop

    after_2:
    // 0x803315B0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803315B4: nop

    // 0x803315B8: lh          $t5, 0xB2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB2);
    // 0x803315BC: nop

    // 0x803315C0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x803315C4: sh          $t6, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = ctx->r14;
    // 0x803315C8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803315CC: nop

    // 0x803315D0: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x803315D4: nop

    // 0x803315D8: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x803315DC: bne         $t9, $zero, L_80331674
    if (ctx->r25 != 0) {
        // 0x803315E0: nop
    
            goto L_80331674;
    }
    // 0x803315E0: nop

    // 0x803315E4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803315E8: nop

    // 0x803315EC: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x803315F0: nop

    // 0x803315F4: bltz        $t1, L_80331664
    if (SIGNED(ctx->r9) < 0) {
        // 0x803315F8: nop
    
            goto L_80331664;
    }
    // 0x803315F8: nop

    // 0x803315FC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331600: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331604: lh          $t3, 0xB0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB0);
    // 0x80331608: nop

    // 0x8033160C: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x80331610: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x80331614: lh          $t4, 0xE8($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XE8);
    // 0x80331618: nop

    // 0x8033161C: beq         $t4, $at, L_80331648
    if (ctx->r12 == ctx->r1) {
        // 0x80331620: sh          $t4, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r12;
            goto L_80331648;
    }
    // 0x80331620: sh          $t4, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r12;
    // 0x80331624: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80331628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033162C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331630: lh          $a1, 0xB0($t7)
    ctx->r5 = MEM_H(ctx->r15, 0XB0);
    // 0x80331634: jal         0x800281A4
    // 0x80331638: nop

    func_800281A4(rdram, ctx);
        goto after_3;
    // 0x80331638: nop

    after_3:
    // 0x8033163C: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80331640: jal         0x8002B0E4
    // 0x80331644: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x80331644: nop

    after_4:
L_80331648:
    // 0x80331648: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033164C: nop

    // 0x80331650: lh          $t9, 0xB0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB0);
    // 0x80331654: nop

    // 0x80331658: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8033165C: b           L_80331674
    // 0x80331660: sh          $t0, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r8;
        goto L_80331674;
    // 0x80331660: sh          $t0, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r8;
L_80331664:
    // 0x80331664: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033166C: jal         0x8002B0E4
    // 0x80331670: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x80331670: nop

    after_5:
L_80331674:
    // 0x80331674: b           L_8033167C
    // 0x80331678: nop

        goto L_8033167C;
    // 0x80331678: nop

L_8033167C:
    // 0x8033167C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331680: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331684: jr          $ra
    // 0x80331688: nop

    return;
    // 0x80331688: nop

;}
RECOMP_FUNC void func_80331E5C_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E5C: jr          $ra
    // 0x80331E60: nop

    return;
    // 0x80331E60: nop

    // 0x80331E64: jr          $ra
    // 0x80331E68: nop

    return;
    // 0x80331E68: nop

;}
RECOMP_FUNC void func_8033168C_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033168C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331694: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331698: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033169C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803316A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803316A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803316A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803316B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803316B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803316BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803316C0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803316C4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803316C8: nop

    // 0x803316CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803316D0: nop

    // 0x803316D4: bne         $t1, $zero, L_80331778
    if (ctx->r9 != 0) {
        // 0x803316D8: nop
    
            goto L_80331778;
    }
    // 0x803316D8: nop

    // 0x803316DC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803316E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803316E4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803316E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803316EC: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x803316F0: sh          $t4, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r12;
    // 0x803316F4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803316F8: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x803316FC: lh          $t7, 0xB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB0);
    // 0x80331700: nop

    // 0x80331704: blez        $t7, L_80331778
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80331708: nop
    
            goto L_80331778;
    }
    // 0x80331708: nop

L_8033170C:
    // 0x8033170C: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80331710: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331714: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80331718: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8033171C: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x80331720: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331724: beq         $t2, $at, L_80331750
    if (ctx->r10 == ctx->r1) {
        // 0x80331728: sh          $t2, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r10;
            goto L_80331750;
    }
    // 0x80331728: sh          $t2, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r10;
    // 0x8033172C: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x80331730: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331734: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331738: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033173C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331740: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331744: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331748: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033174C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80331750:
    // 0x80331750: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x80331754: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331758: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8033175C: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
    // 0x80331760: lh          $t0, 0xB0($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XB0);
    // 0x80331764: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80331768: sra         $t9, $t7, 16
    ctx->r25 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8033176C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80331770: bne         $at, $zero, L_8033170C
    if (ctx->r1 != 0) {
        // 0x80331774: nop
    
            goto L_8033170C;
    }
    // 0x80331774: nop

L_80331778:
    // 0x80331778: jal         0x8033193C
    // 0x8033177C: nop

    func_8033193C_unk_bin_41(rdram, ctx);
        goto after_0;
    // 0x8033177C: nop

    after_0:
    // 0x80331780: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331784: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331788: jal         0x80029C40
    // 0x8033178C: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x8033178C: nop

    after_1:
    // 0x80331790: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331798: jal         0x80029D04
    // 0x8033179C: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x8033179C: nop

    after_2:
    // 0x803317A0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803317A4: nop

    // 0x803317A8: lh          $s0, 0x108($t1)
    ctx->r16 = MEM_H(ctx->r9, 0X108);
    // 0x803317AC: nop

    // 0x803317B0: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x803317B4: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x803317B8: sltiu       $t3, $s0, 0x1
    ctx->r11 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803317BC: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x803317C0: sh          $s0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r16;
    // 0x803317C4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803317C8: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x803317CC: lh          $t5, 0xB0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB0);
    // 0x803317D0: nop

    // 0x803317D4: blez        $t5, L_80331834
    if (SIGNED(ctx->r13) <= 0) {
        // 0x803317D8: nop
    
            goto L_80331834;
    }
    // 0x803317D8: nop

L_803317DC:
    // 0x803317DC: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x803317E0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803317E4: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x803317E8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x803317EC: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x803317F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803317F4: beq         $t0, $at, L_8033180C
    if (ctx->r8 == ctx->r1) {
        // 0x803317F8: sh          $t0, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r8;
            goto L_8033180C;
    }
    // 0x803317F8: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
    // 0x803317FC: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80331800: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x80331804: jal         0x8001BB34
    // 0x80331808: nop

    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80331808: nop

    after_3:
L_8033180C:
    // 0x8033180C: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80331810: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331814: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80331818: sh          $t2, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r10;
    // 0x8033181C: lh          $t7, 0xB0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB0);
    // 0x80331820: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80331824: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80331828: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8033182C: bne         $at, $zero, L_803317DC
    if (ctx->r1 != 0) {
        // 0x80331830: nop
    
            goto L_803317DC;
    }
    // 0x80331830: nop

L_80331834:
    // 0x80331834: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331838: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033183C: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x80331840: jal         0x8001BB34
    // 0x80331844: nop

    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80331844: nop

    after_4:
    // 0x80331848: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033184C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331850: lh          $t8, 0x108($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X108);
    // 0x80331854: nop

    // 0x80331858: bne         $t8, $at, L_80331924
    if (ctx->r24 != ctx->r1) {
        // 0x8033185C: nop
    
            goto L_80331924;
    }
    // 0x8033185C: nop

    // 0x80331860: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331864: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80331868: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x8033186C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331870: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x80331874: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80331878: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033187C: nop

    // 0x80331880: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80331884: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331888: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x8033188C: lh          $t4, 0xB0($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XB0);
    // 0x80331890: nop

    // 0x80331894: blez        $t4, L_80331914
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80331898: nop
    
            goto L_80331914;
    }
    // 0x80331898: nop

L_8033189C:
    // 0x8033189C: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x803318A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803318A4: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x803318A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803318AC: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x803318B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803318B4: beq         $t0, $at, L_803318EC
    if (ctx->r8 == ctx->r1) {
        // 0x803318B8: sh          $t0, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r8;
            goto L_803318EC;
    }
    // 0x803318B8: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
    // 0x803318BC: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x803318C0: jal         0x8001BB34
    // 0x803318C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x803318C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x803318C8: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x803318CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803318D0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803318D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803318D8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803318DC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803318E0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803318E4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803318E8: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_803318EC:
    // 0x803318EC: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x803318F0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803318F4: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x803318F8: sh          $t5, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r13;
    // 0x803318FC: lh          $t8, 0xB0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB0);
    // 0x80331900: sll         $t4, $t5, 16
    ctx->r12 = S32(ctx->r13 << 16);
    // 0x80331904: sra         $t6, $t4, 16
    ctx->r14 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80331908: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8033190C: bne         $at, $zero, L_8033189C
    if (ctx->r1 != 0) {
        // 0x80331910: nop
    
            goto L_8033189C;
    }
    // 0x80331910: nop

L_80331914:
    // 0x80331914: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033191C: jal         0x8001BB34
    // 0x80331920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x80331920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_80331924:
    // 0x80331924: b           L_8033192C
    // 0x80331928: nop

        goto L_8033192C;
    // 0x80331928: nop

L_8033192C:
    // 0x8033192C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331930: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80331934: jr          $ra
    // 0x80331938: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80331938: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330C3C_unk_bin_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330C40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330C44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330C48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330C4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330C50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330C54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330C68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330C6C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330C70: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330C74: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330C78: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80330C7C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C80: nop

    // 0x80330C84: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x80330C88: nop

    // 0x80330C8C: bne         $t2, $zero, L_80330D18
    if (ctx->r10 != 0) {
        // 0x80330C90: nop
    
            goto L_80330D18;
    }
    // 0x80330C90: nop

    // 0x80330C94: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C98: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80330C9C: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
    // 0x80330CA0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CA4: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x80330CA8: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80330CAC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80330CB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330CB4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CB8: nop

    // 0x80330CBC: swc1        $f4, 0xE0($t7)
    MEM_W(0XE0, ctx->r15) = ctx->f4.u32l;
    // 0x80330CC0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330CC8: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x80330CCC: nop

    // 0x80330CD0: bne         $t9, $at, L_80330D0C
    if (ctx->r25 != ctx->r1) {
        // 0x80330CD4: nop
    
            goto L_80330D0C;
    }
    // 0x80330CD4: nop

    // 0x80330CD8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330CDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330CE0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CE4: nop

    // 0x80330CE8: swc1        $f6, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f6.u32l;
    // 0x80330CEC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80330CF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330CF4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CF8: nop

    // 0x80330CFC: swc1        $f8, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f8.u32l;
    // 0x80330D00: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D04: nop

    // 0x80330D08: sh          $zero, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = 0;
L_80330D0C:
    // 0x80330D0C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D10: nop

    // 0x80330D14: sh          $zero, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = 0;
L_80330D18:
    // 0x80330D18: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D1C: nop

    // 0x80330D20: lwc1        $f10, 0x3C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80330D24: nop

    // 0x80330D28: swc1        $f10, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f10.u32l;
    // 0x80330D2C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D30: nop

    // 0x80330D34: lwc1        $f16, 0x40($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X40);
    // 0x80330D38: nop

    // 0x80330D3C: swc1        $f16, 0xD8($t5)
    MEM_W(0XD8, ctx->r13) = ctx->f16.u32l;
    // 0x80330D40: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330D48: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80330D4C: nop

    // 0x80330D50: bne         $t7, $at, L_80330DD0
    if (ctx->r15 != ctx->r1) {
        // 0x80330D54: nop
    
            goto L_80330DD0;
    }
    // 0x80330D54: nop

    // 0x80330D58: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330D60: lwc1        $f18, 0x44($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80330D64: nop

    // 0x80330D68: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x80330D6C: nop

    // 0x80330D70: bc1f        L_80330D94
    if (!c1cs) {
        // 0x80330D74: nop
    
            goto L_80330D94;
    }
    // 0x80330D74: nop

    // 0x80330D78: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330D80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330D84: lwc1        $f6, 0x44($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80330D88: nop

    // 0x80330D8C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80330D90: swc1        $f10, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f10.u32l;
L_80330D94:
    // 0x80330D94: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D98: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330D9C: lwc1        $f16, 0x48($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X48);
    // 0x80330DA0: nop

    // 0x80330DA4: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80330DA8: nop

    // 0x80330DAC: bc1f        L_80330DD0
    if (!c1cs) {
        // 0x80330DB0: nop
    
            goto L_80330DD0;
    }
    // 0x80330DB0: nop

    // 0x80330DB4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330DBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330DC0: lwc1        $f4, 0x48($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X48);
    // 0x80330DC4: nop

    // 0x80330DC8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330DCC: swc1        $f8, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f8.u32l;
L_80330DD0:
    // 0x80330DD0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330DD8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330DDC: nop

    // 0x80330DE0: bne         $t3, $at, L_80330E14
    if (ctx->r11 != ctx->r1) {
        // 0x80330DE4: nop
    
            goto L_80330E14;
    }
    // 0x80330DE4: nop

    // 0x80330DE8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330DF0: lw          $a2, 0xE0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0XE0);
    // 0x80330DF4: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    // 0x80330DF8: jal         0x800BFFCC
    // 0x80330DFC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_800BFFCC(rdram, ctx);
        goto after_0;
    // 0x80330DFC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_0:
    // 0x80330E00: bne         $v0, $zero, L_80330E14
    if (ctx->r2 != 0) {
        // 0x80330E04: nop
    
            goto L_80330E14;
    }
    // 0x80330E04: nop

    // 0x80330E08: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E0C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80330E10: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
L_80330E14:
    // 0x80330E14: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330E1C: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80330E20: nop

    // 0x80330E24: bne         $t8, $at, L_80330F44
    if (ctx->r24 != ctx->r1) {
        // 0x80330E28: nop
    
            goto L_80330F44;
    }
    // 0x80330E28: nop

    // 0x80330E2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E34: jal         0x8002A8B4
    // 0x80330E38: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330E38: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_1:
    // 0x80330E3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E44: jal         0x8002A560
    // 0x80330E48: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8002A560(rdram, ctx);
        goto after_2;
    // 0x80330E48: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_2:
    // 0x80330E4C: bne         $v0, $zero, L_80330F44
    if (ctx->r2 != 0) {
        // 0x80330E50: nop
    
            goto L_80330F44;
    }
    // 0x80330E50: nop

    // 0x80330E54: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E58: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80330E5C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80330E60: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80330E64: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80330E68: nop

    // 0x80330E6C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80330E70: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80330E74: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E78: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80330E7C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80330E80: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80330E84: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80330E88: nop

    // 0x80330E8C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330E90: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80330E94: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330E98: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330E9C: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80330EA0: nop

    // 0x80330EA4: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80330EA8: jal         0x800366E0
    // 0x80330EAC: add.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f4.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_3;
    // 0x80330EAC: add.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f4.fl;
    after_3:
    // 0x80330EB0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330EB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330EB8: nop

    // 0x80330EBC: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330EC0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80330EC4: nop

    // 0x80330EC8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80330ECC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330ED0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330ED4: nop

    // 0x80330ED8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80330EDC: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x80330EE0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80330EE4: sh          $t4, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r12;
    // 0x80330EE8: nop

    // 0x80330EEC: lh          $t5, 0x1A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1A);
    // 0x80330EF0: nop

    // 0x80330EF4: slti        $at, $t5, 0x9
    ctx->r1 = SIGNED(ctx->r13) < 0X9 ? 1 : 0;
    // 0x80330EF8: bne         $at, $zero, L_80330F08
    if (ctx->r1 != 0) {
        // 0x80330EFC: nop
    
            goto L_80330F08;
    }
    // 0x80330EFC: nop

    // 0x80330F00: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80330F04: sh          $t6, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r14;
L_80330F08:
    // 0x80330F08: lh          $t7, 0x1A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1A);
    // 0x80330F0C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F10: addiu       $t8, $t7, 0xE
    ctx->r24 = ADD32(ctx->r15, 0XE);
    // 0x80330F14: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80330F18: nop

    // 0x80330F1C: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80330F20: swc1        $f16, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f16.u32l;
    // 0x80330F24: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80330F28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330F2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F30: nop

    // 0x80330F34: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
    // 0x80330F38: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F3C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80330F40: sb          $t1, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r9;
L_80330F44:
    // 0x80330F44: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F48: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80330F4C: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80330F50: nop

    // 0x80330F54: bne         $t4, $at, L_80330FC0
    if (ctx->r12 != ctx->r1) {
        // 0x80330F58: nop
    
            goto L_80330FC0;
    }
    // 0x80330F58: nop

    // 0x80330F5C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F60: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80330F64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330F68: lwc1        $f6, 0x48($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X48);
    // 0x80330F6C: nop

    // 0x80330F70: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80330F74: nop

    // 0x80330F78: bc1f        L_80330F9C
    if (!c1cs) {
        // 0x80330F7C: nop
    
            goto L_80330F9C;
    }
    // 0x80330F7C: nop

    // 0x80330F80: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330F88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330F8C: lwc1        $f10, 0x48($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X48);
    // 0x80330F90: nop

    // 0x80330F94: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80330F98: swc1        $f16, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f16.u32l;
L_80330F9C:
    // 0x80330F9C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FA0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80330FA4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330FA8: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80330FAC: jal         0x80015538
    // 0x80330FB0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80330FB0: nop

    after_4:
    // 0x80330FB4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FB8: nop

    // 0x80330FBC: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
L_80330FC0:
    // 0x80330FC0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FC4: nop

    // 0x80330FC8: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x80330FCC: jal         0x80015744
    // 0x80330FD0: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_5;
    // 0x80330FD0: nop

    after_5:
    // 0x80330FD4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80330FD8: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330FDC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80330FE0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330FE4: jal         0x80015538
    // 0x80330FE8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80330FE8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_6:
    // 0x80330FEC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FF0: nop

    // 0x80330FF4: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
    // 0x80330FF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331000: jal         0x80029C40
    // 0x80331004: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x80331004: nop

    after_7:
    // 0x80331008: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033100C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331010: jal         0x80029D04
    // 0x80331014: nop

    func_80029D04(rdram, ctx);
        goto after_8;
    // 0x80331014: nop

    after_8:
    // 0x80331018: jal         0x8033193C
    // 0x8033101C: nop

    func_8033193C_unk_bin_41(rdram, ctx);
        goto after_9;
    // 0x8033101C: nop

    after_9:
    // 0x80331020: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331024: nop

    // 0x80331028: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x8033102C: nop

    // 0x80331030: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80331034: sh          $t3, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r11;
    // 0x80331038: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8033103C: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80331040: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331044: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331048: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8033104C: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80331050: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331054: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80331058: nop

    // 0x8033105C: bc1f        L_80331088
    if (!c1cs) {
        // 0x80331060: nop
    
            goto L_80331088;
    }
    // 0x80331060: nop

    // 0x80331064: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331068: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8033106C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80331070: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331074: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80331078: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033107C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331080: nop

    // 0x80331084: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331088:
    // 0x80331088: b           L_80331090
    // 0x8033108C: nop

        goto L_80331090;
    // 0x8033108C: nop

L_80331090:
    // 0x80331090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331094: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331098: jr          $ra
    // 0x8033109C: nop

    return;
    // 0x8033109C: nop

;}
RECOMP_FUNC void func_80330780_unk_bin_42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330780: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330784: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330788: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033078C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330790: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330794: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330798: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033079C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803307A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803307A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803307AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803307B0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803307B4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803307B8: nop

    // 0x803307BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803307C0: nop

    // 0x803307C4: bne         $t1, $zero, L_803307F0
    if (ctx->r9 != 0) {
        // 0x803307C8: nop
    
            goto L_803307F0;
    }
    // 0x803307C8: nop

    // 0x803307CC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803307D0: nop

    // 0x803307D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803307D8: nop

    // 0x803307DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803307E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803307E4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803307E8: nop

    // 0x803307EC: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
L_803307F0:
    // 0x803307F0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803307F4: nop

    // 0x803307F8: lh          $t7, 0xB6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB6);
    // 0x803307FC: nop

    // 0x80330800: beq         $t7, $zero, L_80330868
    if (ctx->r15 == 0) {
        // 0x80330804: nop
    
            goto L_80330868;
    }
    // 0x80330804: nop

    // 0x80330808: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033080C: nop

    // 0x80330810: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x80330814: nop

    // 0x80330818: bne         $t9, $zero, L_8033084C
    if (ctx->r25 != 0) {
        // 0x8033081C: nop
    
            goto L_8033084C;
    }
    // 0x8033081C: nop

    // 0x80330820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330824: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033082C: addiu       $a2, $zero, 0x65
    ctx->r6 = ADD32(0, 0X65);
    // 0x80330830: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330834: jal         0x800175F0
    // 0x80330838: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80330838: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8033083C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330840: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x80330844: b           L_8033085C
    // 0x80330848: sh          $t0, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = ctx->r8;
        goto L_8033085C;
    // 0x80330848: sh          $t0, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = ctx->r8;
L_8033084C:
    // 0x8033084C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330850: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330854: jal         0x80017B3C
    // 0x80330858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80017B3C(rdram, ctx);
        goto after_1;
    // 0x80330858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8033085C:
    // 0x8033085C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330860: b           L_803308BC
    // 0x80330864: sh          $zero, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = 0;
        goto L_803308BC;
    // 0x80330864: sh          $zero, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = 0;
L_80330868:
    // 0x80330868: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033086C: nop

    // 0x80330870: lh          $t2, 0xB8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB8);
    // 0x80330874: nop

    // 0x80330878: bne         $t2, $zero, L_80330898
    if (ctx->r10 != 0) {
        // 0x8033087C: nop
    
            goto L_80330898;
    }
    // 0x8033087C: nop

    // 0x80330880: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330884: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330888: jal         0x80017B3C
    // 0x8033088C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80017B3C(rdram, ctx);
        goto after_2;
    // 0x8033088C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330890: b           L_803308B0
    // 0x80330894: nop

        goto L_803308B0;
    // 0x80330894: nop

L_80330898:
    // 0x80330898: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033089C: nop

    // 0x803308A0: lh          $t6, 0xB8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB8);
    // 0x803308A4: nop

    // 0x803308A8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803308AC: sh          $t7, 0xB8($t5)
    MEM_H(0XB8, ctx->r13) = ctx->r15;
L_803308B0:
    // 0x803308B0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803308B4: nop

    // 0x803308B8: sh          $zero, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = 0;
L_803308BC:
    // 0x803308BC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803308C0: nop

    // 0x803308C4: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803308C8: nop

    // 0x803308CC: beq         $t0, $zero, L_80330CE0
    if (ctx->r8 == 0) {
        // 0x803308D0: nop
    
            goto L_80330CE0;
    }
    // 0x803308D0: nop

    // 0x803308D4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803308D8: nop

    // 0x803308DC: lh          $t3, 0xAA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAA);
    // 0x803308E0: nop

    // 0x803308E4: bne         $t3, $zero, L_80330A2C
    if (ctx->r11 != 0) {
        // 0x803308E8: nop
    
            goto L_80330A2C;
    }
    // 0x803308E8: nop

    // 0x803308EC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803308F0: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803308F4: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x803308F8: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x803308FC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80330900: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330904: lw          $t7, 0x1060($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1060);
    // 0x80330908: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x8033090C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330910: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x80330914: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80330918: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8033091C: nop

    // 0x80330920: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330924: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80330928: nop

    // 0x8033092C: bc1f        L_80330A00
    if (!c1cs) {
        // 0x80330930: nop
    
            goto L_80330A00;
    }
    // 0x80330930: nop

    // 0x80330934: lh          $t1, 0x2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X2);
    // 0x80330938: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8033093C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80330940: nop

    // 0x80330944: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80330948: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8033094C: nop

    // 0x80330950: bc1f        L_80330A00
    if (!c1cs) {
        // 0x80330954: nop
    
            goto L_80330A00;
    }
    // 0x80330954: nop

    // 0x80330958: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033095C: nop

    // 0x80330960: lh          $t2, 0xA8($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XA8);
    // 0x80330964: nop

    // 0x80330968: addiu       $t6, $t2, 0x3
    ctx->r14 = ADD32(ctx->r10, 0X3);
    // 0x8033096C: sh          $t6, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r14;
    // 0x80330970: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330974: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330978: lh          $t7, 0xC2($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XC2);
    // 0x8033097C: lh          $t9, 0xA8($t5)
    ctx->r25 = MEM_H(ctx->r13, 0XA8);
    // 0x80330980: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330984: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80330988: lw          $t0, 0x1060($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1060);
    // 0x8033098C: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x80330990: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x80330994: lh          $t2, 0x4($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X4);
    // 0x80330998: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033099C: bne         $t2, $at, L_803309D4
    if (ctx->r10 != ctx->r1) {
        // 0x803309A0: nop
    
            goto L_803309D4;
    }
    // 0x803309A0: nop

    // 0x803309A4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803309A8: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x803309AC: sh          $t6, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r14;
    // 0x803309B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803309B4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803309B8: nop

    // 0x803309BC: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x803309C0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803309C4: nop

    // 0x803309C8: lwc1        $f6, 0x2C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x803309CC: b           L_803309F8
    // 0x803309D0: swc1        $f6, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f6.u32l;
        goto L_803309F8;
    // 0x803309D0: swc1        $f6, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f6.u32l;
L_803309D4:
    // 0x803309D4: jal         0x803305B0
    // 0x803309D8: nop

    func_803305B0_unk_bin_42(rdram, ctx);
        goto after_3;
    // 0x803309D8: nop

    after_3:
    // 0x803309DC: jal         0x8033013C
    // 0x803309E0: nop

    func_8033013C_unk_bin_42(rdram, ctx);
        goto after_4;
    // 0x803309E0: nop

    after_4:
    // 0x803309E4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x803309E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803309EC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803309F0: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x803309F4: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
L_803309F8:
    // 0x803309F8: b           L_80330A24
    // 0x803309FC: nop

        goto L_80330A24;
    // 0x803309FC: nop

L_80330A00:
    // 0x80330A00: jal         0x803305B0
    // 0x80330A04: nop

    func_803305B0_unk_bin_42(rdram, ctx);
        goto after_5;
    // 0x80330A04: nop

    after_5:
    // 0x80330A08: jal         0x8033013C
    // 0x80330A0C: nop

    func_8033013C_unk_bin_42(rdram, ctx);
        goto after_6;
    // 0x80330A0C: nop

    after_6:
    // 0x80330A10: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80330A14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330A18: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A1C: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80330A20: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
L_80330A24:
    // 0x80330A24: b           L_80330CE0
    // 0x80330A28: nop

        goto L_80330CE0;
    // 0x80330A28: nop

L_80330A2C:
    // 0x80330A2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330A34: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80330A38: nop

    // 0x80330A3C: bne         $t1, $at, L_80330CC8
    if (ctx->r9 != ctx->r1) {
        // 0x80330A40: nop
    
            goto L_80330CC8;
    }
    // 0x80330A40: nop

    // 0x80330A44: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A48: nop

    // 0x80330A4C: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x80330A50: nop

    // 0x80330A54: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x80330A58: bne         $at, $zero, L_80330A9C
    if (ctx->r1 != 0) {
        // 0x80330A5C: nop
    
            goto L_80330A9C;
    }
    // 0x80330A5C: nop

    // 0x80330A60: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A64: nop

    // 0x80330A68: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x80330A6C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A70: nop

    // 0x80330A74: sh          $zero, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = 0;
    // 0x80330A78: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A7C: nop

    // 0x80330A80: sh          $zero, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = 0;
    // 0x80330A84: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A88: nop

    // 0x80330A8C: sh          $zero, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = 0;
    // 0x80330A90: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A94: b           L_80330ACC
    // 0x80330A98: sh          $zero, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = 0;
        goto L_80330ACC;
    // 0x80330A98: sh          $zero, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = 0;
L_80330A9C:
    // 0x80330A9C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AA0: nop

    // 0x80330AA4: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
    // 0x80330AA8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AAC: nop

    // 0x80330AB0: sh          $zero, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = 0;
    // 0x80330AB4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AB8: nop

    // 0x80330ABC: sh          $zero, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = 0;
    // 0x80330AC0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AC4: nop

    // 0x80330AC8: sh          $zero, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = 0;
L_80330ACC:
    // 0x80330ACC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AD0: nop

    // 0x80330AD4: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80330AD8: nop

    // 0x80330ADC: addiu       $t3, $t6, -0x2
    ctx->r11 = ADD32(ctx->r14, -0X2);
    // 0x80330AE0: sltiu       $at, $t3, 0x16
    ctx->r1 = ctx->r11 < 0X16 ? 1 : 0;
    // 0x80330AE4: beq         $at, $zero, L_80330CC0
    if (ctx->r1 == 0) {
        // 0x80330AE8: nop
    
            goto L_80330CC0;
    }
    // 0x80330AE8: nop

    // 0x80330AEC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330AF0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330AF4: addu        $at, $at, $t3
    gpr jr_addend_80330B00 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330AF8: lw          $t3, 0x10B0($at)
    ctx->r11 = ADD32(ctx->r1, 0X10B0);
    // 0x80330AFC: nop

    // 0x80330B00: jr          $t3
    // 0x80330B04: nop

    switch (jr_addend_80330B00 >> 2) {
        case 0: goto L_80330B08; break;
        case 1: goto L_80330B1C; break;
        case 2: goto L_80330B30; break;
        case 3: goto L_80330B44; break;
        case 4: goto L_80330B58; break;
        case 5: goto L_80330B6C; break;
        case 6: goto L_80330B80; break;
        case 7: goto L_80330B94; break;
        case 8: goto L_80330BA8; break;
        case 9: goto L_80330BBC; break;
        case 10: goto L_80330BD0; break;
        case 11: goto L_80330BE4; break;
        case 12: goto L_80330BF8; break;
        case 13: goto L_80330C0C; break;
        case 14: goto L_80330C20; break;
        case 15: goto L_80330C34; break;
        case 16: goto L_80330C48; break;
        case 17: goto L_80330C5C; break;
        case 18: goto L_80330C70; break;
        case 19: goto L_80330C84; break;
        case 20: goto L_80330C98; break;
        case 21: goto L_80330CAC; break;
        default: switch_error(__func__, 0x80330B00, 0x803310B0);
    }
    // 0x80330B04: nop

L_80330B08:
    // 0x80330B08: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B0C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80330B10: sh          $t7, 0xC2($t8)
    MEM_H(0XC2, ctx->r24) = ctx->r15;
    // 0x80330B14: b           L_80330CC0
    // 0x80330B18: nop

        goto L_80330CC0;
    // 0x80330B18: nop

L_80330B1C:
    // 0x80330B1C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B20: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80330B24: sh          $t5, 0xC2($t9)
    MEM_H(0XC2, ctx->r25) = ctx->r13;
    // 0x80330B28: b           L_80330CC0
    // 0x80330B2C: nop

        goto L_80330CC0;
    // 0x80330B2C: nop

L_80330B30:
    // 0x80330B30: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B34: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80330B38: sh          $t0, 0xC2($t1)
    MEM_H(0XC2, ctx->r9) = ctx->r8;
    // 0x80330B3C: b           L_80330CC0
    // 0x80330B40: nop

        goto L_80330CC0;
    // 0x80330B40: nop

L_80330B44:
    // 0x80330B44: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B48: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80330B4C: sh          $t4, 0xC2($t2)
    MEM_H(0XC2, ctx->r10) = ctx->r12;
    // 0x80330B50: b           L_80330CC0
    // 0x80330B54: nop

        goto L_80330CC0;
    // 0x80330B54: nop

L_80330B58:
    // 0x80330B58: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B5C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80330B60: sh          $t6, 0xC2($t3)
    MEM_H(0XC2, ctx->r11) = ctx->r14;
    // 0x80330B64: b           L_80330CC0
    // 0x80330B68: nop

        goto L_80330CC0;
    // 0x80330B68: nop

L_80330B6C:
    // 0x80330B6C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B70: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80330B74: sh          $t7, 0xC2($t8)
    MEM_H(0XC2, ctx->r24) = ctx->r15;
    // 0x80330B78: b           L_80330CC0
    // 0x80330B7C: nop

        goto L_80330CC0;
    // 0x80330B7C: nop

L_80330B80:
    // 0x80330B80: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B84: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x80330B88: sh          $t5, 0xC2($t9)
    MEM_H(0XC2, ctx->r25) = ctx->r13;
    // 0x80330B8C: b           L_80330CC0
    // 0x80330B90: nop

        goto L_80330CC0;
    // 0x80330B90: nop

L_80330B94:
    // 0x80330B94: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B98: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80330B9C: sh          $t0, 0xC2($t1)
    MEM_H(0XC2, ctx->r9) = ctx->r8;
    // 0x80330BA0: b           L_80330CC0
    // 0x80330BA4: nop

        goto L_80330CC0;
    // 0x80330BA4: nop

L_80330BA8:
    // 0x80330BA8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BAC: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x80330BB0: sh          $t4, 0xC2($t2)
    MEM_H(0XC2, ctx->r10) = ctx->r12;
    // 0x80330BB4: b           L_80330CC0
    // 0x80330BB8: nop

        goto L_80330CC0;
    // 0x80330BB8: nop

L_80330BBC:
    // 0x80330BBC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BC0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80330BC4: sh          $t6, 0xC2($t3)
    MEM_H(0XC2, ctx->r11) = ctx->r14;
    // 0x80330BC8: b           L_80330CC0
    // 0x80330BCC: nop

        goto L_80330CC0;
    // 0x80330BCC: nop

L_80330BD0:
    // 0x80330BD0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BD4: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x80330BD8: sh          $t7, 0xC2($t8)
    MEM_H(0XC2, ctx->r24) = ctx->r15;
    // 0x80330BDC: b           L_80330CC0
    // 0x80330BE0: nop

        goto L_80330CC0;
    // 0x80330BE0: nop

L_80330BE4:
    // 0x80330BE4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BE8: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x80330BEC: sh          $t5, 0xC2($t9)
    MEM_H(0XC2, ctx->r25) = ctx->r13;
    // 0x80330BF0: b           L_80330CC0
    // 0x80330BF4: nop

        goto L_80330CC0;
    // 0x80330BF4: nop

L_80330BF8:
    // 0x80330BF8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BFC: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x80330C00: sh          $t0, 0xC2($t1)
    MEM_H(0XC2, ctx->r9) = ctx->r8;
    // 0x80330C04: b           L_80330CC0
    // 0x80330C08: nop

        goto L_80330CC0;
    // 0x80330C08: nop

L_80330C0C:
    // 0x80330C0C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C10: addiu       $t4, $zero, 0xE
    ctx->r12 = ADD32(0, 0XE);
    // 0x80330C14: sh          $t4, 0xC2($t2)
    MEM_H(0XC2, ctx->r10) = ctx->r12;
    // 0x80330C18: b           L_80330CC0
    // 0x80330C1C: nop

        goto L_80330CC0;
    // 0x80330C1C: nop

L_80330C20:
    // 0x80330C20: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C24: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80330C28: sh          $t6, 0xC2($t3)
    MEM_H(0XC2, ctx->r11) = ctx->r14;
    // 0x80330C2C: b           L_80330CC0
    // 0x80330C30: nop

        goto L_80330CC0;
    // 0x80330C30: nop

L_80330C34:
    // 0x80330C34: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C38: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80330C3C: sh          $t7, 0xC2($t8)
    MEM_H(0XC2, ctx->r24) = ctx->r15;
    // 0x80330C40: b           L_80330CC0
    // 0x80330C44: nop

        goto L_80330CC0;
    // 0x80330C44: nop

L_80330C48:
    // 0x80330C48: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C4C: addiu       $t5, $zero, 0x13
    ctx->r13 = ADD32(0, 0X13);
    // 0x80330C50: sh          $t5, 0xC2($t9)
    MEM_H(0XC2, ctx->r25) = ctx->r13;
    // 0x80330C54: b           L_80330CC0
    // 0x80330C58: nop

        goto L_80330CC0;
    // 0x80330C58: nop

L_80330C5C:
    // 0x80330C5C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C60: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x80330C64: sh          $t0, 0xC2($t1)
    MEM_H(0XC2, ctx->r9) = ctx->r8;
    // 0x80330C68: b           L_80330CC0
    // 0x80330C6C: nop

        goto L_80330CC0;
    // 0x80330C6C: nop

L_80330C70:
    // 0x80330C70: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C74: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x80330C78: sh          $t4, 0xC2($t2)
    MEM_H(0XC2, ctx->r10) = ctx->r12;
    // 0x80330C7C: b           L_80330CC0
    // 0x80330C80: nop

        goto L_80330CC0;
    // 0x80330C80: nop

L_80330C84:
    // 0x80330C84: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C88: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x80330C8C: sh          $t6, 0xC2($t3)
    MEM_H(0XC2, ctx->r11) = ctx->r14;
    // 0x80330C90: b           L_80330CC0
    // 0x80330C94: nop

        goto L_80330CC0;
    // 0x80330C94: nop

L_80330C98:
    // 0x80330C98: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C9C: addiu       $t7, $zero, 0x17
    ctx->r15 = ADD32(0, 0X17);
    // 0x80330CA0: sh          $t7, 0xC2($t8)
    MEM_H(0XC2, ctx->r24) = ctx->r15;
    // 0x80330CA4: b           L_80330CC0
    // 0x80330CA8: nop

        goto L_80330CC0;
    // 0x80330CA8: nop

L_80330CAC:
    // 0x80330CAC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CB0: addiu       $t5, $zero, 0x16
    ctx->r13 = ADD32(0, 0X16);
    // 0x80330CB4: sh          $t5, 0xC2($t9)
    MEM_H(0XC2, ctx->r25) = ctx->r13;
    // 0x80330CB8: b           L_80330CC0
    // 0x80330CBC: nop

        goto L_80330CC0;
    // 0x80330CBC: nop

L_80330CC0:
    // 0x80330CC0: b           L_80330CE0
    // 0x80330CC4: nop

        goto L_80330CE0;
    // 0x80330CC4: nop

L_80330CC8:
    // 0x80330CC8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CCC: nop

    // 0x80330CD0: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80330CD4: nop

    // 0x80330CD8: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x80330CDC: sh          $t4, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r12;
L_80330CE0:
    // 0x80330CE0: b           L_80330CE8
    // 0x80330CE4: nop

        goto L_80330CE8;
    // 0x80330CE4: nop

L_80330CE8:
    // 0x80330CE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330CF0: jr          $ra
    // 0x80330CF4: nop

    return;
    // 0x80330CF4: nop

    // 0x80330CF8: nop

    // 0x80330CFC: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
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
    // 0x80330040: addiu       $a1, $a1, 0x46FC
    ctx->r5 = ADD32(ctx->r5, 0X46FC);
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
    // 0x80330060: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80330064: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330068: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033006C: beq         $t1, $at, L_80330124
    if (ctx->r9 == ctx->r1) {
        // 0x80330070: nop
    
            goto L_80330124;
    }
    // 0x80330070: nop

    // 0x80330074: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330078: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8033007C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330080: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80330084: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330088: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033008C: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80330090: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330094: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330098: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033009C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803300A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300A4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803300A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803300AC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x803300B0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x803300B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803300B8: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x803300BC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803300C0: jal         0x800295C0
    // 0x803300C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x803300C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x803300C8: beq         $v0, $zero, L_803300FC
    if (ctx->r2 == 0) {
        // 0x803300CC: nop
    
            goto L_803300FC;
    }
    // 0x803300CC: nop

    // 0x803300D0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803300D4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803300D8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803300DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803300E4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300E8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803300EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300F0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803300F4: b           L_80330124
    // 0x803300F8: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_80330124;
    // 0x803300F8: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_803300FC:
    // 0x803300FC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330100: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330104: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80330108: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033010C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330110: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330114: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330118: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033011C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330120: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
L_80330124:
    // 0x80330124: b           L_8033012C
    // 0x80330128: nop

        goto L_8033012C;
    // 0x80330128: nop

L_8033012C:
    // 0x8033012C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330130: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330134: jr          $ra
    // 0x80330138: nop

    return;
    // 0x80330138: nop

;}
RECOMP_FUNC void func_8033013C_unk_bin_42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033013C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330140: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330144: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330148: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033014C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330150: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330154: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330158: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033015C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330160: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330164: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330168: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033016C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80330170: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330174: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330178: lwc1        $f4, 0x24($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8033017C: nop

    // 0x80330180: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80330184: nop

    // 0x80330188: bc1f        L_803301AC
    if (!c1cs) {
        // 0x8033018C: nop
    
            goto L_803301AC;
    }
    // 0x8033018C: nop

    // 0x80330190: lwc1        $f8, 0x2C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80330194: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330198: nop

    // 0x8033019C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x803301A0: nop

    // 0x803301A4: bc1t        L_80330598
    if (c1cs) {
        // 0x803301A8: nop
    
            goto L_80330598;
    }
    // 0x803301A8: nop

L_803301AC:
    // 0x803301AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803301B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803301B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803301B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803301BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803301C0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x803301C4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x803301C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803301CC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x803301D0: jal         0x800295C0
    // 0x803301D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x803301D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x803301D8: beq         $v0, $zero, L_803301EC
    if (ctx->r2 == 0) {
        // 0x803301DC: nop
    
            goto L_803301EC;
    }
    // 0x803301DC: nop

    // 0x803301E0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803301E4: b           L_803301F8
    // 0x803301E8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
        goto L_803301F8;
    // 0x803301E8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_803301EC:
    // 0x803301EC: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803301F0: nop

    // 0x803301F4: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_803301F8:
    // 0x803301F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803301FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330200: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330208: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8033020C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80330210: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330214: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80330218: jal         0x800295C0
    // 0x8033021C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x8033021C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80330220: beq         $v0, $zero, L_80330234
    if (ctx->r2 == 0) {
        // 0x80330224: nop
    
            goto L_80330234;
    }
    // 0x80330224: nop

    // 0x80330228: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033022C: b           L_80330240
    // 0x80330230: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
        goto L_80330240;
    // 0x80330230: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
L_80330234:
    // 0x80330234: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80330238: nop

    // 0x8033023C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
L_80330240:
    // 0x80330240: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330244: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330248: nop

    // 0x8033024C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80330250: nop

    // 0x80330254: bc1f        L_80330268
    if (!c1cs) {
        // 0x80330258: nop
    
            goto L_80330268;
    }
    // 0x80330258: nop

    // 0x8033025C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330260: nop

    // 0x80330264: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_80330268:
    // 0x80330268: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033026C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330270: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330274: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330278: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033027C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80330280: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80330284: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330288: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8033028C: jal         0x800295C0
    // 0x80330290: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_2;
    // 0x80330290: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80330294: beq         $v0, $zero, L_803302A8
    if (ctx->r2 == 0) {
        // 0x80330298: nop
    
            goto L_803302A8;
    }
    // 0x80330298: nop

    // 0x8033029C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803302A0: b           L_803302B4
    // 0x803302A4: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
        goto L_803302B4;
    // 0x803302A4: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
L_803302A8:
    // 0x803302A8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803302AC: nop

    // 0x803302B0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_803302B4:
    // 0x803302B4: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803302B8: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803302BC: nop

    // 0x803302C0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803302C4: nop

    // 0x803302C8: bc1f        L_803302DC
    if (!c1cs) {
        // 0x803302CC: nop
    
            goto L_803302DC;
    }
    // 0x803302CC: nop

    // 0x803302D0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803302D4: nop

    // 0x803302D8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_803302DC:
    // 0x803302DC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803302E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803302E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803302E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803302EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803302F0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x803302F4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x803302F8: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    // 0x803302FC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80330300: jal         0x800295C0
    // 0x80330304: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x80330304: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80330308: beq         $v0, $zero, L_8033031C
    if (ctx->r2 == 0) {
        // 0x8033030C: nop
    
            goto L_8033031C;
    }
    // 0x8033030C: nop

    // 0x80330310: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80330314: b           L_80330328
    // 0x80330318: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
        goto L_80330328;
    // 0x80330318: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_8033031C:
    // 0x8033031C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80330320: nop

    // 0x80330324: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
L_80330328:
    // 0x80330328: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033032C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330330: nop

    // 0x80330334: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80330338: nop

    // 0x8033033C: bc1f        L_80330350
    if (!c1cs) {
        // 0x80330340: nop
    
            goto L_80330350;
    }
    // 0x80330340: nop

    // 0x80330344: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330348: nop

    // 0x8033034C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
L_80330350:
    // 0x80330350: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330354: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330358: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033035C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330364: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80330368: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8033036C: lui         $a3, 0xC334
    ctx->r7 = S32(0XC334 << 16);
    // 0x80330370: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80330374: jal         0x800295C0
    // 0x80330378: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x80330378: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x8033037C: beq         $v0, $zero, L_80330390
    if (ctx->r2 == 0) {
        // 0x80330380: nop
    
            goto L_80330390;
    }
    // 0x80330380: nop

    // 0x80330384: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80330388: b           L_8033039C
    // 0x8033038C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
        goto L_8033039C;
    // 0x8033038C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
L_80330390:
    // 0x80330390: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80330394: nop

    // 0x80330398: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_8033039C:
    // 0x8033039C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803303A0: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803303A4: nop

    // 0x803303A8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803303AC: nop

    // 0x803303B0: bc1f        L_803303C4
    if (!c1cs) {
        // 0x803303B4: nop
    
            goto L_803303C4;
    }
    // 0x803303B4: nop

    // 0x803303B8: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803303BC: nop

    // 0x803303C0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
L_803303C4:
    // 0x803303C4: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x803303C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803303CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803303D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803303D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803303D8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x803303DC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x803303E0: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    // 0x803303E4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x803303E8: jal         0x800295C0
    // 0x803303EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x803303EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x803303F0: beq         $v0, $zero, L_80330404
    if (ctx->r2 == 0) {
        // 0x803303F4: nop
    
            goto L_80330404;
    }
    // 0x803303F4: nop

    // 0x803303F8: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803303FC: b           L_80330410
    // 0x80330400: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
        goto L_80330410;
    // 0x80330400: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_80330404:
    // 0x80330404: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80330408: nop

    // 0x8033040C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_80330410:
    // 0x80330410: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330414: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330418: nop

    // 0x8033041C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80330420: nop

    // 0x80330424: bc1f        L_80330438
    if (!c1cs) {
        // 0x80330428: nop
    
            goto L_80330438;
    }
    // 0x80330428: nop

    // 0x8033042C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330430: nop

    // 0x80330434: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_80330438:
    // 0x80330438: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033043C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330440: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330444: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330448: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033044C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80330450: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80330454: lui         $a3, 0xC334
    ctx->r7 = S32(0XC334 << 16);
    // 0x80330458: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8033045C: jal         0x800295C0
    // 0x80330460: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x80330460: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80330464: beq         $v0, $zero, L_80330478
    if (ctx->r2 == 0) {
        // 0x80330468: nop
    
            goto L_80330478;
    }
    // 0x80330468: nop

    // 0x8033046C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80330470: b           L_80330484
    // 0x80330474: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
        goto L_80330484;
    // 0x80330474: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_80330478:
    // 0x80330478: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033047C: nop

    // 0x80330480: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
L_80330484:
    // 0x80330484: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330488: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033048C: nop

    // 0x80330490: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80330494: nop

    // 0x80330498: bc1f        L_803304AC
    if (!c1cs) {
        // 0x8033049C: nop
    
            goto L_803304AC;
    }
    // 0x8033049C: nop

    // 0x803304A0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803304A4: nop

    // 0x803304A8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_803304AC:
    // 0x803304AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803304B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803304B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304BC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x803304C0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x803304C4: lui         $a3, 0xC334
    ctx->r7 = S32(0XC334 << 16);
    // 0x803304C8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803304CC: jal         0x800295C0
    // 0x803304D0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x803304D0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x803304D4: beq         $v0, $zero, L_803304E8
    if (ctx->r2 == 0) {
        // 0x803304D8: nop
    
            goto L_803304E8;
    }
    // 0x803304D8: nop

    // 0x803304DC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803304E0: b           L_803304F4
    // 0x803304E4: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
        goto L_803304F4;
    // 0x803304E4: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
L_803304E8:
    // 0x803304E8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803304EC: nop

    // 0x803304F0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
L_803304F4:
    // 0x803304F4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803304F8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803304FC: nop

    // 0x80330500: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80330504: nop

    // 0x80330508: bc1f        L_8033051C
    if (!c1cs) {
        // 0x8033050C: nop
    
            goto L_8033051C;
    }
    // 0x8033050C: nop

    // 0x80330510: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330514: nop

    // 0x80330518: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_8033051C:
    // 0x8033051C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330520: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330524: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330528: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033052C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80330530: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80330534: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    // 0x80330538: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033053C: jal         0x800295C0
    // 0x80330540: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x80330540: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x80330544: beq         $v0, $zero, L_80330558
    if (ctx->r2 == 0) {
        // 0x80330548: nop
    
            goto L_80330558;
    }
    // 0x80330548: nop

    // 0x8033054C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80330550: b           L_80330564
    // 0x80330554: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
        goto L_80330564;
    // 0x80330554: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
L_80330558:
    // 0x80330558: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033055C: nop

    // 0x80330560: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_80330564:
    // 0x80330564: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330568: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033056C: nop

    // 0x80330570: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80330574: nop

    // 0x80330578: bc1f        L_8033058C
    if (!c1cs) {
        // 0x8033057C: nop
    
            goto L_8033058C;
    }
    // 0x8033057C: nop

    // 0x80330580: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330584: nop

    // 0x80330588: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_8033058C:
    // 0x8033058C: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330590: b           L_803305A0
    // 0x80330594: nop

        goto L_803305A0;
    // 0x80330594: nop

L_80330598:
    // 0x80330598: b           L_803305A0
    // 0x8033059C: nop

        goto L_803305A0;
    // 0x8033059C: nop

L_803305A0:
    // 0x803305A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803305A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803305A8: jr          $ra
    // 0x803305AC: nop

    return;
    // 0x803305AC: nop

;}
RECOMP_FUNC void func_803305B0_unk_bin_42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803305B0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803305B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803305B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803305BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803305C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803305C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803305CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803305D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803305D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803305DC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803305E0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x803305E4: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803305E8: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803305EC: lh          $t4, 0xA8($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XA8);
    // 0x803305F0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803305F4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803305F8: lw          $t3, 0x1060($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1060);
    // 0x803305FC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80330600: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80330604: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x80330608: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033060C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80330610: nop

    // 0x80330614: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330618: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x8033061C: nop

    // 0x80330620: bc1f        L_8033063C
    if (!c1cs) {
        // 0x80330624: nop
    
            goto L_8033063C;
    }
    // 0x80330624: nop

    // 0x80330628: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8033062C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330630: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80330634: b           L_803306A8
    // 0x80330638: swc1        $f10, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f10.u32l;
        goto L_803306A8;
    // 0x80330638: swc1        $f10, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f10.u32l;
L_8033063C:
    // 0x8033063C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80330640: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330644: lh          $t1, 0xC2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XC2);
    // 0x80330648: lh          $t4, 0xA8($t9)
    ctx->r12 = MEM_H(ctx->r25, 0XA8);
    // 0x8033064C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330650: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80330654: lw          $t0, 0x1060($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1060);
    // 0x80330658: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8033065C: addu        $t5, $t0, $t3
    ctx->r13 = ADD32(ctx->r8, ctx->r11);
    // 0x80330660: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x80330664: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80330668: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8033066C: nop

    // 0x80330670: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80330674: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x80330678: nop

    // 0x8033067C: bc1f        L_80330698
    if (!c1cs) {
        // 0x80330680: nop
    
            goto L_80330698;
    }
    // 0x80330680: nop

    // 0x80330684: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80330688: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033068C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80330690: b           L_803306A8
    // 0x80330694: swc1        $f4, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f4.u32l;
        goto L_803306A8;
    // 0x80330694: swc1        $f4, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f4.u32l;
L_80330698:
    // 0x80330698: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033069C: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x803306A0: nop

    // 0x803306A4: swc1        $f8, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f8.u32l;
L_803306A8:
    // 0x803306A8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803306AC: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803306B0: lh          $t2, 0xC2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC2);
    // 0x803306B4: lh          $t0, 0xA8($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XA8);
    // 0x803306B8: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x803306BC: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x803306C0: lw          $t4, 0x1060($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1060);
    // 0x803306C4: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x803306C8: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x803306CC: lh          $t6, 0x2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2);
    // 0x803306D0: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803306D4: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x803306D8: nop

    // 0x803306DC: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803306E0: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x803306E4: nop

    // 0x803306E8: bc1f        L_80330704
    if (!c1cs) {
        // 0x803306EC: nop
    
            goto L_80330704;
    }
    // 0x803306EC: nop

    // 0x803306F0: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x803306F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803306F8: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x803306FC: b           L_80330770
    // 0x80330700: swc1        $f6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f6.u32l;
        goto L_80330770;
    // 0x80330700: swc1        $f6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f6.u32l;
L_80330704:
    // 0x80330704: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80330708: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x8033070C: lh          $t2, 0xC2($t8)
    ctx->r10 = MEM_H(ctx->r24, 0XC2);
    // 0x80330710: lh          $t0, 0xA8($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA8);
    // 0x80330714: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x80330718: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8033071C: lw          $t1, 0x1060($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1060);
    // 0x80330720: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x80330724: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x80330728: lh          $t5, 0x2($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X2);
    // 0x8033072C: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80330730: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80330734: nop

    // 0x80330738: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033073C: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x80330740: nop

    // 0x80330744: bc1f        L_80330760
    if (!c1cs) {
        // 0x80330748: nop
    
            goto L_80330760;
    }
    // 0x80330748: nop

    // 0x8033074C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80330750: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330754: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80330758: b           L_80330770
    // 0x8033075C: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
        goto L_80330770;
    // 0x8033075C: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
L_80330760:
    // 0x80330760: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330764: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80330768: nop

    // 0x8033076C: swc1        $f16, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f16.u32l;
L_80330770:
    // 0x80330770: b           L_80330778
    // 0x80330774: nop

        goto L_80330778;
    // 0x80330774: nop

L_80330778:
    // 0x80330778: jr          $ra
    // 0x8033077C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033077C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80334314_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334314: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80334318: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033431C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80334320: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80334324: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334328: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033432C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334330: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334334: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334338: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033433C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334340: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334344: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334348: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033434C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80334350: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80334354: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80334358: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033435C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334360: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334364: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334368: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033436C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334370: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334374: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80334378: nop

    // 0x8033437C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80334380: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80334384: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80334388: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033438C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334390: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334394: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334398: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033439C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803343A0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803343A4: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x803343A8: nop

    // 0x803343AC: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x803343B0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803343B4: nop

    // 0x803343B8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803343BC: nop

    // 0x803343C0: bne         $t7, $zero, L_803345A0
    if (ctx->r15 != 0) {
        // 0x803343C4: nop
    
            goto L_803345A0;
    }
    // 0x803343C4: nop

    // 0x803343C8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803343CC: nop

    // 0x803343D0: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x803343D4: nop

    // 0x803343D8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803343DC: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x803343E0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803343E4: nop

    // 0x803343E8: sh          $zero, 0xBA($t1)
    MEM_H(0XBA, ctx->r9) = 0;
    // 0x803343EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803343F0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803343F4: nop

    // 0x803343F8: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
    // 0x803343FC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80334400: nop

    // 0x80334404: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80334408: nop

    // 0x8033440C: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x80334410: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80334414: nop

    // 0x80334418: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
    // 0x8033441C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80334420: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80334424: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80334428: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033442C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80334430: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334434: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334438: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033443C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334440: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334444: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334448: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033444C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80334450: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334454: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334458: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033445C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80334460: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80334464: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80334468: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8033446C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334470: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x80334474: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80334478: nop

    // 0x8033447C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80334480: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334484: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334488: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033448C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334490: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334494: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80334498: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033449C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803344A0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803344A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803344A8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803344AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803344B0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803344B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803344B8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803344BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803344C0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803344C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803344C8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803344CC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803344D0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803344D4: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803344D8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803344DC: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x803344E0: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x803344E4: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x803344E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803344EC: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x803344F0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803344F4: nop

    // 0x803344F8: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x803344FC: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80334500: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334504: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80334508: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033450C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334510: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80334514: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334518: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8033451C: addiu       $t1, $t1, -0x7F84
    ctx->r9 = ADD32(ctx->r9, -0X7F84);
    // 0x80334520: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334524: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80334528: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033452C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80334530: jal         0x8001C0EC
    // 0x80334534: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334534: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_0:
    // 0x80334538: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033453C: addiu       $t2, $t2, -0x7F58
    ctx->r10 = ADD32(ctx->r10, -0X7F58);
    // 0x80334540: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80334544: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80334548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033454C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80334550: jal         0x8001C0EC
    // 0x80334554: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80334554: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    after_1:
    // 0x80334558: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8033455C: addiu       $t3, $t3, -0x7F30
    ctx->r11 = ADD32(ctx->r11, -0X7F30);
    // 0x80334560: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80334564: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80334568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033456C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80334570: jal         0x8001C0EC
    // 0x80334574: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80334574: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_2:
    // 0x80334578: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033457C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334580: jal         0x8001BBDC
    // 0x80334584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80334584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80334588: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033458C: jal         0x8001BBDC
    // 0x80334590: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80334590: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80334594: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80334598: jal         0x8001BBDC
    // 0x8033459C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x8033459C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_803345A0:
    // 0x803345A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803345A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803345A8: jal         0x8002A1FC
    // 0x803345AC: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_6;
    // 0x803345AC: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    after_6:
    // 0x803345B0: beq         $v0, $zero, L_803345D0
    if (ctx->r2 == 0) {
        // 0x803345B4: nop
    
            goto L_803345D0;
    }
    // 0x803345B4: nop

    // 0x803345B8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803345BC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x803345C0: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x803345C4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803345C8: nop

    // 0x803345CC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803345D0:
    // 0x803345D0: b           L_803345D8
    // 0x803345D4: nop

        goto L_803345D8;
    // 0x803345D4: nop

L_803345D8:
    // 0x803345D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803345DC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803345E0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803345E4: jr          $ra
    // 0x803345E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803345E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80333E0C_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333E0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333E10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333E14: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80333E18: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80333E1C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80333E20: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80333E24: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80333E28: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80333E2C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80333E30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80333E34: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80333E38: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80333E3C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80333E40: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80333E44: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80333E48: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80333E4C: addiu       $a1, $a1, 0x475C
    ctx->r5 = ADD32(ctx->r5, 0X475C);
    // 0x80333E50: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80333E54: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80333E58: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80333E5C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80333E60: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80333E64: jal         0x80027464
    // 0x80333E68: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80333E68: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80333E6C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80333E70: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E74: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333E78: beq         $t1, $at, L_803340D0
    if (ctx->r9 == ctx->r1) {
        // 0x80333E7C: nop
    
            goto L_803340D0;
    }
    // 0x80333E7C: nop

    // 0x80333E80: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E84: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80333E88: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333E8C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333E90: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333E94: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333E98: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333E9C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333EA0: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x80333EA4: nop

    // 0x80333EA8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80333EAC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333EB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333EB4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333EB8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333EBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333EC0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333EC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333EC8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333ECC: lh          $t8, 0x423A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423A);
    // 0x80333ED0: nop

    // 0x80333ED4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80333ED8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333EDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333EE0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80333EE4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80333EE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333EEC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80333EF0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333EF4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333EF8: sh          $zero, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = 0;
    // 0x80333EFC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80333F00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F04: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333F08: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333F0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333F10: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333F14: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333F18: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333F1C: sh          $zero, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = 0;
    // 0x80333F20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333F24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F28: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333F2C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333F30: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333F34: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333F38: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333F3C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333F40: sh          $zero, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = 0;
    // 0x80333F44: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80333F4C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333F50: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333F54: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333F58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333F5C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333F60: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333F64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F68: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333F6C: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80333F70: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F74: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80333F78: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333F7C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333F80: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333F84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333F88: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333F8C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333F90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F94: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333F98: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x80333F9C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FA0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80333FA4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80333FA8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80333FAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333FB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333FB4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80333FB8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333FBC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333FC0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333FC4: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x80333FC8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80333FCC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80333FD0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333FD4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333FD8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333FDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333FE0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333FE4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333FE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333FEC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333FF0: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x80333FF4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80333FF8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80333FFC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334000: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334004: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334008: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033400C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334010: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334014: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334018: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033401C: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x80334020: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80334024: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80334028: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033402C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334030: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334034: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334038: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033403C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334040: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334044: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334048: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
    // 0x8033404C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334050: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80334054: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80334058: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033405C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334060: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334064: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334068: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033406C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334070: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334074: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80334078: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033407C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80334080: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80334084: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80334088: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033408C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334090: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80334094: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334098: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033409C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803340A0: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x803340A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803340A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803340AC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803340B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803340B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803340B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803340BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803340C0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803340C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803340C8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803340CC: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_803340D0:
    // 0x803340D0: b           L_803340D8
    // 0x803340D4: nop

        goto L_803340D8;
    // 0x803340D4: nop

L_803340D8:
    // 0x803340D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803340DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803340E0: jr          $ra
    // 0x803340E4: nop

    return;
    // 0x803340E4: nop

;}
RECOMP_FUNC void func_80335784_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335784: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80335788: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033578C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80335790: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335794: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335798: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033579C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803357A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803357A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803357A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803357AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803357B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803357B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803357B8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803357BC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803357C0: nop

    // 0x803357C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803357C8: nop

    // 0x803357CC: bne         $t1, $zero, L_80335938
    if (ctx->r9 != 0) {
        // 0x803357D0: nop
    
            goto L_80335938;
    }
    // 0x803357D0: nop

    // 0x803357D4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803357D8: nop

    // 0x803357DC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803357E0: nop

    // 0x803357E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803357E8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803357EC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x803357F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803357F4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803357F8: nop

    // 0x803357FC: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80335800: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335804: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335808: jal         0x8002A46C
    // 0x8033580C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x8033580C: nop

    after_0:
    // 0x80335810: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80335814: nop

    // 0x80335818: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x8033581C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80335820: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80335824: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335828: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x8033582C: nop

    // 0x80335830: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80335834: nop

    // 0x80335838: bc1f        L_80335888
    if (!c1cs) {
        // 0x8033583C: nop
    
            goto L_80335888;
    }
    // 0x8033583C: nop

    // 0x80335840: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80335844: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335848: nop

    // 0x8033584C: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x80335850: nop

    // 0x80335854: bc1f        L_80335888
    if (!c1cs) {
        // 0x80335858: nop
    
            goto L_80335888;
    }
    // 0x80335858: nop

    // 0x8033585C: jal         0x80014E80
    // 0x80335860: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80335860: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_1:
    // 0x80335864: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80335868: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x8033586C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80335870: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80335874: jal         0x80015538
    // 0x80335878: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80335878: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_2:
    // 0x8033587C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335880: b           L_80335920
    // 0x80335884: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
        goto L_80335920;
    // 0x80335884: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
L_80335888:
    // 0x80335888: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033588C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80335890: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335894: lwc1        $f18, 0x3C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80335898: nop

    // 0x8033589C: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x803358A0: nop

    // 0x803358A4: bc1f        L_803358F4
    if (!c1cs) {
        // 0x803358A8: nop
    
            goto L_803358F4;
    }
    // 0x803358A8: nop

    // 0x803358AC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803358B0: lwc1        $f8, 0x5E80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5E80);
    // 0x803358B4: nop

    // 0x803358B8: c.le.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl <= ctx->f8.fl;
    // 0x803358BC: nop

    // 0x803358C0: bc1f        L_803358F4
    if (!c1cs) {
        // 0x803358C4: nop
    
            goto L_803358F4;
    }
    // 0x803358C4: nop

    // 0x803358C8: jal         0x80014E80
    // 0x803358CC: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x803358CC: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_3:
    // 0x803358D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803358D4: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x803358D8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803358DC: lwc1        $f12, 0x5E84($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5E84);
    // 0x803358E0: jal         0x80015538
    // 0x803358E4: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803358E4: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x803358E8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803358EC: b           L_80335920
    // 0x803358F0: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
        goto L_80335920;
    // 0x803358F0: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
L_803358F4:
    // 0x803358F4: jal         0x80014E80
    // 0x803358F8: addiu       $a0, $zero, -0xF
    ctx->r4 = ADD32(0, -0XF);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x803358F8: addiu       $a0, $zero, -0xF
    ctx->r4 = ADD32(0, -0XF);
    after_5:
    // 0x803358FC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80335900: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80335904: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x80335908: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8033590C: jal         0x80015538
    // 0x80335910: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80335910: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_6:
    // 0x80335914: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80335918: nop

    // 0x8033591C: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
L_80335920:
    // 0x80335920: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335924: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335928: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x8033592C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80335930: jal         0x80029EF8
    // 0x80335934: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x80335934: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_7:
L_80335938:
    // 0x80335938: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033593C: nop

    // 0x80335940: lwc1        $f16, 0x28($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80335944: nop

    // 0x80335948: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x8033594C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335950: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335954: nop

    // 0x80335958: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x8033595C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335960: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335964: jal         0x80029C40
    // 0x80335968: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x80335968: nop

    after_8:
    // 0x8033596C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335970: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033597C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80335980: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80335984: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335988: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033598C: jal         0x80029018
    // 0x80335990: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x80335990: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x80335994: beq         $v0, $zero, L_803359C0
    if (ctx->r2 == 0) {
        // 0x80335998: nop
    
            goto L_803359C0;
    }
    // 0x80335998: nop

    // 0x8033599C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803359A0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803359A4: nop

    // 0x803359A8: swc1        $f6, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f6.u32l;
    // 0x803359AC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803359B0: nop

    // 0x803359B4: lwc1        $f10, 0x2C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803359B8: nop

    // 0x803359BC: swc1        $f10, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f10.u32l;
L_803359C0:
    // 0x803359C0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803359C4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803359C8: nop

    // 0x803359CC: swc1        $f16, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f16.u32l;
    // 0x803359D0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803359D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803359D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803359DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803359E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803359E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803359E8: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    // 0x803359EC: jal         0x80029F58
    // 0x803359F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80029F58(rdram, ctx);
        goto after_10;
    // 0x803359F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x803359F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803359F8: bne         $v0, $at, L_80335A34
    if (ctx->r2 != ctx->r1) {
        // 0x803359FC: nop
    
            goto L_80335A34;
    }
    // 0x803359FC: nop

    // 0x80335A00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335A04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335A08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335A0C: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x80335A10: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335A14: jal         0x800175F0
    // 0x80335A18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_11;
    // 0x80335A18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80335A1C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335A20: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80335A24: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335A28: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335A2C: nop

    // 0x80335A30: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80335A34:
    // 0x80335A34: b           L_80335A3C
    // 0x80335A38: nop

        goto L_80335A3C;
    // 0x80335A38: nop

L_80335A3C:
    // 0x80335A3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80335A40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80335A44: jr          $ra
    // 0x80335A48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80335A48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803316AC_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803316B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803316B4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803316B8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803316BC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803316C0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803316C4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803316C8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803316CC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803316D0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803316D4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803316D8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803316DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803316E0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x803316E4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803316E8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803316EC: addiu       $a1, $a1, 0x4738
    ctx->r5 = ADD32(ctx->r5, 0X4738);
    // 0x803316F0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803316F4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803316F8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x803316FC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80331700: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80331704: jal         0x80027464
    // 0x80331708: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80331708: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033170C: b           L_80331714
    // 0x80331710: nop

        goto L_80331714;
    // 0x80331710: nop

L_80331714:
    // 0x80331714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033171C: jr          $ra
    // 0x80331720: nop

    return;
    // 0x80331720: nop

;}
RECOMP_FUNC void func_80332F68_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332F68: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332F6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332F70: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332F74: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332F78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332F7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332F80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332F84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332F88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332F90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332F98: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332F9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332FA0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80332FA4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80332FA8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80332FAC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80332FB0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332FB4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332FB8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332FBC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332FC0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332FC4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332FC8: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80332FCC: nop

    // 0x80332FD0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80332FD4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80332FD8: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80332FDC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80332FE0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332FE4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332FE8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332FEC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332FF0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332FF4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332FF8: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80332FFC: nop

    // 0x80333000: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80333004: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333008: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033300C: jal         0x80331930
    // 0x80333010: nop

    func_80331930_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x80333010: nop

    after_0:
    // 0x80333014: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333018: nop

    // 0x8033301C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80333020: nop

    // 0x80333024: bne         $t7, $zero, L_803331F8
    if (ctx->r15 != 0) {
        // 0x80333028: nop
    
            goto L_803331F8;
    }
    // 0x80333028: nop

    // 0x8033302C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80333030: nop

    // 0x80333034: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80333038: nop

    // 0x8033303C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80333040: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80333044: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333048: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033304C: nop

    // 0x80333050: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x80333054: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80333058: nop

    // 0x8033305C: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80333060: nop

    // 0x80333064: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x80333068: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033306C: nop

    // 0x80333070: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x80333074: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80333078: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8033307C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333080: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333084: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333088: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033308C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333090: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333094: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333098: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033309C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803330A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803330A4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803330A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803330AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803330B0: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803330B4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803330B8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x803330BC: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x803330C0: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x803330C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803330C8: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x803330CC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803330D0: nop

    // 0x803330D4: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x803330D8: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803330DC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803330E0: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803330E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803330E8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803330EC: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x803330F0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803330F4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803330F8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803330FC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333100: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333104: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333108: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033310C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333110: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333114: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333118: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033311C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333120: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80333124: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333128: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033312C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80333130: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333134: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80333138: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x8033313C: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80333140: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333144: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x80333148: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033314C: nop

    // 0x80333150: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333154: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333158: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033315C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333160: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333164: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333168: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x8033316C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333170: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80333174: addiu       $t8, $t8, -0x7F84
    ctx->r24 = ADD32(ctx->r24, -0X7F84);
    // 0x80333178: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033317C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80333180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333184: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80333188: jal         0x8001C0EC
    // 0x8033318C: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033318C: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_1:
    // 0x80333190: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80333194: addiu       $t1, $t1, -0x7F58
    ctx->r9 = ADD32(ctx->r9, -0X7F58);
    // 0x80333198: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033319C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803331A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803331A4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803331A8: jal         0x8001C0EC
    // 0x803331AC: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803331AC: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    after_2:
    // 0x803331B0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803331B4: addiu       $t2, $t2, -0x7F30
    ctx->r10 = ADD32(ctx->r10, -0X7F30);
    // 0x803331B8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803331BC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803331C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803331C4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x803331C8: jal         0x8001C0EC
    // 0x803331CC: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x803331CC: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_3:
    // 0x803331D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803331D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803331D8: jal         0x8001BBDC
    // 0x803331DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x803331DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803331E0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803331E4: jal         0x8001BBDC
    // 0x803331E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x803331E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x803331EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803331F0: jal         0x8001BBDC
    // 0x803331F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x803331F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_803331F8:
    // 0x803331F8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803331FC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80333200: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80333204: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80333208: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033320C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333210: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333214: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333218: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033321C: lh          $t5, 0x4238($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4238);
    // 0x80333220: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333224: beq         $t5, $at, L_80333284
    if (ctx->r13 == ctx->r1) {
        // 0x80333228: nop
    
            goto L_80333284;
    }
    // 0x80333228: nop

    // 0x8033322C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80333230: jal         0x8001B44C
    // 0x80333234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x80333234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80333238: beq         $v0, $zero, L_80333284
    if (ctx->r2 == 0) {
        // 0x8033323C: nop
    
            goto L_80333284;
    }
    // 0x8033323C: nop

    // 0x80333240: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333248: jal         0x800281A4
    // 0x8033324C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_8;
    // 0x8033324C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80333250: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80333254: jal         0x8001BB34
    // 0x80333258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_9;
    // 0x80333258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8033325C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80333260: jal         0x8001BBDC
    // 0x80333264: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x80333264: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80333268: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033326C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333274: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x80333278: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033327C: jal         0x800175F0
    // 0x80333280: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_11;
    // 0x80333280: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
L_80333284:
    // 0x80333284: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333288: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033328C: jal         0x8001B44C
    // 0x80333290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_12;
    // 0x80333290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80333294: beq         $v0, $zero, L_803332D0
    if (ctx->r2 == 0) {
        // 0x80333298: nop
    
            goto L_803332D0;
    }
    // 0x80333298: nop

    // 0x8033329C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803332A0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x803332A4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x803332A8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803332AC: nop

    // 0x803332B0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x803332B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803332B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803332BC: jal         0x8001BBDC
    // 0x803332C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_13;
    // 0x803332C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x803332C4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803332C8: jal         0x8001BBDC
    // 0x803332CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_14;
    // 0x803332CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
L_803332D0:
    // 0x803332D0: b           L_803332D8
    // 0x803332D4: nop

        goto L_803332D8;
    // 0x803332D4: nop

L_803332D8:
    // 0x803332D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803332DC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803332E0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803332E4: jr          $ra
    // 0x803332E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803332E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80331BE0_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331BE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331BE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331BE8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331BEC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331BF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331BF4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331BF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331BFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331C00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331C08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331C10: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331C14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331C18: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331C1C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80331C20: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80331C24: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331C28: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331C2C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331C30: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331C34: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331C38: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331C3C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331C40: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80331C44: nop

    // 0x80331C48: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80331C4C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80331C50: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80331C54: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331C58: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331C5C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C60: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331C64: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C68: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331C6C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331C70: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80331C74: nop

    // 0x80331C78: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80331C7C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331C80: nop

    // 0x80331C84: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80331C88: nop

    // 0x80331C8C: bne         $t7, $zero, L_80331E60
    if (ctx->r15 != 0) {
        // 0x80331C90: nop
    
            goto L_80331E60;
    }
    // 0x80331C90: nop

    // 0x80331C94: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331C98: nop

    // 0x80331C9C: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80331CA0: nop

    // 0x80331CA4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80331CA8: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80331CAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331CB0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331CB4: nop

    // 0x80331CB8: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x80331CBC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331CC0: nop

    // 0x80331CC4: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80331CC8: nop

    // 0x80331CCC: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x80331CD0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331CD4: nop

    // 0x80331CD8: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x80331CDC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80331CE0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80331CE4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331CE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331CEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331CF0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331CF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331CF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331CFC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331D00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331D04: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331D08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D0C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80331D10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331D18: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80331D1C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331D20: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80331D24: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80331D28: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80331D2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D30: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x80331D34: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80331D38: nop

    // 0x80331D3C: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80331D40: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80331D44: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331D48: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80331D4C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331D50: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331D54: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80331D58: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331D5C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331D60: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331D64: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331D68: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331D6C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331D70: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331D74: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331D78: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331D7C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331D80: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331D84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D88: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80331D8C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331D90: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331D94: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80331D98: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331D9C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80331DA0: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x80331DA4: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80331DA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331DAC: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x80331DB0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331DB4: nop

    // 0x80331DB8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331DBC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331DC0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331DC4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331DC8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331DCC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331DD0: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80331DD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DD8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80331DDC: addiu       $t8, $t8, -0x7F84
    ctx->r24 = ADD32(ctx->r24, -0X7F84);
    // 0x80331DE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DE4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80331DE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331DEC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80331DF0: jal         0x8001C0EC
    // 0x80331DF4: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331DF4: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_0:
    // 0x80331DF8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331DFC: addiu       $t1, $t1, -0x7F58
    ctx->r9 = ADD32(ctx->r9, -0X7F58);
    // 0x80331E00: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80331E04: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E0C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80331E10: jal         0x8001C0EC
    // 0x80331E14: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80331E14: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    after_1:
    // 0x80331E18: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80331E1C: addiu       $t2, $t2, -0x7F30
    ctx->r10 = ADD32(ctx->r10, -0X7F30);
    // 0x80331E20: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80331E24: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80331E28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E2C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80331E30: jal         0x8001C0EC
    // 0x80331E34: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80331E34: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_2:
    // 0x80331E38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E40: jal         0x8001BBDC
    // 0x80331E44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80331E44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80331E48: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80331E4C: jal         0x8001BBDC
    // 0x80331E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80331E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80331E54: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80331E58: jal         0x8001BBDC
    // 0x80331E5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x80331E5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_80331E60:
    // 0x80331E60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E68: jal         0x8002A1FC
    // 0x80331E6C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_6;
    // 0x80331E6C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_6:
    // 0x80331E70: beq         $v0, $zero, L_80331E90
    if (ctx->r2 == 0) {
        // 0x80331E74: nop
    
            goto L_80331E90;
    }
    // 0x80331E74: nop

    // 0x80331E78: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331E7C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80331E80: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80331E84: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331E88: nop

    // 0x80331E8C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80331E90:
    // 0x80331E90: b           L_80331E98
    // 0x80331E94: nop

        goto L_80331E98;
    // 0x80331E94: nop

L_80331E98:
    // 0x80331E98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331E9C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331EA0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331EA4: jr          $ra
    // 0x80331EA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80331EA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80330E64_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330E68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330E6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330E70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330E74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330E78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330E7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330E80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330E84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330E88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330E8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330E90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330E94: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80330E98: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330E9C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80330EA0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330EA4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330EA8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330EAC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330EB0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330EB4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330EB8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330EBC: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80330EC0: nop

    // 0x80330EC4: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80330EC8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80330ECC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80330ED0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330ED4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330ED8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330EDC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330EE0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330EE4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330EE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330EEC: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80330EF0: nop

    // 0x80330EF4: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80330EF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330EFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F00: jal         0x8033035C
    // 0x80330F04: nop

    func_8033035C_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x80330F04: nop

    after_0:
    // 0x80330F08: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330F0C: nop

    // 0x80330F10: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80330F14: nop

    // 0x80330F18: bne         $t7, $zero, L_80331018
    if (ctx->r15 != 0) {
        // 0x80330F1C: nop
    
            goto L_80331018;
    }
    // 0x80330F1C: nop

    // 0x80330F20: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330F24: nop

    // 0x80330F28: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80330F2C: nop

    // 0x80330F30: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80330F34: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80330F38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F3C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80330F40: addiu       $t1, $t1, -0x7F84
    ctx->r9 = ADD32(ctx->r9, -0X7F84);
    // 0x80330F44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F48: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80330F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F50: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80330F54: jal         0x8001C0EC
    // 0x80330F58: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80330F58: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_1:
    // 0x80330F5C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80330F60: addiu       $t2, $t2, -0x7F58
    ctx->r10 = ADD32(ctx->r10, -0X7F58);
    // 0x80330F64: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330F68: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80330F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F70: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80330F74: jal         0x8001C0EC
    // 0x80330F78: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80330F78: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    after_2:
    // 0x80330F7C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80330F80: addiu       $t3, $t3, -0x7F30
    ctx->r11 = ADD32(ctx->r11, -0X7F30);
    // 0x80330F84: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F88: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80330F8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F90: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80330F94: jal         0x8001C0EC
    // 0x80330F98: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80330F98: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_3:
    // 0x80330F9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FA4: jal         0x8001BBDC
    // 0x80330FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80330FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80330FAC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330FB0: jal         0x8001BBDC
    // 0x80330FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x80330FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80330FB8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FBC: jal         0x8001BBDC
    // 0x80330FC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x80330FC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80330FC4: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80330FC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FCC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330FD0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330FD4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330FD8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330FDC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330FE0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330FE4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80330FE8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330FF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330FF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330FFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331000: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331004: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331008: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x8033100C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331010: nop

    // 0x80331014: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
L_80331018:
    // 0x80331018: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033101C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331020: jal         0x8001B44C
    // 0x80331024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x80331024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80331028: beq         $v0, $zero, L_8033146C
    if (ctx->r2 == 0) {
        // 0x8033102C: nop
    
            goto L_8033146C;
    }
    // 0x8033102C: nop

    // 0x80331030: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331034: nop

    // 0x80331038: lh          $t8, 0xA6($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA6);
    // 0x8033103C: nop

    // 0x80331040: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x80331044: sh          $t1, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r9;
    // 0x80331048: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033104C: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80331050: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80331054: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80331058: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8033105C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331060: lh          $t5, 0x5E20($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X5E20);
    // 0x80331064: nop

    // 0x80331068: bne         $t5, $at, L_803311BC
    if (ctx->r13 != ctx->r1) {
        // 0x8033106C: nop
    
            goto L_803311BC;
    }
    // 0x8033106C: nop

    // 0x80331070: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331074: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80331078: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033107C: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80331080: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80331084: nop

    // 0x80331088: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033108C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80331090: nop

    // 0x80331094: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80331098: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033109C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803310A0: nop

    // 0x803310A4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803310A8: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x803310AC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803310B0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x803310B4: nop

    // 0x803310B8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x803310BC: nop

    // 0x803310C0: slti        $at, $t1, -0x167
    ctx->r1 = SIGNED(ctx->r9) < -0X167 ? 1 : 0;
    // 0x803310C4: bne         $at, $zero, L_803311BC
    if (ctx->r1 != 0) {
        // 0x803310C8: nop
    
            goto L_803311BC;
    }
    // 0x803310C8: nop

    // 0x803310CC: slti        $at, $t1, 0x168
    ctx->r1 = SIGNED(ctx->r9) < 0X168 ? 1 : 0;
    // 0x803310D0: beq         $at, $zero, L_803311BC
    if (ctx->r1 == 0) {
        // 0x803310D4: nop
    
            goto L_803311BC;
    }
    // 0x803310D4: nop

    // 0x803310D8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803310DC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x803310E0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803310E4: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803310E8: lwc1        $f18, 0x0($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X0);
    // 0x803310EC: nop

    // 0x803310F0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803310F4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803310F8: nop

    // 0x803310FC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80331100: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80331104: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80331108: nop

    // 0x8033110C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80331110: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80331114: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80331118: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8033111C: nop

    // 0x80331120: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80331124: nop

    // 0x80331128: slti        $at, $t5, -0x4AF
    ctx->r1 = SIGNED(ctx->r13) < -0X4AF ? 1 : 0;
    // 0x8033112C: bne         $at, $zero, L_803311BC
    if (ctx->r1 != 0) {
        // 0x80331130: nop
    
            goto L_803311BC;
    }
    // 0x80331130: nop

    // 0x80331134: slti        $at, $t5, 0x4B0
    ctx->r1 = SIGNED(ctx->r13) < 0X4B0 ? 1 : 0;
    // 0x80331138: beq         $at, $zero, L_803311BC
    if (ctx->r1 == 0) {
        // 0x8033113C: nop
    
            goto L_803311BC;
    }
    // 0x8033113C: nop

    // 0x80331140: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331144: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331148: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033114C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80331150: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80331154: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80331158: addiu       $a1, $a1, 0x472C
    ctx->r5 = ADD32(ctx->r5, 0X472C);
    // 0x8033115C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331160: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80331164: jal         0x80027464
    // 0x80331168: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x80331168: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x8033116C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80331170: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331174: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331178: beq         $t7, $at, L_803311BC
    if (ctx->r15 == ctx->r1) {
        // 0x8033117C: nop
    
            goto L_803311BC;
    }
    // 0x8033117C: nop

    // 0x80331180: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331184: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331188: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8033118C: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80331190: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331194: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80331198: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033119C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803311A0: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x803311A4: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x803311A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803311AC: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x803311B0: nop

    // 0x803311B4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803311B8: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
L_803311BC:
    // 0x803311BC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803311C0: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x803311C4: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x803311C8: nop

    // 0x803311CC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x803311D0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803311D4: lh          $t5, 0x5E20($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X5E20);
    // 0x803311D8: nop

    // 0x803311DC: bne         $t5, $zero, L_803311F0
    if (ctx->r13 != 0) {
        // 0x803311E0: nop
    
            goto L_803311F0;
    }
    // 0x803311E0: nop

    // 0x803311E4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803311E8: nop

    // 0x803311EC: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_803311F0:
    // 0x803311F0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803311F4: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803311F8: lh          $t9, 0xA6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA6);
    // 0x803311FC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80331200: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x80331204: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80331208: lh          $t1, 0x5E20($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X5E20);
    // 0x8033120C: nop

    // 0x80331210: bne         $t1, $at, L_8033131C
    if (ctx->r9 != ctx->r1) {
        // 0x80331214: nop
    
            goto L_8033131C;
    }
    // 0x80331214: nop

    // 0x80331218: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8033121C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331220: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80331224: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331228: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033122C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331230: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331234: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331238: lh          $t3, 0x4204($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4204);
    // 0x8033123C: nop

    // 0x80331240: bne         $t3, $zero, L_80331270
    if (ctx->r11 != 0) {
        // 0x80331244: nop
    
            goto L_80331270;
    }
    // 0x80331244: nop

    // 0x80331248: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8033124C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331250: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331254: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331258: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033125C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331260: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331264: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331268: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8033126C: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
L_80331270:
    // 0x80331270: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331274: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331278: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8033127C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331280: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331284: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331288: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033128C: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80331290: lh          $t8, 0x4204($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4204);
    // 0x80331294: nop

    // 0x80331298: bne         $t8, $zero, L_803312C8
    if (ctx->r24 != 0) {
        // 0x8033129C: nop
    
            goto L_803312C8;
    }
    // 0x8033129C: nop

    // 0x803312A0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803312A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803312A8: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x803312AC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x803312B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803312B4: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x803312B8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803312BC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803312C0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x803312C4: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
L_803312C8:
    // 0x803312C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312D0: jal         0x8002A1FC
    // 0x803312D4: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x803312D4: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_9:
    // 0x803312D8: beq         $v0, $zero, L_803312F8
    if (ctx->r2 == 0) {
        // 0x803312DC: nop
    
            goto L_803312F8;
    }
    // 0x803312DC: nop

    // 0x803312E0: jal         0x80072190
    // 0x803312E4: nop

    func_80072190(rdram, ctx);
        goto after_10;
    // 0x803312E4: nop

    after_10:
    // 0x803312E8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x803312EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803312F0: jal         0x8001FB3C
    // 0x803312F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_11;
    // 0x803312F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
L_803312F8:
    // 0x803312F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331304: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    // 0x80331308: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033130C: jal         0x800175F0
    // 0x80331310: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_12;
    // 0x80331310: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x80331314: b           L_803313C4
    // 0x80331318: nop

        goto L_803313C4;
    // 0x80331318: nop

L_8033131C:
    // 0x8033131C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80331320: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331324: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80331328: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8033132C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331330: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80331334: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331338: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8033133C: lh          $t4, 0x4204($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4204);
    // 0x80331340: nop

    // 0x80331344: bne         $t4, $zero, L_80331370
    if (ctx->r12 != 0) {
        // 0x80331348: nop
    
            goto L_80331370;
    }
    // 0x80331348: nop

    // 0x8033134C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80331350: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331354: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331358: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033135C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331360: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331364: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331368: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033136C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80331370:
    // 0x80331370: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331374: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331378: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8033137C: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80331380: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331384: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80331388: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033138C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80331390: lh          $t0, 0x4204($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4204);
    // 0x80331394: nop

    // 0x80331398: bne         $t0, $zero, L_803313C4
    if (ctx->r8 != 0) {
        // 0x8033139C: nop
    
            goto L_803313C4;
    }
    // 0x8033139C: nop

    // 0x803313A0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803313A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803313A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803313AC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803313B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803313B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803313B8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803313BC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803313C0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_803313C4:
    // 0x803313C4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803313C8: nop

    // 0x803313CC: lh          $t5, 0xA6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA6);
    // 0x803313D0: nop

    // 0x803313D4: sh          $t5, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r13;
    // 0x803313D8: lh          $t4, 0x2A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2A);
    // 0x803313DC: lui         $a2, 0x8033
    ctx->r6 = S32(0X8033 << 16);
    // 0x803313E0: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x803313E4: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x803313E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313EC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803313F0: addiu       $t7, $t7, -0x7F84
    ctx->r15 = ADD32(ctx->r15, -0X7F84);
    // 0x803313F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313F8: lh          $a2, 0x5E20($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X5E20);
    // 0x803313FC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331404: jal         0x8001C0EC
    // 0x80331408: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_13;
    // 0x80331408: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_13:
    // 0x8033140C: lh          $t9, 0x2A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2A);
    // 0x80331410: lui         $a2, 0x8033
    ctx->r6 = S32(0X8033 << 16);
    // 0x80331414: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x80331418: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x8033141C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80331420: addiu       $t0, $t0, -0x7F58
    ctx->r8 = ADD32(ctx->r8, -0X7F58);
    // 0x80331424: lh          $a2, 0x5E2C($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X5E2C);
    // 0x80331428: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033142C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80331430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331434: jal         0x8001C0EC
    // 0x80331438: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    func_8001C0EC(rdram, ctx);
        goto after_14;
    // 0x80331438: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    after_14:
    // 0x8033143C: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x80331440: lui         $a2, 0x8033
    ctx->r6 = S32(0X8033 << 16);
    // 0x80331444: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80331448: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x8033144C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80331450: addiu       $t3, $t3, -0x7F30
    ctx->r11 = ADD32(ctx->r11, -0X7F30);
    // 0x80331454: lh          $a2, 0x5E38($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X5E38);
    // 0x80331458: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8033145C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80331460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331464: jal         0x8001C0EC
    // 0x80331468: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_15;
    // 0x80331468: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_15:
L_8033146C:
    // 0x8033146C: b           L_80331474
    // 0x80331470: nop

        goto L_80331474;
    // 0x80331470: nop

L_80331474:
    // 0x80331474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331478: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8033147C: jr          $ra
    // 0x80331480: nop

    return;
    // 0x80331480: nop

;}
RECOMP_FUNC void func_803354EC_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803354EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803354F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803354F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803354F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803354FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335500: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335504: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335508: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033550C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335510: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335514: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335518: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033551C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80335520: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80335524: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80335528: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033552C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80335530: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80335534: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80335538: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033553C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80335540: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335544: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80335548: nop

    // 0x8033554C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80335550: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80335554: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80335558: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033555C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335560: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335564: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335568: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033556C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335570: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335574: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80335578: nop

    // 0x8033557C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80335580: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335584: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335588: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033558C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335590: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335594: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335598: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033559C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803355A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803355A4: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x803355A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803355AC: beq         $t8, $at, L_803355D0
    if (ctx->r24 == ctx->r1) {
        // 0x803355B0: nop
    
            goto L_803355D0;
    }
    // 0x803355B0: nop

    // 0x803355B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803355B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803355BC: jal         0x800281A4
    // 0x803355C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x803355C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803355C4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803355C8: jal         0x8002B0E4
    // 0x803355CC: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x803355CC: nop

    after_1:
L_803355D0:
    // 0x803355D0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803355D4: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x803355D8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803355DC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803355E0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803355E4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803355E8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803355EC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803355F0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803355F4: lh          $t1, 0x423A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X423A);
    // 0x803355F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803355FC: beq         $t1, $at, L_80335620
    if (ctx->r9 == ctx->r1) {
        // 0x80335600: nop
    
            goto L_80335620;
    }
    // 0x80335600: nop

    // 0x80335604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033560C: jal         0x800281A4
    // 0x80335610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x80335610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80335614: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80335618: jal         0x8002B0E4
    // 0x8033561C: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x8033561C: nop

    after_3:
L_80335620:
    // 0x80335620: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335624: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335628: jal         0x8002B0E4
    // 0x8033562C: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x8033562C: nop

    after_4:
    // 0x80335630: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335634: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335638: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033563C: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x80335640: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335644: jal         0x800175F0
    // 0x80335648: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x80335648: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x8033564C: b           L_80335654
    // 0x80335650: nop

        goto L_80335654;
    // 0x80335650: nop

L_80335654:
    // 0x80335654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335658: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033565C: jr          $ra
    // 0x80335660: nop

    return;
    // 0x80335660: nop

;}
RECOMP_FUNC void func_803327B4_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803327B4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x803327B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803327BC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x803327C0: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803327C4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x803327C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803327CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803327D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803327D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803327D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803327DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803327E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803327E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803327E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803327EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803327F0: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x803327F4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803327F8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x803327FC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80332800: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332804: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332808: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033280C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332810: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332814: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332818: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x8033281C: nop

    // 0x80332820: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x80332824: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80332828: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x8033282C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80332830: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332834: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332838: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033283C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332840: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332844: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332848: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x8033284C: nop

    // 0x80332850: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x80332854: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332858: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033285C: jal         0x80331930
    // 0x80332860: nop

    func_80331930_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x80332860: nop

    after_0:
    // 0x80332864: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80332868: nop

    // 0x8033286C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80332870: nop

    // 0x80332874: bne         $t7, $zero, L_803329DC
    if (ctx->r15 != 0) {
        // 0x80332878: nop
    
            goto L_803329DC;
    }
    // 0x80332878: nop

    // 0x8033287C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80332880: nop

    // 0x80332884: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80332888: nop

    // 0x8033288C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80332890: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80332894: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80332898: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x8033289C: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x803328A0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x803328A4: nop

    // 0x803328A8: sh          $zero, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = 0;
    // 0x803328AC: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x803328B0: nop

    // 0x803328B4: sh          $zero, 0xB0($t4)
    MEM_H(0XB0, ctx->r12) = 0;
    // 0x803328B8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803328BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803328C0: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x803328C4: nop

    // 0x803328C8: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x803328CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803328D0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803328D4: addiu       $t6, $t6, -0x7F84
    ctx->r14 = ADD32(ctx->r14, -0X7F84);
    // 0x803328D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803328DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803328E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803328E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803328E8: jal         0x8001C0EC
    // 0x803328EC: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803328EC: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_1:
    // 0x803328F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803328F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803328F8: jal         0x8001BBDC
    // 0x803328FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803328FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332900: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80332904: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80332908: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033290C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332910: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332914: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332918: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8033291C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332920: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332924: lh          $t0, 0x4238($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4238);
    // 0x80332928: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033292C: beq         $t0, $at, L_80332960
    if (ctx->r8 == ctx->r1) {
        // 0x80332930: nop
    
            goto L_80332960;
    }
    // 0x80332930: nop

    // 0x80332934: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80332938: addiu       $t8, $t8, -0x7F58
    ctx->r24 = ADD32(ctx->r24, -0X7F58);
    // 0x8033293C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80332940: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80332944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332948: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8033294C: jal         0x8001C0EC
    // 0x80332950: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80332950: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    after_3:
    // 0x80332954: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80332958: jal         0x8001BBDC
    // 0x8033295C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x8033295C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_80332960:
    // 0x80332960: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80332964: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80332968: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033296C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332970: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332974: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332978: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033297C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332980: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332984: lh          $t3, 0x423A($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X423A);
    // 0x80332988: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033298C: beq         $t3, $at, L_803329C0
    if (ctx->r11 == ctx->r1) {
        // 0x80332990: nop
    
            goto L_803329C0;
    }
    // 0x80332990: nop

    // 0x80332994: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80332998: addiu       $t4, $t4, -0x7F30
    ctx->r12 = ADD32(ctx->r12, -0X7F30);
    // 0x8033299C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x803329A0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803329A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803329A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803329AC: jal         0x8001C0EC
    // 0x803329B0: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x803329B0: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_5:
    // 0x803329B4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x803329B8: jal         0x8001BBDC
    // 0x803329BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x803329BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_803329C0:
    // 0x803329C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803329CC: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x803329D0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803329D4: jal         0x800175F0
    // 0x803329D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x803329D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
L_803329DC:
    // 0x803329DC: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x803329E0: nop

    // 0x803329E4: lh          $t6, 0xB0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB0);
    // 0x803329E8: nop

    // 0x803329EC: bne         $t6, $zero, L_80332AC0
    if (ctx->r14 != 0) {
        // 0x803329F0: nop
    
            goto L_80332AC0;
    }
    // 0x803329F0: nop

    // 0x803329F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329FC: jal         0x80028FA0
    // 0x80332A00: nop

    func_80028FA0(rdram, ctx);
        goto after_8;
    // 0x80332A00: nop

    after_8:
    // 0x80332A04: beq         $v0, $zero, L_80332AC0
    if (ctx->r2 == 0) {
        // 0x80332A08: nop
    
            goto L_80332AC0;
    }
    // 0x80332A08: nop

    // 0x80332A0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A14: jal         0x80029B60
    // 0x80332A18: nop

    func_80029B60(rdram, ctx);
        goto after_9;
    // 0x80332A18: nop

    after_9:
    // 0x80332A1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A20: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332A24: addiu       $t7, $t7, -0x7F84
    ctx->r15 = ADD32(ctx->r15, -0X7F84);
    // 0x80332A28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A2C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332A30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332A34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80332A38: jal         0x8001C0EC
    // 0x80332A3C: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_10;
    // 0x80332A3C: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_10:
    // 0x80332A40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A48: jal         0x8001BBDC
    // 0x80332A4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x80332A4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80332A50: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80332A54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332A58: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80332A5C: nop

    // 0x80332A60: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x80332A64: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80332A68: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x80332A6C: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x80332A70: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80332A74: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80332A78: sh          $t1, 0xB0($t2)
    MEM_H(0XB0, ctx->r10) = ctx->r9;
    // 0x80332A7C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332A80: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80332A84: nop

    // 0x80332A88: swc1        $f8, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f8.u32l;
    // 0x80332A8C: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80332A90: nop

    // 0x80332A94: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80332A98: nop

    // 0x80332A9C: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x80332AA0: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80332AA4: nop

    // 0x80332AA8: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
    // 0x80332AAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AB4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80332AB8: jal         0x80029EF8
    // 0x80332ABC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_12;
    // 0x80332ABC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_12:
L_80332AC0:
    // 0x80332AC0: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80332AC4: nop

    // 0x80332AC8: lh          $t7, 0xB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB0);
    // 0x80332ACC: nop

    // 0x80332AD0: beq         $t7, $zero, L_80332BF0
    if (ctx->r15 == 0) {
        // 0x80332AD4: nop
    
            goto L_80332BF0;
    }
    // 0x80332AD4: nop

    // 0x80332AD8: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80332ADC: nop

    // 0x80332AE0: lwc1        $f10, 0x28($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80332AE4: nop

    // 0x80332AE8: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x80332AEC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332AF0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80332AF4: nop

    // 0x80332AF8: swc1        $f16, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f16.u32l;
    // 0x80332AFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B04: jal         0x80029C40
    // 0x80332B08: nop

    func_80029C40(rdram, ctx);
        goto after_13;
    // 0x80332B08: nop

    after_13:
    // 0x80332B0C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332B10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332B14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332B20: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80332B24: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332B28: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80332B2C: jal         0x80029018
    // 0x80332B30: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_14;
    // 0x80332B30: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x80332B34: beq         $v0, $zero, L_80332B6C
    if (ctx->r2 == 0) {
        // 0x80332B38: nop
    
            goto L_80332B6C;
    }
    // 0x80332B38: nop

    // 0x80332B3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332B40: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80332B44: nop

    // 0x80332B48: swc1        $f6, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f6.u32l;
    // 0x80332B4C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80332B50: nop

    // 0x80332B54: lwc1        $f8, 0x2C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80332B58: nop

    // 0x80332B5C: swc1        $f8, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f8.u32l;
    // 0x80332B60: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80332B64: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80332B68: sh          $t2, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r10;
L_80332B6C:
    // 0x80332B6C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80332B70: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80332B74: nop

    // 0x80332B78: swc1        $f10, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f10.u32l;
    // 0x80332B7C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80332B80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332B84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B8C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80332B90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332B94: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332B98: jal         0x80029F58
    // 0x80332B9C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_15;
    // 0x80332B9C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_15:
    // 0x80332BA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332BA4: bne         $v0, $at, L_80332BE8
    if (ctx->r2 != ctx->r1) {
        // 0x80332BA8: nop
    
            goto L_80332BE8;
    }
    // 0x80332BA8: nop

    // 0x80332BAC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332BB0: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80332BB4: nop

    // 0x80332BB8: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x80332BBC: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80332BC0: nop

    // 0x80332BC4: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80332BC8: nop

    // 0x80332BCC: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80332BD0: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80332BD4: nop

    // 0x80332BD8: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x80332BDC: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80332BE0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80332BE4: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
L_80332BE8:
    // 0x80332BE8: b           L_80332D50
    // 0x80332BEC: nop

        goto L_80332D50;
    // 0x80332BEC: nop

L_80332BF0:
    // 0x80332BF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332BF4: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80332BF8: nop

    // 0x80332BFC: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x80332C00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C08: jal         0x80029C40
    // 0x80332C0C: nop

    func_80029C40(rdram, ctx);
        goto after_16;
    // 0x80332C0C: nop

    after_16:
    // 0x80332C10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332C14: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332C18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332C24: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80332C28: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332C2C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332C30: jal         0x80029018
    // 0x80332C34: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_17;
    // 0x80332C34: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x80332C38: beq         $v0, $zero, L_80332D00
    if (ctx->r2 == 0) {
        // 0x80332C3C: nop
    
            goto L_80332D00;
    }
    // 0x80332C3C: nop

    // 0x80332C40: jal         0x800297DC
    // 0x80332C44: nop

    func_800297DC(rdram, ctx);
        goto after_18;
    // 0x80332C44: nop

    after_18:
    // 0x80332C48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C50: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80332C54: jal         0x80029A9C
    // 0x80332C58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029A9C(rdram, ctx);
        goto after_19;
    // 0x80332C58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_19:
    // 0x80332C5C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332C60: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80332C64: nop

    // 0x80332C68: swc1        $f10, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f10.u32l;
    // 0x80332C6C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80332C70: nop

    // 0x80332C74: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80332C78: nop

    // 0x80332C7C: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x80332C80: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80332C84: nop

    // 0x80332C88: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x80332C8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C90: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80332C94: addiu       $t4, $t4, -0x7F84
    ctx->r12 = ADD32(ctx->r12, -0X7F84);
    // 0x80332C98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C9C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80332CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332CA4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80332CA8: jal         0x8001C0EC
    // 0x80332CAC: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_20;
    // 0x80332CAC: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_20:
    // 0x80332CB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CB8: jal         0x8001BBDC
    // 0x80332CBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_21;
    // 0x80332CBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80332CC0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80332CC4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332CC8: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80332CCC: nop

    // 0x80332CD0: swc1        $f16, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f16.u32l;
    // 0x80332CD4: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80332CD8: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x80332CDC: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80332CE0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80332CE4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80332CE8: sh          $t9, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r25;
    // 0x80332CEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CF4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80332CF8: jal         0x80029EF8
    // 0x80332CFC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_22;
    // 0x80332CFC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_22:
L_80332D00:
    // 0x80332D00: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332D04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332D08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D10: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80332D14: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x80332D18: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332D1C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80332D20: jal         0x800295C0
    // 0x80332D24: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_23;
    // 0x80332D24: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_23:
    // 0x80332D28: beq         $v0, $zero, L_80332D40
    if (ctx->r2 == 0) {
        // 0x80332D2C: nop
    
            goto L_80332D40;
    }
    // 0x80332D2C: nop

    // 0x80332D30: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80332D34: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80332D38: b           L_80332D50
    // 0x80332D3C: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
        goto L_80332D50;
    // 0x80332D3C: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
L_80332D40:
    // 0x80332D40: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80332D44: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80332D48: nop

    // 0x80332D4C: swc1        $f8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f8.u32l;
L_80332D50:
    // 0x80332D50: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80332D54: nop

    // 0x80332D58: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80332D5C: nop

    // 0x80332D60: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80332D64: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x80332D68: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80332D6C: nop

    // 0x80332D70: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80332D74: nop

    // 0x80332D78: beq         $t6, $zero, L_80332D90
    if (ctx->r14 == 0) {
        // 0x80332D7C: nop
    
            goto L_80332D90;
    }
    // 0x80332D7C: nop

    // 0x80332D80: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x80332D84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332D88: bne         $t7, $at, L_80332DD8
    if (ctx->r15 != ctx->r1) {
        // 0x80332D8C: nop
    
            goto L_80332DD8;
    }
    // 0x80332D8C: nop

L_80332D90:
    // 0x80332D90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332D94: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80332D98: nop

    // 0x80332D9C: swc1        $f10, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f10.u32l;
    // 0x80332DA0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80332DA4: nop

    // 0x80332DA8: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80332DAC: nop

    // 0x80332DB0: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x80332DB4: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80332DB8: nop

    // 0x80332DBC: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x80332DC0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80332DC4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80332DC8: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80332DCC: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80332DD0: nop

    // 0x80332DD4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80332DD8:
    // 0x80332DD8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80332DDC: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80332DE0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80332DE4: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332DE8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332DEC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332DF0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332DF4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332DF8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332DFC: lh          $t5, 0x4238($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4238);
    // 0x80332E00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332E04: beq         $t5, $at, L_80332E90
    if (ctx->r13 == ctx->r1) {
        // 0x80332E08: nop
    
            goto L_80332E90;
    }
    // 0x80332E08: nop

    // 0x80332E0C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80332E10: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80332E14: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332E18: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332E1C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332E20: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332E24: lwc1        $f16, 0x24($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80332E28: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332E2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E30: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332E34: swc1        $f16, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f16.u32l;
    // 0x80332E38: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80332E3C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80332E40: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332E44: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332E48: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332E4C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332E50: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80332E54: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332E58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E5C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332E60: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80332E64: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80332E68: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80332E6C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332E70: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332E74: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332E78: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332E7C: lwc1        $f4, 0x2C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80332E80: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332E84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E88: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332E8C: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
L_80332E90:
    // 0x80332E90: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80332E94: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80332E98: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80332E9C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332EA0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332EA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332EA8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332EAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332EB0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332EB4: lh          $t9, 0x423A($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X423A);
    // 0x80332EB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332EBC: beq         $t9, $at, L_80332F48
    if (ctx->r25 == ctx->r1) {
        // 0x80332EC0: nop
    
            goto L_80332F48;
    }
    // 0x80332EC0: nop

    // 0x80332EC4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80332EC8: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80332ECC: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80332ED0: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332ED4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332ED8: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332EDC: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80332EE0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332EE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332EE8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332EEC: swc1        $f6, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f6.u32l;
    // 0x80332EF0: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80332EF4: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80332EF8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332EFC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332F00: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332F04: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332F08: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80332F0C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332F10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F14: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332F18: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80332F1C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80332F20: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80332F24: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332F28: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332F2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332F30: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332F34: lwc1        $f10, 0x2C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80332F38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332F3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F40: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332F44: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
L_80332F48:
    // 0x80332F48: b           L_80332F50
    // 0x80332F4C: nop

        goto L_80332F50;
    // 0x80332F4C: nop

L_80332F50:
    // 0x80332F50: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F54: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80332F58: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332F5C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80332F60: jr          $ra
    // 0x80332F64: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80332F64: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_803332EC_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803332EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803332F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803332F4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803332F8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803332FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333300: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333304: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333308: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033330C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333310: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333314: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333318: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033331C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333320: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333324: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80333328: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033332C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80333330: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80333334: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333338: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033333C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333340: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333344: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333348: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033334C: lh          $t2, 0x423A($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X423A);
    // 0x80333350: nop

    // 0x80333354: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80333358: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033335C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333360: jal         0x80331930
    // 0x80333364: nop

    func_80331930_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x80333364: nop

    after_0:
    // 0x80333368: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033336C: nop

    // 0x80333370: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80333374: nop

    // 0x80333378: bne         $t4, $zero, L_803334A4
    if (ctx->r12 != 0) {
        // 0x8033337C: nop
    
            goto L_803334A4;
    }
    // 0x8033337C: nop

    // 0x80333380: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80333384: nop

    // 0x80333388: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033338C: nop

    // 0x80333390: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80333394: sb          $t7, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r15;
    // 0x80333398: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033339C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803333A0: nop

    // 0x803333A4: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
    // 0x803333A8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803333AC: nop

    // 0x803333B0: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x803333B4: nop

    // 0x803333B8: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x803333BC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803333C0: nop

    // 0x803333C4: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x803333C8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x803333CC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x803333D0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803333D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803333D8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803333DC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803333E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803333E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803333E8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803333EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803333F0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803333F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803333F8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803333FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333400: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333404: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80333408: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033340C: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80333410: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80333414: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80333418: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033341C: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x80333420: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80333424: nop

    // 0x80333428: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8033342C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80333430: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333434: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80333438: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033343C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333440: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80333444: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333448: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8033344C: addiu       $t9, $t9, -0x7F84
    ctx->r25 = ADD32(ctx->r25, -0X7F84);
    // 0x80333450: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333454: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80333458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033345C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80333460: jal         0x8001C0EC
    // 0x80333464: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80333464: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_1:
    // 0x80333468: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8033346C: addiu       $t0, $t0, -0x7F30
    ctx->r8 = ADD32(ctx->r8, -0X7F30);
    // 0x80333470: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80333474: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80333478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033347C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80333480: jal         0x8001C0EC
    // 0x80333484: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80333484: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_2:
    // 0x80333488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033348C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333490: jal         0x8001BBDC
    // 0x80333494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80333494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80333498: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033349C: jal         0x8001BBDC
    // 0x803334A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x803334A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_803334A4:
    // 0x803334A4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x803334A8: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x803334AC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803334B0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803334B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803334B8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803334BC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803334C0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803334C4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803334C8: lh          $t3, 0x423A($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X423A);
    // 0x803334CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803334D0: beq         $t3, $at, L_80333530
    if (ctx->r11 == ctx->r1) {
        // 0x803334D4: nop
    
            goto L_80333530;
    }
    // 0x803334D4: nop

    // 0x803334D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803334DC: jal         0x8001B44C
    // 0x803334E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x803334E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x803334E4: beq         $v0, $zero, L_80333530
    if (ctx->r2 == 0) {
        // 0x803334E8: nop
    
            goto L_80333530;
    }
    // 0x803334E8: nop

    // 0x803334EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803334F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803334F4: jal         0x800281A4
    // 0x803334F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_6;
    // 0x803334F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x803334FC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80333500: jal         0x8001BB34
    // 0x80333504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_7;
    // 0x80333504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80333508: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033350C: jal         0x8001BBDC
    // 0x80333510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x80333510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80333514: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033351C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333520: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x80333524: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333528: jal         0x800175F0
    // 0x8033352C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x8033352C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
L_80333530:
    // 0x80333530: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333534: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333538: jal         0x8001B44C
    // 0x8033353C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_10;
    // 0x8033353C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80333540: beq         $v0, $zero, L_80333570
    if (ctx->r2 == 0) {
        // 0x80333544: nop
    
            goto L_80333570;
    }
    // 0x80333544: nop

    // 0x80333548: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033354C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80333550: sh          $t4, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r12;
    // 0x80333554: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80333558: nop

    // 0x8033355C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80333560: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333564: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333568: jal         0x8001BBDC
    // 0x8033356C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x8033356C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
L_80333570:
    // 0x80333570: b           L_80333578
    // 0x80333574: nop

        goto L_80333578;
    // 0x80333574: nop

L_80333578:
    // 0x80333578: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033357C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80333580: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333584: jr          $ra
    // 0x80333588: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80333588: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80333D14_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80333D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333D1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D24: jal         0x8002B0E4
    // 0x80333D28: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80333D28: nop

    after_0:
    // 0x80333D2C: b           L_80333D34
    // 0x80333D30: nop

        goto L_80333D34;
    // 0x80333D30: nop

L_80333D34:
    // 0x80333D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80333D3C: jr          $ra
    // 0x80333D40: nop

    return;
    // 0x80333D40: nop

;}
RECOMP_FUNC void func_803336E8_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803336E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803336EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803336F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803336F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803336F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803336FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333700: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333704: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333708: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033370C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333710: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333714: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80333718: nop

    // 0x8033371C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80333720: sltiu       $at, $t9, 0x7
    ctx->r1 = ctx->r25 < 0X7 ? 1 : 0;
    // 0x80333724: beq         $at, $zero, L_803337B8
    if (ctx->r1 == 0) {
        // 0x80333728: nop
    
            goto L_803337B8;
    }
    // 0x80333728: nop

    // 0x8033372C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333730: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333734: addu        $at, $at, $t9
    gpr jr_addend_80333740 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333738: lw          $t9, 0x5E50($at)
    ctx->r25 = ADD32(ctx->r1, 0X5E50);
    // 0x8033373C: nop

    // 0x80333740: jr          $t9
    // 0x80333744: nop

    switch (jr_addend_80333740 >> 2) {
        case 0: goto L_80333748; break;
        case 1: goto L_80333758; break;
        case 2: goto L_80333768; break;
        case 3: goto L_80333778; break;
        case 4: goto L_80333788; break;
        case 5: goto L_80333798; break;
        case 6: goto L_803337A8; break;
        default: switch_error(__func__, 0x80333740, 0x80335E50);
    }
    // 0x80333744: nop

L_80333748:
    // 0x80333748: jal         0x80331BE0
    // 0x8033374C: nop

    func_80331BE0_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x8033374C: nop

    after_0:
    // 0x80333750: b           L_803337C0
    // 0x80333754: nop

        goto L_803337C0;
    // 0x80333754: nop

L_80333758:
    // 0x80333758: jal         0x80331EAC
    // 0x8033375C: nop

    func_80331EAC_unk_bin_43(rdram, ctx);
        goto after_1;
    // 0x8033375C: nop

    after_1:
    // 0x80333760: b           L_803337C0
    // 0x80333764: nop

        goto L_803337C0;
    // 0x80333764: nop

L_80333768:
    // 0x80333768: jal         0x803322E4
    // 0x8033376C: nop

    func_803322E4_unk_bin_43(rdram, ctx);
        goto after_2;
    // 0x8033376C: nop

    after_2:
    // 0x80333770: b           L_803337C0
    // 0x80333774: nop

        goto L_803337C0;
    // 0x80333774: nop

L_80333778:
    // 0x80333778: jal         0x803327B4
    // 0x8033377C: nop

    func_803327B4_unk_bin_43(rdram, ctx);
        goto after_3;
    // 0x8033377C: nop

    after_3:
    // 0x80333780: b           L_803337C0
    // 0x80333784: nop

        goto L_803337C0;
    // 0x80333784: nop

L_80333788:
    // 0x80333788: jal         0x80332F68
    // 0x8033378C: nop

    func_80332F68_unk_bin_43(rdram, ctx);
        goto after_4;
    // 0x8033378C: nop

    after_4:
    // 0x80333790: b           L_803337C0
    // 0x80333794: nop

        goto L_803337C0;
    // 0x80333794: nop

L_80333798:
    // 0x80333798: jal         0x803332EC
    // 0x8033379C: nop

    func_803332EC_unk_bin_43(rdram, ctx);
        goto after_5;
    // 0x8033379C: nop

    after_5:
    // 0x803337A0: b           L_803337C0
    // 0x803337A4: nop

        goto L_803337C0;
    // 0x803337A4: nop

L_803337A8:
    // 0x803337A8: jal         0x8033358C
    // 0x803337AC: nop

    func_8033358C_unk_bin_43(rdram, ctx);
        goto after_6;
    // 0x803337AC: nop

    after_6:
    // 0x803337B0: b           L_803337C0
    // 0x803337B4: nop

        goto L_803337C0;
    // 0x803337B4: nop

L_803337B8:
    // 0x803337B8: b           L_803337C0
    // 0x803337BC: nop

        goto L_803337C0;
    // 0x803337BC: nop

L_803337C0:
    // 0x803337C0: b           L_803337C8
    // 0x803337C4: nop

        goto L_803337C8;
    // 0x803337C4: nop

L_803337C8:
    // 0x803337C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803337CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803337D0: jr          $ra
    // 0x803337D4: nop

    return;
    // 0x803337D4: nop

;}
RECOMP_FUNC void func_803315E0_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803315E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803315E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803315E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803315EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803315F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803315F4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x803315F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803315FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331600: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331604: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331608: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033160C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80331610: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80331614: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331618: beq         $s0, $at, L_8033164C
    if (ctx->r16 == ctx->r1) {
        // 0x8033161C: nop
    
            goto L_8033164C;
    }
    // 0x8033161C: nop

    // 0x80331620: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331624: beq         $s0, $at, L_8033165C
    if (ctx->r16 == ctx->r1) {
        // 0x80331628: nop
    
            goto L_8033165C;
    }
    // 0x80331628: nop

    // 0x8033162C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80331630: beq         $s0, $at, L_8033166C
    if (ctx->r16 == ctx->r1) {
        // 0x80331634: nop
    
            goto L_8033166C;
    }
    // 0x80331634: nop

    // 0x80331638: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8033163C: beq         $s0, $at, L_8033167C
    if (ctx->r16 == ctx->r1) {
        // 0x80331640: nop
    
            goto L_8033167C;
    }
    // 0x80331640: nop

    // 0x80331644: b           L_8033168C
    // 0x80331648: nop

        goto L_8033168C;
    // 0x80331648: nop

L_8033164C:
    // 0x8033164C: jal         0x8033076C
    // 0x80331650: nop

    func_8033076C_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x80331650: nop

    after_0:
    // 0x80331654: b           L_80331694
    // 0x80331658: nop

        goto L_80331694;
    // 0x80331658: nop

L_8033165C:
    // 0x8033165C: jal         0x80330A38
    // 0x80331660: nop

    func_80330A38_unk_bin_43(rdram, ctx);
        goto after_1;
    // 0x80331660: nop

    after_1:
    // 0x80331664: b           L_80331694
    // 0x80331668: nop

        goto L_80331694;
    // 0x80331668: nop

L_8033166C:
    // 0x8033166C: jal         0x80330E64
    // 0x80331670: nop

    func_80330E64_unk_bin_43(rdram, ctx);
        goto after_2;
    // 0x80331670: nop

    after_2:
    // 0x80331674: b           L_80331694
    // 0x80331678: nop

        goto L_80331694;
    // 0x80331678: nop

L_8033167C:
    // 0x8033167C: jal         0x80331484
    // 0x80331680: nop

    func_80331484_unk_bin_43(rdram, ctx);
        goto after_3;
    // 0x80331680: nop

    after_3:
    // 0x80331684: b           L_80331694
    // 0x80331688: nop

        goto L_80331694;
    // 0x80331688: nop

L_8033168C:
    // 0x8033168C: b           L_80331694
    // 0x80331690: nop

        goto L_80331694;
    // 0x80331690: nop

L_80331694:
    // 0x80331694: b           L_8033169C
    // 0x80331698: nop

        goto L_8033169C;
    // 0x80331698: nop

L_8033169C:
    // 0x8033169C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803316A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803316A4: jr          $ra
    // 0x803316A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803316A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033358C_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033358C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333594: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333598: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033359C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803335A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803335A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803335A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803335AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803335B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803335B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803335B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803335BC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803335C0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803335C4: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x803335C8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803335CC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803335D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803335D4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803335D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803335DC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803335E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803335E4: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x803335E8: nop

    // 0x803335EC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x803335F0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803335F4: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x803335F8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803335FC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80333600: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333604: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333608: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033360C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333610: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333614: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80333618: nop

    // 0x8033361C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80333620: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333624: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333628: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033362C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333630: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333634: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333638: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033363C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333640: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333644: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x80333648: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033364C: beq         $t8, $at, L_80333670
    if (ctx->r24 == ctx->r1) {
        // 0x80333650: nop
    
            goto L_80333670;
    }
    // 0x80333650: nop

    // 0x80333654: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333658: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033365C: jal         0x800281A4
    // 0x80333660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x80333660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80333664: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333668: jal         0x8002B0E4
    // 0x8033366C: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x8033366C: nop

    after_1:
L_80333670:
    // 0x80333670: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80333674: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80333678: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033367C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333680: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333684: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333688: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033368C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333690: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333694: lh          $t1, 0x423A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X423A);
    // 0x80333698: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033369C: beq         $t1, $at, L_803336C0
    if (ctx->r9 == ctx->r1) {
        // 0x803336A0: nop
    
            goto L_803336C0;
    }
    // 0x803336A0: nop

    // 0x803336A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803336A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803336AC: jal         0x800281A4
    // 0x803336B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x803336B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803336B4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803336B8: jal         0x8002B0E4
    // 0x803336BC: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x803336BC: nop

    after_3:
L_803336C0:
    // 0x803336C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803336C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803336C8: jal         0x8002B0E4
    // 0x803336CC: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x803336CC: nop

    after_4:
    // 0x803336D0: b           L_803336D8
    // 0x803336D4: nop

        goto L_803336D8;
    // 0x803336D4: nop

L_803336D8:
    // 0x803336D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803336DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803336E0: jr          $ra
    // 0x803336E4: nop

    return;
    // 0x803336E4: nop

;}
RECOMP_FUNC void func_8033035C_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033035C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330364: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80330368: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033036C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80330370: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330374: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330378: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033037C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330380: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330384: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330388: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033038C: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x80330390: nop

    // 0x80330394: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x80330398: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8033039C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803303A0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803303A4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803303A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803303AC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803303B0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803303B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803303B8: lh          $t1, 0x423A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X423A);
    // 0x803303BC: nop

    // 0x803303C0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x803303C4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x803303C8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803303CC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803303D0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803303D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803303D8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803303DC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803303E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803303E4: lh          $t4, 0x4204($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4204);
    // 0x803303E8: nop

    // 0x803303EC: beq         $t4, $zero, L_803306D0
    if (ctx->r12 == 0) {
        // 0x803303F0: nop
    
            goto L_803306D0;
    }
    // 0x803303F0: nop

    // 0x803303F4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x803303F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330404: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033040C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330410: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330414: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x80330418: sh          $t5, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r13;
    // 0x8033041C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80330420: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80330424: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330428: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033042C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330430: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330434: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330438: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x8033043C: lh          $s0, 0x4204($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4204);
    // 0x80330440: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80330444: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x80330448: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8033044C: sltiu       $t1, $s0, 0x1
    ctx->r9 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80330450: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80330454: jal         0x8001BB34
    // 0x80330458: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80330458: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8033045C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80330460: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330464: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330468: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033046C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330470: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330474: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330478: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033047C: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x80330480: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330484: beq         $t4, $at, L_803304F4
    if (ctx->r12 == ctx->r1) {
        // 0x80330488: nop
    
            goto L_803304F4;
    }
    // 0x80330488: nop

    // 0x8033048C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330490: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330494: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330498: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033049C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803304A0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803304A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803304A8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803304AC: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x803304B0: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
    // 0x803304B4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x803304B8: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x803304BC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803304C0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803304C4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803304C8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803304CC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803304D0: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x803304D4: lh          $s0, 0x4204($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4204);
    // 0x803304D8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803304DC: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x803304E0: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x803304E4: sltiu       $t8, $s0, 0x1
    ctx->r24 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803304E8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803304EC: jal         0x8001BB34
    // 0x803304F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x803304F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_803304F4:
    // 0x803304F4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x803304F8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803304FC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330500: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330504: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330508: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033050C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330510: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330514: lh          $t4, 0x423A($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X423A);
    // 0x80330518: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033051C: beq         $t4, $at, L_8033058C
    if (ctx->r12 == ctx->r1) {
        // 0x80330520: nop
    
            goto L_8033058C;
    }
    // 0x80330520: nop

    // 0x80330524: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80330528: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033052C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330530: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330534: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330538: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033053C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330540: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330544: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x80330548: sh          $t5, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r13;
    // 0x8033054C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80330550: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80330554: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330558: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033055C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330560: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330564: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330568: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x8033056C: lh          $s0, 0x4204($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4204);
    // 0x80330570: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80330574: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x80330578: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x8033057C: sltiu       $t8, $s0, 0x1
    ctx->r24 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80330580: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80330584: jal         0x8001BB34
    // 0x80330588: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80330588: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_8033058C:
    // 0x8033058C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80330590: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330594: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330598: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033059C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803305A0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803305A4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803305A8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803305AC: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x803305B0: lh          $t5, 0xB4($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XB4);
    // 0x803305B4: nop

    // 0x803305B8: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x803305BC: sh          $t7, 0xB4($t6)
    MEM_H(0XB4, ctx->r14) = ctx->r15;
    // 0x803305C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803305C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803305C8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803305CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803305D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803305D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803305D8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803305DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803305E0: addu        $t9, $t1, $t8
    ctx->r25 = ADD32(ctx->r9, ctx->r24);
    // 0x803305E4: lh          $t2, 0xB4($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XB4);
    // 0x803305E8: nop

    // 0x803305EC: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x803305F0: sh          $t3, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r11;
    // 0x803305F4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x803305F8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803305FC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330600: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330604: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330608: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033060C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330610: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330614: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x80330618: lh          $t0, 0xB4($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XB4);
    // 0x8033061C: nop

    // 0x80330620: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80330624: sh          $t1, 0xB4($t6)
    MEM_H(0XB4, ctx->r14) = ctx->r9;
    // 0x80330628: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8033062C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330630: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80330634: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80330638: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033063C: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80330640: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330644: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330648: lh          $t3, 0x4204($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4204);
    // 0x8033064C: nop

    // 0x80330650: bne         $t3, $zero, L_803306C8
    if (ctx->r11 != 0) {
        // 0x80330654: nop
    
            goto L_803306C8;
    }
    // 0x80330654: nop

    // 0x80330658: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8033065C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330660: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330664: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330668: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033066C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330670: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330674: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330678: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033067C: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
    // 0x80330680: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330684: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330688: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8033068C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80330690: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330694: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80330698: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033069C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803306A0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803306A4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x803306A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306AC: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x803306B0: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x803306B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803306B8: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x803306BC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803306C0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803306C4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_803306C8:
    // 0x803306C8: b           L_80330754
    // 0x803306CC: nop

        goto L_80330754;
    // 0x803306CC: nop

L_803306D0:
    // 0x803306D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803306D4: jal         0x8001BB34
    // 0x803306D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x803306D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803306DC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803306E0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803306E4: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x803306E8: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x803306EC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803306F0: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x803306F4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803306F8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803306FC: lh          $t3, 0x4238($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4238);
    // 0x80330700: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330704: beq         $t3, $at, L_80330718
    if (ctx->r11 == ctx->r1) {
        // 0x80330708: nop
    
            goto L_80330718;
    }
    // 0x80330708: nop

    // 0x8033070C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80330710: jal         0x8001BB34
    // 0x80330714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80330714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_80330718:
    // 0x80330718: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8033071C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330720: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80330724: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x80330728: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033072C: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x80330730: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330734: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80330738: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x8033073C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330740: beq         $t5, $at, L_80330754
    if (ctx->r13 == ctx->r1) {
        // 0x80330744: nop
    
            goto L_80330754;
    }
    // 0x80330744: nop

    // 0x80330748: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8033074C: jal         0x8001BB34
    // 0x80330750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x80330750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_80330754:
    // 0x80330754: b           L_8033075C
    // 0x80330758: nop

        goto L_8033075C;
    // 0x80330758: nop

L_8033075C:
    // 0x8033075C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80330764: jr          $ra
    // 0x80330768: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330768: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330A38_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330A38: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80330A3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80330A40: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80330A44: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330A48: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80330A4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330A50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330A54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330A58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330A5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330A64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330A6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330A70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330A74: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80330A78: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330A7C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80330A80: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330A84: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330A88: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330A8C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330A90: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330A94: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330A98: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330A9C: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80330AA0: nop

    // 0x80330AA4: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x80330AA8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80330AAC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80330AB0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330AB4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330AB8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330ABC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330AC0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330AC4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330AC8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330ACC: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80330AD0: nop

    // 0x80330AD4: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x80330AD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330ADC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80330AE0: nop

    // 0x80330AE4: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80330AE8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80330AEC: nop

    // 0x80330AF0: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80330AF4: nop

    // 0x80330AF8: bne         $t8, $zero, L_80330B8C
    if (ctx->r24 != 0) {
        // 0x80330AFC: nop
    
            goto L_80330B8C;
    }
    // 0x80330AFC: nop

    // 0x80330B00: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80330B04: nop

    // 0x80330B08: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80330B0C: nop

    // 0x80330B10: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80330B14: sb          $t1, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r9;
    // 0x80330B18: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80330B1C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330B20: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x80330B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B2C: jal         0x8001BBDC
    // 0x80330B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80330B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80330B34: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80330B38: jal         0x8001BBDC
    // 0x80330B3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80330B3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330B40: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B44: jal         0x8001BBDC
    // 0x80330B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80330B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330B4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B54: lui         $a2, 0x4085
    ctx->r6 = S32(0X4085 << 16);
    // 0x80330B58: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x80330B5C: jal         0x80029EF8
    // 0x80330B60: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x80330B60: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    after_3:
    // 0x80330B64: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80330B68: lui         $a2, 0x4085
    ctx->r6 = S32(0X4085 << 16);
    // 0x80330B6C: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x80330B70: jal         0x80029EF8
    // 0x80330B74: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x80330B74: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    after_4:
    // 0x80330B78: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B7C: lui         $a2, 0x4085
    ctx->r6 = S32(0X4085 << 16);
    // 0x80330B80: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x80330B84: jal         0x80029EF8
    // 0x80330B88: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    func_80029EF8(rdram, ctx);
        goto after_5;
    // 0x80330B88: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    after_5:
L_80330B8C:
    // 0x80330B8C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80330B90: nop

    // 0x80330B94: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80330B98: nop

    // 0x80330B9C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80330BA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330BA4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80330BA8: nop

    // 0x80330BAC: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
    // 0x80330BB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BB8: jal         0x80029C40
    // 0x80330BBC: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x80330BBC: nop

    after_6:
    // 0x80330BC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330BC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330BC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330BD4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80330BD8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330BDC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330BE0: jal         0x80029018
    // 0x80330BE4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x80330BE4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x80330BE8: beq         $v0, $zero, L_80330C0C
    if (ctx->r2 == 0) {
        // 0x80330BEC: nop
    
            goto L_80330C0C;
    }
    // 0x80330BEC: nop

    // 0x80330BF0: jal         0x800297DC
    // 0x80330BF4: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x80330BF4: nop

    after_8:
    // 0x80330BF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C00: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80330C04: jal         0x80029824
    // 0x80330C08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x80330C08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_80330C0C:
    // 0x80330C0C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330C10: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80330C14: nop

    // 0x80330C18: swc1        $f18, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f18.u32l;
    // 0x80330C1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C24: jal         0x8001B44C
    // 0x80330C28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_10;
    // 0x80330C28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80330C2C: beq         $v0, $zero, L_80330C5C
    if (ctx->r2 == 0) {
        // 0x80330C30: nop
    
            goto L_80330C5C;
    }
    // 0x80330C30: nop

    // 0x80330C34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C3C: jal         0x8001BBDC
    // 0x80330C40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x80330C40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80330C44: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80330C48: jal         0x8001BBDC
    // 0x80330C4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_12;
    // 0x80330C4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80330C50: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C54: jal         0x8001BBDC
    // 0x80330C58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_13;
    // 0x80330C58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
L_80330C5C:
    // 0x80330C5C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80330C60: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330C64: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330C68: jal         0x8002A0D0
    // 0x80330C6C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_14;
    // 0x80330C6C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_14:
    // 0x80330C70: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C74: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330C78: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330C7C: jal         0x8002A0D0
    // 0x80330C80: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_15;
    // 0x80330C80: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_15:
    // 0x80330C84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C8C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330C90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330C94: jal         0x8002A0D0
    // 0x80330C98: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_16;
    // 0x80330C98: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_16:
    // 0x80330C9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330CA0: bne         $v0, $at, L_80330E44
    if (ctx->r2 != ctx->r1) {
        // 0x80330CA4: nop
    
            goto L_80330E44;
    }
    // 0x80330CA4: nop

    // 0x80330CA8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80330CAC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330CB0: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x80330CB4: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80330CB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CBC: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80330CC0: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80330CC4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330CC8: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80330CCC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330CD0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330CD4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80330CD8: sh          $t0, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r8;
    // 0x80330CDC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80330CE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CE4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330CE8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330CEC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330CF0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330CF4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330CF8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330CFC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330D00: sh          $t2, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r10;
    // 0x80330D04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330D08: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80330D0C: nop

    // 0x80330D10: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80330D14: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80330D18: nop

    // 0x80330D1C: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80330D20: nop

    // 0x80330D24: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80330D28: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80330D2C: nop

    // 0x80330D30: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x80330D34: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80330D38: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80330D3C: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80330D40: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80330D44: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80330D48: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330D4C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80330D50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330D54: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80330D58: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330D5C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330D60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D64: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330D68: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80330D6C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330D70: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330D74: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330D78: addu        $t2, $t9, $t3
    ctx->r10 = ADD32(ctx->r25, ctx->r11);
    // 0x80330D7C: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80330D80: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80330D84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D88: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x80330D8C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80330D90: nop

    // 0x80330D94: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330D98: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330D9C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330DA0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330DA4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330DA8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330DAC: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80330DB0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330DB4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330DB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330DBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330DC0: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80330DC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330DC8: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80330DCC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330DD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330DD4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330DD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330DDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DE0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330DE4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80330DE8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330DEC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330DF0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330DF4: addu        $t9, $t1, $t0
    ctx->r25 = ADD32(ctx->r9, ctx->r8);
    // 0x80330DF8: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x80330DFC: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80330E00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E04: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x80330E08: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80330E0C: nop

    // 0x80330E10: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80330E14: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330E18: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330E1C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330E20: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330E24: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330E28: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80330E2C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80330E30: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80330E34: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80330E38: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80330E3C: nop

    // 0x80330E40: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80330E44:
    // 0x80330E44: b           L_80330E4C
    // 0x80330E48: nop

        goto L_80330E4C;
    // 0x80330E48: nop

L_80330E4C:
    // 0x80330E4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E50: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80330E54: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330E58: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80330E5C: jr          $ra
    // 0x80330E60: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80330E60: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_803345EC_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803345EC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x803345F0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803345F4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x803345F8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803345FC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80334600: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334604: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334608: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033460C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334610: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334614: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334618: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033461C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334620: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334624: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334628: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8033462C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80334630: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80334634: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80334638: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033463C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334640: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334644: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334648: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033464C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334650: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80334654: nop

    // 0x80334658: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x8033465C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80334660: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80334664: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80334668: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033466C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334670: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334674: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334678: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033467C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334680: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80334684: nop

    // 0x80334688: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x8033468C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334690: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80334694: nop

    // 0x80334698: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x8033469C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803346A0: nop

    // 0x803346A4: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x803346A8: nop

    // 0x803346AC: bne         $t8, $zero, L_80334740
    if (ctx->r24 != 0) {
        // 0x803346B0: nop
    
            goto L_80334740;
    }
    // 0x803346B0: nop

    // 0x803346B4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x803346B8: nop

    // 0x803346BC: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x803346C0: nop

    // 0x803346C4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803346C8: sb          $t1, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r9;
    // 0x803346CC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x803346D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803346D4: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x803346D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803346DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803346E0: jal         0x8001BBDC
    // 0x803346E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x803346E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803346E8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x803346EC: jal         0x8001BBDC
    // 0x803346F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803346F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803346F4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803346F8: jal         0x8001BBDC
    // 0x803346FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803346FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334700: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334704: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334708: lui         $a2, 0x4085
    ctx->r6 = S32(0X4085 << 16);
    // 0x8033470C: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x80334710: jal         0x80029EF8
    // 0x80334714: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x80334714: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    after_3:
    // 0x80334718: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8033471C: lui         $a2, 0x4085
    ctx->r6 = S32(0X4085 << 16);
    // 0x80334720: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x80334724: jal         0x80029EF8
    // 0x80334728: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x80334728: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    after_4:
    // 0x8033472C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80334730: lui         $a2, 0x4085
    ctx->r6 = S32(0X4085 << 16);
    // 0x80334734: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x80334738: jal         0x80029EF8
    // 0x8033473C: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    func_80029EF8(rdram, ctx);
        goto after_5;
    // 0x8033473C: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    after_5:
L_80334740:
    // 0x80334740: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80334744: nop

    // 0x80334748: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x8033474C: nop

    // 0x80334750: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80334754: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334758: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033475C: nop

    // 0x80334760: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
    // 0x80334764: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334768: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033476C: jal         0x80029C40
    // 0x80334770: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x80334770: nop

    after_6:
    // 0x80334774: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334778: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033477C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334780: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334784: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80334788: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8033478C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334790: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80334794: jal         0x80029018
    // 0x80334798: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x80334798: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x8033479C: beq         $v0, $zero, L_803347C0
    if (ctx->r2 == 0) {
        // 0x803347A0: nop
    
            goto L_803347C0;
    }
    // 0x803347A0: nop

    // 0x803347A4: jal         0x800297DC
    // 0x803347A8: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x803347A8: nop

    after_8:
    // 0x803347AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803347B8: jal         0x80029824
    // 0x803347BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x803347BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_803347C0:
    // 0x803347C0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803347C4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803347C8: nop

    // 0x803347CC: swc1        $f18, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f18.u32l;
    // 0x803347D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347D8: jal         0x8001B44C
    // 0x803347DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_10;
    // 0x803347DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x803347E0: beq         $v0, $zero, L_80334810
    if (ctx->r2 == 0) {
        // 0x803347E4: nop
    
            goto L_80334810;
    }
    // 0x803347E4: nop

    // 0x803347E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347F0: jal         0x8001BBDC
    // 0x803347F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x803347F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x803347F8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x803347FC: jal         0x8001BBDC
    // 0x80334800: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_12;
    // 0x80334800: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80334804: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80334808: jal         0x8001BBDC
    // 0x8033480C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_13;
    // 0x8033480C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
L_80334810:
    // 0x80334810: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80334814: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80334818: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033481C: jal         0x8002A0D0
    // 0x80334820: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_14;
    // 0x80334820: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_14:
    // 0x80334824: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80334828: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033482C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80334830: jal         0x8002A0D0
    // 0x80334834: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_15;
    // 0x80334834: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_15:
    // 0x80334838: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033483C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334840: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80334844: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80334848: jal         0x8002A0D0
    // 0x8033484C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_16;
    // 0x8033484C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_16:
    // 0x80334850: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334854: bne         $v0, $at, L_803349F8
    if (ctx->r2 != ctx->r1) {
        // 0x80334858: nop
    
            goto L_803349F8;
    }
    // 0x80334858: nop

    // 0x8033485C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80334860: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80334864: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x80334868: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8033486C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334870: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80334874: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80334878: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033487C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80334880: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334884: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80334888: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033488C: sh          $t0, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r8;
    // 0x80334890: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80334894: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334898: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033489C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803348A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803348A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803348A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803348AC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803348B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803348B4: sh          $t2, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r10;
    // 0x803348B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803348BC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803348C0: nop

    // 0x803348C4: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x803348C8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803348CC: nop

    // 0x803348D0: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803348D4: nop

    // 0x803348D8: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x803348DC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803348E0: nop

    // 0x803348E4: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x803348E8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x803348EC: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x803348F0: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x803348F4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803348F8: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x803348FC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334900: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80334904: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334908: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8033490C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334910: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334914: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334918: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033491C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80334920: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334924: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80334928: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033492C: addu        $t2, $t9, $t3
    ctx->r10 = ADD32(ctx->r25, ctx->r11);
    // 0x80334930: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80334934: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80334938: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033493C: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x80334940: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80334944: nop

    // 0x80334948: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033494C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334950: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334954: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334958: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033495C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334960: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80334964: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80334968: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033496C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334970: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334974: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80334978: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033497C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80334980: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334984: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334988: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033498C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334990: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334994: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80334998: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8033499C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803349A0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803349A4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803349A8: addu        $t9, $t1, $t0
    ctx->r25 = ADD32(ctx->r9, ctx->r8);
    // 0x803349AC: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x803349B0: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x803349B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803349B8: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x803349BC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803349C0: nop

    // 0x803349C4: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x803349C8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803349CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803349D0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803349D4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803349D8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803349DC: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x803349E0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803349E4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x803349E8: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x803349EC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803349F0: nop

    // 0x803349F4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803349F8:
    // 0x803349F8: b           L_80334A00
    // 0x803349FC: nop

        goto L_80334A00;
    // 0x803349FC: nop

L_80334A00:
    // 0x80334A00: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80334A04: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80334A08: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80334A0C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80334A10: jr          $ra
    // 0x80334A14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80334A14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80335138_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335138: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033513C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335140: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80335144: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335148: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033514C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335150: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335154: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335158: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033515C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335160: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335164: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335168: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033516C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80335170: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80335174: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80335178: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033517C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80335180: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80335184: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80335188: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033518C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80335190: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335194: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80335198: nop

    // 0x8033519C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x803351A0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803351A4: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x803351A8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803351AC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803351B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803351B4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803351B8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803351BC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803351C0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803351C4: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x803351C8: nop

    // 0x803351CC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x803351D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803351D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351D8: jal         0x8033035C
    // 0x803351DC: nop

    func_8033035C_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x803351DC: nop

    after_0:
    // 0x803351E0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803351E4: nop

    // 0x803351E8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803351EC: nop

    // 0x803351F0: bne         $t7, $zero, L_80335334
    if (ctx->r15 != 0) {
        // 0x803351F4: nop
    
            goto L_80335334;
    }
    // 0x803351F4: nop

    // 0x803351F8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803351FC: nop

    // 0x80335200: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80335204: nop

    // 0x80335208: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033520C: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80335210: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335214: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335218: jal         0x8001BBDC
    // 0x8033521C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033521C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80335220: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80335224: jal         0x8001BBDC
    // 0x80335228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80335228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8033522C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80335230: jal         0x8001BBDC
    // 0x80335234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80335234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80335238: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033523C: nop

    // 0x80335240: lh          $s0, 0xBA($t1)
    ctx->r16 = MEM_H(ctx->r9, 0XBA);
    // 0x80335244: nop

    // 0x80335248: beq         $s0, $zero, L_8033527C
    if (ctx->r16 == 0) {
        // 0x8033524C: nop
    
            goto L_8033527C;
    }
    // 0x8033524C: nop

    // 0x80335250: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335254: beq         $s0, $at, L_803352A8
    if (ctx->r16 == ctx->r1) {
        // 0x80335258: nop
    
            goto L_803352A8;
    }
    // 0x80335258: nop

    // 0x8033525C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335260: beq         $s0, $at, L_803352D4
    if (ctx->r16 == ctx->r1) {
        // 0x80335264: nop
    
            goto L_803352D4;
    }
    // 0x80335264: nop

    // 0x80335268: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033526C: beq         $s0, $at, L_80335300
    if (ctx->r16 == ctx->r1) {
        // 0x80335270: nop
    
            goto L_80335300;
    }
    // 0x80335270: nop

    // 0x80335274: b           L_8033532C
    // 0x80335278: nop

        goto L_8033532C;
    // 0x80335278: nop

L_8033527C:
    // 0x8033527C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80335280: addiu       $t2, $zero, 0x2D
    ctx->r10 = ADD32(0, 0X2D);
    // 0x80335284: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x80335288: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033528C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80335290: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
    // 0x80335294: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80335298: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8033529C: sh          $t6, 0xBA($t7)
    MEM_H(0XBA, ctx->r15) = ctx->r14;
    // 0x803352A0: b           L_80335334
    // 0x803352A4: nop

        goto L_80335334;
    // 0x803352A4: nop

L_803352A8:
    // 0x803352A8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803352AC: nop

    // 0x803352B0: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x803352B4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803352B8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x803352BC: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
    // 0x803352C0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803352C4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803352C8: sh          $t1, 0xBA($t2)
    MEM_H(0XBA, ctx->r10) = ctx->r9;
    // 0x803352CC: b           L_80335334
    // 0x803352D0: nop

        goto L_80335334;
    // 0x803352D0: nop

L_803352D4:
    // 0x803352D4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803352D8: addiu       $t3, $zero, 0x13B
    ctx->r11 = ADD32(0, 0X13B);
    // 0x803352DC: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x803352E0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803352E4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x803352E8: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x803352EC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803352F0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803352F4: sh          $t7, 0xBA($t9)
    MEM_H(0XBA, ctx->r25) = ctx->r15;
    // 0x803352F8: b           L_80335334
    // 0x803352FC: nop

        goto L_80335334;
    // 0x803352FC: nop

L_80335300:
    // 0x80335300: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80335304: nop

    // 0x80335308: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
    // 0x8033530C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80335310: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80335314: sh          $t8, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r24;
    // 0x80335318: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033531C: nop

    // 0x80335320: sh          $zero, 0xBA($t2)
    MEM_H(0XBA, ctx->r10) = 0;
    // 0x80335324: b           L_80335334
    // 0x80335328: nop

        goto L_80335334;
    // 0x80335328: nop

L_8033532C:
    // 0x8033532C: b           L_80335334
    // 0x80335330: nop

        goto L_80335334;
    // 0x80335330: nop

L_80335334:
    // 0x80335334: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80335338: nop

    // 0x8033533C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80335340: lwc1        $f14, 0x3C($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80335344: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80335348: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x8033534C: jal         0x80015538
    // 0x80335350: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80335350: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x80335354: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80335358: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033535C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80335360: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80335364: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80335368: nop

    // 0x8033536C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80335370: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80335374: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80335378: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
    // 0x8033537C: nop

    // 0x80335380: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80335384: nop

    // 0x80335388: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x8033538C: nop

    // 0x80335390: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80335394: bne         $at, $zero, L_803353A8
    if (ctx->r1 != 0) {
        // 0x80335398: nop
    
            goto L_803353A8;
    }
    // 0x80335398: nop

    // 0x8033539C: slti        $at, $t0, 0x166
    ctx->r1 = SIGNED(ctx->r8) < 0X166 ? 1 : 0;
    // 0x803353A0: bne         $at, $zero, L_803353E0
    if (ctx->r1 != 0) {
        // 0x803353A4: nop
    
            goto L_803353E0;
    }
    // 0x803353A4: nop

L_803353A8:
    // 0x803353A8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803353AC: nop

    // 0x803353B0: lh          $t1, 0xAE($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAE);
    // 0x803353B4: nop

    // 0x803353B8: bne         $t1, $zero, L_803353D8
    if (ctx->r9 != 0) {
        // 0x803353BC: nop
    
            goto L_803353D8;
    }
    // 0x803353BC: nop

    // 0x803353C0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803353C4: nop

    // 0x803353C8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803353CC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803353D0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x803353D4: sh          $t4, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r12;
L_803353D8:
    // 0x803353D8: b           L_803354D4
    // 0x803353DC: nop

        goto L_803354D4;
    // 0x803353DC: nop

L_803353E0:
    // 0x803353E0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803353E4: nop

    // 0x803353E8: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x803353EC: lwc1        $f12, 0x3C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x803353F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803353F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803353F8: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x803353FC: jal         0x80015538
    // 0x80335400: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80335400: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_5:
    // 0x80335404: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80335408: nop

    // 0x8033540C: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x80335410: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80335414: nop

    // 0x80335418: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x8033541C: nop

    // 0x80335420: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x80335424: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80335428: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033542C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80335430: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335434: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80335438: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033543C: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80335440: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80335444: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335448: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033544C: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x80335450: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80335454: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80335458: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8033545C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80335460: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335464: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80335468: lwc1        $f18, 0x3C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x8033546C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335470: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335474: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80335478: swc1        $f18, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f18.u32l;
    // 0x8033547C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335480: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80335484: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80335488: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8033548C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80335490: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80335494: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80335498: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033549C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803354A0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803354A4: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x803354A8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803354AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803354B0: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x803354B4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803354B8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803354BC: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803354C0: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x803354C4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803354C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803354CC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803354D0: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
L_803354D4:
    // 0x803354D4: b           L_803354DC
    // 0x803354D8: nop

        goto L_803354DC;
    // 0x803354D8: nop

L_803354DC:
    // 0x803354DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803354E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803354E4: jr          $ra
    // 0x803354E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803354E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80335734_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335734: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335738: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8033573C: nop

    // 0x80335740: bne         $t6, $zero, L_80335774
    if (ctx->r14 != 0) {
        // 0x80335744: nop
    
            goto L_80335774;
    }
    // 0x80335744: nop

    // 0x80335748: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033574C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80335750: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335754: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80335758: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033575C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80335760: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80335764: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80335768: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033576C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80335770: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_80335774:
    // 0x80335774: jr          $ra
    // 0x80335778: nop

    return;
    // 0x80335778: nop

    // 0x8033577C: jr          $ra
    // 0x80335780: nop

    return;
    // 0x80335780: nop

;}
RECOMP_FUNC void func_80335A4C_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335A4C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80335A50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80335A54: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80335A58: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80335A5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335A60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335A64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335A68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335A6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335A70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335A74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335A78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335A7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335A80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335A84: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80335A88: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335A8C: nop

    // 0x80335A90: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335A94: nop

    // 0x80335A98: bne         $t1, $zero, L_80335AE4
    if (ctx->r9 != 0) {
        // 0x80335A9C: nop
    
            goto L_80335AE4;
    }
    // 0x80335A9C: nop

    // 0x80335AA0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335AA4: nop

    // 0x80335AA8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335AAC: nop

    // 0x80335AB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335AB4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335AB8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80335ABC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335AC0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335AC4: nop

    // 0x80335AC8: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80335ACC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80335AD0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80335AD4: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80335AD8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335ADC: nop

    // 0x80335AE0: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
L_80335AE4:
    // 0x80335AE4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335AE8: nop

    // 0x80335AEC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80335AF0: nop

    // 0x80335AF4: beq         $t0, $zero, L_80335B54
    if (ctx->r8 == 0) {
        // 0x80335AF8: nop
    
            goto L_80335B54;
    }
    // 0x80335AF8: nop

    // 0x80335AFC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80335B00: nop

    // 0x80335B04: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
    // 0x80335B08: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80335B0C: nop

    // 0x80335B10: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80335B14: nop

    // 0x80335B18: bne         $t4, $zero, L_80335B40
    if (ctx->r12 != 0) {
        // 0x80335B1C: nop
    
            goto L_80335B40;
    }
    // 0x80335B1C: nop

    // 0x80335B20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335B24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335B28: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80335B2C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80335B30: jal         0x80029EF8
    // 0x80335B34: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80335B34: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_0:
    // 0x80335B38: b           L_80335B54
    // 0x80335B3C: nop

        goto L_80335B54;
    // 0x80335B3C: nop

L_80335B40:
    // 0x80335B40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335B44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335B48: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x80335B4C: jal         0x80029EF8
    // 0x80335B50: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x80335B50: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
L_80335B54:
    // 0x80335B54: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335B58: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80335B5C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80335B60: lwc1        $f12, 0x18($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X18);
    // 0x80335B64: jal         0x80015538
    // 0x80335B68: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80335B68: nop

    after_2:
    // 0x80335B6C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335B70: nop

    // 0x80335B74: swc1        $f0, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f0.u32l;
    // 0x80335B78: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80335B7C: nop

    // 0x80335B80: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80335B84: nop

    // 0x80335B88: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80335B8C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335B90: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80335B94: nop

    // 0x80335B98: swc1        $f8, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f8.u32l;
    // 0x80335B9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335BA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335BA4: jal         0x80029C40
    // 0x80335BA8: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x80335BA8: nop

    after_3:
    // 0x80335BAC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80335BB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80335BB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335BB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335BBC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80335BC0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80335BC4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335BC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80335BCC: jal         0x80029018
    // 0x80335BD0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x80335BD0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x80335BD4: beq         $v0, $zero, L_80335C24
    if (ctx->r2 == 0) {
        // 0x80335BD8: nop
    
            goto L_80335C24;
    }
    // 0x80335BD8: nop

    // 0x80335BDC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335BE0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335BE4: nop

    // 0x80335BE8: swc1        $f18, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f18.u32l;
    // 0x80335BEC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335BF0: nop

    // 0x80335BF4: lwc1        $f20, 0x28($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80335BF8: nop

    // 0x80335BFC: swc1        $f20, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f20.u32l;
    // 0x80335C00: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335C04: nop

    // 0x80335C08: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x80335C0C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80335C10: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80335C14: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80335C18: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80335C1C: nop

    // 0x80335C20: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80335C24:
    // 0x80335C24: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80335C28: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335C2C: nop

    // 0x80335C30: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x80335C34: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80335C38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335C3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335C40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335C44: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80335C48: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80335C4C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335C50: jal         0x80029F58
    // 0x80335C54: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_5;
    // 0x80335C54: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x80335C58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335C5C: bne         $v0, $at, L_80335CE8
    if (ctx->r2 != ctx->r1) {
        // 0x80335C60: nop
    
            goto L_80335CE8;
    }
    // 0x80335C60: nop

    // 0x80335C64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335C68: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335C6C: nop

    // 0x80335C70: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
    // 0x80335C74: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80335C78: nop

    // 0x80335C7C: lwc1        $f20, 0x28($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80335C80: nop

    // 0x80335C84: swc1        $f20, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f20.u32l;
    // 0x80335C88: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80335C8C: nop

    // 0x80335C90: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x80335C94: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335C98: nop

    // 0x80335C9C: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80335CA0: nop

    // 0x80335CA4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80335CA8: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
    // 0x80335CAC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80335CB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335CB4: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x80335CB8: nop

    // 0x80335CBC: bne         $t3, $at, L_80335CDC
    if (ctx->r11 != ctx->r1) {
        // 0x80335CC0: nop
    
            goto L_80335CDC;
    }
    // 0x80335CC0: nop

    // 0x80335CC4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335CC8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80335CCC: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80335CD0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335CD4: b           L_80335CE8
    // 0x80335CD8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80335CE8;
    // 0x80335CD8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80335CDC:
    // 0x80335CDC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80335CE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80335CE4: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_80335CE8:
    // 0x80335CE8: b           L_80335CF0
    // 0x80335CEC: nop

        goto L_80335CF0;
    // 0x80335CEC: nop

L_80335CF0:
    // 0x80335CF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80335CF4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80335CF8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80335CFC: jr          $ra
    // 0x80335D00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80335D00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80333850_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333850: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80333854: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80333858: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033385C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333860: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333864: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333868: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033386C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333870: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333874: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333878: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033387C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333880: sw          $t9, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r25;
    // 0x80333884: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80333888: nop

    // 0x8033388C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333890: nop

    // 0x80333894: bne         $t1, $zero, L_80333908
    if (ctx->r9 != 0) {
        // 0x80333898: nop
    
            goto L_80333908;
    }
    // 0x80333898: nop

    // 0x8033389C: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x803338A0: nop

    // 0x803338A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803338A8: nop

    // 0x803338AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803338B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803338B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803338B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803338BC: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x803338C0: nop

    // 0x803338C4: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x803338C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803338CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803338D0: jal         0x8001BBDC
    // 0x803338D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x803338D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803338D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803338DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803338E0: jal         0x8002A46C
    // 0x803338E4: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x803338E4: nop

    after_1:
    // 0x803338E8: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x803338EC: nop

    // 0x803338F0: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x803338F4: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x803338F8: nop

    // 0x803338FC: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80333900: nop

    // 0x80333904: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
L_80333908:
    // 0x80333908: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033390C: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x80333910: nop

    // 0x80333914: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x80333918: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033391C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333920: jal         0x80029C40
    // 0x80333924: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80333924: nop

    after_2:
    // 0x80333928: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x8033392C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80333930: lw          $a1, 0x1C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X1C);
    // 0x80333934: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80333938: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033393C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80333940: jal         0x800372A0
    // 0x80333944: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    guRotateF(rdram, ctx);
        goto after_3;
    // 0x80333944: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80333948: addiu       $t0, $sp, 0xB0
    ctx->r8 = ADD32(ctx->r29, 0XB0);
    // 0x8033394C: addiu       $t1, $sp, 0xAC
    ctx->r9 = ADD32(ctx->r29, 0XAC);
    // 0x80333950: addiu       $t3, $sp, 0xA8
    ctx->r11 = ADD32(ctx->r29, 0XA8);
    // 0x80333954: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80333958: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8033395C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80333960: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80333964: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x80333968: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x8033396C: jal         0x80036360
    // 0x80333970: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    guMtxXFMF(rdram, ctx);
        goto after_4;
    // 0x80333970: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    after_4:
    // 0x80333974: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80333978: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8033397C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333980: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333984: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x80333988: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033398C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80333990: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80333994: jal         0x80029018
    // 0x80333998: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80333998: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x8033399C: beq         $v0, $zero, L_803339E0
    if (ctx->r2 == 0) {
        // 0x803339A0: nop
    
            goto L_803339E0;
    }
    // 0x803339A0: nop

    // 0x803339A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803339A8: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x803339AC: nop

    // 0x803339B0: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x803339B4: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x803339B8: nop

    // 0x803339BC: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x803339C0: nop

    // 0x803339C4: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
    // 0x803339C8: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x803339CC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803339D0: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x803339D4: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x803339D8: nop

    // 0x803339DC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803339E0:
    // 0x803339E0: b           L_803339E8
    // 0x803339E4: nop

        goto L_803339E8;
    // 0x803339E4: nop

L_803339E8:
    // 0x803339E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803339EC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x803339F0: jr          $ra
    // 0x803339F4: nop

    return;
    // 0x803339F4: nop

;}
RECOMP_FUNC void func_803340E8_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803340E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803340EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803340F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803340F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803340F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803340FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334100: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334104: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334108: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033410C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334110: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334114: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x80334118: nop

    // 0x8033411C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80334120: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80334124: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80334128: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033412C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80334130: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334134: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334138: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033413C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334140: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334144: lh          $t1, 0x423A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X423A);
    // 0x80334148: nop

    // 0x8033414C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80334150: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80334154: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x80334158: nop

    // 0x8033415C: bne         $t2, $zero, L_803341D0
    if (ctx->r10 != 0) {
        // 0x80334160: nop
    
            goto L_803341D0;
    }
    // 0x80334160: nop

    // 0x80334164: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80334168: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x8033416C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334170: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334174: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334178: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033417C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334180: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334184: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334188: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x8033418C: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80334190: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334194: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334198: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033419C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803341A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803341A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803341B0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803341B4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803341B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803341BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803341C0: jal         0x80069E60
    // 0x803341C4: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x803341C4: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x803341C8: b           L_803342FC
    // 0x803341CC: nop

        goto L_803342FC;
    // 0x803341CC: nop

L_803341D0:
    // 0x803341D0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803341D4: lw          $t8, 0x7A64($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A64);
    // 0x803341D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803341DC: bne         $t8, $at, L_803342FC
    if (ctx->r24 != ctx->r1) {
        // 0x803341E0: nop
    
            goto L_803342FC;
    }
    // 0x803341E0: nop

    // 0x803341E4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803341E8: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x803341EC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803341F0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803341F4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803341F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803341FC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334200: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334204: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334208: lh          $t1, 0x4258($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4258);
    // 0x8033420C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334210: bne         $t1, $at, L_803342FC
    if (ctx->r9 != ctx->r1) {
        // 0x80334214: nop
    
            goto L_803342FC;
    }
    // 0x80334214: nop

    // 0x80334218: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033421C: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80334220: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334224: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80334228: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8033422C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334230: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80334234: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334238: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033423C: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
    // 0x80334240: sh          $t2, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r10;
    // 0x80334244: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80334248: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x8033424C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80334250: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80334254: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334258: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033425C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334260: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334264: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334268: lh          $t7, 0x4238($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4238);
    // 0x8033426C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334270: beq         $t7, $at, L_803342A0
    if (ctx->r15 == ctx->r1) {
        // 0x80334274: nop
    
            goto L_803342A0;
    }
    // 0x80334274: nop

    // 0x80334278: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033427C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334280: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80334284: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334288: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033428C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334290: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334294: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80334298: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x8033429C: sh          $t8, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r24;
L_803342A0:
    // 0x803342A0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x803342A4: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x803342A8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803342AC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x803342B0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803342B4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803342B8: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803342BC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803342C0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803342C4: lh          $t2, 0x423A($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X423A);
    // 0x803342C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803342CC: beq         $t2, $at, L_803342FC
    if (ctx->r10 == ctx->r1) {
        // 0x803342D0: nop
    
            goto L_803342FC;
    }
    // 0x803342D0: nop

    // 0x803342D4: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x803342D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803342DC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803342E0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803342E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803342E8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803342EC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803342F0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803342F4: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x803342F8: sh          $t3, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r11;
L_803342FC:
    // 0x803342FC: b           L_80334304
    // 0x80334300: nop

        goto L_80334304;
    // 0x80334300: nop

L_80334304:
    // 0x80334304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033430C: jr          $ra
    // 0x80334310: nop

    return;
    // 0x80334310: nop

;}
RECOMP_FUNC void func_80334A18_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334A18: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80334A1C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80334A20: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80334A24: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80334A28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334A2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334A30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334A34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334A38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334A40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334A48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334A4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334A50: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80334A54: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80334A58: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80334A5C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80334A60: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334A64: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334A68: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334A6C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334A70: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334A74: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334A78: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80334A7C: nop

    // 0x80334A80: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x80334A84: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80334A88: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80334A8C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80334A90: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334A94: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334A98: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334A9C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334AA0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80334AA4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334AA8: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80334AAC: nop

    // 0x80334AB0: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x80334AB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334AB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334ABC: jal         0x8033035C
    // 0x80334AC0: nop

    func_8033035C_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x80334AC0: nop

    after_0:
    // 0x80334AC4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80334AC8: nop

    // 0x80334ACC: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80334AD0: nop

    // 0x80334AD4: bne         $t7, $zero, L_80334BE0
    if (ctx->r15 != 0) {
        // 0x80334AD8: nop
    
            goto L_80334BE0;
    }
    // 0x80334AD8: nop

    // 0x80334ADC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80334AE0: nop

    // 0x80334AE4: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80334AE8: nop

    // 0x80334AEC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80334AF0: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80334AF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334AF8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80334AFC: addiu       $t1, $t1, -0x7F84
    ctx->r9 = ADD32(ctx->r9, -0X7F84);
    // 0x80334B00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B04: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80334B08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334B0C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80334B10: jal         0x8001C0EC
    // 0x80334B14: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80334B14: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_1:
    // 0x80334B18: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80334B1C: addiu       $t2, $t2, -0x7F58
    ctx->r10 = ADD32(ctx->r10, -0X7F58);
    // 0x80334B20: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80334B24: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80334B28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334B2C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80334B30: jal         0x8001C0EC
    // 0x80334B34: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80334B34: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    after_2:
    // 0x80334B38: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80334B3C: addiu       $t3, $t3, -0x7F30
    ctx->r11 = ADD32(ctx->r11, -0X7F30);
    // 0x80334B40: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80334B44: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80334B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334B4C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80334B50: jal         0x8001C0EC
    // 0x80334B54: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80334B54: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_3:
    // 0x80334B58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B60: jal         0x8001BBDC
    // 0x80334B64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80334B64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80334B68: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80334B6C: jal         0x8001BBDC
    // 0x80334B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x80334B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80334B74: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80334B78: jal         0x8001BBDC
    // 0x80334B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x80334B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80334B80: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80334B84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334B88: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334B8C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334B90: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334B94: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334B98: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334B9C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334BA0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80334BA4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80334BA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334BAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334BB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334BB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334BB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334BBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334BC0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334BC4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80334BC8: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80334BCC: nop

    // 0x80334BD0: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x80334BD4: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80334BD8: nop

    // 0x80334BDC: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
L_80334BE0:
    // 0x80334BE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334BE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334BE8: jal         0x8001B44C
    // 0x80334BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x80334BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80334BF0: beq         $v0, $zero, L_8033511C
    if (ctx->r2 == 0) {
        // 0x80334BF4: nop
    
            goto L_8033511C;
    }
    // 0x80334BF4: nop

    // 0x80334BF8: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80334BFC: nop

    // 0x80334C00: lh          $t1, 0xA6($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XA6);
    // 0x80334C04: nop

    // 0x80334C08: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80334C0C: sh          $t2, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r10;
    // 0x80334C10: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80334C14: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80334C18: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80334C1C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80334C20: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80334C24: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334C28: lh          $t6, 0x5E20($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X5E20);
    // 0x80334C2C: nop

    // 0x80334C30: bne         $t6, $at, L_80334E60
    if (ctx->r14 != ctx->r1) {
        // 0x80334C34: nop
    
            goto L_80334E60;
    }
    // 0x80334C34: nop

    // 0x80334C38: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80334C3C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80334C40: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80334C44: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80334C48: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80334C4C: nop

    // 0x80334C50: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80334C54: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80334C58: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x80334C5C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334C60: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334C64: nop

    // 0x80334C68: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80334C6C: nop

    // 0x80334C70: bc1f        L_80334E60
    if (!c1cs) {
        // 0x80334C74: nop
    
            goto L_80334E60;
    }
    // 0x80334C74: nop

    // 0x80334C78: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80334C7C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334C80: nop

    // 0x80334C84: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x80334C88: nop

    // 0x80334C8C: bc1f        L_80334E60
    if (!c1cs) {
        // 0x80334C90: nop
    
            goto L_80334E60;
    }
    // 0x80334C90: nop

    // 0x80334C94: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80334C98: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80334C9C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80334CA0: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80334CA4: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80334CA8: nop

    // 0x80334CAC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80334CB0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80334CB4: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80334CB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334CBC: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334CC0: nop

    // 0x80334CC4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80334CC8: nop

    // 0x80334CCC: bc1f        L_80334E60
    if (!c1cs) {
        // 0x80334CD0: nop
    
            goto L_80334E60;
    }
    // 0x80334CD0: nop

    // 0x80334CD4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80334CD8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334CDC: nop

    // 0x80334CE0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80334CE4: nop

    // 0x80334CE8: bc1f        L_80334E60
    if (!c1cs) {
        // 0x80334CEC: nop
    
            goto L_80334E60;
    }
    // 0x80334CEC: nop

    // 0x80334CF0: jal         0x80014E80
    // 0x80334CF4: addiu       $a0, $zero, -0x78
    ctx->r4 = ADD32(0, -0X78);
    Math_Random(rdram, ctx);
        goto after_8;
    // 0x80334CF4: addiu       $a0, $zero, -0x78
    ctx->r4 = ADD32(0, -0X78);
    after_8:
    // 0x80334CF8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80334CFC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80334D00: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80334D04: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334D08: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80334D0C: nop

    // 0x80334D10: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80334D14: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x80334D18: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80334D1C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80334D20: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80334D24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334D28: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80334D2C: nop

    // 0x80334D30: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80334D34: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80334D38: jal         0x80014E80
    // 0x80334D3C: addiu       $a0, $zero, -0x3C
    ctx->r4 = ADD32(0, -0X3C);
    Math_Random(rdram, ctx);
        goto after_9;
    // 0x80334D3C: addiu       $a0, $zero, -0x3C
    ctx->r4 = ADD32(0, -0X3C);
    after_9:
    // 0x80334D40: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80334D44: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80334D48: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80334D4C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80334D50: lwc1        $f10, 0x8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80334D54: nop

    // 0x80334D58: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80334D5C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80334D60: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80334D64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334D68: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80334D6C: nop

    // 0x80334D70: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80334D74: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80334D78: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80334D7C: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334D80: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80334D84: jal         0x80067748
    // 0x80334D88: nop

    func_80067748(rdram, ctx);
        goto after_10;
    // 0x80334D88: nop

    after_10:
    // 0x80334D8C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80334D90: lbu         $t4, 0x76E0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X76E0);
    // 0x80334D94: nop

    // 0x80334D98: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80334D9C: bne         $t5, $zero, L_80334E60
    if (ctx->r13 != 0) {
        // 0x80334DA0: nop
    
            goto L_80334E60;
    }
    // 0x80334DA0: nop

    // 0x80334DA4: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80334DA8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334DAC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80334DB0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80334DB4: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80334DB8: addiu       $a1, $a1, 0x472C
    ctx->r5 = ADD32(ctx->r5, 0X472C);
    // 0x80334DBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334DC0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80334DC4: jal         0x80027464
    // 0x80334DC8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x80334DC8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x80334DCC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80334DD0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80334DD4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334DD8: beq         $t6, $at, L_80334E60
    if (ctx->r14 == ctx->r1) {
        // 0x80334DDC: nop
    
            goto L_80334E60;
    }
    // 0x80334DDC: nop

    // 0x80334DE0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80334DE4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80334DE8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80334DEC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334DF0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334DF4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334DF8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80334DFC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334E00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334E04: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334E08: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334E0C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334E10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334E14: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80334E18: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334E1C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334E20: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80334E24: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80334E28: addu        $t8, $t1, $t2
    ctx->r24 = ADD32(ctx->r9, ctx->r10);
    // 0x80334E2C: swc1        $f16, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f16.u32l;
    // 0x80334E30: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x80334E34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334E38: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x80334E3C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80334E40: nop

    // 0x80334E44: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334E48: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334E4C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334E50: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334E54: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80334E58: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80334E5C: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_80334E60:
    // 0x80334E60: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80334E64: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80334E68: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80334E6C: nop

    // 0x80334E70: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80334E74: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334E78: lh          $t9, 0x5E20($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X5E20);
    // 0x80334E7C: nop

    // 0x80334E80: bne         $t9, $zero, L_80334EA0
    if (ctx->r25 != 0) {
        // 0x80334E84: nop
    
            goto L_80334EA0;
    }
    // 0x80334E84: nop

    // 0x80334E88: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80334E8C: nop

    // 0x80334E90: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80334E94: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80334E98: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80334E9C: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
L_80334EA0:
    // 0x80334EA0: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80334EA4: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80334EA8: lh          $t3, 0xA6($t8)
    ctx->r11 = MEM_H(ctx->r24, 0XA6);
    // 0x80334EAC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80334EB0: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80334EB4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334EB8: lh          $t5, 0x5E20($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X5E20);
    // 0x80334EBC: nop

    // 0x80334EC0: bne         $t5, $at, L_80334FCC
    if (ctx->r13 != ctx->r1) {
        // 0x80334EC4: nop
    
            goto L_80334FCC;
    }
    // 0x80334EC4: nop

    // 0x80334EC8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80334ECC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80334ED0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334ED4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334ED8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334EDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334EE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334EE4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334EE8: lh          $t9, 0x4204($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4204);
    // 0x80334EEC: nop

    // 0x80334EF0: bne         $t9, $zero, L_80334F20
    if (ctx->r25 != 0) {
        // 0x80334EF4: nop
    
            goto L_80334F20;
    }
    // 0x80334EF4: nop

    // 0x80334EF8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x80334EFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334F00: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80334F04: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334F08: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334F0C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334F10: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334F14: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334F18: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80334F1C: sh          $t0, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r8;
L_80334F20:
    // 0x80334F20: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80334F24: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80334F28: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x80334F2C: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x80334F30: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334F34: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x80334F38: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334F3C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334F40: lh          $t4, 0x4204($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4204);
    // 0x80334F44: nop

    // 0x80334F48: bne         $t4, $zero, L_80334F78
    if (ctx->r12 != 0) {
        // 0x80334F4C: nop
    
            goto L_80334F78;
    }
    // 0x80334F4C: nop

    // 0x80334F50: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80334F54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334F58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334F5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334F60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334F64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334F68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334F6C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334F70: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80334F74: sh          $t5, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r13;
L_80334F78:
    // 0x80334F78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F80: jal         0x8002A1FC
    // 0x80334F84: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_12;
    // 0x80334F84: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_12:
    // 0x80334F88: beq         $v0, $zero, L_80334FA8
    if (ctx->r2 == 0) {
        // 0x80334F8C: nop
    
            goto L_80334FA8;
    }
    // 0x80334F8C: nop

    // 0x80334F90: jal         0x80072190
    // 0x80334F94: nop

    func_80072190(rdram, ctx);
        goto after_13;
    // 0x80334F94: nop

    after_13:
    // 0x80334F98: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80334F9C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80334FA0: jal         0x8001FB3C
    // 0x80334FA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_14;
    // 0x80334FA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
L_80334FA8:
    // 0x80334FA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334FAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334FB4: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    // 0x80334FB8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80334FBC: jal         0x800175F0
    // 0x80334FC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_15;
    // 0x80334FC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x80334FC4: b           L_80335074
    // 0x80334FC8: nop

        goto L_80335074;
    // 0x80334FC8: nop

L_80334FCC:
    // 0x80334FCC: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80334FD0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80334FD4: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80334FD8: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80334FDC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334FE0: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80334FE4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334FE8: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80334FEC: lh          $t0, 0x4204($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4204);
    // 0x80334FF0: nop

    // 0x80334FF4: bne         $t0, $zero, L_80335020
    if (ctx->r8 != 0) {
        // 0x80334FF8: nop
    
            goto L_80335020;
    }
    // 0x80334FF8: nop

    // 0x80334FFC: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x80335000: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335004: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x80335008: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x8033500C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80335010: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x80335014: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335018: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033501C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80335020:
    // 0x80335020: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80335024: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80335028: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033502C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335030: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335034: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335038: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033503C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80335040: lh          $t6, 0x4204($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4204);
    // 0x80335044: nop

    // 0x80335048: bne         $t6, $zero, L_80335074
    if (ctx->r14 != 0) {
        // 0x8033504C: nop
    
            goto L_80335074;
    }
    // 0x8033504C: nop

    // 0x80335050: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80335054: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335058: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033505C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335060: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335064: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335068: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033506C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80335070: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80335074:
    // 0x80335074: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80335078: nop

    // 0x8033507C: lh          $t1, 0xA6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA6);
    // 0x80335080: nop

    // 0x80335084: sh          $t1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r9;
    // 0x80335088: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x8033508C: lui         $a2, 0x8033
    ctx->r6 = S32(0X8033 << 16);
    // 0x80335090: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x80335094: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x80335098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033509C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803350A0: addiu       $t8, $t8, -0x7F84
    ctx->r24 = ADD32(ctx->r24, -0X7F84);
    // 0x803350A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803350A8: lh          $a2, 0x5E20($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X5E20);
    // 0x803350AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803350B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803350B4: jal         0x8001C0EC
    // 0x803350B8: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_16;
    // 0x803350B8: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_16:
    // 0x803350BC: lh          $t3, 0x42($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X42);
    // 0x803350C0: lui         $a2, 0x8033
    ctx->r6 = S32(0X8033 << 16);
    // 0x803350C4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x803350C8: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x803350CC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803350D0: addiu       $t6, $t6, -0x7F58
    ctx->r14 = ADD32(ctx->r14, -0X7F58);
    // 0x803350D4: lh          $a2, 0x5E2C($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X5E2C);
    // 0x803350D8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803350DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803350E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803350E4: jal         0x8001C0EC
    // 0x803350E8: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    func_8001C0EC(rdram, ctx);
        goto after_17;
    // 0x803350E8: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    after_17:
    // 0x803350EC: lh          $t5, 0x42($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X42);
    // 0x803350F0: lui         $a2, 0x8033
    ctx->r6 = S32(0X8033 << 16);
    // 0x803350F4: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x803350F8: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x803350FC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80335100: addiu       $t9, $t9, -0x7F30
    ctx->r25 = ADD32(ctx->r25, -0X7F30);
    // 0x80335104: lh          $a2, 0x5E38($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X5E38);
    // 0x80335108: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8033510C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80335110: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335114: jal         0x8001C0EC
    // 0x80335118: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_18;
    // 0x80335118: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_18:
L_8033511C:
    // 0x8033511C: b           L_80335124
    // 0x80335120: nop

        goto L_80335124;
    // 0x80335120: nop

L_80335124:
    // 0x80335124: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80335128: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033512C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80335130: jr          $ra
    // 0x80335134: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80335134: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80330150_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330150: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80330154: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330158: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033015C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330160: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330164: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330168: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033016C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330170: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330174: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330178: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x8033017C: nop

    // 0x80330180: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80330184: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80330188: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8033018C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80330190: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330194: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330198: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033019C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803301A0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803301A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803301A8: lh          $t1, 0x423A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X423A);
    // 0x803301AC: nop

    // 0x803301B0: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x803301B4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803301B8: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x803301BC: nop

    // 0x803301C0: bne         $t2, $zero, L_80330220
    if (ctx->r10 != 0) {
        // 0x803301C4: nop
    
            goto L_80330220;
    }
    // 0x803301C4: nop

    // 0x803301C8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803301CC: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x803301D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301D4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803301D8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803301DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803301E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803301E4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803301E8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803301EC: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x803301F0: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x803301F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803301F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803301FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330200: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330204: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330208: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033020C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330210: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330214: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330218: b           L_8033034C
    // 0x8033021C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
        goto L_8033034C;
    // 0x8033021C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80330220:
    // 0x80330220: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80330224: lw          $t8, 0x7A64($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A64);
    // 0x80330228: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033022C: bne         $t8, $at, L_8033034C
    if (ctx->r24 != ctx->r1) {
        // 0x80330230: nop
    
            goto L_8033034C;
    }
    // 0x80330230: nop

    // 0x80330234: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80330238: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8033023C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80330240: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330244: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330248: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033024C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330250: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330254: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330258: lh          $t1, 0x4258($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4258);
    // 0x8033025C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330260: bne         $t1, $at, L_8033034C
    if (ctx->r9 != ctx->r1) {
        // 0x80330264: nop
    
            goto L_8033034C;
    }
    // 0x80330264: nop

    // 0x80330268: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033026C: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80330270: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330274: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80330278: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8033027C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330280: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80330284: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330288: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033028C: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
    // 0x80330290: sh          $t2, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r10;
    // 0x80330294: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80330298: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x8033029C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803302A0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803302A4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803302A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803302AC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803302B0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803302B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302B8: lh          $t7, 0x4238($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4238);
    // 0x803302BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803302C0: beq         $t7, $at, L_803302F0
    if (ctx->r15 == ctx->r1) {
        // 0x803302C4: nop
    
            goto L_803302F0;
    }
    // 0x803302C4: nop

    // 0x803302C8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x803302CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803302D4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803302D8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803302DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803302E0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803302E4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803302E8: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x803302EC: sh          $t8, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r24;
L_803302F0:
    // 0x803302F0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x803302F4: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x803302F8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803302FC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80330300: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80330304: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330308: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8033030C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330310: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80330314: lh          $t2, 0x423A($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X423A);
    // 0x80330318: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033031C: beq         $t2, $at, L_8033034C
    if (ctx->r10 == ctx->r1) {
        // 0x80330320: nop
    
            goto L_8033034C;
    }
    // 0x80330320: nop

    // 0x80330324: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x80330328: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033032C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330330: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330334: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330338: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033033C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330340: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330344: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x80330348: sh          $t3, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r11;
L_8033034C:
    // 0x8033034C: b           L_80330354
    // 0x80330350: nop

        goto L_80330354;
    // 0x80330350: nop

L_80330354:
    // 0x80330354: jr          $ra
    // 0x80330358: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80330358: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033076C_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033076C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330770: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330774: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330778: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033077C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330780: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330784: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330788: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033078C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330790: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330794: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330798: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033079C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803307A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803307A4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803307A8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803307AC: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x803307B0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803307B4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803307B8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803307BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803307C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803307C4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803307C8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803307CC: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x803307D0: nop

    // 0x803307D4: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x803307D8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803307DC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x803307E0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803307E4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803307E8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803307EC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803307F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803307F4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803307F8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803307FC: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80330800: nop

    // 0x80330804: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80330808: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033080C: nop

    // 0x80330810: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80330814: nop

    // 0x80330818: bne         $t7, $zero, L_803309EC
    if (ctx->r15 != 0) {
        // 0x8033081C: nop
    
            goto L_803309EC;
    }
    // 0x8033081C: nop

    // 0x80330820: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330824: nop

    // 0x80330828: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8033082C: nop

    // 0x80330830: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80330834: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80330838: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033083C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330840: nop

    // 0x80330844: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x80330848: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033084C: nop

    // 0x80330850: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80330854: nop

    // 0x80330858: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x8033085C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330860: nop

    // 0x80330864: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x80330868: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8033086C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80330870: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330874: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330878: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033087C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330880: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330884: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330888: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033088C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330890: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330894: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330898: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033089C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803308A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803308A4: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803308A8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803308AC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x803308B0: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x803308B4: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x803308B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308BC: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x803308C0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803308C4: nop

    // 0x803308C8: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x803308CC: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803308D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803308D4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803308D8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803308DC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803308E0: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x803308E4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803308E8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803308EC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803308F0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803308F4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803308F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803308FC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330900: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330904: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330908: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033090C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330910: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330914: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330918: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033091C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330920: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330924: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330928: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8033092C: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x80330930: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80330934: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330938: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x8033093C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330940: nop

    // 0x80330944: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330948: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033094C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330950: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330954: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330958: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033095C: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80330960: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330964: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80330968: addiu       $t8, $t8, -0x7F84
    ctx->r24 = ADD32(ctx->r24, -0X7F84);
    // 0x8033096C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330970: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80330974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330978: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8033097C: jal         0x8001C0EC
    // 0x80330980: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330980: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_0:
    // 0x80330984: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80330988: addiu       $t1, $t1, -0x7F58
    ctx->r9 = ADD32(ctx->r9, -0X7F58);
    // 0x8033098C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330990: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80330994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330998: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8033099C: jal         0x8001C0EC
    // 0x803309A0: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803309A0: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    after_1:
    // 0x803309A4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803309A8: addiu       $t2, $t2, -0x7F30
    ctx->r10 = ADD32(ctx->r10, -0X7F30);
    // 0x803309AC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803309B0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803309B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803309B8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x803309BC: jal         0x8001C0EC
    // 0x803309C0: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803309C0: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_2:
    // 0x803309C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309CC: jal         0x8001BBDC
    // 0x803309D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x803309D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x803309D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803309D8: jal         0x8001BBDC
    // 0x803309DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x803309DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x803309E0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803309E4: jal         0x8001BBDC
    // 0x803309E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x803309E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_803309EC:
    // 0x803309EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309F4: jal         0x8002A1FC
    // 0x803309F8: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_6;
    // 0x803309F8: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    after_6:
    // 0x803309FC: beq         $v0, $zero, L_80330A1C
    if (ctx->r2 == 0) {
        // 0x80330A00: nop
    
            goto L_80330A1C;
    }
    // 0x80330A00: nop

    // 0x80330A04: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330A08: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80330A0C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80330A10: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330A14: nop

    // 0x80330A18: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80330A1C:
    // 0x80330A1C: b           L_80330A24
    // 0x80330A20: nop

        goto L_80330A24;
    // 0x80330A20: nop

L_80330A24:
    // 0x80330A24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330A28: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330A2C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330A30: jr          $ra
    // 0x80330A34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80330A34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80333B68_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333B68: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80333B6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80333B70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333B74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333B78: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333B7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333B80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333B84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333B88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333B8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333B90: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333B94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333B98: sw          $t9, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r25;
    // 0x80333B9C: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80333BA0: nop

    // 0x80333BA4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333BA8: nop

    // 0x80333BAC: bne         $t1, $zero, L_80333C20
    if (ctx->r9 != 0) {
        // 0x80333BB0: nop
    
            goto L_80333C20;
    }
    // 0x80333BB0: nop

    // 0x80333BB4: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x80333BB8: nop

    // 0x80333BBC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333BC0: nop

    // 0x80333BC4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333BC8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333BCC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80333BD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333BD4: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x80333BD8: nop

    // 0x80333BDC: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80333BE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333BE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333BE8: jal         0x8001BBDC
    // 0x80333BEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80333BEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80333BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333BF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333BF8: jal         0x8002A46C
    // 0x80333BFC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x80333BFC: nop

    after_1:
    // 0x80333C00: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x80333C04: nop

    // 0x80333C08: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x80333C0C: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x80333C10: nop

    // 0x80333C14: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80333C18: nop

    // 0x80333C1C: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
L_80333C20:
    // 0x80333C20: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333C24: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x80333C28: nop

    // 0x80333C2C: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x80333C30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C38: jal         0x80029C40
    // 0x80333C3C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80333C3C: nop

    after_2:
    // 0x80333C40: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x80333C44: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80333C48: lw          $a1, 0x1C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X1C);
    // 0x80333C4C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80333C50: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80333C54: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80333C58: jal         0x800372A0
    // 0x80333C5C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    guRotateF(rdram, ctx);
        goto after_3;
    // 0x80333C5C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80333C60: addiu       $t0, $sp, 0xB0
    ctx->r8 = ADD32(ctx->r29, 0XB0);
    // 0x80333C64: addiu       $t1, $sp, 0xAC
    ctx->r9 = ADD32(ctx->r29, 0XAC);
    // 0x80333C68: addiu       $t3, $sp, 0xA8
    ctx->r11 = ADD32(ctx->r29, 0XA8);
    // 0x80333C6C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80333C70: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80333C74: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80333C78: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80333C7C: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x80333C80: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x80333C84: jal         0x80036360
    // 0x80333C88: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    guMtxXFMF(rdram, ctx);
        goto after_4;
    // 0x80333C88: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    after_4:
    // 0x80333C8C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80333C90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333C94: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80333C98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333CA0: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x80333CA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80333CA8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80333CAC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80333CB0: jal         0x80029018
    // 0x80333CB4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80333CB4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80333CB8: beq         $v0, $zero, L_80333CFC
    if (ctx->r2 == 0) {
        // 0x80333CBC: nop
    
            goto L_80333CFC;
    }
    // 0x80333CBC: nop

    // 0x80333CC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333CC4: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x80333CC8: nop

    // 0x80333CCC: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x80333CD0: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x80333CD4: nop

    // 0x80333CD8: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80333CDC: nop

    // 0x80333CE0: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
    // 0x80333CE4: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x80333CE8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80333CEC: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80333CF0: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x80333CF4: nop

    // 0x80333CF8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80333CFC:
    // 0x80333CFC: b           L_80333D04
    // 0x80333D00: nop

        goto L_80333D04;
    // 0x80333D00: nop

L_80333D04:
    // 0x80333D04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80333D08: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x80333D0C: jr          $ra
    // 0x80333D10: nop

    return;
    // 0x80333D10: nop

;}
RECOMP_FUNC void func_80333AF0_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333AF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333AF4: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80333AF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80333AFC: bne         $t6, $at, L_80333B58
    if (ctx->r14 != ctx->r1) {
        // 0x80333B00: nop
    
            goto L_80333B58;
    }
    // 0x80333B00: nop

    // 0x80333B04: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80333B08: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80333B0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B10: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333B14: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333B18: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333B1C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333B20: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333B24: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333B28: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80333B2C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80333B30: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80333B34: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80333B38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B3C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333B40: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333B44: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333B48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333B4C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333B50: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333B54: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80333B58:
    // 0x80333B58: jr          $ra
    // 0x80333B5C: nop

    return;
    // 0x80333B5C: nop

    // 0x80333B60: jr          $ra
    // 0x80333B64: nop

    return;
    // 0x80333B64: nop

;}
