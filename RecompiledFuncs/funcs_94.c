#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80339150_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339150: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80339154: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339158: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033915C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339160: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339164: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339168: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033916C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339170: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339174: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339178: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033917C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80339180: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80339184: sh          $zero, 0x0($sp)
    MEM_H(0X0, ctx->r29) = 0;
    // 0x80339188: lh          $t1, 0x100($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X100);
    // 0x8033918C: nop

    // 0x80339190: blez        $t1, L_80339224
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80339194: nop
    
            goto L_80339224;
    }
    // 0x80339194: nop

L_80339198:
    // 0x80339198: lh          $t3, 0x0($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X0);
    // 0x8033919C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803391A0: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x803391A4: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x803391A8: lh          $t6, 0xE8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE8);
    // 0x803391AC: nop

    // 0x803391B0: sh          $t6, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r14;
    // 0x803391B4: lh          $t7, 0x2($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2);
    // 0x803391B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803391BC: beq         $t7, $at, L_803391FC
    if (ctx->r15 == ctx->r1) {
        // 0x803391C0: nop
    
            goto L_803391FC;
    }
    // 0x803391C0: nop

    // 0x803391C4: lh          $t1, 0x2($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2);
    // 0x803391C8: lh          $t8, 0x0($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X0);
    // 0x803391CC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803391D0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803391D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803391D8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x803391DC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803391E0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803391E4: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x803391E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803391EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803391F0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803391F4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803391F8: sh          $t0, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r8;
L_803391FC:
    // 0x803391FC: lh          $t2, 0x0($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X0);
    // 0x80339200: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80339204: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80339208: sh          $t4, 0x0($sp)
    MEM_H(0X0, ctx->r29) = ctx->r12;
    // 0x8033920C: lh          $t8, 0x100($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X100);
    // 0x80339210: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x80339214: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80339218: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8033921C: bne         $at, $zero, L_80339198
    if (ctx->r1 != 0) {
        // 0x80339220: nop
    
            goto L_80339198;
    }
    // 0x80339220: nop

L_80339224:
    // 0x80339224: b           L_8033922C
    // 0x80339228: nop

        goto L_8033922C;
    // 0x80339228: nop

L_8033922C:
    // 0x8033922C: jr          $ra
    // 0x80339230: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80339230: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80339628_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339628: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033962C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339630: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80339634: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339638: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033963C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339640: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339644: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339648: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033964C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339650: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339654: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80339658: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x8033965C: nop

    // 0x80339660: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80339664: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80339668: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8033966C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80339670: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339674: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339678: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033967C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339680: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339684: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80339688: lh          $t1, 0x4250($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4250);
    // 0x8033968C: nop

    // 0x80339690: bgtz        $t1, L_803396A8
    if (SIGNED(ctx->r9) > 0) {
        // 0x80339694: nop
    
            goto L_803396A8;
    }
    // 0x80339694: nop

    // 0x80339698: jal         0x80339234
    // 0x8033969C: nop

    func_80339234_unk_bin_51(rdram, ctx);
        goto after_0;
    // 0x8033969C: nop

    after_0:
    // 0x803396A0: b           L_80339704
    // 0x803396A4: nop

        goto L_80339704;
    // 0x803396A4: nop

L_803396A8:
    // 0x803396A8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x803396AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803396B0: beq         $s0, $at, L_803396CC
    if (ctx->r16 == ctx->r1) {
        // 0x803396B4: nop
    
            goto L_803396CC;
    }
    // 0x803396B4: nop

    // 0x803396B8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803396BC: beq         $s0, $at, L_803396DC
    if (ctx->r16 == ctx->r1) {
        // 0x803396C0: nop
    
            goto L_803396DC;
    }
    // 0x803396C0: nop

    // 0x803396C4: b           L_803396EC
    // 0x803396C8: nop

        goto L_803396EC;
    // 0x803396C8: nop

L_803396CC:
    // 0x803396CC: jal         0x80338938
    // 0x803396D0: nop

    func_80338938_unk_bin_51(rdram, ctx);
        goto after_1;
    // 0x803396D0: nop

    after_1:
    // 0x803396D4: b           L_803396FC
    // 0x803396D8: nop

        goto L_803396FC;
    // 0x803396D8: nop

L_803396DC:
    // 0x803396DC: jal         0x80339310
    // 0x803396E0: nop

    func_80339310_unk_bin_51(rdram, ctx);
        goto after_2;
    // 0x803396E0: nop

    after_2:
    // 0x803396E4: b           L_803396FC
    // 0x803396E8: nop

        goto L_803396FC;
    // 0x803396E8: nop

L_803396EC:
    // 0x803396EC: jal         0x80339234
    // 0x803396F0: nop

    func_80339234_unk_bin_51(rdram, ctx);
        goto after_3;
    // 0x803396F0: nop

    after_3:
    // 0x803396F4: b           L_803396FC
    // 0x803396F8: nop

        goto L_803396FC;
    // 0x803396F8: nop

L_803396FC:
    // 0x803396FC: b           L_80339704
    // 0x80339700: nop

        goto L_80339704;
    // 0x80339700: nop

L_80339704:
    // 0x80339704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339708: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033970C: jr          $ra
    // 0x80339710: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80339710: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80339714_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339714: jr          $ra
    // 0x80339718: nop

    return;
    // 0x80339718: nop

    // 0x8033971C: jr          $ra
    // 0x80339720: nop

    return;
    // 0x80339720: nop

;}
RECOMP_FUNC void func_80339724_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339724: jr          $ra
    // 0x80339728: nop

    return;
    // 0x80339728: nop

    // 0x8033972C: jr          $ra
    // 0x80339730: nop

    return;
    // 0x80339730: nop

;}
RECOMP_FUNC void func_8033882C_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033882C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80338830: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80338834: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80338838: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033883C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338840: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338844: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338848: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033884C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338850: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338854: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338858: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033885C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338860: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80338864: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x80338868: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x8033886C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80338870: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x80338874: nop

    // 0x80338878: sh          $t3, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r11;
    // 0x8033887C: lh          $t4, 0x6($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6);
    // 0x80338880: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80338884: beq         $t4, $at, L_8033891C
    if (ctx->r12 == ctx->r1) {
        // 0x80338888: nop
    
            goto L_8033891C;
    }
    // 0x80338888: nop

    // 0x8033888C: lh          $t5, 0x6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X6);
    // 0x80338890: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80338894: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80338898: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033889C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803388A0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803388A4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803388A8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803388AC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x803388B0: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
    // 0x803388B4: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x803388B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803388BC: lh          $t0, 0x104($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X104);
    // 0x803388C0: nop

    // 0x803388C4: bne         $t0, $at, L_803388DC
    if (ctx->r8 != ctx->r1) {
        // 0x803388C8: nop
    
            goto L_803388DC;
    }
    // 0x803388C8: nop

    // 0x803388CC: lh          $t1, 0x100($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X100);
    // 0x803388D0: nop

    // 0x803388D4: bne         $t1, $zero, L_8033891C
    if (ctx->r9 != 0) {
        // 0x803388D8: nop
    
            goto L_8033891C;
    }
    // 0x803388D8: nop

L_803388DC:
    // 0x803388DC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803388E0: lwc1        $f4, -0x64FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X64FC);
    // 0x803388E4: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x803388E8: nop

    // 0x803388EC: swc1        $f4, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f4.u32l;
    // 0x803388F0: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x803388F4: nop

    // 0x803388F8: lwc1        $f12, 0x10($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X10);
    // 0x803388FC: nop

    // 0x80338900: swc1        $f12, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f12.u32l;
    // 0x80338904: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x80338908: nop

    // 0x8033890C: swc1        $f12, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f12.u32l;
    // 0x80338910: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x80338914: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x80338918: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_8033891C:
    // 0x8033891C: lh          $v0, 0x6($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X6);
    // 0x80338920: b           L_80338930
    // 0x80338924: nop

        goto L_80338930;
    // 0x80338924: nop

    // 0x80338928: b           L_80338930
    // 0x8033892C: nop

        goto L_80338930;
    // 0x8033892C: nop

L_80338930:
    // 0x80338930: jr          $ra
    // 0x80338934: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80338934: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void static_0_8000DD24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DD24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000DD28: b           L_8000DD38
    // 0x8000DD2C: nop

        goto L_8000DD38;
    // 0x8000DD2C: nop

    // 0x8000DD30: b           L_8000DD38
    // 0x8000DD34: nop

        goto L_8000DD38;
    // 0x8000DD34: nop

L_8000DD38:
    // 0x8000DD38: jr          $ra
    // 0x8000DD3C: nop

    return;
    // 0x8000DD3C: nop

;}
RECOMP_FUNC void static_0_8000E098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E098: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000E09C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E0A0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000E0A4: lw          $t6, 0x541C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X541C);
    // 0x8000E0A8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8000E0AC: beq         $t6, $zero, L_8000E0E4
    if (ctx->r14 == 0) {
        // 0x8000E0B0: nop
    
            goto L_8000E0E4;
    }
    // 0x8000E0B0: nop

L_8000E0B4:
    // 0x8000E0B4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000E0B8: addiu       $a0, $a0, 0x5740
    ctx->r4 = ADD32(ctx->r4, 0X5740);
    // 0x8000E0BC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8000E0C0: jal         0x80031880
    // 0x8000E0C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8000E0C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8000E0C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8000E0CC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000E0D0: lw          $t9, 0x541C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X541C);
    // 0x8000E0D4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8000E0D8: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x8000E0DC: bne         $at, $zero, L_8000E0B4
    if (ctx->r1 != 0) {
        // 0x8000E0E0: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_8000E0B4;
    }
    // 0x8000E0E0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_8000E0E4:
    // 0x8000E0E4: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000E0E8: lw          $t0, 0x5410($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5410);
    // 0x8000E0EC: nop

    // 0x8000E0F0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8000E0F4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E0F8: nop

    // 0x8000E0FC: beq         $t1, $zero, L_8000E1E0
    if (ctx->r9 == 0) {
        // 0x8000E100: nop
    
            goto L_8000E1E0;
    }
    // 0x8000E100: nop

L_8000E104:
    // 0x8000E104: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E108: nop

    // 0x8000E10C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8000E110: nop

    // 0x8000E114: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8000E118: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E11C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000E120: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x8000E124: lw          $t4, 0x5418($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5418);
    // 0x8000E128: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8000E12C: sltu        $at, $t7, $t4
    ctx->r1 = ctx->r15 < ctx->r12 ? 1 : 0;
    // 0x8000E130: beq         $at, $zero, L_8000E1C4
    if (ctx->r1 == 0) {
        // 0x8000E134: nop
    
            goto L_8000E1C4;
    }
    // 0x8000E134: nop

    // 0x8000E138: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000E13C: lw          $t8, 0x5410($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5410);
    // 0x8000E140: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E144: nop

    // 0x8000E148: bne         $t8, $t9, L_8000E164
    if (ctx->r24 != ctx->r25) {
        // 0x8000E14C: nop
    
            goto L_8000E164;
    }
    // 0x8000E14C: nop

    // 0x8000E150: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E154: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000E158: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8000E15C: nop

    // 0x8000E160: sw          $t1, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = ctx->r9;
L_8000E164:
    // 0x8000E164: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E168: jal         0x800357B0
    // 0x8000E16C: nop

    alUnlink(rdram, ctx);
        goto after_1;
    // 0x8000E16C: nop

    after_1:
    // 0x8000E170: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000E174: lw          $t2, 0x5414($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5414);
    // 0x8000E178: nop

    // 0x8000E17C: beq         $t2, $zero, L_8000E1A0
    if (ctx->r10 == 0) {
        // 0x8000E180: nop
    
            goto L_8000E1A0;
    }
    // 0x8000E180: nop

    // 0x8000E184: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8000E188: lw          $a1, 0x5414($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5414);
    // 0x8000E18C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E190: jal         0x800357E0
    // 0x8000E194: nop

    alLink(rdram, ctx);
        goto after_2;
    // 0x8000E194: nop

    after_2:
    // 0x8000E198: b           L_8000E1C4
    // 0x8000E19C: nop

        goto L_8000E1C4;
    // 0x8000E19C: nop

L_8000E1A0:
    // 0x8000E1A0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E1A4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000E1A8: sw          $t3, 0x5414($at)
    MEM_W(0X5414, ctx->r1) = ctx->r11;
    // 0x8000E1AC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E1B0: nop

    // 0x8000E1B4: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x8000E1B8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E1BC: nop

    // 0x8000E1C0: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
L_8000E1C4:
    // 0x8000E1C4: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8000E1C8: nop

    // 0x8000E1CC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8000E1D0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E1D4: nop

    // 0x8000E1D8: bne         $t7, $zero, L_8000E104
    if (ctx->r15 != 0) {
        // 0x8000E1DC: nop
    
            goto L_8000E104;
    }
    // 0x8000E1DC: nop

L_8000E1E0:
    // 0x8000E1E0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000E1E4: sw          $zero, 0x541C($at)
    MEM_W(0X541C, ctx->r1) = 0;
    // 0x8000E1E8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000E1EC: lw          $t8, 0x5418($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5418);
    // 0x8000E1F0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000E1F4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8000E1F8: sw          $t9, 0x5418($at)
    MEM_W(0X5418, ctx->r1) = ctx->r25;
    // 0x8000E1FC: b           L_8000E204
    // 0x8000E200: nop

        goto L_8000E204;
    // 0x8000E200: nop

L_8000E204:
    // 0x8000E204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E208: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000E20C: jr          $ra
    // 0x8000E210: nop

    return;
    // 0x8000E210: nop

    // 0x8000E214: nop

    // 0x8000E218: nop

    // 0x8000E21C: nop

;}
RECOMP_FUNC void static_0_8002F904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F904: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x8002F908: lw          $v0, 0x7F4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F4C);
    // 0x8002F90C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002F910: beq         $v0, $zero, L_8002F920
    if (ctx->r2 == 0) {
        // 0x8002F914: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002F920;
    }
    // 0x8002F914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F918: jalr        $v0
    // 0x8002F91C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8002F91C: nop

    after_0:
L_8002F920:
    // 0x8002F920: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x8002F924: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x8002F928: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002F92C: addiu       $v0, $v0, 0x7ECC
    ctx->r2 = ADD32(ctx->r2, 0X7ECC);
    // 0x8002F930: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8002F934: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8002F938: jal         0x8002F880
    // 0x8002F93C: sll         $a0, $t7, 2
    ctx->r4 = S32(ctx->r15 << 2);
    static_0_8002F880(rdram, ctx);
        goto after_1;
    // 0x8002F93C: sll         $a0, $t7, 2
    ctx->r4 = S32(ctx->r15 << 2);
    after_1:
    // 0x8002F940: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x8002F944: addiu       $v1, $v1, 0x7EC8
    ctx->r3 = ADD32(ctx->r3, 0X7EC8);
    // 0x8002F948: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002F94C: bne         $v0, $zero, L_8002F95C
    if (ctx->r2 != 0) {
        // 0x8002F950: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8002F95C;
    }
    // 0x8002F950: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002F954: b           L_8002F9E8
    // 0x8002F958: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002F9E8;
    // 0x8002F958: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002F95C:
    // 0x8002F95C: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8002F960: lw          $a2, 0x7ECC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7ECC);
    // 0x8002F964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002F968: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x8002F96C: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x8002F970: jal         0x8000E220
    // 0x8002F974: sll         $a2, $t8, 2
    ctx->r6 = S32(ctx->r24 << 2);
    memset_recomp(rdram, ctx);
        goto after_2;
    // 0x8002F974: sll         $a2, $t8, 2
    ctx->r6 = S32(ctx->r24 << 2);
    after_2:
    // 0x8002F978: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x8002F97C: addiu       $v1, $v1, 0x7EC8
    ctx->r3 = ADD32(ctx->r3, 0X7EC8);
    // 0x8002F980: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8002F984: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F988: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x8002F98C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8002F990: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002F994: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
    // 0x8002F998: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8002F99C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8002F9A0: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x8002F9A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8002F9A8: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x8002F9AC: lw          $t3, 0x7ECC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7ECC);
    // 0x8002F9B0: sw          $zero, 0x7ED0($at)
    MEM_W(0X7ED0, ctx->r1) = 0;
    // 0x8002F9B4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8002F9B8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F9BC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8002F9C0: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8002F9C4: sw          $t2, 0x7EC4($at)
    MEM_W(0X7EC4, ctx->r1) = ctx->r10;
    // 0x8002F9C8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F9CC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8002F9D0: sw          $t4, 0x7F3C($at)
    MEM_W(0X7F3C, ctx->r1) = ctx->r12;
    // 0x8002F9D4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F9D8: sw          $t5, 0x7F38($at)
    MEM_W(0X7F38, ctx->r1) = ctx->r13;
    // 0x8002F9DC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F9E0: sw          $t6, 0x7F48($at)
    MEM_W(0X7F48, ctx->r1) = ctx->r14;
    // 0x8002F9E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002F9E8:
    // 0x8002F9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F9EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002F9F0: jr          $ra
    // 0x8002F9F4: nop

    return;
    // 0x8002F9F4: nop

;}
RECOMP_FUNC void static_0_8002F9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F9F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8002F9FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002FA00: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002FA04: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8002FA08: jal         0x8002F880
    // 0x8002FA0C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    static_0_8002F880(rdram, ctx);
        goto after_0;
    // 0x8002FA0C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8002FA10: bne         $v0, $zero, L_8002FA20
    if (ctx->r2 != 0) {
        // 0x8002FA14: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8002FA20;
    }
    // 0x8002FA14: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8002FA18: b           L_8002FC20
    // 0x8002FA1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002FC20;
    // 0x8002FA1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002FA20:
    // 0x8002FA20: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002FA24: lw          $a0, 0x7EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EC4);
    // 0x8002FA28: addu        $t6, $v0, $s1
    ctx->r14 = ADD32(ctx->r2, ctx->r17);
    // 0x8002FA2C: subu        $a1, $t6, $a0
    ctx->r5 = SUB32(ctx->r14, ctx->r4);
    // 0x8002FA30: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x8002FA34: lw          $v1, 0x7ECC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7ECC);
    // 0x8002FA38: bgez        $a1, L_8002FA48
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8002FA3C: sra         $t7, $a1, 12
        ctx->r15 = S32(SIGNED(ctx->r5) >> 12);
            goto L_8002FA48;
    }
    // 0x8002FA3C: sra         $t7, $a1, 12
    ctx->r15 = S32(SIGNED(ctx->r5) >> 12);
    // 0x8002FA40: addiu       $at, $a1, 0xFFF
    ctx->r1 = ADD32(ctx->r5, 0XFFF);
    // 0x8002FA44: sra         $t7, $at, 12
    ctx->r15 = S32(SIGNED(ctx->r1) >> 12);
L_8002FA48:
    // 0x8002FA48: addiu       $a1, $t7, 0x1
    ctx->r5 = ADD32(ctx->r15, 0X1);
    // 0x8002FA4C: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8002FA50: beq         $at, $zero, L_8002FBF8
    if (ctx->r1 == 0) {
        // 0x8002FA54: sltu        $at, $v1, $a1
        ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
            goto L_8002FBF8;
    }
    // 0x8002FA54: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8002FA58: beq         $at, $zero, L_8002FA8C
    if (ctx->r1 == 0) {
        // 0x8002FA5C: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_8002FA8C;
    }
    // 0x8002FA5C: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8002FA60: addu        $t8, $a2, $s1
    ctx->r24 = ADD32(ctx->r6, ctx->r17);
    // 0x8002FA64: subu        $v0, $t8, $a0
    ctx->r2 = SUB32(ctx->r24, ctx->r4);
    // 0x8002FA68: bgez        $v0, L_8002FA78
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002FA6C: sra         $t9, $v0, 12
        ctx->r25 = S32(SIGNED(ctx->r2) >> 12);
            goto L_8002FA78;
    }
    // 0x8002FA6C: sra         $t9, $v0, 12
    ctx->r25 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8002FA70: addiu       $at, $v0, 0xFFF
    ctx->r1 = ADD32(ctx->r2, 0XFFF);
    // 0x8002FA74: sra         $t9, $at, 12
    ctx->r25 = S32(SIGNED(ctx->r1) >> 12);
