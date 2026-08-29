#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80000964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000964: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80000968: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000096C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80000970: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80000974: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80000978: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8000097C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80000980: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80000984: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80000988: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000098C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80000990: sw          $t6, 0x5254($at)
    MEM_W(0X5254, ctx->r1) = ctx->r14;
    // 0x80000994: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80000998: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000099C: sw          $t7, 0x525C($at)
    MEM_W(0X525C, ctx->r1) = ctx->r15;
    // 0x800009A0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800009A4: sw          $zero, 0x5284($at)
    MEM_W(0X5284, ctx->r1) = 0;
    // 0x800009A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800009AC: sw          $zero, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = 0;
    // 0x800009B0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800009B4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800009B8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800009BC: lw          $t9, 0x524C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X524C);
    // 0x800009C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800009C4: bne         $t9, $at, L_800009FC
    if (ctx->r25 != ctx->r1) {
        // 0x800009C8: nop
    
            goto L_800009FC;
    }
    // 0x800009C8: nop

    // 0x800009CC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800009D0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x800009D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800009D8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800009DC: jal         0x800319F0
    // 0x800009E0: nop

    osViSetYScale_recomp(rdram, ctx);
        goto after_0;
    // 0x800009E0: nop

    after_0:
    // 0x800009E4: jal         0x80031A50
    // 0x800009E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_1;
    // 0x800009E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800009EC: jal         0x8001F9DC
    // 0x800009F0: nop

    Check_PakState(rdram, ctx);
        goto after_2;
    // 0x800009F0: nop

    after_2:
    // 0x800009F4: jal         0x8001ECA0
    // 0x800009F8: nop

    func_8001ECA0(rdram, ctx);
        goto after_3;
    // 0x800009F8: nop

    after_3:
L_800009FC:
    // 0x800009FC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80000A00: nop

    // 0x80000A04: beq         $t1, $zero, L_80000BC8
    if (ctx->r9 == 0) {
        // 0x80000A08: nop
    
            goto L_80000BC8;
    }
    // 0x80000A08: nop

L_80000A0C:
    // 0x80000A0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80000A10: addiu       $a0, $a0, -0x1F48
    ctx->r4 = ADD32(ctx->r4, -0X1F48);
    // 0x80000A14: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80000A18: jal         0x80031880
    // 0x80000A1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80000A1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80000A20: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80000A24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80000A28: lh          $s0, 0x0($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X0);
    // 0x80000A2C: nop

    // 0x80000A30: beq         $s0, $at, L_80000A58
    if (ctx->r16 == ctx->r1) {
        // 0x80000A34: nop
    
            goto L_80000A58;
    }
    // 0x80000A34: nop

    // 0x80000A38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80000A3C: beq         $s0, $at, L_80000B60
    if (ctx->r16 == ctx->r1) {
        // 0x80000A40: nop
    
            goto L_80000B60;
    }
    // 0x80000A40: nop

    // 0x80000A44: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80000A48: beq         $s0, $at, L_80000B78
    if (ctx->r16 == ctx->r1) {
        // 0x80000A4C: nop
    
            goto L_80000B78;
    }
    // 0x80000A4C: nop

    // 0x80000A50: b           L_80000BB8
    // 0x80000A54: nop

        goto L_80000BB8;
    // 0x80000A54: nop

L_80000A58:
    // 0x80000A58: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80000A5C: lw          $t3, -0x1F60($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F60);
    // 0x80000A60: nop

    // 0x80000A64: beq         $t3, $zero, L_80000A74
    if (ctx->r11 == 0) {
        // 0x80000A68: nop
    
            goto L_80000A74;
    }
    // 0x80000A68: nop

    // 0x80000A6C: jal         0x8001E80C
    // 0x80000A70: nop

    func_8001E80C(rdram, ctx);
        goto after_5;
    // 0x80000A70: nop

    after_5:
L_80000A74:
    // 0x80000A74: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80000A78: nop

    // 0x80000A7C: sltiu       $at, $t4, 0x2
    ctx->r1 = ctx->r12 < 0X2 ? 1 : 0;
    // 0x80000A80: beq         $at, $zero, L_80000AF4
    if (ctx->r1 == 0) {
        // 0x80000A84: nop
    
            goto L_80000AF4;
    }
    // 0x80000A84: nop

    // 0x80000A88: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80000A8C: lw          $t5, -0x1F68($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F68);
    // 0x80000A90: nop

    // 0x80000A94: beq         $t5, $zero, L_80000AF4
    if (ctx->r13 == 0) {
        // 0x80000A98: nop
    
            goto L_80000AF4;
    }
    // 0x80000A98: nop

    // 0x80000A9C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80000AA0: lui         $t8, 0x8034
    ctx->r24 = S32(0X8034 << 16);
    // 0x80000AA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80000AA8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80000AAC: sll         $t7, $t7, 6
    ctx->r15 = S32(ctx->r15 << 6);
    // 0x80000AB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80000AB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80000AB8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80000ABC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80000AC0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80000AC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80000AC8: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80000ACC: jal         0x8001D9E4
    // 0x80000AD0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_8001D9E4(rdram, ctx);
        goto after_6;
    // 0x80000AD0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_6:
    // 0x80000AD4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80000AD8: nop

    // 0x80000ADC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80000AE0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80000AE4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80000AE8: nop

    // 0x80000AEC: xori        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 ^ 0X1;
    // 0x80000AF0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_80000AF4:
    // 0x80000AF4: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80000AF8: lw          $t3, 0x5264($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5264);
    // 0x80000AFC: nop

    // 0x80000B00: beq         $t3, $zero, L_80000B38
    if (ctx->r11 == 0) {
        // 0x80000B04: nop
    
            goto L_80000B38;
    }
    // 0x80000B04: nop

    // 0x80000B08: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80000B0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80000B10: bne         $t4, $at, L_80000B38
    if (ctx->r12 != ctx->r1) {
        // 0x80000B14: nop
    
            goto L_80000B38;
    }
    // 0x80000B14: nop

    // 0x80000B18: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x80000B1C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x80000B20: jal         0x8001ECA0
    // 0x80000B24: nop

    func_8001ECA0(rdram, ctx);
        goto after_7;
    // 0x80000B24: nop

    after_7:
    // 0x80000B28: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80000B2C: nop

    // 0x80000B30: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x80000B34: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
L_80000B38:
    // 0x80000B38: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80000B3C: nop

    // 0x80000B40: blez        $t8, L_80000B58
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80000B44: nop
    
            goto L_80000B58;
    }
    // 0x80000B44: nop

    // 0x80000B48: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80000B4C: nop

    // 0x80000B50: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80000B54: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
L_80000B58:
    // 0x80000B58: b           L_80000BB8
    // 0x80000B5C: nop

        goto L_80000BB8;
    // 0x80000B5C: nop

L_80000B60:
    // 0x80000B60: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80000B64: nop

    // 0x80000B68: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80000B6C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80000B70: b           L_80000BB8
    // 0x80000B74: nop

        goto L_80000BB8;
    // 0x80000B74: nop

L_80000B78:
    // 0x80000B78: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80000B7C: nop

    // 0x80000B80: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x80000B84: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x80000B88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80000B8C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80000B90: jal         0x800319F0
    // 0x80000B94: nop

    osViSetYScale_recomp(rdram, ctx);
        goto after_8;
    // 0x80000B94: nop

    after_8:
    // 0x80000B98: jal         0x80031A50
    // 0x80000B9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_9;
    // 0x80000B9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x80000BA0: jal         0x8001F9DC
    // 0x80000BA4: nop

    Check_PakState(rdram, ctx);
        goto after_10;
    // 0x80000BA4: nop

    after_10:
    // 0x80000BA8: jal         0x8001ECA0
    // 0x80000BAC: nop

    func_8001ECA0(rdram, ctx);
        goto after_11;
    // 0x80000BAC: nop

    after_11:
    // 0x80000BB0: b           L_80000BB8
    // 0x80000BB4: nop

        goto L_80000BB8;
    // 0x80000BB4: nop

L_80000BB8:
    // 0x80000BB8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80000BBC: nop

    // 0x80000BC0: bne         $t5, $zero, L_80000A0C
    if (ctx->r13 != 0) {
        // 0x80000BC4: nop
    
            goto L_80000A0C;
    }
    // 0x80000BC4: nop

L_80000BC8:
    // 0x80000BC8: jal         0x8001EE64
    // 0x80000BCC: nop

    func_8001EE64(rdram, ctx);
        goto after_12;
    // 0x80000BCC: nop

    after_12:
    // 0x80000BD0: b           L_80000BD8
    // 0x80000BD4: nop

        goto L_80000BD8;
    // 0x80000BD4: nop

L_80000BD8:
    // 0x80000BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80000BDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80000BE0: jr          $ra
    // 0x80000BE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80000BE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void __postNextSeqEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D230: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003D234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D238: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x8003D23C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003D240: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8003D244: bne         $t6, $at, L_8003D2FC
    if (ctx->r14 != ctx->r1) {
        // 0x8003D248: lw          $a2, 0x18($a0)
        ctx->r6 = MEM_W(ctx->r4, 0X18);
            goto L_8003D2FC;
    }
    // 0x8003D248: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x8003D24C: beq         $a2, $zero, L_8003D2FC
    if (ctx->r6 == 0) {
        // 0x8003D250: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8003D2FC;
    }
    // 0x8003D250: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8003D254: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8003D258: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003D25C: jal         0x800461C0
    // 0x8003D260: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    __alSeqNextDelta(rdram, ctx);
        goto after_0;
    // 0x8003D260: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x8003D264: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8003D268: beq         $v0, $zero, L_8003D2FC
    if (ctx->r2 == 0) {
        // 0x8003D26C: lw          $a3, 0x38($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X38);
            goto L_8003D2FC;
    }
    // 0x8003D26C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8003D270: lw          $t7, 0x84($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X84);
    // 0x8003D274: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8003D278: beql        $t7, $zero, L_8003D2DC
    if (ctx->r15 == 0) {
        // 0x8003D27C: sh          $zero, 0x28($sp)
        MEM_H(0X28, ctx->r29) = 0;
            goto L_8003D2DC;
    }
    goto skip_0;
    // 0x8003D27C: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    skip_0:
    // 0x8003D280: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003D284: jal         0x80045D88
    // 0x8003D288: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    alSeqGetTicks(rdram, ctx);
        goto after_1;
    // 0x8003D288: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x8003D28C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8003D290: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8003D294: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8003D298: lw          $t0, 0x80($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X80);
    // 0x8003D29C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8003D2A0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8003D2A4: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x8003D2A8: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8003D2AC: bnel        $at, $zero, L_8003D2DC
    if (ctx->r1 != 0) {
        // 0x8003D2B0: sh          $zero, 0x28($sp)
        MEM_H(0X28, ctx->r29) = 0;
            goto L_8003D2DC;
    }
    goto skip_1;
    // 0x8003D2B0: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    skip_1:
    // 0x8003D2B4: lw          $a1, 0x7C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X7C);
    // 0x8003D2B8: jal         0x80045D6C
    // 0x8003D2BC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    alSeqSetLoc(rdram, ctx);
        goto after_2;
    // 0x8003D2BC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_2:
    // 0x8003D2C0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8003D2C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003D2C8: lw          $v0, 0x84($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X84);
    // 0x8003D2CC: beq         $v0, $at, L_8003D2D8
    if (ctx->r2 == ctx->r1) {
        // 0x8003D2D0: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_8003D2D8;
    }
    // 0x8003D2D0: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x8003D2D4: sw          $t2, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->r10;
L_8003D2D8:
    // 0x8003D2D8: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
L_8003D2DC:
    // 0x8003D2DC: lw          $t3, 0x24($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X24);
    // 0x8003D2E0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8003D2E4: addiu       $a0, $a3, 0x48
    ctx->r4 = ADD32(ctx->r7, 0X48);
    // 0x8003D2E8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8003D2EC: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D2F0: mflo        $a2
    ctx->r6 = lo;
    // 0x8003D2F4: jal         0x8003E80C
    // 0x8003D2F8: nop

    alEvtqPostEvent(rdram, ctx);
        goto after_3;
    // 0x8003D2F8: nop

    after_3:
L_8003D2FC:
    // 0x8003D2FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D300: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8003D304: jr          $ra
    // 0x8003D308: nop

    return;
    // 0x8003D308: nop

;}
RECOMP_FUNC void alCSeqNextEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033DC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80033DC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80033DCC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80033DD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80033DD4: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x80033DD8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80033DDC: lw          $a2, 0x10($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X10);
    // 0x80033DE0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80033DE4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80033DE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80033DEC: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
L_80033DF0:
    // 0x80033DF0: srlv        $t7, $t6, $v0
    ctx->r15 = S32(U32(ctx->r14) >> (ctx->r2 & 31));
    // 0x80033DF4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80033DF8: beql        $t8, $zero, L_80033E3C
    if (ctx->r24 == 0) {
        // 0x80033DFC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80033E3C;
    }
    goto skip_0;
    // 0x80033DFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x80033E00: lw          $t6, 0x14($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X14);
    // 0x80033E04: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80033E08: addu        $v1, $t4, $t9
    ctx->r3 = ADD32(ctx->r12, ctx->r25);
    // 0x80033E0C: beql        $t6, $zero, L_80033E24
    if (ctx->r14 == 0) {
        // 0x80033E10: lw          $a0, 0xB8($v1)
        ctx->r4 = MEM_W(ctx->r3, 0XB8);
            goto L_80033E24;
    }
    goto skip_1;
    // 0x80033E10: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
    skip_1:
    // 0x80033E14: lw          $t7, 0xB8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XB8);
    // 0x80033E18: subu        $t8, $t7, $a2
    ctx->r24 = SUB32(ctx->r15, ctx->r6);
    // 0x80033E1C: sw          $t8, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = ctx->r24;
    // 0x80033E20: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
L_80033E24:
    // 0x80033E24: sltu        $at, $a0, $t1
    ctx->r1 = ctx->r4 < ctx->r9 ? 1 : 0;
    // 0x80033E28: beql        $at, $zero, L_80033E3C
    if (ctx->r1 == 0) {
        // 0x80033E2C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80033E3C;
    }
    goto skip_2;
    // 0x80033E2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
    // 0x80033E30: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80033E34: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x80033E38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80033E3C:
    // 0x80033E3C: bnel        $v0, $a1, L_80033DF0
    if (ctx->r2 != ctx->r5) {
        // 0x80033E40: lw          $t6, 0x4($t4)
        ctx->r14 = MEM_W(ctx->r12, 0X4);
            goto L_80033DF0;
    }
    goto skip_3;
    // 0x80033E40: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    skip_3:
    // 0x80033E44: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80033E48: jal         0x80033CA0
    // 0x80033E4C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_0;
    // 0x80033E4C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_0:
    // 0x80033E50: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80033E54: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x80033E58: bne         $v0, $at, L_80033FC4
    if (ctx->r2 != ctx->r1) {
        // 0x80033E5C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80033FC4;
    }
    // 0x80033E5C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80033E60: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80033E64: jal         0x80033CA0
    // 0x80033E68: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_1;
    // 0x80033E68: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_1:
    // 0x80033E6C: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80033E70: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x80033E74: bne         $v0, $at, L_80033EC8
    if (ctx->r2 != ctx->r1) {
        // 0x80033E78: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80033EC8;
    }
    // 0x80033E78: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80033E7C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80033E80: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x80033E84: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
    // 0x80033E88: sb          $a2, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r6;
    // 0x80033E8C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80033E90: jal         0x80033CA0
    // 0x80033E94: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_2;
    // 0x80033E94: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_2:
    // 0x80033E98: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80033E9C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80033EA0: jal         0x80033CA0
    // 0x80033EA4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_3;
    // 0x80033EA4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_3:
    // 0x80033EA8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80033EAC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80033EB0: jal         0x80033CA0
    // 0x80033EB4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_4;
    // 0x80033EB4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_4:
    // 0x80033EB8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80033EBC: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x80033EC0: b           L_80034060
    // 0x80033EC4: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
        goto L_80034060;
    // 0x80033EC4: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
L_80033EC8:
    // 0x80033EC8: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x80033ECC: bnel        $v1, $at, L_80033F08
    if (ctx->r3 != ctx->r1) {
        // 0x80033ED0: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_80033F08;
    }
    goto skip_4;
    // 0x80033ED0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    skip_4:
    // 0x80033ED4: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x80033ED8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80033EDC: sllv        $t9, $t8, $t3
    ctx->r25 = S32(ctx->r24 << (ctx->r11 & 31));
    // 0x80033EE0: xor         $t6, $t7, $t9
    ctx->r14 = ctx->r15 ^ ctx->r25;
    // 0x80033EE4: beq         $t6, $zero, L_80033EF8
    if (ctx->r14 == 0) {
        // 0x80033EE8: sw          $t6, 0x4($t4)
        MEM_W(0X4, ctx->r12) = ctx->r14;
            goto L_80033EF8;
    }
    // 0x80033EE8: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x80033EEC: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x80033EF0: b           L_80034060
    // 0x80033EF4: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
        goto L_80034060;
    // 0x80033EF4: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
L_80033EF8:
    // 0x80033EF8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80033EFC: b           L_80034060
    // 0x80033F00: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
        goto L_80034060;
    // 0x80033F00: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x80033F04: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
L_80033F08:
    // 0x80033F08: bne         $v1, $at, L_80033F38
    if (ctx->r3 != ctx->r1) {
        // 0x80033F0C: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_80033F38;
    }
    // 0x80033F0C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80033F10: jal         0x80033CA0
    // 0x80033F14: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_5;
    // 0x80033F14: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_5:
    // 0x80033F18: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80033F1C: jal         0x80033CA0
    // 0x80033F20: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_6;
    // 0x80033F20: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_6:
    // 0x80033F24: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x80033F28: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
    // 0x80033F2C: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x80033F30: b           L_80034060
    // 0x80033F34: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
        goto L_80034060;
    // 0x80033F34: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
L_80033F38:
    // 0x80033F38: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x80033F3C: bne         $v1, $at, L_80034060
    if (ctx->r3 != ctx->r1) {
        // 0x80033F40: sll         $t7, $t3, 2
        ctx->r15 = S32(ctx->r11 << 2);
            goto L_80034060;
    }
    // 0x80033F40: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80033F44: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x80033F48: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x80033F4C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80033F50: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x80033F54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80033F58: addiu       $t9, $v0, 0x5
    ctx->r25 = ADD32(ctx->r2, 0X5);
    // 0x80033F5C: bne         $a0, $zero, L_80033F70
    if (ctx->r4 != 0) {
        // 0x80033F60: lbu         $a1, -0x1($v0)
        ctx->r5 = MEM_BU(ctx->r2, -0X1);
            goto L_80033F70;
    }
    // 0x80033F60: lbu         $a1, -0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, -0X1);
    // 0x80033F64: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x80033F68: b           L_80033FB0
    // 0x80033F6C: sw          $t9, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r25;
        goto L_80033FB0;
    // 0x80033F6C: sw          $t9, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r25;
L_80033F70:
    // 0x80033F70: beq         $a0, $at, L_80033F7C
    if (ctx->r4 == ctx->r1) {
        // 0x80033F74: addiu       $t6, $a0, -0x1
        ctx->r14 = ADD32(ctx->r4, -0X1);
            goto L_80033F7C;
    }
    // 0x80033F74: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x80033F78: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_80033F7C:
    // 0x80033F7C: lbu         $t7, 0x2($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2);
    // 0x80033F80: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80033F84: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x80033F88: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80033F8C: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x80033F90: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x80033F94: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80033F98: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x80033F9C: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x80033FA0: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80033FA4: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80033FA8: subu        $t9, $v0, $v1
    ctx->r25 = SUB32(ctx->r2, ctx->r3);
    // 0x80033FAC: sw          $t9, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r25;
L_80033FB0:
    // 0x80033FB0: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x80033FB4: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
    // 0x80033FB8: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80033FBC: b           L_80034060
    // 0x80033FC0: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
        goto L_80034060;
    // 0x80033FC0: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
L_80033FC4:
    // 0x80033FC4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80033FC8: andi        $t9, $v1, 0x80
    ctx->r25 = ctx->r3 & 0X80;
    // 0x80033FCC: beq         $t9, $zero, L_80033FF4
    if (ctx->r25 == 0) {
        // 0x80033FD0: sh          $t7, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r15;
            goto L_80033FF4;
    }
    // 0x80033FD0: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
    // 0x80033FD4: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
    // 0x80033FD8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80033FDC: jal         0x80033CA0
    // 0x80033FE0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_7;
    // 0x80033FE0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_7:
    // 0x80033FE4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80033FE8: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x80033FEC: b           L_80034004
    // 0x80033FF0: sb          $t2, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = ctx->r10;
        goto L_80034004;
    // 0x80033FF0: sb          $t2, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = ctx->r10;
L_80033FF4:
    // 0x80033FF4: addu        $t8, $t4, $t3
    ctx->r24 = ADD32(ctx->r12, ctx->r11);
    // 0x80033FF8: lbu         $t7, 0xA8($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0XA8);
    // 0x80033FFC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80034000: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
L_80034004:
    // 0x80034004: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80034008: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x8003400C: andi        $t9, $v0, 0xF0
    ctx->r25 = ctx->r2 & 0XF0;
    // 0x80034010: beq         $t9, $at, L_8003405C
    if (ctx->r25 == ctx->r1) {
        // 0x80034014: addiu       $at, $zero, 0xD0
        ctx->r1 = ADD32(0, 0XD0);
            goto L_8003405C;
    }
    // 0x80034014: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x80034018: beq         $t9, $at, L_8003405C
    if (ctx->r25 == ctx->r1) {
        // 0x8003401C: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_8003405C;
    }
    // 0x8003401C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80034020: jal         0x80033CA0
    // 0x80034024: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_0_80033CA0(rdram, ctx);
        goto after_8;
    // 0x80034024: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_8:
    // 0x80034028: lbu         $t6, 0x8($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X8);
    // 0x8003402C: addiu       $at, $zero, 0x90
    ctx->r1 = ADD32(0, 0X90);
    // 0x80034030: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80034034: andi        $t8, $t6, 0xF0
    ctx->r24 = ctx->r14 & 0XF0;
    // 0x80034038: bne         $t8, $at, L_80034060
    if (ctx->r24 != ctx->r1) {
        // 0x8003403C: or          $t2, $t4, $zero
        ctx->r10 = ctx->r12 | 0;
            goto L_80034060;
    }
    // 0x8003403C: or          $t2, $t4, $zero
    ctx->r10 = ctx->r12 | 0;
    // 0x80034040: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80034044: jal         0x80033D64
    // 0x80034048: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    static_0_80033D64(rdram, ctx);
        goto after_9;
    // 0x80034048: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_9:
    // 0x8003404C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80034050: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80034054: b           L_80034060
    // 0x80034058: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
        goto L_80034060;
    // 0x80034058: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_8003405C:
    // 0x8003405C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80034060:
    // 0x80034060: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x80034064: lw          $t7, 0xC($t4)
    ctx->r15 = MEM_W(ctx->r12, 0XC);
    // 0x80034068: sw          $t1, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r9;
    // 0x8003406C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x80034070: addu        $t9, $t7, $t1
    ctx->r25 = ADD32(ctx->r15, ctx->r9);
    // 0x80034074: sw          $t9, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r25;
    // 0x80034078: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x8003407C: or          $t2, $t4, $zero
    ctx->r10 = ctx->r12 | 0;
    // 0x80034080: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80034084: beql        $t6, $at, L_800340A4
    if (ctx->r14 == ctx->r1) {
        // 0x80034088: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_800340A4;
    }
    goto skip_5;
    // 0x80034088: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    skip_5:
    // 0x8003408C: jal         0x80033D64
    // 0x80034090: addu        $t5, $t4, $t8
    ctx->r13 = ADD32(ctx->r12, ctx->r24);
    static_0_80033D64(rdram, ctx);
        goto after_10;
    // 0x80034090: addu        $t5, $t4, $t8
    ctx->r13 = ADD32(ctx->r12, ctx->r24);
    after_10:
    // 0x80034094: lw          $t7, 0xB8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XB8);
    // 0x80034098: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x8003409C: sw          $t9, 0xB8($t5)
    MEM_W(0XB8, ctx->r13) = ctx->r25;
    // 0x800340A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_800340A4:
    // 0x800340A4: sw          $t6, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->r14;
    // 0x800340A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800340AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800340B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800340B4: jr          $ra
    // 0x800340B8: nop

    return;
    // 0x800340B8: nop

