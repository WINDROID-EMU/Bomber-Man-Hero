#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80333A28_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333A28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333A2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333A30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80333A34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333A38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333A3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333A40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333A44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333A48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333A4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333A50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333A54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333A58: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x80333A5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333A60: bne         $t8, $at, L_80333AD8
    if (ctx->r24 != ctx->r1) {
        // 0x80333A64: nop
    
            goto L_80333AD8;
    }
    // 0x80333A64: nop

    // 0x80333A68: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80333A6C: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80333A70: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80333A74: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333A78: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333A7C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333A80: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333A84: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333A88: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80333A8C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80333A90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333A94: beq         $s0, $at, L_80333AB0
    if (ctx->r16 == ctx->r1) {
        // 0x80333A98: nop
    
            goto L_80333AB0;
    }
    // 0x80333A98: nop

    // 0x80333A9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80333AA0: beq         $s0, $at, L_80333AC0
    if (ctx->r16 == ctx->r1) {
        // 0x80333AA4: nop
    
            goto L_80333AC0;
    }
    // 0x80333AA4: nop

    // 0x80333AA8: b           L_80333AD0
    // 0x80333AAC: nop

        goto L_80333AD0;
    // 0x80333AAC: nop

L_80333AB0:
    // 0x80333AB0: jal         0x80333850
    // 0x80333AB4: nop

    func_80333850_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x80333AB4: nop

    after_0:
    // 0x80333AB8: b           L_80333AD8
    // 0x80333ABC: nop

        goto L_80333AD8;
    // 0x80333ABC: nop

L_80333AC0:
    // 0x80333AC0: jal         0x803339F8
    // 0x80333AC4: nop

    func_803339F8_unk_bin_43(rdram, ctx);
        goto after_1;
    // 0x80333AC4: nop

    after_1:
    // 0x80333AC8: b           L_80333AD8
    // 0x80333ACC: nop

        goto L_80333AD8;
    // 0x80333ACC: nop

L_80333AD0:
    // 0x80333AD0: b           L_80333AD8
    // 0x80333AD4: nop

        goto L_80333AD8;
    // 0x80333AD4: nop

L_80333AD8:
    // 0x80333AD8: b           L_80333AE0
    // 0x80333ADC: nop

        goto L_80333AE0;
    // 0x80333ADC: nop

L_80333AE0:
    // 0x80333AE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333AE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80333AE8: jr          $ra
    // 0x80333AEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80333AEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80335D34_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335D34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335D38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335D3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80335D40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335D44: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335D48: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335D4C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335D50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335D58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D5C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335D60: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335D64: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x80335D68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80335D6C: bne         $t8, $at, L_80335E00
    if (ctx->r24 != ctx->r1) {
        // 0x80335D70: nop
    
            goto L_80335E00;
    }
    // 0x80335D70: nop

    // 0x80335D74: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80335D78: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80335D7C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80335D80: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335D84: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335D88: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335D8C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335D90: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335D94: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80335D98: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80335D9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335DA0: beq         $s0, $at, L_80335DC8
    if (ctx->r16 == ctx->r1) {
        // 0x80335DA4: nop
    
            goto L_80335DC8;
    }
    // 0x80335DA4: nop

    // 0x80335DA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335DAC: beq         $s0, $at, L_80335DD8
    if (ctx->r16 == ctx->r1) {
        // 0x80335DB0: nop
    
            goto L_80335DD8;
    }
    // 0x80335DB0: nop

    // 0x80335DB4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80335DB8: beq         $s0, $at, L_80335DE8
    if (ctx->r16 == ctx->r1) {
        // 0x80335DBC: nop
    
            goto L_80335DE8;
    }
    // 0x80335DBC: nop

    // 0x80335DC0: b           L_80335DF8
    // 0x80335DC4: nop

        goto L_80335DF8;
    // 0x80335DC4: nop

L_80335DC8:
    // 0x80335DC8: jal         0x80335784
    // 0x80335DCC: nop

    func_80335784_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x80335DCC: nop

    after_0:
    // 0x80335DD0: b           L_80335E00
    // 0x80335DD4: nop

        goto L_80335E00;
    // 0x80335DD4: nop

L_80335DD8:
    // 0x80335DD8: jal         0x80335A4C
    // 0x80335DDC: nop

    func_80335A4C_unk_bin_43(rdram, ctx);
        goto after_1;
    // 0x80335DDC: nop

    after_1:
    // 0x80335DE0: b           L_80335E00
    // 0x80335DE4: nop

        goto L_80335E00;
    // 0x80335DE4: nop

L_80335DE8:
    // 0x80335DE8: jal         0x80335D04
    // 0x80335DEC: nop

    func_80335D04_unk_bin_43(rdram, ctx);
        goto after_2;
    // 0x80335DEC: nop

    after_2:
    // 0x80335DF0: b           L_80335E00
    // 0x80335DF4: nop

        goto L_80335E00;
    // 0x80335DF4: nop

L_80335DF8:
    // 0x80335DF8: b           L_80335E00
    // 0x80335DFC: nop

        goto L_80335E00;
    // 0x80335DFC: nop

L_80335E00:
    // 0x80335E00: b           L_80335E08
    // 0x80335E04: nop

        goto L_80335E08;
    // 0x80335E04: nop

L_80335E08:
    // 0x80335E08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335E0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80335E10: jr          $ra
    // 0x80335E14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80335E14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335E18: nop

    // 0x80335E1C: nop

;}
RECOMP_FUNC void func_80331724_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331724: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80331728: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033172C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331730: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331734: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331738: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033173C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331740: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331744: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331748: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033174C: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x80331750: nop

    // 0x80331754: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80331758: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033175C: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80331760: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331764: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331768: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033176C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331770: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331774: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331778: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033177C: lh          $t1, 0x423A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X423A);
    // 0x80331780: nop

    // 0x80331784: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x80331788: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033178C: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x80331790: nop

    // 0x80331794: bne         $t2, $zero, L_803317F4
    if (ctx->r10 != 0) {
        // 0x80331798: nop
    
            goto L_803317F4;
    }
    // 0x80331798: nop

    // 0x8033179C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803317A0: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x803317A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803317A8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803317AC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803317B0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803317B4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803317B8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803317BC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803317C0: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x803317C4: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x803317C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803317CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803317D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803317D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803317D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803317DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803317E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803317E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803317E8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803317EC: b           L_80331920
    // 0x803317F0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
        goto L_80331920;
    // 0x803317F0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803317F4:
    // 0x803317F4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803317F8: lw          $t8, 0x7A64($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A64);
    // 0x803317FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331800: bne         $t8, $at, L_80331920
    if (ctx->r24 != ctx->r1) {
        // 0x80331804: nop
    
            goto L_80331920;
    }
    // 0x80331804: nop

    // 0x80331808: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033180C: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80331810: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331814: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331818: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033181C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331820: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331824: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331828: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033182C: lh          $t1, 0x4258($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4258);
    // 0x80331830: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331834: bne         $t1, $at, L_80331920
    if (ctx->r9 != ctx->r1) {
        // 0x80331838: nop
    
            goto L_80331920;
    }
    // 0x80331838: nop

    // 0x8033183C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80331840: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80331844: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331848: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8033184C: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80331850: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331854: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80331858: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033185C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331860: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
    // 0x80331864: sh          $t2, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r10;
    // 0x80331868: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8033186C: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80331870: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331874: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331878: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033187C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331880: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331884: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331888: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033188C: lh          $t7, 0x4238($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4238);
    // 0x80331890: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331894: beq         $t7, $at, L_803318C4
    if (ctx->r15 == ctx->r1) {
        // 0x80331898: nop
    
            goto L_803318C4;
    }
    // 0x80331898: nop

    // 0x8033189C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x803318A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803318A4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803318A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803318AC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803318B0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803318B4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803318B8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803318BC: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x803318C0: sh          $t8, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r24;
L_803318C4:
    // 0x803318C4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x803318C8: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x803318CC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803318D0: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x803318D4: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803318D8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803318DC: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803318E0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803318E4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803318E8: lh          $t2, 0x423A($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X423A);
    // 0x803318EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803318F0: beq         $t2, $at, L_80331920
    if (ctx->r10 == ctx->r1) {
        // 0x803318F4: nop
    
            goto L_80331920;
    }
    // 0x803318F4: nop

    // 0x803318F8: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x803318FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331900: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331904: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331908: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033190C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331910: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331914: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331918: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x8033191C: sh          $t3, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r11;
L_80331920:
    // 0x80331920: b           L_80331928
    // 0x80331924: nop

        goto L_80331928;
    // 0x80331924: nop

L_80331928:
    // 0x80331928: jr          $ra
    // 0x8033192C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033192C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80331484_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331484: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033148C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331490: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331494: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331498: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033149C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803314A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803314A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803314A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803314AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803314B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803314B4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803314B8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803314BC: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x803314C0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803314C4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803314C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803314CC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803314D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803314D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803314D8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803314DC: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x803314E0: nop

    // 0x803314E4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x803314E8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803314EC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x803314F0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803314F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803314F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803314FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331500: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331504: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331508: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033150C: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80331510: nop

    // 0x80331514: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80331518: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033151C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331520: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331524: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331528: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033152C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331530: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331534: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331538: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033153C: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x80331540: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331544: beq         $t8, $at, L_80331568
    if (ctx->r24 == ctx->r1) {
        // 0x80331548: nop
    
            goto L_80331568;
    }
    // 0x80331548: nop

    // 0x8033154C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331550: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331554: jal         0x800281A4
    // 0x80331558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x80331558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033155C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80331560: jal         0x8002B0E4
    // 0x80331564: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x80331564: nop

    after_1:
L_80331568:
    // 0x80331568: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033156C: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80331570: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331574: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331578: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033157C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331580: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331584: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331588: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033158C: lh          $t1, 0x423A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X423A);
    // 0x80331590: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331594: beq         $t1, $at, L_803315B8
    if (ctx->r9 == ctx->r1) {
        // 0x80331598: nop
    
            goto L_803315B8;
    }
    // 0x80331598: nop

    // 0x8033159C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315A4: jal         0x800281A4
    // 0x803315A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x803315A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803315AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803315B0: jal         0x8002B0E4
    // 0x803315B4: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x803315B4: nop

    after_3:
L_803315B8:
    // 0x803315B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315C0: jal         0x8002B0E4
    // 0x803315C4: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x803315C4: nop

    after_4:
    // 0x803315C8: b           L_803315D0
    // 0x803315CC: nop

        goto L_803315D0;
    // 0x803315CC: nop

L_803315D0:
    // 0x803315D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803315D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803315D8: jr          $ra
    // 0x803315DC: nop

    return;
    // 0x803315DC: nop

;}
RECOMP_FUNC void func_803322E4_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803322E4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803322E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803322EC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803322F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803322F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803322F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803322FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332300: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332304: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332308: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033230C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332310: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332314: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332318: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033231C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80332320: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80332324: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80332328: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033232C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332330: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332334: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332338: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033233C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332340: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332344: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80332348: nop

    // 0x8033234C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80332350: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80332354: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80332358: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033235C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332360: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332364: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332368: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033236C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332370: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332374: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80332378: nop

    // 0x8033237C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80332380: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332384: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332388: jal         0x80331930
    // 0x8033238C: nop

    func_80331930_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x8033238C: nop

    after_0:
    // 0x80332390: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332394: nop

    // 0x80332398: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033239C: nop

    // 0x803323A0: bne         $t7, $zero, L_803324C4
    if (ctx->r15 != 0) {
        // 0x803323A4: nop
    
            goto L_803324C4;
    }
    // 0x803323A4: nop

    // 0x803323A8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803323AC: nop

    // 0x803323B0: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x803323B4: nop

    // 0x803323B8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803323BC: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x803323C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803323C4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803323C8: nop

    // 0x803323CC: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x803323D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323D4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803323D8: addiu       $t2, $t2, -0x7F84
    ctx->r10 = ADD32(ctx->r10, -0X7F84);
    // 0x803323DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323E0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803323E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803323E8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803323EC: jal         0x8001C0EC
    // 0x803323F0: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803323F0: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_1:
    // 0x803323F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323FC: jal         0x8001BBDC
    // 0x80332400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80332400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332404: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80332408: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x8033240C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80332410: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332414: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332418: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033241C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332420: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332424: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332428: lh          $t5, 0x4238($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4238);
    // 0x8033242C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332430: beq         $t5, $at, L_80332464
    if (ctx->r13 == ctx->r1) {
        // 0x80332434: nop
    
            goto L_80332464;
    }
    // 0x80332434: nop

    // 0x80332438: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8033243C: addiu       $t6, $t6, -0x7F58
    ctx->r14 = ADD32(ctx->r14, -0X7F58);
    // 0x80332440: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80332444: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80332448: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033244C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80332450: jal         0x8001C0EC
    // 0x80332454: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80332454: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    after_3:
    // 0x80332458: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033245C: jal         0x8001BBDC
    // 0x80332460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80332460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_80332464:
    // 0x80332464: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80332468: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x8033246C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332470: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332474: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332478: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033247C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332480: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332484: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332488: lh          $t0, 0x423A($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X423A);
    // 0x8033248C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332490: beq         $t0, $at, L_803324C4
    if (ctx->r8 == ctx->r1) {
        // 0x80332494: nop
    
            goto L_803324C4;
    }
    // 0x80332494: nop

    // 0x80332498: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8033249C: addiu       $t8, $t8, -0x7F30
    ctx->r24 = ADD32(ctx->r24, -0X7F30);
    // 0x803324A0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x803324A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803324A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803324AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803324B0: jal         0x8001C0EC
    // 0x803324B4: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x803324B4: addiu       $a3, $zero, 0x4E
    ctx->r7 = ADD32(0, 0X4E);
    after_5:
    // 0x803324B8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x803324BC: jal         0x8001BBDC
    // 0x803324C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x803324C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_803324C4:
    // 0x803324C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803324C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803324CC: jal         0x8002A640
    // 0x803324D0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_7;
    // 0x803324D0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_7:
    // 0x803324D4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803324D8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x803324DC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803324E0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803324E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803324E8: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x803324EC: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x803324F0: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803324F4: jal         0x80015538
    // 0x803324F8: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x803324F8: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_8:
    // 0x803324FC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332500: nop

    // 0x80332504: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x80332508: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8033250C: nop

    // 0x80332510: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80332514: nop

    // 0x80332518: swc1        $f8, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f8.u32l;
    // 0x8033251C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332520: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332524: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80332528: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033252C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332530: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332534: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332538: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033253C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332540: lh          $t9, 0x4238($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4238);
    // 0x80332544: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332548: beq         $t9, $at, L_803325A0
    if (ctx->r25 == ctx->r1) {
        // 0x8033254C: nop
    
            goto L_803325A0;
    }
    // 0x8033254C: nop

    // 0x80332550: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80332554: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80332558: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x8033255C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332560: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332564: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332568: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8033256C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332570: lwc1        $f20, 0x1C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332574: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332578: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033257C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332580: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332584: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332588: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033258C: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x80332590: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332594: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332598: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033259C: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
L_803325A0:
    // 0x803325A0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803325A4: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x803325A8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803325AC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803325B0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803325B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803325B8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803325BC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803325C0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803325C4: lh          $t6, 0x423A($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X423A);
    // 0x803325C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803325CC: beq         $t6, $at, L_80332624
    if (ctx->r14 == ctx->r1) {
        // 0x803325D0: nop
    
            goto L_80332624;
    }
    // 0x803325D0: nop

    // 0x803325D4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803325D8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803325DC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803325E0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803325E4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803325E8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803325EC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803325F0: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x803325F4: lwc1        $f20, 0x1C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803325F8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803325FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332600: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332604: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332608: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033260C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332610: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x80332614: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332618: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033261C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332620: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
L_80332624:
    // 0x80332624: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332628: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033262C: jal         0x8001B44C
    // 0x80332630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_9;
    // 0x80332630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80332634: beq         $v0, $zero, L_80332798
    if (ctx->r2 == 0) {
        // 0x80332638: nop
    
            goto L_80332798;
    }
    // 0x80332638: nop

    // 0x8033263C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332640: nop

    // 0x80332644: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80332648: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033264C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332650: jal         0x8001BBDC
    // 0x80332654: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x80332654: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80332658: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8033265C: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80332660: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80332664: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332668: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033266C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332670: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332674: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332678: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033267C: lh          $t5, 0x4238($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4238);
    // 0x80332680: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332684: beq         $t5, $at, L_80332698
    if (ctx->r13 == ctx->r1) {
        // 0x80332688: nop
    
            goto L_80332698;
    }
    // 0x80332688: nop

    // 0x8033268C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80332690: jal         0x8001BBDC
    // 0x80332694: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x80332694: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
L_80332698:
    // 0x80332698: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033269C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803326A0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803326A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803326A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803326AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803326B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803326B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803326B8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803326BC: lh          $t9, 0x423A($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X423A);
    // 0x803326C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803326C4: beq         $t9, $at, L_803326D8
    if (ctx->r25 == ctx->r1) {
        // 0x803326C8: nop
    
            goto L_803326D8;
    }
    // 0x803326C8: nop

    // 0x803326CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x803326D0: jal         0x8001BBDC
    // 0x803326D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_12;
    // 0x803326D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_803326D8:
    // 0x803326D8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803326DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803326E0: lh          $t8, 0xAC($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XAC);
    // 0x803326E4: nop

    // 0x803326E8: bne         $t8, $at, L_80332718
    if (ctx->r24 != ctx->r1) {
        // 0x803326EC: nop
    
            goto L_80332718;
    }
    // 0x803326EC: nop

    // 0x803326F0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803326F4: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x803326F8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x803326FC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332700: nop

    // 0x80332704: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x80332708: nop

    // 0x8033270C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80332710: b           L_80332798
    // 0x80332714: sh          $t5, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r13;
        goto L_80332798;
    // 0x80332714: sh          $t5, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r13;
L_80332718:
    // 0x80332718: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8033271C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80332720: lh          $t7, 0xAC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAC);
    // 0x80332724: nop

    // 0x80332728: bne         $t7, $at, L_80332758
    if (ctx->r15 != ctx->r1) {
        // 0x8033272C: nop
    
            goto L_80332758;
    }
    // 0x8033272C: nop

    // 0x80332730: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332734: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80332738: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033273C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332740: nop

    // 0x80332744: lh          $t1, 0xAC($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAC);
    // 0x80332748: nop

    // 0x8033274C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80332750: b           L_80332798
    // 0x80332754: sh          $t2, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r10;
        goto L_80332798;
    // 0x80332754: sh          $t2, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r10;
L_80332758:
    // 0x80332758: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033275C: nop

    // 0x80332760: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x80332764: nop

    // 0x80332768: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x8033276C: beq         $at, $zero, L_8033278C
    if (ctx->r1 == 0) {
        // 0x80332770: nop
    
            goto L_8033278C;
    }
    // 0x80332770: nop

    // 0x80332774: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332778: nop

    // 0x8033277C: lh          $t6, 0xAC($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XAC);
    // 0x80332780: nop

    // 0x80332784: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80332788: sh          $t7, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r15;
L_8033278C:
    // 0x8033278C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332790: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80332794: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
L_80332798:
    // 0x80332798: b           L_803327A0
    // 0x8033279C: nop

        goto L_803327A0;
    // 0x8033279C: nop

L_803327A0:
    // 0x803327A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803327A4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803327A8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803327AC: jr          $ra
    // 0x803327B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803327B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80330000_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330040: addiu       $a1, $a1, 0x4708
    ctx->r5 = ADD32(ctx->r5, 0X4708);
    // 0x80330044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033004C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
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
    // 0x8033006C: beq         $t1, $at, L_80330138
    if (ctx->r9 == ctx->r1) {
        // 0x80330070: nop
    
            goto L_80330138;
    }
    // 0x80330070: nop

    // 0x80330074: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330078: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033007C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330080: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330084: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330088: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033008C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330090: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330094: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x80330098: nop

    // 0x8033009C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x803300A0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803300A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803300A8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803300AC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300B4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803300BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300C0: lh          $t8, 0x423A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423A);
    // 0x803300C4: nop

    // 0x803300C8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x803300CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803300D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300D4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803300D8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803300DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803300E0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803300E4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803300E8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803300EC: sh          $zero, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = 0;
    // 0x803300F0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x803300F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300F8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803300FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330100: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330104: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330108: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033010C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330110: sh          $zero, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = 0;
    // 0x80330114: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330118: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033011C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330120: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330124: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330128: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033012C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330130: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330134: sh          $zero, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = 0;
L_80330138:
    // 0x80330138: b           L_80330140
    // 0x8033013C: nop

        goto L_80330140;
    // 0x8033013C: nop

L_80330140:
    // 0x80330140: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330144: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330148: jr          $ra
    // 0x8033014C: nop

    return;
    // 0x8033014C: nop

;}
RECOMP_FUNC void func_80333D44_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333D44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333D48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333D4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80333D50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333D54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333D58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333D5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333D60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333D68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333D70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333D74: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x80333D78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333D7C: bne         $t8, $at, L_80333DF4
    if (ctx->r24 != ctx->r1) {
        // 0x80333D80: nop
    
            goto L_80333DF4;
    }
    // 0x80333D80: nop

    // 0x80333D84: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80333D88: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80333D8C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80333D90: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333D94: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333D98: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333D9C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333DA0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333DA4: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80333DA8: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80333DAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333DB0: beq         $s0, $at, L_80333DCC
    if (ctx->r16 == ctx->r1) {
        // 0x80333DB4: nop
    
            goto L_80333DCC;
    }
    // 0x80333DB4: nop

    // 0x80333DB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80333DBC: beq         $s0, $at, L_80333DDC
    if (ctx->r16 == ctx->r1) {
        // 0x80333DC0: nop
    
            goto L_80333DDC;
    }
    // 0x80333DC0: nop

    // 0x80333DC4: b           L_80333DEC
    // 0x80333DC8: nop

        goto L_80333DEC;
    // 0x80333DC8: nop

L_80333DCC:
    // 0x80333DCC: jal         0x80333B68
    // 0x80333DD0: nop

    func_80333B68_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x80333DD0: nop

    after_0:
    // 0x80333DD4: b           L_80333DF4
    // 0x80333DD8: nop

        goto L_80333DF4;
    // 0x80333DD8: nop

L_80333DDC:
    // 0x80333DDC: jal         0x80333D14
    // 0x80333DE0: nop

    func_80333D14_unk_bin_43(rdram, ctx);
        goto after_1;
    // 0x80333DE0: nop

    after_1:
    // 0x80333DE4: b           L_80333DF4
    // 0x80333DE8: nop

        goto L_80333DF4;
    // 0x80333DE8: nop

L_80333DEC:
    // 0x80333DEC: b           L_80333DF4
    // 0x80333DF0: nop

        goto L_80333DF4;
    // 0x80333DF0: nop

L_80333DF4:
    // 0x80333DF4: b           L_80333DFC
    // 0x80333DF8: nop

        goto L_80333DFC;
    // 0x80333DF8: nop

L_80333DFC:
    // 0x80333DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333E00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80333E04: jr          $ra
    // 0x80333E08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80333E08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803337D8_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803337D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803337DC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x803337E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803337E4: bne         $t6, $at, L_80333840
    if (ctx->r14 != ctx->r1) {
        // 0x803337E8: nop
    
            goto L_80333840;
    }
    // 0x803337E8: nop

    // 0x803337EC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803337F0: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x803337F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803337F8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803337FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333800: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333804: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333808: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033380C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333810: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80333814: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80333818: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033381C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80333820: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333824: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333828: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033382C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333830: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333834: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333838: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033383C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80333840:
    // 0x80333840: jr          $ra
    // 0x80333844: nop

    return;
    // 0x80333844: nop

    // 0x80333848: jr          $ra
    // 0x8033384C: nop

    return;
    // 0x8033384C: nop

;}
RECOMP_FUNC void func_803339F8_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803339F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803339FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333A00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A08: jal         0x8002B0E4
    // 0x80333A0C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80333A0C: nop

    after_0:
    // 0x80333A10: b           L_80333A18
    // 0x80333A14: nop

        goto L_80333A18;
    // 0x80333A14: nop

L_80333A18:
    // 0x80333A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80333A20: jr          $ra
    // 0x80333A24: nop

    return;
    // 0x80333A24: nop

;}
RECOMP_FUNC void func_80335D04_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335D04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80335D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335D0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D14: jal         0x8002B0E4
    // 0x80335D18: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80335D18: nop

    after_0:
    // 0x80335D1C: b           L_80335D24
    // 0x80335D20: nop

        goto L_80335D24;
    // 0x80335D20: nop

L_80335D24:
    // 0x80335D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80335D2C: jr          $ra
    // 0x80335D30: nop

    return;
    // 0x80335D30: nop