L_8002FA78:
    // 0x8002FA78: addiu       $v0, $t9, 0x1
    ctx->r2 = ADD32(ctx->r25, 0X1);
L_8002FA7C:
    // 0x8002FA7C: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    // 0x8002FA80: sltu        $at, $t2, $v0
    ctx->r1 = ctx->r10 < ctx->r2 ? 1 : 0;
    // 0x8002FA84: bne         $at, $zero, L_8002FA7C
    if (ctx->r1 != 0) {
        // 0x8002FA88: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_8002FA7C;
    }
    // 0x8002FA88: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_8002FA8C:
    // 0x8002FA8C: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x8002FA90: subu        $a0, $a0, $s0
    ctx->r4 = SUB32(ctx->r4, ctx->r16);
    // 0x8002FA94: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002FA98: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8002FA9C: jal         0x8002F880
    // 0x8002FAA0: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    static_0_8002F880(rdram, ctx);
        goto after_1;
    // 0x8002FAA0: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_1:
    // 0x8002FAA4: bne         $v0, $zero, L_8002FAC8
    if (ctx->r2 != 0) {
        // 0x8002FAA8: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_8002FAC8;
    }
    // 0x8002FAA8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8002FAAC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002FAB0: lw          $t9, -0x58B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X58B0);
    // 0x8002FAB4: negu        $a0, $s1
    ctx->r4 = SUB32(0, ctx->r17);
    // 0x8002FAB8: jalr        $t9
    // 0x8002FABC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8002FABC: nop

    after_2:
    // 0x8002FAC0: b           L_8002FC20
    // 0x8002FAC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002FC20;
    // 0x8002FAC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002FAC8:
    // 0x8002FAC8: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8002FACC: lw          $a2, 0x7ECC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7ECC);
    // 0x8002FAD0: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002FAD4: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8002FAD8: lw          $a1, 0x7EC8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7EC8);
    // 0x8002FADC: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
    // 0x8002FAE0: sll         $a2, $t3, 2
    ctx->r6 = S32(ctx->r11 << 2);
    // 0x8002FAE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8002FAE8: jal         0x8003A840
    // 0x8002FAEC: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8002FAEC: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_3:
    // 0x8002FAF0: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x8002FAF4: lw          $v1, 0x7ECC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7ECC);
    // 0x8002FAF8: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x8002FAFC: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002FB00: subu        $t5, $s0, $v1
    ctx->r13 = SUB32(ctx->r16, ctx->r3);
    // 0x8002FB04: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8002FB08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002FB0C: mflo        $t4
    ctx->r12 = lo;
    // 0x8002FB10: addu        $a0, $t4, $a3
    ctx->r4 = ADD32(ctx->r12, ctx->r7);
    // 0x8002FB14: nop

    // 0x8002FB18: multu       $t5, $t0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002FB1C: mflo        $a2
    ctx->r6 = lo;
    // 0x8002FB20: jal         0x8000E220
    // 0x8002FB24: nop

    memset_recomp(rdram, ctx);
        goto after_4;
    // 0x8002FB24: nop

    after_4:
    // 0x8002FB28: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002FB2C: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002FB30: addiu       $t1, $t1, 0x7EC4
    ctx->r9 = ADD32(ctx->r9, 0X7EC4);
    // 0x8002FB34: addiu       $t0, $t0, 0x7EC8
    ctx->r8 = ADD32(ctx->r8, 0X7EC8);
    // 0x8002FB38: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x8002FB3C: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x8002FB40: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8002FB44: subu        $t7, $a0, $t6
    ctx->r15 = SUB32(ctx->r4, ctx->r14);
    // 0x8002FB48: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8002FB4C: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002FB50: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002FB54: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8002FB58: addiu       $a2, $a2, 0x7F38
    ctx->r6 = ADD32(ctx->r6, 0X7F38);
    // 0x8002FB5C: addiu       $a1, $a1, 0x7F3C
    ctx->r5 = ADD32(ctx->r5, 0X7F3C);
    // 0x8002FB60: bgez        $t7, L_8002FB70
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8002FB64: sra         $t8, $t7, 12
        ctx->r24 = S32(SIGNED(ctx->r15) >> 12);
            goto L_8002FB70;
    }
    // 0x8002FB64: sra         $t8, $t7, 12
    ctx->r24 = S32(SIGNED(ctx->r15) >> 12);
    // 0x8002FB68: addiu       $at, $t7, 0xFFF
    ctx->r1 = ADD32(ctx->r15, 0XFFF);
    // 0x8002FB6C: sra         $t8, $at, 12
    ctx->r24 = S32(SIGNED(ctx->r1) >> 12);
L_8002FB70:
    // 0x8002FB70: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002FB74: mflo        $t2
    ctx->r10 = lo;
    // 0x8002FB78: addu        $t9, $a3, $t2
    ctx->r25 = ADD32(ctx->r7, ctx->r10);
    // 0x8002FB7C: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
    // 0x8002FB80: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8002FB84: lw          $t3, 0x7ECC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7ECC);
    // 0x8002FB88: subu        $t8, $a0, $t7
    ctx->r24 = SUB32(ctx->r4, ctx->r15);
    // 0x8002FB8C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8002FB90: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8002FB94: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8002FB98: addiu       $t5, $t4, 0xFFF
    ctx->r13 = ADD32(ctx->r12, 0XFFF);
    // 0x8002FB9C: srl         $t6, $t5, 12
    ctx->r14 = S32(U32(ctx->r13) >> 12);
    // 0x8002FBA0: bgez        $t8, L_8002FBB0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8002FBA4: sra         $t2, $t8, 12
        ctx->r10 = S32(SIGNED(ctx->r24) >> 12);
            goto L_8002FBB0;
    }
    // 0x8002FBA4: sra         $t2, $t8, 12
    ctx->r10 = S32(SIGNED(ctx->r24) >> 12);
    // 0x8002FBA8: addiu       $at, $t8, 0xFFF
    ctx->r1 = ADD32(ctx->r24, 0XFFF);
    // 0x8002FBAC: sra         $t2, $at, 12
    ctx->r10 = S32(SIGNED(ctx->r1) >> 12);
L_8002FBB0:
    // 0x8002FBB0: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002FBB4: mflo        $t9
    ctx->r25 = lo;
    // 0x8002FBB8: addu        $t3, $a3, $t9
    ctx->r11 = ADD32(ctx->r7, ctx->r25);
    // 0x8002FBBC: sw          $t6, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r14;
    // 0x8002FBC0: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8002FBC4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8002FBC8: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x8002FBCC: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x8002FBD0: addiu       $t2, $t8, 0x1
    ctx->r10 = ADD32(ctx->r24, 0X1);
    // 0x8002FBD4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8002FBD8: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x8002FBDC: jal         0x800303F0
    // 0x8002FBE0: sw          $a3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r7;
    _free_internal(rdram, ctx);
        goto after_5;
    // 0x8002FBE0: sw          $a3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r7;
    after_5:
    // 0x8002FBE4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002FBE8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002FBEC: lw          $a0, 0x7EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EC4);
    // 0x8002FBF0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8002FBF4: sw          $s0, 0x7ECC($at)
    MEM_W(0X7ECC, ctx->r1) = ctx->r16;
L_8002FBF8:
    // 0x8002FBF8: addu        $t9, $a2, $s1
    ctx->r25 = ADD32(ctx->r6, ctx->r17);
    // 0x8002FBFC: subu        $t6, $t9, $a0
    ctx->r14 = SUB32(ctx->r25, ctx->r4);
    // 0x8002FC00: bgez        $t6, L_8002FC10
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8002FC04: sra         $t3, $t6, 12
        ctx->r11 = S32(SIGNED(ctx->r14) >> 12);
            goto L_8002FC10;
    }
    // 0x8002FC04: sra         $t3, $t6, 12
    ctx->r11 = S32(SIGNED(ctx->r14) >> 12);
    // 0x8002FC08: addiu       $at, $t6, 0xFFF
    ctx->r1 = ADD32(ctx->r14, 0XFFF);
    // 0x8002FC0C: sra         $t3, $at, 12
    ctx->r11 = S32(SIGNED(ctx->r1) >> 12);
L_8002FC10:
    // 0x8002FC10: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002FC14: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8002FC18: sw          $t4, 0x7ED4($at)
    MEM_W(0X7ED4, ctx->r1) = ctx->r12;
    // 0x8002FC1C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_8002FC20:
    // 0x8002FC20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002FC24: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002FC28: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002FC2C: jr          $ra
    // 0x8002FC30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8002FC30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void static_0_80032750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032750: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80032754: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x80032758: beql        $v0, $zero, L_8003277C
    if (ctx->r2 == 0) {
        // 0x8003275C: sw          $t8, 0x24($a0)
        MEM_W(0X24, ctx->r4) = ctx->r24;
            goto L_8003277C;
    }
    goto skip_0;
    // 0x8003275C: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    skip_0:
    // 0x80032760: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80032764: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80032768: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8003276C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80032770: jr          $ra
    // 0x80032774: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    return;
    // 0x80032774: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x80032778: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
L_8003277C:
    // 0x8003277C: jr          $ra
    // 0x80032780: nop

    return;
    // 0x80032780: nop

    // 0x80032784: jr          $ra
    // 0x80032788: nop

    return;
    // 0x80032788: nop

;}
RECOMP_FUNC void static_0_8003278C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003278C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80032790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80032794: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x80032798: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8003279C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800327A0: bne         $t6, $at, L_8003294C
    if (ctx->r14 != ctx->r1) {
        // 0x800327A4: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8003294C;
    }
    // 0x800327A4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800327A8: lbu         $t7, 0x9($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X9);
    // 0x800327AC: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x800327B0: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x800327B4: bnel        $t7, $at, L_80032950
    if (ctx->r15 != ctx->r1) {
        // 0x800327B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80032950;
    }
    goto skip_0;
    // 0x800327B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800327BC: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x800327C0: lbu         $t8, 0x7($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7);
    // 0x800327C4: lw          $fp, 0x24($s7)
    ctx->r30 = MEM_W(ctx->r23, 0X24);
    // 0x800327C8: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x800327CC: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x800327D0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800327D4: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x800327D8: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x800327DC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x800327E0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800327E4: jal         0x80032750
    // 0x800327E8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    static_0_80032750(rdram, ctx);
        goto after_0;
    // 0x800327E8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x800327EC: lw          $s1, 0x50($s7)
    ctx->r17 = MEM_W(ctx->r23, 0X50);
    // 0x800327F0: beq         $s1, $zero, L_80032868
    if (ctx->r17 == 0) {
        // 0x800327F4: nop
    
            goto L_80032868;
    }
    // 0x800327F4: nop

    // 0x800327F8: addiu       $s4, $zero, 0x15
    ctx->r20 = ADD32(0, 0X15);
L_800327FC:
    // 0x800327FC: lh          $t7, 0xC($s1)
    ctx->r15 = MEM_H(ctx->r17, 0XC);
    // 0x80032800: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80032804: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x80032808: bne         $s4, $t7, L_80032860
    if (ctx->r20 != ctx->r15) {
        // 0x8003280C: addu        $s0, $s0, $t9
        ctx->r16 = ADD32(ctx->r16, ctx->r25);
            goto L_80032860;
    }
    // 0x8003280C: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x80032810: jal         0x800357B0
    // 0x80032814: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x80032814: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80032818: beql        $s3, $zero, L_80032838
    if (ctx->r19 == 0) {
        // 0x8003281C: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80032838;
    }
    goto skip_1;
    // 0x8003281C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_1:
    // 0x80032820: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80032824: jal         0x800357E0
    // 0x80032828: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x80032828: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8003282C: b           L_80032840
    // 0x80032830: nop

        goto L_80032840;
    // 0x80032830: nop

    // 0x80032834: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80032838:
    // 0x80032838: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x8003283C: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
L_80032840:
    // 0x80032840: beq         $s2, $zero, L_8003285C
    if (ctx->r18 == 0) {
        // 0x80032844: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_8003285C;
    }
    // 0x80032844: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80032848: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8003284C: lw          $t8, 0x8($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X8);
    // 0x80032850: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x80032854: addu        $t6, $t8, $v0
    ctx->r14 = ADD32(ctx->r24, ctx->r2);
    // 0x80032858: sw          $t6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r14;
L_8003285C:
    // 0x8003285C: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
L_80032860:
    // 0x80032860: bne         $s2, $zero, L_800327FC
    if (ctx->r18 != 0) {
        // 0x80032864: or          $s1, $s2, $zero
        ctx->r17 = ctx->r18 | 0;
            goto L_800327FC;
    }
    // 0x80032864: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_80032868:
    // 0x80032868: beq         $s3, $zero, L_8003294C
    if (ctx->r19 == 0) {
        // 0x8003286C: or          $s1, $s3, $zero
        ctx->r17 = ctx->r19 | 0;
            goto L_8003294C;
    }
    // 0x8003286C: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x80032870: addiu       $s4, $s7, 0x48
    ctx->r20 = ADD32(ctx->r23, 0X48);
    // 0x80032874: addiu       $s5, $s4, 0x8
    ctx->r21 = ADD32(ctx->r20, 0X8);
    // 0x80032878: addiu       $s6, $zero, -0x8
    ctx->r22 = ADD32(0, -0X8);
L_8003287C:
    // 0x8003287C: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80032880: lw          $t7, 0x24($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X24);
    // 0x80032884: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x80032888: div         $zero, $t9, $fp
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r30))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r30)));
    // 0x8003288C: mflo        $v0
    ctx->r2 = lo;
    // 0x80032890: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80032894: bne         $fp, $zero, L_800328A0
    if (ctx->r30 != 0) {
        // 0x80032898: nop
    
            goto L_800328A0;
    }
    // 0x80032898: nop

    // 0x8003289C: break       7
    do_break(2147690652);
L_800328A0:
    // 0x800328A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800328A4: bne         $fp, $at, L_800328B8
    if (ctx->r30 != ctx->r1) {
        // 0x800328A8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800328B8;
    }
    // 0x800328A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800328AC: bne         $t9, $at, L_800328B8
    if (ctx->r25 != ctx->r1) {
        // 0x800328B0: nop
    
            goto L_800328B8;
    }
    // 0x800328B0: nop

    // 0x800328B4: break       6
    do_break(2147690676);
L_800328B8:
    // 0x800328B8: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800328BC: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x800328C0: mflo        $t8
    ctx->r24 = lo;
    // 0x800328C4: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
    // 0x800328C8: jal         0x80031F70
    // 0x800328CC: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x800328CC: nop

    after_3:
    // 0x800328D0: beq         $s4, $s6, L_8003293C
    if (ctx->r20 == ctx->r22) {
        // 0x800328D4: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_8003293C;
    }
    // 0x800328D4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800328D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800328DC:
    // 0x800328DC: bnel        $a0, $zero, L_800328FC
    if (ctx->r4 != 0) {
        // 0x800328E0: lw          $v0, 0x8($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X8);
            goto L_800328FC;
    }
    goto skip_2;
    // 0x800328E0: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    skip_2:
    // 0x800328E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800328E8: jal         0x800357E0
    // 0x800328EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alLink(rdram, ctx);
        goto after_4;
    // 0x800328EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x800328F0: b           L_8003293C
    // 0x800328F4: nop

        goto L_8003293C;
    // 0x800328F4: nop

    // 0x800328F8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
L_800328FC:
    // 0x800328FC: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80032900: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80032904: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80032908: beq         $at, $zero, L_8003292C
    if (ctx->r1 == 0) {
        // 0x8003290C: subu        $t9, $v0, $v1
        ctx->r25 = SUB32(ctx->r2, ctx->r3);
            goto L_8003292C;
    }
    // 0x8003290C: subu        $t9, $v0, $v1
    ctx->r25 = SUB32(ctx->r2, ctx->r3);
    // 0x80032910: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x80032914: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80032918: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003291C: jal         0x800357E0
    // 0x80032920: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alLink(rdram, ctx);
        goto after_5;
    // 0x80032920: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80032924: b           L_8003293C
    // 0x80032928: nop

        goto L_8003293C;
    // 0x80032928: nop

L_8003292C:
    // 0x8003292C: sw          $t9, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r25;
    // 0x80032930: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80032934: bnel        $s0, $zero, L_800328DC
    if (ctx->r16 != 0) {
        // 0x80032938: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_800328DC;
    }
    goto skip_3;
    // 0x80032938: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_3:
L_8003293C:
    // 0x8003293C: jal         0x80031F70
    // 0x80032940: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    osSetIntMask_recomp(rdram, ctx);
        goto after_6;
    // 0x80032940: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_6:
    // 0x80032944: bne         $s2, $zero, L_8003287C
    if (ctx->r18 != 0) {
        // 0x80032948: or          $s1, $s2, $zero
        ctx->r17 = ctx->r18 | 0;
            goto L_8003287C;
    }
    // 0x80032948: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_8003294C:
    // 0x8003294C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80032950:
    // 0x80032950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80032954: jr          $ra
    // 0x80032958: nop

    return;
    // 0x80032958: nop