;}
RECOMP_FUNC void func_8001369C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001369C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800136A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800136A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800136A8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800136AC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800136B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800136B4: blez        $t6, L_80013730
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800136B8: nop
    
            goto L_80013730;
    }
    // 0x800136B8: nop

L_800136BC:
    // 0x800136BC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800136C0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800136C4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800136C8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800136CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800136D0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800136D4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800136D8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800136DC: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x800136E0: nop

    // 0x800136E4: beq         $t1, $zero, L_80013718
    if (ctx->r9 == 0) {
        // 0x800136E8: nop
    
            goto L_80013718;
    }
    // 0x800136E8: nop

    // 0x800136EC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800136F0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800136F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800136F8: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800136FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80013700: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80013704: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80013708: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8001370C: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x80013710: jal         0x800309D0
    // 0x80013714: nop

    free_game(rdram, ctx);
        goto after_0;
    // 0x80013714: nop

    after_0:
L_80013718:
    // 0x80013718: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001371C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80013720: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80013724: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80013728: bne         $at, $zero, L_800136BC
    if (ctx->r1 != 0) {
        // 0x8001372C: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_800136BC;
    }
    // 0x8001372C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_80013730:
    // 0x80013730: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80013734: jal         0x800309D0
    // 0x80013738: nop

    free_game(rdram, ctx);
        goto after_1;
    // 0x80013738: nop

    after_1:
    // 0x8001373C: b           L_80013744
    // 0x80013740: nop

        goto L_80013744;
    // 0x80013740: nop

L_80013744:
    // 0x80013744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001374C: jr          $ra
    // 0x80013750: nop

    return;
    // 0x80013750: nop

;}
RECOMP_FUNC void _ldexpf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040A50: beq         $a2, $zero, L_80040A70
    if (ctx->r6 == 0) {
        // 0x80040A54: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80040A70;
    }
    // 0x80040A54: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80040A58: sllv        $t7, $t6, $a2
    ctx->r15 = S32(ctx->r14 << (ctx->r6 & 31));
    // 0x80040A5C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80040A60: nop

    // 0x80040A64: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80040A68: mul.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f6.d);
    // 0x80040A6C: nop

L_80040A70:
    // 0x80040A70: jr          $ra
    // 0x80040A74: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x80040A74: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
;}
RECOMP_FUNC void func_8002F32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F32C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8002F330: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002F334: jal         0x8001DEDC
    // 0x8002F338: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    UpdateActiveController(rdram, ctx);
        goto after_0;
    // 0x8002F338: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8002F33C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002F340: lw          $t6, 0x65EC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X65EC);
    // 0x8002F344: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002F348: beq         $t6, $at, L_8002F35C
    if (ctx->r14 == ctx->r1) {
        // 0x8002F34C: nop
    
            goto L_8002F35C;
    }
    // 0x8002F34C: nop

    // 0x8002F350: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8002F354: bne         $t6, $at, L_8002F3B8
    if (ctx->r14 != ctx->r1) {
        // 0x8002F358: nop
    
            goto L_8002F3B8;
    }
    // 0x8002F358: nop

L_8002F35C:
    // 0x8002F35C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002F360: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8002F364: lw          $a1, -0x1EA4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EA4);
    // 0x8002F368: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8002F36C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8002F370: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8002F374: jal         0x800372A0
    // 0x8002F378: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_1;
    // 0x8002F378: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8002F37C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8002F380: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8002F384: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002F388: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002F38C: addiu       $t9, $t9, -0x1C6C
    ctx->r25 = ADD32(ctx->r25, -0X1C6C);
    // 0x8002F390: addiu       $t7, $t7, -0x1C74
    ctx->r15 = ADD32(ctx->r15, -0X1C74);
    // 0x8002F394: lw          $a3, -0x1C6C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1C6C);
    // 0x8002F398: lw          $a1, -0x1C74($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1C74);
    // 0x8002F39C: addiu       $t8, $sp, 0x6C
    ctx->r24 = ADD32(ctx->r29, 0X6C);
    // 0x8002F3A0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8002F3A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8002F3A8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8002F3AC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8002F3B0: jal         0x80036360
    // 0x8002F3B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    guMtxXFMF(rdram, ctx);
        goto after_2;
    // 0x8002F3B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
L_8002F3B8:
    // 0x8002F3B8: jal         0x8002BAC8
    // 0x8002F3BC: nop

    func_8002BAC8(rdram, ctx);
        goto after_3;
    // 0x8002F3BC: nop

    after_3:
    // 0x8002F3C0: jal         0x8002EA68
    // 0x8002F3C4: nop

    func_8002EA68(rdram, ctx);
        goto after_4;
    // 0x8002F3C4: nop

    after_4:
    // 0x8002F3C8: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002F3CC: lb          $t0, 0x7688($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X7688);
    // 0x8002F3D0: nop

    // 0x8002F3D4: bne         $t0, $zero, L_8002F404
    if (ctx->r8 != 0) {
        // 0x8002F3D8: nop
    
            goto L_8002F404;
    }
    // 0x8002F3D8: nop

    // 0x8002F3DC: jal         0x8002D768
    // 0x8002F3E0: nop

    func_8002D768(rdram, ctx);
        goto after_5;
    // 0x8002F3E0: nop

    after_5:
    // 0x8002F3E4: jal         0x8002D128
    // 0x8002F3E8: nop

    Debug_HandleObjMovement(rdram, ctx);
        goto after_6;
    // 0x8002F3E8: nop

    after_6:
    // 0x8002F3EC: jal         0x8002DCA8
    // 0x8002F3F0: nop

    Debug_Parse_SetModeMenuOptions(rdram, ctx);
        goto after_7;
    // 0x8002F3F0: nop

    after_7:
    // 0x8002F3F4: jal         0x8002D9D4
    // 0x8002F3F8: nop

    func_8002D9D4(rdram, ctx);
        goto after_8;
    // 0x8002F3F8: nop

    after_8:
    // 0x8002F3FC: b           L_8002F44C
    // 0x8002F400: nop

        goto L_8002F44C;
    // 0x8002F400: nop

L_8002F404:
    // 0x8002F404: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002F408: lb          $t1, 0x7688($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X7688);
    // 0x8002F40C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002F410: bne         $t1, $at, L_8002F430
    if (ctx->r9 != ctx->r1) {
        // 0x8002F414: nop
    
            goto L_8002F430;
    }
    // 0x8002F414: nop

    // 0x8002F418: jal         0x8002E524
    // 0x8002F41C: nop

    func_8002E524(rdram, ctx);
        goto after_9;
    // 0x8002F41C: nop

    after_9:
    // 0x8002F420: jal         0x8002E23C
    // 0x8002F424: nop

    func_8002E23C(rdram, ctx);
        goto after_10;
    // 0x8002F424: nop

    after_10:
    // 0x8002F428: b           L_8002F44C
    // 0x8002F42C: nop

        goto L_8002F44C;
    // 0x8002F42C: nop

L_8002F430:
    // 0x8002F430: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002F434: lb          $t2, 0x7688($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7688);
    // 0x8002F438: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002F43C: bne         $t2, $at, L_8002F44C
    if (ctx->r10 != ctx->r1) {
        // 0x8002F440: nop
    
            goto L_8002F44C;
    }
    // 0x8002F440: nop

    // 0x8002F444: jal         0x8002E6E8
    // 0x8002F448: nop

    Debug_SaveMode(rdram, ctx);
        goto after_11;
    // 0x8002F448: nop

    after_11:
L_8002F44C:
    // 0x8002F44C: jal         0x80026548
    // 0x8002F450: nop

    func_80026548(rdram, ctx);
        goto after_12;
    // 0x8002F450: nop

    after_12:
    // 0x8002F454: jal         0x8002BE04
    // 0x8002F458: nop

    func_8002BE04(rdram, ctx);
        goto after_13;
    // 0x8002F458: nop

    after_13:
    // 0x8002F45C: jal         0x800663EC
    // 0x8002F460: nop

    func_800663EC(rdram, ctx);
        goto after_14;
    // 0x8002F460: nop

    after_14:
    // 0x8002F464: jal         0x800654AC
    // 0x8002F468: nop

    func_800654AC(rdram, ctx);
        goto after_15;
    // 0x8002F468: nop

    after_15:
    // 0x8002F46C: jal         0x8002B300
    // 0x8002F470: nop

    Handle_ObjView(rdram, ctx);
        goto after_16;
    // 0x8002F470: nop

    after_16:
    // 0x8002F474: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002F478: lb          $t3, 0x7688($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X7688);
    // 0x8002F47C: nop

    // 0x8002F480: bne         $t3, $zero, L_8002F4B4
    if (ctx->r11 != 0) {
        // 0x8002F484: nop
    
            goto L_8002F4B4;
    }
    // 0x8002F484: nop

    // 0x8002F488: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002F48C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8002F490: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8002F494: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002F498: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8002F49C: lwc1        $f12, 0x0($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8002F4A0: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x8002F4A4: jal         0x8002B640
    // 0x8002F4A8: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    Set_ObjView(rdram, ctx);
        goto after_17;
    // 0x8002F4A8: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    after_17:
    // 0x8002F4AC: b           L_8002F578
    // 0x8002F4B0: nop

        goto L_8002F578;
    // 0x8002F4B0: nop

L_8002F4B4:
    // 0x8002F4B4: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002F4B8: lb          $t5, 0x7688($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7688);
    // 0x8002F4BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002F4C0: bne         $t5, $at, L_8002F578
    if (ctx->r13 != ctx->r1) {
        // 0x8002F4C4: nop
    
            goto L_8002F578;
    }
    // 0x8002F4C4: nop

    // 0x8002F4C8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002F4CC: lh          $t6, 0x7692($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7692);
    // 0x8002F4D0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002F4D4: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8002F4D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002F4DC: lh          $t8, 0x76A8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X76A8);
    // 0x8002F4E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002F4E4: beq         $t8, $at, L_8002F578
    if (ctx->r24 == ctx->r1) {
        // 0x8002F4E8: nop
    
            goto L_8002F578;
    }
    // 0x8002F4E8: nop

    // 0x8002F4EC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002F4F0: lh          $t9, 0x7692($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7692);
    // 0x8002F4F4: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002F4F8: addiu       $t1, $t1, 0x76A8
    ctx->r9 = ADD32(ctx->r9, 0X76A8);
    // 0x8002F4FC: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x8002F500: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8002F504: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x8002F508: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002F50C: beq         $t3, $at, L_8002F578
    if (ctx->r11 == ctx->r1) {
        // 0x8002F510: nop
    
            goto L_8002F578;
    }
    // 0x8002F510: nop

    // 0x8002F514: lh          $t4, 0x4($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X4);
    // 0x8002F518: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002F51C: beq         $t4, $at, L_8002F578
    if (ctx->r12 == ctx->r1) {
        // 0x8002F520: nop
    
            goto L_8002F578;
    }
    // 0x8002F520: nop

    // 0x8002F524: lh          $t5, 0x6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X6);
    // 0x8002F528: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002F52C: beq         $t5, $at, L_8002F578
    if (ctx->r13 == ctx->r1) {
        // 0x8002F530: nop
    
            goto L_8002F578;
    }
    // 0x8002F530: nop

    // 0x8002F534: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002F538: lh          $t6, 0x7692($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7692);
    // 0x8002F53C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002F540: addiu       $t8, $t8, 0x76A8
    ctx->r24 = ADD32(ctx->r24, 0X76A8);
    // 0x8002F544: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8002F548: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002F54C: lh          $t3, 0x6($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X6);
    // 0x8002F550: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x8002F554: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8002F558: lh          $t1, 0x4($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X4);
    // 0x8002F55C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8002F560: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8002F564: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8002F568: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8002F56C: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002F570: jal         0x8002B640
    // 0x8002F574: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Set_ObjView(rdram, ctx);
        goto after_18;
    // 0x8002F574: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_18:
L_8002F578:
    // 0x8002F578: jal         0x8001994C
    // 0x8002F57C: nop

    func_8001994C(rdram, ctx);
        goto after_19;
    // 0x8002F57C: nop

    after_19:
    // 0x8002F580: b           L_8002F588
    // 0x8002F584: nop

        goto L_8002F588;
    // 0x8002F584: nop

L_8002F588:
    // 0x8002F588: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002F58C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8002F590: jr          $ra
    // 0x8002F594: nop

    return;
    // 0x8002F594: nop

;}
RECOMP_FUNC void alCSPNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800337A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800337A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800337A8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800337AC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800337B0: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x800337B4: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x800337B8: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x800337BC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800337C0: lw          $t6, -0x4AF0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4AF0);
    // 0x800337C4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800337C8: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x800337CC: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x800337D0: addiu       $t0, $zero, 0x3E80
    ctx->r8 = ADD32(0, 0X3E80);
    // 0x800337D4: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x800337D8: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    // 0x800337DC: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x800337E0: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x800337E4: sh          $t9, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r25;
    // 0x800337E8: sw          $t0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r8;
    // 0x800337EC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x800337F0: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x800337F4: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x800337F8: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x800337FC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80033800: sw          $t1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r9;
    // 0x80033804: lw          $t2, 0x14($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X14);
    // 0x80033808: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8003380C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80033810: sw          $t2, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r10;
    // 0x80033814: lw          $t3, 0x18($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X18);
    // 0x80033818: sh          $t4, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r12;
    // 0x8003381C: sw          $t3, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r11;
    // 0x80033820: lbu         $t5, 0x8($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X8);
    // 0x80033824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80033828: sb          $t5, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r13;
    // 0x8003382C: lbu         $a3, 0x8($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X8);
    // 0x80033830: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80033834: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80033838: jal         0x80035870
    // 0x8003383C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8003383C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80033840: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x80033844: jal         0x8003E4F4
    // 0x80033848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __initChanState(rdram, ctx);
        goto after_1;
    // 0x80033848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8003384C: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x80033850: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x80033854: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80033858: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003385C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80033860: jal         0x80035870
    // 0x80033864: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x80033864: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80033868: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x8003386C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80033870: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80033874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80033878: blez        $t8, L_800338A8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8003387C: addiu       $t1, $zero, 0x1C
        ctx->r9 = ADD32(0, 0X1C);
            goto L_800338A8;
    }
    // 0x8003387C: addiu       $t1, $zero, 0x1C
    ctx->r9 = ADD32(0, 0X1C);
    // 0x80033880: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80033884: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
L_80033888:
    // 0x80033888: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003388C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80033890: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x80033894: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80033898: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x8003389C: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800338A0: bnel        $at, $zero, L_80033888
    if (ctx->r1 != 0) {
        // 0x800338A4: lw          $t9, 0x6C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X6C);
            goto L_80033888;
    }
    goto skip_0;
    // 0x800338A4: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    skip_0:
L_800338A8:
    // 0x800338A8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x800338AC: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x800338B0: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x800338B4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800338B8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800338BC: jal         0x80035870
    // 0x800338C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x800338C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800338C4: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x800338C8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800338CC: jal         0x8003E9BC
    // 0x800338D0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    alEvtqNew(rdram, ctx);
        goto after_4;
    // 0x800338D0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    after_4:
    // 0x800338D4: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x800338D8: addiu       $t2, $t2, 0x318C
    ctx->r10 = ADD32(ctx->r10, 0X318C);
    // 0x800338DC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800338E0: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x800338E4: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x800338E8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800338EC: lw          $a0, -0x4AF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4AF0);
    // 0x800338F0: jal         0x8003EA30
    // 0x800338F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynAddPlayer(rdram, ctx);
        goto after_5;
    // 0x800338F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x800338F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800338FC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80033900: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80033904: jr          $ra
    // 0x80033908: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80033908: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80004548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004548: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000454C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004550: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80004554: lw          $t6, -0x5CC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CC0);
    // 0x80004558: nop

    // 0x8000455C: bne         $t6, $zero, L_8000456C
    if (ctx->r14 != 0) {
        // 0x80004560: nop
    
            goto L_8000456C;
    }
    // 0x80004560: nop

    // 0x80004564: b           L_80004600
    // 0x80004568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80004600;
    // 0x80004568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000456C:
    // 0x8000456C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80004570: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80004574: jal         0x800347F0
    // 0x80004578: nop

    alCSPGetTempo(rdram, ctx);
        goto after_0;
    // 0x80004578: nop

    after_0:
    // 0x8000457C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80004580: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80004584: nop

    // 0x80004588: bne         $t7, $zero, L_80004598
    if (ctx->r15 != 0) {
        // 0x8000458C: nop
    
            goto L_80004598;
    }
    // 0x8000458C: nop

    // 0x80004590: b           L_80004600
    // 0x80004594: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80004600;
    // 0x80004594: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80004598:
    // 0x80004598: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8000459C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800045A0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800045A4: lwc1        $f8, -0x4540($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4540);
    // 0x800045A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800045AC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800045B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800045B4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800045B8: nop

    // 0x800045BC: div.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x800045C0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800045C4: nop

    // 0x800045C8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800045CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800045D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800045D4: nop

    // 0x800045D8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800045DC: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x800045E0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800045E4: sh          $t0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r8;
    // 0x800045E8: nop

    // 0x800045EC: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x800045F0: b           L_80004600
    // 0x800045F4: nop

        goto L_80004600;
    // 0x800045F4: nop

    // 0x800045F8: b           L_80004600
    // 0x800045FC: nop

        goto L_80004600;
    // 0x800045FC: nop

L_80004600:
    // 0x80004600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004604: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80004608: jr          $ra
    // 0x8000460C: nop

    return;
    // 0x8000460C: nop

;}
RECOMP_FUNC void func_80003158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003158: jr          $ra
    // 0x8000315C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    return;
    // 0x8000315C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80003160: jr          $ra
    // 0x80003164: nop

    return;
    // 0x80003164: nop

    // 0x80003168: jr          $ra
    // 0x8000316C: nop

    return;
    // 0x8000316C: nop

;}
RECOMP_FUNC void thread4_func(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001FF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80001FF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80001FFC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80002000: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80002004: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80002008: nop

    // 0x8000200C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_80002010:
    // 0x80002010: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80002014: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80002018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8000201C: jal         0x80031880
    // 0x80002020: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80002020: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_0:
    // 0x80002024: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80002028: addiu       $at, $zero, 0x29A
    ctx->r1 = ADD32(0, 0X29A);
    // 0x8000202C: beq         $s0, $at, L_80002060
    if (ctx->r16 == ctx->r1) {
        // 0x80002030: nop
    
            goto L_80002060;
    }
    // 0x80002030: nop

    // 0x80002034: addiu       $at, $zero, 0x29B
    ctx->r1 = ADD32(0, 0X29B);
    // 0x80002038: beq         $s0, $at, L_80002074
    if (ctx->r16 == ctx->r1) {
        // 0x8000203C: nop
    
            goto L_80002074;
    }
    // 0x8000203C: nop

    // 0x80002040: addiu       $at, $zero, 0x29C
    ctx->r1 = ADD32(0, 0X29C);
    // 0x80002044: beq         $s0, $at, L_80002088
    if (ctx->r16 == ctx->r1) {
        // 0x80002048: nop
    
            goto L_80002088;
    }
    // 0x80002048: nop

    // 0x8000204C: addiu       $at, $zero, 0x29D
    ctx->r1 = ADD32(0, 0X29D);
    // 0x80002050: beq         $s0, $at, L_8000209C
    if (ctx->r16 == ctx->r1) {
        // 0x80002054: nop
    
            goto L_8000209C;
    }
    // 0x80002054: nop

    // 0x80002058: b           L_80002110
    // 0x8000205C: nop

        goto L_80002110;
    // 0x8000205C: nop

L_80002060:
    // 0x80002060: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80002064: jal         0x80002130
    // 0x80002068: nop

    func_80002130(rdram, ctx);
        goto after_1;
    // 0x80002068: nop

    after_1:
    // 0x8000206C: b           L_80002110
    // 0x80002070: nop

        goto L_80002110;
    // 0x80002070: nop

L_80002074:
    // 0x80002074: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80002078: jal         0x800022A0
    // 0x8000207C: nop

    func_800022A0(rdram, ctx);
        goto after_2;
    // 0x8000207C: nop

    after_2:
    // 0x80002080: b           L_80002110
    // 0x80002084: nop

        goto L_80002110;
    // 0x80002084: nop

L_80002088:
    // 0x80002088: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8000208C: jal         0x80002424
    // 0x80002090: nop

    func_80002424(rdram, ctx);
        goto after_3;
    // 0x80002090: nop

    after_3:
    // 0x80002094: b           L_80002110
    // 0x80002098: nop

        goto L_80002110;
    // 0x80002098: nop

L_8000209C:
    // 0x8000209C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800020A0: nop

    // 0x800020A4: lw          $t8, 0x260($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X260);
    // 0x800020A8: nop

    // 0x800020AC: beq         $t8, $zero, L_800020E4
    if (ctx->r24 == 0) {
        // 0x800020B0: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_800020E4;
    }
    // 0x800020B0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_800020B4:
    // 0x800020B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800020B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800020BC: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x800020C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800020C4: jal         0x80032010
    // 0x800020C8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    osSendMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x800020C8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    after_4:
    // 0x800020CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800020D0: nop

    // 0x800020D4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x800020D8: nop

    // 0x800020DC: bne         $t1, $zero, L_800020B4
    if (ctx->r9 != 0) {
        // 0x800020E0: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_800020B4;
    }
    // 0x800020E0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_800020E4:
    // 0x800020E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800020E8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800020EC: sw          $t2, 0x524C($at)
    MEM_W(0X524C, ctx->r1) = ctx->r10;
    // 0x800020F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800020F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800020F8: jal         0x800319F0
    // 0x800020FC: nop

    osViSetYScale_recomp(rdram, ctx);
        goto after_5;
    // 0x800020FC: nop

    after_5:
    // 0x80002100: jal         0x80031A50
    // 0x80002104: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_6;
    // 0x80002104: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x80002108: b           L_80002110
    // 0x8000210C: nop

        goto L_80002110;
    // 0x8000210C: nop

L_80002110:
    // 0x80002110: b           L_80002010
    // 0x80002114: nop

        goto L_80002010;
    // 0x80002114: nop

    // 0x80002118: b           L_80002120
    // 0x8000211C: nop

        goto L_80002120;
    // 0x8000211C: nop

L_80002120:
    // 0x80002120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80002124: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80002128: jr          $ra
    // 0x8000212C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8000212C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002A8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A8B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A8B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A8BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002A8C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002A8C4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8002A8C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002A8CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002A8D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A8D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002A8D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A8DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002A8E0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002A8E4: lwc1        $f4, 0x418C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8002A8E8: nop

    // 0x8002A8EC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8002A8F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002A8F4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8002A8F8: jal         0x8002A560
    // 0x8002A8FC: nop

    func_8002A560(rdram, ctx);
        goto after_0;
    // 0x8002A8FC: nop

    after_0:
    // 0x8002A900: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8002A904: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8002A908: nop

    // 0x8002A90C: bgez        $t8, L_8002A92C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8002A910: nop
    
            goto L_8002A92C;
    }
    // 0x8002A910: nop

    // 0x8002A914: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002A918: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002A91C: jal         0x80015538
    // 0x8002A920: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8002A920: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x8002A924: b           L_8002A964
    // 0x8002A928: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_8002A964;
    // 0x8002A928: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_8002A92C:
    // 0x8002A92C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8002A930: nop

    // 0x8002A934: blez        $t9, L_8002A954
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8002A938: nop
    
            goto L_8002A954;
    }
    // 0x8002A938: nop

    // 0x8002A93C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002A940: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002A944: jal         0x80015538
    // 0x8002A948: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8002A948: nop

    after_2:
    // 0x8002A94C: b           L_8002A964
    // 0x8002A950: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_8002A964;
    // 0x8002A950: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_8002A954:
    // 0x8002A954: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002A958: jal         0x8002A46C
    // 0x8002A95C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x8002A95C: nop

    after_3:
    // 0x8002A960: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_8002A964:
    // 0x8002A964: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8002A968: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002A96C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002A970: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002A974: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8002A978: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002A97C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8002A980: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002A984: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8002A988: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x8002A98C: b           L_8002A994
    // 0x8002A990: nop

        goto L_8002A994;
    // 0x8002A990: nop

L_8002A994:
    // 0x8002A994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002A99C: jr          $ra
    // 0x8002A9A0: nop

    return;
    // 0x8002A9A0: nop