;}
RECOMP_FUNC void func_80335664_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80335668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033566C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335670: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335674: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335678: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033567C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335680: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335684: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335688: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033568C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335690: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80335694: nop

    // 0x80335698: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8033569C: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x803356A0: beq         $at, $zero, L_80335714
    if (ctx->r1 == 0) {
        // 0x803356A4: nop
    
            goto L_80335714;
    }
    // 0x803356A4: nop

    // 0x803356A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803356AC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803356B0: addu        $at, $at, $t9
    gpr jr_addend_803356BC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803356B4: lw          $t9, 0x5E6C($at)
    ctx->r25 = ADD32(ctx->r1, 0X5E6C);
    // 0x803356B8: nop

    // 0x803356BC: jr          $t9
    // 0x803356C0: nop

    switch (jr_addend_803356BC >> 2) {
        case 0: goto L_803356C4; break;
        case 1: goto L_803356D4; break;
        case 2: goto L_803356E4; break;
        case 3: goto L_803356F4; break;
        case 4: goto L_80335704; break;
        default: switch_error(__func__, 0x803356BC, 0x80335E6C);
    }
    // 0x803356C0: nop

L_803356C4:
    // 0x803356C4: jal         0x80334314
    // 0x803356C8: nop

    func_80334314_unk_bin_43(rdram, ctx);
        goto after_0;
    // 0x803356C8: nop

    after_0:
    // 0x803356CC: b           L_8033571C
    // 0x803356D0: nop

        goto L_8033571C;
    // 0x803356D0: nop

L_803356D4:
    // 0x803356D4: jal         0x803345EC
    // 0x803356D8: nop

    func_803345EC_unk_bin_43(rdram, ctx);
        goto after_1;
    // 0x803356D8: nop

    after_1:
    // 0x803356DC: b           L_8033571C
    // 0x803356E0: nop

        goto L_8033571C;
    // 0x803356E0: nop

L_803356E4:
    // 0x803356E4: jal         0x80334A18
    // 0x803356E8: nop

    func_80334A18_unk_bin_43(rdram, ctx);
        goto after_2;
    // 0x803356E8: nop

    after_2:
    // 0x803356EC: b           L_8033571C
    // 0x803356F0: nop

        goto L_8033571C;
    // 0x803356F0: nop

L_803356F4:
    // 0x803356F4: jal         0x80335138
    // 0x803356F8: nop

    func_80335138_unk_bin_43(rdram, ctx);
        goto after_3;
    // 0x803356F8: nop

    after_3:
    // 0x803356FC: b           L_8033571C
    // 0x80335700: nop

        goto L_8033571C;
    // 0x80335700: nop

L_80335704:
    // 0x80335704: jal         0x803354EC
    // 0x80335708: nop

    func_803354EC_unk_bin_43(rdram, ctx);
        goto after_4;
    // 0x80335708: nop

    after_4:
    // 0x8033570C: b           L_8033571C
    // 0x80335710: nop

        goto L_8033571C;
    // 0x80335710: nop

L_80335714:
    // 0x80335714: b           L_8033571C
    // 0x80335718: nop

        goto L_8033571C;
    // 0x80335718: nop

L_8033571C:
    // 0x8033571C: b           L_80335724
    // 0x80335720: nop

        goto L_80335724;
    // 0x80335720: nop

L_80335724:
    // 0x80335724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033572C: jr          $ra
    // 0x80335730: nop

    return;
    // 0x80335730: nop

;}
RECOMP_FUNC void func_80331930_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331930: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331934: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331938: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8033193C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331940: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80331944: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331948: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033194C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331950: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331954: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331958: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033195C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331960: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x80331964: nop

    // 0x80331968: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8033196C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80331970: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331974: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331978: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033197C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331980: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331984: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331988: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033198C: lh          $t1, 0x423A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X423A);
    // 0x80331990: nop

    // 0x80331994: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80331998: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8033199C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803319A0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803319A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803319A8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803319AC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803319B0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803319B4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803319B8: lh          $t4, 0x4258($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4258);
    // 0x803319BC: nop

    // 0x803319C0: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x803319C4: bne         $at, $zero, L_80331AF4
    if (ctx->r1 != 0) {
        // 0x803319C8: nop
    
            goto L_80331AF4;
    }
    // 0x803319C8: nop

    // 0x803319CC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x803319D0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x803319D4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803319D8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803319DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803319E0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803319E4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803319E8: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x803319EC: lh          $s0, 0x4258($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4258);
    // 0x803319F0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x803319F4: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x803319F8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x803319FC: sltiu       $t8, $s0, 0x1
    ctx->r24 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331A00: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80331A04: jal         0x8001BB34
    // 0x80331A08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80331A08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80331A0C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80331A10: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331A14: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331A18: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331A1C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331A20: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331A24: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331A28: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331A2C: lh          $t1, 0x4238($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4238);
    // 0x80331A30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331A34: beq         $t1, $at, L_80331A7C
    if (ctx->r9 == ctx->r1) {
        // 0x80331A38: nop
    
            goto L_80331A7C;
    }
    // 0x80331A38: nop

    // 0x80331A3C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331A40: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80331A44: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331A48: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331A4C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331A50: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331A54: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331A58: addu        $s0, $s0, $t3
    ctx->r16 = ADD32(ctx->r16, ctx->r11);
    // 0x80331A5C: lh          $s0, 0x4258($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4258);
    // 0x80331A60: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80331A64: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x80331A68: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80331A6C: sltiu       $t6, $s0, 0x1
    ctx->r14 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331A70: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80331A74: jal         0x8001BB34
    // 0x80331A78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80331A78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_80331A7C:
    // 0x80331A7C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80331A80: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331A84: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331A88: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331A8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331A90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331A94: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331A98: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80331A9C: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80331AA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331AA4: beq         $t5, $at, L_80331AEC
    if (ctx->r13 == ctx->r1) {
        // 0x80331AA8: nop
    
            goto L_80331AEC;
    }
    // 0x80331AA8: nop

    // 0x80331AAC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80331AB0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80331AB4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331AB8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331ABC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331AC0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331AC4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331AC8: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80331ACC: lh          $s0, 0x4258($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4258);
    // 0x80331AD0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80331AD4: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x80331AD8: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80331ADC: sltiu       $t3, $s0, 0x1
    ctx->r11 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331AE0: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80331AE4: jal         0x8001BB34
    // 0x80331AE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80331AE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_80331AEC:
    // 0x80331AEC: b           L_80331BC8
    // 0x80331AF0: nop

        goto L_80331BC8;
    // 0x80331AF0: nop

L_80331AF4:
    // 0x80331AF4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80331AF8: jal         0x8001BB34
    // 0x80331AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80331AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80331B00: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80331B04: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331B08: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80331B0C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80331B10: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331B14: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80331B18: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331B1C: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80331B20: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80331B24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331B28: beq         $t2, $at, L_80331B64
    if (ctx->r10 == ctx->r1) {
        // 0x80331B2C: nop
    
            goto L_80331B64;
    }
    // 0x80331B2C: nop

    // 0x80331B30: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331B38: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80331B3C: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80331B40: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331B44: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80331B48: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331B4C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331B50: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80331B54: sh          $t7, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r15;
    // 0x80331B58: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B5C: jal         0x8001BB34
    // 0x80331B60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80331B60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_80331B64:
    // 0x80331B64: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80331B68: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331B6C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331B70: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331B74: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331B78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331B7C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331B80: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331B84: lh          $t3, 0x423A($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X423A);
    // 0x80331B88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331B8C: beq         $t3, $at, L_80331BC8
    if (ctx->r11 == ctx->r1) {
        // 0x80331B90: nop
    
            goto L_80331BC8;
    }
    // 0x80331B90: nop

    // 0x80331B94: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80331B98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331B9C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80331BA0: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80331BA4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331BA8: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80331BAC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331BB0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331BB4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80331BB8: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
    // 0x80331BBC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80331BC0: jal         0x8001BB34
    // 0x80331BC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x80331BC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_80331BC8:
    // 0x80331BC8: b           L_80331BD0
    // 0x80331BCC: nop

        goto L_80331BD0;
    // 0x80331BCC: nop

L_80331BD0:
    // 0x80331BD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331BD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80331BD8: jr          $ra
    // 0x80331BDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80331BDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331EAC_unk_bin_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331EAC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80331EB0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80331EB4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80331EB8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331EBC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80331EC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331EC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331EC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331ECC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331ED0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331ED4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331ED8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331EDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331EE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331EE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331EE8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80331EEC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80331EF0: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80331EF4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331EF8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331EFC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331F00: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331F04: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331F08: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331F0C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331F10: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80331F14: nop

    // 0x80331F18: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x80331F1C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80331F20: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80331F24: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331F28: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331F2C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331F30: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331F34: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331F38: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331F3C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331F40: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80331F44: nop

    // 0x80331F48: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x80331F4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331F50: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80331F54: nop

    // 0x80331F58: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80331F5C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331F60: nop

    // 0x80331F64: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80331F68: nop

    // 0x80331F6C: bne         $t8, $zero, L_80332000
    if (ctx->r24 != 0) {
        // 0x80331F70: nop
    
            goto L_80332000;
    }
    // 0x80331F70: nop

    // 0x80331F74: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80331F78: nop

    // 0x80331F7C: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80331F80: nop

    // 0x80331F84: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80331F88: sb          $t1, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r9;
    // 0x80331F8C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331F90: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331F94: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x80331F98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FA0: jal         0x8001BBDC
    // 0x80331FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80331FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80331FA8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80331FAC: jal         0x8001BBDC
    // 0x80331FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80331FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331FB4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80331FB8: jal         0x8001BBDC
    // 0x80331FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80331FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331FC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FC8: lui         $a2, 0x4085
    ctx->r6 = S32(0X4085 << 16);
    // 0x80331FCC: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x80331FD0: jal         0x80029EF8
    // 0x80331FD4: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x80331FD4: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    after_3:
    // 0x80331FD8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80331FDC: lui         $a2, 0x4085
    ctx->r6 = S32(0X4085 << 16);
    // 0x80331FE0: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x80331FE4: jal         0x80029EF8
    // 0x80331FE8: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x80331FE8: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    after_4:
    // 0x80331FEC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80331FF0: lui         $a2, 0x4085
    ctx->r6 = S32(0X4085 << 16);
    // 0x80331FF4: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x80331FF8: jal         0x80029EF8
    // 0x80331FFC: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    func_80029EF8(rdram, ctx);
        goto after_5;
    // 0x80331FFC: lui         $a1, 0x4216
    ctx->r5 = S32(0X4216 << 16);
    after_5:
L_80332000:
    // 0x80332000: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80332004: nop

    // 0x80332008: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x8033200C: nop

    // 0x80332010: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80332014: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332018: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033201C: nop

    // 0x80332020: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
    // 0x80332024: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332028: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033202C: jal         0x80029C40
    // 0x80332030: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x80332030: nop

    after_6:
    // 0x80332034: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332038: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033203C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332040: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332044: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332048: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8033204C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332050: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332054: jal         0x80029018
    // 0x80332058: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x80332058: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x8033205C: beq         $v0, $zero, L_80332080
    if (ctx->r2 == 0) {
        // 0x80332060: nop
    
            goto L_80332080;
    }
    // 0x80332060: nop

    // 0x80332064: jal         0x800297DC
    // 0x80332068: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x80332068: nop

    after_8:
    // 0x8033206C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332070: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332074: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80332078: jal         0x80029824
    // 0x8033207C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x8033207C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_80332080:
    // 0x80332080: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80332084: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80332088: nop

    // 0x8033208C: swc1        $f18, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f18.u32l;
    // 0x80332090: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332094: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332098: jal         0x8001B44C
    // 0x8033209C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_10;
    // 0x8033209C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x803320A0: beq         $v0, $zero, L_803320D0
    if (ctx->r2 == 0) {
        // 0x803320A4: nop
    
            goto L_803320D0;
    }
    // 0x803320A4: nop

    // 0x803320A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320B0: jal         0x8001BBDC
    // 0x803320B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x803320B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x803320B8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x803320BC: jal         0x8001BBDC
    // 0x803320C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_12;
    // 0x803320C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x803320C4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803320C8: jal         0x8001BBDC
    // 0x803320CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_13;
    // 0x803320CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
L_803320D0:
    // 0x803320D0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x803320D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803320D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803320DC: jal         0x8002A0D0
    // 0x803320E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_14;
    // 0x803320E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_14:
    // 0x803320E4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x803320E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803320EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803320F0: jal         0x8002A0D0
    // 0x803320F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_15;
    // 0x803320F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_15:
    // 0x803320F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332100: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80332104: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332108: jal         0x8002A0D0
    // 0x8033210C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_16;
    // 0x8033210C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_16:
    // 0x80332110: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332114: bne         $v0, $at, L_803322C4
    if (ctx->r2 != ctx->r1) {
        // 0x80332118: nop
    
            goto L_803322C4;
    }
    // 0x80332118: nop

    // 0x8033211C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80332120: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80332124: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x80332128: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8033212C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332130: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80332134: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80332138: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033213C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80332140: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332144: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332148: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8033214C: sh          $t0, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r8;
    // 0x80332150: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332154: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332158: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033215C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332160: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332164: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332168: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033216C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332170: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80332174: sh          $t2, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r10;
    // 0x80332178: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033217C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80332180: nop

    // 0x80332184: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80332188: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033218C: nop

    // 0x80332190: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80332194: nop

    // 0x80332198: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x8033219C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803321A0: nop

    // 0x803321A4: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x803321A8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x803321AC: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x803321B0: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x803321B4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803321B8: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x803321BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803321C0: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803321C4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803321C8: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803321CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803321D0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803321D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803321D8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803321DC: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803321E0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803321E4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803321E8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803321EC: addu        $t2, $t9, $t3
    ctx->r10 = ADD32(ctx->r25, ctx->r11);
    // 0x803321F0: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x803321F4: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x803321F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803321FC: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x80332200: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80332204: nop

    // 0x80332208: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033220C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332210: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332214: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332218: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033221C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332220: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80332224: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332228: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033222C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332230: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332234: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80332238: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033223C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332240: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332244: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332248: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033224C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332250: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332254: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332258: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8033225C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332260: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80332264: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332268: addu        $t9, $t1, $t0
    ctx->r25 = ADD32(ctx->r9, ctx->r8);
    // 0x8033226C: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x80332270: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80332274: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332278: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x8033227C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332280: nop

    // 0x80332284: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80332288: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8033228C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332290: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80332294: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332298: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033229C: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x803322A0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x803322A4: nop

    // 0x803322A8: sh          $zero, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = 0;
    // 0x803322AC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803322B0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x803322B4: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x803322B8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803322BC: nop

    // 0x803322C0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803322C4:
    // 0x803322C4: b           L_803322CC
    // 0x803322C8: nop

        goto L_803322CC;
    // 0x803322C8: nop

L_803322CC:
    // 0x803322CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803322D0: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803322D4: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803322D8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803322DC: jr          $ra
    // 0x803322E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803322E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8033C934_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C934: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033C938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C93C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033C940: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033C944: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033C948: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033C94C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033C950: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033C954: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033C958: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033C95C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033C960: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033C964: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033C968: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033C96C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033C970: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033C974: addiu       $a1, $a1, 0x478C
    ctx->r5 = ADD32(ctx->r5, 0X478C);
    // 0x8033C978: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033C97C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033C980: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033C984: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033C988: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8033C98C: jal         0x80027464
    // 0x8033C990: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033C990: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033C994: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033C998: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033C99C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033C9A0: beq         $t1, $at, L_8033C9CC
    if (ctx->r9 == ctx->r1) {
        // 0x8033C9A4: nop
    
            goto L_8033C9CC;
    }
    // 0x8033C9A4: nop

    // 0x8033C9A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033C9AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C9B0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033C9B4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033C9B8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033C9BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033C9C0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033C9C4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033C9C8: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
L_8033C9CC:
    // 0x8033C9CC: b           L_8033C9D4
    // 0x8033C9D0: nop

        goto L_8033C9D4;
    // 0x8033C9D0: nop

L_8033C9D4:
    // 0x8033C9D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C9D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033C9DC: jr          $ra
    // 0x8033C9E0: nop

    return;
    // 0x8033C9E0: nop

;}
RECOMP_FUNC void func_8033D5D4_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D5D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033D5D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033D5DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D5E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D5E4: jal         0x8002B0E4
    // 0x8033D5E8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x8033D5E8: nop

    after_0:
    // 0x8033D5EC: b           L_8033D5F4
    // 0x8033D5F0: nop

        goto L_8033D5F4;
    // 0x8033D5F0: nop

L_8033D5F4:
    // 0x8033D5F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033D5F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033D5FC: jr          $ra
    // 0x8033D600: nop

    return;
    // 0x8033D600: nop

;}
RECOMP_FUNC void func_8033C9E4_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C9E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C9E8: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8033C9EC: nop

    // 0x8033C9F0: bne         $t6, $zero, L_8033CA50
    if (ctx->r14 != 0) {
        // 0x8033C9F4: nop
    
            goto L_8033CA50;
    }
    // 0x8033C9F4: nop

    // 0x8033C9F8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033C9FC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x8033CA00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CA04: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033CA08: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033CA0C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033CA10: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033CA14: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033CA18: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033CA1C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8033CA20: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8033CA24: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033CA28: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033CA2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CA30: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033CA34: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033CA38: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033CA3C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033CA40: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033CA44: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033CA48: b           L_8033CB80
    // 0x8033CA4C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
        goto L_8033CB80;
    // 0x8033CA4C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8033CA50:
    // 0x8033CA50: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033CA54: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x8033CA58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CA5C: bne         $t2, $at, L_8033CB80
    if (ctx->r10 != ctx->r1) {
        // 0x8033CA60: nop
    
            goto L_8033CB80;
    }
    // 0x8033CA60: nop

    // 0x8033CA64: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8033CA68: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x8033CA6C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033CA70: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033CA74: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033CA78: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033CA7C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033CA80: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033CA84: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8033CA88: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8033CA8C: lh          $t8, 0x108($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X108);
    // 0x8033CA90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CA94: bne         $t8, $at, L_8033CB80
    if (ctx->r24 != ctx->r1) {
        // 0x8033CA98: nop
    
            goto L_8033CB80;
    }
    // 0x8033CA98: nop

    // 0x8033CA9C: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x8033CAA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033CAA4: bne         $t7, $at, L_8033CB80
    if (ctx->r15 != ctx->r1) {
        // 0x8033CAA8: nop
    
            goto L_8033CB80;
    }
    // 0x8033CAA8: nop

    // 0x8033CAAC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033CAB0: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033CAB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CAB8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033CABC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033CAC0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033CAC4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033CAC8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033CACC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033CAD0: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x8033CAD4: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
    // 0x8033CAD8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033CADC: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x8033CAE0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8033CAE4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033CAE8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033CAEC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033CAF0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033CAF4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033CAF8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033CAFC: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8033CB00: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8033CB04: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033CB08: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8033CB0C: lwc1        $f4, 0x20($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X20);
    // 0x8033CB10: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033CB14: nop

    // 0x8033CB18: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8033CB1C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8033CB20: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8033CB24: sh          $t6, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r14;
    // 0x8033CB28: nop

    // 0x8033CB2C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033CB30: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x8033CB34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CB38: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8033CB3C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8033CB40: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033CB44: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8033CB48: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033CB4C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033CB50: sh          $zero, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = 0;
    // 0x8033CB54: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033CB58: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x8033CB5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CB60: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033CB64: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CB68: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033CB6C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CB70: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033CB74: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033CB78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033CB7C: sh          $t9, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r25;
L_8033CB80:
    // 0x8033CB80: jr          $ra
    // 0x8033CB84: nop

    return;
    // 0x8033CB84: nop

    // 0x8033CB88: jr          $ra
    // 0x8033CB8C: nop

    return;
    // 0x8033CB8C: nop

;}
RECOMP_FUNC void func_8033C188_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C188: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8033C18C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8033C190: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8033C194: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033C198: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8033C19C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C1A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C1A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C1A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C1AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C1B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C1B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C1B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C1BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C1C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C1C4: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8033C1C8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033C1CC: nop

    // 0x8033C1D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033C1D4: nop

    // 0x8033C1D8: bne         $t1, $zero, L_8033C278
    if (ctx->r9 != 0) {
        // 0x8033C1DC: nop
    
            goto L_8033C278;
    }
    // 0x8033C1DC: nop

    // 0x8033C1E0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033C1E4: nop

    // 0x8033C1E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033C1EC: nop

    // 0x8033C1F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033C1F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033C1F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033C1FC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033C200: nop

    // 0x8033C204: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x8033C208: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033C20C: nop

    // 0x8033C210: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033C214: nop

    // 0x8033C218: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x8033C21C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033C220: nop

    // 0x8033C224: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x8033C228: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033C22C: nop

    // 0x8033C230: lh          $s0, 0xAA($t8)
    ctx->r16 = MEM_H(ctx->r24, 0XAA);
    // 0x8033C234: nop

    // 0x8033C238: sh          $s0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r16;
    // 0x8033C23C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033C240: nop

    // 0x8033C244: sh          $s0, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r16;
    // 0x8033C248: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C24C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8033C250: addiu       $t0, $t0, -0x7798
    ctx->r8 = ADD32(ctx->r8, -0X7798);
    // 0x8033C254: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C258: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033C25C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033C264: jal         0x8001C0EC
    // 0x8033C268: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033C268: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_0:
    // 0x8033C26C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033C270: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8033C274: sh          $t1, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r9;
L_8033C278:
    // 0x8033C278: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033C27C: nop

    // 0x8033C280: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x8033C284: nop

    // 0x8033C288: beq         $t2, $zero, L_8033C658
    if (ctx->r10 == 0) {
        // 0x8033C28C: nop
    
            goto L_8033C658;
    }
    // 0x8033C28C: nop

    // 0x8033C290: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033C294: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C298: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x8033C29C: nop

    // 0x8033C2A0: bne         $t6, $at, L_8033C2FC
    if (ctx->r14 != ctx->r1) {
        // 0x8033C2A4: nop
    
            goto L_8033C2FC;
    }
    // 0x8033C2A4: nop

    // 0x8033C2A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C2AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C2B0: jal         0x8001B44C
    // 0x8033C2B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x8033C2B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033C2B8: beq         $v0, $zero, L_8033C2F4
    if (ctx->r2 == 0) {
        // 0x8033C2BC: nop
    
            goto L_8033C2F4;
    }
    // 0x8033C2BC: nop

    // 0x8033C2C0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033C2C4: nop

    // 0x8033C2C8: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x8033C2CC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033C2D0: nop

    // 0x8033C2D4: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x8033C2D8: nop

    // 0x8033C2DC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033C2E0: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
    // 0x8033C2E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C2E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C2EC: jal         0x8001BBDC
    // 0x8033C2F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x8033C2F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_8033C2F4:
    // 0x8033C2F4: b           L_8033C650
    // 0x8033C2F8: nop

        goto L_8033C650;
    // 0x8033C2F8: nop

L_8033C2FC:
    // 0x8033C2FC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033C300: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033C304: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x8033C308: nop

    // 0x8033C30C: bne         $t3, $at, L_8033C38C
    if (ctx->r11 != ctx->r1) {
        // 0x8033C310: nop
    
            goto L_8033C38C;
    }
    // 0x8033C310: nop

    // 0x8033C314: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C318: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C31C: jal         0x8001B44C
    // 0x8033C320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x8033C320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033C324: beq         $v0, $zero, L_8033C384
    if (ctx->r2 == 0) {
        // 0x8033C328: nop
    
            goto L_8033C384;
    }
    // 0x8033C328: nop

    // 0x8033C32C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033C330: nop

    // 0x8033C334: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x8033C338: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033C33C: nop

    // 0x8033C340: lh          $t5, 0xA8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA8);
    // 0x8033C344: nop

    // 0x8033C348: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8033C34C: sh          $t6, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r14;
    // 0x8033C350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C354: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033C358: addiu       $t7, $t7, -0x7798
    ctx->r15 = ADD32(ctx->r15, -0X7798);
    // 0x8033C35C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C360: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033C364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033C36C: jal         0x8001C0EC
    // 0x8033C370: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x8033C370: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_4:
    // 0x8033C374: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C378: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C37C: jal         0x8001BBDC
    // 0x8033C380: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x8033C380: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_8033C384:
    // 0x8033C384: b           L_8033C650
    // 0x8033C388: nop

        goto L_8033C650;
    // 0x8033C388: nop

L_8033C38C:
    // 0x8033C38C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033C390: nop

    // 0x8033C394: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x8033C398: nop

    // 0x8033C39C: beq         $t0, $zero, L_8033C3B0
    if (ctx->r8 == 0) {
        // 0x8033C3A0: nop
    
            goto L_8033C3B0;
    }
    // 0x8033C3A0: nop

    // 0x8033C3A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033C3A8: bne         $t0, $at, L_8033C410
    if (ctx->r8 != ctx->r1) {
        // 0x8033C3AC: nop
    
            goto L_8033C410;
    }
    // 0x8033C3AC: nop

L_8033C3B0:
    // 0x8033C3B0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033C3B4: nop

    // 0x8033C3B8: lh          $t1, 0xAA($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAA);
    // 0x8033C3BC: nop

    // 0x8033C3C0: bne         $t1, $zero, L_8033C3F0
    if (ctx->r9 != 0) {
        // 0x8033C3C4: nop
    
            goto L_8033C3F0;
    }
    // 0x8033C3C4: nop

    // 0x8033C3C8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033C3CC: nop

    // 0x8033C3D0: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
    // 0x8033C3D4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033C3D8: nop

    // 0x8033C3DC: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x8033C3E0: nop

    // 0x8033C3E4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8033C3E8: b           L_8033C408
    // 0x8033C3EC: sh          $t6, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r14;
        goto L_8033C408;
    // 0x8033C3EC: sh          $t6, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r14;