;}
RECOMP_FUNC void static_0_8003295C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003295C: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80032960: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80032964: lbu         $s6, 0x8($t0)
    ctx->r22 = MEM_BU(ctx->r8, 0X8);
    // 0x80032968: lbu         $s4, 0x9($t0)
    ctx->r20 = MEM_BU(ctx->r8, 0X9);
    // 0x8003296C: lbu         $s1, 0xA($t0)
    ctx->r17 = MEM_BU(ctx->r8, 0XA);
    // 0x80032970: andi        $v1, $s6, 0xF0
    ctx->r3 = ctx->r22 & 0XF0;
    // 0x80032974: addiu       $t7, $v1, -0x80
    ctx->r15 = ADD32(ctx->r3, -0X80);
    // 0x80032978: sltiu       $at, $t7, 0x61
    ctx->r1 = ctx->r15 < 0X61 ? 1 : 0;
    // 0x8003297C: andi        $t6, $s6, 0xF
    ctx->r14 = ctx->r22 & 0XF;
    // 0x80032980: beq         $at, $zero, L_80033174
    if (ctx->r1 == 0) {
        // 0x80032984: or          $s6, $t6, $zero
        ctx->r22 = ctx->r14 | 0;
            goto L_80033174;
    }
    // 0x80032984: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x80032988: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003298C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80032990: addu        $at, $at, $t7
    gpr jr_addend_80032998 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80032994: lw          $t7, -0x3F70($at)
    ctx->r15 = ADD32(ctx->r1, -0X3F70);
    // 0x80032998: jr          $t7
    // 0x8003299C: nop

    switch (jr_addend_80032998 >> 2) {
        case 0: goto L_80032D40; break;
        case 1: goto L_80033174; break;
        case 2: goto L_80033174; break;
        case 3: goto L_80033174; break;
        case 4: goto L_80033174; break;
        case 5: goto L_80033174; break;
        case 6: goto L_80033174; break;
        case 7: goto L_80033174; break;
        case 8: goto L_80033174; break;
        case 9: goto L_80033174; break;
        case 10: goto L_80033174; break;
        case 11: goto L_80033174; break;
        case 12: goto L_80033174; break;
        case 13: goto L_80033174; break;
        case 14: goto L_80033174; break;
        case 15: goto L_80033174; break;
        case 16: goto L_800329A0; break;
        case 17: goto L_80033174; break;
        case 18: goto L_80033174; break;
        case 19: goto L_80033174; break;
        case 20: goto L_80033174; break;
        case 21: goto L_80033174; break;
        case 22: goto L_80033174; break;
        case 23: goto L_80033174; break;
        case 24: goto L_80033174; break;
        case 25: goto L_80033174; break;
        case 26: goto L_80033174; break;
        case 27: goto L_80033174; break;
        case 28: goto L_80033174; break;
        case 29: goto L_80033174; break;
        case 30: goto L_80033174; break;
        case 31: goto L_80033174; break;
        case 32: goto L_80032D98; break;
        case 33: goto L_80033174; break;
        case 34: goto L_80033174; break;
        case 35: goto L_80033174; break;
        case 36: goto L_80033174; break;
        case 37: goto L_80033174; break;
        case 38: goto L_80033174; break;
        case 39: goto L_80033174; break;
        case 40: goto L_80033174; break;
        case 41: goto L_80033174; break;
        case 42: goto L_80033174; break;
        case 43: goto L_80033174; break;
        case 44: goto L_80033174; break;
        case 45: goto L_80033174; break;
        case 46: goto L_80033174; break;
        case 47: goto L_80033174; break;
        case 48: goto L_80032E70; break;
        case 49: goto L_80033174; break;
        case 50: goto L_80033174; break;
        case 51: goto L_80033174; break;
        case 52: goto L_80033174; break;
        case 53: goto L_80033174; break;
        case 54: goto L_80033174; break;
        case 55: goto L_80033174; break;
        case 56: goto L_80033174; break;
        case 57: goto L_80033174; break;
        case 58: goto L_80033174; break;
        case 59: goto L_80033174; break;
        case 60: goto L_80033174; break;
        case 61: goto L_80033174; break;
        case 62: goto L_80033174; break;
        case 63: goto L_80033174; break;
        case 64: goto L_800330A8; break;
        case 65: goto L_80033174; break;
        case 66: goto L_80033174; break;
        case 67: goto L_80033174; break;
        case 68: goto L_80033174; break;
        case 69: goto L_80033174; break;
        case 70: goto L_80033174; break;
        case 71: goto L_80033174; break;
        case 72: goto L_80033174; break;
        case 73: goto L_80033174; break;
        case 74: goto L_80033174; break;
        case 75: goto L_80033174; break;
        case 76: goto L_80033174; break;
        case 77: goto L_80033174; break;
        case 78: goto L_80033174; break;
        case 79: goto L_80033174; break;
        case 80: goto L_80032DFC; break;
        case 81: goto L_80033174; break;
        case 82: goto L_80033174; break;
        case 83: goto L_80033174; break;
        case 84: goto L_80033174; break;
        case 85: goto L_80033174; break;
        case 86: goto L_80033174; break;
        case 87: goto L_80033174; break;
        case 88: goto L_80033174; break;
        case 89: goto L_80033174; break;
        case 90: goto L_80033174; break;
        case 91: goto L_80033174; break;
        case 92: goto L_80033174; break;
        case 93: goto L_80033174; break;
        case 94: goto L_80033174; break;
        case 95: goto L_80033174; break;
        case 96: goto L_800330DC; break;
        default: switch_error(__func__, 0x80032998, 0x8004C090);
    }
    // 0x8003299C: nop

L_800329A0:
    // 0x800329A0: beql        $s1, $zero, L_80032D44
    if (ctx->r17 == 0) {
        // 0x800329A4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80032D44;
    }
    goto skip_0;
    // 0x800329A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x800329A8: lw          $t8, 0x2C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X2C);
    // 0x800329AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800329B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800329B4: bne         $t8, $at, L_80033174
    if (ctx->r24 != ctx->r1) {
        // 0x800329B8: andi        $a1, $s4, 0xFF
        ctx->r5 = ctx->r20 & 0XFF;
            goto L_80033174;
    }
    // 0x800329B8: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x800329BC: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x800329C0: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x800329C4: jal         0x8003D4B0
    // 0x800329C8: sw          $t0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r8;
    __lookupSoundQuick(rdram, ctx);
        goto after_0;
    // 0x800329C8: sw          $t0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r8;
    after_0:
    // 0x800329CC: beq         $v0, $zero, L_80033174
    if (ctx->r2 == 0) {
        // 0x800329D0: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_80033174;
    }
    // 0x800329D0: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x800329D4: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
    // 0x800329D8: sll         $fp, $s6, 4
    ctx->r30 = S32(ctx->r22 << 4);
    // 0x800329DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800329E0: addu        $t6, $t9, $fp
    ctx->r14 = ADD32(ctx->r25, ctx->r30);
    // 0x800329E4: lbu         $t7, 0x8($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8);
    // 0x800329E8: sh          $zero, 0x76($sp)
    MEM_H(0X76, ctx->r29) = 0;
    // 0x800329EC: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x800329F0: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x800329F4: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x800329F8: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x800329FC: jal         0x8003D440
    // 0x80032A00: sh          $t7, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r15;
    __mapVoice(rdram, ctx);
        goto after_1;
    // 0x80032A00: sh          $t7, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r15;
    after_1:
    // 0x80032A04: beq         $v0, $zero, L_80033174
    if (ctx->r2 == 0) {
        // 0x80032A08: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80033174;
    }
    // 0x80032A08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80032A0C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80032A10: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x80032A14: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80032A18: jal         0x8003EDC8
    // 0x80032A1C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    alSynAllocVoice(rdram, ctx);
        goto after_2;
    // 0x80032A1C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_2:
    // 0x80032A20: sw          $s7, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r23;
    // 0x80032A24: sb          $zero, 0x34($s0)
    MEM_B(0X34, ctx->r16) = 0;
    // 0x80032A28: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80032A2C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x80032A30: addu        $t9, $t8, $fp
    ctx->r25 = ADD32(ctx->r24, ctx->r30);
    // 0x80032A34: lbu         $t6, 0xB($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XB);
    // 0x80032A38: slti        $at, $t6, 0x40
    ctx->r1 = SIGNED(ctx->r14) < 0X40 ? 1 : 0;
    // 0x80032A3C: bnel        $at, $zero, L_80032A50
    if (ctx->r1 != 0) {
        // 0x80032A40: sb          $zero, 0x35($s0)
        MEM_B(0X35, ctx->r16) = 0;
            goto L_80032A50;
    }
    goto skip_1;
    // 0x80032A40: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
    skip_1:
    // 0x80032A44: b           L_80032A50
    // 0x80032A48: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
        goto L_80032A50;
    // 0x80032A48: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
    // 0x80032A4C: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
L_80032A50:
    // 0x80032A50: lw          $v0, 0x4($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X4);
    // 0x80032A54: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x80032A58: lb          $t6, 0x5($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X5);
    // 0x80032A5C: subu        $t8, $s4, $t7
    ctx->r24 = SUB32(ctx->r20, ctx->r15);
    // 0x80032A60: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80032A64: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80032A68: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80032A6C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80032A70: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80032A74: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
    // 0x80032A78: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x80032A7C: jal         0x80034920
    // 0x80032A80: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    alCents2Ratio(rdram, ctx);
        goto after_3;
    // 0x80032A80: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    after_3:
    // 0x80032A84: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x80032A88: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x80032A8C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80032A90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80032A94: lbu         $t6, 0xC($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XC);
    // 0x80032A98: sb          $t6, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r14;
    // 0x80032A9C: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80032AA0: lw          $t7, 0x1C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X1C);
    // 0x80032AA4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80032AA8: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    // 0x80032AAC: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80032AB0: sw          $t6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r14;
    // 0x80032AB4: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80032AB8: addu        $t7, $t8, $fp
    ctx->r15 = ADD32(ctx->r24, ctx->r30);
    // 0x80032ABC: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x80032AC0: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x80032AC4: lbu         $a2, 0x4($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X4);
    // 0x80032AC8: beql        $a2, $zero, L_80032B34
    if (ctx->r6 == 0) {
        // 0x80032ACC: cfc1        $t8, $FpcCsr
        ctx->r24 = get_cop1_cs();
            goto L_80032B34;
    }
    goto skip_2;
    // 0x80032ACC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    skip_2:
    // 0x80032AD0: lw          $v0, 0x70($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X70);
    // 0x80032AD4: beql        $v0, $zero, L_80032B34
    if (ctx->r2 == 0) {
        // 0x80032AD8: cfc1        $t8, $FpcCsr
        ctx->r24 = get_cop1_cs();
            goto L_80032B34;
    }
    goto skip_3;
    // 0x80032AD8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    skip_3:
    // 0x80032ADC: lbu         $t9, 0x6($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X6);
    // 0x80032AE0: lbu         $a3, 0x5($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X5);
    // 0x80032AE4: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80032AE8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80032AEC: lbu         $t6, 0x7($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X7);
    // 0x80032AF0: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x80032AF4: jalr        $v0
    // 0x80032AF8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80032AF8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_4:
    // 0x80032AFC: beq         $v0, $zero, L_80032B30
    if (ctx->r2 == 0) {
        // 0x80032B00: addiu       $t8, $zero, 0x16
        ctx->r24 = ADD32(0, 0X16);
            goto L_80032B30;
    }
    // 0x80032B00: addiu       $t8, $zero, 0x16
    ctx->r24 = ADD32(0, 0X16);
    // 0x80032B04: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80032B08: sh          $t8, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r24;
    // 0x80032B0C: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x80032B10: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x80032B14: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80032B18: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80032B1C: jal         0x8003E80C
    // 0x80032B20: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    alEvtqPostEvent(rdram, ctx);
        goto after_5;
    // 0x80032B20: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    after_5:
    // 0x80032B24: lbu         $t9, 0x37($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X37);
    // 0x80032B28: ori         $t6, $t9, 0x1
    ctx->r14 = ctx->r25 | 0X1;
    // 0x80032B2C: sb          $t6, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r14;
L_80032B30:
    // 0x80032B30: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_80032B34:
    // 0x80032B34: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80032B38: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80032B3C: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80032B40: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80032B44: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80032B48: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80032B4C: nop

    // 0x80032B50: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80032B54: beql        $t7, $zero, L_80032BA4
    if (ctx->r15 == 0) {
        // 0x80032B58: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_80032BA4;
    }
    goto skip_4;
    // 0x80032B58: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_4:
    // 0x80032B5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80032B60: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80032B64: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80032B68: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80032B6C: nop

    // 0x80032B70: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80032B74: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80032B78: nop

    // 0x80032B7C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80032B80: bne         $t7, $zero, L_80032B98
    if (ctx->r15 != 0) {
        // 0x80032B84: nop
    
            goto L_80032B98;
    }
    // 0x80032B84: nop

    // 0x80032B88: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80032B8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80032B90: b           L_80032BB0
    // 0x80032B94: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_80032BB0;
    // 0x80032B94: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80032B98:
    // 0x80032B98: b           L_80032BB0
    // 0x80032B9C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_80032BB0;
    // 0x80032B9C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80032BA0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_80032BA4:
    // 0x80032BA4: nop

    // 0x80032BA8: bltz        $t7, L_80032B98
    if (SIGNED(ctx->r15) < 0) {
        // 0x80032BAC: nop
    
            goto L_80032B98;
    }
    // 0x80032BAC: nop

L_80032BB0:
    // 0x80032BB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80032BB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80032BB8: sb          $t7, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r15;
    // 0x80032BBC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80032BC0: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x80032BC4: lbu         $a2, 0x8($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X8);
    // 0x80032BC8: addiu       $s5, $s2, 0x48
    ctx->r21 = ADD32(ctx->r18, 0X48);
    // 0x80032BCC: beql        $a2, $zero, L_80032C3C
    if (ctx->r6 == 0) {
        // 0x80032BD0: lwc1        $f4, 0x64($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
            goto L_80032C3C;
    }
    goto skip_5;
    // 0x80032BD0: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    skip_5:
    // 0x80032BD4: lw          $v0, 0x70($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X70);
    // 0x80032BD8: beql        $v0, $zero, L_80032C3C
    if (ctx->r2 == 0) {
        // 0x80032BDC: lwc1        $f4, 0x64($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
            goto L_80032C3C;
    }
    goto skip_6;
    // 0x80032BDC: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    skip_6:
    // 0x80032BE0: lbu         $t9, 0xA($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XA);
    // 0x80032BE4: lbu         $a3, 0x9($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X9);
    // 0x80032BE8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80032BEC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80032BF0: lbu         $t6, 0xB($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XB);
    // 0x80032BF4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x80032BF8: jalr        $v0
    // 0x80032BFC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80032BFC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_6:
    // 0x80032C00: beq         $v0, $zero, L_80032C38
    if (ctx->r2 == 0) {
        // 0x80032C04: addiu       $t8, $zero, 0x17
        ctx->r24 = ADD32(0, 0X17);
            goto L_80032C38;
    }
    // 0x80032C04: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80032C08: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80032C0C: sh          $t8, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r24;
    // 0x80032C10: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x80032C14: sb          $s6, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r22;
    // 0x80032C18: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80032C1C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80032C20: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80032C24: jal         0x8003E80C
    // 0x80032C28: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    alEvtqPostEvent(rdram, ctx);
        goto after_7;
    // 0x80032C28: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    after_7:
    // 0x80032C2C: lbu         $t9, 0x37($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X37);
    // 0x80032C30: ori         $t6, $t9, 0x2
    ctx->r14 = ctx->r25 | 0X2;
    // 0x80032C34: sb          $t6, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r14;
L_80032C38:
    // 0x80032C38: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
L_80032C3C:
    // 0x80032C3C: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80032C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032C44: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x80032C48: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80032C4C: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x80032C50: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80032C54: addu        $v0, $t8, $fp
    ctx->r2 = ADD32(ctx->r24, ctx->r30);
    // 0x80032C58: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80032C5C: lbu         $s1, 0xA($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0XA);
    // 0x80032C60: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80032C64: nop

    // 0x80032C68: mul.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80032C6C: jal         0x8003D384
    // 0x80032C70: nop

    __vsPan(rdram, ctx);
        goto after_8;
    // 0x80032C70: nop

    after_8:
    // 0x80032C74: andi        $fp, $v0, 0xFF
    ctx->r30 = ctx->r2 & 0XFF;
    // 0x80032C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032C7C: jal         0x8003CF64
    // 0x80032C80: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __vsVol(rdram, ctx);
        goto after_9;
    // 0x80032C80: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_9:
    // 0x80032C84: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x80032C88: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80032C8C: lw          $a2, 0x8($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X8);
    // 0x80032C90: lw          $s3, 0x0($t7)
    ctx->r19 = MEM_W(ctx->r15, 0X0);
    // 0x80032C94: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80032C98: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80032C9C: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x80032CA0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80032CA4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80032CA8: jal         0x8002F790
    // 0x80032CAC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    alSynStartVoiceParams(rdram, ctx);
        goto after_10;
    // 0x80032CAC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    after_10:
    // 0x80032CB0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80032CB4: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80032CB8: sh          $t9, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r25;
    // 0x80032CBC: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x80032CC0: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80032CC4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80032CC8: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80032CCC: lbu         $t7, 0xD($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0XD);
    // 0x80032CD0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80032CD4: sb          $t7, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r15;
    // 0x80032CD8: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x80032CDC: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x80032CE0: jal         0x8003E80C
    // 0x80032CE4: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    alEvtqPostEvent(rdram, ctx);
        goto after_11;
    // 0x80032CE4: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    after_11:
    // 0x80032CE8: lw          $v0, 0xBC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XBC);
    // 0x80032CEC: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x80032CF0: ori         $t9, $s6, 0x80
    ctx->r25 = ctx->r22 | 0X80;
    // 0x80032CF4: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x80032CF8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80032CFC: beql        $t8, $zero, L_80033178
    if (ctx->r24 == 0) {
        // 0x80032D00: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80033178;
    }
    goto skip_7;
    // 0x80032D00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
    // 0x80032D04: sh          $t7, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r15;
    // 0x80032D08: sb          $t9, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r25;
    // 0x80032D0C: sb          $s4, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r20;
    // 0x80032D10: sb          $zero, 0x96($sp)
    MEM_B(0X96, ctx->r29) = 0;
    // 0x80032D14: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x80032D18: lw          $t6, 0x24($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X24);
    // 0x80032D1C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80032D20: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80032D24: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032D28: mflo        $s3
    ctx->r19 = lo;
    // 0x80032D2C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80032D30: jal         0x8003E80C
    // 0x80032D34: nop

    alEvtqPostEvent(rdram, ctx);
        goto after_12;
    // 0x80032D34: nop

    after_12:
    // 0x80032D38: b           L_80033178
    // 0x80032D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80033178;
    // 0x80032D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80032D40:
    // 0x80032D40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80032D44:
    // 0x80032D44: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x80032D48: jal         0x8003D3CC
    // 0x80032D4C: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    __lookupVoice(rdram, ctx);
        goto after_13;
    // 0x80032D4C: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    after_13:
    // 0x80032D50: beq         $v0, $zero, L_80033174
    if (ctx->r2 == 0) {
        // 0x80032D54: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80033174;
    }
    // 0x80032D54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80032D58: lbu         $t7, 0x35($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X35);
    // 0x80032D5C: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80032D60: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80032D64: bne         $s6, $t7, L_80032D74
    if (ctx->r22 != ctx->r15) {
        // 0x80032D68: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80032D74;
    }
    // 0x80032D68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80032D6C: b           L_80033174
    // 0x80032D70: sb          $t9, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r25;
        goto L_80033174;
    // 0x80032D70: sb          $t9, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r25;
L_80032D74:
    // 0x80032D74: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x80032D78: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x80032D7C: sb          $fp, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r30;
    // 0x80032D80: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80032D84: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80032D88: jal         0x8003CFEC
    // 0x80032D8C: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    __seqpReleaseVoice(rdram, ctx);
        goto after_14;
    // 0x80032D8C: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    after_14:
    // 0x80032D90: b           L_80033178
    // 0x80032D94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80033178;
    // 0x80032D94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80032D98:
    // 0x80032D98: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80032D9C: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x80032DA0: jal         0x8003D3CC
    // 0x80032DA4: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    __lookupVoice(rdram, ctx);
        goto after_15;
    // 0x80032DA4: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    after_15:
    // 0x80032DA8: beq         $v0, $zero, L_80033174
    if (ctx->r2 == 0) {
        // 0x80032DAC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80033174;
    }
    // 0x80032DAC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80032DB0: sb          $s1, 0x33($v0)
    MEM_B(0X33, ctx->r2) = ctx->r17;
    // 0x80032DB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80032DB8: jal         0x8003CF64
    // 0x80032DBC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __vsVol(rdram, ctx);
        goto after_16;
    // 0x80032DBC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_16:
    // 0x80032DC0: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80032DC4: sra         $t7, $s1, 16
    ctx->r15 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80032DC8: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80032DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032DD0: jal         0x8003CF40
    // 0x80032DD4: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    __vsDelta(rdram, ctx);
        goto after_17;
    // 0x80032DD4: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_17:
    // 0x80032DD8: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x80032DDC: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80032DE0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80032DE4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80032DE8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80032DEC: jal         0x8003EBB0
    // 0x80032DF0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_18;
    // 0x80032DF0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_18:
    // 0x80032DF4: b           L_80033178
    // 0x80032DF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80033178;
    // 0x80032DF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80032DFC:
    // 0x80032DFC: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x80032E00: beql        $s0, $zero, L_80033178
    if (ctx->r16 == 0) {
        // 0x80032E04: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80033178;
    }
    goto skip_8;
    // 0x80032E04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_8:
    // 0x80032E08: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x80032E0C: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