;}
RECOMP_FUNC void func_80025D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025D4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80025D50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80025D54: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80025D58: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80025D5C: nop

    // 0x80025D60: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80025D64: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80025D68: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80025D6C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80025D70: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80025D74: nop

    // 0x80025D78: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80025D7C: beq         $at, $zero, L_80025D90
    if (ctx->r1 == 0) {
        // 0x80025D80: nop
    
            goto L_80025D90;
    }
    // 0x80025D80: nop

    // 0x80025D84: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x80025D88: b           L_80025D98
    // 0x80025D8C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
        goto L_80025D98;
    // 0x80025D8C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_80025D90:
    // 0x80025D90: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x80025D94: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
L_80025D98:
    // 0x80025D98: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80025D9C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80025DA0: blez        $t1, L_80025DD8
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80025DA4: nop
    
            goto L_80025DD8;
    }
    // 0x80025DA4: nop

L_80025DA8:
    // 0x80025DA8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80025DAC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80025DB0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025DB4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80025DB8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80025DBC: sb          $zero, 0x7450($at)
    MEM_B(0X7450, ctx->r1) = 0;
    // 0x80025DC0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80025DC4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80025DC8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80025DCC: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80025DD0: bne         $at, $zero, L_80025DA8
    if (ctx->r1 != 0) {
        // 0x80025DD4: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_80025DA8;
    }
    // 0x80025DD4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80025DD8:
    // 0x80025DD8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80025DDC: jal         0x80024E1C
    // 0x80025DE0: nop

    func_80024E1C(rdram, ctx);
        goto after_0;
    // 0x80025DE0: nop

    after_0:
    // 0x80025DE4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80025DE8: nop

    // 0x80025DEC: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80025DF0: beq         $at, $zero, L_80025E10
    if (ctx->r1 == 0) {
        // 0x80025DF4: nop
    
            goto L_80025E10;
    }
    // 0x80025DF4: nop

    // 0x80025DF8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80025DFC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80025E00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80025E04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80025E08: jal         0x8002536C
    // 0x80025E0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8002536C(rdram, ctx);
        goto after_1;
    // 0x80025E0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80025E10:
    // 0x80025E10: b           L_80025E18
    // 0x80025E14: nop

        goto L_80025E18;
    // 0x80025E14: nop

L_80025E18:
    // 0x80025E18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80025E1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80025E20: jr          $ra
    // 0x80025E24: nop

    return;
    // 0x80025E24: nop

;}
RECOMP_FUNC void _Ldtob(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047880: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x80047884: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80047888: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x8004788C: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80047890: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80047894: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80047898: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8004789C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800478A0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800478A4: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x800478A8: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x800478AC: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x800478B0: addiu       $s5, $sp, 0xB0
    ctx->r21 = ADD32(ctx->r29, 0XB0);
    // 0x800478B4: ldc1        $f20, 0x0($a0)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r4, 0X0);
    // 0x800478B8: bgez        $v0, L_800478C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800478BC: addiu       $t7, $zero, 0x6
        ctx->r15 = ADD32(0, 0X6);
            goto L_800478C8;
    }
    // 0x800478BC: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x800478C0: b           L_800478F4
    // 0x800478C4: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
        goto L_800478F4;
    // 0x800478C4: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
L_800478C8:
    // 0x800478C8: bne         $v0, $zero, L_800478F4
    if (ctx->r2 != 0) {
        // 0x800478CC: lbu         $t8, 0xD7($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0XD7);
            goto L_800478F4;
    }
    // 0x800478CC: lbu         $t8, 0xD7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XD7);
    // 0x800478D0: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x800478D4: beq         $t8, $at, L_800478E8
    if (ctx->r24 == ctx->r1) {
        // 0x800478D8: sw          $t8, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r24;
            goto L_800478E8;
    }
    // 0x800478D8: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x800478DC: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x800478E0: bnel        $t8, $at, L_800478F8
    if (ctx->r24 != ctx->r1) {
        // 0x800478E4: lw          $t6, 0xD0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XD0);
            goto L_800478F8;
    }
    goto skip_0;
    // 0x800478E4: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    skip_0:
L_800478E8:
    // 0x800478E8: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x800478EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800478F0: sw          $t9, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->r25;
L_800478F4:
    // 0x800478F4: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
L_800478F8:
    // 0x800478F8: addiu       $at, $zero, 0x7FF
    ctx->r1 = ADD32(0, 0X7FF);
    // 0x800478FC: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x80047900: andi        $v1, $a0, 0x7FF0
    ctx->r3 = ctx->r4 & 0X7FF0;
    // 0x80047904: sra         $t8, $v1, 4
    ctx->r24 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80047908: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8004790C: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80047910: bne         $v1, $at, L_80047974
    if (ctx->r3 != ctx->r1) {
        // 0x80047914: nop
    
            goto L_80047974;
    }
    // 0x80047914: nop

    // 0x80047918: sh          $zero, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = 0;
    // 0x8004791C: lhu         $t8, 0x0($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X0);
    // 0x80047920: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80047924: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80047928: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8004792C: bnel        $t9, $zero, L_80047958
    if (ctx->r25 != 0) {
        // 0x80047930: sra         $t7, $v0, 16
        ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80047958;
    }
    goto skip_1;
    // 0x80047930: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    skip_1:
    // 0x80047934: lhu         $t7, 0x2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2);
    // 0x80047938: bnel        $t7, $zero, L_80047958
    if (ctx->r15 != 0) {
        // 0x8004793C: sra         $t7, $v0, 16
        ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80047958;
    }
    goto skip_2;
    // 0x8004793C: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    skip_2:
    // 0x80047940: lhu         $t8, 0x4($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X4);
    // 0x80047944: bnel        $t8, $zero, L_80047958
    if (ctx->r24 != 0) {
        // 0x80047948: sra         $t7, $v0, 16
        ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80047958;
    }
    goto skip_3;
    // 0x80047948: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    skip_3:
    // 0x8004794C: lhu         $t9, 0x6($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X6);
    // 0x80047950: beq         $t9, $zero, L_80047960
    if (ctx->r25 == 0) {
        // 0x80047954: sra         $t7, $v0, 16
        ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80047960;
    }
    // 0x80047954: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
L_80047958:
    // 0x80047958: b           L_800479AC
    // 0x8004795C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_800479AC;
    // 0x8004795C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80047960:
    // 0x80047960: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80047964: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80047968: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004796C: b           L_800479AC
    // 0x80047970: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_800479AC;
    // 0x80047970: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80047974:
    // 0x80047974: blez        $v1, L_80047998
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80047978: andi        $t8, $a0, 0x800F
        ctx->r24 = ctx->r4 & 0X800F;
            goto L_80047998;
    }
    // 0x80047978: andi        $t8, $a0, 0x800F
    ctx->r24 = ctx->r4 & 0X800F;
    // 0x8004797C: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x80047980: ori         $t6, $t8, 0x3FF0
    ctx->r14 = ctx->r24 | 0X3FF0;
    // 0x80047984: addiu       $t7, $v1, -0x3FE
    ctx->r15 = ADD32(ctx->r3, -0X3FE);
    // 0x80047988: sh          $t6, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r14;
    // 0x8004798C: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x80047990: b           L_800479AC
    // 0x80047994: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800479AC;
    // 0x80047994: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80047998:
    // 0x80047998: bgez        $v1, L_800479A8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8004799C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800479A8;
    }
    // 0x8004799C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800479A0: b           L_800479AC
    // 0x800479A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800479AC;
    // 0x800479A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800479A8:
    // 0x800479A8: sh          $zero, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = 0;
L_800479AC:
    // 0x800479AC: blez        $v0, L_800479F8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800479B0: sll         $t8, $v0, 16
        ctx->r24 = S32(ctx->r2 << 16);
            goto L_800479F8;
    }
    // 0x800479B0: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x800479B4: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x800479B8: sra         $t6, $t8, 16
    ctx->r14 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800479BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800479C0: bne         $t6, $at, L_800479D4
    if (ctx->r14 != ctx->r1) {
        // 0x800479C4: lw          $t9, 0xD0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XD0);
            goto L_800479D4;
    }
    // 0x800479C4: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x800479C8: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800479CC: b           L_800479DC
    // 0x800479D0: addiu       $a1, $a1, -0x36E8
    ctx->r5 = ADD32(ctx->r5, -0X36E8);
        goto L_800479DC;
    // 0x800479D0: addiu       $a1, $a1, -0x36E8
    ctx->r5 = ADD32(ctx->r5, -0X36E8);
L_800479D4:
    // 0x800479D4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800479D8: addiu       $a1, $a1, -0x36E4
    ctx->r5 = ADD32(ctx->r5, -0X36E4);
L_800479DC:
    // 0x800479DC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800479E0: sw          $t7, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r15;
    // 0x800479E4: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x800479E8: jal         0x8003A840
    // 0x800479EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800479EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x800479F0: b           L_80047DA8
    // 0x800479F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80047DA8;
    // 0x800479F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800479F8:
    // 0x800479F8: sra         $t6, $t8, 16
    ctx->r14 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800479FC: bne         $t6, $zero, L_80047A0C
    if (ctx->r14 != 0) {
        // 0x80047A00: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80047A0C;
    }
    // 0x80047A00: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80047A04: b           L_80047D90
    // 0x80047A08: sh          $zero, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = 0;
        goto L_80047D90;
    // 0x80047A08: sh          $zero, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = 0;
L_80047A0C:
    // 0x80047A0C: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x80047A10: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80047A14: lbu         $t7, 0xD7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XD7);
    // 0x80047A18: lh          $t9, 0x9A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X9A);
    // 0x80047A1C: c.lt.d      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.d < ctx->f2.d;
    // 0x80047A20: addiu       $at, $zero, 0x7597
    ctx->r1 = ADD32(0, 0X7597);
    // 0x80047A24: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80047A28: addiu       $s5, $sp, 0xB1
    ctx->r21 = ADD32(ctx->r29, 0XB1);
    // 0x80047A2C: bc1f        L_80047A38
    if (!c1cs) {
        // 0x80047A30: sw          $t7, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r15;
            goto L_80047A38;
    }
    // 0x80047A30: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x80047A34: neg.d       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f20.d = -ctx->f20.d;
L_80047A38:
    // 0x80047A38: multu       $t9, $at
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80047A3C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80047A40: ori         $at, $at, 0x86A0
    ctx->r1 = ctx->r1 | 0X86A0;
    // 0x80047A44: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80047A48: mflo        $t8
    ctx->r24 = lo;
    // 0x80047A4C: nop

    // 0x80047A50: nop

    // 0x80047A54: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80047A58: mflo        $t6
    ctx->r14 = lo;
    // 0x80047A5C: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x80047A60: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80047A64: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80047A68: bgez        $t8, L_80047AD0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80047A6C: sh          $t7, 0x9A($sp)
        MEM_H(0X9A, ctx->r29) = ctx->r15;
            goto L_80047AD0;
    }
    // 0x80047A6C: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x80047A70: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80047A74: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80047A78: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80047A7C: subu        $a0, $t6, $t8
    ctx->r4 = SUB32(ctx->r14, ctx->r24);
    // 0x80047A80: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80047A84: and         $v0, $a0, $at
    ctx->r2 = ctx->r4 & ctx->r1;
    // 0x80047A88: negu        $t9, $v0
    ctx->r25 = SUB32(0, ctx->r2);
    // 0x80047A8C: blez        $v0, L_80047B40
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80047A90: sh          $t9, 0x9A($sp)
        MEM_H(0X9A, ctx->r29) = ctx->r25;
            goto L_80047B40;
    }
    // 0x80047A90: sh          $t9, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r25;
    // 0x80047A94: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80047A98: addiu       $a0, $a0, -0x3730
    ctx->r4 = ADD32(ctx->r4, -0X3730);
L_80047A9C:
    // 0x80047A9C: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80047AA0: beq         $t6, $zero, L_80047ABC
    if (ctx->r14 == 0) {
        // 0x80047AA4: sra         $t9, $v0, 1
        ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80047ABC;
    }
    // 0x80047AA4: sra         $t9, $v0, 1
    ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80047AA8: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x80047AAC: addu        $t7, $a0, $t8
    ctx->r15 = ADD32(ctx->r4, ctx->r24);
    // 0x80047AB0: ldc1        $f4, 0x0($t7)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r15, 0X0);
    // 0x80047AB4: mul.d       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f4.d); 
    ctx->f20.d = MUL_D(ctx->f20.d, ctx->f4.d);
    // 0x80047AB8: nop

L_80047ABC:
    // 0x80047ABC: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80047AC0: bgtz        $t9, L_80047A9C
    if (SIGNED(ctx->r25) > 0) {
        // 0x80047AC4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80047A9C;
    }
    // 0x80047AC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80047AC8: b           L_80047B44
    // 0x80047ACC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
        goto L_80047B44;
    // 0x80047ACC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
L_80047AD0:
    // 0x80047AD0: lh          $t6, 0x9A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X9A);
    // 0x80047AD4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80047AD8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80047ADC: blez        $t6, L_80047B40
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80047AE0: andi        $t8, $t6, 0xFFFC
        ctx->r24 = ctx->r14 & 0XFFFC;
            goto L_80047B40;
    }
    // 0x80047AE0: andi        $t8, $t6, 0xFFFC
    ctx->r24 = ctx->r14 & 0XFFFC;
    // 0x80047AE4: sll         $v0, $t8, 16
    ctx->r2 = S32(ctx->r24 << 16);
    // 0x80047AE8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80047AEC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80047AF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80047AF4: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80047AF8: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80047AFC: sh          $t8, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r24;
    // 0x80047B00: blez        $t6, L_80047B3C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80047B04: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80047B3C;
    }
    // 0x80047B04: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80047B08: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80047B0C: addiu       $a0, $a0, -0x3730
    ctx->r4 = ADD32(ctx->r4, -0X3730);
L_80047B10:
    // 0x80047B10: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80047B14: beq         $t7, $zero, L_80047B30
    if (ctx->r15 == 0) {
        // 0x80047B18: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80047B30;
    }
    // 0x80047B18: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80047B1C: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x80047B20: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80047B24: ldc1        $f6, 0x0($t9)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r25, 0X0);
    // 0x80047B28: mul.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x80047B2C: nop

L_80047B30:
    // 0x80047B30: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80047B34: bgtz        $t6, L_80047B10
    if (SIGNED(ctx->r14) > 0) {
        // 0x80047B38: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80047B10;
    }
    // 0x80047B38: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80047B3C:
    // 0x80047B3C: div.d       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f0.d); 
    ctx->f20.d = DIV_D(ctx->f20.d, ctx->f0.d);
L_80047B40:
    // 0x80047B40: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
L_80047B44:
    // 0x80047B44: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x80047B48: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x80047B4C: bne         $t7, $at, L_80047B60
    if (ctx->r15 != ctx->r1) {
        // 0x80047B50: addiu       $t6, $zero, 0x30
        ctx->r14 = ADD32(0, 0X30);
            goto L_80047B60;
    }
    // 0x80047B50: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x80047B54: lh          $a1, 0x9A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X9A);
    // 0x80047B58: b           L_80047B60
    // 0x80047B5C: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
        goto L_80047B60;
    // 0x80047B5C: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
L_80047B60:
    // 0x80047B60: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x80047B64: addu        $s4, $a1, $t9
    ctx->r20 = ADD32(ctx->r5, ctx->r25);
    // 0x80047B68: slti        $at, $s4, 0x14
    ctx->r1 = SIGNED(ctx->r20) < 0X14 ? 1 : 0;
    // 0x80047B6C: bne         $at, $zero, L_80047B78
    if (ctx->r1 != 0) {
        // 0x80047B70: nop
    
            goto L_80047B78;
    }
    // 0x80047B70: nop

    // 0x80047B74: addiu       $s4, $zero, 0x13
    ctx->r20 = ADD32(0, 0X13);
L_80047B78:
    // 0x80047B78: blez        $s4, L_80047C48
    if (SIGNED(ctx->r20) <= 0) {
        // 0x80047B7C: sb          $t6, 0xB0($sp)
        MEM_B(0XB0, ctx->r29) = ctx->r14;
            goto L_80047C48;
    }
    // 0x80047B7C: sb          $t6, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r14;
    // 0x80047B80: c.lt.d      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.d < ctx->f20.d;
    // 0x80047B84: addiu       $s3, $zero, 0x30
    ctx->r19 = ADD32(0, 0X30);
    // 0x80047B88: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
    // 0x80047B8C: bc1fl       L_80047C4C
    if (!c1cs) {
        // 0x80047B90: lh          $t8, 0x9A($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X9A);
            goto L_80047C4C;
    }
    goto skip_4;
    // 0x80047B90: lh          $t8, 0x9A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X9A);
    skip_4:
    // 0x80047B94: trunc.w.d   $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_D(ctx->f20.d);
L_80047B98:
    // 0x80047B98: addiu       $s4, $s4, -0x8
    ctx->r20 = ADD32(ctx->r20, -0X8);
    // 0x80047B9C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80047BA0: mfc1        $s1, $f8
    ctx->r17 = (int32_t)ctx->f8.u32l;
    // 0x80047BA4: blez        $s4, L_80047BC8
    if (SIGNED(ctx->r20) <= 0) {
        // 0x80047BA8: nop
    
            goto L_80047BC8;
    }
    // 0x80047BA8: nop

    // 0x80047BAC: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x80047BB0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80047BB4: ldc1        $f8, -0x36D8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X36D8);
    // 0x80047BB8: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x80047BBC: sub.d       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f20.d - ctx->f4.d;
    // 0x80047BC0: mul.d       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f20.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80047BC4: nop

L_80047BC8:
    // 0x80047BC8: blez        $s1, L_80047C10
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80047BCC: addiu       $s0, $zero, 0x8
        ctx->r16 = ADD32(0, 0X8);
            goto L_80047C10;
    }
    // 0x80047BCC: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x80047BD0: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x80047BD4: bltz        $s0, L_80047C10
    if (SIGNED(ctx->r16) < 0) {
        // 0x80047BD8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80047C10;
    }
    // 0x80047BD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80047BDC:
    // 0x80047BDC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80047BE0: jal         0x80047ED0
    // 0x80047BE4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ldiv_recomp(rdram, ctx);
        goto after_1;
    // 0x80047BE4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x80047BE8: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x80047BEC: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x80047BF0: addiu       $t9, $t8, 0x30
    ctx->r25 = ADD32(ctx->r24, 0X30);
    // 0x80047BF4: sb          $t9, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r25;
    // 0x80047BF8: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80047BFC: blezl       $s1, L_80047C14
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80047C00: mtc1        $zero, $f3
        ctx->f_odd[(3 - 1) * 2] = 0;
            goto L_80047C14;
    }
    goto skip_5;
    // 0x80047C00: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    skip_5:
    // 0x80047C04: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80047C08: bgezl       $s0, L_80047BDC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80047C0C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80047BDC;
    }
    goto skip_6;
    // 0x80047C0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_6:
L_80047C10:
    // 0x80047C10: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
L_80047C14:
    // 0x80047C14: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80047C18: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80047C1C: bltz        $s0, L_80047C30
    if (SIGNED(ctx->r16) < 0) {
        // 0x80047C20: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_80047C30;
    }
L_80047C20:
    // 0x80047C20: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80047C24: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x80047C28: bgez        $s0, L_80047C20
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80047C2C: sb          $s3, 0x0($s5)
        MEM_B(0X0, ctx->r21) = ctx->r19;
            goto L_80047C20;
    }
    // 0x80047C2C: sb          $s3, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r19;
L_80047C30:
    // 0x80047C30: blez        $s4, L_80047C48
    if (SIGNED(ctx->r20) <= 0) {
        // 0x80047C34: addiu       $s5, $s5, 0x8
        ctx->r21 = ADD32(ctx->r21, 0X8);
            goto L_80047C48;
    }
    // 0x80047C34: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80047C38: c.lt.d      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.d < ctx->f20.d;
    // 0x80047C3C: nop

    // 0x80047C40: bc1tl       L_80047B98
    if (c1cs) {
        // 0x80047C44: trunc.w.d   $f8, $f20
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_D(ctx->f20.d);
            goto L_80047B98;
    }
    goto skip_7;
    // 0x80047C44: trunc.w.d   $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_D(ctx->f20.d);
    skip_7:
L_80047C48:
    // 0x80047C48: lh          $t8, 0x9A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X9A);
L_80047C4C:
    // 0x80047C4C: lbu         $t6, 0xB1($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XB1);
    // 0x80047C50: addiu       $t7, $sp, 0xB0
    ctx->r15 = ADD32(ctx->r29, 0XB0);
    // 0x80047C54: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80047C58: subu        $s4, $s5, $t7
    ctx->r20 = SUB32(ctx->r21, ctx->r15);
    // 0x80047C5C: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x80047C60: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x80047C64: sh          $t9, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r25;
    // 0x80047C68: bne         $v0, $t6, L_80047C90
    if (ctx->r2 != ctx->r14) {
        // 0x80047C6C: addiu       $s5, $sp, 0xB1
        ctx->r21 = ADD32(ctx->r29, 0XB1);
            goto L_80047C90;
    }
    // 0x80047C6C: addiu       $s5, $sp, 0xB1
    ctx->r21 = ADD32(ctx->r29, 0XB1);
    // 0x80047C70: lh          $t7, 0x9A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X9A);
L_80047C74:
    // 0x80047C74: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80047C78: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x80047C7C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80047C80: sh          $t8, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r24;
    // 0x80047C84: lbu         $t9, 0x0($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X0);
    // 0x80047C88: beql        $v0, $t9, L_80047C74
    if (ctx->r2 == ctx->r25) {
        // 0x80047C8C: lh          $t7, 0x9A($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X9A);
            goto L_80047C74;
    }
    goto skip_8;
    // 0x80047C8C: lh          $t7, 0x9A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X9A);
    skip_8:
L_80047C90:
    // 0x80047C90: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80047C94: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x80047C98: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x80047C9C: bne         $t6, $at, L_80047CB0
    if (ctx->r14 != ctx->r1) {
        // 0x80047CA0: lw          $t7, 0x48($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X48);
            goto L_80047CB0;
    }
    // 0x80047CA0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80047CA4: lh          $a1, 0x9A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X9A);
    // 0x80047CA8: b           L_80047CD0
    // 0x80047CAC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_80047CD0;
    // 0x80047CAC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80047CB0:
    // 0x80047CB0: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x80047CB4: beq         $t7, $at, L_80047CC4
    if (ctx->r15 == ctx->r1) {
        // 0x80047CB8: addiu       $at, $zero, 0x45
        ctx->r1 = ADD32(0, 0X45);
            goto L_80047CC4;
    }
    // 0x80047CB8: addiu       $at, $zero, 0x45
    ctx->r1 = ADD32(0, 0X45);
    // 0x80047CBC: bne         $t7, $at, L_80047CCC
    if (ctx->r15 != ctx->r1) {
        // 0x80047CC0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80047CCC;
    }
    // 0x80047CC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047CC4:
    // 0x80047CC4: b           L_80047CCC
    // 0x80047CC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047CCC;
    // 0x80047CC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047CCC:
    // 0x80047CCC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80047CD0:
    // 0x80047CD0: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x80047CD4: addu        $s3, $a1, $t9
    ctx->r19 = ADD32(ctx->r5, ctx->r25);
    // 0x80047CD8: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80047CDC: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80047CE0: slt         $at, $s4, $s3
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80047CE4: beq         $at, $zero, L_80047CF8
    if (ctx->r1 == 0) {
        // 0x80047CE8: nop
    
            goto L_80047CF8;
    }
    // 0x80047CE8: nop

    // 0x80047CEC: sll         $s3, $s4, 16
    ctx->r19 = S32(ctx->r20 << 16);
    // 0x80047CF0: sra         $t8, $s3, 16
    ctx->r24 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80047CF4: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
L_80047CF8:
    // 0x80047CF8: blez        $s3, L_80047D90
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80047CFC: slt         $at, $s3, $s4
        ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_80047D90;
    }
    // 0x80047CFC: slt         $at, $s3, $s4
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80047D00: beq         $at, $zero, L_80047D20
    if (ctx->r1 == 0) {
        // 0x80047D04: addu        $v0, $s3, $s5
        ctx->r2 = ADD32(ctx->r19, ctx->r21);
            goto L_80047D20;
    }
    // 0x80047D04: addu        $v0, $s3, $s5
    ctx->r2 = ADD32(ctx->r19, ctx->r21);
    // 0x80047D08: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80047D0C: slti        $at, $t9, 0x35
    ctx->r1 = SIGNED(ctx->r25) < 0X35 ? 1 : 0;
    // 0x80047D10: bnel        $at, $zero, L_80047D24
    if (ctx->r1 != 0) {
        // 0x80047D14: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_80047D24;
    }
    goto skip_9;
    // 0x80047D14: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    skip_9:
    // 0x80047D18: b           L_80047D28
    // 0x80047D1C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
        goto L_80047D28;
    // 0x80047D1C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