L_8033C3F0:
    // 0x8033C3F0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033C3F4: nop

    // 0x8033C3F8: lh          $t7, 0xAA($t2)
    ctx->r15 = MEM_H(ctx->r10, 0XAA);
    // 0x8033C3FC: nop

    // 0x8033C400: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8033C404: sh          $t9, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r25;
L_8033C408:
    // 0x8033C408: b           L_8033C650
    // 0x8033C40C: nop

        goto L_8033C650;
    // 0x8033C40C: nop

L_8033C410:
    // 0x8033C410: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033C414: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8033C418: lh          $t8, 0xA8($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA8);
    // 0x8033C41C: nop

    // 0x8033C420: bne         $t8, $at, L_8033C650
    if (ctx->r24 != ctx->r1) {
        // 0x8033C424: nop
    
            goto L_8033C650;
    }
    // 0x8033C424: nop

    // 0x8033C428: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033C42C: nop

    // 0x8033C430: lh          $t3, 0xAA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAA);
    // 0x8033C434: nop

    // 0x8033C438: slti        $at, $t3, 0x28
    ctx->r1 = SIGNED(ctx->r11) < 0X28 ? 1 : 0;
    // 0x8033C43C: beq         $at, $zero, L_8033C5F8
    if (ctx->r1 == 0) {
        // 0x8033C440: nop
    
            goto L_8033C5F8;
    }
    // 0x8033C440: nop

    // 0x8033C444: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x8033C448: bne         $at, $zero, L_8033C5F8
    if (ctx->r1 != 0) {
        // 0x8033C44C: nop
    
            goto L_8033C5F8;
    }
    // 0x8033C44C: nop

    // 0x8033C450: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033C454: nop

    // 0x8033C458: lh          $t6, 0xAA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAA);
    // 0x8033C45C: nop

    // 0x8033C460: andi        $t4, $t6, 0xF
    ctx->r12 = ctx->r14 & 0XF;
    // 0x8033C464: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8033C468: nop

    // 0x8033C46C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033C470: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x8033C474: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8033C478: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033C47C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8033C480: nop

    // 0x8033C484: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8033C488: nop

    // 0x8033C48C: bc1t        L_8033C4CC
    if (c1cs) {
        // 0x8033C490: nop
    
            goto L_8033C4CC;
    }
    // 0x8033C490: nop

    // 0x8033C494: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033C498: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033C49C: nop

    // 0x8033C4A0: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x8033C4A4: nop

    // 0x8033C4A8: bc1t        L_8033C4CC
    if (c1cs) {
        // 0x8033C4AC: nop
    
            goto L_8033C4CC;
    }
    // 0x8033C4AC: nop

    // 0x8033C4B0: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8033C4B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033C4B8: nop

    // 0x8033C4BC: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x8033C4C0: nop

    // 0x8033C4C4: bc1f        L_8033C5F8
    if (!c1cs) {
        // 0x8033C4C8: nop
    
            goto L_8033C5F8;
    }
    // 0x8033C4C8: nop

L_8033C4CC:
    // 0x8033C4CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C4D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C4D4: lui         $a1, 0x44ED
    ctx->r5 = S32(0X44ED << 16);
    // 0x8033C4D8: jal         0x8002A1FC
    // 0x8033C4DC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A1FC(rdram, ctx);
        goto after_6;
    // 0x8033C4DC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_6:
    // 0x8033C4E0: beq         $v0, $zero, L_8033C5F8
    if (ctx->r2 == 0) {
        // 0x8033C4E4: nop
    
            goto L_8033C5F8;
    }
    // 0x8033C4E4: nop

    // 0x8033C4E8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8033C4EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033C4F0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033C4F4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8033C4F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033C4FC: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8033C500: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8033C504: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8033C508: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x8033C50C: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8033C510: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033C514: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8033C518: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8033C51C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033C520: addiu       $a1, $a1, 0x4168
    ctx->r5 = ADD32(ctx->r5, 0X4168);
    // 0x8033C524: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033C528: jal         0x80027464
    // 0x8033C52C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x8033C52C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x8033C530: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8033C534: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8033C538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033C53C: beq         $t9, $at, L_8033C5F8
    if (ctx->r25 == ctx->r1) {
        // 0x8033C540: nop
    
            goto L_8033C5F8;
    }
    // 0x8033C540: nop

    // 0x8033C544: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8033C548: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033C54C: addiu       $a3, $a3, -0x7768
    ctx->r7 = ADD32(ctx->r7, -0X7768);
    // 0x8033C550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C554: jal         0x8001ABF4
    // 0x8033C558: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x8033C558: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x8033C55C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8033C560: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8033C564: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x8033C568: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033C56C: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x8033C570: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033C574: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033C578: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8033C57C: lwc1        $f8, -0x2934($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2934);
    // 0x8033C580: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033C584: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033C588: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033C58C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C590: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033C594: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8033C598: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033C59C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033C5A0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033C5A4: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x8033C5A8: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x8033C5AC: lwc1        $f20, 0x14($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X14);
    // 0x8033C5B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C5B4: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x8033C5B8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8033C5BC: nop

    // 0x8033C5C0: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x8033C5C4: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x8033C5C8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033C5CC: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x8033C5D0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033C5D4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033C5D8: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x8033C5DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C5E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C5E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C5E8: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x8033C5EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033C5F0: jal         0x800175F0
    // 0x8033C5F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x8033C5F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
L_8033C5F8:
    // 0x8033C5F8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033C5FC: nop

    // 0x8033C600: lh          $t9, 0xAA($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAA);
    // 0x8033C604: nop

    // 0x8033C608: bne         $t9, $zero, L_8033C638
    if (ctx->r25 != 0) {
        // 0x8033C60C: nop
    
            goto L_8033C638;
    }
    // 0x8033C60C: nop

    // 0x8033C610: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033C614: nop

    // 0x8033C618: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
    // 0x8033C61C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033C620: nop

    // 0x8033C624: lh          $t8, 0xA8($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA8);
    // 0x8033C628: nop

    // 0x8033C62C: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x8033C630: b           L_8033C650
    // 0x8033C634: sh          $t1, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r9;
        goto L_8033C650;
    // 0x8033C634: sh          $t1, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r9;
L_8033C638:
    // 0x8033C638: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033C63C: nop

    // 0x8033C640: lh          $t5, 0xAA($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XAA);
    // 0x8033C644: nop

    // 0x8033C648: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8033C64C: sh          $t6, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r14;
L_8033C650:
    // 0x8033C650: b           L_8033C7B4
    // 0x8033C654: nop

        goto L_8033C7B4;
    // 0x8033C654: nop

L_8033C658:
    // 0x8033C658: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033C65C: nop

    // 0x8033C660: lh          $t7, 0xA8($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XA8);
    // 0x8033C664: nop

    // 0x8033C668: beq         $t7, $zero, L_8033C67C
    if (ctx->r15 == 0) {
        // 0x8033C66C: nop
    
            goto L_8033C67C;
    }
    // 0x8033C66C: nop

    // 0x8033C670: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033C674: bne         $t7, $at, L_8033C698
    if (ctx->r15 != ctx->r1) {
        // 0x8033C678: nop
    
            goto L_8033C698;
    }
    // 0x8033C678: nop

L_8033C67C:
    // 0x8033C67C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033C680: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033C684: sh          $t9, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r25;
    // 0x8033C688: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033C68C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8033C690: b           L_8033C7B4
    // 0x8033C694: sh          $t8, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r24;
        goto L_8033C7B4;
    // 0x8033C694: sh          $t8, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r24;
L_8033C698:
    // 0x8033C698: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033C69C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C6A0: lh          $t5, 0xA8($t0)
    ctx->r13 = MEM_H(ctx->r8, 0XA8);
    // 0x8033C6A4: nop

    // 0x8033C6A8: bne         $t5, $at, L_8033C6F4
    if (ctx->r13 != ctx->r1) {
        // 0x8033C6AC: nop
    
            goto L_8033C6F4;
    }
    // 0x8033C6AC: nop

    // 0x8033C6B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C6B4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8033C6B8: addiu       $t6, $t6, -0x7798
    ctx->r14 = ADD32(ctx->r14, -0X7798);
    // 0x8033C6BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C6C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8033C6C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C6C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033C6CC: jal         0x8001C0EC
    // 0x8033C6D0: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_10;
    // 0x8033C6D0: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_10:
    // 0x8033C6D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C6D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C6DC: jal         0x8001BBDC
    // 0x8033C6E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x8033C6E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8033C6E4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033C6E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033C6EC: b           L_8033C7B4
    // 0x8033C6F0: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
        goto L_8033C7B4;
    // 0x8033C6F0: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_8033C6F4:
    // 0x8033C6F4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033C6F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033C6FC: lh          $t9, 0xA8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA8);
    // 0x8033C700: nop

    // 0x8033C704: bne         $t9, $at, L_8033C750
    if (ctx->r25 != ctx->r1) {
        // 0x8033C708: nop
    
            goto L_8033C750;
    }
    // 0x8033C708: nop

    // 0x8033C70C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C710: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033C714: addiu       $t2, $t2, -0x7798
    ctx->r10 = ADD32(ctx->r10, -0X7798);
    // 0x8033C718: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C71C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033C720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C724: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033C728: jal         0x8001C0EC
    // 0x8033C72C: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_12;
    // 0x8033C72C: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_12:
    // 0x8033C730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C738: jal         0x8001BBDC
    // 0x8033C73C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_13;
    // 0x8033C73C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x8033C740: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033C744: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033C748: b           L_8033C7B4
    // 0x8033C74C: sh          $t8, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r24;
        goto L_8033C7B4;
    // 0x8033C74C: sh          $t8, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r24;
L_8033C750:
    // 0x8033C750: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033C754: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8033C758: lh          $t5, 0xA8($t0)
    ctx->r13 = MEM_H(ctx->r8, 0XA8);
    // 0x8033C75C: nop

    // 0x8033C760: bne         $t5, $at, L_8033C790
    if (ctx->r13 != ctx->r1) {
        // 0x8033C764: nop
    
            goto L_8033C790;
    }
    // 0x8033C764: nop

    // 0x8033C768: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033C76C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8033C770: sh          $t6, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r14;
    // 0x8033C774: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033C778: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x8033C77C: sh          $t4, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r12;
    // 0x8033C780: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033C784: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033C788: b           L_8033C7B4
    // 0x8033C78C: sh          $t9, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r25;
        goto L_8033C7B4;
    // 0x8033C78C: sh          $t9, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r25;
L_8033C790:
    // 0x8033C790: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033C794: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8033C798: lh          $t1, 0xA8($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XA8);
    // 0x8033C79C: nop

    // 0x8033C7A0: bne         $t1, $at, L_8033C7B4
    if (ctx->r9 != ctx->r1) {
        // 0x8033C7A4: nop
    
            goto L_8033C7B4;
    }
    // 0x8033C7A4: nop

    // 0x8033C7A8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033C7AC: nop

    // 0x8033C7B0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033C7B4:
    // 0x8033C7B4: b           L_8033C7BC
    // 0x8033C7B8: nop

        goto L_8033C7BC;
    // 0x8033C7B8: nop

L_8033C7BC:
    // 0x8033C7BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C7C0: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8033C7C4: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033C7C8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8033C7CC: jr          $ra
    // 0x8033C7D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8033C7D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8033C7D4_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C7D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033C7D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033C7DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C7E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C7E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C7E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C7EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C7F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C7F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C7F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C7FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C800: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C804: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033C808: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x8033C80C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
L_8033C810:
    // 0x8033C810: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8033C814: jal         0x80026E58
    // 0x8033C818: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_0;
    // 0x8033C818: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_0:
    // 0x8033C81C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8033C820: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8033C824: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033C828: bne         $t1, $at, L_8033C840
    if (ctx->r9 != ctx->r1) {
        // 0x8033C82C: nop
    
            goto L_8033C840;
    }
    // 0x8033C82C: nop

    // 0x8033C830: b           L_8033C878
    // 0x8033C834: nop

        goto L_8033C878;
    // 0x8033C834: nop

    // 0x8033C838: b           L_8033C870
    // 0x8033C83C: nop

        goto L_8033C870;
    // 0x8033C83C: nop

L_8033C840:
    // 0x8033C840: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8033C844: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C848: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033C84C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033C850: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033C854: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033C858: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033C85C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033C860: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x8033C864: sh          $t2, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r10;
    // 0x8033C868: b           L_8033C878
    // 0x8033C86C: nop

        goto L_8033C878;
    // 0x8033C86C: nop

L_8033C870:
    // 0x8033C870: b           L_8033C810
    // 0x8033C874: nop

        goto L_8033C810;
    // 0x8033C874: nop

L_8033C878:
    // 0x8033C878: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C87C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C880: jal         0x8002B0E4
    // 0x8033C884: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x8033C884: nop

    after_1:
    // 0x8033C888: b           L_8033C890
    // 0x8033C88C: nop

        goto L_8033C890;
    // 0x8033C88C: nop

L_8033C890:
    // 0x8033C890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033C894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033C898: jr          $ra
    // 0x8033C89C: nop

    return;
    // 0x8033C89C: nop

;}
RECOMP_FUNC void func_8033C8A0_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C8A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033C8A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C8A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033C8AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C8B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C8B4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033C8B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C8BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C8C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C8C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C8C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C8CC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8033C8D0: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8033C8D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C8D8: beq         $s0, $at, L_8033C8F4
    if (ctx->r16 == ctx->r1) {
        // 0x8033C8DC: nop
    
            goto L_8033C8F4;
    }
    // 0x8033C8DC: nop

    // 0x8033C8E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033C8E4: beq         $s0, $at, L_8033C904
    if (ctx->r16 == ctx->r1) {
        // 0x8033C8E8: nop
    
            goto L_8033C904;
    }
    // 0x8033C8E8: nop

    // 0x8033C8EC: b           L_8033C914
    // 0x8033C8F0: nop

        goto L_8033C914;
    // 0x8033C8F0: nop

L_8033C8F4:
    // 0x8033C8F4: jal         0x8033C188
    // 0x8033C8F8: nop

    func_8033C188_unk_bin_44(rdram, ctx);
        goto after_0;
    // 0x8033C8F8: nop

    after_0:
    // 0x8033C8FC: b           L_8033C91C
    // 0x8033C900: nop

        goto L_8033C91C;
    // 0x8033C900: nop

L_8033C904:
    // 0x8033C904: jal         0x8033C7D4
    // 0x8033C908: nop

    func_8033C7D4_unk_bin_44(rdram, ctx);
        goto after_1;
    // 0x8033C908: nop

    after_1:
    // 0x8033C90C: b           L_8033C91C
    // 0x8033C910: nop

        goto L_8033C91C;
    // 0x8033C910: nop

L_8033C914:
    // 0x8033C914: b           L_8033C91C
    // 0x8033C918: nop

        goto L_8033C91C;
    // 0x8033C918: nop

L_8033C91C:
    // 0x8033C91C: b           L_8033C924
    // 0x8033C920: nop

        goto L_8033C924;
    // 0x8033C920: nop

L_8033C924:
    // 0x8033C924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C928: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033C92C: jr          $ra
    // 0x8033C930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033C930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033CB90_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CB90: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033CB94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033CB98: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033CB9C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033CBA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033CBA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033CBA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CBAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CBB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CBB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CBB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CBBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033CBC0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033CBC4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033CBC8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033CBCC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033CBD0: nop

    // 0x8033CBD4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033CBD8: nop

    // 0x8033CBDC: bne         $t1, $zero, L_8033CC6C
    if (ctx->r9 != 0) {
        // 0x8033CBE0: nop
    
            goto L_8033CC6C;
    }
    // 0x8033CBE0: nop

    // 0x8033CBE4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033CBE8: nop

    // 0x8033CBEC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033CBF0: nop

    // 0x8033CBF4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033CBF8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033CBFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033CC00: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033CC04: nop

    // 0x8033CC08: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x8033CC0C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033CC10: nop

    // 0x8033CC14: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033CC18: nop

    // 0x8033CC1C: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x8033CC20: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033CC24: nop

    // 0x8033CC28: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x8033CC2C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033CC30: nop

    // 0x8033CC34: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x8033CC38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CC3C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8033CC40: addiu       $t9, $t9, -0x7798
    ctx->r25 = ADD32(ctx->r25, -0X7798);
    // 0x8033CC44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CC48: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8033CC4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CC50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033CC54: jal         0x8001C0EC
    // 0x8033CC58: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033CC58: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_0:
    // 0x8033CC5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CC60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CC64: jal         0x8001BBDC
    // 0x8033CC68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033CC68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_8033CC6C:
    // 0x8033CC6C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033CC70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CC74: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033CC78: nop

    // 0x8033CC7C: bne         $t1, $at, L_8033CCA8
    if (ctx->r9 != ctx->r1) {
        // 0x8033CC80: nop
    
            goto L_8033CCA8;
    }
    // 0x8033CC80: nop

    // 0x8033CC84: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033CC88: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8033CC8C: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x8033CC90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CC94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CC98: jal         0x8001BBDC
    // 0x8033CC9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x8033CC9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033CCA0: b           L_8033CD18
    // 0x8033CCA4: nop

        goto L_8033CD18;
    // 0x8033CCA4: nop

L_8033CCA8:
    // 0x8033CCA8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033CCAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033CCB0: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x8033CCB4: nop

    // 0x8033CCB8: bne         $t5, $at, L_8033CD18
    if (ctx->r13 != ctx->r1) {
        // 0x8033CCBC: nop
    
            goto L_8033CD18;
    }
    // 0x8033CCBC: nop

    // 0x8033CCC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CCC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CCC8: jal         0x8001B44C
    // 0x8033CCCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x8033CCCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033CCD0: beq         $v0, $zero, L_8033CD18
    if (ctx->r2 == 0) {
        // 0x8033CCD4: nop
    
            goto L_8033CD18;
    }
    // 0x8033CCD4: nop

    // 0x8033CCD8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033CCDC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8033CCE0: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x8033CCE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CCE8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8033CCEC: addiu       $t8, $t8, -0x7798
    ctx->r24 = ADD32(ctx->r24, -0X7798);
    // 0x8033CCF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CCF4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8033CCF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CCFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033CD00: jal         0x8001C0EC
    // 0x8033CD04: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x8033CD04: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_4:
    // 0x8033CD08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CD0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CD10: jal         0x8001BBDC
    // 0x8033CD14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x8033CD14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_8033CD18:
    // 0x8033CD18: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD1C: nop

    // 0x8033CD20: lh          $t0, 0xC0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC0);
    // 0x8033CD24: nop

    // 0x8033CD28: beq         $t0, $zero, L_8033CE30
    if (ctx->r8 == 0) {
        // 0x8033CD2C: nop
    
            goto L_8033CE30;
    }
    // 0x8033CD2C: nop

    // 0x8033CD30: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD34: nop

    // 0x8033CD38: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x8033CD3C: nop

    // 0x8033CD40: bne         $t3, $zero, L_8033CD54
    if (ctx->r11 != 0) {
        // 0x8033CD44: nop
    
            goto L_8033CD54;
    }
    // 0x8033CD44: nop

    // 0x8033CD48: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD4C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033CD50: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_8033CD54:
    // 0x8033CD54: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD58: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033CD5C: lwc1        $f6, 0xC($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0XC);
    // 0x8033CD60: lwc1        $f11, -0x2930($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2930);
    // 0x8033CD64: lwc1        $f10, -0x292C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X292C);
    // 0x8033CD68: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033CD6C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8033CD70: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8033CD74: swc1        $f18, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f18.u32l;
    // 0x8033CD78: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD7C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033CD80: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x8033CD84: lwc1        $f9, -0x2928($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2928);
    // 0x8033CD88: lwc1        $f8, -0x2924($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2924);
    // 0x8033CD8C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033CD90: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8033CD94: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8033CD98: swc1        $f16, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f16.u32l;
    // 0x8033CD9C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033CDA0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033CDA4: lwc1        $f18, 0x14($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X14);
    // 0x8033CDA8: lwc1        $f7, -0x2920($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2920);
    // 0x8033CDAC: lwc1        $f6, -0x291C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X291C);
    // 0x8033CDB0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8033CDB4: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8033CDB8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8033CDBC: swc1        $f10, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f10.u32l;
    // 0x8033CDC0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033CDC4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033CDC8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033CDCC: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8033CDD0: nop

    // 0x8033CDD4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8033CDD8: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    // 0x8033CDDC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033CDE0: nop

    // 0x8033CDE4: lh          $t0, 0xC0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC0);
    // 0x8033CDE8: nop

    // 0x8033CDEC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8033CDF0: sh          $t1, 0xC0($t9)
    MEM_H(0XC0, ctx->r25) = ctx->r9;
    // 0x8033CDF4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033CDF8: nop

    // 0x8033CDFC: lh          $t4, 0xC0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC0);
    // 0x8033CE00: nop

    // 0x8033CE04: bne         $t4, $zero, L_8033CE30
    if (ctx->r12 != 0) {
        // 0x8033CE08: nop
    
            goto L_8033CE30;
    }
    // 0x8033CE08: nop

    // 0x8033CE0C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033CE10: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033CE14: sh          $t2, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r10;
    // 0x8033CE18: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033CE1C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8033CE20: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x8033CE24: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033CE28: nop

    // 0x8033CE2C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_8033CE30:
    // 0x8033CE30: b           L_8033CE38
    // 0x8033CE34: nop

        goto L_8033CE38;
    // 0x8033CE34: nop

L_8033CE38:
    // 0x8033CE38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033CE3C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033CE40: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033CE44: jr          $ra
    // 0x8033CE48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033CE48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033C000_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033C004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C008: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033C00C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033C010: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033C014: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033C018: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033C01C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033C020: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033C024: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033C028: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033C02C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033C030: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033C034: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033C038: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033C03C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033C040: addiu       $a1, $a1, 0x4780
    ctx->r5 = ADD32(ctx->r5, 0X4780);
    // 0x8033C044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033C048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033C04C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033C050: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033C054: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8033C058: jal         0x80027464
    // 0x8033C05C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033C05C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033C060: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033C064: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033C068: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033C06C: beq         $t1, $at, L_8033C0F8
    if (ctx->r9 == ctx->r1) {
        // 0x8033C070: nop
    
            goto L_8033C0F8;
    }
    // 0x8033C070: nop

    // 0x8033C074: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033C078: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033C07C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033C080: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033C084: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033C088: lwc1        $f4, -0x2940($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2940);
    // 0x8033C08C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033C090: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033C094: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C098: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033C09C: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x8033C0A0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033C0A4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033C0A8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033C0AC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033C0B0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033C0B4: lwc1        $f6, -0x293C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X293C);
    // 0x8033C0B8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033C0BC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033C0C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C0C4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033C0C8: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x8033C0CC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033C0D0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033C0D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033C0D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033C0DC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033C0E0: lwc1        $f8, -0x2938($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2938);
    // 0x8033C0E4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033C0E8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033C0EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C0F0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033C0F4: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_8033C0F8:
    // 0x8033C0F8: b           L_8033C100
    // 0x8033C0FC: nop

        goto L_8033C100;
    // 0x8033C0FC: nop

L_8033C100:
    // 0x8033C100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033C108: jr          $ra
    // 0x8033C10C: nop

    return;
    // 0x8033C10C: nop

;}
RECOMP_FUNC void func_8033D604_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D604: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033D608: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D60C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033D610: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D614: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D618: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033D61C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D620: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D624: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D628: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D62C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D630: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8033D634: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8033D638: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033D63C: beq         $s0, $at, L_8033D664
    if (ctx->r16 == ctx->r1) {
        // 0x8033D640: nop
    
            goto L_8033D664;
    }
    // 0x8033D640: nop

    // 0x8033D644: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033D648: beq         $s0, $at, L_8033D674
    if (ctx->r16 == ctx->r1) {
        // 0x8033D64C: nop
    
            goto L_8033D674;
    }
    // 0x8033D64C: nop

    // 0x8033D650: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033D654: beq         $s0, $at, L_8033D684
    if (ctx->r16 == ctx->r1) {
        // 0x8033D658: nop
    
            goto L_8033D684;
    }
    // 0x8033D658: nop

    // 0x8033D65C: b           L_8033D694
    // 0x8033D660: nop

        goto L_8033D694;
    // 0x8033D660: nop

L_8033D664:
    // 0x8033D664: jal         0x8033CB90
    // 0x8033D668: nop

    func_8033CB90_unk_bin_44(rdram, ctx);
        goto after_0;
    // 0x8033D668: nop

    after_0:
    // 0x8033D66C: b           L_8033D69C
    // 0x8033D670: nop

        goto L_8033D69C;
    // 0x8033D670: nop

L_8033D674:
    // 0x8033D674: jal         0x8033CE4C
    // 0x8033D678: nop

    func_8033CE4C_unk_bin_44(rdram, ctx);
        goto after_1;
    // 0x8033D678: nop

    after_1:
    // 0x8033D67C: b           L_8033D69C
    // 0x8033D680: nop

        goto L_8033D69C;
    // 0x8033D680: nop