L_80032E10:
    // 0x80032E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032E14: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80032E18: bnel        $s3, $t6, L_80032E60
    if (ctx->r19 != ctx->r14) {
        // 0x80032E1C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032E60;
    }
    goto skip_9;
    // 0x80032E1C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_9:
    // 0x80032E20: jal         0x8003CF64
    // 0x80032E24: sb          $s4, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r20;
    __vsVol(rdram, ctx);
        goto after_19;
    // 0x80032E24: sb          $s4, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r20;
    after_19:
    // 0x80032E28: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80032E2C: sra         $t8, $s1, 16
    ctx->r24 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80032E30: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80032E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032E38: jal         0x8003CF40
    // 0x80032E3C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    __vsDelta(rdram, ctx);
        goto after_20;
    // 0x80032E3C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_20:
    // 0x80032E40: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x80032E44: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80032E48: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80032E4C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80032E50: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80032E54: jal         0x8003EBB0
    // 0x80032E58: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_21;
    // 0x80032E58: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_21:
    // 0x80032E5C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80032E60:
    // 0x80032E60: bnel        $s0, $zero, L_80032E10
    if (ctx->r16 != 0) {
        // 0x80032E64: lbu         $t6, 0x31($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X31);
            goto L_80032E10;
    }
    goto skip_10;
    // 0x80032E64: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
    skip_10:
    // 0x80032E68: b           L_80033178
    // 0x80032E6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80033178;
    // 0x80032E6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80032E70:
    // 0x80032E70: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80032E74: beq         $s4, $at, L_80032F04
    if (ctx->r20 == ctx->r1) {
        // 0x80032E78: or          $v0, $s4, $zero
        ctx->r2 = ctx->r20 | 0;
            goto L_80032F04;
    }
    // 0x80032E78: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80032E7C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80032E80: beq         $v0, $at, L_80032EA8
    if (ctx->r2 == ctx->r1) {
        // 0x80032E84: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_80032EA8;
    }
    // 0x80032E84: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80032E88: beq         $v0, $at, L_80032F94
    if (ctx->r2 == ctx->r1) {
        // 0x80032E8C: addiu       $at, $zero, 0x40
        ctx->r1 = ADD32(0, 0X40);
            goto L_80032F94;
    }
    // 0x80032E8C: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x80032E90: beq         $v0, $at, L_80032FA8
    if (ctx->r2 == ctx->r1) {
        // 0x80032E94: addiu       $at, $zero, 0x5B
        ctx->r1 = ADD32(0, 0X5B);
            goto L_80032FA8;
    }
    // 0x80032E94: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x80032E98: beql        $v0, $at, L_8003305C
    if (ctx->r2 == ctx->r1) {
        // 0x80032E9C: lw          $t9, 0x60($s2)
        ctx->r25 = MEM_W(ctx->r18, 0X60);
            goto L_8003305C;
    }
    goto skip_11;
    // 0x80032E9C: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
    skip_11:
    // 0x80032EA0: b           L_80033178
    // 0x80032EA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80033178;
    // 0x80032EA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80032EA8:
    // 0x80032EA8: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
    // 0x80032EAC: sll         $t6, $s6, 4
    ctx->r14 = S32(ctx->r22 << 4);
    // 0x80032EB0: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x80032EB4: sb          $s1, 0x7($t8)
    MEM_B(0X7, ctx->r24) = ctx->r17;
    // 0x80032EB8: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x80032EBC: beql        $s0, $zero, L_80033178
    if (ctx->r16 == 0) {
        // 0x80032EC0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80033178;
    }
    goto skip_12;
    // 0x80032EC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_12:
    // 0x80032EC4: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x80032EC8: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
L_80032ECC:
    // 0x80032ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032ED0: bnel        $s3, $t7, L_80032EF4
    if (ctx->r19 != ctx->r15) {
        // 0x80032ED4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032EF4;
    }
    goto skip_13;
    // 0x80032ED4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_13:
    // 0x80032ED8: jal         0x8003D384
    // 0x80032EDC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __vsPan(rdram, ctx);
        goto after_22;
    // 0x80032EDC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_22:
    // 0x80032EE0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80032EE4: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80032EE8: jal         0x8003EF10
    // 0x80032EEC: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    alSynSetPan(rdram, ctx);
        goto after_23;
    // 0x80032EEC: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_23:
    // 0x80032EF0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80032EF4:
    // 0x80032EF4: bnel        $s0, $zero, L_80032ECC
    if (ctx->r16 != 0) {
        // 0x80032EF8: lbu         $t7, 0x31($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X31);
            goto L_80032ECC;
    }
    goto skip_14;
    // 0x80032EF8: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
    skip_14:
    // 0x80032EFC: b           L_80033178
    // 0x80032F00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80033178;
    // 0x80032F00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80032F04:
    // 0x80032F04: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
    // 0x80032F08: sll         $t6, $s6, 4
    ctx->r14 = S32(ctx->r22 << 4);
    // 0x80032F0C: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x80032F10: sb          $s1, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r17;
    // 0x80032F14: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x80032F18: beql        $s0, $zero, L_80033178
    if (ctx->r16 == 0) {
        // 0x80032F1C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80033178;
    }
    goto skip_15;
    // 0x80032F1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_15:
    // 0x80032F20: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x80032F24: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x80032F28: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
L_80032F2C:
    // 0x80032F2C: bnel        $s3, $t7, L_80032F84
    if (ctx->r19 != ctx->r15) {
        // 0x80032F30: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032F84;
    }
    goto skip_16;
    // 0x80032F30: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_16:
    // 0x80032F34: lbu         $t9, 0x34($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X34);
    // 0x80032F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032F3C: beql        $s4, $t9, L_80032F84
    if (ctx->r20 == ctx->r25) {
        // 0x80032F40: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032F84;
    }
    goto skip_17;
    // 0x80032F40: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_17:
    // 0x80032F44: jal         0x8003CF64
    // 0x80032F48: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __vsVol(rdram, ctx);
        goto after_24;
    // 0x80032F48: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_24:
    // 0x80032F4C: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80032F50: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80032F54: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80032F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032F5C: jal         0x8003CF40
    // 0x80032F60: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    __vsDelta(rdram, ctx);
        goto after_25;
    // 0x80032F60: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_25:
    // 0x80032F64: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x80032F68: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80032F6C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80032F70: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80032F74: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80032F78: jal         0x8003EBB0
    // 0x80032F7C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_26;
    // 0x80032F7C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_26:
    // 0x80032F80: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80032F84:
    // 0x80032F84: bnel        $s0, $zero, L_80032F2C
    if (ctx->r16 != 0) {
        // 0x80032F88: lbu         $t7, 0x31($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X31);
            goto L_80032F2C;
    }
    goto skip_18;
    // 0x80032F88: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
    skip_18:
    // 0x80032F8C: b           L_80033178
    // 0x80032F90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80033178;
    // 0x80032F90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80032F94:
    // 0x80032F94: lw          $t7, 0x60($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X60);
    // 0x80032F98: sll         $t9, $s6, 4
    ctx->r25 = S32(ctx->r22 << 4);
    // 0x80032F9C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80032FA0: b           L_80033174
    // 0x80032FA4: sb          $s1, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r17;
        goto L_80033174;
    // 0x80032FA4: sb          $s1, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r17;
L_80032FA8:
    // 0x80032FA8: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80032FAC: sll         $t7, $s6, 4
    ctx->r15 = S32(ctx->r22 << 4);
    // 0x80032FB0: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80032FB4: sb          $s1, 0xB($t9)
    MEM_B(0XB, ctx->r25) = ctx->r17;
    // 0x80032FB8: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x80032FBC: beql        $s0, $zero, L_80033178
    if (ctx->r16 == 0) {
        // 0x80032FC0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80033178;
    }
    goto skip_19;
    // 0x80032FC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_19:
    // 0x80032FC4: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x80032FC8: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80032FCC: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x80032FD0: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x80032FD4: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x80032FD8: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x80032FDC: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
L_80032FE0:
    // 0x80032FE0: bnel        $s3, $t6, L_80033048
    if (ctx->r19 != ctx->r14) {
        // 0x80032FE4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80033048;
    }
    goto skip_20;
    // 0x80032FE4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_20:
    // 0x80032FE8: lbu         $v0, 0x35($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35);
    // 0x80032FEC: slti        $at, $s1, 0x40
    ctx->r1 = SIGNED(ctx->r17) < 0X40 ? 1 : 0;
    // 0x80032FF0: beql        $s4, $v0, L_80033048
    if (ctx->r20 == ctx->r2) {
        // 0x80032FF4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80033048;
    }
    goto skip_21;
    // 0x80032FF4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_21:
    // 0x80032FF8: bne         $at, $zero, L_80033010
    if (ctx->r1 != 0) {
        // 0x80032FFC: nop
    
            goto L_80033010;
    }
    // 0x80032FFC: nop

    // 0x80033000: bnel        $v0, $zero, L_80033048
    if (ctx->r2 != 0) {
        // 0x80033004: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80033048;
    }
    goto skip_22;
    // 0x80033004: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_22:
    // 0x80033008: b           L_80033044
    // 0x8003300C: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
        goto L_80033044;
    // 0x8003300C: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
L_80033010:
    // 0x80033010: bne         $s6, $v0, L_80033020
    if (ctx->r22 != ctx->r2) {
        // 0x80033014: nop
    
            goto L_80033020;
    }
    // 0x80033014: nop

    // 0x80033018: b           L_80033044
    // 0x8003301C: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
        goto L_80033044;
    // 0x8003301C: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
L_80033020:
    // 0x80033020: bnel        $s7, $v0, L_80033048
    if (ctx->r23 != ctx->r2) {
        // 0x80033024: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80033048;
    }
    goto skip_23;
    // 0x80033024: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_23:
    // 0x80033028: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x8003302C: sb          $fp, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r30;
    // 0x80033030: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80033034: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x80033038: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8003303C: jal         0x8003CFEC
    // 0x80033040: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    __seqpReleaseVoice(rdram, ctx);
        goto after_27;
    // 0x80033040: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    after_27:
L_80033044:
    // 0x80033044: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80033048:
    // 0x80033048: bnel        $s0, $zero, L_80032FE0
    if (ctx->r16 != 0) {
        // 0x8003304C: lbu         $t6, 0x31($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X31);
            goto L_80032FE0;
    }
    goto skip_24;
    // 0x8003304C: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
    skip_24:
    // 0x80033050: b           L_80033178
    // 0x80033054: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80033178;
    // 0x80033054: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80033058: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
L_8003305C:
    // 0x8003305C: sll         $t6, $s6, 4
    ctx->r14 = S32(ctx->r22 << 4);
    // 0x80033060: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x80033064: sb          $s1, 0xA($t8)
    MEM_B(0XA, ctx->r24) = ctx->r17;
    // 0x80033068: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x8003306C: beql        $s0, $zero, L_80033178
    if (ctx->r16 == 0) {
        // 0x80033070: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80033178;
    }
    goto skip_25;
    // 0x80033070: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_25:
    // 0x80033074: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x80033078: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
L_8003307C:
    // 0x8003307C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80033080: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x80033084: bnel        $s3, $t7, L_80033098
    if (ctx->r19 != ctx->r15) {
        // 0x80033088: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80033098;
    }
    goto skip_26;
    // 0x80033088: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_26:
    // 0x8003308C: jal         0x8003EFA0
    // 0x80033090: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    alSynSetFXMix(rdram, ctx);
        goto after_28;
    // 0x80033090: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    after_28:
    // 0x80033094: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80033098:
    // 0x80033098: bnel        $s0, $zero, L_8003307C
    if (ctx->r16 != 0) {
        // 0x8003309C: lbu         $t7, 0x31($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X31);
            goto L_8003307C;
    }
    goto skip_27;
    // 0x8003309C: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
    skip_27:
    // 0x800330A0: b           L_80033178
    // 0x800330A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80033178;
    // 0x800330A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800330A8:
    // 0x800330A8: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x800330AC: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x800330B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800330B4: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x800330B8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x800330BC: addu        $t8, $v0, $t6
    ctx->r24 = ADD32(ctx->r2, ctx->r14);
    // 0x800330C0: slt         $at, $s4, $t9
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800330C4: beql        $at, $zero, L_80033178
    if (ctx->r1 == 0) {
        // 0x800330C8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80033178;
    }
    goto skip_28;
    // 0x800330C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_28:
    // 0x800330CC: jal         0x8003CDB0
    // 0x800330D0: lw          $a1, 0xC($t8)
    ctx->r5 = MEM_W(ctx->r24, 0XC);
    __setInstChanState(rdram, ctx);
        goto after_29;
    // 0x800330D0: lw          $a1, 0xC($t8)
    ctx->r5 = MEM_W(ctx->r24, 0XC);
    after_29:
    // 0x800330D4: b           L_80033178
    // 0x800330D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80033178;
    // 0x800330D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800330DC:
    // 0x800330DC: lw          $t7, 0x60($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X60);
    // 0x800330E0: sll         $fp, $s6, 4
    ctx->r30 = S32(ctx->r22 << 4);
    // 0x800330E4: sll         $t8, $s1, 7
    ctx->r24 = S32(ctx->r17 << 7);
    // 0x800330E8: addu        $t9, $t7, $fp
    ctx->r25 = ADD32(ctx->r15, ctx->r30);
    // 0x800330EC: lh          $t6, 0x4($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X4);
    // 0x800330F0: addu        $t7, $t8, $s4
    ctx->r15 = ADD32(ctx->r24, ctx->r20);
    // 0x800330F4: addiu       $t9, $t7, -0x2000
    ctx->r25 = ADD32(ctx->r15, -0X2000);
    // 0x800330F8: multu       $t6, $t9
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800330FC: mflo        $a0
    ctx->r4 = lo;
    // 0x80033100: bgez        $a0, L_80033110
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80033104: sra         $t8, $a0, 13
        ctx->r24 = S32(SIGNED(ctx->r4) >> 13);
            goto L_80033110;
    }
    // 0x80033104: sra         $t8, $a0, 13
    ctx->r24 = S32(SIGNED(ctx->r4) >> 13);
    // 0x80033108: addiu       $at, $a0, 0x1FFF
    ctx->r1 = ADD32(ctx->r4, 0X1FFF);
    // 0x8003310C: sra         $t8, $at, 13
    ctx->r24 = S32(SIGNED(ctx->r1) >> 13);
L_80033110:
    // 0x80033110: jal         0x80034920
    // 0x80033114: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    alCents2Ratio(rdram, ctx);
        goto after_30;
    // 0x80033114: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_30:
    // 0x80033118: lw          $t7, 0x60($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X60);
    // 0x8003311C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80033120: addu        $t6, $t7, $fp
    ctx->r14 = ADD32(ctx->r15, ctx->r30);
    // 0x80033124: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
    // 0x80033128: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x8003312C: beql        $s0, $zero, L_80033178
    if (ctx->r16 == 0) {
        // 0x80033130: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80033178;
    }
    goto skip_29;
    // 0x80033130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_29:
    // 0x80033134: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x80033138: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
L_8003313C:
    // 0x8003313C: bnel        $s3, $t9, L_8003316C
    if (ctx->r19 != ctx->r25) {
        // 0x80033140: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8003316C;
    }
    goto skip_30;
    // 0x80033140: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_30:
    // 0x80033144: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80033148: lwc1        $f10, 0x2C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8003314C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80033150: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80033154: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80033158: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8003315C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80033160: jal         0x8003EC50
    // 0x80033164: nop

    alSynSetPitch(rdram, ctx);
        goto after_31;
    // 0x80033164: nop

    after_31:
    // 0x80033168: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8003316C:
    // 0x8003316C: bnel        $s0, $zero, L_8003313C
    if (ctx->r16 != 0) {
        // 0x80033170: lbu         $t9, 0x31($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X31);
            goto L_8003313C;
    }
    goto skip_31;
    // 0x80033170: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
    skip_31:
L_80033174:
    // 0x80033174: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80033178:
    // 0x80033178: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x8003317C: jr          $ra
    // 0x80033180: nop

    return;
    // 0x80033180: nop

    // 0x80033184: jr          $ra
    // 0x80033188: nop

    return;
    // 0x80033188: nop

;}
RECOMP_FUNC void static_0_80033920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033920: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x80033924: bne         $t6, $zero, L_80033A04
    if (ctx->r14 != 0) {
        // 0x80033928: nop
    
            goto L_80033A04;
    }
    // 0x80033928: nop

    // 0x8003392C: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x80033930: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80033934: sb          $t1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r9;
    // 0x80033938: blez        $t7, L_80033A04
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8003393C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80033A04;
    }
    // 0x8003393C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80033940: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80033944: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80033948: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
L_8003394C:
    // 0x8003394C: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80033950: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x80033954: lbu         $t6, 0xE($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XE);
    // 0x80033958: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8003395C: bnel        $t6, $zero, L_800339F0
    if (ctx->r14 != 0) {
        // 0x80033960: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_800339F0;
    }
    goto skip_0;
    // 0x80033960: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_0:
    // 0x80033964: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80033968: sb          $t1, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r9;
    // 0x8003396C: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80033970: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80033974: lw          $t9, 0x4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4);
    // 0x80033978: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x8003397C: addu        $t6, $t9, $a1
    ctx->r14 = ADD32(ctx->r25, ctx->r5);
    // 0x80033980: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80033984: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x80033988: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x8003398C: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x80033990: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x80033994: bnel        $t9, $zero, L_800339F0
    if (ctx->r25 != 0) {
        // 0x80033998: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_800339F0;
    }
    goto skip_1;
    // 0x80033998: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_1:
    // 0x8003399C: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x800339A0: lbu         $a2, 0x8($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X8);
    // 0x800339A4: sb          $t1, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r9;
    // 0x800339A8: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x800339AC: bne         $a2, $zero, L_800339D4
    if (ctx->r6 != 0) {
        // 0x800339B0: sw          $t7, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r15;
            goto L_800339D4;
    }
    // 0x800339B0: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800339B4: lw          $t8, 0x10($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X10);
    // 0x800339B8: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x800339BC: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x800339C0: beq         $a2, $zero, L_800339EC
    if (ctx->r6 == 0) {
        // 0x800339C4: sw          $t9, 0x10($t0)
        MEM_W(0X10, ctx->r8) = ctx->r25;
            goto L_800339EC;
    }
    // 0x800339C4: sw          $t9, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r25;
    // 0x800339C8: addu        $t6, $a2, $a1
    ctx->r14 = ADD32(ctx->r6, ctx->r5);
    // 0x800339CC: b           L_800339EC
    // 0x800339D0: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
        goto L_800339EC;
    // 0x800339D0: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
L_800339D4:
    // 0x800339D4: bnel        $t2, $a2, L_800339F0
    if (ctx->r10 != ctx->r6) {
        // 0x800339D8: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_800339F0;
    }
    goto skip_2;
    // 0x800339D8: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_2:
    // 0x800339DC: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x800339E0: beq         $a2, $zero, L_800339EC
    if (ctx->r6 == 0) {
        // 0x800339E4: addu        $t7, $a2, $a1
        ctx->r15 = ADD32(ctx->r6, ctx->r5);
            goto L_800339EC;
    }
    // 0x800339E4: addu        $t7, $a2, $a1
    ctx->r15 = ADD32(ctx->r6, ctx->r5);
    // 0x800339E8: sw          $t7, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r15;
L_800339EC:
    // 0x800339EC: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
L_800339F0:
    // 0x800339F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800339F4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800339F8: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800339FC: bnel        $at, $zero, L_8003394C
    if (ctx->r1 != 0) {
        // 0x80033A00: lw          $t8, 0x10($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X10);
            goto L_8003394C;
    }
    goto skip_3;
    // 0x80033A00: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    skip_3:
L_80033A04:
    // 0x80033A04: jr          $ra
    // 0x80033A08: nop

    return;
    // 0x80033A08: nop

    // 0x80033A0C: jr          $ra
    // 0x80033A10: nop

    return;
    // 0x80033A10: nop