L_80047D20:
    // 0x80047D20: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_80047D24:
    // 0x80047D24: addu        $v0, $s3, $s5
    ctx->r2 = ADD32(ctx->r19, ctx->r21);
L_80047D28:
    // 0x80047D28: lbu         $t6, -0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, -0X1);
    // 0x80047D2C: addiu       $v1, $s3, -0x1
    ctx->r3 = ADD32(ctx->r19, -0X1);
    // 0x80047D30: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80047D34: bne         $a1, $t6, L_80047D5C
    if (ctx->r5 != ctx->r14) {
        // 0x80047D38: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_80047D5C;
    }
    // 0x80047D38: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x80047D3C: addu        $v0, $v1, $s5
    ctx->r2 = ADD32(ctx->r3, ctx->r21);
L_80047D40:
    // 0x80047D40: lbu         $t9, -0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X1);
    // 0x80047D44: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80047D48: sll         $t7, $s3, 16
    ctx->r15 = S32(ctx->r19 << 16);
    // 0x80047D4C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80047D50: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80047D54: beq         $a0, $t9, L_80047D40
    if (ctx->r4 == ctx->r25) {
        // 0x80047D58: sra         $s3, $t7, 16
        ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
            goto L_80047D40;
    }
    // 0x80047D58: sra         $s3, $t7, 16
    ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
L_80047D5C:
    // 0x80047D5C: bne         $a0, $at, L_80047D70
    if (ctx->r4 != ctx->r1) {
        // 0x80047D60: addu        $v0, $s5, $v1
        ctx->r2 = ADD32(ctx->r21, ctx->r3);
            goto L_80047D70;
    }
    // 0x80047D60: addu        $v0, $s5, $v1
    ctx->r2 = ADD32(ctx->r21, ctx->r3);
    // 0x80047D64: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80047D68: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80047D6C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_80047D70:
    // 0x80047D70: bgez        $v1, L_80047D90
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80047D74: lh          $t6, 0x9A($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X9A);
            goto L_80047D90;
    }
    // 0x80047D74: lh          $t6, 0x9A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X9A);
    // 0x80047D78: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80047D7C: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x80047D80: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80047D84: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x80047D88: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80047D8C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_80047D90:
    // 0x80047D90: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x80047D94: lbu         $s4, 0xD7($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0XD7);
    // 0x80047D98: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x80047D9C: jal         0x80047310
    // 0x80047DA0: lh          $s2, 0x9A($sp)
    ctx->r18 = MEM_H(ctx->r29, 0X9A);
    static_0_80047310(rdram, ctx);
        goto after_2;
    // 0x80047DA0: lh          $s2, 0x9A($sp)
    ctx->r18 = MEM_H(ctx->r29, 0X9A);
    after_2:
    // 0x80047DA4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80047DA8:
    // 0x80047DA8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80047DAC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80047DB0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80047DB4: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80047DB8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80047DBC: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80047DC0: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x80047DC4: jr          $ra
    // 0x80047DC8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x80047DC8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_800281A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800281A4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800281A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800281AC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800281B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800281B4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800281B8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800281BC: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x800281C0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800281C4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800281C8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800281CC: lh          $t9, 0x4238($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4238);
    // 0x800281D0: nop

    // 0x800281D4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800281D8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800281DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800281E0: bne         $t0, $at, L_800281F0
    if (ctx->r8 != ctx->r1) {
        // 0x800281E4: nop
    
            goto L_800281F0;
    }
    // 0x800281E4: nop

    // 0x800281E8: b           L_80028258
    // 0x800281EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80028258;
    // 0x800281EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800281F0:
    // 0x800281F0: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x800281F4: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x800281F8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800281FC: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x80028200: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80028204: sll         $t3, $a1, 1
    ctx->r11 = S32(ctx->r5 << 1);
    // 0x80028208: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8002820C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80028210: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80028214: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80028218: sh          $t1, 0x4238($at)
    MEM_H(0X4238, ctx->r1) = ctx->r9;
    // 0x8002821C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80028220: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80028224: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80028228: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002822C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80028230: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80028234: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80028238: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002823C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80028240: sh          $t5, 0x4236($at)
    MEM_H(0X4236, ctx->r1) = ctx->r13;
    // 0x80028244: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x80028248: b           L_80028258
    // 0x8002824C: nop

        goto L_80028258;
    // 0x8002824C: nop

    // 0x80028250: b           L_80028258
    // 0x80028254: nop

        goto L_80028258;
    // 0x80028254: nop

L_80028258:
    // 0x80028258: jr          $ra
    // 0x8002825C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8002825C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80000E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000E74: lui         $t6, 0x14
    ctx->r14 = S32(0X14 << 16);
    // 0x80000E78: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x80000E7C: addiu       $t7, $t7, -0x3AC0
    ctx->r15 = ADD32(ctx->r15, -0X3AC0);
    // 0x80000E80: addiu       $t6, $t6, 0x7BB0
    ctx->r14 = ADD32(ctx->r14, 0X7BB0);
    // 0x80000E84: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80000E88: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80000E8C: jal         0x8000068C
    // 0x80000E90: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000E90: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    after_0:
    // 0x80000E94: lui         $t8, 0x16
    ctx->r24 = S32(0X16 << 16);
    // 0x80000E98: lui         $t9, 0x16
    ctx->r25 = S32(0X16 << 16);
    // 0x80000E9C: addiu       $t9, $t9, -0x5830
    ctx->r25 = ADD32(ctx->r25, -0X5830);
    // 0x80000EA0: addiu       $t8, $t8, -0x5F10
    ctx->r24 = ADD32(ctx->r24, -0X5F10);
    // 0x80000EA4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80000EA8: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    // 0x80000EAC: jal         0x8000068C
    // 0x80000EB0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80000EB0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_1:
    // 0x80000EB4: b           L_80000EBC
    // 0x80000EB8: nop

        goto L_80000EBC;
    // 0x80000EB8: nop

L_80000EBC:
    // 0x80000EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000EC4: jr          $ra
    // 0x80000EC8: nop

    return;
    // 0x80000EC8: nop

;}
RECOMP_FUNC void guTranslate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037248: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8003724C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037250: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80037254: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80037258: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8003725C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x80037260: jal         0x800361F0
    // 0x80037264: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80037264: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80037268: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8003726C: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80037270: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80037274: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80037278: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8003727C: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x80037280: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x80037284: jal         0x800360F0
    // 0x80037288: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80037288: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8003728C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037290: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80037294: jr          $ra
    // 0x80037298: nop

    return;
    // 0x80037298: nop

;}
RECOMP_FUNC void func_80002574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002574: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80002578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000257C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80002580: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80002584: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80002588: nop

    // 0x8000258C: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80002590: nop

    // 0x80002594: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x80002598: bne         $t8, $zero, L_8000263C
    if (ctx->r24 != 0) {
        // 0x8000259C: nop
    
            goto L_8000263C;
    }
    // 0x8000259C: nop

    // 0x800025A0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800025A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800025A8: lw          $a0, 0x50($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X50);
    // 0x800025AC: lw          $a1, 0x54($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X54);
    // 0x800025B0: jal         0x80032010
    // 0x800025B4: nop

    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800025B4: nop

    after_0:
    // 0x800025B8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800025BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800025C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800025C4: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x800025C8: nop

    // 0x800025CC: bne         $t1, $at, L_80002634
    if (ctx->r9 != ctx->r1) {
        // 0x800025D0: nop
    
            goto L_80002634;
    }
    // 0x800025D0: nop

    // 0x800025D4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800025D8: nop

    // 0x800025DC: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x800025E0: nop

    // 0x800025E4: andi        $t4, $t3, 0x40
    ctx->r12 = ctx->r11 & 0X40;
    // 0x800025E8: beq         $t4, $zero, L_80002634
    if (ctx->r12 == 0) {
        // 0x800025EC: nop
    
            goto L_80002634;
    }
    // 0x800025EC: nop

    // 0x800025F0: andi        $t5, $t3, 0x20
    ctx->r13 = ctx->r11 & 0X20;
    // 0x800025F4: beq         $t5, $zero, L_80002634
    if (ctx->r13 == 0) {
        // 0x800025F8: nop
    
            goto L_80002634;
    }
    // 0x800025F8: nop

    // 0x800025FC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80002600: lw          $t6, -0x5D64($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5D64);
    // 0x80002604: nop

    // 0x80002608: beq         $t6, $zero, L_80002620
    if (ctx->r14 == 0) {
        // 0x8000260C: nop
    
            goto L_80002620;
    }
    // 0x8000260C: nop

    // 0x80002610: jal         0x80031A50
    // 0x80002614: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osViBlack_recomp(rdram, ctx);
        goto after_1;
    // 0x80002614: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80002618: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000261C: sw          $zero, -0x5D64($at)
    MEM_W(-0X5D64, ctx->r1) = 0;
L_80002620:
    // 0x80002620: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80002624: nop

    // 0x80002628: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x8000262C: jal         0x80032260
    // 0x80002630: nop

    osViSwapBuffer_recomp(rdram, ctx);
        goto after_2;
    // 0x80002630: nop

    after_2:
L_80002634:
    // 0x80002634: b           L_8000264C
    // 0x80002638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000264C;
    // 0x80002638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000263C:
    // 0x8000263C: b           L_8000264C
    // 0x80002640: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000264C;
    // 0x80002640: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80002644: b           L_8000264C
    // 0x80002648: nop

        goto L_8000264C;
    // 0x80002648: nop

L_8000264C:
    // 0x8000264C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80002654: jr          $ra
    // 0x80002658: nop

    return;
    // 0x80002658: nop

;}
RECOMP_FUNC void alMainBusNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F2B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F2B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003F2BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003F2C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F2C4: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x8003F2C8: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x8003F2CC: addiu       $a1, $a1, -0x520
    ctx->r5 = ADD32(ctx->r5, -0X520);
    // 0x8003F2D0: addiu       $a2, $a2, -0x550
    ctx->r6 = ADD32(ctx->r6, -0X550);
    // 0x8003F2D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003F2D8: jal         0x80046400
    // 0x8003F2DC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8003F2DC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_0:
    // 0x8003F2E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003F2E4: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8003F2E8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8003F2EC: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x8003F2F0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F2F4: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x8003F2F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F300: jr          $ra
    // 0x8003F304: nop

    return;
    // 0x8003F304: nop

;}
RECOMP_FUNC void func_8001B9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B9F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001B9FC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BA00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001BA04: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BA08: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001BA0C: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8001BA10: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001BA14: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8001BA18: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8001BA1C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8001BA20: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001BA24: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8001BA28: lh          $t1, 0x148($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X148);
    // 0x8001BA2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001BA30: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001BA34: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001BA38: addiu       $t3, $t3, -0x3D68
    ctx->r11 = ADD32(ctx->r11, -0X3D68);
    // 0x8001BA3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001BA40: sll         $t8, $a1, 1
    ctx->r24 = S32(ctx->r5 << 1);
    // 0x8001BA44: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001BA48: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8001BA4C: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x8001BA50: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8001BA54: lh          $t2, 0x148($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X148);
    // 0x8001BA58: lbu         $t5, 0x6($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X6);
    // 0x8001BA5C: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x8001BA60: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x8001BA64: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x8001BA68: sb          $t6, 0x6($t5)
    MEM_B(0X6, ctx->r13) = ctx->r14;
    // 0x8001BA6C: jr          $ra
    // 0x8001BA70: nop

    return;
    // 0x8001BA70: nop

    // 0x8001BA74: jr          $ra
    // 0x8001BA78: nop

    return;
    // 0x8001BA78: nop

;}
RECOMP_FUNC void func_8002B154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002B158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B15C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8002B160: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8002B164:
    // 0x8002B164: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B168: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8002B16C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002B170: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002B174: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002B178: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002B17C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8002B180: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002B184: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8002B188: nop

    // 0x8002B18C: beq         $t9, $zero, L_8002B2A4
    if (ctx->r25 == 0) {
        // 0x8002B190: nop
    
            goto L_8002B2A4;
    }
    // 0x8002B190: nop

    // 0x8002B194: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B198: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B19C: sw          $t0, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r8;
    // 0x8002B1A0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B1A4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8002B1A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8002B1AC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8002B1B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8002B1B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8002B1B8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8002B1BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8002B1C0: lh          $t3, 0x4234($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4234);
    // 0x8002B1C4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8002B1C8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8002B1CC: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8002B1D0: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x8002B1D4: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x8002B1D8: lw          $t9, 0x4DA8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DA8);
    // 0x8002B1DC: nop

    // 0x8002B1E0: jalr        $t9
    // 0x8002B1E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8002B1E4: nop

    after_0:
    // 0x8002B1E8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B1EC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8002B1F0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002B1F4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002B1F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002B1FC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002B200: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8002B204: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002B208: lh          $t7, 0x41F4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F4);
    // 0x8002B20C: nop

    // 0x8002B210: beq         $t7, $zero, L_8002B2A4
    if (ctx->r15 == 0) {
        // 0x8002B214: nop
    
            goto L_8002B2A4;
    }
    // 0x8002B214: nop

    // 0x8002B218: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B21C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8002B220: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8002B224: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8002B228: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002B22C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8002B230: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8002B234: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002B238: lh          $t1, 0x4258($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4258);
    // 0x8002B23C: nop

    // 0x8002B240: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x8002B244: bne         $at, $zero, L_8002B280
    if (ctx->r1 != 0) {
        // 0x8002B248: nop
    
            goto L_8002B280;
    }
    // 0x8002B248: nop

    // 0x8002B24C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B250: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8002B254: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8002B258: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8002B25C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8002B260: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8002B264: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8002B268: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8002B26C: addu        $t9, $t3, $t4
    ctx->r25 = ADD32(ctx->r11, ctx->r12);
    // 0x8002B270: lh          $t5, 0x108($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X108);
    // 0x8002B274: nop

    // 0x8002B278: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8002B27C: sh          $t6, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r14;
L_8002B280:
    // 0x8002B280: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B284: jal         0x8001CEF4
    // 0x8002B288: nop

    func_8001CEF4(rdram, ctx);
        goto after_1;
    // 0x8002B288: nop

    after_1:
    // 0x8002B28C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B290: jal         0x8001CD20
    // 0x8002B294: nop

    func_8001CD20(rdram, ctx);
        goto after_2;
    // 0x8002B294: nop

    after_2:
    // 0x8002B298: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B29C: jal         0x8001AD6C
    // 0x8002B2A0: nop

    func_8001AD6C(rdram, ctx);
        goto after_3;
    // 0x8002B2A0: nop

    after_3:
L_8002B2A4:
    // 0x8002B2A4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B2A8: nop

    // 0x8002B2AC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8002B2B0: slti        $at, $t8, 0x4E
    ctx->r1 = SIGNED(ctx->r24) < 0X4E ? 1 : 0;
    // 0x8002B2B4: bne         $at, $zero, L_8002B164
    if (ctx->r1 != 0) {
        // 0x8002B2B8: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_8002B164;
    }
    // 0x8002B2B8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8002B2BC: b           L_8002B2C4
    // 0x8002B2C0: nop

        goto L_8002B2C4;
    // 0x8002B2C0: nop

L_8002B2C4:
    // 0x8002B2C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B2C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002B2CC: jr          $ra
    // 0x8002B2D0: nop

    return;
    // 0x8002B2D0: nop

;}
RECOMP_FUNC void load_from_rom_to_addr(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000068C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80000690: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80000694: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80000698: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8000069C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x800006A0: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x800006A4: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800006A8: jal         0x800315C0
    // 0x800006AC: nop

    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x800006AC: nop

    after_0:
    // 0x800006B0: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x800006B4: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800006B8: jal         0x80031640
    // 0x800006BC: nop

    osInvalICache_recomp(rdram, ctx);
        goto after_1;
    // 0x800006BC: nop

    after_1:
    // 0x800006C0: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x800006C4: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800006C8: jal         0x800316C0
    // 0x800006CC: nop

    osInvalDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x800006CC: nop

    after_2:
    // 0x800006D0: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800006D4: nop

    // 0x800006D8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800006DC: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800006E0: nop

    // 0x800006E4: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x800006E8: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x800006EC: nop

    // 0x800006F0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x800006F4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800006F8: nop

    // 0x800006FC: beq         $t9, $zero, L_800007BC
    if (ctx->r25 == 0) {
        // 0x80000700: nop
    
            goto L_800007BC;
    }
    // 0x80000700: nop

L_80000704:
    // 0x80000704: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80000708: nop

    // 0x8000070C: slti        $at, $t0, 0x4001
    ctx->r1 = SIGNED(ctx->r8) < 0X4001 ? 1 : 0;
    // 0x80000710: beq         $at, $zero, L_80000724
    if (ctx->r1 == 0) {
        // 0x80000714: nop
    
            goto L_80000724;
    }
    // 0x80000714: nop

    // 0x80000718: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8000071C: b           L_8000072C
    // 0x80000720: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
        goto L_8000072C;
    // 0x80000720: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_80000724:
    // 0x80000724: addiu       $t2, $zero, 0x4000
    ctx->r10 = ADD32(0, 0X4000);
    // 0x80000728: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
L_8000072C:
    // 0x8000072C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80000730: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80000734: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80000738: addiu       $t5, $t5, -0x28D8
    ctx->r13 = ADD32(ctx->r13, -0X28D8);
    // 0x8000073C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80000740: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80000744: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80000748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000074C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80000750: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80000754: jal         0x80031770
    // 0x80000758: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    osPiStartDma_recomp(rdram, ctx);
        goto after_3;
    // 0x80000758: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_3:
    // 0x8000075C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80000760: addiu       $a0, $a0, -0x28D8
    ctx->r4 = ADD32(ctx->r4, -0X28D8);
    // 0x80000764: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80000768: jal         0x80031880
    // 0x8000076C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x8000076C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80000770: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80000774: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80000778: nop

    // 0x8000077C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x80000780: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80000784: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80000788: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8000078C: nop

    // 0x80000790: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80000794: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80000798: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8000079C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800007A0: nop

    // 0x800007A4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800007A8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x800007AC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800007B0: nop

    // 0x800007B4: bne         $t5, $zero, L_80000704
    if (ctx->r13 != 0) {
        // 0x800007B8: nop
    
            goto L_80000704;
    }
    // 0x800007B8: nop

L_800007BC:
    // 0x800007BC: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x800007C0: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800007C4: jal         0x80031640
    // 0x800007C8: nop

    osInvalICache_recomp(rdram, ctx);
        goto after_5;
    // 0x800007C8: nop

    after_5:
    // 0x800007CC: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x800007D0: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800007D4: jal         0x800316C0
    // 0x800007D8: nop

    osInvalDCache_recomp(rdram, ctx);
        goto after_6;
    // 0x800007D8: nop

    after_6:
    // 0x800007DC: b           L_800007E4
    // 0x800007E0: nop

        goto L_800007E4;
    // 0x800007E0: nop

L_800007E4:
    // 0x800007E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800007E8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800007EC: jr          $ra
    // 0x800007F0: nop

    return;
    // 0x800007F0: nop

;}
RECOMP_FUNC void __osSumcalc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800429C0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800429C4: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
    // 0x800429C8: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x800429CC: blez        $a1, L_80042A10
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800429D0: sw          $zero, 0xC($sp)
        MEM_W(0XC, ctx->r29) = 0;
            goto L_80042A10;
    }
    // 0x800429D0: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
L_800429D4:
    // 0x800429D4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800429D8: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x800429DC: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x800429E0: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x800429E4: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x800429E8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800429EC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800429F0: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x800429F4: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x800429F8: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800429FC: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
    // 0x80042A00: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80042A04: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x80042A08: bne         $at, $zero, L_800429D4
    if (ctx->r1 != 0) {
        // 0x80042A0C: sw          $t2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r10;
            goto L_800429D4;
    }
    // 0x80042A0C: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
L_80042A10:
    // 0x80042A10: lhu         $v0, 0xA($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XA);
    // 0x80042A14: jr          $ra
    // 0x80042A18: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80042A18: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void _loadBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046708: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8004670C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80046710: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046714: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80046718: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8004671C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80046720: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80046724: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80046728: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8004672C: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x80046730: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x80046734: beq         $at, $zero, L_80046740
    if (ctx->r1 == 0) {
        // 0x80046738: addu        $t1, $v0, $t6
        ctx->r9 = ADD32(ctx->r2, ctx->r14);
            goto L_80046740;
    }
    // 0x80046738: addu        $t1, $v0, $t6
    ctx->r9 = ADD32(ctx->r2, ctx->r14);
    // 0x8004673C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_80046740:
    // 0x80046740: sll         $a2, $t3, 1
    ctx->r6 = S32(ctx->r11 << 1);
    // 0x80046744: addu        $a3, $a2, $a1
    ctx->r7 = ADD32(ctx->r6, ctx->r5);
    // 0x80046748: sltu        $at, $t1, $a3
    ctx->r1 = ctx->r9 < ctx->r7 ? 1 : 0;
    // 0x8004674C: beq         $at, $zero, L_8004682C
    if (ctx->r1 == 0) {
        // 0x80046750: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_8004682C;
    }
    // 0x80046750: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80046754: andi        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 & 0XFFFF;
    // 0x80046758: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8004675C: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x80046760: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80046764: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80046768: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8004676C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80046770: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80046774: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80046778: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x8004677C: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x80046780: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80046784: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x80046788: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x8004678C: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80046790: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80046794: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x80046798: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8004679C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x800467A0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x800467A4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800467A8: jal         0x800358D0
    // 0x800467AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x800467AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800467B0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800467B4: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x800467B8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800467BC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800467C0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800467C4: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x800467C8: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x800467CC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800467D0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x800467D4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800467D8: subu        $t8, $a3, $t1
    ctx->r24 = SUB32(ctx->r7, ctx->r9);
    // 0x800467DC: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x800467E0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800467E4: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x800467E8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800467EC: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x800467F0: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x800467F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800467F8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800467FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80046800: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80046804: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80046808: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x8004680C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80046810: jal         0x800358D0
    // 0x80046814: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80046814: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x80046818: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8004681C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80046820: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80046824: b           L_80046870
    // 0x80046828: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
        goto L_80046870;
    // 0x80046828: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
L_8004682C:
    // 0x8004682C: andi        $t9, $t5, 0xFFFF
    ctx->r25 = ctx->r13 & 0XFFFF;
    // 0x80046830: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80046834: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80046838: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x8004683C: sw          $a3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r7;
    // 0x80046840: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80046844: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80046848: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x8004684C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80046850: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80046854: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x80046858: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8004685C: jal         0x800358D0
    // 0x80046860: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80046860: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80046864: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80046868: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8004686C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80046870:
    // 0x80046870: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80046874: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80046878: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8004687C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x80046880: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80046884: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80046888: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004688C: jr          $ra
    // 0x80046890: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80046890: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void alBnkfNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033A14: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80033A18: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80033A1C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80033A20: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80033A24: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80033A28: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80033A2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80033A30: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80033A34: addiu       $at, $zero, 0x4231
    ctx->r1 = ADD32(0, 0X4231);
    // 0x80033A38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80033A3C: bne         $t6, $at, L_80033AF8
    if (ctx->r14 != ctx->r1) {
        // 0x80033A40: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_80033AF8;
    }
    // 0x80033A40: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80033A44: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x80033A48: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80033A4C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80033A50: blez        $t7, L_80033AF8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80033A54: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_80033AF8;
    }
    // 0x80033A54: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80033A58: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
L_80033A5C:
    // 0x80033A5C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80033A60: beq         $t9, $zero, L_80033AE0
    if (ctx->r25 == 0) {
        // 0x80033A64: sw          $t9, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->r25;
            goto L_80033AE0;
    }
    // 0x80033A64: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x80033A68: lbu         $t6, 0x2($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X2);
    // 0x80033A6C: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x80033A70: bnel        $t6, $zero, L_80033AE4
    if (ctx->r14 != 0) {
        // 0x80033A74: lh          $t8, 0x2($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X2);
            goto L_80033AE4;
    }
    goto skip_0;
    // 0x80033A74: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    skip_0:
    // 0x80033A78: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
    // 0x80033A7C: sb          $s4, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r20;
    // 0x80033A80: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x80033A84: beq         $v0, $zero, L_80033A9C
    if (ctx->r2 == 0) {
        // 0x80033A88: addu        $a0, $v0, $s0
        ctx->r4 = ADD32(ctx->r2, ctx->r16);
            goto L_80033A9C;
    }
    // 0x80033A88: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80033A8C: sw          $a0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r4;
    // 0x80033A90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80033A94: jal         0x80033920
    // 0x80033A98: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_0_80033920(rdram, ctx);
        goto after_0;
    // 0x80033A98: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_0:
L_80033A9C:
    // 0x80033A9C: lh          $t8, 0x0($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X0);
    // 0x80033AA0: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
    // 0x80033AA4: blezl       $t8, L_80033AE4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80033AA8: lh          $t8, 0x2($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X2);
            goto L_80033AE4;
    }
    goto skip_1;
    // 0x80033AA8: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    skip_1:
    // 0x80033AAC: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
L_80033AB0:
    // 0x80033AB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80033AB4: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x80033AB8: beq         $a0, $zero, L_80033AC8
    if (ctx->r4 == 0) {
        // 0x80033ABC: sw          $a0, 0xC($t3)
        MEM_W(0XC, ctx->r11) = ctx->r4;
            goto L_80033AC8;
    }
    // 0x80033ABC: sw          $a0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r4;
    // 0x80033AC0: jal         0x80033920
    // 0x80033AC4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_0_80033920(rdram, ctx);
        goto after_1;
    // 0x80033AC4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
L_80033AC8:
    // 0x80033AC8: lh          $t7, 0x0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X0);
    // 0x80033ACC: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80033AD0: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x80033AD4: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80033AD8: bnel        $at, $zero, L_80033AB0
    if (ctx->r1 != 0) {
        // 0x80033ADC: lw          $t9, 0xC($t3)
        ctx->r25 = MEM_W(ctx->r11, 0XC);
            goto L_80033AB0;
    }
    goto skip_2;
    // 0x80033ADC: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
    skip_2:
L_80033AE0:
    // 0x80033AE0: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
L_80033AE4:
    // 0x80033AE4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80033AE8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80033AEC: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80033AF0: bnel        $at, $zero, L_80033A5C
    if (ctx->r1 != 0) {
        // 0x80033AF4: lw          $t8, 0x4($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X4);
            goto L_80033A5C;
    }
    goto skip_3;
    // 0x80033AF4: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    skip_3:
L_80033AF8:
    // 0x80033AF8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80033AFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80033B00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80033B04: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80033B08: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80033B0C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80033B10: jr          $ra
    // 0x80033B14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80033B14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80001EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001EF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80001EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001EF8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80001EFC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80001F00: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80001F04: nop

    // 0x80001F08: lw          $t7, 0x260($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X260);
    // 0x80001F0C: nop

    // 0x80001F10: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80001F14: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80001F18: jal         0x80031F70
    // 0x80001F1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80001F1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80001F20: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80001F24: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80001F28: nop

    // 0x80001F2C: beq         $t8, $zero, L_80001FB8
    if (ctx->r24 == 0) {
        // 0x80001F30: nop
    
            goto L_80001FB8;
    }
    // 0x80001F30: nop

L_80001F34:
    // 0x80001F34: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80001F38: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80001F3C: nop

    // 0x80001F40: bne         $t9, $t0, L_80001F88
    if (ctx->r25 != ctx->r8) {
        // 0x80001F44: nop
    
            goto L_80001F88;
    }
    // 0x80001F44: nop

    // 0x80001F48: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80001F4C: nop

    // 0x80001F50: beq         $t1, $zero, L_80001F6C
    if (ctx->r9 == 0) {
        // 0x80001F54: nop
    
            goto L_80001F6C;
    }
    // 0x80001F54: nop

    // 0x80001F58: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80001F5C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80001F60: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80001F64: b           L_80001F80
    // 0x80001F68: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
        goto L_80001F80;
    // 0x80001F68: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
L_80001F6C:
    // 0x80001F6C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80001F70: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80001F74: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80001F78: nop

    // 0x80001F7C: sw          $t6, 0x260($t7)
    MEM_W(0X260, ctx->r15) = ctx->r14;
L_80001F80:
    // 0x80001F80: b           L_80001FB8
    // 0x80001F84: nop

        goto L_80001FB8;
    // 0x80001F84: nop

L_80001F88:
    // 0x80001F88: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80001F8C: nop

    // 0x80001F90: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80001F94: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80001F98: nop

    // 0x80001F9C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80001FA0: nop

    // 0x80001FA4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80001FA8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80001FAC: nop

    // 0x80001FB0: bne         $t1, $zero, L_80001F34
    if (ctx->r9 != 0) {
        // 0x80001FB4: nop
    
            goto L_80001F34;
    }
    // 0x80001FB4: nop

L_80001FB8:
    // 0x80001FB8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80001FBC: jal         0x80031F70
    // 0x80001FC0: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80001FC0: nop

    after_1:
    // 0x80001FC4: b           L_80001FCC
    // 0x80001FC8: nop

        goto L_80001FCC;
    // 0x80001FC8: nop

L_80001FCC:
    // 0x80001FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001FD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80001FD4: jr          $ra
    // 0x80001FD8: nop

    return;
    // 0x80001FD8: nop

;}
RECOMP_FUNC void func_8000C2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C2D0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8000C2D4: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x8000C2D8: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8000C2DC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8000C2E0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8000C2E4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C2E8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8000C2EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000C2F0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000C2F4: lw          $t7, 0x2D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D5C);
    // 0x8000C2F8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8000C2FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000C300: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000C304: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8000C308: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8000C30C: nop

    // 0x8000C310: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x8000C314: nop

    // 0x8000C318: andi        $t1, $t0, 0x1000
    ctx->r9 = ctx->r8 & 0X1000;
    // 0x8000C31C: bne         $t1, $zero, L_8000C470
    if (ctx->r9 != 0) {
        // 0x8000C320: nop
    
            goto L_8000C470;
    }
    // 0x8000C320: nop

    // 0x8000C324: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8000C328: nop

    // 0x8000C32C: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8000C330: nop

    // 0x8000C334: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x8000C338: sw          $t4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r12;
    // 0x8000C33C: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x8000C340: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000C344: lb          $t6, 0x29($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X29);
    // 0x8000C348: nop

    // 0x8000C34C: bne         $t6, $at, L_8000C470
    if (ctx->r14 != ctx->r1) {
        // 0x8000C350: nop
    
            goto L_8000C470;
    }
    // 0x8000C350: nop

    // 0x8000C354: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8000C358: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8000C35C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C360: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000C364: lw          $t8, 0x2D84($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D84);
    // 0x8000C368: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8000C36C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C370: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000C374: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x8000C378: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x8000C37C: nop

    // 0x8000C380: lh          $t1, 0x1A($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X1A);
    // 0x8000C384: nop

    // 0x8000C388: sh          $t1, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r9;
    // 0x8000C38C: lh          $t3, 0x4($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4);
    // 0x8000C390: nop

    // 0x8000C394: blez        $t3, L_8000C470
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8000C398: nop
    
            goto L_8000C470;
    }
    // 0x8000C398: nop

L_8000C39C:
    // 0x8000C39C: lh          $t4, 0x4($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4);
    // 0x8000C3A0: nop

    // 0x8000C3A4: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x8000C3A8: sh          $t2, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r10;
    // 0x8000C3AC: lh          $t6, 0x4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4);
    // 0x8000C3B0: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x8000C3B4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8000C3B8: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8000C3BC: lh          $t9, 0x14($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X14);
    // 0x8000C3C0: nop

    // 0x8000C3C4: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x8000C3C8: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x8000C3CC: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000C3D0: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8000C3D4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8000C3D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8000C3DC: lw          $t0, 0x2D84($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D84);
    // 0x8000C3E0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8000C3E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8000C3E8: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x8000C3EC: lh          $t2, 0xA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA);
    // 0x8000C3F0: nop

    // 0x8000C3F4: beq         $t2, $a0, L_8000C404
    if (ctx->r10 == ctx->r4) {
        // 0x8000C3F8: nop
    
            goto L_8000C404;
    }
    // 0x8000C3F8: nop

    // 0x8000C3FC: b           L_8000C460
    // 0x8000C400: nop

        goto L_8000C460;
    // 0x8000C400: nop

L_8000C404:
    // 0x8000C404: lh          $t5, 0x6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X6);
    // 0x8000C408: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000C40C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8000C410: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x8000C414: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C418: lw          $t6, 0x2D5C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D5C);
    // 0x8000C41C: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x8000C420: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C424: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000C428: sb          $a1, 0x23($t8)
    MEM_B(0X23, ctx->r24) = ctx->r5;
    // 0x8000C42C: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x8000C430: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000C434: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x8000C438: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x8000C43C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000C440: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000C444: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x8000C448: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000C44C: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x8000C450: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x8000C454: nop

    // 0x8000C458: ori         $t2, $t4, 0x2
    ctx->r10 = ctx->r12 | 0X2;
    // 0x8000C45C: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
L_8000C460:
    // 0x8000C460: lh          $t5, 0x4($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4);
    // 0x8000C464: nop

    // 0x8000C468: bgtz        $t5, L_8000C39C
    if (SIGNED(ctx->r13) > 0) {
        // 0x8000C46C: nop
    
            goto L_8000C39C;
    }
    // 0x8000C46C: nop

L_8000C470:
    // 0x8000C470: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8000C474: nop

    // 0x8000C478: sb          $a1, 0x23($t6)
    MEM_B(0X23, ctx->r14) = ctx->r5;
    // 0x8000C47C: b           L_8000C484
    // 0x8000C480: nop

        goto L_8000C484;
    // 0x8000C480: nop

L_8000C484:
    // 0x8000C484: jr          $ra
    // 0x8000C488: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8000C488: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8001ECA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ECA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ECA4: sw          $zero, -0x1F50($at)
    MEM_W(-0X1F50, ctx->r1) = 0;
    // 0x8001ECA8: jr          $ra
    // 0x8001ECAC: nop

    return;
    // 0x8001ECAC: nop

    // 0x8001ECB0: jr          $ra
    // 0x8001ECB4: nop

    return;
    // 0x8001ECB4: nop

;}
RECOMP_FUNC void alResamplePull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004083C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80040840: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80040844: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80040848: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8004084C: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x80040850: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80040854: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x80040858: bne         $a2, $zero, L_80040868
    if (ctx->r6 != 0) {
        // 0x8004085C: sh          $t6, 0x46($sp)
        MEM_H(0X46, ctx->r29) = ctx->r14;
            goto L_80040868;
    }
    // 0x8004085C: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
    // 0x80040860: b           L_80040A34
    // 0x80040864: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
        goto L_80040A34;
    // 0x80040864: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
L_80040868:
    // 0x80040868: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x8004086C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x80040870: beql        $t7, $zero, L_800408DC
    if (ctx->r15 == 0) {
        // 0x80040874: lwc1        $f2, 0x18($t0)
        ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
            goto L_800408DC;
    }
    goto skip_0;
    // 0x80040874: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
    skip_0:
    // 0x80040878: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004087C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x80040880: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x80040884: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80040888: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x8004088C: jalr        $t9
    // 0x80040890: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80040890: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_0:
    // 0x80040894: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x80040898: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8004089C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800408A0: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x800408A4: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x800408A8: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x800408AC: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x800408B0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800408B4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x800408B8: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800408BC: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x800408C0: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x800408C4: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x800408C8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800408CC: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x800408D0: b           L_80040A30
    // 0x800408D4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
        goto L_80040A30;
    // 0x800408D4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800408D8: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
L_800408DC:
    // 0x800408DC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800408E0: ldc1        $f4, -0x38E8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X38E8);
    // 0x800408E4: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x800408E8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800408EC: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x800408F0: nop

    // 0x800408F4: bc1fl       L_8004090C
    if (!c1cs) {
        // 0x800408F8: lui         $at, 0x4700
        ctx->r1 = S32(0X4700 << 16);
            goto L_8004090C;
    }
    goto skip_1;
    // 0x800408F8: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    skip_1:
    // 0x800408FC: lwc1        $f8, -0x38E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X38E0);
    // 0x80040900: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x80040904: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80040908: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
L_8004090C:
    // 0x8004090C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80040910: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80040914: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x80040918: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8004091C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80040920: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x80040924: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80040928: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8004092C: nop

    // 0x80040930: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80040934: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80040938: swc1        $f4, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f4.u32l;
    // 0x8004093C: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80040940: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80040944: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x80040948: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x8004094C: lwc1        $f10, 0x18($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80040950: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80040954: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80040958: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8004095C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80040960: nop

    // 0x80040964: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x80040968: nop

    // 0x8004096C: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80040970: sub.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80040974: swc1        $f18, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f18.u32l;
    // 0x80040978: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8004097C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x80040980: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x80040984: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80040988: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8004098C: jalr        $t9
    // 0x80040990: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80040990: nop

    after_1:
    // 0x80040994: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80040998: lh          $t5, 0x46($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X46);
    // 0x8004099C: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x800409A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800409A4: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x800409A8: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800409AC: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x800409B0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x800409B4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800409B8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800409BC: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800409C0: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x800409C4: sll         $t5, $t2, 1
    ctx->r13 = S32(ctx->r10 << 1);
    // 0x800409C8: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x800409CC: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x800409D0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800409D4: sll         $t4, $t9, 16
    ctx->r12 = S32(ctx->r25 << 16);
    // 0x800409D8: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x800409DC: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800409E0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800409E4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800409E8: lw          $t3, 0x24($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X24);
    // 0x800409EC: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x800409F0: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x800409F4: andi        $t9, $t3, 0xFF
    ctx->r25 = ctx->r11 & 0XFF;
    // 0x800409F8: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x800409FC: or          $t4, $t5, $at
    ctx->r12 = ctx->r13 | ctx->r1;
    // 0x80040A00: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x80040A04: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x80040A08: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x80040A0C: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x80040A10: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x80040A14: jal         0x800358D0
    // 0x80040A18: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80040A18: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_2:
    // 0x80040A1C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80040A20: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80040A24: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80040A28: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x80040A2C: sw          $zero, 0x24($t0)
    MEM_W(0X24, ctx->r8) = 0;
L_80040A30:
    // 0x80040A30: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80040A34:
    // 0x80040A34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80040A38: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80040A3C: jr          $ra
    // 0x80040A40: nop

    return;
    // 0x80040A40: nop

;}
RECOMP_FUNC void Eeprom_Write(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F798: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001F79C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F7A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001F7A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001F7A8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001F7AC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8001F7B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8001F7B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001F7B8: jal         0x80039DB0
    // 0x8001F7BC: nop

    osEepromProbe_recomp(rdram, ctx);
        goto after_0;
    // 0x8001F7BC: nop

    after_0:
    // 0x8001F7C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001F7C4: beq         $v0, $at, L_8001F7D4
    if (ctx->r2 == ctx->r1) {
        // 0x8001F7C8: nop
    
            goto L_8001F7D4;
    }
    // 0x8001F7C8: nop

    // 0x8001F7CC: b           L_8001F804
    // 0x8001F7D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001F804;
    // 0x8001F7D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001F7D4:
    // 0x8001F7D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001F7D8: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x8001F7DC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8001F7E0: lhu         $a3, 0x2E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X2E);
    // 0x8001F7E4: jal         0x80039E20
    // 0x8001F7E8: nop

    osEepromLongWrite_recomp(rdram, ctx);
        goto after_1;
    // 0x8001F7E8: nop

    after_1:
    // 0x8001F7EC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8001F7F0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F7F4: b           L_8001F804
    // 0x8001F7F8: nop

        goto L_8001F804;
    // 0x8001F7F8: nop

    // 0x8001F7FC: b           L_8001F804
    // 0x8001F800: nop

        goto L_8001F804;
    // 0x8001F800: nop

L_8001F804:
    // 0x8001F804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001F80C: jr          $ra
    // 0x8001F810: nop

    return;
    // 0x8001F810: nop

;}
RECOMP_FUNC void func_80021B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021B74: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80021B78: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80021B7C:
    // 0x80021B7C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80021B80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021B84: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80021B88: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80021B8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021B90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80021B94: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80021B98: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80021B9C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80021BA0: sh          $t6, 0x4254($at)
    MEM_H(0X4254, ctx->r1) = ctx->r14;
    // 0x80021BA4: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80021BA8: nop

    // 0x80021BAC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80021BB0: slti        $at, $t0, 0x4E
    ctx->r1 = SIGNED(ctx->r8) < 0X4E ? 1 : 0;
    // 0x80021BB4: bne         $at, $zero, L_80021B7C
    if (ctx->r1 != 0) {
        // 0x80021BB8: sw          $t0, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r8;
            goto L_80021B7C;
    }
    // 0x80021BB8: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x80021BBC: b           L_80021BC4
    // 0x80021BC0: nop

        goto L_80021BC4;
    // 0x80021BC0: nop

L_80021BC4:
    // 0x80021BC4: jr          $ra
    // 0x80021BC8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80021BC8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001B754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B754: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001B758: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B75C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001B760: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B764: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001B768: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8001B76C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001B770: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8001B774: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8001B778: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8001B77C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8001B780: lh          $t1, 0x140($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X140);
    // 0x8001B784: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001B788: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001B78C: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001B790: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001B794: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001B798: sll         $t8, $a1, 1
    ctx->r24 = S32(ctx->r5 << 1);
    // 0x8001B79C: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8001B7A0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8001B7A4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8001B7A8: addiu       $t3, $t3, 0x5290
    ctx->r11 = ADD32(ctx->r11, 0X5290);
    // 0x8001B7AC: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x8001B7B0: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8001B7B4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8001B7B8: lh          $t2, 0x140($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X140);
    // 0x8001B7BC: lbu         $t5, 0x16($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X16);
    // 0x8001B7C0: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x8001B7C4: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x8001B7C8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8001B7CC: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x8001B7D0: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x8001B7D4: sb          $t6, 0x16($t5)
    MEM_B(0X16, ctx->r13) = ctx->r14;
    // 0x8001B7D8: jr          $ra
    // 0x8001B7DC: nop

    return;
    // 0x8001B7DC: nop

    // 0x8001B7E0: jr          $ra
    // 0x8001B7E4: nop

    return;
    // 0x8001B7E4: nop

;}
RECOMP_FUNC void func_800144F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800144F4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800144F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800144FC: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80014500: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80014504: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80014508: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_8001450C:
    // 0x8001450C: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x80014510: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80014514: nop

    // 0x80014518: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001451C: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    // 0x80014520: jal         0x80014414
    // 0x80014524: nop

    ctoi(rdram, ctx);
        goto after_0;
    // 0x80014524: nop

    after_0:
    // 0x80014528: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8001452C: nop

    // 0x80014530: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80014534: addu        $t1, $sp, $t0
    ctx->r9 = ADD32(ctx->r29, ctx->r8);
    // 0x80014538: sw          $v0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->r2;
    // 0x8001453C: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x80014540: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80014544: nop

    // 0x80014548: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8001454C: lbu         $a0, 0x0($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X0);
    // 0x80014550: jal         0x80014414
    // 0x80014554: nop

    ctoi(rdram, ctx);
        goto after_1;
    // 0x80014554: nop

    after_1:
    // 0x80014558: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8001455C: nop

    // 0x80014560: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80014564: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x80014568: sw          $v0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r2;
    // 0x8001456C: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80014570: nop

    // 0x80014574: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80014578: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x8001457C: bne         $at, $zero, L_8001450C
    if (ctx->r1 != 0) {
        // 0x80014580: sw          $t9, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r25;
            goto L_8001450C;
    }
    // 0x80014580: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x80014584: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80014588: jal         0x800142F0
    // 0x8001458C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800142F0(rdram, ctx);
        goto after_2;
    // 0x8001458C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x80014590: b           L_80014598
    // 0x80014594: nop

        goto L_80014598;
    // 0x80014594: nop

L_80014598:
    // 0x80014598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001459C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x800145A0: jr          $ra
    // 0x800145A4: nop

    return;
    // 0x800145A4: nop

;}
RECOMP_FUNC void alAudioFrame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035B58: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80035B5C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80035B60: lui         $s1, 0x8005
    ctx->r17 = S32(0X8005 << 16);
    // 0x80035B64: lw          $s1, -0x4AF0($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X4AF0);
    // 0x80035B68: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80035B6C: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80035B70: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x80035B74: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80035B78: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80035B7C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80035B80: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80035B84: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80035B88: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80035B8C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80035B90: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x80035B94: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x80035B98: sh          $zero, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = 0;
    // 0x80035B9C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80035BA0: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x80035BA4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80035BA8: bne         $t7, $zero, L_80035BBC
    if (ctx->r15 != 0) {
        // 0x80035BAC: or          $s5, $a2, $zero
        ctx->r21 = ctx->r6 | 0;
            goto L_80035BBC;
    }
    // 0x80035BAC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80035BB0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80035BB4: b           L_80035DBC
    // 0x80035BB8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80035DBC;
    // 0x80035BB8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80035BBC:
    // 0x80035BBC: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x80035BC0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80035BC4: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x80035BC8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80035BCC: beq         $v0, $zero, L_80035C08
    if (ctx->r2 == 0) {
        // 0x80035BD0: addiu       $s2, $zero, -0x10
        ctx->r18 = ADD32(0, -0X10);
            goto L_80035C08;
    }
    // 0x80035BD0: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
    // 0x80035BD4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80035BD8: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
L_80035BDC:
    // 0x80035BDC: subu        $t0, $t9, $a0
    ctx->r8 = SUB32(ctx->r25, ctx->r4);
    // 0x80035BE0: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80035BE4: beql        $at, $zero, L_80035C00
    if (ctx->r1 == 0) {
        // 0x80035BE8: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_80035C00;
    }
    goto skip_0;
    // 0x80035BE8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x80035BEC: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x80035BF0: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x80035BF4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80035BF8: subu        $v1, $t1, $a0
    ctx->r3 = SUB32(ctx->r9, ctx->r4);
    // 0x80035BFC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_80035C00:
    // 0x80035C00: bnel        $v0, $zero, L_80035BDC
    if (ctx->r2 != 0) {
        // 0x80035C04: lw          $t9, 0x10($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X10);
            goto L_80035BDC;
    }
    goto skip_1;
    // 0x80035C04: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    skip_1:
L_80035C08:
    // 0x80035C08: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x80035C0C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80035C10: lw          $v0, 0x10($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X10);
    // 0x80035C14: subu        $t3, $v0, $a0
    ctx->r11 = SUB32(ctx->r2, ctx->r4);
    // 0x80035C18: slt         $at, $t3, $s3
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80035C1C: beq         $at, $zero, L_80035D00
    if (ctx->r1 == 0) {
        // 0x80035C20: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_80035D00;
    }
    // 0x80035C20: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80035C24: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80035C28: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80035C2C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80035C30: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80035C34: ldc1        $f20, -0x3C78($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X3C78);
L_80035C38:
    // 0x80035C38: lw          $t4, 0x1C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X1C);
    // 0x80035C3C: lui         $s0, 0x7FFF
    ctx->r16 = S32(0X7FFF << 16);
    // 0x80035C40: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x80035C44: and         $t5, $t4, $s2
    ctx->r13 = ctx->r12 & ctx->r18;
    // 0x80035C48: sw          $t5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r13;
    // 0x80035C4C: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x80035C50: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80035C54: jalr        $t9
    // 0x80035C58: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80035C58: nop

    after_0:
    // 0x80035C5C: lw          $t8, 0x44($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X44);
    // 0x80035C60: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80035C64: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80035C68: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80035C6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80035C70: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80035C74: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80035C78: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80035C7C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80035C80: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x80035C84: add.d       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f4.d + ctx->f22.d;
    // 0x80035C88: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80035C8C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80035C90: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80035C94: nop

    // 0x80035C98: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x80035C9C: sw          $t2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r10;
    // 0x80035CA0: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x80035CA4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80035CA8: beql        $v1, $zero, L_80035CE8
    if (ctx->r3 == 0) {
        // 0x80035CAC: lw          $t7, 0xB4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB4);
            goto L_80035CE8;
    }
    goto skip_2;
    // 0x80035CAC: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    skip_2:
    // 0x80035CB0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80035CB4: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