L_8033D684:
    // 0x8033D684: jal         0x8033D5D4
    // 0x8033D688: nop

    func_8033D5D4_unk_bin_44(rdram, ctx);
        goto after_2;
    // 0x8033D688: nop

    after_2:
    // 0x8033D68C: b           L_8033D69C
    // 0x8033D690: nop

        goto L_8033D69C;
    // 0x8033D690: nop

L_8033D694:
    // 0x8033D694: b           L_8033D69C
    // 0x8033D698: nop

        goto L_8033D69C;
    // 0x8033D698: nop

L_8033D69C:
    // 0x8033D69C: b           L_8033D6A4
    // 0x8033D6A0: nop

        goto L_8033D6A4;
    // 0x8033D6A0: nop

L_8033D6A4:
    // 0x8033D6A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D6A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033D6AC: jr          $ra
    // 0x8033D6B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033D6B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033D6B4: nop

    // 0x8033D6B8: nop

    // 0x8033D6BC: nop

;}
RECOMP_FUNC void func_8033C110_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C110: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C114: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8033C118: nop

    // 0x8033C11C: bne         $t6, $zero, L_8033C178
    if (ctx->r14 != 0) {
        // 0x8033C120: nop
    
            goto L_8033C178;
    }
    // 0x8033C120: nop

    // 0x8033C124: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033C128: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x8033C12C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C130: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033C134: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033C138: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033C13C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033C140: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033C144: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033C148: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8033C14C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8033C150: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033C154: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033C158: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C15C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033C160: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033C164: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033C168: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033C16C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033C170: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033C174: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8033C178:
    // 0x8033C178: jr          $ra
    // 0x8033C17C: nop

    return;
    // 0x8033C17C: nop

    // 0x8033C180: jr          $ra
    // 0x8033C184: nop

    return;
    // 0x8033C184: nop

;}
RECOMP_FUNC void func_8033CE4C_unk_bin_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CE4C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8033CE50: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8033CE54: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8033CE58: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033CE5C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8033CE60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033CE64: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033CE68: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CE6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CE70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CE74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CE78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CE7C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033CE80: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033CE84: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033CE88: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8033CE8C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033CE90: nop

    // 0x8033CE94: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033CE98: nop

    // 0x8033CE9C: bne         $t1, $zero, L_8033CF3C
    if (ctx->r9 != 0) {
        // 0x8033CEA0: nop
    
            goto L_8033CF3C;
    }
    // 0x8033CEA0: nop

    // 0x8033CEA4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033CEA8: nop

    // 0x8033CEAC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033CEB0: nop

    // 0x8033CEB4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033CEB8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033CEBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033CEC0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033CEC4: nop

    // 0x8033CEC8: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x8033CECC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033CED0: nop

    // 0x8033CED4: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033CED8: nop

    // 0x8033CEDC: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x8033CEE0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033CEE4: nop

    // 0x8033CEE8: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x8033CEEC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033CEF0: nop

    // 0x8033CEF4: lh          $s0, 0xAA($t8)
    ctx->r16 = MEM_H(ctx->r24, 0XAA);
    // 0x8033CEF8: nop

    // 0x8033CEFC: sh          $s0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r16;
    // 0x8033CF00: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033CF04: nop

    // 0x8033CF08: sh          $s0, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r16;
    // 0x8033CF0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CF10: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8033CF14: addiu       $t0, $t0, -0x7798
    ctx->r8 = ADD32(ctx->r8, -0X7798);
    // 0x8033CF18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CF1C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033CF20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CF24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033CF28: jal         0x8001C0EC
    // 0x8033CF2C: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033CF2C: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_0:
    // 0x8033CF30: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033CF34: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8033CF38: sh          $t1, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r9;
L_8033CF3C:
    // 0x8033CF3C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033CF40: nop

    // 0x8033CF44: lh          $t2, 0x108($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X108);
    // 0x8033CF48: nop

    // 0x8033CF4C: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x8033CF50: bne         $at, $zero, L_8033D06C
    if (ctx->r1 != 0) {
        // 0x8033CF54: nop
    
            goto L_8033D06C;
    }
    // 0x8033CF54: nop

    // 0x8033CF58: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033CF5C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033CF60: nop

    // 0x8033CF64: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8033CF68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CF6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CF70: jal         0x8001BBDC
    // 0x8033CF74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033CF74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8033CF78: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033CF7C: nop

    // 0x8033CF80: lh          $t7, 0xB8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB8);
    // 0x8033CF84: nop

    // 0x8033CF88: bne         $t7, $zero, L_8033CFB8
    if (ctx->r15 != 0) {
        // 0x8033CF8C: nop
    
            goto L_8033CFB8;
    }
    // 0x8033CF8C: nop

    // 0x8033CF90: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033CF94: nop

    // 0x8033CF98: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x8033CF9C: lwc1        $f12, 0x20($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X20);
    // 0x8033CFA0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033CFA4: jal         0x80015538
    // 0x8033CFA8: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8033CFA8: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_2:
    // 0x8033CFAC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033CFB0: b           L_8033CFE4
    // 0x8033CFB4: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
        goto L_8033CFE4;
    // 0x8033CFB4: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
L_8033CFB8:
    // 0x8033CFB8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033CFBC: nop

    // 0x8033CFC0: lh          $t3, 0xBA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XBA);
    // 0x8033CFC4: lwc1        $f12, 0x20($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X20);
    // 0x8033CFC8: negu        $t4, $t3
    ctx->r12 = SUB32(0, ctx->r11);
    // 0x8033CFCC: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8033CFD0: jal         0x80015538
    // 0x8033CFD4: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033CFD4: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
    // 0x8033CFD8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033CFDC: nop

    // 0x8033CFE0: swc1        $f0, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f0.u32l;
L_8033CFE4:
    // 0x8033CFE4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033CFE8: nop

    // 0x8033CFEC: lh          $t6, 0xB8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB8);
    // 0x8033CFF0: nop

    // 0x8033CFF4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8033CFF8: sh          $t7, 0xB8($t5)
    MEM_H(0XB8, ctx->r13) = ctx->r15;
    // 0x8033CFFC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033D000: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033D004: lh          $t9, 0xB8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB8);
    // 0x8033D008: nop

    // 0x8033D00C: bne         $t9, $at, L_8033D020
    if (ctx->r25 != ctx->r1) {
        // 0x8033D010: nop
    
            goto L_8033D020;
    }
    // 0x8033D010: nop

    // 0x8033D014: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033D018: nop

    // 0x8033D01C: sh          $zero, 0xB8($t0)
    MEM_H(0XB8, ctx->r8) = 0;
L_8033D020:
    // 0x8033D020: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033D024: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8033D028: sh          $t1, 0xBA($t3)
    MEM_H(0XBA, ctx->r11) = ctx->r9;
    // 0x8033D02C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033D030: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033D034: lh          $t2, 0x108($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X108);
    // 0x8033D038: nop

    // 0x8033D03C: bne         $t2, $at, L_8033D064
    if (ctx->r10 != ctx->r1) {
        // 0x8033D040: nop
    
            goto L_8033D064;
    }
    // 0x8033D040: nop

    // 0x8033D044: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033D048: nop

    // 0x8033D04C: lh          $t7, 0xB6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB6);
    // 0x8033D050: nop

    // 0x8033D054: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8033D058: nop

    // 0x8033D05C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033D060: swc1        $f18, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f18.u32l;
L_8033D064:
    // 0x8033D064: b           L_8033D5B4
    // 0x8033D068: nop

        goto L_8033D5B4;
    // 0x8033D068: nop

L_8033D06C:
    // 0x8033D06C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033D070: nop

    // 0x8033D074: lh          $t8, 0xA6($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XA6);
    // 0x8033D078: nop

    // 0x8033D07C: beq         $t8, $zero, L_8033D43C
    if (ctx->r24 == 0) {
        // 0x8033D080: nop
    
            goto L_8033D43C;
    }
    // 0x8033D080: nop

    // 0x8033D084: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033D088: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033D08C: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x8033D090: nop

    // 0x8033D094: bne         $t0, $at, L_8033D0F0
    if (ctx->r8 != ctx->r1) {
        // 0x8033D098: nop
    
            goto L_8033D0F0;
    }
    // 0x8033D098: nop

    // 0x8033D09C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D0A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D0A4: jal         0x8001B44C
    // 0x8033D0A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x8033D0A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033D0AC: beq         $v0, $zero, L_8033D0E8
    if (ctx->r2 == 0) {
        // 0x8033D0B0: nop
    
            goto L_8033D0E8;
    }
    // 0x8033D0B0: nop

    // 0x8033D0B4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033D0B8: nop

    // 0x8033D0BC: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
    // 0x8033D0C0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033D0C4: nop

    // 0x8033D0C8: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x8033D0CC: nop

    // 0x8033D0D0: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x8033D0D4: sh          $t2, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r10;
    // 0x8033D0D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D0DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D0E0: jal         0x8001BBDC
    // 0x8033D0E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x8033D0E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_8033D0E8:
    // 0x8033D0E8: b           L_8033D434
    // 0x8033D0EC: nop

        goto L_8033D434;
    // 0x8033D0EC: nop

L_8033D0F0:
    // 0x8033D0F0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033D0F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033D0F8: lh          $t6, 0xA8($t7)
    ctx->r14 = MEM_H(ctx->r15, 0XA8);
    // 0x8033D0FC: nop

    // 0x8033D100: bne         $t6, $at, L_8033D180
    if (ctx->r14 != ctx->r1) {
        // 0x8033D104: nop
    
            goto L_8033D180;
    }
    // 0x8033D104: nop

    // 0x8033D108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D10C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D110: jal         0x8001B44C
    // 0x8033D114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x8033D114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033D118: beq         $v0, $zero, L_8033D178
    if (ctx->r2 == 0) {
        // 0x8033D11C: nop
    
            goto L_8033D178;
    }
    // 0x8033D11C: nop

    // 0x8033D120: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033D124: nop

    // 0x8033D128: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x8033D12C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033D130: nop

    // 0x8033D134: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x8033D138: nop

    // 0x8033D13C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033D140: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
    // 0x8033D144: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D148: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8033D14C: addiu       $t1, $t1, -0x7798
    ctx->r9 = ADD32(ctx->r9, -0X7798);
    // 0x8033D150: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D154: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8033D158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D15C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033D160: jal         0x8001C0EC
    // 0x8033D164: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x8033D164: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_7:
    // 0x8033D168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D16C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D170: jal         0x8001BBDC
    // 0x8033D174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x8033D174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_8033D178:
    // 0x8033D178: b           L_8033D434
    // 0x8033D17C: nop

        goto L_8033D434;
    // 0x8033D17C: nop

L_8033D180:
    // 0x8033D180: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033D184: nop

    // 0x8033D188: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x8033D18C: nop

    // 0x8033D190: beq         $t2, $zero, L_8033D1A4
    if (ctx->r10 == 0) {
        // 0x8033D194: nop
    
            goto L_8033D1A4;
    }
    // 0x8033D194: nop

    // 0x8033D198: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033D19C: bne         $t2, $at, L_8033D204
    if (ctx->r10 != ctx->r1) {
        // 0x8033D1A0: nop
    
            goto L_8033D204;
    }
    // 0x8033D1A0: nop

L_8033D1A4:
    // 0x8033D1A4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033D1A8: nop

    // 0x8033D1AC: lh          $t7, 0xAA($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XAA);
    // 0x8033D1B0: nop

    // 0x8033D1B4: bne         $t7, $zero, L_8033D1E4
    if (ctx->r15 != 0) {
        // 0x8033D1B8: nop
    
            goto L_8033D1E4;
    }
    // 0x8033D1B8: nop

    // 0x8033D1BC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033D1C0: nop

    // 0x8033D1C4: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x8033D1C8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033D1CC: nop

    // 0x8033D1D0: lh          $t9, 0xA8($t5)
    ctx->r25 = MEM_H(ctx->r13, 0XA8);
    // 0x8033D1D4: nop

    // 0x8033D1D8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033D1DC: b           L_8033D1FC
    // 0x8033D1E0: sh          $t0, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r8;
        goto L_8033D1FC;
    // 0x8033D1E0: sh          $t0, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r8;
L_8033D1E4:
    // 0x8033D1E4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033D1E8: nop

    // 0x8033D1EC: lh          $t1, 0xAA($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAA);
    // 0x8033D1F0: nop

    // 0x8033D1F4: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x8033D1F8: sh          $t4, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r12;
L_8033D1FC:
    // 0x8033D1FC: b           L_8033D434
    // 0x8033D200: nop

        goto L_8033D434;
    // 0x8033D200: nop

L_8033D204:
    // 0x8033D204: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033D208: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8033D20C: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x8033D210: nop

    // 0x8033D214: bne         $t3, $at, L_8033D434
    if (ctx->r11 != ctx->r1) {
        // 0x8033D218: nop
    
            goto L_8033D434;
    }
    // 0x8033D218: nop

    // 0x8033D21C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033D220: nop

    // 0x8033D224: lh          $t6, 0xAA($t7)
    ctx->r14 = MEM_H(ctx->r15, 0XAA);
    // 0x8033D228: nop

    // 0x8033D22C: slti        $at, $t6, 0x28
    ctx->r1 = SIGNED(ctx->r14) < 0X28 ? 1 : 0;
    // 0x8033D230: beq         $at, $zero, L_8033D3DC
    if (ctx->r1 == 0) {
        // 0x8033D234: nop
    
            goto L_8033D3DC;
    }
    // 0x8033D234: nop

    // 0x8033D238: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x8033D23C: bne         $at, $zero, L_8033D3DC
    if (ctx->r1 != 0) {
        // 0x8033D240: nop
    
            goto L_8033D3DC;
    }
    // 0x8033D240: nop

    // 0x8033D244: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033D248: nop

    // 0x8033D24C: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x8033D250: nop

    // 0x8033D254: andi        $t5, $t0, 0xF
    ctx->r13 = ctx->r8 & 0XF;
    // 0x8033D258: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8033D25C: nop

    // 0x8033D260: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033D264: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x8033D268: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8033D26C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033D270: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8033D274: nop

    // 0x8033D278: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8033D27C: nop

    // 0x8033D280: bc1t        L_8033D2C0
    if (c1cs) {
        // 0x8033D284: nop
    
            goto L_8033D2C0;
    }
    // 0x8033D284: nop

    // 0x8033D288: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033D28C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033D290: nop

    // 0x8033D294: c.eq.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl == ctx->f16.fl;
    // 0x8033D298: nop

    // 0x8033D29C: bc1t        L_8033D2C0
    if (c1cs) {
        // 0x8033D2A0: nop
    
            goto L_8033D2C0;
    }
    // 0x8033D2A0: nop

    // 0x8033D2A4: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8033D2A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033D2AC: nop

    // 0x8033D2B0: c.eq.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl == ctx->f18.fl;
    // 0x8033D2B4: nop

    // 0x8033D2B8: bc1f        L_8033D3DC
    if (!c1cs) {
        // 0x8033D2BC: nop
    
            goto L_8033D3DC;
    }
    // 0x8033D2BC: nop

L_8033D2C0:
    // 0x8033D2C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D2C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D2C8: lui         $a1, 0x44ED
    ctx->r5 = S32(0X44ED << 16);
    // 0x8033D2CC: jal         0x8002A1FC
    // 0x8033D2D0: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x8033D2D0: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_9:
    // 0x8033D2D4: beq         $v0, $zero, L_8033D3DC
    if (ctx->r2 == 0) {
        // 0x8033D2D8: nop
    
            goto L_8033D3DC;
    }
    // 0x8033D2D8: nop

    // 0x8033D2DC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033D2E0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8033D2E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033D2E8: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033D2EC: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x8033D2F0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033D2F4: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x8033D2F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033D2FC: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033D300: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033D304: addiu       $a1, $a1, 0x4168
    ctx->r5 = ADD32(ctx->r5, 0X4168);
    // 0x8033D308: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033D30C: jal         0x80027464
    // 0x8033D310: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x8033D310: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x8033D314: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8033D318: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8033D31C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D320: beq         $t4, $at, L_8033D3DC
    if (ctx->r12 == ctx->r1) {
        // 0x8033D324: nop
    
            goto L_8033D3DC;
    }
    // 0x8033D324: nop

    // 0x8033D328: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8033D32C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D330: addiu       $a3, $a3, -0x7768
    ctx->r7 = ADD32(ctx->r7, -0X7768);
    // 0x8033D334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D338: jal         0x8001ABF4
    // 0x8033D33C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x8033D33C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_11:
    // 0x8033D340: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8033D344: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8033D348: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x8033D34C: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x8033D350: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8033D354: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033D358: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033D35C: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x8033D360: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033D364: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D368: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x8033D36C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033D370: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D374: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033D378: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x8033D37C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D380: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8033D384: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033D388: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D38C: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x8033D390: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x8033D394: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D398: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x8033D39C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8033D3A0: nop

    // 0x8033D3A4: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x8033D3A8: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x8033D3AC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033D3B0: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x8033D3B4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033D3B8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033D3BC: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x8033D3C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D3C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D3C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D3CC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x8033D3D0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033D3D4: jal         0x800175F0
    // 0x8033D3D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_12;
    // 0x8033D3D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
L_8033D3DC:
    // 0x8033D3DC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033D3E0: nop

    // 0x8033D3E4: lh          $t4, 0xAA($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XAA);
    // 0x8033D3E8: nop

    // 0x8033D3EC: bne         $t4, $zero, L_8033D41C
    if (ctx->r12 != 0) {
        // 0x8033D3F0: nop
    
            goto L_8033D41C;
    }
    // 0x8033D3F0: nop

    // 0x8033D3F4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033D3F8: nop

    // 0x8033D3FC: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x8033D400: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033D404: nop

    // 0x8033D408: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x8033D40C: nop

    // 0x8033D410: addiu       $t7, $t3, 0x1
    ctx->r15 = ADD32(ctx->r11, 0X1);
    // 0x8033D414: b           L_8033D434
    // 0x8033D418: sh          $t7, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r15;
        goto L_8033D434;
    // 0x8033D418: sh          $t7, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r15;
L_8033D41C:
    // 0x8033D41C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033D420: nop

    // 0x8033D424: lh          $t9, 0xAA($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XAA);
    // 0x8033D428: nop

    // 0x8033D42C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8033D430: sh          $t0, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r8;
L_8033D434:
    // 0x8033D434: b           L_8033D5B4
    // 0x8033D438: nop

        goto L_8033D5B4;
    // 0x8033D438: nop

L_8033D43C:
    // 0x8033D43C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033D440: nop

    // 0x8033D444: lh          $t1, 0xA8($t5)
    ctx->r9 = MEM_H(ctx->r13, 0XA8);
    // 0x8033D448: nop

    // 0x8033D44C: beq         $t1, $zero, L_8033D460
    if (ctx->r9 == 0) {
        // 0x8033D450: nop
    
            goto L_8033D460;
    }
    // 0x8033D450: nop

    // 0x8033D454: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033D458: bne         $t1, $at, L_8033D47C
    if (ctx->r9 != ctx->r1) {
        // 0x8033D45C: nop
    
            goto L_8033D47C;
    }
    // 0x8033D45C: nop

L_8033D460:
    // 0x8033D460: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033D464: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033D468: sh          $t4, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r12;
    // 0x8033D46C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033D470: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x8033D474: b           L_8033D5B4
    // 0x8033D478: sh          $t3, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r11;
        goto L_8033D5B4;
    // 0x8033D478: sh          $t3, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r11;
L_8033D47C:
    // 0x8033D47C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033D480: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033D484: lh          $t9, 0xA8($t2)
    ctx->r25 = MEM_H(ctx->r10, 0XA8);
    // 0x8033D488: nop

    // 0x8033D48C: bne         $t9, $at, L_8033D4D8
    if (ctx->r25 != ctx->r1) {
        // 0x8033D490: nop
    
            goto L_8033D4D8;
    }
    // 0x8033D490: nop

    // 0x8033D494: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D498: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8033D49C: addiu       $t0, $t0, -0x7798
    ctx->r8 = ADD32(ctx->r8, -0X7798);
    // 0x8033D4A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D4A4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033D4A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D4AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033D4B0: jal         0x8001C0EC
    // 0x8033D4B4: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_13;
    // 0x8033D4B4: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_13:
    // 0x8033D4B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D4BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D4C0: jal         0x8001BBDC
    // 0x8033D4C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_14;
    // 0x8033D4C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x8033D4C8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033D4CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8033D4D0: b           L_8033D5B4
    // 0x8033D4D4: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
        goto L_8033D5B4;
    // 0x8033D4D4: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
L_8033D4D8:
    // 0x8033D4D8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033D4DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033D4E0: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x8033D4E4: nop

    // 0x8033D4E8: bne         $t4, $at, L_8033D534
    if (ctx->r12 != ctx->r1) {
        // 0x8033D4EC: nop
    
            goto L_8033D534;
    }
    // 0x8033D4EC: nop

    // 0x8033D4F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D4F4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8033D4F8: addiu       $t8, $t8, -0x7798
    ctx->r24 = ADD32(ctx->r24, -0X7798);
    // 0x8033D4FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D500: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8033D504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D508: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033D50C: jal         0x8001C0EC
    // 0x8033D510: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_15;
    // 0x8033D510: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_15:
    // 0x8033D514: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D51C: jal         0x8001BBDC
    // 0x8033D520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_16;
    // 0x8033D520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x8033D524: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033D528: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033D52C: b           L_8033D5B4
    // 0x8033D530: sh          $t3, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r11;
        goto L_8033D5B4;
    // 0x8033D530: sh          $t3, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r11;
L_8033D534:
    // 0x8033D534: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033D538: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8033D53C: lh          $t9, 0xA8($t2)
    ctx->r25 = MEM_H(ctx->r10, 0XA8);
    // 0x8033D540: nop

    // 0x8033D544: bne         $t9, $at, L_8033D590
    if (ctx->r25 != ctx->r1) {
        // 0x8033D548: nop
    
            goto L_8033D590;
    }
    // 0x8033D548: nop

    // 0x8033D54C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033D550: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033D554: sh          $t0, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r8;
    // 0x8033D558: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033D55C: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x8033D560: sh          $t5, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r13;
    // 0x8033D564: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033D568: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D56C: lh          $t8, 0x108($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X108);
    // 0x8033D570: nop

    // 0x8033D574: bne         $t8, $at, L_8033D588
    if (ctx->r24 != ctx->r1) {
        // 0x8033D578: nop
    
            goto L_8033D588;
    }
    // 0x8033D578: nop

    // 0x8033D57C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033D580: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033D584: sh          $t3, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r11;
L_8033D588:
    // 0x8033D588: b           L_8033D5B4
    // 0x8033D58C: nop

        goto L_8033D5B4;
    // 0x8033D58C: nop

L_8033D590:
    // 0x8033D590: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033D594: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8033D598: lh          $t9, 0xA8($t2)
    ctx->r25 = MEM_H(ctx->r10, 0XA8);
    // 0x8033D59C: nop

    // 0x8033D5A0: bne         $t9, $at, L_8033D5B4
    if (ctx->r25 != ctx->r1) {
        // 0x8033D5A4: nop
    
            goto L_8033D5B4;
    }
    // 0x8033D5A4: nop

    // 0x8033D5A8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033D5AC: nop

    // 0x8033D5B0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033D5B4:
    // 0x8033D5B4: b           L_8033D5BC
    // 0x8033D5B8: nop

        goto L_8033D5BC;
    // 0x8033D5B8: nop

L_8033D5BC:
    // 0x8033D5BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D5C0: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8033D5C4: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033D5C8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8033D5CC: jr          $ra
    // 0x8033D5D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8033D5D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8033857C_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033857C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338580: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338584: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80338588: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033858C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338590: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338594: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338598: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033859C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803385A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803385A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803385A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803385AC: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x803385B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803385B4: bne         $t8, $at, L_80338648
    if (ctx->r24 != ctx->r1) {
        // 0x803385B8: nop
    
            goto L_80338648;
    }
    // 0x803385B8: nop

    // 0x803385BC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803385C0: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x803385C4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x803385C8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803385CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803385D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803385D4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803385D8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803385DC: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x803385E0: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x803385E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803385E8: beq         $s0, $at, L_80338610
    if (ctx->r16 == ctx->r1) {
        // 0x803385EC: nop
    
            goto L_80338610;
    }
    // 0x803385EC: nop

    // 0x803385F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803385F4: beq         $s0, $at, L_80338620
    if (ctx->r16 == ctx->r1) {
        // 0x803385F8: nop
    
            goto L_80338620;
    }
    // 0x803385F8: nop

    // 0x803385FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80338600: beq         $s0, $at, L_80338630
    if (ctx->r16 == ctx->r1) {
        // 0x80338604: nop
    
            goto L_80338630;
    }
    // 0x80338604: nop

    // 0x80338608: b           L_80338640
    // 0x8033860C: nop

        goto L_80338640;
    // 0x8033860C: nop

L_80338610:
    // 0x80338610: jal         0x80338150
    // 0x80338614: nop

    func_80338150_unk_bin_45(rdram, ctx);
        goto after_0;
    // 0x80338614: nop

    after_0:
    // 0x80338618: b           L_80338648
    // 0x8033861C: nop

        goto L_80338648;
    // 0x8033861C: nop