;}
RECOMP_FUNC void static_0_80033CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033CA0: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x80033CA4: lbu         $t6, 0x98($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X98);
    // 0x80033CA8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80033CAC: addu        $a2, $a0, $t7
    ctx->r6 = ADD32(ctx->r4, ctx->r15);
    // 0x80033CB0: beql        $t6, $zero, L_80033CE8
    if (ctx->r14 == 0) {
        // 0x80033CB4: lw          $a3, 0x18($a2)
        ctx->r7 = MEM_W(ctx->r6, 0X18);
            goto L_80033CE8;
    }
    goto skip_0;
    // 0x80033CB4: lw          $a3, 0x18($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X18);
    skip_0:
    // 0x80033CB8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80033CBC: addu        $a2, $a0, $t7
    ctx->r6 = ADD32(ctx->r4, ctx->r15);
    // 0x80033CC0: lw          $a3, 0x58($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X58);
    // 0x80033CC4: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x80033CC8: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x80033CCC: sw          $t8, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r24;
    // 0x80033CD0: lbu         $t9, 0x98($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X98);
    // 0x80033CD4: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80033CD8: sb          $t6, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r14;
    // 0x80033CDC: jr          $ra
    // 0x80033CE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80033CE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80033CE4: lw          $a3, 0x18($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X18);
L_80033CE8:
    // 0x80033CE8: addiu       $t0, $zero, 0xFE
    ctx->r8 = ADD32(0, 0XFE);
    // 0x80033CEC: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x80033CF0: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x80033CF4: sw          $t8, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r24;
    // 0x80033CF8: bne         $t0, $v1, L_80033D5C
    if (ctx->r8 != ctx->r3) {
        // 0x80033CFC: nop
    
            goto L_80033D5C;
    }
    // 0x80033CFC: nop

    // 0x80033D00: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    // 0x80033D04: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80033D08: sw          $t9, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r25;
    // 0x80033D0C: beq         $t0, $a0, L_80033D5C
    if (ctx->r8 == ctx->r4) {
        // 0x80033D10: addiu       $t6, $t9, 0x1
        ctx->r14 = ADD32(ctx->r25, 0X1);
            goto L_80033D5C;
    }
    // 0x80033D10: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80033D14: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
    // 0x80033D18: sw          $t6, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r14;
    // 0x80033D1C: lbu         $a1, 0x0($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X0);
    // 0x80033D20: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80033D24: sll         $t9, $a0, 8
    ctx->r25 = S32(ctx->r4 << 8);
    // 0x80033D28: sw          $t7, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r15;
    // 0x80033D2C: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x80033D30: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80033D34: addiu       $t9, $t7, -0x4
    ctx->r25 = ADD32(ctx->r15, -0X4);
    // 0x80033D38: sw          $t9, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r25;
    // 0x80033D3C: sb          $a1, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r5;
    // 0x80033D40: lw          $a3, 0x58($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X58);
    // 0x80033D44: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x80033D48: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x80033D4C: sw          $t8, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r24;
    // 0x80033D50: lbu         $t6, 0x98($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X98);
    // 0x80033D54: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80033D58: sb          $t7, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r15;
L_80033D5C:
    // 0x80033D5C: jr          $ra
    // 0x80033D60: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80033D60: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void static_0_80033D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80033D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80033D6C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80033D70: jal         0x80033CA0
    // 0x80033D74: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_0;
    // 0x80033D74: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_0:
    // 0x80033D78: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x80033D7C: beq         $t6, $zero, L_80033DA8
    if (ctx->r14 == 0) {
        // 0x80033D80: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_80033DA8;
    }
    // 0x80033D80: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80033D84: andi        $t1, $v0, 0x7F
    ctx->r9 = ctx->r2 & 0X7F;
L_80033D88:
    // 0x80033D88: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80033D8C: jal         0x80033CA0
    // 0x80033D90: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_1;
    // 0x80033D90: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_1:
    // 0x80033D94: sll         $t7, $t1, 7
    ctx->r15 = S32(ctx->r9 << 7);
    // 0x80033D98: andi        $t8, $v0, 0x7F
    ctx->r24 = ctx->r2 & 0X7F;
    // 0x80033D9C: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x80033DA0: bne         $t9, $zero, L_80033D88
    if (ctx->r25 != 0) {
        // 0x80033DA4: addu        $t1, $t7, $t8
        ctx->r9 = ADD32(ctx->r15, ctx->r24);
            goto L_80033D88;
    }
    // 0x80033DA4: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
L_80033DA8:
    // 0x80033DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80033DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80033DB0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80033DB4: jr          $ra
    // 0x80033DB8: nop

    return;
    // 0x80033DB8: nop

    // 0x80033DBC: jr          $ra
    // 0x80033DC0: nop

    return;
    // 0x80033DC0: nop

;}
RECOMP_FUNC void static_0_80034B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034B38: jal         0x80031F70
    // 0x80034B3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80034B3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80034B40: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x80034B44: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80034B48: beq         $s0, $zero, L_80034B94
    if (ctx->r16 == 0) {
        // 0x80034B4C: nop
    
            goto L_80034B94;
    }
    // 0x80034B4C: nop

L_80034B50:
    // 0x80034B50: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x80034B54: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80034B58: bne         $s3, $t6, L_80034B8C
    if (ctx->r19 != ctx->r14) {
        // 0x80034B5C: nop
    
            goto L_80034B8C;
    }
    // 0x80034B5C: nop

    // 0x80034B60: beq         $s1, $zero, L_80034B78
    if (ctx->r17 == 0) {
        // 0x80034B64: nop
    
            goto L_80034B78;
    }
    // 0x80034B64: nop

    // 0x80034B68: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x80034B6C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x80034B70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80034B74: sw          $t9, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r25;
L_80034B78:
    // 0x80034B78: jal         0x800357B0
    // 0x80034B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x80034B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80034B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034B84: jal         0x800357E0
    // 0x80034B88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x80034B88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
L_80034B8C:
    // 0x80034B8C: bne         $s1, $zero, L_80034B50
    if (ctx->r17 != 0) {
        // 0x80034B90: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80034B50;
    }
    // 0x80034B90: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80034B94:
    // 0x80034B94: jal         0x80031F70
    // 0x80034B98: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x80034B98: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_3:
    // 0x80034B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034BA4: jr          $ra
    // 0x80034BA8: nop

    return;
    // 0x80034BA8: nop

    // 0x80034BAC: jr          $ra
    // 0x80034BB0: nop

    return;
    // 0x80034BB0: nop

    // 0x80034BB4: jr          $ra
    // 0x80034BB8: nop

    return;
    // 0x80034BB8: nop

;}
RECOMP_FUNC void static_0_80040180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80040184: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80040188: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8004018C: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80040190: sll         $t8, $s5, 16
    ctx->r24 = S32(ctx->r21 << 16);
    // 0x80040194: sra         $s5, $t8, 16
    ctx->r21 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80040198: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004019C: blez        $s1, L_80040208
    if (SIGNED(ctx->r17) <= 0) {
        // 0x800401A0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80040208;
    }
    // 0x800401A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800401A4: lw          $t9, 0x30($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X30);
    // 0x800401A8: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x800401AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800401B0: jalr        $t9
    // 0x800401B4: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800401B4: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    after_0:
    // 0x800401B8: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x800401BC: addu        $s1, $s1, $a2
    ctx->r17 = ADD32(ctx->r17, ctx->r6);
    // 0x800401C0: andi        $t6, $s3, 0xFFFF
    ctx->r14 = ctx->r19 & 0XFFFF;
    // 0x800401C4: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800401C8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800401CC: andi        $t8, $s1, 0x7
    ctx->r24 = ctx->r17 & 0X7;
    // 0x800401D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800401D4: subu        $t9, $s1, $t8
    ctx->r25 = SUB32(ctx->r17, ctx->r24);
    // 0x800401D8: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x800401DC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800401E0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800401E4: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x800401E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800401EC: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800401F0: subu        $t9, $v0, $a2
    ctx->r25 = SUB32(ctx->r2, ctx->r6);
    // 0x800401F4: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x800401F8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x800401FC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80040200: b           L_8004020C
    // 0x80040204: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_8004020C;
    // 0x80040204: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80040208:
    // 0x80040208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8004020C:
    // 0x8004020C: andi        $t6, $s4, 0x2
    ctx->r14 = ctx->r20 & 0X2;
    // 0x80040210: beq         $t6, $zero, L_80040238
    if (ctx->r14 == 0) {
        // 0x80040214: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80040238;
    }
    // 0x80040214: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80040218: lui         $t7, 0xF00
    ctx->r15 = S32(0XF00 << 16);
    // 0x8004021C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80040220: lw          $t8, 0x18($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X18);
    // 0x80040224: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80040228: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004022C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80040230: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80040234: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80040238:
    // 0x80040238: addu        $t6, $s3, $a2
    ctx->r14 = ADD32(ctx->r19, ctx->r6);
    // 0x8004023C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80040240: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80040244: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80040248: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8004024C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80040250: sll         $t7, $s6, 1
    ctx->r15 = S32(ctx->r22 << 1);
    // 0x80040254: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80040258: sll         $t6, $s5, 16
    ctx->r14 = S32(ctx->r21 << 16);
    // 0x8004025C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80040260: andi        $t7, $s4, 0xFF
    ctx->r15 = ctx->r20 & 0XFF;
    // 0x80040264: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80040268: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x8004026C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80040270: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80040274: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80040278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004027C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80040280: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x80040284: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80040288: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004028C: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x80040290: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80040294: sw          $zero, 0x40($s2)
    MEM_W(0X40, ctx->r18) = 0;
    // 0x80040298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004029C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800402A0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800402A4: jr          $ra
    // 0x800402A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800402A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void static_0_80040E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040E14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80040E18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80040E1C: lw          $t6, 0x48($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X48);
    // 0x80040E20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80040E24: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80040E28: bne         $t6, $at, L_80040E38
    if (ctx->r14 != ctx->r1) {
        // 0x80040E2C: nop
    
            goto L_80040E38;
    }
    // 0x80040E2C: nop

    // 0x80040E30: bnel        $s5, $zero, L_80040E44
    if (ctx->r21 != 0) {
        // 0x80040E34: sw          $t0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r8;
            goto L_80040E44;
    }
    goto skip_0;
    // 0x80040E34: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    skip_0:
L_80040E38:
    // 0x80040E38: b           L_8004109C
    // 0x80040E3C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8004109C;
    // 0x80040E3C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80040E40: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
L_80040E44:
    // 0x80040E44: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80040E48: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80040E4C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80040E50: jalr        $t9
    // 0x80040E54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80040E54: nop

    after_0:
    // 0x80040E58: lh          $t7, 0x0($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X0);
    // 0x80040E5C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80040E60: sll         $s7, $s5, 1
    ctx->r23 = S32(ctx->r21 << 1);
    // 0x80040E64: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80040E68: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x80040E6C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80040E70: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x80040E74: lui         $at, 0x808
    ctx->r1 = S32(0X808 << 16);
    // 0x80040E78: addiu       $s4, $v0, 0x10
    ctx->r20 = ADD32(ctx->r2, 0X10);
    // 0x80040E7C: addiu       $t8, $t9, 0x440
    ctx->r24 = ADD32(ctx->r25, 0X440);
    // 0x80040E80: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x80040E84: andi        $t9, $s7, 0xFFFF
    ctx->r25 = ctx->r23 & 0XFFFF;
    // 0x80040E88: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80040E8C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80040E90: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x80040E94: addiu       $t6, $t8, 0x580
    ctx->r14 = ADD32(ctx->r24, 0X580);
    // 0x80040E98: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x80040E9C: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80040EA0: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x80040EA4: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80040EA8: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80040EAC: addiu       $t8, $v1, 0x800
    ctx->r24 = ADD32(ctx->r3, 0X800);
    // 0x80040EB0: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x80040EB4: addiu       $t7, $v1, 0x6C0
    ctx->r15 = ADD32(ctx->r3, 0X6C0);
    // 0x80040EB8: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80040EBC: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80040EC0: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x80040EC4: lw          $t7, 0x38($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X38);
    // 0x80040EC8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80040ECC: beql        $t7, $zero, L_8004106C
    if (ctx->r15 == 0) {
        // 0x80040ED0: lui         $t7, 0x308
        ctx->r15 = S32(0X308 << 16);
            goto L_8004106C;
    }
    goto skip_1;
    // 0x80040ED0: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
    skip_1:
    // 0x80040ED4: lh          $t6, 0x18($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X18);
    // 0x80040ED8: sw          $zero, 0x38($s3)
    MEM_W(0X38, ctx->r19) = 0;
    // 0x80040EDC: lh          $t7, 0x1A($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X1A);
    // 0x80040EE0: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80040EE4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80040EE8: lh          $t9, -0x4850($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X4850);
    // 0x80040EEC: lw          $a0, 0x34($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X34);
    // 0x80040EF0: addiu       $s1, $s3, 0x24
    ctx->r17 = ADD32(ctx->r19, 0X24);
    // 0x80040EF4: multu       $t9, $t7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040EF8: lh          $t9, 0x1C($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X1C);
    // 0x80040EFC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80040F00: nop

    // 0x80040F04: cvt.d.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.d = CVT_D_W(ctx->f4.u32l);
    // 0x80040F08: mflo        $t6
    ctx->r14 = lo;
    // 0x80040F0C: sra         $t8, $t6, 15
    ctx->r24 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80040F10: sh          $t8, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r24;
    // 0x80040F14: lh          $t7, 0x28($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X28);
    // 0x80040F18: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80040F1C: jal         0x80040C44
    // 0x80040F20: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    static_0_80040C44(rdram, ctx);
        goto after_1;
    // 0x80040F20: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    after_1:
    // 0x80040F24: lh          $t6, 0x18($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X18);
    // 0x80040F28: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80040F2C: sh          $v0, 0x26($s3)
    MEM_H(0X26, ctx->r19) = ctx->r2;
    // 0x80040F30: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80040F34: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x80040F38: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80040F3C: lh          $t7, -0x4752($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X4752);
    // 0x80040F40: lh          $t6, 0x1A($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X1A);
    // 0x80040F44: lw          $a0, 0x34($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X34);
    // 0x80040F48: addiu       $s1, $s3, 0x2A
    ctx->r17 = ADD32(ctx->r19, 0X2A);
    // 0x80040F4C: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040F50: lh          $t7, 0x1E($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X1E);
    // 0x80040F54: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80040F58: nop

    // 0x80040F5C: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x80040F60: mflo        $t8
    ctx->r24 = lo;
    // 0x80040F64: sra         $t9, $t8, 15
    ctx->r25 = S32(SIGNED(ctx->r24) >> 15);
    // 0x80040F68: sh          $t9, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r25;
    // 0x80040F6C: lh          $t6, 0x2E($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X2E);
    // 0x80040F70: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80040F74: jal         0x80040C44
    // 0x80040F78: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    static_0_80040C44(rdram, ctx);
        goto after_2;
    // 0x80040F78: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    after_2:
    // 0x80040F7C: lh          $t8, 0x1C($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X1C);
    // 0x80040F80: sh          $v0, 0x2C($s3)
    MEM_H(0X2C, ctx->r19) = ctx->r2;
    // 0x80040F84: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x80040F88: lui         $at, 0x906
    ctx->r1 = S32(0X906 << 16);
    // 0x80040F8C: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80040F90: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80040F94: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80040F98: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80040F9C: lh          $t6, 0x1E($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X1E);
    // 0x80040FA0: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80040FA4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80040FA8: lui         $at, 0x904
    ctx->r1 = S32(0X904 << 16);
    // 0x80040FAC: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x80040FB0: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80040FB4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80040FB8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80040FBC: lh          $t7, 0x28($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X28);
    // 0x80040FC0: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80040FC4: lui         $at, 0x902
    ctx->r1 = S32(0X902 << 16);
    // 0x80040FC8: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x80040FCC: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80040FD0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80040FD4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80040FD8: lh          $t7, 0x26($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X26);
    // 0x80040FDC: lhu         $t9, 0x24($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X24);
    // 0x80040FE0: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80040FE4: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x80040FE8: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80040FEC: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80040FF0: lh          $t8, 0x2E($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2E);
    // 0x80040FF4: lui         $at, 0x900
    ctx->r1 = S32(0X900 << 16);
    // 0x80040FF8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80040FFC: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x80041000: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x80041004: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80041008: lh          $t8, 0x2C($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2C);
    // 0x8004100C: lhu         $t7, 0x2A($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X2A);
    // 0x80041010: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80041014: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x80041018: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8004101C: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x80041020: lh          $t9, 0x20($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X20);
    // 0x80041024: lui         $at, 0x908
    ctx->r1 = S32(0X908 << 16);
    // 0x80041028: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x8004102C: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x80041030: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80041034: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80041038: lh          $t8, 0x22($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X22);
    // 0x8004103C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80041040: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80041044: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80041048: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8004104C: lui         $t6, 0x309
    ctx->r14 = S32(0X309 << 16);
    // 0x80041050: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80041054: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x80041058: jal         0x800358D0
    // 0x8004105C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x8004105C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_3:
    // 0x80041060: b           L_80041080
    // 0x80041064: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
        goto L_80041080;
    // 0x80041064: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80041068: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
L_8004106C:
    // 0x8004106C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80041070: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x80041074: jal         0x800358D0
    // 0x80041078: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x80041078: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_4:
    // 0x8004107C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_80041080:
    // 0x80041080: lh          $t8, 0x0($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X0);
    // 0x80041084: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80041088: addu        $t9, $t8, $s7
    ctx->r25 = ADD32(ctx->r24, ctx->r23);
    // 0x8004108C: sh          $t9, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r25;
    // 0x80041090: lw          $t6, 0x30($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X30);
    // 0x80041094: addu        $t7, $t6, $s5
    ctx->r15 = ADD32(ctx->r14, ctx->r21);
    // 0x80041098: sw          $t7, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r15;
L_8004109C:
    // 0x8004109C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800410A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800410A4: jr          $ra
    // 0x800410A8: nop

    return;
    // 0x800410A8: nop

;}
RECOMP_FUNC void static_0_800410AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800410AC: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
    // 0x800410B0: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800410B4: sw          $a2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r6;
    // 0x800410B8: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x800410BC: sra         $t9, $a0, 3
    ctx->r25 = S32(SIGNED(ctx->r4) >> 3);
    // 0x800410C0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x800410C4: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800410C8: bne         $t9, $zero, L_800410D8
    if (ctx->r25 != 0) {
        // 0x800410CC: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_800410D8;
    }
    // 0x800410CC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800410D0: jr          $ra
    // 0x800410D4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x800410D4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_800410D8:
    // 0x800410D8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800410DC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800410E0: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x800410E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800410E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800410EC: bgez        $a2, L_80041104
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800410F0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80041104;
    }
    // 0x800410F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800410F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800410F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800410FC: nop

    // 0x80041100: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_80041104:
    // 0x80041104: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80041108: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8004110C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80041110: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80041114: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80041118: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8004111C: div.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80041120: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
L_80041124:
    // 0x80041124: beq         $t7, $zero, L_80041134
    if (ctx->r15 == 0) {
        // 0x80041128: sra         $t8, $a0, 1
        ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
            goto L_80041134;
    }
    // 0x80041128: sra         $t8, $a0, 1
    ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
    // 0x8004112C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80041130: nop

L_80041134:
    // 0x80041134: beq         $t8, $zero, L_8004114C
    if (ctx->r24 == 0) {
        // 0x80041138: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_8004114C;
    }
    // 0x80041138: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8004113C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80041140: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80041144: bnel        $v0, $v1, L_80041124
    if (ctx->r2 != ctx->r3) {
        // 0x80041148: andi        $t7, $a0, 0x1
        ctx->r15 = ctx->r4 & 0X1;
            goto L_80041124;
    }
    goto skip_0;
    // 0x80041148: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    skip_0:
L_8004114C:
    // 0x8004114C: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80041150: nop

    // 0x80041154: jr          $ra
    // 0x80041158: nop

    return;
    // 0x80041158: nop