L_80035CB8:
    // 0x80035CB8: subu        $t4, $t3, $a0
    ctx->r12 = SUB32(ctx->r11, ctx->r4);
    // 0x80035CBC: slt         $at, $t4, $s0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80035CC0: beql        $at, $zero, L_80035CDC
    if (ctx->r1 == 0) {
        // 0x80035CC4: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80035CDC;
    }
    goto skip_3;
    // 0x80035CC4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x80035CC8: sw          $v1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r3;
    // 0x80035CCC: lw          $t5, 0x10($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X10);
    // 0x80035CD0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80035CD4: subu        $s0, $t5, $a0
    ctx->r16 = SUB32(ctx->r13, ctx->r4);
    // 0x80035CD8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_80035CDC:
    // 0x80035CDC: bnel        $v1, $zero, L_80035CB8
    if (ctx->r3 != 0) {
        // 0x80035CE0: lw          $t3, 0x10($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X10);
            goto L_80035CB8;
    }
    goto skip_4;
    // 0x80035CE0: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    skip_4:
    // 0x80035CE4: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
L_80035CE8:
    // 0x80035CE8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80035CEC: lw          $v0, 0x10($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X10);
    // 0x80035CF0: subu        $t9, $v0, $a0
    ctx->r25 = SUB32(ctx->r2, ctx->r4);
    // 0x80035CF4: slt         $at, $t9, $s3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80035CF8: bne         $at, $zero, L_80035C38
    if (ctx->r1 != 0) {
        // 0x80035CFC: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_80035C38;
    }
    // 0x80035CFC: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_80035D00:
    // 0x80035D00: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    // 0x80035D04: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
    // 0x80035D08: addiu       $s7, $sp, 0xAA
    ctx->r23 = ADD32(ctx->r29, 0XAA);
    // 0x80035D0C: and         $t6, $t8, $s2
    ctx->r14 = ctx->r24 & ctx->r18;
    // 0x80035D10: blez        $s3, L_80035D9C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80035D14: sw          $t6, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r14;
            goto L_80035D9C;
    }
    // 0x80035D14: sw          $t6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r14;
    // 0x80035D18: lui         $s6, 0x700
    ctx->r22 = S32(0X700 << 16);
L_80035D1C:
    // 0x80035D1C: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x80035D20: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x80035D24: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80035D28: beq         $at, $zero, L_80035D38
    if (ctx->r1 == 0) {
        // 0x80035D2C: nop
    
            goto L_80035D38;
    }
    // 0x80035D2C: nop

    // 0x80035D30: b           L_80035D38
    // 0x80035D34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80035D38;
    // 0x80035D34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80035D38:
    // 0x80035D38: sw          $s6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r22;
    // 0x80035D3C: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x80035D40: lw          $s2, 0x38($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X38);
    // 0x80035D44: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80035D48: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80035D4C: lw          $t9, 0x8($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8);
    // 0x80035D50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80035D54: jalr        $t9
    // 0x80035D58: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80035D58: nop

    after_1:
    // 0x80035D5C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x80035D60: addiu       $t1, $s4, 0x8
    ctx->r9 = ADD32(ctx->r20, 0X8);
    // 0x80035D64: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80035D68: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x80035D6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80035D70: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80035D74: jalr        $t9
    // 0x80035D78: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80035D78: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x80035D7C: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x80035D80: subu        $s3, $s3, $s0
    ctx->r19 = SUB32(ctx->r19, ctx->r16);
    // 0x80035D84: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80035D88: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80035D8C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80035D90: addu        $s5, $s5, $t0
    ctx->r21 = ADD32(ctx->r21, ctx->r8);
    // 0x80035D94: bgtz        $s3, L_80035D1C
    if (SIGNED(ctx->r19) > 0) {
        // 0x80035D98: sw          $t4, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r12;
            goto L_80035D1C;
    }
    // 0x80035D98: sw          $t4, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r12;
L_80035D9C:
    // 0x80035D9C: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x80035DA0: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x80035DA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80035DA8: subu        $t7, $s4, $t5
    ctx->r15 = SUB32(ctx->r20, ctx->r13);
    // 0x80035DAC: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80035DB0: jal         0x80035AA8
    // 0x80035DB4: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    _collectPVoices(rdram, ctx);
        goto after_3;
    // 0x80035DB4: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    after_3:
    // 0x80035DB8: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_80035DBC:
    // 0x80035DBC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80035DC0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80035DC4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80035DC8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80035DCC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80035DD0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80035DD4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80035DD8: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80035DDC: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80035DE0: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x80035DE4: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x80035DE8: jr          $ra
    // 0x80035DEC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80035DEC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_80029F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029F58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80029F5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80029F60: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80029F64: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80029F68: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80029F6C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80029F70: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80029F74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80029F78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80029F7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029F80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80029F84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029F88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80029F8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80029F90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80029F94: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80029F98: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80029F9C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80029FA0: nop

    // 0x80029FA4: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80029FA8: lwc1        $f6, 0x4C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4C);
    // 0x80029FAC: nop

    // 0x80029FB0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80029FB4: swc1        $f8, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f8.u32l;
    // 0x80029FB8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80029FBC: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80029FC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80029FC4: lwc1        $f10, 0x28($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X28);
    // 0x80029FC8: nop

    // 0x80029FCC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80029FD0: nop

    // 0x80029FD4: bc1f        L_80029FF0
    if (!c1cs) {
        // 0x80029FD8: nop
    
            goto L_80029FF0;
    }
    // 0x80029FD8: nop

    // 0x80029FDC: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80029FE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80029FE4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80029FE8: nop

    // 0x80029FEC: swc1        $f18, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f18.u32l;
L_80029FF0:
    // 0x80029FF0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80029FF4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80029FF8: lwc1        $f4, 0x28($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80029FFC: nop

    // 0x8002A000: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8002A004: nop

    // 0x8002A008: bc1f        L_8002A068
    if (!c1cs) {
        // 0x8002A00C: nop
    
            goto L_8002A068;
    }
    // 0x8002A00C: nop

    // 0x8002A010: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002A014: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002A018: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8002A01C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8002A020: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8002A024: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8002A028: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8002A02C: jal         0x800295C0
    // 0x8002A030: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x8002A030: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8002A034: beq         $v0, $zero, L_8002A060
    if (ctx->r2 == 0) {
        // 0x8002A038: nop
    
            goto L_8002A060;
    }
    // 0x8002A038: nop

    // 0x8002A03C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8002A040: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8002A044: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A048: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8002A04C: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8002A050: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002A054: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8002A058: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002A05C: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
L_8002A060:
    // 0x8002A060: b           L_8002A0AC
    // 0x8002A064: nop

        goto L_8002A0AC;
    // 0x8002A064: nop

L_8002A068:
    // 0x8002A068: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8002A06C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002A070: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8002A074: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8002A078: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8002A07C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8002A080: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8002A084: jal         0x800295C0
    // 0x8002A088: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x8002A088: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x8002A08C: beq         $v0, $zero, L_8002A0AC
    if (ctx->r2 == 0) {
        // 0x8002A090: nop
    
            goto L_8002A0AC;
    }
    // 0x8002A090: nop

    // 0x8002A094: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8002A098: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8002A09C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002A0A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A0A4: nop

    // 0x8002A0A8: swc1        $f18, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f18.u32l;
L_8002A0AC:
    // 0x8002A0AC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8002A0B0: b           L_8002A0C0
    // 0x8002A0B4: nop

        goto L_8002A0C0;
    // 0x8002A0B4: nop

    // 0x8002A0B8: b           L_8002A0C0
    // 0x8002A0BC: nop

        goto L_8002A0C0;
    // 0x8002A0BC: nop

L_8002A0C0:
    // 0x8002A0C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A0C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8002A0C8: jr          $ra
    // 0x8002A0CC: nop

    return;
    // 0x8002A0CC: nop

;}
RECOMP_FUNC void func_80025A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025A1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80025A20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80025A24: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80025A28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80025A2C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80025A30: nop

    // 0x80025A34: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80025A38: beq         $at, $zero, L_80025A4C
    if (ctx->r1 == 0) {
        // 0x80025A3C: nop
    
            goto L_80025A4C;
    }
    // 0x80025A3C: nop

    // 0x80025A40: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x80025A44: b           L_80025A54
    // 0x80025A48: sh          $t7, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r15;
        goto L_80025A54;
    // 0x80025A48: sh          $t7, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r15;
L_80025A4C:
    // 0x80025A4C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80025A50: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
L_80025A54:
    // 0x80025A54: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80025A58: nop

    // 0x80025A5C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80025A60: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80025A64: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80025A68: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80025A6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80025A70: jal         0x80024D74
    // 0x80025A74: nop

    func_80024D74(rdram, ctx);
        goto after_0;
    // 0x80025A74: nop

    after_0:
    // 0x80025A78: beq         $v0, $zero, L_80025A88
    if (ctx->r2 == 0) {
        // 0x80025A7C: nop
    
            goto L_80025A88;
    }
    // 0x80025A7C: nop

    // 0x80025A80: b           L_80025D3C
    // 0x80025A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80025D3C;
    // 0x80025A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025A88:
    // 0x80025A88: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80025A8C: lhu         $t2, 0x24($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X24);
    // 0x80025A90: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80025A94: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80025A98: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80025A9C: lbu         $t4, 0x7448($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X7448);
    // 0x80025AA0: nop

    // 0x80025AA4: beq         $t4, $zero, L_80025AB4
    if (ctx->r12 == 0) {
        // 0x80025AA8: nop
    
            goto L_80025AB4;
    }
    // 0x80025AA8: nop

    // 0x80025AAC: b           L_80025D3C
    // 0x80025AB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80025D3C;
    // 0x80025AB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80025AB4:
    // 0x80025AB4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80025AB8: jal         0x80024C10
    // 0x80025ABC: nop

    func_80024C10(rdram, ctx);
        goto after_1;
    // 0x80025ABC: nop

    after_1:
    // 0x80025AC0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80025AC4: jal         0x80024CB4
    // 0x80025AC8: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    func_80024CB4(rdram, ctx);
        goto after_2;
    // 0x80025AC8: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    after_2:
    // 0x80025ACC: beq         $v0, $s0, L_80025ADC
    if (ctx->r2 == ctx->r16) {
        // 0x80025AD0: nop
    
            goto L_80025ADC;
    }
    // 0x80025AD0: nop

    // 0x80025AD4: b           L_80025D3C
    // 0x80025AD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80025D3C;
    // 0x80025AD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80025ADC:
    // 0x80025ADC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80025AE0: nop

    // 0x80025AE4: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80025AE8: beq         $at, $zero, L_80025D2C
    if (ctx->r1 == 0) {
        // 0x80025AEC: nop
    
            goto L_80025D2C;
    }
    // 0x80025AEC: nop

    // 0x80025AF0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80025AF4:
    // 0x80025AF4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80025AF8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80025AFC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80025B00: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80025B04: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80025B08: lbu         $t9, 0x7450($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X7450);
    // 0x80025B0C: nop

    // 0x80025B10: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x80025B14: sb          $t0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r8;
    // 0x80025B18: lbu         $t1, 0x27($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X27);
    // 0x80025B1C: nop

    // 0x80025B20: slti        $at, $t1, 0x7
    ctx->r1 = SIGNED(ctx->r9) < 0X7 ? 1 : 0;
    // 0x80025B24: bne         $at, $zero, L_80025B34
    if (ctx->r1 != 0) {
        // 0x80025B28: nop
    
            goto L_80025B34;
    }
    // 0x80025B28: nop

    // 0x80025B2C: b           L_80025D3C
    // 0x80025B30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025B30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025B34:
    // 0x80025B34: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80025B38: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80025B3C: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80025B40: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80025B44: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80025B48: lbu         $t5, 0x7450($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X7450);
    // 0x80025B4C: nop

    // 0x80025B50: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x80025B54: sra         $t7, $t6, 4
    ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
    // 0x80025B58: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    // 0x80025B5C: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x80025B60: nop

    // 0x80025B64: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x80025B68: bne         $at, $zero, L_80025B78
    if (ctx->r1 != 0) {
        // 0x80025B6C: nop
    
            goto L_80025B78;
    }
    // 0x80025B6C: nop

    // 0x80025B70: b           L_80025D3C
    // 0x80025B74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025B74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025B78:
    // 0x80025B78: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80025B7C: nop

    // 0x80025B80: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80025B84: slti        $at, $t0, 0x3F
    ctx->r1 = SIGNED(ctx->r8) < 0X3F ? 1 : 0;
    // 0x80025B88: bne         $at, $zero, L_80025AF4
    if (ctx->r1 != 0) {
        // 0x80025B8C: sw          $t0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r8;
            goto L_80025AF4;
    }
    // 0x80025B8C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80025B90: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80025B94: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80025B98: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80025B9C: lbu         $t2, 0x7490($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X7490);
    // 0x80025BA0: nop

    // 0x80025BA4: slti        $at, $t2, 0x6
    ctx->r1 = SIGNED(ctx->r10) < 0X6 ? 1 : 0;
    // 0x80025BA8: bne         $at, $zero, L_80025BC4
    if (ctx->r1 != 0) {
        // 0x80025BAC: nop
    
            goto L_80025BC4;
    }
    // 0x80025BAC: nop

    // 0x80025BB0: slti        $at, $t2, 0xFF
    ctx->r1 = SIGNED(ctx->r10) < 0XFF ? 1 : 0;
    // 0x80025BB4: beq         $at, $zero, L_80025BC4
    if (ctx->r1 == 0) {
        // 0x80025BB8: nop
    
            goto L_80025BC4;
    }
    // 0x80025BB8: nop

    // 0x80025BBC: b           L_80025D3C
    // 0x80025BC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025BC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025BC4:
    // 0x80025BC4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80025BC8: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80025BCC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80025BD0: lbu         $t4, 0x7491($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X7491);
    // 0x80025BD4: nop

    // 0x80025BD8: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80025BDC: bne         $at, $zero, L_80025BEC
    if (ctx->r1 != 0) {
        // 0x80025BE0: nop
    
            goto L_80025BEC;
    }
    // 0x80025BE0: nop

    // 0x80025BE4: b           L_80025D3C
    // 0x80025BE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025BE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025BEC:
    // 0x80025BEC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80025BF0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80025BF4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80025BF8: lbu         $t6, 0x7492($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7492);
    // 0x80025BFC: nop

    // 0x80025C00: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80025C04: bne         $at, $zero, L_80025C14
    if (ctx->r1 != 0) {
        // 0x80025C08: nop
    
            goto L_80025C14;
    }
    // 0x80025C08: nop

    // 0x80025C0C: b           L_80025D3C
    // 0x80025C10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025C10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025C14:
    // 0x80025C14: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80025C18: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80025C1C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80025C20: lbu         $t8, 0x7493($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7493);
    // 0x80025C24: nop

    // 0x80025C28: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x80025C2C: bne         $at, $zero, L_80025C3C
    if (ctx->r1 != 0) {
        // 0x80025C30: nop
    
            goto L_80025C3C;
    }
    // 0x80025C30: nop

    // 0x80025C34: b           L_80025D3C
    // 0x80025C38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025C38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025C3C:
    // 0x80025C3C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80025C40: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80025C44: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80025C48: lbu         $t0, 0x749B($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X749B);
    // 0x80025C4C: nop

    // 0x80025C50: slti        $at, $t0, 0x64
    ctx->r1 = SIGNED(ctx->r8) < 0X64 ? 1 : 0;
    // 0x80025C54: bne         $at, $zero, L_80025C64
    if (ctx->r1 != 0) {
        // 0x80025C58: nop
    
            goto L_80025C64;
    }
    // 0x80025C58: nop

    // 0x80025C5C: b           L_80025D3C
    // 0x80025C60: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025C60: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025C64:
    // 0x80025C64: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80025C68: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80025C6C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80025C70: lbu         $t2, 0x749C($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X749C);
    // 0x80025C74: nop

    // 0x80025C78: slti        $at, $t2, 0x9
    ctx->r1 = SIGNED(ctx->r10) < 0X9 ? 1 : 0;
    // 0x80025C7C: bne         $at, $zero, L_80025C8C
    if (ctx->r1 != 0) {
        // 0x80025C80: nop
    
            goto L_80025C8C;
    }
    // 0x80025C80: nop

    // 0x80025C84: b           L_80025D3C
    // 0x80025C88: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025C88: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025C8C:
    // 0x80025C8C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80025C90: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80025C94: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80025C98: lbu         $t4, 0x749D($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X749D);
    // 0x80025C9C: nop

    // 0x80025CA0: slti        $at, $t4, 0x9
    ctx->r1 = SIGNED(ctx->r12) < 0X9 ? 1 : 0;
    // 0x80025CA4: bne         $at, $zero, L_80025CB4
    if (ctx->r1 != 0) {
        // 0x80025CA8: nop
    
            goto L_80025CB4;
    }
    // 0x80025CA8: nop

    // 0x80025CAC: b           L_80025D3C
    // 0x80025CB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025CB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025CB4:
    // 0x80025CB4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80025CB8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80025CBC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80025CC0: lbu         $t6, 0x749E($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X749E);
    // 0x80025CC4: nop

    // 0x80025CC8: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80025CCC: bne         $at, $zero, L_80025CDC
    if (ctx->r1 != 0) {
        // 0x80025CD0: nop
    
            goto L_80025CDC;
    }
    // 0x80025CD0: nop

    // 0x80025CD4: b           L_80025D3C
    // 0x80025CD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025CD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025CDC:
    // 0x80025CDC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80025CE0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80025CE4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80025CE8: lbu         $t8, 0x749F($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X749F);
    // 0x80025CEC: nop

    // 0x80025CF0: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80025CF4: bne         $at, $zero, L_80025D04
    if (ctx->r1 != 0) {
        // 0x80025CF8: nop
    
            goto L_80025D04;
    }
    // 0x80025CF8: nop

    // 0x80025CFC: b           L_80025D3C
    // 0x80025D00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025D00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025D04:
    // 0x80025D04: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80025D08: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80025D0C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80025D10: lbu         $t0, 0x74A0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X74A0);
    // 0x80025D14: nop

    // 0x80025D18: slti        $at, $t0, 0xC8
    ctx->r1 = SIGNED(ctx->r8) < 0XC8 ? 1 : 0;
    // 0x80025D1C: bne         $at, $zero, L_80025D2C
    if (ctx->r1 != 0) {
        // 0x80025D20: nop
    
            goto L_80025D2C;
    }
    // 0x80025D20: nop

    // 0x80025D24: b           L_80025D3C
    // 0x80025D28: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80025D3C;
    // 0x80025D28: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80025D2C:
    // 0x80025D2C: b           L_80025D3C
    // 0x80025D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80025D3C;
    // 0x80025D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80025D34: b           L_80025D3C
    // 0x80025D38: nop

        goto L_80025D3C;
    // 0x80025D38: nop

L_80025D3C:
    // 0x80025D3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80025D40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80025D44: jr          $ra
    // 0x80025D48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80025D48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void Math_NormalizeAngle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015744: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80015748: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001574C: nop

    // 0x80015750: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80015754: nop

    // 0x80015758: bc1f        L_8001578C
    if (!c1cs) {
        // 0x8001575C: nop
    
            goto L_8001578C;
    }
    // 0x8001575C: nop

    // 0x80015760: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80015764: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80015768: nop

    // 0x8001576C: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x80015770: nop

    // 0x80015774: bc1f        L_8001578C
    if (!c1cs) {
        // 0x80015778: nop
    
            goto L_8001578C;
    }
    // 0x80015778: nop

    // 0x8001577C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80015780: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80015784: b           L_800157D4
    // 0x80015788: sub.s       $f12, $f8, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f12.fl;
        goto L_800157D4;
    // 0x80015788: sub.s       $f12, $f8, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f12.fl;
L_8001578C:
    // 0x8001578C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80015790: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80015794: nop

    // 0x80015798: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8001579C: nop

    // 0x800157A0: bc1f        L_800157D4
    if (!c1cs) {
        // 0x800157A4: nop
    
            goto L_800157D4;
    }
    // 0x800157A4: nop

    // 0x800157A8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800157AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800157B0: nop

    // 0x800157B4: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x800157B8: nop

    // 0x800157BC: bc1f        L_800157D4
    if (!c1cs) {
        // 0x800157C0: nop
    
            goto L_800157D4;
    }
    // 0x800157C0: nop

    // 0x800157C4: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x800157C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800157CC: nop

    // 0x800157D0: sub.s       $f12, $f18, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f12.fl;
L_800157D4:
    // 0x800157D4: jr          $ra
    // 0x800157D8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x800157D8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x800157DC: jr          $ra
    // 0x800157E0: nop

    return;
    // 0x800157E0: nop

    // 0x800157E4: jr          $ra
    // 0x800157E8: nop

    return;
    // 0x800157E8: nop

;}
RECOMP_FUNC void func_8001BB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BB34: beq         $a1, $zero, L_8001BB84
    if (ctx->r5 == 0) {
        // 0x8001BB38: nop
    
            goto L_8001BB84;
    }
    // 0x8001BB38: nop

    // 0x8001BB3C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001BB40: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BB44: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001BB48: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BB4C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8001BB50: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8001BB54: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x8001BB58: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8001BB5C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001BB60: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001BB64: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001BB68: lbu         $t9, 0x130($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X130);
    // 0x8001BB6C: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x8001BB70: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8001BB74: addu        $t2, $t1, $t7
    ctx->r10 = ADD32(ctx->r9, ctx->r15);
    // 0x8001BB78: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x8001BB7C: b           L_8001BBCC
    // 0x8001BB80: sb          $t0, 0x130($t2)
    MEM_B(0X130, ctx->r10) = ctx->r8;
        goto L_8001BBCC;
    // 0x8001BB80: sb          $t0, 0x130($t2)
    MEM_B(0X130, ctx->r10) = ctx->r8;
L_8001BB84:
    // 0x8001BB84: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x8001BB88: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x8001BB8C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001BB90: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x8001BB94: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8001BB98: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8001BB9C: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8001BBA0: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8001BBA4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8001BBA8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001BBAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001BBB0: lbu         $t6, 0x130($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X130);
    // 0x8001BBB4: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8001BBB8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001BBBC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8001BBC0: addu        $t1, $t9, $t4
    ctx->r9 = ADD32(ctx->r25, ctx->r12);
    // 0x8001BBC4: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x8001BBC8: sb          $t8, 0x130($t1)
    MEM_B(0X130, ctx->r9) = ctx->r24;
L_8001BBCC:
    // 0x8001BBCC: jr          $ra
    // 0x8001BBD0: nop

    return;
    // 0x8001BBD0: nop

    // 0x8001BBD4: jr          $ra
    // 0x8001BBD8: nop

    return;
    // 0x8001BBD8: nop

;}
RECOMP_FUNC void func_8000C8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C8CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000C8D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000C8D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000C8D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000C8DC: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000C8E0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000C8E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000C8E8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000C8EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C8F0: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x8000C8F4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000C8F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C8FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000C900: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8000C904: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000C90C: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x8000C910: nop

    // 0x8000C914: beq         $t1, $at, L_8000C924
    if (ctx->r9 == ctx->r1) {
        // 0x8000C918: nop
    
            goto L_8000C924;
    }
    // 0x8000C918: nop

    // 0x8000C91C: b           L_8000C9B4
    // 0x8000C920: nop

        goto L_8000C9B4;
    // 0x8000C920: nop

L_8000C924:
    // 0x8000C924: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x8000C928: nop

    // 0x8000C92C: slti        $at, $t2, 0x4B1
    ctx->r1 = SIGNED(ctx->r10) < 0X4B1 ? 1 : 0;
    // 0x8000C930: bne         $at, $zero, L_8000C940
    if (ctx->r1 != 0) {
        // 0x8000C934: nop
    
            goto L_8000C940;
    }
    // 0x8000C934: nop

    // 0x8000C938: addiu       $t3, $zero, 0x4B0
    ctx->r11 = ADD32(0, 0X4B0);
    // 0x8000C93C: sh          $t3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r11;
L_8000C940:
    // 0x8000C940: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C944: nop

    // 0x8000C948: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8000C94C: nop

    // 0x8000C950: andi        $t6, $t5, 0x1000
    ctx->r14 = ctx->r13 & 0X1000;
    // 0x8000C954: bne         $t6, $zero, L_8000C99C
    if (ctx->r14 != 0) {
        // 0x8000C958: nop
    
            goto L_8000C99C;
    }
    // 0x8000C958: nop

    // 0x8000C95C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C960: nop

    // 0x8000C964: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8000C968: nop

    // 0x8000C96C: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8000C970: sw          $t9, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r25;
    // 0x8000C974: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C978: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000C97C: lb          $t1, 0x29($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X29);
    // 0x8000C980: nop

    // 0x8000C984: bne         $t1, $at, L_8000C99C
    if (ctx->r9 != ctx->r1) {
        // 0x8000C988: nop
    
            goto L_8000C99C;
    }
    // 0x8000C988: nop

    // 0x8000C98C: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x8000C990: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x8000C994: jal         0x8000A9B4
    // 0x8000C998: nop

    func_8000A9B4(rdram, ctx);
        goto after_0;
    // 0x8000C998: nop

    after_0:
L_8000C99C:
    // 0x8000C99C: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x8000C9A0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C9A4: nop

    // 0x8000C9A8: sh          $t2, 0x1A($t3)
    MEM_H(0X1A, ctx->r11) = ctx->r10;
    // 0x8000C9AC: b           L_8000C9B4
    // 0x8000C9B0: nop

        goto L_8000C9B4;
    // 0x8000C9B0: nop

L_8000C9B4:
    // 0x8000C9B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000C9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000C9BC: jr          $ra
    // 0x8000C9C0: nop

    return;
    // 0x8000C9C0: nop

;}
RECOMP_FUNC void func_8000C48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C48C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8000C490: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8000C494: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8000C498: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x8000C49C: lwc1        $f4, 0x14($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8000C4A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000C4A4: nop

    // 0x8000C4A8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8000C4AC: nop

    // 0x8000C4B0: bc1f        L_8000C4C0
    if (!c1cs) {
        // 0x8000C4B4: nop
    
            goto L_8000C4C0;
    }
    // 0x8000C4B4: nop

    // 0x8000C4B8: b           L_8000C668
    // 0x8000C4BC: nop

        goto L_8000C668;
    // 0x8000C4BC: nop

L_8000C4C0:
    // 0x8000C4C0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C4C4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8000C4C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000C4CC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000C4D0: lw          $t7, 0x2D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D5C);
    // 0x8000C4D4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8000C4D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000C4DC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000C4E0: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8000C4E4: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8000C4E8: nop

    // 0x8000C4EC: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x8000C4F0: nop

    // 0x8000C4F4: andi        $t1, $t0, 0x1000
    ctx->r9 = ctx->r8 & 0X1000;
    // 0x8000C4F8: bne         $t1, $zero, L_8000C650
    if (ctx->r9 != 0) {
        // 0x8000C4FC: nop
    
            goto L_8000C650;
    }
    // 0x8000C4FC: nop

    // 0x8000C500: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8000C504: nop

    // 0x8000C508: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8000C50C: nop

    // 0x8000C510: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x8000C514: sw          $t4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r12;
    // 0x8000C518: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x8000C51C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000C520: lb          $t6, 0x29($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X29);
    // 0x8000C524: nop

    // 0x8000C528: bne         $t6, $at, L_8000C650
    if (ctx->r14 != ctx->r1) {
        // 0x8000C52C: nop
    
            goto L_8000C650;
    }
    // 0x8000C52C: nop

    // 0x8000C530: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8000C534: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8000C538: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C53C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000C540: lw          $t8, 0x2D84($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D84);
    // 0x8000C544: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8000C548: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C54C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000C550: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x8000C554: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x8000C558: nop

    // 0x8000C55C: lh          $t1, 0x1A($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X1A);
    // 0x8000C560: nop

    // 0x8000C564: sh          $t1, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r9;
    // 0x8000C568: lh          $t3, 0x4($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4);
    // 0x8000C56C: nop

    // 0x8000C570: blez        $t3, L_8000C650
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8000C574: nop
    
            goto L_8000C650;
    }
    // 0x8000C574: nop

L_8000C578:
    // 0x8000C578: lh          $t4, 0x4($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4);
    // 0x8000C57C: nop

    // 0x8000C580: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x8000C584: sh          $t2, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r10;
    // 0x8000C588: lh          $t6, 0x4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4);
    // 0x8000C58C: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x8000C590: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8000C594: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8000C598: lh          $t9, 0x14($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X14);
    // 0x8000C59C: nop

    // 0x8000C5A0: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x8000C5A4: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x8000C5A8: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000C5AC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8000C5B0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8000C5B4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8000C5B8: lw          $t0, 0x2D84($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D84);
    // 0x8000C5BC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8000C5C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8000C5C4: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x8000C5C8: lh          $t2, 0xA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA);
    // 0x8000C5CC: nop

    // 0x8000C5D0: beq         $t2, $a0, L_8000C5E0
    if (ctx->r10 == ctx->r4) {
        // 0x8000C5D4: nop
    
            goto L_8000C5E0;
    }
    // 0x8000C5D4: nop

    // 0x8000C5D8: b           L_8000C640
    // 0x8000C5DC: nop

        goto L_8000C640;
    // 0x8000C5DC: nop

L_8000C5E0:
    // 0x8000C5E0: lh          $t5, 0x6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X6);
    // 0x8000C5E4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000C5E8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8000C5EC: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x8000C5F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C5F4: lw          $t6, 0x2D5C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D5C);
    // 0x8000C5F8: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x8000C5FC: lwc1        $f8, 0x14($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8000C600: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C604: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000C608: swc1        $f8, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f8.u32l;
    // 0x8000C60C: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x8000C610: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000C614: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x8000C618: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x8000C61C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000C620: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000C624: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x8000C628: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000C62C: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x8000C630: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x8000C634: nop

    // 0x8000C638: ori         $t2, $t4, 0x1
    ctx->r10 = ctx->r12 | 0X1;
    // 0x8000C63C: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
L_8000C640:
    // 0x8000C640: lh          $t5, 0x4($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4);
    // 0x8000C644: nop

    // 0x8000C648: bgtz        $t5, L_8000C578
    if (SIGNED(ctx->r13) > 0) {
        // 0x8000C64C: nop
    
            goto L_8000C578;
    }
    // 0x8000C64C: nop

L_8000C650:
    // 0x8000C650: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8000C654: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8000C658: nop

    // 0x8000C65C: swc1        $f10, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f10.u32l;
    // 0x8000C660: b           L_8000C668
    // 0x8000C664: nop

        goto L_8000C668;
    // 0x8000C664: nop

L_8000C668:
    // 0x8000C668: jr          $ra
    // 0x8000C66C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8000C66C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void alSaveParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800417C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800417C4: beq         $a1, $at, L_800417E0
    if (ctx->r5 == ctx->r1) {
        // 0x800417C8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800417E0;
    }
    // 0x800417C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800417CC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800417D0: beql        $a1, $at, L_800417EC
    if (ctx->r5 == ctx->r1) {
        // 0x800417D4: sw          $a2, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r6;
            goto L_800417EC;
    }
    goto skip_0;
    // 0x800417D4: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    skip_0:
    // 0x800417D8: jr          $ra
    // 0x800417DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800417DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800417E0:
    // 0x800417E0: jr          $ra
    // 0x800417E4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    return;
    // 0x800417E4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x800417E8: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
L_800417EC:
    // 0x800417EC: jr          $ra
    // 0x800417F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800417F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80001850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001858: lui         $t6, 0x1F
    ctx->r14 = S32(0X1F << 16);
    // 0x8000185C: lui         $t7, 0x1F
    ctx->r15 = S32(0X1F << 16);
    // 0x80001860: addiu       $t7, $t7, 0x7E80
    ctx->r15 = ADD32(ctx->r15, 0X7E80);
    // 0x80001864: addiu       $t6, $t6, 0x6790
    ctx->r14 = ADD32(ctx->r14, 0X6790);
    // 0x80001868: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8000186C: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80001870: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80001874: jal         0x8000068C
    // 0x80001878: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001878: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    after_0:
    // 0x8000187C: b           L_80001884
    // 0x80001880: nop

        goto L_80001884;
    // 0x80001880: nop

L_80001884:
    // 0x80001884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000188C: jr          $ra
    // 0x80001890: nop

    return;
    // 0x80001890: nop

;}
RECOMP_FUNC void func_8002AE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AE38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002AE3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002AE40: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8002AE44: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8002AE48: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x8002AE4C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x8002AE50: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8002AE54: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8002AE58: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002AE5C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8002AE60: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8002AE64: jal         0x8002AB40
    // 0x8002AE68: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8002AB40(rdram, ctx);
        goto after_0;
    // 0x8002AE68: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x8002AE6C: b           L_8002AE74
    // 0x8002AE70: nop

        goto L_8002AE74;
    // 0x8002AE70: nop

L_8002AE74:
    // 0x8002AE74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AE78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002AE7C: jr          $ra
    // 0x8002AE80: nop

    return;
    // 0x8002AE80: nop

;}
RECOMP_FUNC void Parse_Args(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E3E0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8000E3E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000E3E8: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x8000E3EC: addiu       $t7, $sp, 0xC
    ctx->r15 = ADD32(ctx->r29, 0XC);
    // 0x8000E3F0: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8000E3F4: beq         $a0, $zero, L_8000E40C
    if (ctx->r4 == 0) {
        // 0x8000E3F8: nop
    
            goto L_8000E40C;
    }
    // 0x8000E3F8: nop

    // 0x8000E3FC: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8000E400: nop

    // 0x8000E404: bne         $t8, $zero, L_8000E414
    if (ctx->r24 != 0) {
        // 0x8000E408: nop
    
            goto L_8000E414;
    }
    // 0x8000E408: nop

L_8000E40C:
    // 0x8000E40C: b           L_8000E674
    // 0x8000E410: nop

        goto L_8000E674;
    // 0x8000E410: nop

L_8000E414:
    // 0x8000E414: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x8000E418: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8000E41C: nop

    // 0x8000E420: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x8000E424: nop

    // 0x8000E428: beq         $t0, $zero, L_8000E540
    if (ctx->r8 == 0) {
        // 0x8000E42C: nop
    
            goto L_8000E540;
    }
    // 0x8000E42C: nop

L_8000E430:
    // 0x8000E430: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8000E434: nop

    // 0x8000E438: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x8000E43C: nop

    // 0x8000E440: beq         $t2, $zero, L_8000E494
    if (ctx->r10 == 0) {
        // 0x8000E444: nop
    
            goto L_8000E494;
    }
    // 0x8000E444: nop

    // 0x8000E448: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8000E44C: bne         $t2, $at, L_8000E494
    if (ctx->r10 != ctx->r1) {
        // 0x8000E450: nop
    
            goto L_8000E494;
    }
    // 0x8000E450: nop

L_8000E454:
    // 0x8000E454: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8000E458: nop

    // 0x8000E45C: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x8000E460: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8000E464: nop

    // 0x8000E468: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8000E46C: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x8000E470: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8000E474: nop

    // 0x8000E478: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8000E47C: nop

    // 0x8000E480: beq         $t7, $zero, L_8000E494
    if (ctx->r15 == 0) {
        // 0x8000E484: nop
    
            goto L_8000E494;
    }
    // 0x8000E484: nop

    // 0x8000E488: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8000E48C: beq         $t7, $at, L_8000E454
    if (ctx->r15 == ctx->r1) {
        // 0x8000E490: nop
    
            goto L_8000E454;
    }
    // 0x8000E490: nop

L_8000E494:
    // 0x8000E494: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8000E498: nop

    // 0x8000E49C: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8000E4A0: nop

    // 0x8000E4A4: beq         $t9, $zero, L_8000E4D0
    if (ctx->r25 == 0) {
        // 0x8000E4A8: nop
    
            goto L_8000E4D0;
    }
    // 0x8000E4A8: nop

    // 0x8000E4AC: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8000E4B0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8000E4B4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000E4B8: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x8000E4BC: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x8000E4C0: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x8000E4C4: nop

    // 0x8000E4C8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8000E4CC: sw          $t5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r13;
L_8000E4D0:
    // 0x8000E4D0: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8000E4D4: nop

    // 0x8000E4D8: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8000E4DC: nop

    // 0x8000E4E0: beq         $t7, $zero, L_8000E528
    if (ctx->r15 == 0) {
        // 0x8000E4E4: nop
    
            goto L_8000E528;
    }
    // 0x8000E4E4: nop

    // 0x8000E4E8: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8000E4EC: beq         $t7, $at, L_8000E528
    if (ctx->r15 == ctx->r1) {
        // 0x8000E4F0: nop
    
            goto L_8000E528;
    }
    // 0x8000E4F0: nop

L_8000E4F4:
    // 0x8000E4F4: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8000E4F8: nop

    // 0x8000E4FC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8000E500: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8000E504: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8000E508: nop

    // 0x8000E50C: lbu         $t0, 0x0($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X0);
    // 0x8000E510: nop

    // 0x8000E514: beq         $t0, $zero, L_8000E528
    if (ctx->r8 == 0) {
        // 0x8000E518: nop
    
            goto L_8000E528;
    }
    // 0x8000E518: nop

    // 0x8000E51C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8000E520: bne         $t0, $at, L_8000E4F4
    if (ctx->r8 != ctx->r1) {
        // 0x8000E524: nop
    
            goto L_8000E4F4;
    }
    // 0x8000E524: nop

L_8000E528:
    // 0x8000E528: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8000E52C: nop

    // 0x8000E530: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x8000E534: nop

    // 0x8000E538: bne         $t3, $zero, L_8000E430
    if (ctx->r11 != 0) {
        // 0x8000E53C: nop
    
            goto L_8000E430;
    }
    // 0x8000E53C: nop

L_8000E540:
    // 0x8000E540: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x8000E544: nop

    // 0x8000E548: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x8000E54C: bne         $at, $zero, L_8000E66C
    if (ctx->r1 != 0) {
        // 0x8000E550: nop
    
            goto L_8000E66C;
    }
    // 0x8000E550: nop

    // 0x8000E554: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x8000E558: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x8000E55C: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x8000E560: nop

    // 0x8000E564: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8000E568: nop

    // 0x8000E56C: bne         $t7, $at, L_8000E66C
    if (ctx->r15 != ctx->r1) {
        // 0x8000E570: nop
    
            goto L_8000E66C;
    }
    // 0x8000E570: nop

L_8000E574:
    // 0x8000E574: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8000E578: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8000E57C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8000E580: nop

    // 0x8000E584: lbu         $a1, 0x1($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X1);
    // 0x8000E588: nop

    // 0x8000E58C: beq         $a1, $at, L_8000E5C0
    if (ctx->r5 == ctx->r1) {
        // 0x8000E590: nop
    
            goto L_8000E5C0;
    }
    // 0x8000E590: nop

    // 0x8000E594: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x8000E598: beq         $a1, $at, L_8000E5FC
    if (ctx->r5 == ctx->r1) {
        // 0x8000E59C: nop
    
            goto L_8000E5FC;
    }
    // 0x8000E59C: nop

    // 0x8000E5A0: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x8000E5A4: beq         $a1, $at, L_8000E5E8
    if (ctx->r5 == ctx->r1) {
        // 0x8000E5A8: nop
    
            goto L_8000E5E8;
    }
    // 0x8000E5A8: nop

    // 0x8000E5AC: addiu       $at, $zero, 0x76
    ctx->r1 = ADD32(0, 0X76);
    // 0x8000E5B0: beq         $a1, $at, L_8000E5D4
    if (ctx->r5 == ctx->r1) {
        // 0x8000E5B4: nop
    
            goto L_8000E5D4;
    }
    // 0x8000E5B4: nop

    // 0x8000E5B8: b           L_8000E610
    // 0x8000E5BC: nop

        goto L_8000E610;
    // 0x8000E5BC: nop

L_8000E5C0:
    // 0x8000E5C0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000E5C4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000E5C8: sw          $t1, -0x5C7C($at)
    MEM_W(-0X5C7C, ctx->r1) = ctx->r9;
    // 0x8000E5CC: b           L_8000E618
    // 0x8000E5D0: nop

        goto L_8000E618;
    // 0x8000E5D0: nop

L_8000E5D4:
    // 0x8000E5D4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8000E5D8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000E5DC: sw          $t0, -0x5C80($at)
    MEM_W(-0X5C80, ctx->r1) = ctx->r8;
    // 0x8000E5E0: b           L_8000E618
    // 0x8000E5E4: nop

        goto L_8000E618;
    // 0x8000E5E4: nop

L_8000E5E8:
    // 0x8000E5E8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8000E5EC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000E5F0: sw          $t2, -0x5C78($at)
    MEM_W(-0X5C78, ctx->r1) = ctx->r10;
    // 0x8000E5F4: b           L_8000E618
    // 0x8000E5F8: nop

        goto L_8000E618;
    // 0x8000E5F8: nop

L_8000E5FC:
    // 0x8000E5FC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8000E600: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000E604: sw          $t3, -0x5C74($at)
    MEM_W(-0X5C74, ctx->r1) = ctx->r11;
    // 0x8000E608: b           L_8000E618
    // 0x8000E60C: nop

        goto L_8000E618;
    // 0x8000E60C: nop

L_8000E610:
    // 0x8000E610: b           L_8000E618
    // 0x8000E614: nop

        goto L_8000E618;
    // 0x8000E614: nop

L_8000E618:
    // 0x8000E618: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x8000E61C: nop

    // 0x8000E620: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8000E624: sw          $t5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r13;
    // 0x8000E628: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8000E62C: nop

    // 0x8000E630: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x8000E634: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8000E638: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8000E63C: nop

    // 0x8000E640: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x8000E644: bne         $at, $zero, L_8000E66C
    if (ctx->r1 != 0) {
        // 0x8000E648: nop
    
            goto L_8000E66C;
    }
    // 0x8000E648: nop

    // 0x8000E64C: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8000E650: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x8000E654: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x8000E658: nop

    // 0x8000E65C: lbu         $t0, 0x0($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X0);
    // 0x8000E660: nop

    // 0x8000E664: beq         $t0, $at, L_8000E574
    if (ctx->r8 == ctx->r1) {
        // 0x8000E668: nop
    
            goto L_8000E574;
    }
    // 0x8000E668: nop

L_8000E66C:
    // 0x8000E66C: b           L_8000E674
    // 0x8000E670: nop

        goto L_8000E674;
    // 0x8000E670: nop

L_8000E674:
    // 0x8000E674: jr          $ra
    // 0x8000E678: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x8000E678: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void guScaleF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037498: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003749C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800374A0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800374A4: jal         0x800361F0
    // 0x800374A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x800374A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800374AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800374B0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800374B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800374B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800374BC: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x800374C0: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800374C4: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x800374C8: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800374CC: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x800374D0: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    // 0x800374D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800374D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800374DC: jr          $ra
    // 0x800374E0: nop

    return;
    // 0x800374E0: nop

;}
RECOMP_FUNC void func_8001D4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D4D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001D4D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D4D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D4DC: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8001D4E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D4E4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8001D4E8: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8001D4EC: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8001D4F0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8001D4F4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8001D4F8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8001D4FC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8001D500: nop

    // 0x8001D504: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8001D508: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001D50C: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8001D510: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D514: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8001D518: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8001D51C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8001D520: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8001D524: lui         $t3, 0xFE00
    ctx->r11 = S32(0XFE00 << 16);
    // 0x8001D528: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8001D52C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8001D530: jal         0x800358D0
    // 0x8001D534: addiu       $a0, $a0, -0x5800
    ctx->r4 = ADD32(ctx->r4, -0X5800);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x8001D534: addiu       $a0, $a0, -0x5800
    ctx->r4 = ADD32(ctx->r4, -0X5800);
    after_0:
    // 0x8001D538: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8001D53C: nop

    // 0x8001D540: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x8001D544: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D548: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8001D54C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D550: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8001D554: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8001D558: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8001D55C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8001D560: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8001D564: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x8001D568: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8001D56C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8001D570: lui         $t0, 0x30
    ctx->r8 = S32(0X30 << 16);
    // 0x8001D574: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8001D578: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001D57C: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8001D580: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D584: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8001D588: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8001D58C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8001D590: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8001D594: lui         $t4, 0xFF10
    ctx->r12 = S32(0XFF10 << 16);
    // 0x8001D598: ori         $t4, $t4, 0x13F
    ctx->r12 = ctx->r12 | 0X13F;
    // 0x8001D59C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8001D5A0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8001D5A4: jal         0x800358D0
    // 0x8001D5A8: addiu       $a0, $a0, -0x5800
    ctx->r4 = ADD32(ctx->r4, -0X5800);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8001D5A8: addiu       $a0, $a0, -0x5800
    ctx->r4 = ADD32(ctx->r4, -0X5800);
    after_1:
    // 0x8001D5AC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001D5B0: nop

    // 0x8001D5B4: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x8001D5B8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001D5BC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8001D5C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D5C4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8001D5C8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8001D5CC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8001D5D0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D5D4: lui         $t9, 0xF700
    ctx->r25 = S32(0XF700 << 16);
    // 0x8001D5D8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8001D5DC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D5E0: lui         $t1, 0xFFFC
    ctx->r9 = S32(0XFFFC << 16);
    // 0x8001D5E4: ori         $t1, $t1, 0xFFFC
    ctx->r9 = ctx->r9 | 0XFFFC;
    // 0x8001D5E8: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8001D5EC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001D5F0: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8001D5F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D5F8: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8001D5FC: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8001D600: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8001D604: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001D608: lui         $t5, 0xF64F
    ctx->r13 = S32(0XF64F << 16);
    // 0x8001D60C: ori         $t5, $t5, 0xC3BC
    ctx->r13 = ctx->r13 | 0XC3BC;
    // 0x8001D610: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8001D614: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8001D618: nop

    // 0x8001D61C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8001D620: b           L_8001D628
    // 0x8001D624: nop

        goto L_8001D628;
    // 0x8001D624: nop

L_8001D628:
    // 0x8001D628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D62C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8001D630: jr          $ra
    // 0x8001D634: nop

    return;
    // 0x8001D634: nop