L_80338620:
    // 0x80338620: jal         0x803381FC
    // 0x80338624: nop

    func_803381FC_unk_bin_45(rdram, ctx);
        goto after_1;
    // 0x80338624: nop

    after_1:
    // 0x80338628: b           L_80338648
    // 0x8033862C: nop

        goto L_80338648;
    // 0x8033862C: nop

L_80338630:
    // 0x80338630: jal         0x8033836C
    // 0x80338634: nop

    func_8033836C_unk_bin_45(rdram, ctx);
        goto after_2;
    // 0x80338634: nop

    after_2:
    // 0x80338638: b           L_80338648
    // 0x8033863C: nop

        goto L_80338648;
    // 0x8033863C: nop

L_80338640:
    // 0x80338640: b           L_80338648
    // 0x80338644: nop

        goto L_80338648;
    // 0x80338644: nop

L_80338648:
    // 0x80338648: b           L_80338650
    // 0x8033864C: nop

        goto L_80338650;
    // 0x8033864C: nop

L_80338650:
    // 0x80338650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338654: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80338658: jr          $ra
    // 0x8033865C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033865C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80338920_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338920: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338924: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338928: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033892C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338930: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338934: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338938: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033893C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338940: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338944: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338948: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033894C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338950: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338954: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338958: nop

    // 0x8033895C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338960: nop

    // 0x80338964: bne         $t1, $zero, L_803389B4
    if (ctx->r9 != 0) {
        // 0x80338968: nop
    
            goto L_803389B4;
    }
    // 0x80338968: nop

    // 0x8033896C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338970: nop

    // 0x80338974: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338978: nop

    // 0x8033897C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338980: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338984: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338988: nop

    // 0x8033898C: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x80338990: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338994: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80338998: addiu       $t6, $t6, -0x7264
    ctx->r14 = ADD32(ctx->r14, -0X7264);
    // 0x8033899C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803389A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803389A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803389AC: jal         0x8001C0EC
    // 0x803389B0: addiu       $a3, $zero, 0x18D
    ctx->r7 = ADD32(0, 0X18D);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803389B0: addiu       $a3, $zero, 0x18D
    ctx->r7 = ADD32(0, 0X18D);
    after_0:
L_803389B4:
    // 0x803389B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389BC: jal         0x8001B44C
    // 0x803389C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x803389C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803389C4: beq         $v0, $zero, L_803389DC
    if (ctx->r2 == 0) {
        // 0x803389C8: nop
    
            goto L_803389DC;
    }
    // 0x803389C8: nop

    // 0x803389CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389D4: jal         0x8002B0E4
    // 0x803389D8: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x803389D8: nop

    after_2:
L_803389DC:
    // 0x803389DC: b           L_803389E4
    // 0x803389E0: nop

        goto L_803389E4;
    // 0x803389E0: nop

L_803389E4:
    // 0x803389E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803389E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803389EC: jr          $ra
    // 0x803389F0: nop

    return;
    // 0x803389F0: nop

;}
RECOMP_FUNC void func_803389F4_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803389F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803389F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803389FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80338A00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338A04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338A08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338A0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338A10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338A14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338A18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338A1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338A20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338A24: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x80338A28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80338A2C: bne         $t8, $at, L_80338AA4
    if (ctx->r24 != ctx->r1) {
        // 0x80338A30: nop
    
            goto L_80338AA4;
    }
    // 0x80338A30: nop

    // 0x80338A34: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80338A38: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80338A3C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80338A40: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80338A44: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338A48: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338A4C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338A50: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80338A54: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80338A58: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80338A5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338A60: beq         $s0, $at, L_80338A7C
    if (ctx->r16 == ctx->r1) {
        // 0x80338A64: nop
    
            goto L_80338A7C;
    }
    // 0x80338A64: nop

    // 0x80338A68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80338A6C: beq         $s0, $at, L_80338A8C
    if (ctx->r16 == ctx->r1) {
        // 0x80338A70: nop
    
            goto L_80338A8C;
    }
    // 0x80338A70: nop

    // 0x80338A74: b           L_80338A9C
    // 0x80338A78: nop

        goto L_80338A9C;
    // 0x80338A78: nop

L_80338A7C:
    // 0x80338A7C: jal         0x803387BC
    // 0x80338A80: nop

    func_803387BC_unk_bin_45(rdram, ctx);
        goto after_0;
    // 0x80338A80: nop

    after_0:
    // 0x80338A84: b           L_80338AA4
    // 0x80338A88: nop

        goto L_80338AA4;
    // 0x80338A88: nop

L_80338A8C:
    // 0x80338A8C: jal         0x80338920
    // 0x80338A90: nop

    func_80338920_unk_bin_45(rdram, ctx);
        goto after_1;
    // 0x80338A90: nop

    after_1:
    // 0x80338A94: b           L_80338AA4
    // 0x80338A98: nop

        goto L_80338AA4;
    // 0x80338A98: nop

L_80338A9C:
    // 0x80338A9C: b           L_80338AA4
    // 0x80338AA0: nop

        goto L_80338AA4;
    // 0x80338AA0: nop

L_80338AA4:
    // 0x80338AA4: b           L_80338AAC
    // 0x80338AA8: nop

        goto L_80338AAC;
    // 0x80338AA8: nop

L_80338AAC:
    // 0x80338AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338AB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80338AB4: jr          $ra
    // 0x80338AB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80338AB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803387BC_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803387BC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803387C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803387C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803387C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803387CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803387D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803387D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803387D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803387DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803387E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803387E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803387E8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803387EC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x803387F0: nop

    // 0x803387F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803387F8: nop

    // 0x803387FC: bne         $t1, $zero, L_80338828
    if (ctx->r9 != 0) {
        // 0x80338800: nop
    
            goto L_80338828;
    }
    // 0x80338800: nop

    // 0x80338804: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80338808: nop

    // 0x8033880C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338810: nop

    // 0x80338814: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338818: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033881C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80338820: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x80338824: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
L_80338828:
    // 0x80338828: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8033882C: nop

    // 0x80338830: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80338834: nop

    // 0x80338838: bne         $t8, $zero, L_803388AC
    if (ctx->r24 != 0) {
        // 0x8033883C: nop
    
            goto L_803388AC;
    }
    // 0x8033883C: nop

    // 0x80338840: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80338844: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80338848: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033884C: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80338850: nop

    // 0x80338854: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80338858: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
    // 0x8033885C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80338860: nop

    // 0x80338864: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80338868: nop

    // 0x8033886C: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x80338870: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
    // 0x80338874: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80338878: nop

    // 0x8033887C: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x80338880: nop

    // 0x80338884: bne         $t2, $zero, L_803388A4
    if (ctx->r10 != 0) {
        // 0x80338888: nop
    
            goto L_803388A4;
    }
    // 0x80338888: nop

    // 0x8033888C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80338890: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80338894: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80338898: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8033889C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x803388A0: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
L_803388A4:
    // 0x803388A4: b           L_80338910
    // 0x803388A8: nop

        goto L_80338910;
    // 0x803388A8: nop

L_803388AC:
    // 0x803388AC: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x803388B0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x803388B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803388B8: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803388BC: nop

    // 0x803388C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803388C4: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
    // 0x803388C8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803388CC: nop

    // 0x803388D0: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x803388D4: nop

    // 0x803388D8: addiu       $t0, $t3, -0x1
    ctx->r8 = ADD32(ctx->r11, -0X1);
    // 0x803388DC: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
    // 0x803388E0: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x803388E4: nop

    // 0x803388E8: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x803388EC: nop

    // 0x803388F0: bne         $t2, $zero, L_80338910
    if (ctx->r10 != 0) {
        // 0x803388F4: nop
    
            goto L_80338910;
    }
    // 0x803388F4: nop

    // 0x803388F8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x803388FC: nop

    // 0x80338900: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x80338904: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80338908: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x8033890C: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
L_80338910:
    // 0x80338910: b           L_80338918
    // 0x80338914: nop

        goto L_80338918;
    // 0x80338914: nop

L_80338918:
    // 0x80338918: jr          $ra
    // 0x8033891C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033891C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80338150_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338150: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80338154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80338158: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033815C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338160: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338164: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338168: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033816C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338170: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338174: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338178: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033817C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338180: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80338184: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80338188: nop

    // 0x8033818C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338190: nop

    // 0x80338194: bne         $t1, $zero, L_803381B4
    if (ctx->r9 != 0) {
        // 0x80338198: nop
    
            goto L_803381B4;
    }
    // 0x80338198: nop

    // 0x8033819C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803381A0: nop

    // 0x803381A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803381A8: nop

    // 0x803381AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803381B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
L_803381B4:
    // 0x803381B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803381B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803381BC: jal         0x8002A2EC
    // 0x803381C0: lui         $a1, 0x44F0
    ctx->r5 = S32(0X44F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x803381C0: lui         $a1, 0x44F0
    ctx->r5 = S32(0X44F0 << 16);
    after_0:
    // 0x803381C4: beq         $v0, $zero, L_803381E4
    if (ctx->r2 == 0) {
        // 0x803381C8: nop
    
            goto L_803381E4;
    }
    // 0x803381C8: nop

    // 0x803381CC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803381D0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803381D4: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x803381D8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803381DC: nop

    // 0x803381E0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803381E4:
    // 0x803381E4: b           L_803381EC
    // 0x803381E8: nop

        goto L_803381EC;
    // 0x803381E8: nop

L_803381EC:
    // 0x803381EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803381F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803381F4: jr          $ra
    // 0x803381F8: nop

    return;
    // 0x803381F8: nop

;}
RECOMP_FUNC void func_80338000_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338008: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033800C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80338010: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80338014: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80338018: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033801C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80338020: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80338024: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80338028: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033802C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80338030: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80338034: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80338038: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033803C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80338040: addiu       $a1, $a1, 0x4798
    ctx->r5 = ADD32(ctx->r5, 0X4798);
    // 0x80338044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80338048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033804C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80338050: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80338054: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80338058: jal         0x80027464
    // 0x8033805C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033805C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80338060: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80338064: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338068: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033806C: beq         $t1, $at, L_80338128
    if (ctx->r9 == ctx->r1) {
        // 0x80338070: nop
    
            goto L_80338128;
    }
    // 0x80338070: nop

    // 0x80338074: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80338078: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x8033807C: nop

    // 0x80338080: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80338084: nop

    // 0x80338088: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8033808C: nop

    // 0x80338090: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80338094: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80338098: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8033809C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803380A0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803380A4: nop

    // 0x803380A8: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x803380AC: nop

    // 0x803380B0: bc1f        L_803380F0
    if (!c1cs) {
        // 0x803380B4: nop
    
            goto L_803380F0;
    }
    // 0x803380B4: nop

    // 0x803380B8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x803380BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803380C0: nop

    // 0x803380C4: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x803380C8: nop

    // 0x803380CC: bc1f        L_803380F0
    if (!c1cs) {
        // 0x803380D0: nop
    
            goto L_803380F0;
    }
    // 0x803380D0: nop

    // 0x803380D4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x803380D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803380DC: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803380E0: nop

    // 0x803380E4: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x803380E8: b           L_80338100
    // 0x803380EC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
        goto L_80338100;
    // 0x803380EC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_803380F0:
    // 0x803380F0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803380F4: lwc1        $f10, -0x7120($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7120);
    // 0x803380F8: nop

    // 0x803380FC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
L_80338100:
    // 0x80338100: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80338104: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80338108: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033810C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338110: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80338114: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338118: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033811C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338120: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80338124: swc1        $f8, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f8.u32l;
L_80338128:
    // 0x80338128: b           L_80338130
    // 0x8033812C: nop

        goto L_80338130;
    // 0x8033812C: nop

L_80338130:
    // 0x80338130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338138: jr          $ra
    // 0x8033813C: nop

    return;
    // 0x8033813C: nop

;}
RECOMP_FUNC void func_80338140_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338140: jr          $ra
    // 0x80338144: nop

    return;
    // 0x80338144: nop

    // 0x80338148: jr          $ra
    // 0x8033814C: nop

    return;
    // 0x8033814C: nop

;}
RECOMP_FUNC void func_80338ABC_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338ABC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338AC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338AC4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80338AC8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80338ACC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80338AD0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80338AD4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80338AD8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80338ADC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80338AE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80338AE4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80338AE8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80338AEC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80338AF0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80338AF4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80338AF8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80338AFC: addiu       $a1, $a1, 0x35C8
    ctx->r5 = ADD32(ctx->r5, 0X35C8);
    // 0x80338B00: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80338B04: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80338B08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80338B0C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80338B10: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80338B14: jal         0x80027464
    // 0x80338B18: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80338B18: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80338B1C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80338B20: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338B24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80338B28: beq         $t1, $at, L_80338BA0
    if (ctx->r9 == ctx->r1) {
        // 0x80338B2C: nop
    
            goto L_80338BA0;
    }
    // 0x80338B2C: nop

    // 0x80338B30: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80338B34: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80338B38: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80338B3C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338B40: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80338B44: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80338B48: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338B4C: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80338B50: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80338B54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338B58: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80338B5C: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x80338B60: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80338B64: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80338B68: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80338B6C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338B70: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338B74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80338B78: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338B7C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80338B80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338B84: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80338B88: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
    // 0x80338B8C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80338B90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80338B94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80338B98: jal         0x80019448
    // 0x80338B9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80338B9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_80338BA0:
    // 0x80338BA0: b           L_80338BA8
    // 0x80338BA4: nop

        goto L_80338BA8;
    // 0x80338BA4: nop

L_80338BA8:
    // 0x80338BA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338BB0: jr          $ra
    // 0x80338BB4: nop

    return;
    // 0x80338BB4: nop

;}
RECOMP_FUNC void func_80338BB8_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338BB8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80338BBC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80338BC0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80338BC4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80338BC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80338BCC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338BD0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338BD4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338BD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338BDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338BE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338BE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338BE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338BEC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338BF0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338BF4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80338BF8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80338BFC: nop

    // 0x80338C00: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338C04: nop

    // 0x80338C08: bne         $t1, $zero, L_80338C10
    if (ctx->r9 != 0) {
        // 0x80338C0C: nop
    
            goto L_80338C10;
    }
    // 0x80338C0C: nop

L_80338C10:
    // 0x80338C10: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80338C14: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80338C18: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x80338C1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80338C20: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80338C24: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80338C28: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80338C2C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80338C30: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x80338C34: nop

    // 0x80338C38: bc1f        L_80338D28
    if (!c1cs) {
        // 0x80338C3C: nop
    
            goto L_80338D28;
    }
    // 0x80338C3C: nop

    // 0x80338C40: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80338C44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80338C48: nop

    // 0x80338C4C: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80338C50: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80338C54: nop

    // 0x80338C58: bc1f        L_80338D28
    if (!c1cs) {
        // 0x80338C5C: nop
    
            goto L_80338D28;
    }
    // 0x80338C5C: nop

    // 0x80338C60: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80338C64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80338C68: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80338C6C: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80338C70: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80338C74: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x80338C78: nop

    // 0x80338C7C: bc1f        L_80338D28
    if (!c1cs) {
        // 0x80338C80: nop
    
            goto L_80338D28;
    }
    // 0x80338C80: nop

    // 0x80338C84: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80338C88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80338C8C: nop

    // 0x80338C90: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80338C94: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x80338C98: nop

    // 0x80338C9C: bc1f        L_80338D28
    if (!c1cs) {
        // 0x80338CA0: nop
    
            goto L_80338D28;
    }
    // 0x80338CA0: nop

    // 0x80338CA4: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80338CA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80338CAC: lwc1        $f16, 0x0($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80338CB0: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80338CB4: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80338CB8: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80338CBC: nop

    // 0x80338CC0: bc1f        L_80338D28
    if (!c1cs) {
        // 0x80338CC4: nop
    
            goto L_80338D28;
    }
    // 0x80338CC4: nop

    // 0x80338CC8: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80338CCC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80338CD0: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80338CD4: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80338CD8: sub.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80338CDC: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80338CE0: nop

    // 0x80338CE4: bc1f        L_80338D28
    if (!c1cs) {
        // 0x80338CE8: nop
    
            goto L_80338D28;
    }
    // 0x80338CE8: nop

    // 0x80338CEC: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x80338CF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80338CF4: sb          $t4, -0x1C48($at)
    MEM_B(-0X1C48, ctx->r1) = ctx->r12;
    // 0x80338CF8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80338CFC: nop

    // 0x80338D00: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80338D04: nop

    // 0x80338D08: bne         $t6, $zero, L_80338D1C
    if (ctx->r14 != 0) {
        // 0x80338D0C: nop
    
            goto L_80338D1C;
    }
    // 0x80338D0C: nop

    // 0x80338D10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80338D14: b           L_80338D28
    // 0x80338D18: sb          $zero, -0x1C50($at)
    MEM_B(-0X1C50, ctx->r1) = 0;
        goto L_80338D28;
    // 0x80338D18: sb          $zero, -0x1C50($at)
    MEM_B(-0X1C50, ctx->r1) = 0;
L_80338D1C:
    // 0x80338D1C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80338D20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80338D24: sb          $t7, -0x1C50($at)
    MEM_B(-0X1C50, ctx->r1) = ctx->r15;
L_80338D28:
    // 0x80338D28: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80338D2C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80338D30: lui         $at, 0x44F0
    ctx->r1 = S32(0X44F0 << 16);
    // 0x80338D34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80338D38: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80338D3C: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80338D40: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80338D44: add.s       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80338D48: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80338D4C: nop

    // 0x80338D50: bc1f        L_80338EB4
    if (!c1cs) {
        // 0x80338D54: nop
    
            goto L_80338EB4;
    }
    // 0x80338D54: nop

    // 0x80338D58: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80338D5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80338D60: nop

    // 0x80338D64: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80338D68: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x80338D6C: nop

    // 0x80338D70: bc1f        L_80338EB4
    if (!c1cs) {
        // 0x80338D74: nop
    
            goto L_80338EB4;
    }
    // 0x80338D74: nop

    // 0x80338D78: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80338D7C: nop

    // 0x80338D80: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80338D84: nop

    // 0x80338D88: bne         $t1, $zero, L_80338E9C
    if (ctx->r9 != 0) {
        // 0x80338D8C: nop
    
            goto L_80338E9C;
    }
    // 0x80338D8C: nop

    // 0x80338D90: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80338D94: nop

    // 0x80338D98: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80338D9C: nop

    // 0x80338DA0: bne         $t3, $zero, L_80338E20
    if (ctx->r11 != 0) {
        // 0x80338DA4: nop
    
            goto L_80338E20;
    }
    // 0x80338DA4: nop

    // 0x80338DA8: jal         0x80014E80
    // 0x80338DAC: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80338DAC: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    after_0:
    // 0x80338DB0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80338DB4: jal         0x80014E80
    // 0x80338DB8: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80338DB8: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    after_1:
    // 0x80338DBC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80338DC0: jal         0x80014E80
    // 0x80338DC4: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80338DC4: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    after_2:
    // 0x80338DC8: mtc1        $s2, $f18
    ctx->f18.u32l = ctx->r18;
    // 0x80338DCC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80338DD0: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80338DD4: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80338DD8: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x80338DDC: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80338DE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80338DE4: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80338DE8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80338DEC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80338DF0: lwc1        $f18, 0x4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80338DF4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80338DF8: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80338DFC: addiu       $a0, $zero, 0x2BF
    ctx->r4 = ADD32(0, 0X2BF);
    // 0x80338E00: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80338E04: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80338E08: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80338E0C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80338E10: jal         0x80081468
    // 0x80338E14: nop

    func_80081468(rdram, ctx);
        goto after_3;
    // 0x80338E14: nop

    after_3:
    // 0x80338E18: b           L_80338E90
    // 0x80338E1C: nop

        goto L_80338E90;
    // 0x80338E1C: nop

L_80338E20:
    // 0x80338E20: jal         0x80014E80
    // 0x80338E24: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x80338E24: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    after_4:
    // 0x80338E28: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80338E2C: jal         0x80014E80
    // 0x80338E30: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x80338E30: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    after_5:
    // 0x80338E34: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80338E38: jal         0x80014E80
    // 0x80338E3C: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    Math_Random(rdram, ctx);
        goto after_6;
    // 0x80338E3C: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    after_6:
    // 0x80338E40: mtc1        $s2, $f18
    ctx->f18.u32l = ctx->r18;
    // 0x80338E44: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80338E48: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80338E4C: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80338E50: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x80338E54: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80338E58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80338E5C: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80338E60: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80338E64: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80338E68: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80338E6C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80338E70: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80338E74: addiu       $a0, $zero, 0x2C0
    ctx->r4 = ADD32(0, 0X2C0);
    // 0x80338E78: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80338E7C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80338E80: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80338E84: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80338E88: jal         0x80081468
    // 0x80338E8C: nop

    func_80081468(rdram, ctx);
        goto after_7;
    // 0x80338E8C: nop

    after_7:
L_80338E90:
    // 0x80338E90: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80338E94: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80338E98: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
L_80338E9C:
    // 0x80338E9C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80338EA0: nop

    // 0x80338EA4: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80338EA8: nop

    // 0x80338EAC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80338EB0: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
L_80338EB4:
    // 0x80338EB4: b           L_80338EBC
    // 0x80338EB8: nop

        goto L_80338EBC;
    // 0x80338EB8: nop

L_80338EBC:
    // 0x80338EBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80338EC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80338EC4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80338EC8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80338ECC: jr          $ra
    // 0x80338ED0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80338ED0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80338ED4: nop

    // 0x80338ED8: nop

    // 0x80338EDC: nop

;}
RECOMP_FUNC void func_803386DC_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803386DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803386E0: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x803386E4: nop

    // 0x803386E8: bne         $t6, $zero, L_80338744
    if (ctx->r14 != 0) {
        // 0x803386EC: nop
    
            goto L_80338744;
    }
    // 0x803386EC: nop

    // 0x803386F0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x803386F4: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x803386F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803386FC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80338700: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338704: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338708: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033870C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80338710: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80338714: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80338718: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033871C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80338720: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338724: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80338728: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033872C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80338730: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80338734: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80338738: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033873C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80338740: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_80338744:
    // 0x80338744: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80338748: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x8033874C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80338750: bne         $t2, $at, L_803387AC
    if (ctx->r10 != ctx->r1) {
        // 0x80338754: nop
    
            goto L_803387AC;
    }
    // 0x80338754: nop

    // 0x80338758: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8033875C: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80338760: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338764: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80338768: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033876C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338770: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338774: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80338778: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033877C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80338780: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338784: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338788: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033878C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338790: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338794: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338798: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033879C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803387A0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803387A4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803387A8: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
L_803387AC:
    // 0x803387AC: jr          $ra
    // 0x803387B0: nop

    return;
    // 0x803387B0: nop

    // 0x803387B4: jr          $ra
    // 0x803387B8: nop

    return;
    // 0x803387B8: nop

;}
RECOMP_FUNC void func_803381FC_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803381FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80338200: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80338204: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80338208: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033820C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338210: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338214: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338218: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033821C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338220: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338224: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338228: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033822C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338230: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338234: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80338238: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033823C: nop

    // 0x80338240: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338244: nop

    // 0x80338248: bne         $t1, $zero, L_803382B0
    if (ctx->r9 != 0) {
        // 0x8033824C: nop
    
            goto L_803382B0;
    }
    // 0x8033824C: nop

    // 0x80338250: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80338254: nop

    // 0x80338258: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033825C: nop

    // 0x80338260: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338264: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338268: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033826C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338270: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338274: lw          $a2, 0xD4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0XD4);
    // 0x80338278: jal         0x80029EF8
    // 0x8033827C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x8033827C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80338280: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80338284: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80338288: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033828C: nop

    // 0x80338290: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80338294: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338298: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033829C: jal         0x8002A46C
    // 0x803382A0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x803382A0: nop

    after_1:
    // 0x803382A4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803382A8: nop

    // 0x803382AC: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
L_803382B0:
    // 0x803382B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803382B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803382B8: jal         0x8002A46C
    // 0x803382BC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_2;
    // 0x803382BC: nop

    after_2:
    // 0x803382C0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803382C4: nop

    // 0x803382C8: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x803382CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803382D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803382D4: jal         0x80029C40
    // 0x803382D8: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x803382D8: nop

    after_3:
    // 0x803382DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803382E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803382E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803382E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803382EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803382F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803382F4: jal         0x80029F58
    // 0x803382F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x803382F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x803382FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338300: bne         $v0, $at, L_80338350
    if (ctx->r2 != ctx->r1) {
        // 0x80338304: nop
    
            goto L_80338350;
    }
    // 0x80338304: nop

    // 0x80338308: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033830C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80338310: nop

    // 0x80338314: swc1        $f8, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f8.u32l;
    // 0x80338318: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033831C: nop

    // 0x80338320: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80338324: nop

    // 0x80338328: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x8033832C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80338330: nop

    // 0x80338334: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x80338338: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033833C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80338340: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80338344: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80338348: nop

    // 0x8033834C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80338350:
    // 0x80338350: b           L_80338358
    // 0x80338354: nop

        goto L_80338358;
    // 0x80338354: nop