;}
RECOMP_FUNC void static_0_80041880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80041884: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80041888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004188C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80041890: slti        $at, $t6, 0x26
    ctx->r1 = SIGNED(ctx->r14) < 0X26 ? 1 : 0;
    // 0x80041894: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80041898: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8004189C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x800418A0: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x800418A4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x800418A8: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x800418AC: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x800418B0: bne         $at, $zero, L_800418DC
    if (ctx->r1 != 0) {
        // 0x800418B4: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_800418DC;
    }
    // 0x800418B4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x800418B8: addiu       $t7, $t6, -0x45
    ctx->r15 = ADD32(ctx->r14, -0X45);
    // 0x800418BC: sltiu       $at, $t7, 0x34
    ctx->r1 = ctx->r15 < 0X34 ? 1 : 0;
    // 0x800418C0: beq         $at, $zero, L_80041EC8
    if (ctx->r1 == 0) {
        // 0x800418C4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80041EC8;
    }
    // 0x800418C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800418C8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800418CC: addu        $at, $at, $t7
    gpr jr_addend_800418D4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800418D0: lw          $t7, -0x384C($at)
    ctx->r15 = ADD32(ctx->r1, -0X384C);
    // 0x800418D4: jr          $t7
    // 0x800418D8: nop

    switch (jr_addend_800418D4 >> 2) {
        case 0: goto L_80041BE8; break;
        case 1: goto L_80041EC8; break;
        case 2: goto L_80041BE8; break;
        case 3: goto L_80041EC8; break;
        case 4: goto L_80041EC8; break;
        case 5: goto L_80041EC8; break;
        case 6: goto L_80041EC8; break;
        case 7: goto L_80041EC8; break;
        case 8: goto L_80041EC8; break;
        case 9: goto L_80041EC8; break;
        case 10: goto L_80041EC8; break;
        case 11: goto L_80041EC8; break;
        case 12: goto L_80041EC8; break;
        case 13: goto L_80041EC8; break;
        case 14: goto L_80041EC8; break;
        case 15: goto L_80041EC8; break;
        case 16: goto L_80041EC8; break;
        case 17: goto L_80041EC8; break;
        case 18: goto L_80041EC8; break;
        case 19: goto L_80041A98; break;
        case 20: goto L_80041EC8; break;
        case 21: goto L_80041EC8; break;
        case 22: goto L_80041EC8; break;
        case 23: goto L_80041EC8; break;
        case 24: goto L_80041EC8; break;
        case 25: goto L_80041EC8; break;
        case 26: goto L_80041EC8; break;
        case 27: goto L_80041EC8; break;
        case 28: goto L_80041EC8; break;
        case 29: goto L_80041EC8; break;
        case 30: goto L_800418F0; break;
        case 31: goto L_80041928; break;
        case 32: goto L_80041BE8; break;
        case 33: goto L_80041BE8; break;
        case 34: goto L_80041BE8; break;
        case 35: goto L_80041EC8; break;
        case 36: goto L_80041928; break;
        case 37: goto L_80041EC8; break;
        case 38: goto L_80041EC8; break;
        case 39: goto L_80041EC8; break;
        case 40: goto L_80041EC8; break;
        case 41: goto L_80041D4C; break;
        case 42: goto L_80041A98; break;
        case 43: goto L_80041E1C; break;
        case 44: goto L_80041EC8; break;
        case 45: goto L_80041EC8; break;
        case 46: goto L_80041E64; break;
        case 47: goto L_80041EC8; break;
        case 48: goto L_80041A98; break;
        case 49: goto L_80041EC8; break;
        case 50: goto L_80041EC8; break;
        case 51: goto L_80041A98; break;
        default: switch_error(__func__, 0x800418D4, 0x8004C7B4);
    }
    // 0x800418D8: nop

L_800418DC:
    // 0x800418DC: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x800418E0: beql        $v1, $at, L_80041EAC
    if (ctx->r3 == ctx->r1) {
        // 0x800418E4: lw          $t8, 0xC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XC);
            goto L_80041EAC;
    }
    goto skip_0;
    // 0x800418E4: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    skip_0:
    // 0x800418E8: b           L_80041ECC
    // 0x800418EC: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
        goto L_80041ECC;
    // 0x800418EC: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
L_800418F0:
    // 0x800418F0: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x800418F4: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800418F8: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x800418FC: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x80041900: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x80041904: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80041908: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x8004190C: lw          $t9, -0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, -0X4);
    // 0x80041910: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x80041914: sb          $t9, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r25;
    // 0x80041918: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x8004191C: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80041920: b           L_80041EE0
    // 0x80041924: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
        goto L_80041EE0;
    // 0x80041924: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
L_80041928:
    // 0x80041928: lbu         $v0, 0x34($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34);
    // 0x8004192C: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x80041930: bnel        $v0, $at, L_80041968
    if (ctx->r2 != ctx->r1) {
        // 0x80041934: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_80041968;
    }
    goto skip_1;
    // 0x80041934: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_1:
    // 0x80041938: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x8004193C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80041940: addiu       $t7, $t9, 0x3
    ctx->r15 = ADD32(ctx->r25, 0X3);
    // 0x80041944: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80041948: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x8004194C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80041950: lw          $t7, -0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, -0X4);
    // 0x80041954: sra         $t8, $t7, 31
    ctx->r24 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80041958: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x8004195C: b           L_800419C4
    // 0x80041960: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
        goto L_800419C4;
    // 0x80041960: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x80041964: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_80041968:
    // 0x80041968: bnel        $v0, $at, L_800419A0
    if (ctx->r2 != ctx->r1) {
        // 0x8004196C: lw          $t7, 0x0($a2)
        ctx->r15 = MEM_W(ctx->r6, 0X0);
            goto L_800419A0;
    }
    goto skip_2;
    // 0x8004196C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    skip_2:
    // 0x80041970: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80041974: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80041978: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x8004197C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80041980: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80041984: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80041988: lw          $t8, -0x8($t9)
    ctx->r24 = MEM_W(ctx->r25, -0X8);
    // 0x8004198C: lw          $t9, -0x4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4);
    // 0x80041990: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80041994: b           L_800419C4
    // 0x80041998: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
        goto L_800419C4;
    // 0x80041998: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x8004199C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
L_800419A0:
    // 0x800419A0: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800419A4: addiu       $t6, $t7, 0x3
    ctx->r14 = ADD32(ctx->r15, 0X3);
    // 0x800419A8: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x800419AC: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x800419B0: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x800419B4: lw          $t6, -0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, -0X4);
    // 0x800419B8: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x800419BC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x800419C0: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
L_800419C4:
    // 0x800419C4: lbu         $t7, 0x34($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X34);
    // 0x800419C8: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x800419CC: bnel        $t7, $at, L_800419F0
    if (ctx->r15 != ctx->r1) {
        // 0x800419D0: lw          $t6, 0x0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X0);
            goto L_800419F0;
    }
    goto skip_3;
    // 0x800419D0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x800419D4: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x800419D8: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x800419DC: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800419E0: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x800419E4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x800419E8: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x800419EC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_800419F0:
    // 0x800419F0: bgtzl       $t6, L_80041A2C
    if (SIGNED(ctx->r14) > 0) {
        // 0x800419F4: lw          $v0, 0x30($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X30);
            goto L_80041A2C;
    }
    goto skip_4;
    // 0x800419F4: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    skip_4:
    // 0x800419F8: bltzl       $t6, L_80041A0C
    if (SIGNED(ctx->r14) < 0) {
        // 0x800419FC: lw          $t9, 0xC($s0)
        ctx->r25 = MEM_W(ctx->r16, 0XC);
            goto L_80041A0C;
    }
    goto skip_5;
    // 0x800419FC: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    skip_5:
    // 0x80041A00: b           L_80041A2C
    // 0x80041A04: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
        goto L_80041A2C;
    // 0x80041A04: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x80041A08: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_80041A0C:
    // 0x80041A0C: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x80041A10: addu        $t6, $a3, $t9
    ctx->r14 = ADD32(ctx->r7, ctx->r25);
    // 0x80041A14: sb          $t8, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r24;
    // 0x80041A18: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80041A1C: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80041A20: b           L_80041A7C
    // 0x80041A24: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
        goto L_80041A7C;
    // 0x80041A24: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x80041A28: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
L_80041A2C:
    // 0x80041A2C: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x80041A30: beq         $t8, $zero, L_80041A58
    if (ctx->r24 == 0) {
        // 0x80041A34: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_80041A58;
    }
    // 0x80041A34: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80041A38: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80041A3C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x80041A40: addu        $t9, $a3, $t7
    ctx->r25 = ADD32(ctx->r7, ctx->r15);
    // 0x80041A44: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x80041A48: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80041A4C: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80041A50: b           L_80041A7C
    // 0x80041A54: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
        goto L_80041A7C;
    // 0x80041A54: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
L_80041A58:
    // 0x80041A58: beql        $t6, $zero, L_80041A80
    if (ctx->r14 == 0) {
        // 0x80041A5C: lw          $t9, 0xC($s0)
        ctx->r25 = MEM_W(ctx->r16, 0XC);
            goto L_80041A80;
    }
    goto skip_6;
    // 0x80041A5C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    skip_6:
    // 0x80041A60: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80041A64: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x80041A68: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    // 0x80041A6C: sb          $t9, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r25;
    // 0x80041A70: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x80041A74: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80041A78: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
L_80041A7C:
    // 0x80041A7C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_80041A80:
    // 0x80041A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80041A84: addu        $t7, $t9, $a3
    ctx->r15 = ADD32(ctx->r25, ctx->r7);
    // 0x80041A88: jal         0x80047070
    // 0x80041A8C: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    _Litob(rdram, ctx);
        goto after_0;
    // 0x80041A8C: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    after_0:
    // 0x80041A90: b           L_80041EE4
    // 0x80041A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80041EE4;
    // 0x80041A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80041A98:
    // 0x80041A98: lbu         $v0, 0x34($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34);
    // 0x80041A9C: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x80041AA0: bnel        $v0, $at, L_80041AD8
    if (ctx->r2 != ctx->r1) {
        // 0x80041AA4: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_80041AD8;
    }
    goto skip_7;
    // 0x80041AA4: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_7:
    // 0x80041AA8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80041AAC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80041AB0: addiu       $t8, $t6, 0x3
    ctx->r24 = ADD32(ctx->r14, 0X3);
    // 0x80041AB4: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80041AB8: addiu       $t7, $t9, 0x4
    ctx->r15 = ADD32(ctx->r25, 0X4);
    // 0x80041ABC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80041AC0: lw          $t8, -0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X4);
    // 0x80041AC4: sra         $t6, $t8, 31
    ctx->r14 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80041AC8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80041ACC: b           L_80041B34
    // 0x80041AD0: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
        goto L_80041B34;
    // 0x80041AD0: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x80041AD4: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_80041AD8:
    // 0x80041AD8: bnel        $v0, $at, L_80041B10
    if (ctx->r2 != ctx->r1) {
        // 0x80041ADC: lw          $t6, 0x0($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X0);
            goto L_80041B10;
    }
    goto skip_8;
    // 0x80041ADC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    skip_8:
    // 0x80041AE0: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80041AE4: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80041AE8: addiu       $t8, $t9, 0x7
    ctx->r24 = ADD32(ctx->r25, 0X7);
    // 0x80041AEC: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80041AF0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80041AF4: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80041AF8: lw          $t9, -0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, -0X4);
    // 0x80041AFC: lw          $t8, -0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X8);
    // 0x80041B00: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x80041B04: b           L_80041B34
    // 0x80041B08: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_80041B34;
    // 0x80041B08: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80041B0C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
L_80041B10:
    // 0x80041B10: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80041B14: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x80041B18: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80041B1C: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x80041B20: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80041B24: lw          $t7, -0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, -0X4);
    // 0x80041B28: sra         $t8, $t7, 31
    ctx->r24 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80041B2C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80041B30: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
L_80041B34:
    // 0x80041B34: lbu         $v0, 0x34($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34);
    // 0x80041B38: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x80041B3C: bne         $v0, $at, L_80041B5C
    if (ctx->r2 != ctx->r1) {
        // 0x80041B40: nop
    
            goto L_80041B5C;
    }
    // 0x80041B40: nop

    // 0x80041B44: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x80041B48: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80041B4C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80041B50: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80041B54: b           L_80041B74
    // 0x80041B58: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
        goto L_80041B74;
    // 0x80041B58: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
L_80041B5C:
    // 0x80041B5C: bnel        $v0, $zero, L_80041B78
    if (ctx->r2 != 0) {
        // 0x80041B60: lw          $t7, 0x30($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X30);
            goto L_80041B78;
    }
    goto skip_9;
    // 0x80041B60: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    skip_9:
    // 0x80041B64: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80041B68: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x80041B6C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80041B70: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
L_80041B74:
    // 0x80041B74: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
L_80041B78:
    // 0x80041B78: andi        $t6, $t7, 0x8
    ctx->r14 = ctx->r15 & 0X8;
    // 0x80041B7C: beql        $t6, $zero, L_80041BD0
    if (ctx->r14 == 0) {
        // 0x80041B80: lw          $t8, 0xC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XC);
            goto L_80041BD0;
    }
    goto skip_10;
    // 0x80041B80: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    skip_10:
    // 0x80041B84: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80041B88: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x80041B8C: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80041B90: addu        $t7, $a3, $t9
    ctx->r15 = ADD32(ctx->r7, ctx->r25);
    // 0x80041B94: sb          $t8, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r24;
    // 0x80041B98: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x80041B9C: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80041BA0: beq         $v1, $at, L_80041BB4
    if (ctx->r3 == ctx->r1) {
        // 0x80041BA4: sw          $t9, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r25;
            goto L_80041BB4;
    }
    // 0x80041BA4: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x80041BA8: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x80041BAC: bnel        $v1, $at, L_80041BD0
    if (ctx->r3 != ctx->r1) {
        // 0x80041BB0: lw          $t8, 0xC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XC);
            goto L_80041BD0;
    }
    goto skip_11;
    // 0x80041BB0: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    skip_11:
L_80041BB4:
    // 0x80041BB4: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80041BB8: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    // 0x80041BBC: sb          $a1, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r5;
    // 0x80041BC0: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x80041BC4: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80041BC8: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x80041BCC: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
L_80041BD0:
    // 0x80041BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80041BD4: addu        $t7, $t8, $a3
    ctx->r15 = ADD32(ctx->r24, ctx->r7);
    // 0x80041BD8: jal         0x80047070
    // 0x80041BDC: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    _Litob(rdram, ctx);
        goto after_1;
    // 0x80041BDC: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    after_1:
    // 0x80041BE0: b           L_80041EE4
    // 0x80041BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80041EE4;
    // 0x80041BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80041BE8:
    // 0x80041BE8: lbu         $t6, 0x34($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X34);
    // 0x80041BEC: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x80041BF0: bnel        $t6, $at, L_80041C58
    if (ctx->r14 != ctx->r1) {
        // 0x80041BF4: lw          $v0, 0x0($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X0);
            goto L_80041C58;
    }
    goto skip_12;
    // 0x80041BF4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    skip_12:
    // 0x80041BF8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80041BFC: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x80041C00: beq         $t9, $zero, L_80041C18
    if (ctx->r25 == 0) {
        // 0x80041C04: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80041C18;
    }
    // 0x80041C04: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80041C08: addiu       $t8, $v1, 0x7
    ctx->r24 = ADD32(ctx->r3, 0X7);
    // 0x80041C0C: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80041C10: b           L_80041C48
    // 0x80041C14: addiu       $v0, $t8, -0x16
    ctx->r2 = ADD32(ctx->r24, -0X16);
        goto L_80041C48;
    // 0x80041C14: addiu       $v0, $t8, -0x16
    ctx->r2 = ADD32(ctx->r24, -0X16);
L_80041C18:
    // 0x80041C18: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x80041C1C: beq         $t7, $zero, L_80041C34
    if (ctx->r15 == 0) {
        // 0x80041C20: addiu       $t9, $v0, 0x7
        ctx->r25 = ADD32(ctx->r2, 0X7);
            goto L_80041C34;
    }
    // 0x80041C20: addiu       $t9, $v0, 0x7
    ctx->r25 = ADD32(ctx->r2, 0X7);
    // 0x80041C24: addiu       $t6, $v1, 0xA
    ctx->r14 = ADD32(ctx->r3, 0XA);
    // 0x80041C28: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80041C2C: b           L_80041C44
    // 0x80041C30: addiu       $a0, $t6, -0x28
    ctx->r4 = ADD32(ctx->r14, -0X28);
        goto L_80041C44;
    // 0x80041C30: addiu       $a0, $t6, -0x28
    ctx->r4 = ADD32(ctx->r14, -0X28);
L_80041C34:
    // 0x80041C34: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80041C38: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x80041C3C: addiu       $a0, $t8, 0x8
    ctx->r4 = ADD32(ctx->r24, 0X8);
    // 0x80041C40: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
L_80041C44:
    // 0x80041C44: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80041C48:
    // 0x80041C48: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x80041C4C: b           L_80041CAC
    // 0x80041C50: sdc1        $f4, 0x0($s0)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X0, ctx->r16);
        goto L_80041CAC;
    // 0x80041C50: sdc1        $f4, 0x0($s0)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X0, ctx->r16);
    // 0x80041C54: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
L_80041C58:
    // 0x80041C58: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80041C5C: beq         $t6, $zero, L_80041C74
    if (ctx->r14 == 0) {
        // 0x80041C60: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80041C74;
    }
    // 0x80041C60: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80041C64: addiu       $t9, $v1, 0x7
    ctx->r25 = ADD32(ctx->r3, 0X7);
    // 0x80041C68: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80041C6C: b           L_80041CA4
    // 0x80041C70: addiu       $v0, $t9, -0x16
    ctx->r2 = ADD32(ctx->r25, -0X16);
        goto L_80041CA4;
    // 0x80041C70: addiu       $v0, $t9, -0x16
    ctx->r2 = ADD32(ctx->r25, -0X16);
L_80041C74:
    // 0x80041C74: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x80041C78: beq         $t8, $zero, L_80041C90
    if (ctx->r24 == 0) {
        // 0x80041C7C: addiu       $t6, $v0, 0x7
        ctx->r14 = ADD32(ctx->r2, 0X7);
            goto L_80041C90;
    }
    // 0x80041C7C: addiu       $t6, $v0, 0x7
    ctx->r14 = ADD32(ctx->r2, 0X7);
    // 0x80041C80: addiu       $t7, $v1, 0xA
    ctx->r15 = ADD32(ctx->r3, 0XA);
    // 0x80041C84: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80041C88: b           L_80041CA0
    // 0x80041C8C: addiu       $a0, $t7, -0x28
    ctx->r4 = ADD32(ctx->r15, -0X28);
        goto L_80041CA0;
    // 0x80041C8C: addiu       $a0, $t7, -0x28
    ctx->r4 = ADD32(ctx->r15, -0X28);
L_80041C90:
    // 0x80041C90: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80041C94: and         $t9, $t6, $at
    ctx->r25 = ctx->r14 & ctx->r1;
    // 0x80041C98: addiu       $a0, $t9, 0x8
    ctx->r4 = ADD32(ctx->r25, 0X8);
    // 0x80041C9C: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
L_80041CA0:
    // 0x80041CA0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80041CA4:
    // 0x80041CA4: ldc1        $f6, -0x8($v0)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r2, -0X8);
    // 0x80041CA8: sdc1        $f6, 0x0($s0)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X0, ctx->r16);
L_80041CAC:
    // 0x80041CAC: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x80041CB0: andi        $t6, $t7, 0x8000
    ctx->r14 = ctx->r15 & 0X8000;
    // 0x80041CB4: beql        $t6, $zero, L_80041CE0
    if (ctx->r14 == 0) {
        // 0x80041CB8: lw          $v0, 0x30($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X30);
            goto L_80041CE0;
    }
    goto skip_13;
    // 0x80041CB8: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    skip_13:
    // 0x80041CBC: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80041CC0: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x80041CC4: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    // 0x80041CC8: sb          $t9, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r25;
    // 0x80041CCC: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x80041CD0: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80041CD4: b           L_80041D30
    // 0x80041CD8: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
        goto L_80041D30;
    // 0x80041CD8: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
    // 0x80041CDC: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