;}
RECOMP_FUNC void sinf_game(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034970: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x80034974: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x80034978: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8003497C: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80034980: andi        $t6, $v1, 0x1FF
    ctx->r14 = ctx->r3 & 0X1FF;
    // 0x80034984: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x80034988: beq         $at, $zero, L_800349F0
    if (ctx->r1 == 0) {
        // 0x8003498C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_800349F0;
    }
    // 0x8003498C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80034990: slti        $at, $t6, 0xE6
    ctx->r1 = SIGNED(ctx->r14) < 0XE6 ? 1 : 0;
    // 0x80034994: bne         $at, $zero, L_800349E8
    if (ctx->r1 != 0) {
        // 0x80034998: cvt.d.s     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
            goto L_800349E8;
    }
    // 0x80034998: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x8003499C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x800349A0: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x800349A4: addiu       $v1, $v1, -0x3D10
    ctx->r3 = ADD32(ctx->r3, -0X3D10);
    // 0x800349A8: ldc1        $f6, 0x20($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X20);
    // 0x800349AC: ldc1        $f10, 0x18($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X18);
    // 0x800349B0: ldc1        $f4, 0x10($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, 0X10);
    // 0x800349B4: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x800349B8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x800349BC: ldc1        $f10, 0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X8);
    // 0x800349C0: mul.d       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f12.d);
    // 0x800349C4: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800349C8: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x800349CC: add.d       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f14.d = ctx->f10.d + ctx->f8.d;
    // 0x800349D0: mul.d       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x800349D4: nop

    // 0x800349D8: mul.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f14.d);
    // 0x800349DC: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x800349E0: jr          $ra
    // 0x800349E4: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    // 0x800349E4: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
L_800349E8:
    // 0x800349E8: jr          $ra
    // 0x800349EC: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    return;
    // 0x800349EC: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
L_800349F0:
    // 0x800349F0: slti        $at, $v1, 0x136
    ctx->r1 = SIGNED(ctx->r3) < 0X136 ? 1 : 0;
    // 0x800349F4: beq         $at, $zero, L_80034B08
    if (ctx->r1 == 0) {
        // 0x800349F8: lwc1        $f4, 0x0($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
            goto L_80034B08;
    }
    // 0x800349F8: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800349FC: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80034A00: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034A04: ldc1        $f10, -0x3CE8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3CE8);
    // 0x80034A08: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x80034A0C: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x80034A10: mul.d       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f10.d);
    // 0x80034A14: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80034A18: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80034A1C: c.le.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d <= ctx->f0.d;
    // 0x80034A20: nop

    // 0x80034A24: bc1fl       L_80034A54
    if (!c1cs) {
        // 0x80034A28: mtc1        $at, $f7
        ctx->f_odd[(7 - 1) * 2] = ctx->r1;
            goto L_80034A54;
    }
    goto skip_0;
    // 0x80034A28: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x80034A2C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80034A30: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80034A34: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80034A38: nop

    // 0x80034A3C: add.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d + ctx->f16.d;
    // 0x80034A40: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x80034A44: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80034A48: b           L_80034A70
    // 0x80034A4C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
        goto L_80034A70;
    // 0x80034A4C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80034A50: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
L_80034A54:
    // 0x80034A54: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80034A58: nop

    // 0x80034A5C: sub.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f0.d - ctx->f6.d;
    // 0x80034A60: trunc.w.d   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80034A64: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80034A68: nop

    // 0x80034A6C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
L_80034A70:
    // 0x80034A70: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034A74: ldc1        $f18, -0x3CE0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3CE0);
    // 0x80034A78: cvt.d.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
    // 0x80034A7C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034A80: ldc1        $f6, -0x3CD8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3CD8);
    // 0x80034A84: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x80034A88: addiu       $v1, $v1, -0x3D10
    ctx->r3 = ADD32(ctx->r3, -0X3D10);
    // 0x80034A8C: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x80034A90: ldc1        $f8, 0x20($v1)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r3, 0X20);
    // 0x80034A94: ldc1        $f18, 0x18($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X18);
    // 0x80034A98: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x80034A9C: mul.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x80034AA0: sub.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d - ctx->f4.d;
    // 0x80034AA4: sub.d       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = ctx->f2.d - ctx->f10.d;
    // 0x80034AA8: ldc1        $f10, 0x10($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X10);
    // 0x80034AAC: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80034AB0: nop

    // 0x80034AB4: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x80034AB8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80034ABC: ldc1        $f18, 0x8($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X8);
    // 0x80034AC0: mul.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x80034AC4: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x80034AC8: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x80034ACC: bne         $t9, $zero, L_80034AEC
    if (ctx->r25 != 0) {
        // 0x80034AD0: add.d       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
            goto L_80034AEC;
    }
    // 0x80034AD0: add.d       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
    // 0x80034AD4: mul.d       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x80034AD8: nop

    // 0x80034ADC: mul.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f14.d);
    // 0x80034AE0: add.d       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f6.d + ctx->f2.d;
    // 0x80034AE4: jr          $ra
    // 0x80034AE8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    return;
    // 0x80034AE8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_80034AEC:
    // 0x80034AEC: mul.d       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x80034AF0: nop

    // 0x80034AF4: mul.d       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x80034AF8: add.d       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f18.d + ctx->f2.d;
    // 0x80034AFC: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x80034B00: jr          $ra
    // 0x80034B04: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x80034B04: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80034B08:
    // 0x80034B08: c.eq.s      $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f4.fl == ctx->f4.fl;
    // 0x80034B0C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034B10: bc1t        L_80034B24
    if (c1cs) {
        // 0x80034B14: nop
    
            goto L_80034B24;
    }
    // 0x80034B14: nop

    // 0x80034B18: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034B1C: jr          $ra
    // 0x80034B20: lwc1        $f0, -0x3940($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3940);
    return;
    // 0x80034B20: lwc1        $f0, -0x3940($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3940);
L_80034B24:
    // 0x80034B24: lwc1        $f0, -0x3CD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3CD0);
    // 0x80034B28: jr          $ra
    // 0x80034B2C: nop

    return;
    // 0x80034B2C: nop

;}
RECOMP_FUNC void func_8000AC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AC1C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8000AC20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000AC24: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8000AC28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000AC2C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000AC30: lw          $t6, -0x5CA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CA8);
    // 0x8000AC34: nop

    // 0x8000AC38: bne         $t6, $zero, L_8000AC48
    if (ctx->r14 != 0) {
        // 0x8000AC3C: nop
    
            goto L_8000AC48;
    }
    // 0x8000AC3C: nop

    // 0x8000AC40: b           L_8000AF30
    // 0x8000AC44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000AF30;
    // 0x8000AC44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000AC48:
    // 0x8000AC48: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000AC4C: lw          $t8, 0x2D58($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D58);
    // 0x8000AC50: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8000AC54: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x8000AC58: nop

    // 0x8000AC5C: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8000AC60: beq         $at, $zero, L_8000AC70
    if (ctx->r1 == 0) {
        // 0x8000AC64: nop
    
            goto L_8000AC70;
    }
    // 0x8000AC64: nop

    // 0x8000AC68: bgez        $t7, L_8000AC78
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8000AC6C: nop
    
            goto L_8000AC78;
    }
    // 0x8000AC6C: nop

L_8000AC70:
    // 0x8000AC70: b           L_8000AF30
    // 0x8000AC74: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000AF30;
    // 0x8000AC74: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000AC78:
    // 0x8000AC78: lh          $a0, 0x4A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X4A);
    // 0x8000AC7C: jal         0x800069D0
    // 0x8000AC80: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800069D0(rdram, ctx);
        goto after_0;
    // 0x8000AC80: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x8000AC84: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000AC88: lw          $t0, 0x2D58($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D58);
    // 0x8000AC8C: addiu       $at, $zero, 0x5431
    ctx->r1 = ADD32(0, 0X5431);
    // 0x8000AC90: lh          $s0, 0x0($t0)
    ctx->r16 = MEM_H(ctx->r8, 0X0);
    // 0x8000AC94: nop

    // 0x8000AC98: beq         $s0, $at, L_8000ACC0
    if (ctx->r16 == ctx->r1) {
        // 0x8000AC9C: nop
    
            goto L_8000ACC0;
    }
    // 0x8000AC9C: nop

    // 0x8000ACA0: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x8000ACA4: beq         $s0, $at, L_8000ACC0
    if (ctx->r16 == ctx->r1) {
        // 0x8000ACA8: nop
    
            goto L_8000ACC0;
    }
    // 0x8000ACA8: nop

    // 0x8000ACAC: addiu       $at, $zero, 0x5433
    ctx->r1 = ADD32(0, 0X5433);
    // 0x8000ACB0: beq         $s0, $at, L_8000ACC0
    if (ctx->r16 == ctx->r1) {
        // 0x8000ACB4: nop
    
            goto L_8000ACC0;
    }
    // 0x8000ACB4: nop

    // 0x8000ACB8: b           L_8000ACF0
    // 0x8000ACBC: nop

        goto L_8000ACF0;
    // 0x8000ACBC: nop

L_8000ACC0:
    // 0x8000ACC0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8000ACC4: jal         0x80007140
    // 0x8000ACC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80007140(rdram, ctx);
        goto after_1;
    // 0x8000ACC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8000ACCC: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x8000ACD0: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x8000ACD4: nop

    // 0x8000ACD8: bgez        $t1, L_8000ACE8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8000ACDC: nop
    
            goto L_8000ACE8;
    }
    // 0x8000ACDC: nop

    // 0x8000ACE0: b           L_8000AF30
    // 0x8000ACE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000AF30;
    // 0x8000ACE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000ACE8:
    // 0x8000ACE8: b           L_8000AD00
    // 0x8000ACEC: nop

        goto L_8000AD00;
    // 0x8000ACEC: nop

L_8000ACF0:
    // 0x8000ACF0: lbu         $t2, 0x3B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3B);
    // 0x8000ACF4: nop

    // 0x8000ACF8: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x8000ACFC: sh          $t3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r11;
L_8000AD00:
    // 0x8000AD00: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x8000AD04: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000AD08: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8000AD0C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8000AD10: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8000AD14: lw          $t6, 0x2D5C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D5C);
    // 0x8000AD18: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8000AD1C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8000AD20: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x8000AD24: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x8000AD28: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8000AD2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000AD30: lw          $t7, 0xC($t9)
    ctx->r15 = MEM_W(ctx->r25, 0XC);
    // 0x8000AD34: nop

    // 0x8000AD38: bne         $t7, $at, L_8000AD68
    if (ctx->r15 != ctx->r1) {
        // 0x8000AD3C: nop
    
            goto L_8000AD68;
    }
    // 0x8000AD3C: nop

    // 0x8000AD40: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x8000AD44: nop

    // 0x8000AD48: andi        $t1, $t0, 0x1000
    ctx->r9 = ctx->r8 & 0X1000;
    // 0x8000AD4C: bne         $t1, $zero, L_8000AD68
    if (ctx->r9 != 0) {
        // 0x8000AD50: nop
    
            goto L_8000AD68;
    }
    // 0x8000AD50: nop

    // 0x8000AD54: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8000AD58: jal         0x8000AF40
    // 0x8000AD5C: nop

    func_8000AF40(rdram, ctx);
        goto after_2;
    // 0x8000AD5C: nop

    after_2:
    // 0x8000AD60: b           L_8000AD74
    // 0x8000AD64: nop

        goto L_8000AD74;
    // 0x8000AD64: nop

L_8000AD68:
    // 0x8000AD68: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8000AD6C: nop

    // 0x8000AD70: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
L_8000AD74:
    // 0x8000AD74: lh          $t3, 0x4A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4A);
    // 0x8000AD78: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8000AD7C: nop

    // 0x8000AD80: sh          $t3, 0x14($t4)
    MEM_H(0X14, ctx->r12) = ctx->r11;
    // 0x8000AD84: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8000AD88: lb          $t5, 0x2D7A($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X2D7A);
    // 0x8000AD8C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8000AD90: nop

    // 0x8000AD94: sb          $t5, 0x22($t6)
    MEM_B(0X22, ctx->r14) = ctx->r13;
    // 0x8000AD98: lh          $a0, 0x38($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X38);
    // 0x8000AD9C: jal         0x80002D90
    // 0x8000ADA0: nop

    func_80002D90(rdram, ctx);
        goto after_3;
    // 0x8000ADA0: nop

    after_3:
    // 0x8000ADA4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8000ADA8: nop

    // 0x8000ADAC: sh          $v0, 0x20($t8)
    MEM_H(0X20, ctx->r24) = ctx->r2;
    // 0x8000ADB0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8000ADB4: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x8000ADB8: sb          $t7, 0x23($t9)
    MEM_B(0X23, ctx->r25) = ctx->r15;
    // 0x8000ADBC: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000ADC0: lbu         $t0, 0x2D7B($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X2D7B);
    // 0x8000ADC4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8000ADC8: nop

    // 0x8000ADCC: sb          $t0, 0x25($t1)
    MEM_B(0X25, ctx->r9) = ctx->r8;
    // 0x8000ADD0: lbu         $t2, 0x3A($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3A);
    // 0x8000ADD4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8000ADD8: nop

    // 0x8000ADDC: sb          $t2, 0x24($t3)
    MEM_B(0X24, ctx->r11) = ctx->r10;
    // 0x8000ADE0: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000ADE4: lh          $t4, 0x2D78($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X2D78);
    // 0x8000ADE8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8000ADEC: nop

    // 0x8000ADF0: sh          $t4, 0x1A($t5)
    MEM_H(0X1A, ctx->r13) = ctx->r12;
    // 0x8000ADF4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8000ADF8: nop

    // 0x8000ADFC: sh          $zero, 0x18($t6)
    MEM_H(0X18, ctx->r14) = 0;
    // 0x8000AE00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000AE04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000AE08: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8000AE0C: nop

    // 0x8000AE10: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8000AE14: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000AE18: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8000AE1C: nop

    // 0x8000AE20: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x8000AE24: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8000AE28: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000AE2C: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x8000AE30: lbu         $t1, 0x3B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3B);
    // 0x8000AE34: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8000AE38: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8000AE3C: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x8000AE40: sb          $t3, 0x26($t4)
    MEM_B(0X26, ctx->r12) = ctx->r11;
    // 0x8000AE44: lb          $t5, 0x3D($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X3D);
    // 0x8000AE48: nop

    // 0x8000AE4C: beq         $t5, $zero, L_8000AE64
    if (ctx->r13 == 0) {
        // 0x8000AE50: nop
    
            goto L_8000AE64;
    }
    // 0x8000AE50: nop

    // 0x8000AE54: lb          $t6, 0x3D($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X3D);
    // 0x8000AE58: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8000AE5C: b           L_8000AE78
    // 0x8000AE60: sb          $t6, 0x28($t8)
    MEM_B(0X28, ctx->r24) = ctx->r14;
        goto L_8000AE78;
    // 0x8000AE60: sb          $t6, 0x28($t8)
    MEM_B(0X28, ctx->r24) = ctx->r14;
L_8000AE64:
    // 0x8000AE64: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000AE68: lbu         $t7, 0x2D7C($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2D7C);
    // 0x8000AE6C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8000AE70: nop

    // 0x8000AE74: sb          $t7, 0x28($t9)
    MEM_B(0X28, ctx->r25) = ctx->r15;
L_8000AE78:
    // 0x8000AE78: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x8000AE7C: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000AE80: lw          $t2, 0x2D88($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2D88);
    // 0x8000AE84: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x8000AE88: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8000AE8C: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x8000AE90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000AE94: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8000AE98: nop

    // 0x8000AE9C: swc1        $f8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f8.u32l;
    // 0x8000AEA0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8000AEA4: nop

    // 0x8000AEA8: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8000AEAC: nop

    // 0x8000AEB0: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x8000AEB4: lb          $t6, 0x3C($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X3C);
    // 0x8000AEB8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8000AEBC: nop

    // 0x8000AEC0: sb          $t6, 0xE($t8)
    MEM_B(0XE, ctx->r24) = ctx->r14;
    // 0x8000AEC4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8000AEC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000AECC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8000AED0: nop

    // 0x8000AED4: swc1        $f16, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f16.u32l;
    // 0x8000AED8: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x8000AEDC: nop

    // 0x8000AEE0: bgez        $t9, L_8000AEF8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8000AEE4: nop
    
            goto L_8000AEF8;
    }
    // 0x8000AEE4: nop

    // 0x8000AEE8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8000AEEC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8000AEF0: b           L_8000AF04
    // 0x8000AEF4: sb          $t0, 0x29($t1)
    MEM_B(0X29, ctx->r9) = ctx->r8;
        goto L_8000AF04;
    // 0x8000AEF4: sb          $t0, 0x29($t1)
    MEM_B(0X29, ctx->r9) = ctx->r8;
L_8000AEF8:
    // 0x8000AEF8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8000AEFC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8000AF00: sb          $t2, 0x29($t3)
    MEM_B(0X29, ctx->r11) = ctx->r10;
L_8000AF04:
    // 0x8000AF04: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8000AF08: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8000AF0C: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8000AF10: ori         $t8, $t6, 0x1000
    ctx->r24 = ctx->r14 | 0X1000;
    // 0x8000AF14: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x8000AF18: sw          $t7, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r15;
    // 0x8000AF1C: lh          $v0, 0x26($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X26);
    // 0x8000AF20: b           L_8000AF30
    // 0x8000AF24: nop

        goto L_8000AF30;
    // 0x8000AF24: nop

    // 0x8000AF28: b           L_8000AF30
    // 0x8000AF2C: nop

        goto L_8000AF30;
    // 0x8000AF2C: nop

L_8000AF30:
    // 0x8000AF30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000AF34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000AF38: jr          $ra
    // 0x8000AF3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8000AF3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80010634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010634: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80010638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001063C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80010640: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80010644: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80010648: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8001064C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80010650: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80010654: nop

    // 0x80010658: beq         $t7, $at, L_80010668
    if (ctx->r15 == ctx->r1) {
        // 0x8001065C: nop
    
            goto L_80010668;
    }
    // 0x8001065C: nop

    // 0x80010660: b           L_800108C0
    // 0x80010664: nop

        goto L_800108C0;
    // 0x80010664: nop

L_80010668:
    // 0x80010668: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8001066C: nop

    // 0x80010670: beq         $t8, $zero, L_80010684
    if (ctx->r24 == 0) {
        // 0x80010674: nop
    
            goto L_80010684;
    }
    // 0x80010674: nop

    // 0x80010678: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8001067C: jal         0x80010098
    // 0x80010680: nop

    func_80010098(rdram, ctx);
        goto after_0;
    // 0x80010680: nop

    after_0:
L_80010684:
    // 0x80010684: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80010688: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8001068C: lw          $t9, -0x5C30($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5C30);
    // 0x80010690: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80010694: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80010698: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8001069C: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800106A0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800106A4: lw          $t5, 0x5D54($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5D54);
    // 0x800106A8: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800106AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800106B0: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x800106B4: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x800106B8: nop

    // 0x800106BC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x800106C0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800106C4: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800106C8: lw          $t8, -0x5C30($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5C30);
    // 0x800106CC: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x800106D0: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x800106D4: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x800106D8: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800106DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800106E0: lw          $t5, 0x5D54($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5D54);
    // 0x800106E4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800106E8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800106EC: addu        $t4, $t5, $t3
    ctx->r12 = ADD32(ctx->r13, ctx->r11);
    // 0x800106F0: lw          $t6, 0x8($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X8);
    // 0x800106F4: nop

    // 0x800106F8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800106FC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80010700: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80010704: blez        $t7, L_800108B8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80010708: nop
    
            goto L_800108B8;
    }
    // 0x80010708: nop

L_8001070C:
    // 0x8001070C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80010710: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80010714: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80010718: subu        $t8, $t8, $t0
    ctx->r24 = SUB32(ctx->r24, ctx->r8);
    // 0x8001071C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80010720: subu        $t8, $t8, $t0
    ctx->r24 = SUB32(ctx->r24, ctx->r8);
    // 0x80010724: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80010728: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x8001072C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80010730: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80010734: nop

    // 0x80010738: lw          $t5, 0x28($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X28);
    // 0x8001073C: nop

    // 0x80010740: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x80010744: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80010748: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8001074C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80010750: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x80010754: nop

    // 0x80010758: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x8001075C: bne         $at, $zero, L_800107BC
    if (ctx->r1 != 0) {
        // 0x80010760: nop
    
            goto L_800107BC;
    }
    // 0x80010760: nop

L_80010764:
    // 0x80010764: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80010768: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8001076C: lw          $t0, 0x0($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X0);
    // 0x80010770: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80010774: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80010778: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8001077C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80010780: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x80010784: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80010788: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8001078C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80010790: nop

    // 0x80010794: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80010798: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8001079C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800107A0: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x800107A4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x800107A8: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x800107AC: nop

    // 0x800107B0: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800107B4: bne         $at, $zero, L_80010764
    if (ctx->r1 != 0) {
        // 0x800107B8: nop
    
            goto L_80010764;
    }
    // 0x800107B8: nop

L_800107BC:
    // 0x800107BC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800107C0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800107C4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800107C8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800107CC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800107D0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800107D4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800107D8: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x800107DC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800107E0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800107E4: nop

    // 0x800107E8: sw          $at, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r1;
    // 0x800107EC: lw          $t8, 0xC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC);
    // 0x800107F0: nop

    // 0x800107F4: sw          $t8, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r24;
    // 0x800107F8: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x800107FC: nop

    // 0x80010800: sw          $at, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r1;
    // 0x80010804: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80010808: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001080C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80010810: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x80010814: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80010818: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x8001081C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80010820: addu        $t3, $t0, $t4
    ctx->r11 = ADD32(ctx->r8, ctx->r12);
    // 0x80010824: lw          $at, 0x14($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X14);
    // 0x80010828: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8001082C: nop

    // 0x80010830: sw          $at, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->r1;
    // 0x80010834: lw          $t7, 0x18($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X18);
    // 0x80010838: nop

    // 0x8001083C: sw          $t7, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r15;
    // 0x80010840: lw          $at, 0x1C($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X1C);
    // 0x80010844: nop

    // 0x80010848: sw          $at, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r1;
    // 0x8001084C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80010850: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80010854: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80010858: subu        $t1, $t1, $t8
    ctx->r9 = SUB32(ctx->r9, ctx->r24);
    // 0x8001085C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80010860: subu        $t1, $t1, $t8
    ctx->r9 = SUB32(ctx->r9, ctx->r24);
    // 0x80010864: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80010868: addu        $t0, $t6, $t1
    ctx->r8 = ADD32(ctx->r14, ctx->r9);
    // 0x8001086C: lw          $at, 0x20($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X20);
    // 0x80010870: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80010874: nop

    // 0x80010878: sw          $at, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r1;
    // 0x8001087C: lw          $t5, 0x24($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X24);
    // 0x80010880: nop

    // 0x80010884: sw          $t5, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r13;
    // 0x80010888: lw          $at, 0x28($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X28);
    // 0x8001088C: nop

    // 0x80010890: sw          $at, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->r1;
    // 0x80010894: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80010898: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8001089C: sw          $t9, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r25;
    // 0x800108A0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800108A4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800108A8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800108AC: slt         $at, $t8, $t6
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800108B0: bne         $at, $zero, L_8001070C
    if (ctx->r1 != 0) {
        // 0x800108B4: sw          $t8, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r24;
            goto L_8001070C;
    }
    // 0x800108B4: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_800108B8:
    // 0x800108B8: b           L_800108C0
    // 0x800108BC: nop

        goto L_800108C0;
    // 0x800108BC: nop

L_800108C0:
    // 0x800108C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800108C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800108C8: jr          $ra
    // 0x800108CC: nop

    return;
    // 0x800108CC: nop

;}
RECOMP_FUNC void alEvtqNextEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E930: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003E934: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003E938: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003E93C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003E940: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003E944: jal         0x80031F70
    // 0x8003E948: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8003E948: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8003E94C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8003E950: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8003E954: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8003E958: lw          $s0, 0x8($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X8);
    // 0x8003E95C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003E960: beql        $s0, $zero, L_8003E998
    if (ctx->r16 == 0) {
        // 0x8003E964: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_8003E998;
    }
    goto skip_0;
    // 0x8003E964: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    skip_0:
    // 0x8003E968: jal         0x800357B0
    // 0x8003E96C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x8003E96C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8003E970: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x8003E974: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8003E978: jal         0x80046380
    // 0x8003E97C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    alCopy(rdram, ctx);
        goto after_2;
    // 0x8003E97C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8003E980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003E984: jal         0x800357E0
    // 0x8003E988: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    alLink(rdram, ctx);
        goto after_3;
    // 0x8003E988: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x8003E98C: b           L_8003E99C
    // 0x8003E990: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
        goto L_8003E99C;
    // 0x8003E990: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x8003E994: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_8003E998:
    // 0x8003E998: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
L_8003E99C:
    // 0x8003E99C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8003E9A0: jal         0x80031F70
    // 0x8003E9A4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    osSetIntMask_recomp(rdram, ctx);
        goto after_4;
    // 0x8003E9A4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_4:
    // 0x8003E9A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E9AC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8003E9B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003E9B4: jr          $ra
    // 0x8003E9B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8003E9B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80004610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004618: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000461C: lw          $t6, 0x2EC0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EC0);
    // 0x80004620: nop

    // 0x80004624: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80004628: beq         $t7, $zero, L_80004638
    if (ctx->r15 == 0) {
        // 0x8000462C: nop
    
            goto L_80004638;
    }
    // 0x8000462C: nop

    // 0x80004630: b           L_800046B4
    // 0x80004634: nop

        goto L_800046B4;
    // 0x80004634: nop

L_80004638:
    // 0x80004638: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000463C: lw          $t8, 0x2EBC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2EBC);
    // 0x80004640: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80004644: beq         $t8, $at, L_80004654
    if (ctx->r24 == ctx->r1) {
        // 0x80004648: nop
    
            goto L_80004654;
    }
    // 0x80004648: nop

    // 0x8000464C: b           L_800046B4
    // 0x80004650: nop

        goto L_800046B4;
    // 0x80004650: nop

L_80004654:
    // 0x80004654: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80004658: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x8000465C: jal         0x80034710
    // 0x80004660: nop

    alSeqpGetState(rdram, ctx);
        goto after_0;
    // 0x80004660: nop

    after_0:
    // 0x80004664: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80004668: bne         $v0, $at, L_80004698
    if (ctx->r2 != ctx->r1) {
        // 0x8000466C: nop
    
            goto L_80004698;
    }
    // 0x8000466C: nop

    // 0x80004670: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80004674: lw          $t9, 0x2EC0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2EC0);
    // 0x80004678: nop

    // 0x8000467C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80004680: bne         $t0, $zero, L_80004698
    if (ctx->r8 != 0) {
        // 0x80004684: nop
    
            goto L_80004698;
    }
    // 0x80004684: nop

    // 0x80004688: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000468C: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80004690: jal         0x80034720
    // 0x80004694: nop

    alSeqpStop(rdram, ctx);
        goto after_1;
    // 0x80004694: nop

    after_1:
L_80004698:
    // 0x80004698: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000469C: lw          $t1, 0x2EC0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2EC0);
    // 0x800046A0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800046A4: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x800046A8: sw          $t2, 0x2EC0($at)
    MEM_W(0X2EC0, ctx->r1) = ctx->r10;
    // 0x800046AC: b           L_800046B4
    // 0x800046B0: nop

        goto L_800046B4;
    // 0x800046B0: nop

L_800046B4:
    // 0x800046B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800046B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800046BC: jr          $ra
    // 0x800046C0: nop

    return;
    // 0x800046C0: nop

;}