L_80338358:
    // 0x80338358: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033835C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80338360: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80338364: jr          $ra
    // 0x80338368: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80338368: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033836C_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033836C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338370: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338374: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338378: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033837C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338380: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338384: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338388: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033838C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338390: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338394: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338398: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033839C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803383A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803383A4: nop

    // 0x803383A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803383AC: nop

    // 0x803383B0: bne         $t1, $zero, L_8033841C
    if (ctx->r9 != 0) {
        // 0x803383B4: nop
    
            goto L_8033841C;
    }
    // 0x803383B4: nop

    // 0x803383B8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803383BC: nop

    // 0x803383C0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803383C4: nop

    // 0x803383C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803383CC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803383D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803383D4: nop

    // 0x803383D8: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x803383DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803383E0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803383E4: addiu       $t6, $t6, -0x7268
    ctx->r14 = ADD32(ctx->r14, -0X7268);
    // 0x803383E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803383EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803383F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803383F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803383F8: jal         0x8001C0EC
    // 0x803383FC: addiu       $a3, $zero, 0x18C
    ctx->r7 = ADD32(0, 0X18C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803383FC: addiu       $a3, $zero, 0x18C
    ctx->r7 = ADD32(0, 0X18C);
    after_0:
    // 0x80338400: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338404: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033840C: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x80338410: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80338414: jal         0x800175F0
    // 0x80338418: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80338418: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8033841C:
    // 0x8033841C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80338420: nop

    // 0x80338424: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80338428: nop

    // 0x8033842C: bne         $t8, $zero, L_80338478
    if (ctx->r24 != 0) {
        // 0x80338430: nop
    
            goto L_80338478;
    }
    // 0x80338430: nop

    // 0x80338434: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80338438: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033843C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338440: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80338444: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80338448: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033844C: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80338450: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80338454: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x80338458: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8033845C: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80338460: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80338464: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    // 0x80338468: jal         0x8002AE38
    // 0x8033846C: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8002AE38(rdram, ctx);
        goto after_2;
    // 0x8033846C: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x80338470: b           L_80338524
    // 0x80338474: nop

        goto L_80338524;
    // 0x80338474: nop

L_80338478:
    // 0x80338478: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033847C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80338480: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x80338484: nop

    // 0x80338488: bne         $t3, $at, L_803384D4
    if (ctx->r11 != ctx->r1) {
        // 0x8033848C: nop
    
            goto L_803384D4;
    }
    // 0x8033848C: nop

    // 0x80338490: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80338494: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80338498: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033849C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803384A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803384A4: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x803384A8: lwc1        $f18, 0x4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4);
    // 0x803384AC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803384B0: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x803384B4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803384B8: lwc1        $f12, 0x0($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803384BC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803384C0: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    // 0x803384C4: jal         0x8002AE38
    // 0x803384C8: add.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f4.fl;
    func_8002AE38(rdram, ctx);
        goto after_3;
    // 0x803384C8: add.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f4.fl;
    after_3:
    // 0x803384CC: b           L_80338524
    // 0x803384D0: nop

        goto L_80338524;
    // 0x803384D0: nop

L_803384D4:
    // 0x803384D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803384D8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x803384DC: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x803384E0: nop

    // 0x803384E4: bne         $t6, $at, L_80338524
    if (ctx->r14 != ctx->r1) {
        // 0x803384E8: nop
    
            goto L_80338524;
    }
    // 0x803384E8: nop

    // 0x803384EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803384F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803384F4: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x803384F8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803384FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80338500: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80338504: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80338508: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8033850C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80338510: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80338514: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80338518: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    // 0x8033851C: jal         0x8002AE38
    // 0x80338520: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
    func_8002AE38(rdram, ctx);
        goto after_4;
    // 0x80338520: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
    after_4:
L_80338524:
    // 0x80338524: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338528: nop

    // 0x8033852C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80338530: nop

    // 0x80338534: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80338538: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x8033853C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338540: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338544: jal         0x8001B44C
    // 0x80338548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x80338548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8033854C: beq         $v0, $zero, L_80338564
    if (ctx->r2 == 0) {
        // 0x80338550: nop
    
            goto L_80338564;
    }
    // 0x80338550: nop

    // 0x80338554: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338558: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033855C: jal         0x8002B114
    // 0x80338560: nop

    func_8002B114(rdram, ctx);
        goto after_6;
    // 0x80338560: nop

    after_6:
L_80338564:
    // 0x80338564: b           L_8033856C
    // 0x80338568: nop

        goto L_8033856C;
    // 0x80338568: nop

L_8033856C:
    // 0x8033856C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338570: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338574: jr          $ra
    // 0x80338578: nop

    return;
    // 0x80338578: nop

;}
RECOMP_FUNC void func_80338660_unk_bin_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338660: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338664: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338668: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033866C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80338670: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80338674: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80338678: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033867C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80338680: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80338684: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80338688: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033868C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80338690: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80338694: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80338698: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033869C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803386A0: addiu       $a1, $a1, 0x47A4
    ctx->r5 = ADD32(ctx->r5, 0X47A4);
    // 0x803386A4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803386A8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803386AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803386B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803386B4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803386B8: jal         0x80027464
    // 0x803386BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803386BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803386C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803386C4: b           L_803386CC
    // 0x803386C8: nop

        goto L_803386CC;
    // 0x803386C8: nop

L_803386CC:
    // 0x803386CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803386D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803386D4: jr          $ra
    // 0x803386D8: nop

    return;
    // 0x803386D8: nop

;}
RECOMP_FUNC void func_803314FC_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803314FC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80331500: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331504: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331508: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033150C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331510: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331514: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331518: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033151C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331520: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331524: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331528: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033152C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80331530: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331534: nop

    // 0x80331538: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033153C: nop

    // 0x80331540: bne         $t1, $zero, L_803316C4
    if (ctx->r9 != 0) {
        // 0x80331544: nop
    
            goto L_803316C4;
    }
    // 0x80331544: nop

    // 0x80331548: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033154C: nop

    // 0x80331550: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331554: nop

    // 0x80331558: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033155C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331560: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331564: nop

    // 0x80331568: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033156C: nop

    // 0x80331570: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331574: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80331578: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x8033157C: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x80331580: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80331584: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331588: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033158C: lwc1        $f9, 0x1F30($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1F30);
    // 0x80331590: lwc1        $f8, 0x1F34($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1F34);
    // 0x80331594: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331598: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033159C: jal         0x80034970
    // 0x803315A0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x803315A0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x803315A4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803315A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803315AC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803315B0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x803315B4: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803315B8: nop

    // 0x803315BC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803315C0: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x803315C4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803315C8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803315CC: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803315D0: lwc1        $f17, 0x1F38($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1F38);
    // 0x803315D4: lwc1        $f16, 0x1F3C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1F3C);
    // 0x803315D8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803315DC: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x803315E0: jal         0x80036570
    // 0x803315E4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x803315E4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_1:
    // 0x803315E8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803315EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803315F0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803315F4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803315F8: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803315FC: nop

    // 0x80331600: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80331604: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80331608: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033160C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331610: addiu       $a3, $a3, -0x6468
    ctx->r7 = ADD32(ctx->r7, -0X6468);
    // 0x80331614: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331618: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8033161C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331620: jal         0x8001ABF4
    // 0x80331624: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80331624: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80331628: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033162C: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x80331630: lwc1        $f16, 0x4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80331634: lwc1        $f18, 0x28($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80331638: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033163C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80331640: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331644: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331648: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033164C: lwc1        $f16, 0x1C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80331650: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80331654: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80331658: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8033165C: addiu       $a1, $a1, 0x47D4
    ctx->r5 = ADD32(ctx->r5, 0X47D4);
    // 0x80331660: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331664: jal         0x80027464
    // 0x80331668: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80331668: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x8033166C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80331670: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80331674: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331678: beq         $t2, $at, L_803316C4
    if (ctx->r10 == ctx->r1) {
        // 0x8033167C: nop
    
            goto L_803316C4;
    }
    // 0x8033167C: nop

    // 0x80331680: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80331684: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331688: addiu       $a3, $a3, -0x63A4
    ctx->r7 = ADD32(ctx->r7, -0X63A4);
    // 0x8033168C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331690: jal         0x8001ABF4
    // 0x80331694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80331694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80331698: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8033169C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803316A0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803316A4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803316A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803316AC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803316B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803316B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803316B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803316BC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803316C0: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
L_803316C4:
    // 0x803316C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316CC: jal         0x8002A8B4
    // 0x803316D0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x803316D0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_5:
    // 0x803316D4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803316D8: nop

    // 0x803316DC: lwc1        $f18, 0x3C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803316E0: nop

    // 0x803316E4: swc1        $f18, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f18.u32l;
    // 0x803316E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316F0: jal         0x80029C40
    // 0x803316F4: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x803316F4: nop

    after_6:
    // 0x803316F8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803316FC: nop

    // 0x80331700: lwc1        $f4, 0x28($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80331704: nop

    // 0x80331708: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8033170C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331710: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331714: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331718: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033171C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331720: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80331724: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331728: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033172C: jal         0x80029018
    // 0x80331730: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x80331730: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x80331734: beq         $v0, $zero, L_80331760
    if (ctx->r2 == 0) {
        // 0x80331738: nop
    
            goto L_80331760;
    }
    // 0x80331738: nop

    // 0x8033173C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331740: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331744: nop

    // 0x80331748: swc1        $f10, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f10.u32l;
    // 0x8033174C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80331750: nop

    // 0x80331754: lwc1        $f16, 0x2C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80331758: nop

    // 0x8033175C: swc1        $f16, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f16.u32l;
L_80331760:
    // 0x80331760: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331764: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331768: nop

    // 0x8033176C: swc1        $f18, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f18.u32l;
    // 0x80331770: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331774: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331778: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033177C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331780: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80331784: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80331788: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033178C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80331790: jal         0x800295C0
    // 0x80331794: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x80331794: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80331798: beq         $v0, $zero, L_803317B0
    if (ctx->r2 == 0) {
        // 0x8033179C: nop
    
            goto L_803317B0;
    }
    // 0x8033179C: nop

    // 0x803317A0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803317A4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803317A8: b           L_803317C0
    // 0x803317AC: swc1        $f8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f8.u32l;
        goto L_803317C0;
    // 0x803317AC: swc1        $f8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f8.u32l;
L_803317B0:
    // 0x803317B0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803317B4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803317B8: nop

    // 0x803317BC: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
L_803317C0:
    // 0x803317C0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803317C4: nop

    // 0x803317C8: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803317CC: lwc1        $f18, 0xD4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0XD4);
    // 0x803317D0: nop

    // 0x803317D4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803317D8: swc1        $f4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f4.u32l;
    // 0x803317DC: jal         0x80330000
    // 0x803317E0: nop

    func_80330000_unk_bin_46(rdram, ctx);
        goto after_9;
    // 0x803317E0: nop

    after_9:
    // 0x803317E4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803317E8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x803317EC: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x803317F0: nop

    // 0x803317F4: bne         $t7, $at, L_8033193C
    if (ctx->r15 != ctx->r1) {
        // 0x803317F8: nop
    
            goto L_8033193C;
    }
    // 0x803317F8: nop

    // 0x803317FC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80331800: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331804: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331808: lwc1        $f11, 0x1F40($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X1F40);
    // 0x8033180C: lwc1        $f10, 0x1F44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1F44);
    // 0x80331810: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80331814: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80331818: jal         0x80034970
    // 0x8033181C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_10;
    // 0x8033181C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_10:
    // 0x80331820: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80331824: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331828: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8033182C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80331830: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80331834: nop

    // 0x80331838: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033183C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80331840: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331844: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331848: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033184C: lwc1        $f19, 0x1F48($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1F48);
    // 0x80331850: lwc1        $f18, 0x1F4C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1F4C);
    // 0x80331854: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80331858: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8033185C: jal         0x80036570
    // 0x80331860: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_11;
    // 0x80331860: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_11:
    // 0x80331864: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80331868: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033186C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80331870: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80331874: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80331878: nop

    // 0x8033187C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80331880: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80331884: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331888: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x8033188C: lwc1        $f18, 0x4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80331890: lwc1        $f4, 0x28($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80331894: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331898: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033189C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803318A0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803318A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803318A8: lwc1        $f18, 0x1C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803318AC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x803318B0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803318B4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x803318B8: addiu       $a1, $a1, 0x47D4
    ctx->r5 = ADD32(ctx->r5, 0X47D4);
    // 0x803318BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803318C0: jal         0x80027464
    // 0x803318C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_12;
    // 0x803318C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_12:
    // 0x803318C8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x803318CC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x803318D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803318D4: beq         $t4, $at, L_80331920
    if (ctx->r12 == ctx->r1) {
        // 0x803318D8: nop
    
            goto L_80331920;
    }
    // 0x803318D8: nop

    // 0x803318DC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803318E0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803318E4: addiu       $a3, $a3, -0x63A4
    ctx->r7 = ADD32(ctx->r7, -0X63A4);
    // 0x803318E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803318EC: jal         0x8001ABF4
    // 0x803318F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_13;
    // 0x803318F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x803318F4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x803318F8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803318FC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331900: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331904: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331908: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033190C: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80331910: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331914: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331918: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033191C: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
L_80331920:
    // 0x80331920: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80331924: nop

    // 0x80331928: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x8033192C: nop

    // 0x80331930: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80331934: b           L_80331AB4
    // 0x80331938: sh          $t9, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r25;
        goto L_80331AB4;
    // 0x80331938: sh          $t9, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r25;
L_8033193C:
    // 0x8033193C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331940: nop

    // 0x80331944: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80331948: nop

    // 0x8033194C: bne         $t1, $zero, L_80331A9C
    if (ctx->r9 != 0) {
        // 0x80331950: nop
    
            goto L_80331A9C;
    }
    // 0x80331950: nop

    // 0x80331954: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331958: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033195C: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80331960: lwc1        $f9, 0x1F50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1F50);
    // 0x80331964: lwc1        $f8, 0x1F54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1F54);
    // 0x80331968: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033196C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80331970: jal         0x80034970
    // 0x80331974: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_14;
    // 0x80331974: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_14:
    // 0x80331978: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8033197C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331980: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80331984: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80331988: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033198C: nop

    // 0x80331990: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80331994: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80331998: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8033199C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803319A0: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x803319A4: lwc1        $f17, 0x1F58($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1F58);
    // 0x803319A8: lwc1        $f16, 0x1F5C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1F5C);
    // 0x803319AC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803319B0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x803319B4: jal         0x80036570
    // 0x803319B8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_15;
    // 0x803319B8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_15:
    // 0x803319BC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803319C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803319C4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803319C8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803319CC: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x803319D0: nop

    // 0x803319D4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803319D8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x803319DC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803319E0: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x803319E4: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x803319E8: lwc1        $f18, 0x28($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X28);
    // 0x803319EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803319F0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803319F4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803319F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803319FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331A00: lwc1        $f16, 0x1C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80331A04: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80331A08: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80331A0C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80331A10: addiu       $a1, $a1, 0x47D4
    ctx->r5 = ADD32(ctx->r5, 0X47D4);
    // 0x80331A14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331A18: jal         0x80027464
    // 0x80331A1C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_16;
    // 0x80331A1C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_16:
    // 0x80331A20: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80331A24: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80331A28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331A2C: beq         $t8, $at, L_80331A78
    if (ctx->r24 == ctx->r1) {
        // 0x80331A30: nop
    
            goto L_80331A78;
    }
    // 0x80331A30: nop

    // 0x80331A34: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80331A38: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331A3C: addiu       $a3, $a3, -0x63A4
    ctx->r7 = ADD32(ctx->r7, -0X63A4);
    // 0x80331A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331A44: jal         0x8001ABF4
    // 0x80331A48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_17;
    // 0x80331A48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x80331A4C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80331A50: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80331A54: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80331A58: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80331A5C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331A60: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80331A64: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80331A68: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331A6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A70: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331A74: sh          $t9, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r25;
L_80331A78:
    // 0x80331A78: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331A7C: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x80331A80: sh          $t1, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r9;
    // 0x80331A84: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331A88: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80331A8C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80331A90: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80331A94: b           L_80331AB4
    // 0x80331A98: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_80331AB4;
    // 0x80331A98: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80331A9C:
    // 0x80331A9C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331AA0: nop

    // 0x80331AA4: lh          $t8, 0xA8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XA8);
    // 0x80331AA8: nop

    // 0x80331AAC: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80331AB0: sh          $t7, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r15;
L_80331AB4:
    // 0x80331AB4: b           L_80331ABC
    // 0x80331AB8: nop

        goto L_80331ABC;
    // 0x80331AB8: nop

L_80331ABC:
    // 0x80331ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331AC0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80331AC4: jr          $ra
    // 0x80331AC8: nop

    return;
    // 0x80331AC8: nop

;}
RECOMP_FUNC void func_80331E4C_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331E54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331E58: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331E5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331E60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331E64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331E6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331E74: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331E78: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331E7C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331E80: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331E84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331E88: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80331E8C: nop

    // 0x80331E90: bne         $t1, $at, L_80331EB0
    if (ctx->r9 != ctx->r1) {
        // 0x80331E94: nop
    
            goto L_80331EB0;
    }
    // 0x80331E94: nop

    // 0x80331E98: b           L_80331EA0
    // 0x80331E9C: nop

        goto L_80331EA0;
    // 0x80331E9C: nop

L_80331EA0:
    // 0x80331EA0: jal         0x80331D08
    // 0x80331EA4: nop

    func_80331D08_unk_bin_46(rdram, ctx);
        goto after_0;
    // 0x80331EA4: nop

    after_0:
    // 0x80331EA8: b           L_80331EB8
    // 0x80331EAC: nop

        goto L_80331EB8;
    // 0x80331EAC: nop

L_80331EB0:
    // 0x80331EB0: b           L_80331EB8
    // 0x80331EB4: nop

        goto L_80331EB8;
    // 0x80331EB4: nop

L_80331EB8:
    // 0x80331EB8: b           L_80331EC0
    // 0x80331EBC: nop

        goto L_80331EC0;
    // 0x80331EBC: nop

L_80331EC0:
    // 0x80331EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331EC8: jr          $ra
    // 0x80331ECC: nop

    return;
    // 0x80331ECC: nop

;}
RECOMP_FUNC void func_80330344_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330344: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80330348: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033034C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330350: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330354: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330358: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033035C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80330360: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80330364: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330368: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033036C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80330370: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330374: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330378: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033037C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330380: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80330384: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330388: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033038C: addiu       $a1, $a1, 0x47B0
    ctx->r5 = ADD32(ctx->r5, 0X47B0);
    // 0x80330390: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330394: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80330398: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033039C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803303A0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803303A4: jal         0x80027464
    // 0x803303A8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803303A8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803303AC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x803303B0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x803303B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803303B8: beq         $t1, $at, L_803308A0
    if (ctx->r9 == ctx->r1) {
        // 0x803303BC: nop
    
            goto L_803308A0;
    }
    // 0x803303BC: nop

    // 0x803303C0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x803303C4: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x803303C8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803303CC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803303D0: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x803303D4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803303D8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803303DC: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x803303E0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803303E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303E8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803303EC: sh          $t3, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r11;
    // 0x803303F0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x803303F4: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x803303F8: nop

    // 0x803303FC: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x80330400: nop

    // 0x80330404: bne         $t8, $zero, L_80330504
    if (ctx->r24 != 0) {
        // 0x80330408: nop
    
            goto L_80330504;
    }
    // 0x80330408: nop

    // 0x8033040C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330410: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330414: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80330418: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8033041C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80330420: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330424: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330428: jal         0x800295C0
    // 0x8033042C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x8033042C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80330430: beq         $v0, $zero, L_80330464
    if (ctx->r2 == 0) {
        // 0x80330434: nop
    
            goto L_80330464;
    }
    // 0x80330434: nop

    // 0x80330438: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033043C: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330440: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80330444: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330448: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033044C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330450: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330454: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330458: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033045C: b           L_8033048C
    // 0x80330460: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_8033048C;
    // 0x80330460: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_80330464:
    // 0x80330464: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80330468: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8033046C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330470: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330474: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330478: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033047C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330480: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330484: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330488: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
L_8033048C:
    // 0x8033048C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80330490: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330494: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80330498: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033049C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803304A0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803304A4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803304A8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803304AC: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x803304B0: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x803304B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803304B8: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803304BC: nop

    // 0x803304C0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803304C4: swc1        $f4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f4.u32l;
    // 0x803304C8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803304CC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803304D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803304D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803304D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803304DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803304E0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803304E4: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803304E8: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x803304EC: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x803304F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803304F4: lwc1        $f6, 0xD4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x803304F8: nop

    // 0x803304FC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330500: swc1        $f10, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f10.u32l;
L_80330504:
    // 0x80330504: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80330508: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033050C: addiu       $a3, $a3, -0x6468
    ctx->r7 = ADD32(ctx->r7, -0X6468);
    // 0x80330510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330514: jal         0x8001ABF4
    // 0x80330518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033051C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330520: addiu       $a3, $a3, -0x6468
    ctx->r7 = ADD32(ctx->r7, -0X6468);
    // 0x80330524: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80330528: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8033052C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330530: jal         0x8001ABF4
    // 0x80330534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80330534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80330538: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033053C: lwc1        $f12, 0x1EF0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1EF0);
    // 0x80330540: jal         0x80034970
    // 0x80330544: nop

    sinf_game(rdram, ctx);
        goto after_4;
    // 0x80330544: nop

    after_4:
    // 0x80330548: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033054C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330550: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330554: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330558: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033055C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330560: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330564: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330568: lwc1        $f16, 0x4150($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x8033056C: lui         $at, 0x4341
    ctx->r1 = S32(0X4341 << 16);
    // 0x80330570: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330574: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330578: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x8033057C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80330580: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80330584: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330588: lwc1        $f12, 0x1EF4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1EF4);
    // 0x8033058C: jal         0x80036570
    // 0x80330590: nop

    cosf_game(rdram, ctx);
        goto after_5;
    // 0x80330590: nop

    after_5:
    // 0x80330594: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80330598: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033059C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803305A0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803305A4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803305A8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803305AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803305B0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803305B4: lwc1        $f8, 0x4158($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x803305B8: lui         $at, 0x4341
    ctx->r1 = S32(0X4341 << 16);
    // 0x803305BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803305C0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803305C4: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x803305C8: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x803305CC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x803305D0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x803305D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803305D8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x803305DC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803305E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803305E4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803305E8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803305EC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803305F0: lwc1        $f4, 0x4154($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x803305F4: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x803305F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803305FC: nop

    // 0x80330600: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330604: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80330608: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033060C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330610: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330614: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330618: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033061C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330620: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330624: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330628: lwc1        $f18, 0x416C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033062C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80330630: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80330634: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80330638: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8033063C: addiu       $a1, $a1, 0x47BC
    ctx->r5 = ADD32(ctx->r5, 0X47BC);
    // 0x80330640: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330644: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80330648: jal         0x80027464
    // 0x8033064C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x8033064C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80330650: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80330654: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80330658: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033065C: beq         $t9, $at, L_803306EC
    if (ctx->r25 == ctx->r1) {
        // 0x80330660: nop
    
            goto L_803306EC;
    }
    // 0x80330660: nop

    // 0x80330664: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80330668: addiu       $t6, $t6, -0x6414
    ctx->r14 = ADD32(ctx->r14, -0X6414);
    // 0x8033066C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80330670: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80330674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033067C: jal         0x8001C0EC
    // 0x80330680: addiu       $a3, $zero, 0x192
    ctx->r7 = ADD32(0, 0X192);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x80330680: addiu       $a3, $zero, 0x192
    ctx->r7 = ADD32(0, 0X192);
    after_7:
    // 0x80330684: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80330688: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033068C: addiu       $a3, $a3, -0x63EC
    ctx->r7 = ADD32(ctx->r7, -0X63EC);
    // 0x80330690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330694: jal         0x8001ABF4
    // 0x80330698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x80330698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8033069C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x803306A0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803306A4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803306A8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803306AC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803306B0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803306B4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803306B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306BC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803306C0: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
    // 0x803306C4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x803306C8: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x803306CC: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x803306D0: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803306D4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803306D8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803306DC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803306E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306E4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803306E8: sh          $t4, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r12;