L_80041CE0:
    // 0x80041CE0: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x80041CE4: beq         $t9, $zero, L_80041D0C
    if (ctx->r25 == 0) {
        // 0x80041CE8: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_80041D0C;
    }
    // 0x80041CE8: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80041CEC: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x80041CF0: addiu       $t7, $zero, 0x2B
    ctx->r15 = ADD32(0, 0X2B);
    // 0x80041CF4: addu        $t8, $a3, $t6
    ctx->r24 = ADD32(ctx->r7, ctx->r14);
    // 0x80041CF8: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x80041CFC: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80041D00: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80041D04: b           L_80041D30
    // 0x80041D08: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
        goto L_80041D30;
    // 0x80041D08: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
L_80041D0C:
    // 0x80041D0C: beql        $t7, $zero, L_80041D34
    if (ctx->r15 == 0) {
        // 0x80041D10: lw          $t8, 0xC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XC);
            goto L_80041D34;
    }
    goto skip_14;
    // 0x80041D10: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    skip_14:
    // 0x80041D14: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80041D18: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80041D1C: addu        $t6, $a3, $t9
    ctx->r14 = ADD32(ctx->r7, ctx->r25);
    // 0x80041D20: sb          $t8, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r24;
    // 0x80041D24: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80041D28: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80041D2C: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
L_80041D30:
    // 0x80041D30: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
L_80041D34:
    // 0x80041D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80041D38: addu        $t6, $t8, $a3
    ctx->r14 = ADD32(ctx->r24, ctx->r7);
    // 0x80041D3C: jal         0x80047880
    // 0x80041D40: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    _Ldtob(rdram, ctx);
        goto after_2;
    // 0x80041D40: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    after_2:
    // 0x80041D44: b           L_80041EE4
    // 0x80041D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80041EE4;
    // 0x80041D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80041D4C:
    // 0x80041D4C: lbu         $v0, 0x34($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34);
    // 0x80041D50: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x80041D54: bnel        $v0, $at, L_80041D88
    if (ctx->r2 != ctx->r1) {
        // 0x80041D58: addiu       $at, $zero, 0x6C
        ctx->r1 = ADD32(0, 0X6C);
            goto L_80041D88;
    }
    goto skip_15;
    // 0x80041D58: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    skip_15:
    // 0x80041D5C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80041D60: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80041D64: addiu       $t9, $t7, 0x3
    ctx->r25 = ADD32(ctx->r15, 0X3);
    // 0x80041D68: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x80041D6C: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x80041D70: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80041D74: lw          $t9, -0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, -0X4);
    // 0x80041D78: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x80041D7C: b           L_80041EE0
    // 0x80041D80: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
        goto L_80041EE0;
    // 0x80041D80: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x80041D84: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
L_80041D88:
    // 0x80041D88: bnel        $v0, $at, L_80041DBC
    if (ctx->r2 != ctx->r1) {
        // 0x80041D8C: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_80041DBC;
    }
    goto skip_16;
    // 0x80041D8C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_16:
    // 0x80041D90: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80041D94: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80041D98: addiu       $t6, $t8, 0x3
    ctx->r14 = ADD32(ctx->r24, 0X3);
    // 0x80041D9C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80041DA0: addiu       $t9, $t7, 0x4
    ctx->r25 = ADD32(ctx->r15, 0X4);
    // 0x80041DA4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80041DA8: lw          $t6, -0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, -0X4);
    // 0x80041DAC: lw          $t8, 0x2C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2C);
    // 0x80041DB0: b           L_80041EE0
    // 0x80041DB4: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
        goto L_80041EE0;
    // 0x80041DB4: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x80041DB8: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_80041DBC:
    // 0x80041DBC: bnel        $v0, $at, L_80041DF8
    if (ctx->r2 != ctx->r1) {
        // 0x80041DC0: lw          $t7, 0x0($a2)
        ctx->r15 = MEM_W(ctx->r6, 0X0);
            goto L_80041DF8;
    }
    goto skip_17;
    // 0x80041DC0: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    skip_17:
    // 0x80041DC4: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80041DC8: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80041DCC: addiu       $t9, $t7, 0x3
    ctx->r25 = ADD32(ctx->r15, 0X3);
    // 0x80041DD0: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x80041DD4: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x80041DD8: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80041DDC: lw          $t6, -0x4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4);
    // 0x80041DE0: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x80041DE4: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x80041DE8: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x80041DEC: b           L_80041EE0
    // 0x80041DF0: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
        goto L_80041EE0;
    // 0x80041DF0: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
    // 0x80041DF4: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
L_80041DF8:
    // 0x80041DF8: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80041DFC: addiu       $t8, $t7, 0x3
    ctx->r24 = ADD32(ctx->r15, 0X3);
    // 0x80041E00: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80041E04: addiu       $t6, $t9, 0x4
    ctx->r14 = ADD32(ctx->r25, 0X4);
    // 0x80041E08: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80041E0C: lw          $t8, -0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, -0X4);
    // 0x80041E10: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x80041E14: b           L_80041EE0
    // 0x80041E18: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
        goto L_80041EE0;
    // 0x80041E18: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_80041E1C:
    // 0x80041E1C: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80041E20: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80041E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80041E28: addiu       $t6, $t9, 0x3
    ctx->r14 = ADD32(ctx->r25, 0X3);
    // 0x80041E2C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80041E30: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x80041E34: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80041E38: lw          $t6, -0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, -0X4);
    // 0x80041E3C: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80041E40: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80041E44: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80041E48: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x80041E4C: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x80041E50: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80041E54: jal         0x80047070
    // 0x80041E58: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    _Litob(rdram, ctx);
        goto after_3;
    // 0x80041E58: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    after_3:
    // 0x80041E5C: b           L_80041EE4
    // 0x80041E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80041EE4;
    // 0x80041E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80041E64:
    // 0x80041E64: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80041E68: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80041E6C: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x80041E70: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x80041E74: addiu       $t6, $t7, 0x4
    ctx->r14 = ADD32(ctx->r15, 0X4);
    // 0x80041E78: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80041E7C: lw          $a0, -0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, -0X4);
    // 0x80041E80: jal         0x8003A86C
    // 0x80041E84: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    strlen_recomp(rdram, ctx);
        goto after_4;
    // 0x80041E84: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    after_4:
    // 0x80041E88: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80041E8C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80041E90: bltz        $v1, L_80041EE0
    if (SIGNED(ctx->r3) < 0) {
        // 0x80041E94: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80041EE0;
    }
    // 0x80041E94: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80041E98: beql        $at, $zero, L_80041EE4
    if (ctx->r1 == 0) {
        // 0x80041E9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80041EE4;
    }
    goto skip_18;
    // 0x80041E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_18:
    // 0x80041EA0: b           L_80041EE0
    // 0x80041EA4: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
        goto L_80041EE0;
    // 0x80041EA4: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x80041EA8: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
L_80041EAC:
    // 0x80041EAC: addiu       $t6, $zero, 0x25
    ctx->r14 = ADD32(0, 0X25);
    // 0x80041EB0: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80041EB4: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x80041EB8: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80041EBC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80041EC0: b           L_80041EE0
    // 0x80041EC4: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
        goto L_80041EE0;
    // 0x80041EC4: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
L_80041EC8:
    // 0x80041EC8: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
L_80041ECC:
    // 0x80041ECC: addu        $t9, $a3, $t6
    ctx->r25 = ADD32(ctx->r7, ctx->r14);
    // 0x80041ED0: sb          $a1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r5;
    // 0x80041ED4: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80041ED8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80041EDC: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
L_80041EE0:
    // 0x80041EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80041EE4:
    // 0x80041EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80041EE8: jr          $ra
    // 0x80041EEC: nop

    return;
    // 0x80041EEC: nop

;}
RECOMP_FUNC void static_0_80045D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045D98: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80045D9C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80045DA0: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80045DA4: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80045DA8: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x80045DAC: beq         $t7, $zero, L_80045DDC
    if (ctx->r15 == 0) {
        // 0x80045DB0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80045DDC;
    }
    // 0x80045DB0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80045DB4: andi        $a1, $v0, 0x7F
    ctx->r5 = ctx->r2 & 0X7F;
L_80045DB8:
    // 0x80045DB8: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80045DBC: sll         $t9, $a1, 7
    ctx->r25 = S32(ctx->r5 << 7);
    // 0x80045DC0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80045DC4: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80045DC8: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x80045DCC: andi        $t6, $v0, 0x7F
    ctx->r14 = ctx->r2 & 0X7F;
    // 0x80045DD0: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x80045DD4: bne         $t7, $zero, L_80045DB8
    if (ctx->r15 != 0) {
        // 0x80045DD8: addu        $a1, $t9, $t6
        ctx->r5 = ADD32(ctx->r25, ctx->r14);
            goto L_80045DB8;
    }
    // 0x80045DD8: addu        $a1, $t9, $t6
    ctx->r5 = ADD32(ctx->r25, ctx->r14);
L_80045DDC:
    // 0x80045DDC: jr          $ra
    // 0x80045DE0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80045DE0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void static_0_80046218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046218: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x8004621C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80046220: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x80046224: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x80046228: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8004622C: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x80046230: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80046234: or          $v1, $t6, $t9
    ctx->r3 = ctx->r14 | ctx->r25;
    // 0x80046238: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x8004623C: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80046240: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80046244: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80046248: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x8004624C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x80046250: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x80046254: or          $v1, $v1, $t8
    ctx->r3 = ctx->r3 | ctx->r24;
    // 0x80046258: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x8004625C: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x80046260: jr          $ra
    // 0x80046264: or          $v0, $v1, $t6
    ctx->r2 = ctx->r3 | ctx->r14;
    return;
    // 0x80046264: or          $v0, $v1, $t6
    ctx->r2 = ctx->r3 | ctx->r14;
;}
RECOMP_FUNC void static_0_80046268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046268: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x8004626C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80046270: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x80046274: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x80046278: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x8004627C: sll         $t8, $v1, 8
    ctx->r24 = S32(ctx->r3 << 8);
    // 0x80046280: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x80046284: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x80046288: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x8004628C: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80046290: jr          $ra
    // 0x80046294: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    return;
    // 0x80046294: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void static_0_80047310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047314: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80047318: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x8004731C: sra         $s2, $t6, 16
    ctx->r18 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80047320: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80047324: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x80047328: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004732C: andi        $t6, $s4, 0xFF
    ctx->r14 = ctx->r20 & 0XFF;
    // 0x80047330: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x80047334: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80047338: bgtz        $s3, L_8004734C
    if (SIGNED(ctx->r19) > 0) {
        // 0x8004733C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8004734C;
    }
    // 0x8004733C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047340: lui         $s1, 0x8005
    ctx->r17 = S32(0X8005 << 16);
    // 0x80047344: addiu       $s1, $s1, -0x36E0
    ctx->r17 = ADD32(ctx->r17, -0X36E0);
    // 0x80047348: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_8004734C:
    // 0x8004734C: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x80047350: beq         $v0, $s4, L_80047384
    if (ctx->r2 == ctx->r20) {
        // 0x80047354: or          $v1, $s4, $zero
        ctx->r3 = ctx->r20 | 0;
            goto L_80047384;
    }
    // 0x80047354: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x80047358: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    // 0x8004735C: beq         $a0, $v1, L_80047368
    if (ctx->r4 == ctx->r3) {
        // 0x80047360: addiu       $at, $zero, 0x47
        ctx->r1 = ADD32(0, 0X47);
            goto L_80047368;
    }
    // 0x80047360: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x80047364: bne         $v1, $at, L_800475C0
    if (ctx->r3 != ctx->r1) {
        // 0x80047368: slti        $at, $s2, -0x4
        ctx->r1 = SIGNED(ctx->r18) < -0X4 ? 1 : 0;
            goto L_800475C0;
    }
L_80047368:
    // 0x80047368: slti        $at, $s2, -0x4
    ctx->r1 = SIGNED(ctx->r18) < -0X4 ? 1 : 0;
    // 0x8004736C: bne         $at, $zero, L_800475C0
    if (ctx->r1 != 0) {
        // 0x80047370: nop
    
            goto L_800475C0;
    }
    // 0x80047370: nop

    // 0x80047374: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80047378: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8004737C: beq         $at, $zero, L_800475C0
    if (ctx->r1 == 0) {
        // 0x80047380: nop
    
            goto L_800475C0;
    }
    // 0x80047380: nop

L_80047384:
    // 0x80047384: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80047388: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x8004738C: beq         $v0, $v1, L_800473C8
    if (ctx->r2 == ctx->r3) {
        // 0x80047390: sra         $s2, $t8, 16
        ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
            goto L_800473C8;
    }
    // 0x80047390: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80047394: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x80047398: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004739C: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x800473A0: bne         $t7, $zero, L_800473B8
    if (ctx->r15 != 0) {
        // 0x800473A4: slt         $at, $s3, $v0
        ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_800473B8;
    }
    // 0x800473A4: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800473A8: beql        $at, $zero, L_800473BC
    if (ctx->r1 == 0) {
        // 0x800473AC: subu        $t8, $v0, $s2
        ctx->r24 = SUB32(ctx->r2, ctx->r18);
            goto L_800473BC;
    }
    goto skip_0;
    // 0x800473AC: subu        $t8, $v0, $s2
    ctx->r24 = SUB32(ctx->r2, ctx->r18);
    skip_0:
    // 0x800473B0: sw          $s3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r19;
    // 0x800473B4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_800473B8:
    // 0x800473B8: subu        $t8, $v0, $s2
    ctx->r24 = SUB32(ctx->r2, ctx->r18);
L_800473BC:
    // 0x800473BC: bgez        $t8, L_800473C8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800473C0: sw          $t8, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r24;
            goto L_800473C8;
    }
    // 0x800473C0: sw          $t8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r24;
    // 0x800473C4: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_800473C8:
    // 0x800473C8: bgtz        $s2, L_80047498
    if (SIGNED(ctx->r18) > 0) {
        // 0x800473CC: slt         $at, $s3, $s2
        ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_80047498;
    }
    // 0x800473CC: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800473D0: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x800473D4: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x800473D8: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x800473DC: negu        $v1, $s2
    ctx->r3 = SUB32(0, ctx->r18);
    // 0x800473E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800473E4: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x800473E8: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x800473EC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x800473F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800473F4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800473F8: bgtz        $v0, L_80047410
    if (SIGNED(ctx->r2) > 0) {
        // 0x800473FC: sw          $t8, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r24;
            goto L_80047410;
    }
    // 0x800473FC: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x80047400: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x80047404: andi        $t9, $t6, 0x8
    ctx->r25 = ctx->r14 & 0X8;
    // 0x80047408: beql        $t9, $zero, L_80047438
    if (ctx->r25 == 0) {
        // 0x8004740C: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80047438;
    }
    goto skip_1;
    // 0x8004740C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_1:
L_80047410:
    // 0x80047410: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x80047414: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x80047418: addiu       $t7, $zero, 0x2E
    ctx->r15 = ADD32(0, 0X2E);
    // 0x8004741C: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x80047420: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
    // 0x80047424: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80047428: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004742C: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80047430: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x80047434: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_80047438:
    // 0x80047438: beql        $at, $zero, L_80047454
    if (ctx->r1 == 0) {
        // 0x8004743C: addu        $t8, $v0, $s2
        ctx->r24 = ADD32(ctx->r2, ctx->r18);
            goto L_80047454;
    }
    goto skip_2;
    // 0x8004743C: addu        $t8, $v0, $s2
    ctx->r24 = ADD32(ctx->r2, ctx->r18);
    skip_2:
    // 0x80047440: negu        $s2, $v0
    ctx->r18 = SUB32(0, ctx->r2);
    // 0x80047444: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80047448: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8004744C: negu        $v1, $s2
    ctx->r3 = SUB32(0, ctx->r18);
    // 0x80047450: addu        $t8, $v0, $s2
    ctx->r24 = ADD32(ctx->r2, ctx->r18);
L_80047454:
    // 0x80047454: slt         $at, $t8, $s3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80047458: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8004745C: beq         $at, $zero, L_80047470
    if (ctx->r1 == 0) {
        // 0x80047460: sw          $t8, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r24;
            goto L_80047470;
    }
    // 0x80047460: sw          $t8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r24;
    // 0x80047464: sll         $s3, $t8, 16
    ctx->r19 = S32(ctx->r24 << 16);
    // 0x80047468: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8004746C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
L_80047470:
    // 0x80047470: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80047474: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x80047478: sw          $s3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r19;
    // 0x8004747C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80047480: jal         0x8003A840
    // 0x80047484: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80047484: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    after_0:
    // 0x80047488: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x8004748C: subu        $t6, $t8, $s3
    ctx->r14 = SUB32(ctx->r24, ctx->r19);
    // 0x80047490: b           L_8004781C
    // 0x80047494: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
        goto L_8004781C;
    // 0x80047494: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
L_80047498:
    // 0x80047498: beq         $at, $zero, L_80047510
    if (ctx->r1 == 0) {
        // 0x8004749C: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_80047510;
    }
    // 0x8004749C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800474A0: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x800474A4: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x800474A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800474AC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x800474B0: jal         0x8003A840
    // 0x800474B4: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800474B4: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    after_1:
    // 0x800474B8: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x800474BC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x800474C0: subu        $t7, $s2, $s3
    ctx->r15 = SUB32(ctx->r18, ctx->r19);
    // 0x800474C4: addu        $t6, $t8, $s3
    ctx->r14 = ADD32(ctx->r24, ctx->r19);
    // 0x800474C8: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x800474CC: bgtz        $v0, L_800474E4
    if (SIGNED(ctx->r2) > 0) {
        // 0x800474D0: sw          $t7, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->r15;
            goto L_800474E4;
    }
    // 0x800474D0: sw          $t7, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r15;
    // 0x800474D4: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x800474D8: andi        $t8, $t9, 0x8
    ctx->r24 = ctx->r25 & 0X8;
    // 0x800474DC: beq         $t8, $zero, L_80047508
    if (ctx->r24 == 0) {
        // 0x800474E0: nop
    
            goto L_80047508;
    }
    // 0x800474E0: nop

L_800474E4:
    // 0x800474E4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x800474E8: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x800474EC: addiu       $t6, $zero, 0x2E
    ctx->r14 = ADD32(0, 0X2E);
    // 0x800474F0: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x800474F4: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    // 0x800474F8: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x800474FC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80047500: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80047504: sw          $t9, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r25;
L_80047508:
    // 0x80047508: b           L_8004781C
    // 0x8004750C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8004781C;
    // 0x8004750C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80047510:
    // 0x80047510: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80047514: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80047518: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8004751C: jal         0x8003A840
    // 0x80047520: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80047520: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    after_2:
    // 0x80047524: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x80047528: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004752C: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x80047530: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80047534: addu        $t9, $t7, $s2
    ctx->r25 = ADD32(ctx->r15, ctx->r18);
    // 0x80047538: sw          $t9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r25;
    // 0x8004753C: bgtz        $v0, L_80047554
    if (SIGNED(ctx->r2) > 0) {
        // 0x80047540: sra         $s3, $t6, 16
        ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
            goto L_80047554;
    }
    // 0x80047540: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80047544: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x80047548: andi        $t9, $t7, 0x8
    ctx->r25 = ctx->r15 & 0X8;
    // 0x8004754C: beql        $t9, $zero, L_8004757C
    if (ctx->r25 == 0) {
        // 0x80047550: slt         $at, $v0, $s3
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
            goto L_8004757C;
    }
    goto skip_3;
    // 0x80047550: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    skip_3:
L_80047554:
    // 0x80047554: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x80047558: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8004755C: addiu       $t6, $zero, 0x2E
    ctx->r14 = ADD32(0, 0X2E);
    // 0x80047560: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80047564: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x80047568: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8004756C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80047570: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80047574: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x80047578: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
L_8004757C:
    // 0x8004757C: beq         $at, $zero, L_80047590
    if (ctx->r1 == 0) {
        // 0x80047580: addu        $a1, $s2, $s1
        ctx->r5 = ADD32(ctx->r18, ctx->r17);
            goto L_80047590;
    }
    // 0x80047580: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    // 0x80047584: sll         $s3, $v0, 16
    ctx->r19 = S32(ctx->r2 << 16);
    // 0x80047588: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8004758C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
L_80047590:
    // 0x80047590: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80047594: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80047598: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8004759C: jal         0x8003A840
    // 0x800475A0: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x800475A0: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    after_3:
    // 0x800475A4: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x800475A8: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x800475AC: addu        $t6, $t7, $s3
    ctx->r14 = ADD32(ctx->r15, ctx->r19);
    // 0x800475B0: subu        $t8, $t9, $s3
    ctx->r24 = SUB32(ctx->r25, ctx->r19);
    // 0x800475B4: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x800475B8: b           L_8004781C
    // 0x800475BC: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
        goto L_8004781C;
    // 0x800475BC: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
L_800475C0:
    // 0x800475C0: beq         $a0, $v1, L_800475D0
    if (ctx->r4 == ctx->r3) {
        // 0x800475C4: addiu       $at, $zero, 0x47
        ctx->r1 = ADD32(0, 0X47);
            goto L_800475D0;
    }
    // 0x800475C4: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x800475C8: bnel        $v1, $at, L_80047610
    if (ctx->r3 != ctx->r1) {
        // 0x800475CC: lw          $t8, 0x8($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X8);
            goto L_80047610;
    }
    goto skip_4;
    // 0x800475CC: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    skip_4:
L_800475D0:
    // 0x800475D0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x800475D4: addiu       $s4, $zero, 0x45
    ctx->r20 = ADD32(0, 0X45);
    // 0x800475D8: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800475DC: beql        $at, $zero, L_800475F0
    if (ctx->r1 == 0) {
        // 0x800475E0: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_800475F0;
    }
    goto skip_5;
    // 0x800475E0: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    skip_5:
    // 0x800475E4: sw          $s3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r19;
    // 0x800475E8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x800475EC: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
L_800475F0:
    // 0x800475F0: bgez        $t7, L_800475FC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800475F4: sw          $t7, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r15;
            goto L_800475FC;
    }
    // 0x800475F4: sw          $t7, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r15;
    // 0x800475F8: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_800475FC:
    // 0x800475FC: bne         $a0, $v1, L_8004760C
    if (ctx->r4 != ctx->r3) {
        // 0x80047600: nop
    
            goto L_8004760C;
    }
    // 0x80047600: nop

    // 0x80047604: b           L_8004760C
    // 0x80047608: addiu       $s4, $zero, 0x65
    ctx->r20 = ADD32(0, 0X65);
        goto L_8004760C;
    // 0x80047608: addiu       $s4, $zero, 0x65
    ctx->r20 = ADD32(0, 0X65);
L_8004760C:
    // 0x8004760C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
L_80047610:
    // 0x80047610: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x80047614: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x80047618: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004761C: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x80047620: sb          $t9, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r25;
    // 0x80047624: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80047628: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004762C: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80047630: bgtz        $v0, L_80047648
    if (SIGNED(ctx->r2) > 0) {
        // 0x80047634: sw          $t7, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r15;
            goto L_80047648;
    }
    // 0x80047634: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x80047638: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x8004763C: andi        $t6, $t9, 0x8
    ctx->r14 = ctx->r25 & 0X8;
    // 0x80047640: beq         $t6, $zero, L_8004766C
    if (ctx->r14 == 0) {
        // 0x80047644: nop
    
            goto L_8004766C;
    }
    // 0x80047644: nop

L_80047648:
    // 0x80047648: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8004764C: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x80047650: addiu       $t8, $zero, 0x2E
    ctx->r24 = ADD32(0, 0X2E);
    // 0x80047654: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80047658: sb          $t8, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r24;
    // 0x8004765C: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x80047660: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80047664: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80047668: sw          $t9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r25;
L_8004766C:
    // 0x8004766C: blezl       $v0, L_800476C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80047670: lw          $t6, 0x8($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X8);
            goto L_800476C8;
    }
    goto skip_6;
    // 0x80047670: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    skip_6:
    // 0x80047674: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80047678: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x8004767C: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80047680: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80047684: beq         $at, $zero, L_80047698
    if (ctx->r1 == 0) {
        // 0x80047688: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_80047698;
    }
    // 0x80047688: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004768C: sll         $s3, $v0, 16
    ctx->r19 = S32(ctx->r2 << 16);
    // 0x80047690: sra         $t7, $s3, 16
    ctx->r15 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80047694: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
L_80047698:
    // 0x80047698: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x8004769C: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x800476A0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x800476A4: jal         0x8003A840
    // 0x800476A8: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x800476A8: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    after_4:
    // 0x800476AC: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x800476B0: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x800476B4: addu        $t7, $t6, $s3
    ctx->r15 = ADD32(ctx->r14, ctx->r19);
    // 0x800476B8: subu        $t8, $t9, $s3
    ctx->r24 = SUB32(ctx->r25, ctx->r19);
    // 0x800476BC: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x800476C0: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
    // 0x800476C4: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
L_800476C8:
    // 0x800476C8: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x800476CC: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x800476D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800476D4: bltz        $s2, L_800476EC
    if (SIGNED(ctx->r18) < 0) {
        // 0x800476D8: sb          $s4, -0x1($s1)
        MEM_B(-0X1, ctx->r17) = ctx->r20;
            goto L_800476EC;
    }
    // 0x800476D8: sb          $s4, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r20;
    // 0x800476DC: addiu       $t9, $zero, 0x2B
    ctx->r25 = ADD32(0, 0X2B);
    // 0x800476E0: sb          $t9, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r25;
    // 0x800476E4: b           L_80047708
    // 0x800476E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_80047708;
    // 0x800476E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800476EC:
    // 0x800476EC: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    // 0x800476F0: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x800476F4: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x800476F8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800476FC: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
    // 0x80047700: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80047704: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
L_80047708:
    // 0x80047708: slti        $at, $s2, 0x64
    ctx->r1 = SIGNED(ctx->r18) < 0X64 ? 1 : 0;
    // 0x8004770C: bnel        $at, $zero, L_800477B8
    if (ctx->r1 != 0) {
        // 0x80047710: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_800477B8;
    }
    goto skip_7;
    // 0x80047710: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_7:
    // 0x80047714: slti        $at, $s2, 0x3E8
    ctx->r1 = SIGNED(ctx->r18) < 0X3E8 ? 1 : 0;
    // 0x80047718: bne         $at, $zero, L_80047768
    if (ctx->r1 != 0) {
        // 0x8004771C: addiu       $v0, $zero, 0x3E8
        ctx->r2 = ADD32(0, 0X3E8);
            goto L_80047768;
    }
    // 0x8004771C: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x80047720: div         $zero, $s2, $v0
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r2)));
    // 0x80047724: bne         $v0, $zero, L_80047730
    if (ctx->r2 != 0) {
        // 0x80047728: nop
    
            goto L_80047730;
    }
    // 0x80047728: nop

    // 0x8004772C: break       7
    do_break(2147776300);
L_80047730:
    // 0x80047730: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80047734: bne         $v0, $at, L_80047748
    if (ctx->r2 != ctx->r1) {
        // 0x80047738: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80047748;
    }
    // 0x80047738: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004773C: bne         $s2, $at, L_80047748
    if (ctx->r18 != ctx->r1) {
        // 0x80047740: nop
    
            goto L_80047748;
    }
    // 0x80047740: nop

    // 0x80047744: break       6
    do_break(2147776324);
L_80047748:
    // 0x80047748: mfhi        $s2
    ctx->r18 = hi;
    // 0x8004774C: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x80047750: mflo        $t9
    ctx->r25 = lo;
    // 0x80047754: addiu       $t8, $t9, 0x30
    ctx->r24 = ADD32(ctx->r25, 0X30);
    // 0x80047758: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004775C: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x80047760: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
    // 0x80047764: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80047768:
    // 0x80047768: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8004776C: div         $zero, $s2, $v0
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r2)));
    // 0x80047770: bne         $v0, $zero, L_8004777C
    if (ctx->r2 != 0) {
        // 0x80047774: nop
    
            goto L_8004777C;
    }
    // 0x80047774: nop

    // 0x80047778: break       7
    do_break(2147776376);
L_8004777C:
    // 0x8004777C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80047780: bne         $v0, $at, L_80047794
    if (ctx->r2 != ctx->r1) {
        // 0x80047784: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80047794;
    }
    // 0x80047784: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80047788: bne         $s2, $at, L_80047794
    if (ctx->r18 != ctx->r1) {
        // 0x8004778C: nop
    
            goto L_80047794;
    }
    // 0x8004778C: nop

    // 0x80047790: break       6
    do_break(2147776400);
L_80047794:
    // 0x80047794: mfhi        $s2
    ctx->r18 = hi;
    // 0x80047798: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x8004779C: mflo        $t9
    ctx->r25 = lo;
    // 0x800477A0: addiu       $t8, $t9, 0x30
    ctx->r24 = ADD32(ctx->r25, 0X30);
    // 0x800477A4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800477A8: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x800477AC: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
    // 0x800477B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800477B4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_800477B8:
    // 0x800477B8: div         $zero, $s2, $v0
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r2)));
    // 0x800477BC: bne         $v0, $zero, L_800477C8
    if (ctx->r2 != 0) {
        // 0x800477C0: nop
    
            goto L_800477C8;
    }
    // 0x800477C0: nop

    // 0x800477C4: break       7
    do_break(2147776452);
L_800477C8:
    // 0x800477C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800477CC: bne         $v0, $at, L_800477E0
    if (ctx->r2 != ctx->r1) {
        // 0x800477D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800477E0;
    }
    // 0x800477D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800477D4: bne         $s2, $at, L_800477E0
    if (ctx->r18 != ctx->r1) {
        // 0x800477D8: nop
    
            goto L_800477E0;
    }
    // 0x800477D8: nop

    // 0x800477DC: break       6
    do_break(2147776476);
L_800477E0:
    // 0x800477E0: mfhi        $s2
    ctx->r18 = hi;
    // 0x800477E4: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x800477E8: mflo        $t9
    ctx->r25 = lo;
    // 0x800477EC: addiu       $t8, $t9, 0x30
    ctx->r24 = ADD32(ctx->r25, 0X30);
    // 0x800477F0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800477F4: addiu       $t9, $t7, 0x30
    ctx->r25 = ADD32(ctx->r15, 0X30);
    // 0x800477F8: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
    // 0x800477FC: sb          $t9, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r25;
    // 0x80047800: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x80047804: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x80047808: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8004780C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80047810: subu        $t6, $s1, $t8
    ctx->r14 = SUB32(ctx->r17, ctx->r24);
    // 0x80047814: subu        $t9, $t6, $t7
    ctx->r25 = SUB32(ctx->r14, ctx->r15);
    // 0x80047818: sw          $t9, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r25;
L_8004781C:
    // 0x8004781C: lw          $t8, 0x30($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X30);
    // 0x80047820: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80047824: andi        $t6, $t8, 0x14
    ctx->r14 = ctx->r24 & 0X14;
    // 0x80047828: bnel        $t6, $at, L_8004786C
    if (ctx->r14 != ctx->r1) {
        // 0x8004782C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004786C;
    }
    goto skip_8;
    // 0x8004782C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
    // 0x80047830: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80047834: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x80047838: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x8004783C: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80047840: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80047844: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x80047848: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x8004784C: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x80047850: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80047854: addu        $v0, $t8, $t6
    ctx->r2 = ADD32(ctx->r24, ctx->r14);
    // 0x80047858: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004785C: beq         $at, $zero, L_80047868
    if (ctx->r1 == 0) {
        // 0x80047860: subu        $t7, $v1, $v0
        ctx->r15 = SUB32(ctx->r3, ctx->r2);
            goto L_80047868;
    }
    // 0x80047860: subu        $t7, $v1, $v0
    ctx->r15 = SUB32(ctx->r3, ctx->r2);
    // 0x80047864: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
L_80047868:
    // 0x80047868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004786C:
    // 0x8004786C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047870: jr          $ra
    // 0x80047874: nop

    return;
    // 0x80047874: nop

    // 0x80047878: jr          $ra
    // 0x8004787C: nop

    return;
    // 0x8004787C: nop

;}
RECOMP_FUNC void static_0_8002F880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F880: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002F884: lw          $t9, -0x58B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X58B0);
    // 0x8002F888: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002F88C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F890: jalr        $t9
    // 0x8002F894: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8002F894: nop

    after_0:
    // 0x8002F898: andi        $v1, $v0, 0xFFF
    ctx->r3 = ctx->r2 & 0XFFF;
    // 0x8002F89C: beq         $v1, $zero, L_8002F8D0
    if (ctx->r3 == 0) {
        // 0x8002F8A0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8002F8D0;
    }
    // 0x8002F8A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8002F8A4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002F8A8: lw          $t9, -0x58B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X58B0);
    // 0x8002F8AC: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x8002F8B0: subu        $a0, $t6, $v1
    ctx->r4 = SUB32(ctx->r14, ctx->r3);
    // 0x8002F8B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002F8B8: jalr        $t9
    // 0x8002F8BC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8002F8BC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002F8C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002F8C4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F8C8: nop

    // 0x8002F8CC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
L_8002F8D0:
    // 0x8002F8D0: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x8002F8D4: lw          $v0, 0x7F50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F50);
    // 0x8002F8D8: nop

    // 0x8002F8DC: beq         $v0, $zero, L_8002F8F8
    if (ctx->r2 == 0) {
        // 0x8002F8E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002F8F8;
    }
    // 0x8002F8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F8E4: jalr        $v0
    // 0x8002F8E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8002F8E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_2:
    // 0x8002F8EC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F8F0: nop

    // 0x8002F8F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002F8F8:
    // 0x8002F8F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002F8FC: jr          $ra
    // 0x8002F900: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x8002F900: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void static_0_80040C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040C44: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x80040C48: bne         $a0, $zero, L_80040C78
    if (ctx->r4 != 0) {
        // 0x80040C4C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80040C78;
    }
    // 0x80040C4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80040C50: c.le.d      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.d <= ctx->f14.d;
    // 0x80040C54: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80040C58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80040C5C: bc1f        L_80040C70
    if (!c1cs) {
        // 0x80040C60: nop
    
            goto L_80040C70;
    }
    // 0x80040C60: nop

    // 0x80040C64: sh          $t6, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r14;
    // 0x80040C68: b           L_80040E04
    // 0x80040C6C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80040E04;
    // 0x80040C6C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80040C70:
    // 0x80040C70: b           L_80040E04
    // 0x80040C74: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_80040E04;
    // 0x80040C74: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_80040C78:
    // 0x80040C78: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80040C7C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80040C80: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80040C84: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80040C88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80040C8C: c.lt.d      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.d < ctx->f22.d;
    // 0x80040C90: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
    // 0x80040C94: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80040C98: addiu       $t7, $t7, -0x4750
    ctx->r15 = ADD32(ctx->r15, -0X4750);
    // 0x80040C9C: bc1f        L_80040CA8
    if (!c1cs) {
        // 0x80040CA0: or          $t6, $s2, $zero
        ctx->r14 = ctx->r18 | 0;
            goto L_80040CA8;
    }
    // 0x80040CA0: or          $t6, $s2, $zero
    ctx->r14 = ctx->r18 | 0;
    // 0x80040CA4: mov.d       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.d = ctx->f22.d;
L_80040CA8:
    // 0x80040CA8: c.le.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d <= ctx->f4.d;
    // 0x80040CAC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80040CB0: addiu       $t9, $t7, 0x3C
    ctx->r25 = ADD32(ctx->r15, 0X3C);
    // 0x80040CB4: bc1f        L_80040CC8
    if (!c1cs) {
        // 0x80040CB8: nop
    
            goto L_80040CC8;
    }
    // 0x80040CB8: nop

    // 0x80040CBC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80040CC0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80040CC4: nop

L_80040CC8:
    // 0x80040CC8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80040CCC: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80040CD0: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80040CD4: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x80040CD8: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80040CDC: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80040CE0: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80040CE4: bne         $t7, $t9, L_80040CC8
    if (ctx->r15 != ctx->r25) {
        // 0x80040CE8: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80040CC8;
    }
    // 0x80040CE8: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80040CEC: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x80040CF0: lui         $t8, 0x4000
    ctx->r24 = S32(0X4000 << 16);
    // 0x80040CF4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80040CF8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80040CFC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80040D00: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80040D04: cvt.d.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.d = CVT_D_W(ctx->f6.u32l);
    // 0x80040D08: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80040D0C: div.d       $f4, $f22, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f22.d, ctx->f10.d);
    // 0x80040D10: div.d       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f16.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f16.d);
    // 0x80040D14: mul.d       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x80040D18: trunc.w.d   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x80040D1C: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x80040D20: jal         0x80040A78
    // 0x80040D24: nop

    _frexpf(rdram, ctx);
        goto after_0;
    // 0x80040D24: nop

    after_0:
    // 0x80040D28: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80040D2C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80040D30: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x80040D34: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80040D38: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80040D3C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80040D40: mul.d       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x80040D44: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80040D48: ldc1        $f8, -0x38D0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X38D0);
    // 0x80040D4C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80040D50: trunc.w.d   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x80040D54: mov.d       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.d = ctx->f22.d;
    // 0x80040D58: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80040D5C: nop

    // 0x80040D60: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80040D64: addu        $t7, $s2, $t9
    ctx->r15 = ADD32(ctx->r18, ctx->r25);
    // 0x80040D68: ldc1        $f6, -0x40($t7)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r15, -0X40);
    // 0x80040D6C: add.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d + ctx->f10.d;
    // 0x80040D70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80040D74: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80040D78: mul.d       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f12.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80040D7C: nop

    // 0x80040D80: mul.d       $f14, $f6, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f14.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x80040D84: div.d       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f14.d); 
    ctx->f12.d = DIV_D(ctx->f12.d, ctx->f14.d);
    // 0x80040D88: beq         $s0, $zero, L_80040DB0
    if (ctx->r16 == 0) {
        // 0x80040D8C: add.d       $f0, $f22, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f22.d + ctx->f12.d;
            goto L_80040DB0;
    }
    // 0x80040D8C: add.d       $f0, $f22, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f22.d + ctx->f12.d;
L_80040D90:
    // 0x80040D90: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x80040D94: beq         $t8, $zero, L_80040DA4
    if (ctx->r24 == 0) {
        // 0x80040D98: sra         $t9, $s0, 1
        ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80040DA4;
    }
    // 0x80040D98: sra         $t9, $s0, 1
    ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80040D9C: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x80040DA0: nop

L_80040DA4:
    // 0x80040DA4: mul.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x80040DA8: bne         $t9, $zero, L_80040D90
    if (ctx->r25 != 0) {
        // 0x80040DAC: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_80040D90;
    }
    // 0x80040DAC: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_80040DB0:
    // 0x80040DB0: mul.d       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80040DB4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80040DB8: mul.d       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x80040DBC: nop

    // 0x80040DC0: mul.d       $f2, $f12, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = MUL_D(ctx->f12.d, ctx->f12.d);
    // 0x80040DC4: trunc.w.d   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x80040DC8: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x80040DCC: nop

    // 0x80040DD0: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80040DD4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80040DD8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80040DDC: nop

    // 0x80040DE0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80040DE4: ldc1        $f4, -0x38C8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X38C8);
    // 0x80040DE8: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80040DEC: sub.d       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f2.d - ctx->f6.d;
    // 0x80040DF0: mul.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80040DF4: trunc.w.d   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x80040DF8: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80040DFC: nop

    // 0x80040E00: sh          $t7, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r15;
L_80040E04:
    // 0x80040E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80040E08: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x80040E0C: jr          $ra
    // 0x80040E10: nop

    return;
    // 0x80040E10: nop

;}