L_803306EC:
    // 0x803306EC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803306F0: lwc1        $f12, 0x1EF8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1EF8);
    // 0x803306F4: jal         0x80034970
    // 0x803306F8: nop

    sinf_game(rdram, ctx);
        goto after_9;
    // 0x803306F8: nop

    after_9:
    // 0x803306FC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80330700: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330704: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330708: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033070C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330710: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330714: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330718: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033071C: lwc1        $f16, 0x4150($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80330720: lui         $at, 0x4341
    ctx->r1 = S32(0X4341 << 16);
    // 0x80330724: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330728: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8033072C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80330730: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80330734: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x80330738: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033073C: lwc1        $f12, 0x1EFC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1EFC);
    // 0x80330740: jal         0x80036570
    // 0x80330744: nop

    cosf_game(rdram, ctx);
        goto after_10;
    // 0x80330744: nop

    after_10:
    // 0x80330748: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033074C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330750: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80330754: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330758: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033075C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330760: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330764: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330768: lwc1        $f8, 0x4158($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x8033076C: lui         $at, 0x4341
    ctx->r1 = S32(0X4341 << 16);
    // 0x80330770: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330774: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330778: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x8033077C: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80330780: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80330784: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80330788: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033078C: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80330790: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330794: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330798: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x8033079C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803307A0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803307A4: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x803307A8: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x803307AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803307B0: nop

    // 0x803307B4: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x803307B8: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x803307BC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x803307C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307C4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803307C8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803307CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803307D0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803307D4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803307D8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803307DC: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803307E0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803307E4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803307E8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x803307EC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x803307F0: addiu       $a1, $a1, 0x47C8
    ctx->r5 = ADD32(ctx->r5, 0X47C8);
    // 0x803307F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803307F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x803307FC: jal         0x80027464
    // 0x80330800: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x80330800: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x80330804: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80330808: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8033080C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330810: beq         $t4, $at, L_803308A0
    if (ctx->r12 == ctx->r1) {
        // 0x80330814: nop
    
            goto L_803308A0;
    }
    // 0x80330814: nop

    // 0x80330818: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8033081C: addiu       $t5, $t5, -0x6414
    ctx->r13 = ADD32(ctx->r13, -0X6414);
    // 0x80330820: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80330824: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80330828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033082C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330830: jal         0x8001C0EC
    // 0x80330834: addiu       $a3, $zero, 0x192
    ctx->r7 = ADD32(0, 0X192);
    func_8001C0EC(rdram, ctx);
        goto after_12;
    // 0x80330834: addiu       $a3, $zero, 0x192
    ctx->r7 = ADD32(0, 0X192);
    after_12:
    // 0x80330838: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8033083C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330840: addiu       $a3, $a3, -0x63EC
    ctx->r7 = ADD32(ctx->r7, -0X63EC);
    // 0x80330844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330848: jal         0x8001ABF4
    // 0x8033084C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_13;
    // 0x8033084C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x80330850: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80330854: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80330858: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033085C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330860: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330864: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330868: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033086C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330870: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330874: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x80330878: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033087C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80330880: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80330884: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330888: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033088C: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330890: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330894: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330898: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033089C: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
L_803308A0:
    // 0x803308A0: b           L_803308A8
    // 0x803308A4: nop

        goto L_803308A8;
    // 0x803308A4: nop

L_803308A8:
    // 0x803308A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803308AC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803308B0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803308B4: jr          $ra
    // 0x803308B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803308B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80330AF8_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330AF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330AFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330B00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80330B04: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330B08: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330B0C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330B10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330B14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B20: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B24: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330B28: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330B2C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330B30: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B34: nop

    // 0x80330B38: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330B3C: nop

    // 0x80330B40: bne         $t1, $zero, L_80330BD4
    if (ctx->r9 != 0) {
        // 0x80330B44: nop
    
            goto L_80330BD4;
    }
    // 0x80330B44: nop

    // 0x80330B48: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B4C: nop

    // 0x80330B50: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330B54: nop

    // 0x80330B58: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330B5C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330B60: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B64: nop

    // 0x80330B68: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330B6C: nop

    // 0x80330B70: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330B74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B78: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330B7C: addiu       $t7, $t7, -0x64C8
    ctx->r15 = ADD32(ctx->r15, -0X64C8);
    // 0x80330B80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B84: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330B88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330B8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330B90: jal         0x8001C0EC
    // 0x80330B94: addiu       $a3, $zero, 0x191
    ctx->r7 = ADD32(0, 0X191);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330B94: addiu       $a3, $zero, 0x191
    ctx->r7 = ADD32(0, 0X191);
    after_0:
    // 0x80330B98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BA0: jal         0x8001BBDC
    // 0x80330BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80330BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330BA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330BAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330BB0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BB4: nop

    // 0x80330BB8: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x80330BBC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BC0: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80330BC4: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x80330BC8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BCC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80330BD0: sh          $t1, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r9;
L_80330BD4:
    // 0x80330BD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BD8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330BDC: addiu       $a3, $a3, -0x6468
    ctx->r7 = ADD32(ctx->r7, -0X6468);
    // 0x80330BE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BE4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80330BE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330BEC: jal         0x8001ABF4
    // 0x80330BF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330BF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330BF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BFC: jal         0x8002A8B4
    // 0x80330C00: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80330C00: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80330C04: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C08: nop

    // 0x80330C0C: lwc1        $f6, 0x3C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80330C10: nop

    // 0x80330C14: swc1        $f6, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f6.u32l;
    // 0x80330C18: jal         0x80330000
    // 0x80330C1C: nop

    func_80330000_unk_bin_46(rdram, ctx);
        goto after_4;
    // 0x80330C1C: nop

    after_4:
    // 0x80330C20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C28: jal         0x8001B4AC
    // 0x80330C2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80330C2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80330C30: beq         $v0, $zero, L_80330D20
    if (ctx->r2 == 0) {
        // 0x80330C34: nop
    
            goto L_80330D20;
    }
    // 0x80330C34: nop

    // 0x80330C38: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C3C: nop

    // 0x80330C40: lh          $t6, 0xAA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAA);
    // 0x80330C44: nop

    // 0x80330C48: bne         $t6, $zero, L_80330D08
    if (ctx->r14 != 0) {
        // 0x80330C4C: nop
    
            goto L_80330D08;
    }
    // 0x80330C4C: nop

    // 0x80330C50: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C54: nop

    // 0x80330C58: lh          $s0, 0xBE($t5)
    ctx->r16 = MEM_H(ctx->r13, 0XBE);
    // 0x80330C5C: nop

    // 0x80330C60: beq         $s0, $zero, L_80330C88
    if (ctx->r16 == 0) {
        // 0x80330C64: nop
    
            goto L_80330C88;
    }
    // 0x80330C64: nop

    // 0x80330C68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330C6C: beq         $s0, $at, L_80330CC0
    if (ctx->r16 == ctx->r1) {
        // 0x80330C70: nop
    
            goto L_80330CC0;
    }
    // 0x80330C70: nop

    // 0x80330C74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330C78: beq         $s0, $at, L_80330CC0
    if (ctx->r16 == ctx->r1) {
        // 0x80330C7C: nop
    
            goto L_80330CC0;
    }
    // 0x80330C7C: nop

    // 0x80330C80: b           L_80330CF8
    // 0x80330C84: nop

        goto L_80330CF8;
    // 0x80330C84: nop

L_80330C88:
    // 0x80330C88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C90: jal         0x8002A2EC
    // 0x80330C94: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_6;
    // 0x80330C94: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_6:
    // 0x80330C98: beq         $v0, $zero, L_80330CB8
    if (ctx->r2 == 0) {
        // 0x80330C9C: nop
    
            goto L_80330CB8;
    }
    // 0x80330C9C: nop

    // 0x80330CA0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CA4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80330CA8: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80330CAC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CB0: nop

    // 0x80330CB4: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80330CB8:
    // 0x80330CB8: b           L_80330CF8
    // 0x80330CBC: nop

        goto L_80330CF8;
    // 0x80330CBC: nop

L_80330CC0:
    // 0x80330CC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CC8: jal         0x8002A2EC
    // 0x80330CCC: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x80330CCC: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_7:
    // 0x80330CD0: beq         $v0, $zero, L_80330CF0
    if (ctx->r2 == 0) {
        // 0x80330CD4: nop
    
            goto L_80330CF0;
    }
    // 0x80330CD4: nop

    // 0x80330CD8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CDC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80330CE0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80330CE4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CE8: nop

    // 0x80330CEC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80330CF0:
    // 0x80330CF0: b           L_80330CF8
    // 0x80330CF4: nop

        goto L_80330CF8;
    // 0x80330CF4: nop

L_80330CF8:
    // 0x80330CF8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CFC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80330D00: b           L_80330D20
    // 0x80330D04: sh          $t4, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r12;
        goto L_80330D20;
    // 0x80330D04: sh          $t4, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r12;
L_80330D08:
    // 0x80330D08: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D0C: nop

    // 0x80330D10: lh          $t5, 0xAA($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAA);
    // 0x80330D14: nop

    // 0x80330D18: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x80330D1C: sh          $t7, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r15;
L_80330D20:
    // 0x80330D20: b           L_80330D28
    // 0x80330D24: nop

        goto L_80330D28;
    // 0x80330D24: nop

L_80330D28:
    // 0x80330D28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330D2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80330D30: jr          $ra
    // 0x80330D34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330D34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331248_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331248: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033124C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331250: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331254: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331258: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033125C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331260: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331264: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033126C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331270: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331274: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331278: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033127C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331280: nop

    // 0x80331284: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331288: nop

    // 0x8033128C: bne         $t1, $zero, L_803312D4
    if (ctx->r9 != 0) {
        // 0x80331290: nop
    
            goto L_803312D4;
    }
    // 0x80331290: nop

    // 0x80331294: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331298: nop

    // 0x8033129C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803312A0: nop

    // 0x803312A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803312A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803312AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803312B0: nop

    // 0x803312B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803312B8: nop

    // 0x803312BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803312C0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x803312C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803312C8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803312CC: nop

    // 0x803312D0: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
L_803312D4:
    // 0x803312D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312D8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803312DC: addiu       $a3, $a3, -0x6468
    ctx->r7 = ADD32(ctx->r7, -0X6468);
    // 0x803312E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312E4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x803312E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803312EC: jal         0x8001ABF4
    // 0x803312F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x803312F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803312F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312FC: jal         0x8002A8B4
    // 0x80331300: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331300: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331304: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331308: nop

    // 0x8033130C: lwc1        $f6, 0x3C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331310: nop

    // 0x80331314: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
    // 0x80331318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033131C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331320: jal         0x80029C40
    // 0x80331324: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80331324: nop

    after_2:
    // 0x80331328: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033132C: nop

    // 0x80331330: lwc1        $f8, 0x28($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80331334: nop

    // 0x80331338: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8033133C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331340: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331344: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331348: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033134C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331350: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80331354: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331358: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033135C: jal         0x80029018
    // 0x80331360: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x80331360: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80331364: beq         $v0, $zero, L_80331390
    if (ctx->r2 == 0) {
        // 0x80331368: nop
    
            goto L_80331390;
    }
    // 0x80331368: nop

    // 0x8033136C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331370: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331374: nop

    // 0x80331378: swc1        $f18, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f18.u32l;
    // 0x8033137C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331380: nop

    // 0x80331384: lwc1        $f4, 0x2C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80331388: nop

    // 0x8033138C: swc1        $f4, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f4.u32l;
L_80331390:
    // 0x80331390: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331394: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331398: nop

    // 0x8033139C: swc1        $f6, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f6.u32l;
    // 0x803313A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803313A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803313A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313B0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x803313B4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x803313B8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803313BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803313C0: jal         0x800295C0
    // 0x803313C4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x803313C4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x803313C8: beq         $v0, $zero, L_803313E0
    if (ctx->r2 == 0) {
        // 0x803313CC: nop
    
            goto L_803313E0;
    }
    // 0x803313CC: nop

    // 0x803313D0: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803313D4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803313D8: b           L_803313F0
    // 0x803313DC: swc1        $f16, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f16.u32l;
        goto L_803313F0;
    // 0x803313DC: swc1        $f16, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f16.u32l;
L_803313E0:
    // 0x803313E0: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803313E4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803313E8: nop

    // 0x803313EC: swc1        $f18, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f18.u32l;
L_803313F0:
    // 0x803313F0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803313F4: nop

    // 0x803313F8: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x803313FC: lwc1        $f6, 0xD4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x80331400: nop

    // 0x80331404: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331408: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x8033140C: jal         0x80330000
    // 0x80331410: nop

    func_80330000_unk_bin_46(rdram, ctx);
        goto after_5;
    // 0x80331410: nop

    after_5:
    // 0x80331414: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331418: nop

    // 0x8033141C: lh          $t7, 0xAA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAA);
    // 0x80331420: nop

    // 0x80331424: bne         $t7, $zero, L_803314CC
    if (ctx->r15 != 0) {
        // 0x80331428: nop
    
            goto L_803314CC;
    }
    // 0x80331428: nop

    // 0x8033142C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331430: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331434: jal         0x8002A2EC
    // 0x80331438: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_6;
    // 0x80331438: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_6:
    // 0x8033143C: beq         $v0, $zero, L_8033145C
    if (ctx->r2 == 0) {
        // 0x80331440: nop
    
            goto L_8033145C;
    }
    // 0x80331440: nop

    // 0x80331444: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331448: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8033144C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331450: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331454: b           L_803314C4
    // 0x80331458: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_803314C4;
    // 0x80331458: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033145C:
    // 0x8033145C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331460: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331464: jal         0x8002A2EC
    // 0x80331468: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x80331468: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_7:
    // 0x8033146C: beq         $v0, $zero, L_80331484
    if (ctx->r2 == 0) {
        // 0x80331470: nop
    
            goto L_80331484;
    }
    // 0x80331470: nop

    // 0x80331474: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331478: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8033147C: b           L_803314C4
    // 0x80331480: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
        goto L_803314C4;
    // 0x80331480: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
L_80331484:
    // 0x80331484: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331488: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033148C: nop

    // 0x80331490: swc1        $f10, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f10.u32l;
    // 0x80331494: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331498: nop

    // 0x8033149C: lwc1        $f16, 0x2C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x803314A0: nop

    // 0x803314A4: swc1        $f16, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f16.u32l;
    // 0x803314A8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803314AC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803314B0: nop

    // 0x803314B4: swc1        $f18, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f18.u32l;
    // 0x803314B8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803314BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803314C0: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
L_803314C4:
    // 0x803314C4: b           L_803314E4
    // 0x803314C8: nop

        goto L_803314E4;
    // 0x803314C8: nop

L_803314CC:
    // 0x803314CC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803314D0: nop

    // 0x803314D4: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x803314D8: nop

    // 0x803314DC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x803314E0: sh          $t0, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r8;
L_803314E4:
    // 0x803314E4: b           L_803314EC
    // 0x803314E8: nop

        goto L_803314EC;
    // 0x803314E8: nop

L_803314EC:
    // 0x803314EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803314F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803314F4: jr          $ra
    // 0x803314F8: nop

    return;
    // 0x803314F8: nop

;}
RECOMP_FUNC void func_80330D38_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330D38: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330D3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330D40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330D44: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330D48: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330D4C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330D50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330D58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D5C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330D60: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330D64: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330D68: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80330D6C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330D70: nop

    // 0x80330D74: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330D78: nop

    // 0x80330D7C: bne         $t1, $zero, L_80330F18
    if (ctx->r9 != 0) {
        // 0x80330D80: nop
    
            goto L_80330F18;
    }
    // 0x80330D80: nop

    // 0x80330D84: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330D88: nop

    // 0x80330D8C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330D90: nop

    // 0x80330D94: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330D98: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330D9C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330DA0: nop

    // 0x80330DA4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330DA8: nop

    // 0x80330DAC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330DB0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330DB4: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x80330DB8: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x80330DBC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330DC0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330DC4: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80330DC8: lwc1        $f9, 0x1F00($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1F00);
    // 0x80330DCC: lwc1        $f8, 0x1F04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1F04);
    // 0x80330DD0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80330DD4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80330DD8: jal         0x80034970
    // 0x80330DDC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80330DDC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80330DE0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80330DE4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330DE8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330DEC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80330DF0: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80330DF4: nop

    // 0x80330DF8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330DFC: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80330E00: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330E04: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E08: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80330E0C: lwc1        $f17, 0x1F08($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1F08);
    // 0x80330E10: lwc1        $f16, 0x1F0C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1F0C);
    // 0x80330E14: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80330E18: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80330E1C: jal         0x80036570
    // 0x80330E20: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80330E20: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_1:
    // 0x80330E24: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80330E28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330E2C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330E30: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80330E34: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80330E38: nop

    // 0x80330E3C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330E40: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80330E44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E48: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330E4C: addiu       $a3, $a3, -0x6468
    ctx->r7 = ADD32(ctx->r7, -0X6468);
    // 0x80330E50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E54: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80330E58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330E5C: jal         0x8001ABF4
    // 0x80330E60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330E60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330E64: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330E68: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x80330E6C: lwc1        $f16, 0x4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330E70: lwc1        $f18, 0x28($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80330E74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330E78: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330E7C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330E80: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330E84: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330E88: lwc1        $f16, 0x1C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80330E8C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80330E90: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80330E94: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E98: addiu       $a1, $a1, 0x47D4
    ctx->r5 = ADD32(ctx->r5, 0X47D4);
    // 0x80330E9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330EA0: jal         0x80027464
    // 0x80330EA4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80330EA4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80330EA8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330EAC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80330EB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330EB4: beq         $t2, $at, L_80330F18
    if (ctx->r10 == ctx->r1) {
        // 0x80330EB8: nop
    
            goto L_80330F18;
    }
    // 0x80330EB8: nop

    // 0x80330EBC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330EC0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330EC4: addiu       $a3, $a3, -0x63A4
    ctx->r7 = ADD32(ctx->r7, -0X63A4);
    // 0x80330EC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330ECC: jal         0x8001ABF4
    // 0x80330ED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80330ED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80330ED4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80330ED8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330EDC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330EE0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330EE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330EE8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330EEC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330EF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330EF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330EF8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330EFC: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80330F00: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F08: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x80330F0C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330F10: jal         0x800175F0
    // 0x80330F14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x80330F14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_80330F18:
    // 0x80330F18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F20: jal         0x8002A8B4
    // 0x80330F24: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x80330F24: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_6:
    // 0x80330F28: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330F2C: nop

    // 0x80330F30: lwc1        $f18, 0x3C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330F34: nop

    // 0x80330F38: swc1        $f18, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f18.u32l;
    // 0x80330F3C: jal         0x80330000
    // 0x80330F40: nop

    func_80330000_unk_bin_46(rdram, ctx);
        goto after_7;
    // 0x80330F40: nop

    after_7:
    // 0x80330F44: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330F48: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80330F4C: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x80330F50: nop

    // 0x80330F54: bne         $t0, $at, L_803310B4
    if (ctx->r8 != ctx->r1) {
        // 0x80330F58: nop
    
            goto L_803310B4;
    }
    // 0x80330F58: nop

    // 0x80330F5C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330F60: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330F64: lwc1        $f4, 0x1C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80330F68: lwc1        $f9, 0x1F10($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1F10);
    // 0x80330F6C: lwc1        $f8, 0x1F14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1F14);
    // 0x80330F70: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80330F74: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80330F78: jal         0x80034970
    // 0x80330F7C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x80330F7C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_8:
    // 0x80330F80: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80330F84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330F88: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330F8C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80330F90: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80330F94: nop

    // 0x80330F98: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330F9C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80330FA0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330FA4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330FA8: lwc1        $f8, 0x1C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80330FAC: lwc1        $f17, 0x1F18($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1F18);
    // 0x80330FB0: lwc1        $f16, 0x1F1C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1F1C);
    // 0x80330FB4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80330FB8: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80330FBC: jal         0x80036570
    // 0x80330FC0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_9;
    // 0x80330FC0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_9:
    // 0x80330FC4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80330FC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330FCC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330FD0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80330FD4: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80330FD8: nop

    // 0x80330FDC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330FE0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80330FE4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330FE8: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x80330FEC: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80330FF0: lwc1        $f18, 0x28($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X28);
    // 0x80330FF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330FF8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330FFC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331000: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331004: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331008: lwc1        $f16, 0x1C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033100C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80331010: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80331014: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80331018: addiu       $a1, $a1, 0x47D4
    ctx->r5 = ADD32(ctx->r5, 0X47D4);
    // 0x8033101C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331020: jal         0x80027464
    // 0x80331024: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x80331024: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x80331028: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8033102C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80331030: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331034: beq         $t6, $at, L_80331098
    if (ctx->r14 == ctx->r1) {
        // 0x80331038: nop
    
            goto L_80331098;
    }
    // 0x80331038: nop

    // 0x8033103C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80331040: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331044: addiu       $a3, $a3, -0x63A4
    ctx->r7 = ADD32(ctx->r7, -0X63A4);
    // 0x80331048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033104C: jal         0x8001ABF4
    // 0x80331050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x80331050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x80331054: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80331058: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033105C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331060: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331064: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331068: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033106C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80331070: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331074: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331078: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033107C: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x80331080: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80331084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331088: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x8033108C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331090: jal         0x800175F0
    // 0x80331094: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_12;
    // 0x80331094: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
L_80331098:
    // 0x80331098: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033109C: nop

    // 0x803310A0: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x803310A4: nop

    // 0x803310A8: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x803310AC: b           L_80331230
    // 0x803310B0: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
        goto L_80331230;
    // 0x803310B0: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
L_803310B4:
    // 0x803310B4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803310B8: nop

    // 0x803310BC: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x803310C0: nop

    // 0x803310C4: bne         $t2, $zero, L_80331218
    if (ctx->r10 != 0) {
        // 0x803310C8: nop
    
            goto L_80331218;
    }
    // 0x803310C8: nop

    // 0x803310CC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803310D0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803310D4: lwc1        $f18, 0x1C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x803310D8: lwc1        $f7, 0x1F20($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1F20);
    // 0x803310DC: lwc1        $f6, 0x1F24($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1F24);
    // 0x803310E0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x803310E4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x803310E8: jal         0x80034970
    // 0x803310EC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_13;
    // 0x803310EC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_13:
    // 0x803310F0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803310F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803310F8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803310FC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80331100: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80331104: nop

    // 0x80331108: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033110C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80331110: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331114: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331118: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033111C: lwc1        $f11, 0x1F28($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X1F28);
    // 0x80331120: lwc1        $f10, 0x1F2C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1F2C);
    // 0x80331124: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80331128: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8033112C: jal         0x80036570
    // 0x80331130: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_14;
    // 0x80331130: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_14:
    // 0x80331134: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80331138: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033113C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331140: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80331144: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80331148: nop

    // 0x8033114C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331150: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80331154: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331158: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x8033115C: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80331160: lwc1        $f16, 0x28($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80331164: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331168: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033116C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80331170: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80331174: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80331178: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033117C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80331180: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80331184: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80331188: addiu       $a1, $a1, 0x47D4
    ctx->r5 = ADD32(ctx->r5, 0X47D4);
    // 0x8033118C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331190: jal         0x80027464
    // 0x80331194: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_15;
    // 0x80331194: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x80331198: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8033119C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x803311A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803311A4: beq         $t1, $at, L_80331208
    if (ctx->r9 == ctx->r1) {
        // 0x803311A8: nop
    
            goto L_80331208;
    }
    // 0x803311A8: nop

    // 0x803311AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803311B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803311B4: addiu       $a3, $a3, -0x63A4
    ctx->r7 = ADD32(ctx->r7, -0X63A4);
    // 0x803311B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803311BC: jal         0x8001ABF4
    // 0x803311C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_16;
    // 0x803311C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x803311C4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x803311C8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803311CC: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x803311D0: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x803311D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803311D8: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x803311DC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x803311E0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803311E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803311E8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803311EC: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x803311F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803311F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803311F8: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x803311FC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331200: jal         0x800175F0
    // 0x80331204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_17;
    // 0x80331204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
L_80331208:
    // 0x80331208: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033120C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331210: b           L_80331230
    // 0x80331214: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
        goto L_80331230;
    // 0x80331214: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
L_80331218:
    // 0x80331218: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033121C: nop

    // 0x80331220: lh          $t8, 0xA8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XA8);
    // 0x80331224: nop

    // 0x80331228: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8033122C: sh          $t7, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r15;
L_80331230:
    // 0x80331230: b           L_80331238
    // 0x80331234: nop

        goto L_80331238;
    // 0x80331234: nop

L_80331238:
    // 0x80331238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033123C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80331240: jr          $ra
    // 0x80331244: nop

    return;
    // 0x80331244: nop

;}
RECOMP_FUNC void func_80331CD8_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331CD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331CE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331CE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331CE8: jal         0x8002B0E4
    // 0x80331CEC: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80331CEC: nop

    after_0:
    // 0x80331CF0: b           L_80331CF8
    // 0x80331CF4: nop

        goto L_80331CF8;
    // 0x80331CF4: nop

L_80331CF8:
    // 0x80331CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331D00: jr          $ra
    // 0x80331D04: nop

    return;
    // 0x80331D04: nop

;}
RECOMP_FUNC void func_80331ACC_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331ACC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331AD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331AD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331AD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331ADC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331AE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331AE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331AE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331AEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331AF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331AF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331AF8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331AFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331B00: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331B04: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331B08: nop

    // 0x80331B0C: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80331B10: nop

    // 0x80331B14: bne         $t1, $zero, L_80331B8C
    if (ctx->r9 != 0) {
        // 0x80331B18: nop
    
            goto L_80331B8C;
    }
    // 0x80331B18: nop

    // 0x80331B1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B24: jal         0x8001BB34
    // 0x80331B28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80331B28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80331B2C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331B30: nop

    // 0x80331B34: lh          $t3, 0xC0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC0);
    // 0x80331B38: nop

    // 0x80331B3C: beq         $t3, $zero, L_80331B58
    if (ctx->r11 == 0) {
        // 0x80331B40: nop
    
            goto L_80331B58;
    }
    // 0x80331B40: nop

    // 0x80331B44: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B4C: lh          $a0, 0xC0($t4)
    ctx->r4 = MEM_H(ctx->r12, 0XC0);
    // 0x80331B50: jal         0x8001BB34
    // 0x80331B54: nop

    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80331B54: nop

    after_1:
L_80331B58:
    // 0x80331B58: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331B5C: nop

    // 0x80331B60: lh          $t6, 0xC2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC2);
    // 0x80331B64: nop

    // 0x80331B68: beq         $t6, $zero, L_80331B84
    if (ctx->r14 == 0) {
        // 0x80331B6C: nop
    
            goto L_80331B84;
    }
    // 0x80331B6C: nop

    // 0x80331B70: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B78: lh          $a0, 0xC2($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XC2);
    // 0x80331B7C: jal         0x8001BB34
    // 0x80331B80: nop

    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80331B80: nop

    after_2:
L_80331B84:
    // 0x80331B84: b           L_80331C34
    // 0x80331B88: nop

        goto L_80331C34;
    // 0x80331B88: nop

L_80331B8C:
    // 0x80331B8C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331B90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B94: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x80331B98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B9C: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x80331BA0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80331BA4: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331BA8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80331BAC: jal         0x8001BB34
    // 0x80331BB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80331BB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80331BB4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331BB8: nop

    // 0x80331BBC: lh          $t2, 0xC0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC0);
    // 0x80331BC0: nop

    // 0x80331BC4: beq         $t2, $zero, L_80331BF4
    if (ctx->r10 == 0) {
        // 0x80331BC8: nop
    
            goto L_80331BF4;
    }
    // 0x80331BC8: nop

    // 0x80331BCC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331BD0: nop

    // 0x80331BD4: lh          $s0, 0x108($t3)
    ctx->r16 = MEM_H(ctx->r11, 0X108);
    // 0x80331BD8: lh          $a0, 0xC0($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XC0);
    // 0x80331BDC: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x80331BE0: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80331BE4: sltiu       $t5, $s0, 0x1
    ctx->r13 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331BE8: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80331BEC: jal         0x8001BB34
    // 0x80331BF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80331BF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
L_80331BF4:
    // 0x80331BF4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331BF8: nop

    // 0x80331BFC: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x80331C00: nop

    // 0x80331C04: beq         $t7, $zero, L_80331C34
    if (ctx->r15 == 0) {
        // 0x80331C08: nop
    
            goto L_80331C34;
    }
    // 0x80331C08: nop

    // 0x80331C0C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331C10: nop

    // 0x80331C14: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x80331C18: lh          $a0, 0xC2($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XC2);
    // 0x80331C1C: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x80331C20: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80331C24: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331C28: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80331C2C: jal         0x8001BB34
    // 0x80331C30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x80331C30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_80331C34:
    // 0x80331C34: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331C38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331C3C: lh          $s0, 0xA4($t1)
    ctx->r16 = MEM_H(ctx->r9, 0XA4);
    // 0x80331C40: nop

    // 0x80331C44: beq         $s0, $at, L_80331C78
    if (ctx->r16 == ctx->r1) {
        // 0x80331C48: nop
    
            goto L_80331C78;
    }
    // 0x80331C48: nop

    // 0x80331C4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331C50: beq         $s0, $at, L_80331C88
    if (ctx->r16 == ctx->r1) {
        // 0x80331C54: nop
    
            goto L_80331C88;
    }
    // 0x80331C54: nop

    // 0x80331C58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80331C5C: beq         $s0, $at, L_80331C98
    if (ctx->r16 == ctx->r1) {
        // 0x80331C60: nop
    
            goto L_80331C98;
    }
    // 0x80331C60: nop

    // 0x80331C64: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80331C68: beq         $s0, $at, L_80331CA8
    if (ctx->r16 == ctx->r1) {
        // 0x80331C6C: nop
    
            goto L_80331CA8;
    }
    // 0x80331C6C: nop

    // 0x80331C70: b           L_80331CB8
    // 0x80331C74: nop

        goto L_80331CB8;
    // 0x80331C74: nop

L_80331C78:
    // 0x80331C78: jal         0x80330AF8
    // 0x80331C7C: nop

    func_80330AF8_unk_bin_46(rdram, ctx);
        goto after_6;
    // 0x80331C7C: nop

    after_6:
    // 0x80331C80: b           L_80331CC0
    // 0x80331C84: nop

        goto L_80331CC0;
    // 0x80331C84: nop

L_80331C88:
    // 0x80331C88: jal         0x80330D38
    // 0x80331C8C: nop

    func_80330D38_unk_bin_46(rdram, ctx);
        goto after_7;
    // 0x80331C8C: nop

    after_7:
    // 0x80331C90: b           L_80331CC0
    // 0x80331C94: nop

        goto L_80331CC0;
    // 0x80331C94: nop

L_80331C98:
    // 0x80331C98: jal         0x80331248
    // 0x80331C9C: nop

    func_80331248_unk_bin_46(rdram, ctx);
        goto after_8;
    // 0x80331C9C: nop

    after_8:
    // 0x80331CA0: b           L_80331CC0
    // 0x80331CA4: nop

        goto L_80331CC0;
    // 0x80331CA4: nop

L_80331CA8:
    // 0x80331CA8: jal         0x803314FC
    // 0x80331CAC: nop

    func_803314FC_unk_bin_46(rdram, ctx);
        goto after_9;
    // 0x80331CAC: nop

    after_9:
    // 0x80331CB0: b           L_80331CC0
    // 0x80331CB4: nop

        goto L_80331CC0;
    // 0x80331CB4: nop

L_80331CB8:
    // 0x80331CB8: b           L_80331CC0
    // 0x80331CBC: nop

        goto L_80331CC0;
    // 0x80331CBC: nop

L_80331CC0:
    // 0x80331CC0: b           L_80331CC8
    // 0x80331CC4: nop

        goto L_80331CC8;
    // 0x80331CC4: nop

L_80331CC8:
    // 0x80331CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331CCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80331CD0: jr          $ra
    // 0x80331CD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80331CD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80331D08_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331D0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331D10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331D18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331D20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331D28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331D30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331D34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331D38: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331D3C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331D40: nop

    // 0x80331D44: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331D48: nop

    // 0x80331D4C: bne         $t1, $zero, L_80331D94
    if (ctx->r9 != 0) {
        // 0x80331D50: nop
    
            goto L_80331D94;
    }
    // 0x80331D50: nop

    // 0x80331D54: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331D58: nop

    // 0x80331D5C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331D60: nop

    // 0x80331D64: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331D68: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331D6C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80331D70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331D74: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331D78: nop

    // 0x80331D7C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80331D80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80331D8C: jal         0x80029EF8
    // 0x80331D90: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80331D90: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_0:
L_80331D94:
    // 0x80331D94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D9C: jal         0x80029C40
    // 0x80331DA0: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80331DA0: nop

    after_1:
    // 0x80331DA4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331DA8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331DAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331DB8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80331DBC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331DC0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331DC4: jal         0x80029018
    // 0x80331DC8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x80331DC8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80331DCC: beq         $v0, $zero, L_80331DEC
    if (ctx->r2 == 0) {
        // 0x80331DD0: nop
    
            goto L_80331DEC;
    }
    // 0x80331DD0: nop

    // 0x80331DD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DDC: jal         0x8002B0E4
    // 0x80331DE0: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x80331DE0: nop

    after_3:
    // 0x80331DE4: b           L_80331E3C
    // 0x80331DE8: nop

        goto L_80331E3C;
    // 0x80331DE8: nop

L_80331DEC:
    // 0x80331DEC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80331DF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331DF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DFC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80331E00: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80331E04: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    // 0x80331E08: jal         0x80029F58
    // 0x80331E0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x80331E0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80331E10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331E14: bne         $v0, $at, L_80331E34
    if (ctx->r2 != ctx->r1) {
        // 0x80331E18: nop
    
            goto L_80331E34;
    }
    // 0x80331E18: nop

    // 0x80331E1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E24: jal         0x8002B0E4
    // 0x80331E28: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x80331E28: nop

    after_5:
    // 0x80331E2C: b           L_80331E3C
    // 0x80331E30: nop

        goto L_80331E3C;
    // 0x80331E30: nop

L_80331E34:
    // 0x80331E34: b           L_80331E3C
    // 0x80331E38: nop

        goto L_80331E3C;
    // 0x80331E38: nop

L_80331E3C:
    // 0x80331E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331E40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331E44: jr          $ra
    // 0x80331E48: nop

    return;
    // 0x80331E48: nop

;}
RECOMP_FUNC void func_803308BC_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803308BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803308C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803308C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803308C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803308CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803308D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803308D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803308D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803308DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803308E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803308E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803308E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803308EC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803308F0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803308F4: nop

    // 0x803308F8: lh          $t1, 0xC0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC0);
    // 0x803308FC: nop

    // 0x80330900: beq         $t1, $zero, L_80330934
    if (ctx->r9 == 0) {
        // 0x80330904: nop
    
            goto L_80330934;
    }
    // 0x80330904: nop

    // 0x80330908: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033090C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330910: lh          $t3, 0xC0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC0);
    // 0x80330914: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80330918: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033091C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330920: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330924: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330928: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033092C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80330930: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_80330934:
    // 0x80330934: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330938: nop

    // 0x8033093C: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80330940: nop

    // 0x80330944: beq         $t8, $zero, L_80330978
    if (ctx->r24 == 0) {
        // 0x80330948: nop
    
            goto L_80330978;
    }
    // 0x80330948: nop

    // 0x8033094C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330950: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330954: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80330958: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8033095C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330960: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330964: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330968: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033096C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330970: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80330974: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_80330978:
    // 0x80330978: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033097C: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x80330980: nop

    // 0x80330984: bne         $t4, $zero, L_80330A78
    if (ctx->r12 != 0) {
        // 0x80330988: nop
    
            goto L_80330A78;
    }
    // 0x80330988: nop

    // 0x8033098C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330990: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330994: lh          $t6, 0xBE($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XBE);
    // 0x80330998: nop

    // 0x8033099C: bne         $t6, $at, L_803309B4
    if (ctx->r14 != ctx->r1) {
        // 0x803309A0: nop
    
            goto L_803309B4;
    }
    // 0x803309A0: nop

    // 0x803309A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803309A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803309AC: jal         0x80069E60
    // 0x803309B0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x803309B0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
L_803309B4:
    // 0x803309B4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803309B8: nop

    // 0x803309BC: sh          $zero, 0x108($t7)
    MEM_H(0X108, ctx->r15) = 0;
    // 0x803309C0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803309C4: nop

    // 0x803309C8: lh          $t9, 0xC0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC0);
    // 0x803309CC: nop

    // 0x803309D0: beq         $t9, $zero, L_803309EC
    if (ctx->r25 == 0) {
        // 0x803309D4: nop
    
            goto L_803309EC;
    }
    // 0x803309D4: nop

    // 0x803309D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803309DC: nop

    // 0x803309E0: lh          $a0, 0xC0($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XC0);
    // 0x803309E4: jal         0x8002B114
    // 0x803309E8: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x803309E8: nop

    after_1:
L_803309EC:
    // 0x803309EC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803309F0: nop

    // 0x803309F4: lh          $t2, 0xC2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC2);
    // 0x803309F8: nop

    // 0x803309FC: beq         $t2, $zero, L_80330A18
    if (ctx->r10 == 0) {
        // 0x80330A00: nop
    
            goto L_80330A18;
    }
    // 0x80330A00: nop

    // 0x80330A04: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A08: nop

    // 0x80330A0C: lh          $a0, 0xC2($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XC2);
    // 0x80330A10: jal         0x8002B114
    // 0x80330A14: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80330A14: nop

    after_2:
L_80330A18:
    // 0x80330A18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330A24: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x80330A28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330A2C: jal         0x800175F0
    // 0x80330A30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x80330A30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80330A34: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A38: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80330A3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330A40: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330A44: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80330A48: lwc1        $f12, 0x0($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80330A4C: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x80330A50: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80330A54: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x80330A58: jal         0x8002AE38
    // 0x80330A5C: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8002AE38(rdram, ctx);
        goto after_4;
    // 0x80330A5C: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_4:
    // 0x80330A60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A68: jal         0x8002B114
    // 0x80330A6C: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x80330A6C: nop

    after_5:
    // 0x80330A70: b           L_80330AE0
    // 0x80330A74: nop

        goto L_80330AE0;
    // 0x80330A74: nop

L_80330A78:
    // 0x80330A78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330A7C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80330A80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330A84: bne         $t6, $at, L_80330AE0
    if (ctx->r14 != ctx->r1) {
        // 0x80330A88: nop
    
            goto L_80330AE0;
    }
    // 0x80330A88: nop

    // 0x80330A8C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A90: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x80330A94: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x80330A98: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A9C: nop

    // 0x80330AA0: lh          $t0, 0xC0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC0);
    // 0x80330AA4: nop

    // 0x80330AA8: beq         $t0, $zero, L_80330ABC
    if (ctx->r8 == 0) {
        // 0x80330AAC: nop
    
            goto L_80330ABC;
    }
    // 0x80330AAC: nop

    // 0x80330AB0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80330AB4: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x80330AB8: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
L_80330ABC:
    // 0x80330ABC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AC0: nop

    // 0x80330AC4: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80330AC8: nop

    // 0x80330ACC: beq         $t4, $zero, L_80330AE0
    if (ctx->r12 == 0) {
        // 0x80330AD0: nop
    
            goto L_80330AE0;
    }
    // 0x80330AD0: nop

    // 0x80330AD4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330AD8: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x80330ADC: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
L_80330AE0:
    // 0x80330AE0: b           L_80330AE8
    // 0x80330AE4: nop

        goto L_80330AE8;
    // 0x80330AE4: nop

L_80330AE8:
    // 0x80330AE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330AF0: jr          $ra
    // 0x80330AF4: nop

    return;
    // 0x80330AF4: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330008: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033000C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330010: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330014: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330018: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033001C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330024: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330028: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033002C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330030: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330034: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330038: nop

    // 0x8033003C: lh          $t1, 0xC0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC0);
    // 0x80330040: nop

    // 0x80330044: beq         $t1, $zero, L_80330078
    if (ctx->r9 == 0) {
        // 0x80330048: nop
    
            goto L_80330078;
    }
    // 0x80330048: nop

    // 0x8033004C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330050: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330054: lh          $t3, 0xC0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC0);
    // 0x80330058: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8033005C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330060: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330064: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330068: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033006C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330070: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80330074: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_80330078:
    // 0x80330078: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033007C: nop

    // 0x80330080: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80330084: nop

    // 0x80330088: beq         $t8, $zero, L_803300BC
    if (ctx->r24 == 0) {
        // 0x8033008C: nop
    
            goto L_803300BC;
    }
    // 0x8033008C: nop

    // 0x80330090: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330094: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330098: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x8033009C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803300A0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803300A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803300A8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803300AC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803300B0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803300B4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x803300B8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_803300BC:
    // 0x803300BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803300C0: nop

    // 0x803300C4: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x803300C8: nop

    // 0x803300CC: bne         $t5, $zero, L_80330100
    if (ctx->r13 != 0) {
        // 0x803300D0: nop
    
            goto L_80330100;
    }
    // 0x803300D0: nop

    // 0x803300D4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803300D8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x803300DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803300E0: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x803300E4: nop

    // 0x803300E8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x803300EC: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
    // 0x803300F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803300F4: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x803300F8: b           L_80330118
    // 0x803300FC: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
        goto L_80330118;
    // 0x803300FC: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_80330100:
    // 0x80330100: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330104: nop

    // 0x80330108: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8033010C: nop

    // 0x80330110: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80330114: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_80330118:
    // 0x80330118: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033011C: nop

    // 0x80330120: lwc1        $f10, 0xD4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x80330124: lwc1        $f16, 0x28($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X28);
    // 0x80330128: nop

    // 0x8033012C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330130: swc1        $f18, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f18.u32l;
    // 0x80330134: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330138: nop

    // 0x8033013C: lh          $t4, 0xC0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC0);
    // 0x80330140: nop

    // 0x80330144: beq         $t4, $zero, L_80330230
    if (ctx->r12 == 0) {
        // 0x80330148: nop
    
            goto L_80330230;
    }
    // 0x80330148: nop

    // 0x8033014C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330150: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80330154: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330158: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033015C: jal         0x80015538
    // 0x80330160: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80330160: nop

    after_0:
    // 0x80330164: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80330168: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033016C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80330170: lwc1        $f9, 0x1ED0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1ED0);
    // 0x80330174: lwc1        $f8, 0x1ED4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1ED4);
    // 0x80330178: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033017C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80330180: jal         0x80034970
    // 0x80330184: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80330184: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80330188: lui         $at, 0x4341
    ctx->r1 = S32(0X4341 << 16);
    // 0x8033018C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330190: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330194: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80330198: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8033019C: lwc1        $f8, 0x24($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X24);
    // 0x803301A0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803301A4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803301A8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803301AC: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x803301B0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803301B4: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x803301B8: lwc1        $f5, 0x1ED8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X1ED8);
    // 0x803301BC: lwc1        $f4, 0x1EDC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1EDC);
    // 0x803301C0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x803301C4: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x803301C8: jal         0x80036570
    // 0x803301CC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x803301CC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_2:
    // 0x803301D0: lui         $at, 0x4341
    ctx->r1 = S32(0X4341 << 16);
    // 0x803301D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803301D8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803301DC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x803301E0: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803301E4: lwc1        $f4, 0x2C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x803301E8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803301EC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803301F0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803301F4: swc1        $f6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f6.u32l;
    // 0x803301F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803301FC: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x80330200: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330204: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80330208: lwc1        $f18, 0x28($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X28);
    // 0x8033020C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330210: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80330214: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330218: swc1        $f4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f4.u32l;
    // 0x8033021C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330220: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80330224: lwc1        $f6, 0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80330228: nop

    // 0x8033022C: swc1        $f6, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f6.u32l;
L_80330230:
    // 0x80330230: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330234: nop

    // 0x80330238: lh          $t5, 0xC2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XC2);
    // 0x8033023C: nop

    // 0x80330240: beq         $t5, $zero, L_8033032C
    if (ctx->r13 == 0) {
        // 0x80330244: nop
    
            goto L_8033032C;
    }
    // 0x80330244: nop

    // 0x80330248: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033024C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80330250: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330254: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80330258: jal         0x80015538
    // 0x8033025C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033025C: nop

    after_3:
    // 0x80330260: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80330264: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330268: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8033026C: lwc1        $f17, 0x1EE0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1EE0);
    // 0x80330270: lwc1        $f16, 0x1EE4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1EE4);
    // 0x80330274: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80330278: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8033027C: jal         0x80034970
    // 0x80330280: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x80330280: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_4:
    // 0x80330284: lui         $at, 0x4341
    ctx->r1 = S32(0X4341 << 16);
    // 0x80330288: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033028C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330290: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80330294: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80330298: lwc1        $f16, 0x24($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X24);
    // 0x8033029C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803302A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803302A4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803302A8: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
    // 0x803302AC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803302B0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x803302B4: lwc1        $f9, 0x1EE8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1EE8);
    // 0x803302B8: lwc1        $f8, 0x1EEC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1EEC);
    // 0x803302BC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803302C0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803302C4: jal         0x80036570
    // 0x803302C8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_5;
    // 0x803302C8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_5:
    // 0x803302CC: lui         $at, 0x4341
    ctx->r1 = S32(0X4341 << 16);
    // 0x803302D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803302D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803302D8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x803302DC: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803302E0: lwc1        $f8, 0x2C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x803302E4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803302E8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803302EC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803302F0: swc1        $f10, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f10.u32l;
    // 0x803302F4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803302F8: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x803302FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330300: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80330304: lwc1        $f6, 0x28($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80330308: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033030C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330310: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330314: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
    // 0x80330318: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033031C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330320: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80330324: nop

    // 0x80330328: swc1        $f10, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f10.u32l;
L_8033032C:
    // 0x8033032C: b           L_80330334
    // 0x80330330: nop

        goto L_80330334;
    // 0x80330330: nop

L_80330334:
    // 0x80330334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330338: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033033C: jr          $ra
    // 0x80330340: nop

    return;
    // 0x80330340: nop

;}
RECOMP_FUNC void func_8033C200_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C200: jr          $ra
    // 0x8033C204: nop

    return;
    // 0x8033C204: nop

    // 0x8033C208: jr          $ra
    // 0x8033C20C: nop

    return;
    // 0x8033C20C: nop

    // 0x8033C210: jr          $ra
    // 0x8033C214: nop

    return;
    // 0x8033C214: nop

    // 0x8033C218: jr          $ra
    // 0x8033C21C: nop

    return;
    // 0x8033C21C: nop

;}
RECOMP_FUNC void func_8033C630_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C630: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033C634: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C638: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C63C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C640: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C644: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C648: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C64C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C650: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C654: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C658: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C65C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C660: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033C664: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033C668: nop

    // 0x8033C66C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033C670: nop

    // 0x8033C674: bne         $t1, $zero, L_8033C7DC
    if (ctx->r9 != 0) {
        // 0x8033C678: nop
    
            goto L_8033C7DC;
    }
    // 0x8033C678: nop

    // 0x8033C67C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033C680: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033C684: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033C688: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033C68C: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x8033C690: sh          $t4, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r12;
    // 0x8033C694: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033C698: nop

    // 0x8033C69C: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x8033C6A0: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x8033C6A4: jal         0x80026E58
    // 0x8033C6A8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_0;
    // 0x8033C6A8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x8033C6AC: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8033C6B0: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x8033C6B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033C6B8: beq         $t7, $at, L_8033C7DC
    if (ctx->r15 == ctx->r1) {
        // 0x8033C6BC: nop
    
            goto L_8033C7DC;
    }
    // 0x8033C6BC: nop

    // 0x8033C6C0: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x8033C6C4: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033C6C8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033C6CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033C6D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033C6D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033C6D8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033C6DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033C6E0: lh          $t0, 0x41F4($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F4);
    // 0x8033C6E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8033C6E8: beq         $t0, $at, L_8033C73C
    if (ctx->r8 == ctx->r1) {
        // 0x8033C6EC: nop
    
            goto L_8033C73C;
    }
    // 0x8033C6EC: nop

    // 0x8033C6F0: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x8033C6F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C6F8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033C6FC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033C700: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033C704: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033C708: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033C70C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033C710: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x8033C714: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x8033C718: lh          $t4, 0x22($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X22);
    // 0x8033C71C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C720: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033C724: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033C728: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033C72C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033C730: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033C734: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033C738: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8033C73C:
    // 0x8033C73C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8033C740: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x8033C744: jal         0x80026E58
    // 0x8033C748: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_1;
    // 0x8033C748: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_1:
    // 0x8033C74C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8033C750: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8033C754: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033C758: beq         $t6, $at, L_8033C7DC
    if (ctx->r14 == ctx->r1) {
        // 0x8033C75C: nop
    
            goto L_8033C7DC;
    }
    // 0x8033C75C: nop

    // 0x8033C760: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x8033C764: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033C768: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033C76C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033C770: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033C774: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033C778: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033C77C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033C780: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8033C784: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8033C788: beq         $t9, $at, L_8033C7DC
    if (ctx->r25 == ctx->r1) {
        // 0x8033C78C: nop
    
            goto L_8033C7DC;
    }
    // 0x8033C78C: nop

    // 0x8033C790: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x8033C794: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C798: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x8033C79C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8033C7A0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033C7A4: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8033C7A8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033C7AC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033C7B0: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8033C7B4: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x8033C7B8: lh          $t3, 0x22($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X22);
    // 0x8033C7BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C7C0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033C7C4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033C7C8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033C7CC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033C7D0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033C7D4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033C7D8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8033C7DC:
    // 0x8033C7DC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033C7E0: nop

    // 0x8033C7E4: lh          $t6, 0xB2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB2);
    // 0x8033C7E8: nop

    // 0x8033C7EC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8033C7F0: sh          $t7, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r15;
    // 0x8033C7F4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033C7F8: nop

    // 0x8033C7FC: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x8033C800: nop

    // 0x8033C804: bgtz        $t9, L_8033C898
    if (SIGNED(ctx->r25) > 0) {
        // 0x8033C808: nop
    
            goto L_8033C898;
    }
    // 0x8033C808: nop

    // 0x8033C80C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C810: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C818: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x8033C81C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033C820: jal         0x800175F0
    // 0x8033C824: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x8033C824: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8033C828: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C82C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033C834: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x8033C838: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033C83C: jal         0x800175F0
    // 0x8033C840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x8033C840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x8033C844: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C848: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C84C: jal         0x8001BB34
    // 0x8033C850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x8033C850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033C854: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033C858: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8033C85C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033C860: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8033C864: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8033C868: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x8033C86C: lui         $a3, 0x40E0
    ctx->r7 = S32(0X40E0 << 16);
    // 0x8033C870: jal         0x8007EE40
    // 0x8033C874: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007EE40(rdram, ctx);
        goto after_5;
    // 0x8033C874: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_5:
    // 0x8033C878: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C87C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C880: jal         0x8002B114
    // 0x8033C884: nop

    func_8002B114(rdram, ctx);
        goto after_6;
    // 0x8033C884: nop

    after_6:
    // 0x8033C888: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033C88C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033C890: jal         0x80069E60
    // 0x8033C894: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_80069E60(rdram, ctx);
        goto after_7;
    // 0x8033C894: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_7:
L_8033C898:
    // 0x8033C898: b           L_8033C8A0
    // 0x8033C89C: nop

        goto L_8033C8A0;
    // 0x8033C89C: nop

L_8033C8A0:
    // 0x8033C8A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C8A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033C8A8: jr          $ra
    // 0x8033C8AC: nop

    return;
    // 0x8033C8AC: nop

;}
