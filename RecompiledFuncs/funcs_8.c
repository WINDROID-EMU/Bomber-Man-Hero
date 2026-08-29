#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8002D968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D96C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D970: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002D974: lb          $t6, 0x7688($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7688);
    // 0x8002D978: nop

    // 0x8002D97C: bne         $t6, $zero, L_8002D9BC
    if (ctx->r14 != 0) {
        // 0x8002D980: nop
    
            goto L_8002D9BC;
    }
    // 0x8002D980: nop

    // 0x8002D984: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002D988: jal         0x8001C1A8
    // 0x8002D98C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001C1A8(rdram, ctx);
        goto after_0;
    // 0x8002D98C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8002D990: beq         $v0, $zero, L_8002D9BC
    if (ctx->r2 == 0) {
        // 0x8002D994: nop
    
            goto L_8002D9BC;
    }
    // 0x8002D994: nop

    // 0x8002D998: jal         0x8001838C
    // 0x8002D99C: nop

    func_8001838C(rdram, ctx);
        goto after_1;
    // 0x8002D99C: nop

    after_1:
    // 0x8002D9A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002D9A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002D9A8: jal         0x8001B234
    // 0x8002D9AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001B234(rdram, ctx);
        goto after_2;
    // 0x8002D9AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8002D9B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002D9B4: jal         0x8001C384
    // 0x8002D9B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001C384(rdram, ctx);
        goto after_3;
    // 0x8002D9B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_8002D9BC:
    // 0x8002D9BC: b           L_8002D9C4
    // 0x8002D9C0: nop

        goto L_8002D9C4;
    // 0x8002D9C0: nop

L_8002D9C4:
    // 0x8002D9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D9C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D9CC: jr          $ra
    // 0x8002D9D0: nop

    return;
    // 0x8002D9D0: nop

;}
RECOMP_FUNC void Debug_SetMode_Menu(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EB58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002EB5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EB60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002EB64: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8002EB68: nop

    // 0x8002EB6C: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8002EB70: lwc1        $f14, 0x4($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8002EB74: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x8002EB78: jal         0x8002C144
    // 0x8002EB7C: nop

    func_8002C144(rdram, ctx);
        goto after_0;
    // 0x8002EB7C: nop

    after_0:
    // 0x8002EB80: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002EB84: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x8002EB88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002EB8C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8002EB90: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002EB94: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8002EB98: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8002EB9C: nop

    // 0x8002EBA0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8002EBA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EBA8: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EBAC: addiu       $a1, $a1, -0x4108
    ctx->r5 = ADD32(ctx->r5, -0X4108);
    // 0x8002EBB0: jal         0x80036BE4
    // 0x8002EBB4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x8002EBB4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_1:
    // 0x8002EBB8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002EBBC: jal         0x8005F9EC
    // 0x8002EBC0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_2;
    // 0x8002EBC0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x8002EBC4: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8002EBC8: lh          $a2, 0x7690($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X7690);
    // 0x8002EBCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EBD0: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EBD4: addiu       $a1, $a1, -0x40FC
    ctx->r5 = ADD32(ctx->r5, -0X40FC);
    // 0x8002EBD8: jal         0x80036BE4
    // 0x8002EBDC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_3;
    // 0x8002EBDC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_3:
    // 0x8002EBE0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002EBE4: jal         0x8005F9EC
    // 0x8002EBE8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_4;
    // 0x8002EBE8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_4:
    // 0x8002EBEC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8002EBF0:
    // 0x8002EBF0: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002EBF4: lh          $t0, 0x7690($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7690);
    // 0x8002EBF8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8002EBFC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002EC00: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8002EC04: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x8002EC08: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8002EC0C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8002EC10: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8002EC14: lbu         $t4, 0x4DD8($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X4DD8);
    // 0x8002EC18: nop

    // 0x8002EC1C: sb          $t4, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r12;
    // 0x8002EC20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EC24: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EC28: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x8002EC2C: addiu       $a1, $a1, -0x40F4
    ctx->r5 = ADD32(ctx->r5, -0X40F4);
    // 0x8002EC30: jal         0x80036BE4
    // 0x8002EC34: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x8002EC34: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_5:
    // 0x8002EC38: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002EC3C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8002EC40: sll         $t5, $a0, 3
    ctx->r13 = S32(ctx->r4 << 3);
    // 0x8002EC44: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8002EC48: jal         0x8005F9EC
    // 0x8002EC4C: addiu       $a0, $a0, 0x60
    ctx->r4 = ADD32(ctx->r4, 0X60);
    Debug_PrintXY(rdram, ctx);
        goto after_6;
    // 0x8002EC4C: addiu       $a0, $a0, 0x60
    ctx->r4 = ADD32(ctx->r4, 0X60);
    after_6:
    // 0x8002EC50: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8002EC54: nop

    // 0x8002EC58: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8002EC5C: slti        $at, $t7, 0x14
    ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
    // 0x8002EC60: bne         $at, $zero, L_8002EBF0
    if (ctx->r1 != 0) {
        // 0x8002EC64: sw          $t7, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r15;
            goto L_8002EBF0;
    }
    // 0x8002EC64: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8002EC68: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8002EC6C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002EC70: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8002EC74: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8002EC78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002EC7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002EC80: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8002EC84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EC88: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8002EC8C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EC90: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8002EC94: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8002EC98: addiu       $a1, $a1, -0x40F0
    ctx->r5 = ADD32(ctx->r5, -0X40F0);
    // 0x8002EC9C: jal         0x80036BE4
    // 0x8002ECA0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x8002ECA0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_7:
    // 0x8002ECA4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002ECA8: jal         0x8005F9EC
    // 0x8002ECAC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    Debug_PrintXY(rdram, ctx);
        goto after_8;
    // 0x8002ECAC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_8:
    // 0x8002ECB0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8002ECB4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002ECB8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8002ECBC: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8002ECC0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002ECC4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002ECC8: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8002ECCC: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002ECD0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8002ECD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002ECD8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8002ECDC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8002ECE0: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8002ECE4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002ECE8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8002ECEC: addiu       $a1, $a1, -0x40E8
    ctx->r5 = ADD32(ctx->r5, -0X40E8);
    // 0x8002ECF0: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8002ECF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002ECF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002ECFC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x8002ED00: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8002ED04: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8002ED08: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8002ED0C: jal         0x80036BE4
    // 0x8002ED10: nop

    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x8002ED10: nop

    after_9:
    // 0x8002ED14: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002ED18: jal         0x8005F9EC
    // 0x8002ED1C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    Debug_PrintXY(rdram, ctx);
        goto after_10;
    // 0x8002ED1C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_10:
    // 0x8002ED20: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8002ED24: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002ED28: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8002ED2C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8002ED30: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002ED34: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002ED38: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8002ED3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002ED40: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8002ED44: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002ED48: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8002ED4C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8002ED50: addiu       $a1, $a1, -0x40DC
    ctx->r5 = ADD32(ctx->r5, -0X40DC);
    // 0x8002ED54: jal         0x80036BE4
    // 0x8002ED58: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x8002ED58: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_11:
    // 0x8002ED5C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002ED60: jal         0x8005F9EC
    // 0x8002ED64: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    Debug_PrintXY(rdram, ctx);
        goto after_12;
    // 0x8002ED64: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_12:
    // 0x8002ED68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002ED6C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002ED70: addiu       $a1, $a1, -0x40D4
    ctx->r5 = ADD32(ctx->r5, -0X40D4);
    // 0x8002ED74: jal         0x80036BE4
    // 0x8002ED78: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_13;
    // 0x8002ED78: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_13:
    // 0x8002ED7C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002ED80: jal         0x8005F9EC
    // 0x8002ED84: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    Debug_PrintXY(rdram, ctx);
        goto after_14;
    // 0x8002ED84: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_14:
    // 0x8002ED88: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002ED8C: lh          $t5, 0x7694($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7694);
    // 0x8002ED90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002ED94: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002ED98: addiu       $a1, $a1, -0x40CC
    ctx->r5 = ADD32(ctx->r5, -0X40CC);
    // 0x8002ED9C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x8002EDA0: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8002EDA4: jal         0x80036BE4
    // 0x8002EDA8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_15;
    // 0x8002EDA8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    after_15:
    // 0x8002EDAC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002EDB0: jal         0x8005F9EC
    // 0x8002EDB4: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    Debug_PrintXY(rdram, ctx);
        goto after_16;
    // 0x8002EDB4: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_16:
    // 0x8002EDB8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002EDBC: lh          $t6, 0x7696($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7696);
    // 0x8002EDC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EDC4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EDC8: addiu       $a1, $a1, -0x40BC
    ctx->r5 = ADD32(ctx->r5, -0X40BC);
    // 0x8002EDCC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x8002EDD0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8002EDD4: jal         0x80036BE4
    // 0x8002EDD8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_17;
    // 0x8002EDD8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    after_17:
    // 0x8002EDDC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002EDE0: jal         0x8005F9EC
    // 0x8002EDE4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    Debug_PrintXY(rdram, ctx);
        goto after_18;
    // 0x8002EDE4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_18:
    // 0x8002EDE8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8002EDEC: lh          $t7, 0x7698($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7698);
    // 0x8002EDF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EDF4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EDF8: addiu       $a1, $a1, -0x40AC
    ctx->r5 = ADD32(ctx->r5, -0X40AC);
    // 0x8002EDFC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x8002EE00: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8002EE04: jal         0x80036BE4
    // 0x8002EE08: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_19;
    // 0x8002EE08: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_19:
    // 0x8002EE0C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002EE10: jal         0x8005F9EC
    // 0x8002EE14: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    Debug_PrintXY(rdram, ctx);
        goto after_20;
    // 0x8002EE14: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    after_20:
    // 0x8002EE18: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002EE1C: lh          $t8, 0x769A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X769A);
    // 0x8002EE20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EE24: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EE28: addiu       $a1, $a1, -0x409C
    ctx->r5 = ADD32(ctx->r5, -0X409C);
    // 0x8002EE2C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x8002EE30: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8002EE34: jal         0x80036BE4
    // 0x8002EE38: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_21;
    // 0x8002EE38: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    after_21:
    // 0x8002EE3C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002EE40: jal         0x8005F9EC
    // 0x8002EE44: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    Debug_PrintXY(rdram, ctx);
        goto after_22;
    // 0x8002EE44: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_22:
    // 0x8002EE48: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8002EE4C: lb          $a2, 0x768A($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X768A);
    // 0x8002EE50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EE54: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EE58: addiu       $a1, $a1, -0x408C
    ctx->r5 = ADD32(ctx->r5, -0X408C);
    // 0x8002EE5C: jal         0x80036BE4
    // 0x8002EE60: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_23;
    // 0x8002EE60: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_23:
    // 0x8002EE64: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002EE68: jal         0x8005F9EC
    // 0x8002EE6C: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    Debug_PrintXY(rdram, ctx);
        goto after_24;
    // 0x8002EE6C: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    after_24:
    // 0x8002EE70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EE74: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EE78: addiu       $a1, $a1, -0x4084
    ctx->r5 = ADD32(ctx->r5, -0X4084);
    // 0x8002EE7C: jal         0x80036BE4
    // 0x8002EE80: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_25;
    // 0x8002EE80: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_25:
    // 0x8002EE84: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EE88: lh          $a1, 0x769C($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X769C);
    // 0x8002EE8C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x8002EE90: sll         $t9, $a1, 4
    ctx->r25 = S32(ctx->r5 << 4);
    // 0x8002EE94: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8002EE98: jal         0x8005F9EC
    // 0x8002EE9C: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_26;
    // 0x8002EE9C: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    after_26:
    // 0x8002EEA0: b           L_8002EEA8
    // 0x8002EEA4: nop

        goto L_8002EEA8;
    // 0x8002EEA4: nop

L_8002EEA8:
    // 0x8002EEA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EEAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002EEB0: jr          $ra
    // 0x8002EEB4: nop

    return;
    // 0x8002EEB4: nop

;}
RECOMP_FUNC void __unmapVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D1C0: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x8003D1C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003D1C8: addiu       $a2, $a1, -0x4
    ctx->r6 = ADD32(ctx->r5, -0X4);
    // 0x8003D1CC: beq         $v1, $zero, L_8003D228
    if (ctx->r3 == 0) {
        // 0x8003D1D0: nop
    
            goto L_8003D228;
    }
    // 0x8003D1D0: nop

L_8003D1D4:
    // 0x8003D1D4: bnel        $v1, $a2, L_8003D21C
    if (ctx->r3 != ctx->r6) {
        // 0x8003D1D8: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8003D21C;
    }
    goto skip_0;
    // 0x8003D1D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x8003D1DC: beql        $v0, $zero, L_8003D1F4
    if (ctx->r2 == 0) {
        // 0x8003D1E0: lw          $t7, 0x0($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X0);
            goto L_8003D1F4;
    }
    goto skip_1;
    // 0x8003D1E0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x8003D1E4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8003D1E8: b           L_8003D1F8
    // 0x8003D1EC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_8003D1F8;
    // 0x8003D1EC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8003D1F0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
L_8003D1F4:
    // 0x8003D1F4: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
L_8003D1F8:
    // 0x8003D1F8: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x8003D1FC: bnel        $v1, $t8, L_8003D20C
    if (ctx->r3 != ctx->r24) {
        // 0x8003D200: lw          $t9, 0x6C($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X6C);
            goto L_8003D20C;
    }
    goto skip_2;
    // 0x8003D200: lw          $t9, 0x6C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X6C);
    skip_2:
    // 0x8003D204: sw          $v0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r2;
    // 0x8003D208: lw          $t9, 0x6C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X6C);
L_8003D20C:
    // 0x8003D20C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003D210: jr          $ra
    // 0x8003D214: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    return;
    // 0x8003D214: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    // 0x8003D218: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8003D21C:
    // 0x8003D21C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8003D220: bne         $v1, $zero, L_8003D1D4
    if (ctx->r3 != 0) {
        // 0x8003D224: nop
    
            goto L_8003D1D4;
    }
    // 0x8003D224: nop

L_8003D228:
    // 0x8003D228: jr          $ra
    // 0x8003D22C: nop

    return;
    // 0x8003D22C: nop

;}
RECOMP_FUNC void func_800297DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800297DC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800297E0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800297E4: lh          $t6, 0x51A0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X51A0);
    // 0x800297E8: nop

    // 0x800297EC: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x800297F0: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x800297F4: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x800297F8: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x800297FC: lh          $t0, 0x6($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X6);
    // 0x80029800: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80029804: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80029808: lb          $v0, -0x59B0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X59B0);
    // 0x8002980C: b           L_8002981C
    // 0x80029810: nop

        goto L_8002981C;
    // 0x80029810: nop

    // 0x80029814: b           L_8002981C
    // 0x80029818: nop

        goto L_8002981C;
    // 0x80029818: nop

L_8002981C:
    // 0x8002981C: jr          $ra
    // 0x80029820: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80029820: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800256E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800256E0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800256E4: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800256E8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800256EC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800256F0: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x800256F4: addiu       $t7, $a1, 0x48
    ctx->r15 = ADD32(ctx->r5, 0X48);
    // 0x800256F8: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x800256FC: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80025700: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80025704: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80025708: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8002570C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80025710: lbu         $t1, 0x7450($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X7450);
    // 0x80025714: nop

    // 0x80025718: sb          $t1, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r9;
    // 0x8002571C: lbu         $t2, 0x7($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X7);
    // 0x80025720: bgez        $a2, L_80025734
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80025724: andi        $t3, $a2, 0x7
        ctx->r11 = ctx->r6 & 0X7;
            goto L_80025734;
    }
    // 0x80025724: andi        $t3, $a2, 0x7
    ctx->r11 = ctx->r6 & 0X7;
    // 0x80025728: beq         $t3, $zero, L_80025734
    if (ctx->r11 == 0) {
        // 0x8002572C: nop
    
            goto L_80025734;
    }
    // 0x8002572C: nop

    // 0x80025730: addiu       $t3, $t3, -0x8
    ctx->r11 = ADD32(ctx->r11, -0X8);
L_80025734:
    // 0x80025734: srav        $t4, $t2, $t3
    ctx->r12 = S32(SIGNED(ctx->r10) >> (ctx->r11 & 31));
    // 0x80025738: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8002573C: beq         $t5, $zero, L_8002574C
    if (ctx->r13 == 0) {
        // 0x80025740: nop
    
            goto L_8002574C;
    }
    // 0x80025740: nop

    // 0x80025744: b           L_8002575C
    // 0x80025748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002575C;
    // 0x80025748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002574C:
    // 0x8002574C: b           L_8002575C
    // 0x80025750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002575C;
    // 0x80025750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80025754: b           L_8002575C
    // 0x80025758: nop

        goto L_8002575C;
    // 0x80025758: nop

L_8002575C:
    // 0x8002575C: jr          $ra
    // 0x80025760: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80025760: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void guTranslateF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037208: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003720C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80037210: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80037214: jal         0x800361F0
    // 0x80037218: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80037218: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003721C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80037220: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80037224: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x80037228: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8003722C: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x80037230: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80037234: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x80037238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003723C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037240: jr          $ra
    // 0x80037244: nop

    return;
    // 0x80037244: nop

;}
RECOMP_FUNC void func_8001C96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C96C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001C970: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001C974: jal         0x8001838C
    // 0x8001C978: nop

    func_8001838C(rdram, ctx);
        goto after_0;
    // 0x8001C978: nop

    after_0:
    // 0x8001C97C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8001C980: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8001C984: addiu       $t7, $t6, 0x6660
    ctx->r15 = ADD32(ctx->r14, 0X6660);
    // 0x8001C988: addiu       $t8, $zero, 0x4E
    ctx->r24 = ADD32(0, 0X4E);
    // 0x8001C98C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8001C990: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_8001C994:
    // 0x8001C994: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8001C998: nop

    // 0x8001C99C: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x8001C9A0: nop

    // 0x8001C9A4: beq         $t0, $zero, L_8001CA74
    if (ctx->r8 == 0) {
        // 0x8001C9A8: nop
    
            goto L_8001CA74;
    }
    // 0x8001C9A8: nop

    // 0x8001C9AC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8001C9B0: nop

    // 0x8001C9B4: lbu         $t2, 0x130($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X130);
    // 0x8001C9B8: nop

    // 0x8001C9BC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8001C9C0: bne         $t3, $zero, L_8001CA74
    if (ctx->r11 != 0) {
        // 0x8001C9C4: nop
    
            goto L_8001CA74;
    }
    // 0x8001C9C4: nop

    // 0x8001C9C8: lh          $t4, 0x146($t1)
    ctx->r12 = MEM_H(ctx->r9, 0X146);
    // 0x8001C9CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001C9D0: beq         $t4, $at, L_8001CA74
    if (ctx->r12 == ctx->r1) {
        // 0x8001C9D4: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_8001CA74;
    }
    // 0x8001C9D4: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8001C9D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8001C9DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8001C9E0: jal         0x80019510
    // 0x8001C9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80019510(rdram, ctx);
        goto after_1;
    // 0x8001C9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8001C9E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8001C9EC: jal         0x8001B014
    // 0x8001C9F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B014(rdram, ctx);
        goto after_2;
    // 0x8001C9F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8001C9F4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C9F8: jal         0x8001A488
    // 0x8001C9FC: nop

    func_8001A488(rdram, ctx);
        goto after_3;
    // 0x8001C9FC: nop

    after_3:
    // 0x8001CA00: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8001CA04: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8001CA08: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8001CA0C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8001CA10: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001CA14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001CA18: lw          $t7, 0x5290($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5290);
    // 0x8001CA1C: nop

    // 0x8001CA20: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8001CA24: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8001CA28: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8001CA2C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001CA30: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8001CA34: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001CA38: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001CA3C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001CA40: lw          $t2, -0x1C5C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1C5C);
    // 0x8001CA44: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x8001CA48: lw          $a0, 0x52AC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X52AC);
    // 0x8001CA4C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001CA50: addiu       $a1, $a1, -0x1F04
    ctx->r5 = ADD32(ctx->r5, -0X1F04);
    // 0x8001CA54: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8001CA58: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8001CA5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8001CA60: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8001CA64: jal         0x8000FD9C
    // 0x8001CA68: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_8000FD9C(rdram, ctx);
        goto after_4;
    // 0x8001CA68: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_4:
    // 0x8001CA6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001CA70: sw          $v0, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = ctx->r2;
L_8001CA74:
    // 0x8001CA74: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8001CA78: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8001CA7C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8001CA80: slti        $at, $t5, 0x8E
    ctx->r1 = SIGNED(ctx->r13) < 0X8E ? 1 : 0;
    // 0x8001CA84: addiu       $t1, $t3, 0x150
    ctx->r9 = ADD32(ctx->r11, 0X150);
    // 0x8001CA88: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8001CA8C: bne         $at, $zero, L_8001C994
    if (ctx->r1 != 0) {
        // 0x8001CA90: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_8001C994;
    }
    // 0x8001CA90: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x8001CA94: b           L_8001CA9C
    // 0x8001CA98: nop

        goto L_8001CA9C;
    // 0x8001CA98: nop

L_8001CA9C:
    // 0x8001CA9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001CAA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001CAA4: jr          $ra
    // 0x8001CAA8: nop

    return;
    // 0x8001CAA8: nop

;}
RECOMP_FUNC void func_800163AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800163AC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800163B0: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x800163B4: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x800163B8: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800163BC: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800163C0: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800163C4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800163C8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800163CC: sub.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x800163D0: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800163D4: sub.s       $f16, $f12, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x800163D8: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x800163DC: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800163E0: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800163E4: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x800163E8: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x800163EC: swc1        $f7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x800163F0: lwc1        $f9, 0x0($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x800163F4: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800163F8: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x800163FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80016400: nop

    // 0x80016404: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80016408: nop

    // 0x8001640C: bc1f        L_8001641C
    if (!c1cs) {
        // 0x80016410: nop
    
            goto L_8001641C;
    }
    // 0x80016410: nop

    // 0x80016414: b           L_80016558
    // 0x80016418: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80016558;
    // 0x80016418: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001641C:
    // 0x8001641C: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80016420: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80016424: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80016428: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8001642C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80016430: sub.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x80016434: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80016438: sub.s       $f8, $f12, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8001643C: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80016440: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80016444: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80016448: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8001644C: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x80016450: swc1        $f5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x80016454: lwc1        $f11, 0x0($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x80016458: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8001645C: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x80016460: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80016464: nop

    // 0x80016468: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8001646C: nop

    // 0x80016470: bc1f        L_80016480
    if (!c1cs) {
        // 0x80016474: nop
    
            goto L_80016480;
    }
    // 0x80016474: nop

    // 0x80016478: b           L_80016558
    // 0x8001647C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80016558;
    // 0x8001647C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80016480:
    // 0x80016480: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80016484: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80016488: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001648C: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80016490: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80016494: sub.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x80016498: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001649C: sub.s       $f10, $f12, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x800164A0: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x800164A4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800164A8: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800164AC: cvt.d.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f18.d = CVT_D_S(ctx->f4.fl);
    // 0x800164B0: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x800164B4: swc1        $f19, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x800164B8: lwc1        $f7, 0x0($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x800164BC: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800164C0: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x800164C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800164C8: nop

    // 0x800164CC: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x800164D0: nop

    // 0x800164D4: bc1f        L_800164E4
    if (!c1cs) {
        // 0x800164D8: nop
    
            goto L_800164E4;
    }
    // 0x800164D8: nop

    // 0x800164DC: b           L_80016558
    // 0x800164E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80016558;
    // 0x800164E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800164E4:
    // 0x800164E4: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800164E8: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800164EC: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800164F0: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800164F4: lwc1        $f8, 0x14($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800164F8: sub.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x800164FC: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80016500: sub.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x80016504: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x80016508: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001650C: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80016510: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x80016514: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x80016518: swc1        $f17, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(17 - 1) * 2];
    // 0x8001651C: lwc1        $f5, 0x0($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x80016520: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80016524: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x80016528: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001652C: nop

    // 0x80016530: c.lt.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d < ctx->f4.d;
    // 0x80016534: nop

    // 0x80016538: bc1f        L_80016548
    if (!c1cs) {
        // 0x8001653C: nop
    
            goto L_80016548;
    }
    // 0x8001653C: nop

    // 0x80016540: b           L_80016558
    // 0x80016544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80016558;
    // 0x80016544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80016548:
    // 0x80016548: b           L_80016558
    // 0x8001654C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80016558;
    // 0x8001654C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80016550: b           L_80016558
    // 0x80016554: nop

        goto L_80016558;
    // 0x80016554: nop

L_80016558:
    // 0x80016558: jr          $ra
    // 0x8001655C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8001655C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Math_Mat3f_Multiply(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013C0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80013C10: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80013C14:
    // 0x80013C14: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80013C18:
    // 0x80013C18: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80013C1C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80013C20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80013C24: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80013C28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80013C2C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80013C30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80013C34: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80013C38: addu        $t1, $sp, $t0
    ctx->r9 = ADD32(ctx->r29, ctx->r8);
    // 0x80013C3C: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
    // 0x80013C40: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80013C44:
    // 0x80013C44: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80013C48: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80013C4C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80013C50: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80013C54: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80013C58: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80013C5C: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x80013C60: addu        $t9, $a0, $t7
    ctx->r25 = ADD32(ctx->r4, ctx->r15);
    // 0x80013C64: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x80013C68: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80013C6C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80013C70: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80013C74: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x80013C78: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80013C7C: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80013C80: addiu       $t6, $sp, 0x0
    ctx->r14 = ADD32(ctx->r29, 0X0);
    // 0x80013C84: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80013C88: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x80013C8C: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x80013C90: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80013C94: addu        $t5, $t3, $t1
    ctx->r13 = ADD32(ctx->r11, ctx->r9);
    // 0x80013C98: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80013C9C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80013CA0: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
    // 0x80013CA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80013CA8: nop

    // 0x80013CAC: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x80013CB0: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x80013CB4: bne         $at, $zero, L_80013C44
    if (ctx->r1 != 0) {
        // 0x80013CB8: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_80013C44;
    }
    // 0x80013CB8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80013CBC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80013CC0: nop

    // 0x80013CC4: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80013CC8: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80013CCC: bne         $at, $zero, L_80013C18
    if (ctx->r1 != 0) {
        // 0x80013CD0: sw          $t4, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r12;
            goto L_80013C18;
    }
    // 0x80013CD0: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80013CD4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80013CD8: nop

    // 0x80013CDC: addiu       $t3, $t8, 0x1
    ctx->r11 = ADD32(ctx->r24, 0X1);
    // 0x80013CE0: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x80013CE4: bne         $at, $zero, L_80013C14
    if (ctx->r1 != 0) {
        // 0x80013CE8: sw          $t3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r11;
            goto L_80013C14;
    }
    // 0x80013CE8: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80013CEC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80013CF0:
    // 0x80013CF0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80013CF4:
    // 0x80013CF4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80013CF8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80013CFC: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x80013D00: subu        $t5, $t5, $t1
    ctx->r13 = SUB32(ctx->r13, ctx->r9);
    // 0x80013D04: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80013D08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80013D0C: addu        $t0, $t5, $t7
    ctx->r8 = ADD32(ctx->r13, ctx->r15);
    // 0x80013D10: addu        $t9, $sp, $t0
    ctx->r25 = ADD32(ctx->r29, ctx->r8);
    // 0x80013D14: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80013D18: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80013D1C: addu        $t4, $a0, $t2
    ctx->r12 = ADD32(ctx->r4, ctx->r10);
    // 0x80013D20: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x80013D24: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x80013D28: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80013D2C: nop

    // 0x80013D30: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x80013D34: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80013D38: bne         $at, $zero, L_80013CF4
    if (ctx->r1 != 0) {
        // 0x80013D3C: sw          $t6, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r14;
            goto L_80013CF4;
    }
    // 0x80013D3C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80013D40: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80013D44: nop

    // 0x80013D48: addiu       $t0, $t5, 0x1
    ctx->r8 = ADD32(ctx->r13, 0X1);
    // 0x80013D4C: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80013D50: bne         $at, $zero, L_80013CF0
    if (ctx->r1 != 0) {
        // 0x80013D54: sw          $t0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r8;
            goto L_80013CF0;
    }
    // 0x80013D54: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80013D58: b           L_80013D60
    // 0x80013D5C: nop

        goto L_80013D60;
    // 0x80013D5C: nop

L_80013D60:
    // 0x80013D60: jr          $ra
    // 0x80013D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80013D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80015F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015F3C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80015F40: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80015F44: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80015F48: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x80015F4C: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x80015F50: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80015F54: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x80015F58: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80015F5C: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80015F60: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80015F64: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80015F68: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80015F6C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80015F70: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x80015F74: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x80015F78: jal         0x8003687C
    // 0x80015F7C: nop

    __ll_to_f_recomp(rdram, ctx);
        goto after_0;
    // 0x80015F7C: nop

    after_0:
    // 0x80015F80: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80015F84: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x80015F88: jal         0x8003687C
    // 0x80015F8C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    __ll_to_f_recomp(rdram, ctx);
        goto after_1;
    // 0x80015F8C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    after_1:
    // 0x80015F90: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80015F94: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80015F98: nor         $a0, $a0, $zero
    ctx->r4 = ~(ctx->r4 | 0);
    // 0x80015F9C: sltiu       $at, $a1, 0x1
    ctx->r1 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80015FA0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80015FA4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x80015FA8: jal         0x8003687C
    // 0x80015FAC: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    __ll_to_f_recomp(rdram, ctx);
        goto after_2;
    // 0x80015FAC: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_2:
    // 0x80015FB0: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80015FB4: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x80015FB8: jal         0x8003687C
    // 0x80015FBC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    __ll_to_f_recomp(rdram, ctx);
        goto after_3;
    // 0x80015FBC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_3:
    // 0x80015FC0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80015FC4: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80015FC8: mul.s       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x80015FCC: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80015FD0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80015FD4: mul.s       $f10, $f24, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f8.fl);
    // 0x80015FD8: nop

    // 0x80015FDC: mul.s       $f4, $f26, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f18.fl);
    // 0x80015FE0: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80015FE4: sub.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80015FE8: jal         0x8003670C
    // 0x80015FEC: add.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f8.fl;
    __f_to_ll_recomp(rdram, ctx);
        goto after_4;
    // 0x80015FEC: add.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f8.fl;
    after_4:
    // 0x80015FF0: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80015FF4: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x80015FF8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80015FFC: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80016000: bgtz        $t6, L_80016028
    if (SIGNED(ctx->r14) > 0) {
        // 0x80016004: nop
    
            goto L_80016028;
    }
    // 0x80016004: nop

    // 0x80016008: bltz        $t6, L_80016018
    if (SIGNED(ctx->r14) < 0) {
        // 0x8001600C: nop
    
            goto L_80016018;
    }
    // 0x8001600C: nop

    // 0x80016010: b           L_80016028
    // 0x80016014: nop

        goto L_80016028;
    // 0x80016014: nop

L_80016018:
    // 0x80016018: b           L_80016060
    // 0x8001601C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80016060;
    // 0x8001601C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80016020: b           L_80016050
    // 0x80016024: nop

        goto L_80016050;
    // 0x80016024: nop

L_80016028:
    // 0x80016028: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8001602C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80016030: bltz        $t8, L_80016050
    if (SIGNED(ctx->r24) < 0) {
        // 0x80016034: nop
    
            goto L_80016050;
    }
    // 0x80016034: nop

    // 0x80016038: bgtz        $t8, L_80016048
    if (SIGNED(ctx->r24) > 0) {
        // 0x8001603C: nop
    
            goto L_80016048;
    }
    // 0x8001603C: nop

    // 0x80016040: beq         $t9, $zero, L_80016050
    if (ctx->r25 == 0) {
        // 0x80016044: nop
    
            goto L_80016050;
    }
    // 0x80016044: nop

L_80016048:
    // 0x80016048: b           L_80016060
    // 0x8001604C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80016060;
    // 0x8001604C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80016050:
    // 0x80016050: b           L_80016060
    // 0x80016054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80016060;
    // 0x80016054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80016058: b           L_80016060
    // 0x8001605C: nop

        goto L_80016060;
    // 0x8001605C: nop

L_80016060:
    // 0x80016060: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80016064: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80016068: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8001606C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80016070: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80016074: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80016078: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001607C: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80016080: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80016084: jr          $ra
    // 0x80016088: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80016088: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80001650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001658: lui         $t6, 0x1D
    ctx->r14 = S32(0X1D << 16);
    // 0x8000165C: lui         $t7, 0x1D
    ctx->r15 = S32(0X1D << 16);
    // 0x80001660: addiu       $t7, $t7, 0x1720
    ctx->r15 = ADD32(ctx->r15, 0X1720);
    // 0x80001664: addiu       $t6, $t6, 0x1D0
    ctx->r14 = ADD32(ctx->r14, 0X1D0);
    // 0x80001668: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000166C: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001670: jal         0x8000068C
    // 0x80001674: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001674: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001678: b           L_80001680
    // 0x8000167C: nop

        goto L_80001680;
    // 0x8000167C: nop

L_80001680:
    // 0x80001680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001688: jr          $ra
    // 0x8000168C: nop

    return;
    // 0x8000168C: nop

;}
RECOMP_FUNC void func_80000F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000F34: lui         $t6, 0x14
    ctx->r14 = S32(0X14 << 16);
    // 0x80000F38: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x80000F3C: addiu       $t7, $t7, -0x3AC0
    ctx->r15 = ADD32(ctx->r15, -0X3AC0);
    // 0x80000F40: addiu       $t6, $t6, 0x7BB0
    ctx->r14 = ADD32(ctx->r14, 0X7BB0);
    // 0x80000F44: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80000F48: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80000F4C: jal         0x8000068C
    // 0x80000F50: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000F50: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    after_0:
    // 0x80000F54: lui         $t8, 0x16
    ctx->r24 = S32(0X16 << 16);
    // 0x80000F58: lui         $t9, 0x16
    ctx->r25 = S32(0X16 << 16);
    // 0x80000F5C: addiu       $t9, $t9, 0x560
    ctx->r25 = ADD32(ctx->r25, 0X560);
    // 0x80000F60: addiu       $t8, $t8, -0x3F30
    ctx->r24 = ADD32(ctx->r24, -0X3F30);
    // 0x80000F64: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80000F68: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    // 0x80000F6C: jal         0x8000068C
    // 0x80000F70: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80000F70: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_1:
    // 0x80000F74: b           L_80000F7C
    // 0x80000F78: nop

        goto L_80000F7C;
    // 0x80000F78: nop

L_80000F7C:
    // 0x80000F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000F84: jr          $ra
    // 0x80000F88: nop

    return;
    // 0x80000F88: nop

;}
RECOMP_FUNC void alCSeqNewMarker(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800341D0: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x800341D4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800341D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800341DC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800341E0: addiu       $s3, $sp, 0x48
    ctx->r19 = ADD32(ctx->r29, 0X48);
    // 0x800341E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800341E8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800341EC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800341F0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800341F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800341F8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800341FC: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80034200: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80034204: jal         0x800340BC
    // 0x80034208: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    alCSeqNew(rdram, ctx);
        goto after_0;
    // 0x80034208: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x8003420C: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80034210: addiu       $s4, $sp, 0x140
    ctx->r20 = ADD32(ctx->r29, 0X140);
    // 0x80034214: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x80034218: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
L_8003421C:
    // 0x8003421C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80034220: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80034224: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80034228: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8003422C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80034230: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80034234: sw          $t7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r15;
    // 0x80034238: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x8003423C: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
L_80034240:
    // 0x80034240: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x80034244: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80034248: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8003424C: sw          $t0, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r8;
    // 0x80034250: lw          $t1, 0x58($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X58);
    // 0x80034254: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80034258: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8003425C: sw          $t1, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r9;
    // 0x80034260: lbu         $t2, 0x94($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X94);
    // 0x80034264: sb          $t2, 0x88($a1)
    MEM_B(0X88, ctx->r5) = ctx->r10;
    // 0x80034268: lbu         $t3, 0xA4($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XA4);
    // 0x8003426C: sb          $t3, 0x98($a1)
    MEM_B(0X98, ctx->r5) = ctx->r11;
    // 0x80034270: lw          $t4, 0xA8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XA8);
    // 0x80034274: sw          $t4, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r12;
    // 0x80034278: lw          $t5, 0xC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XC);
    // 0x8003427C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80034280: lw          $t6, 0x4C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4C);
    // 0x80034284: sw          $t6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r14;
    // 0x80034288: lbu         $t7, 0x95($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X95);
    // 0x8003428C: sb          $t7, 0x89($a1)
    MEM_B(0X89, ctx->r5) = ctx->r15;
    // 0x80034290: lbu         $t8, 0xA5($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XA5);
    // 0x80034294: sb          $t8, 0x99($a1)
    MEM_B(0X99, ctx->r5) = ctx->r24;
    // 0x80034298: lw          $t9, 0xAC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XAC);
    // 0x8003429C: sw          $t9, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r25;
    // 0x800342A0: lw          $t0, 0x10($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X10);
    // 0x800342A4: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x800342A8: lw          $t1, 0x50($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X50);
    // 0x800342AC: sw          $t1, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r9;
    // 0x800342B0: lbu         $t2, 0x96($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X96);
    // 0x800342B4: sb          $t2, 0x8A($a1)
    MEM_B(0X8A, ctx->r5) = ctx->r10;
    // 0x800342B8: lbu         $t3, 0xA6($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XA6);
    // 0x800342BC: sb          $t3, 0x9A($a1)
    MEM_B(0X9A, ctx->r5) = ctx->r11;
    // 0x800342C0: lw          $t4, 0xB0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XB0);
    // 0x800342C4: sw          $t4, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r12;
    // 0x800342C8: lw          $t5, 0x14($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X14);
    // 0x800342CC: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x800342D0: lw          $t6, 0x54($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X54);
    // 0x800342D4: sw          $t6, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r14;
    // 0x800342D8: lbu         $t7, 0x97($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X97);
    // 0x800342DC: sb          $t7, 0x8B($a1)
    MEM_B(0X8B, ctx->r5) = ctx->r15;
    // 0x800342E0: lbu         $t8, 0xA7($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XA7);
    // 0x800342E4: sb          $t8, 0x9B($a1)
    MEM_B(0X9B, ctx->r5) = ctx->r24;
    // 0x800342E8: lw          $t9, 0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XB4);
    // 0x800342EC: bne         $a0, $s0, L_80034240
    if (ctx->r4 != ctx->r16) {
        // 0x800342F0: sw          $t9, 0xA8($v0)
        MEM_W(0XA8, ctx->r2) = ctx->r25;
            goto L_80034240;
    }
    // 0x800342F0: sw          $t9, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r25;
    // 0x800342F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800342F8: jal         0x80033DC4
    // 0x800342FC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    alCSeqNextEvent(rdram, ctx);
        goto after_1;
    // 0x800342FC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x80034300: lh          $t0, 0x140($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X140);
    // 0x80034304: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80034308: beq         $t0, $s5, L_80034318
    if (ctx->r8 == ctx->r21) {
        // 0x8003430C: sltu        $at, $t1, $s2
        ctx->r1 = ctx->r9 < ctx->r18 ? 1 : 0;
            goto L_80034318;
    }
    // 0x8003430C: sltu        $at, $t1, $s2
    ctx->r1 = ctx->r9 < ctx->r18 ? 1 : 0;
    // 0x80034310: bnel        $at, $zero, L_8003421C
    if (ctx->r1 != 0) {
        // 0x80034314: lw          $t6, 0x4C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X4C);
            goto L_8003421C;
    }
    goto skip_0;
    // 0x80034314: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    skip_0:
L_80034318:
    // 0x80034318: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003431C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80034320: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80034324: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80034328: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003432C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80034330: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80034334: jr          $ra
    // 0x80034338: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    // 0x80034338: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_8001CEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CEF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001CEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CEFC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001CF00: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001CF04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8001CF08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001CF0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001CF10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001CF14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001CF18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001CF1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8001CF20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001CF24: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8001CF28: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CF2C: nop

    // 0x8001CF30: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8001CF34: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8001CF38: nop

    // 0x8001CF3C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001CF40: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x8001CF44: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CF48: nop

    // 0x8001CF4C: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8001CF50: lwc1        $f16, 0x28($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X28);
    // 0x8001CF54: nop

    // 0x8001CF58: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8001CF5C: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
    // 0x8001CF60: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CF64: nop

    // 0x8001CF68: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8001CF6C: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8001CF70: nop

    // 0x8001CF74: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001CF78: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x8001CF7C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CF80: nop

    // 0x8001CF84: lwc1        $f12, 0x18($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X18);
    // 0x8001CF88: lwc1        $f14, 0x30($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X30);
    // 0x8001CF8C: jal         0x80015538
    // 0x8001CF90: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8001CF90: nop

    after_0:
    // 0x8001CF94: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CF98: nop

    // 0x8001CF9C: swc1        $f0, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f0.u32l;
    // 0x8001CFA0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CFA4: nop

    // 0x8001CFA8: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8001CFAC: lwc1        $f14, 0x34($t5)
    ctx->f14.u32l = MEM_W(ctx->r13, 0X34);
    // 0x8001CFB0: jal         0x80015538
    // 0x8001CFB4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8001CFB4: nop

    after_1:
    // 0x8001CFB8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CFBC: nop

    // 0x8001CFC0: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x8001CFC4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CFC8: nop

    // 0x8001CFCC: lwc1        $f12, 0x20($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X20);
    // 0x8001CFD0: lwc1        $f14, 0x38($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X38);
    // 0x8001CFD4: jal         0x80015538
    // 0x8001CFD8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8001CFD8: nop

    after_2:
    // 0x8001CFDC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CFE0: nop

    // 0x8001CFE4: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
    // 0x8001CFE8: b           L_8001CFF0
    // 0x8001CFEC: nop

        goto L_8001CFF0;
    // 0x8001CFEC: nop

L_8001CFF0:
    // 0x8001CFF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CFF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001CFF8: jr          $ra
    // 0x8001CFFC: nop

    return;
    // 0x8001CFFC: nop

;}
RECOMP_FUNC void func_8002AB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AB40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002AB44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002AB48: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8002AB4C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8002AB50: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x8002AB54: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x8002AB58: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8002AB5C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002AB60: jal         0x800642E0
    // 0x8002AB64: nop

    func_800642E0(rdram, ctx);
        goto after_0;
    // 0x8002AB64: nop

    after_0:
    // 0x8002AB68: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8002AB6C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8002AB70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002AB74: bne         $t6, $at, L_8002AB84
    if (ctx->r14 != ctx->r1) {
        // 0x8002AB78: nop
    
            goto L_8002AB84;
    }
    // 0x8002AB78: nop

    // 0x8002AB7C: b           L_8002AD7C
    // 0x8002AB80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8002AD7C;
    // 0x8002AB80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002AB84:
    // 0x8002AB84: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8002AB88: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8002AB8C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002AB90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002AB94: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002AB98: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002AB9C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8002ABA0: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8002ABA4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8002ABA8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8002ABAC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002ABB0: jal         0x8001A928
    // 0x8002ABB4: nop

    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x8002ABB4: nop

    after_1:
    // 0x8002ABB8: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8002ABBC: nop

    // 0x8002ABC0: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x8002ABC4: beq         $at, $zero, L_8002AC48
    if (ctx->r1 == 0) {
        // 0x8002ABC8: nop
    
            goto L_8002AC48;
    }
    // 0x8002ABC8: nop

    // 0x8002ABCC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002ABD0: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x8002ABD4: lw          $a3, 0x218($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X218);
    // 0x8002ABD8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002ABDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002ABE0: jal         0x8001BD44
    // 0x8002ABE4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001BD44(rdram, ctx);
        goto after_2;
    // 0x8002ABE4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x8002ABE8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8002ABEC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002ABF0: addiu       $t5, $t5, -0x3560
    ctx->r13 = ADD32(ctx->r13, -0X3560);
    // 0x8002ABF4: addiu       $t3, $t3, 0x6674
    ctx->r11 = ADD32(ctx->r11, 0X6674);
    // 0x8002ABF8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8002ABFC: lw          $t6, 0x218($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X218);
    // 0x8002AC00: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002AC04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002AC08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002AC0C: jal         0x8001BE6C
    // 0x8002AC10: addu        $a3, $t4, $t6
    ctx->r7 = ADD32(ctx->r12, ctx->r14);
    func_8001BE6C(rdram, ctx);
        goto after_3;
    // 0x8002AC10: addu        $a3, $t4, $t6
    ctx->r7 = ADD32(ctx->r12, ctx->r14);
    after_3:
    // 0x8002AC14: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8002AC18: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8002AC1C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8002AC20: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8002AC24: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002AC28: addiu       $t9, $t9, 0x670C
    ctx->r25 = ADD32(ctx->r25, 0X670C);
    // 0x8002AC2C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002AC30: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    // 0x8002AC34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002AC38: jal         0x8001ABF4
    // 0x8002AC3C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x8002AC3C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x8002AC40: b           L_8002ACF0
    // 0x8002AC44: nop

        goto L_8002ACF0;
    // 0x8002AC44: nop

L_8002AC48:
    // 0x8002AC48: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8002AC4C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8002AC50: bne         $t0, $at, L_8002ACA8
    if (ctx->r8 != ctx->r1) {
        // 0x8002AC54: nop
    
            goto L_8002ACA8;
    }
    // 0x8002AC54: nop

    // 0x8002AC58: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002AC5C: addiu       $t1, $t1, -0x3560
    ctx->r9 = ADD32(ctx->r9, -0X3560);
    // 0x8002AC60: lw          $a3, 0x220($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X220);
    // 0x8002AC64: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002AC68: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002AC6C: jal         0x8001BD44
    // 0x8002AC70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BD44(rdram, ctx);
        goto after_5;
    // 0x8002AC70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8002AC74: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8002AC78: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002AC7C: addiu       $t5, $t5, -0x3560
    ctx->r13 = ADD32(ctx->r13, -0X3560);
    // 0x8002AC80: addiu       $t2, $t2, 0x68CC
    ctx->r10 = ADD32(ctx->r10, 0X68CC);
    // 0x8002AC84: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8002AC88: lw          $t4, 0x220($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X220);
    // 0x8002AC8C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002AC90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002AC94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002AC98: jal         0x8001BE6C
    // 0x8002AC9C: addu        $a3, $t3, $t4
    ctx->r7 = ADD32(ctx->r11, ctx->r12);
    func_8001BE6C(rdram, ctx);
        goto after_6;
    // 0x8002AC9C: addu        $a3, $t3, $t4
    ctx->r7 = ADD32(ctx->r11, ctx->r12);
    after_6:
    // 0x8002ACA0: b           L_8002ACF0
    // 0x8002ACA4: nop

        goto L_8002ACF0;
    // 0x8002ACA4: nop

L_8002ACA8:
    // 0x8002ACA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002ACAC: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x8002ACB0: lw          $a3, 0x228($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X228);
    // 0x8002ACB4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002ACB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002ACBC: jal         0x8001BD44
    // 0x8002ACC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BD44(rdram, ctx);
        goto after_7;
    // 0x8002ACC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8002ACC4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8002ACC8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002ACCC: addiu       $t9, $t9, -0x3560
    ctx->r25 = ADD32(ctx->r25, -0X3560);
    // 0x8002ACD0: addiu       $t7, $t7, 0x68D0
    ctx->r15 = ADD32(ctx->r15, 0X68D0);
    // 0x8002ACD4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8002ACD8: lw          $t0, 0x228($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X228);
    // 0x8002ACDC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002ACE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002ACE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002ACE8: jal         0x8001BE6C
    // 0x8002ACEC: addu        $a3, $t8, $t0
    ctx->r7 = ADD32(ctx->r24, ctx->r8);
    func_8001BE6C(rdram, ctx);
        goto after_8;
    // 0x8002ACEC: addu        $a3, $t8, $t0
    ctx->r7 = ADD32(ctx->r24, ctx->r8);
    after_8:
L_8002ACF0:
    // 0x8002ACF0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8002ACF4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8002ACF8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8002ACFC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8002AD00: addiu       $t5, $zero, 0x47
    ctx->r13 = ADD32(0, 0X47);
    // 0x8002AD04: sh          $t5, 0xE4($t3)
    MEM_H(0XE4, ctx->r11) = ctx->r13;
    // 0x8002AD08: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8002AD0C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8002AD10: nop

    // 0x8002AD14: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x8002AD18: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8002AD1C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8002AD20: nop

    // 0x8002AD24: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    // 0x8002AD28: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002AD2C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8002AD30: nop

    // 0x8002AD34: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
    // 0x8002AD38: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002AD3C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8002AD40: nop

    // 0x8002AD44: swc1        $f10, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f10.u32l;
    // 0x8002AD48: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8002AD4C: nop

    // 0x8002AD50: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8002AD54: nop

    // 0x8002AD58: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x8002AD5C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8002AD60: nop

    // 0x8002AD64: swc1        $f20, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f20.u32l;
    // 0x8002AD68: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8002AD6C: b           L_8002AD7C
    // 0x8002AD70: nop

        goto L_8002AD7C;
    // 0x8002AD70: nop

    // 0x8002AD74: b           L_8002AD7C
    // 0x8002AD78: nop

        goto L_8002AD7C;
    // 0x8002AD78: nop

L_8002AD7C:
    // 0x8002AD7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AD80: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8002AD84: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8002AD88: jr          $ra
    // 0x8002AD8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8002AD8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80002D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002D90: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80002D94: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80002D98: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80002D9C: blez        $a0, L_80002DB0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80002DA0: nop
    
            goto L_80002DB0;
    }
    // 0x80002DA0: nop

    // 0x80002DA4: sll         $a1, $a0, 8
    ctx->r5 = S32(ctx->r4 << 8);
    // 0x80002DA8: b           L_80002DB4
    // 0x80002DAC: addiu       $a1, $a1, 0xFF
    ctx->r5 = ADD32(ctx->r5, 0XFF);
        goto L_80002DB4;
    // 0x80002DAC: addiu       $a1, $a1, 0xFF
    ctx->r5 = ADD32(ctx->r5, 0XFF);
L_80002DB0:
    // 0x80002DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80002DB4:
    // 0x80002DB4: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80002DB8: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80002DBC: b           L_80002DCC
    // 0x80002DC0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_80002DCC;
    // 0x80002DC0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80002DC4: b           L_80002DCC
    // 0x80002DC8: nop

        goto L_80002DCC;
    // 0x80002DC8: nop

L_80002DCC:
    // 0x80002DCC: jr          $ra
    // 0x80002DD0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80002DD0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80017028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017028: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001702C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017030: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80017034: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80017038: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001703C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80017040: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80017044: nop

    // 0x80017048: beq         $t6, $zero, L_80017080
    if (ctx->r14 == 0) {
        // 0x8001704C: nop
    
            goto L_80017080;
    }
    // 0x8001704C: nop

    // 0x80017050: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80017054: nop

    // 0x80017058: bne         $t7, $zero, L_80017080
    if (ctx->r15 != 0) {
        // 0x8001705C: nop
    
            goto L_80017080;
    }
    // 0x8001705C: nop

    // 0x80017060: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80017064: jal         0x8000B404
    // 0x80017068: nop

    func_8000B404(rdram, ctx);
        goto after_0;
    // 0x80017068: nop

    after_0:
    // 0x8001706C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017070: beq         $v0, $at, L_80017080
    if (ctx->r2 == ctx->r1) {
        // 0x80017074: nop
    
            goto L_80017080;
    }
    // 0x80017074: nop

    // 0x80017078: b           L_800171D0
    // 0x8001707C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800171D0;
    // 0x8001707C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80017080:
    // 0x80017080: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80017084: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80017088: bne         $t8, $at, L_800170FC
    if (ctx->r24 != ctx->r1) {
        // 0x8001708C: nop
    
            goto L_800170FC;
    }
    // 0x8001708C: nop

    // 0x80017090: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80017094: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017098: beq         $t9, $at, L_800170F4
    if (ctx->r25 == ctx->r1) {
        // 0x8001709C: nop
    
            goto L_800170F4;
    }
    // 0x8001709C: nop

    // 0x800170A0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800170A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800170A8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800170AC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800170B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800170B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800170B8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800170BC: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800170C0: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x800170C4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800170C8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800170CC: lh          $t5, 0x428C($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X428C);
    // 0x800170D0: nop

    // 0x800170D4: sh          $t5, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r13;
    // 0x800170D8: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x800170DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800170E0: beq         $t6, $at, L_800170F4
    if (ctx->r14 == ctx->r1) {
        // 0x800170E4: nop
    
            goto L_800170F4;
    }
    // 0x800170E4: nop

    // 0x800170E8: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x800170EC: b           L_800171D0
    // 0x800170F0: nop

        goto L_800171D0;
    // 0x800170F0: nop

L_800170F4:
    // 0x800170F4: b           L_80017138
    // 0x800170F8: nop

        goto L_80017138;
    // 0x800170F8: nop

L_800170FC:
    // 0x800170FC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80017100: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80017104: bne         $t7, $at, L_80017138
    if (ctx->r15 != ctx->r1) {
        // 0x80017108: nop
    
            goto L_80017138;
    }
    // 0x80017108: nop

    // 0x8001710C: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80017110: jal         0x8000B404
    // 0x80017114: nop

    func_8000B404(rdram, ctx);
        goto after_1;
    // 0x80017114: nop

    after_1:
    // 0x80017118: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8001711C: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x80017120: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017124: beq         $t8, $at, L_80017138
    if (ctx->r24 == ctx->r1) {
        // 0x80017128: nop
    
            goto L_80017138;
    }
    // 0x80017128: nop

    // 0x8001712C: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x80017130: b           L_800171D0
    // 0x80017134: nop

        goto L_800171D0;
    // 0x80017134: nop

L_80017138:
    // 0x80017138: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8001713C: jal         0x8000AC1C
    // 0x80017140: nop

    func_8000AC1C(rdram, ctx);
        goto after_2;
    // 0x80017140: nop

    after_2:
    // 0x80017144: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80017148: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x8001714C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017150: beq         $t9, $at, L_80017168
    if (ctx->r25 == ctx->r1) {
        // 0x80017154: nop
    
            goto L_80017168;
    }
    // 0x80017154: nop

    // 0x80017158: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x8001715C: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x80017160: jal         0x8000C6F8
    // 0x80017164: nop

    func_8000C6F8(rdram, ctx);
        goto after_3;
    // 0x80017164: nop

    after_3:
L_80017168:
    // 0x80017168: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x8001716C: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x80017170: jal         0x8000C7D4
    // 0x80017174: nop

    func_8000C7D4(rdram, ctx);
        goto after_4;
    // 0x80017174: nop

    after_4:
    // 0x80017178: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001717C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017180: beq         $t0, $at, L_800171BC
    if (ctx->r8 == ctx->r1) {
        // 0x80017184: nop
    
            goto L_800171BC;
    }
    // 0x80017184: nop

    // 0x80017188: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8001718C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80017190: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80017194: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80017198: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001719C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800171A0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800171A4: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x800171A8: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x800171AC: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x800171B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800171B4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800171B8: sh          $t2, 0x428C($at)
    MEM_H(0X428C, ctx->r1) = ctx->r10;
L_800171BC:
    // 0x800171BC: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x800171C0: b           L_800171D0
    // 0x800171C4: nop

        goto L_800171D0;
    // 0x800171C4: nop

    // 0x800171C8: b           L_800171D0
    // 0x800171CC: nop

        goto L_800171D0;
    // 0x800171CC: nop

L_800171D0:
    // 0x800171D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800171D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800171D8: jr          $ra
    // 0x800171DC: nop

    return;
    // 0x800171DC: nop

;}
RECOMP_FUNC void _depth2Cents(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005A80: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80005A84: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80005A88: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005A8C: lwc1        $f4, -0x4520($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4520);
    // 0x80005A90: nop

    // 0x80005A94: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x80005A98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80005A9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80005AA0: nop

    // 0x80005AA4: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
    // 0x80005AA8: beq         $a0, $zero, L_80005AF8
    if (ctx->r4 == 0) {
        // 0x80005AAC: nop
    
            goto L_80005AF8;
    }
    // 0x80005AAC: nop

L_80005AB0:
    // 0x80005AB0: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x80005AB4: beq         $t6, $zero, L_80005AD0
    if (ctx->r14 == 0) {
        // 0x80005AB8: nop
    
            goto L_80005AD0;
    }
    // 0x80005AB8: nop

    // 0x80005ABC: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80005AC0: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80005AC4: nop

    // 0x80005AC8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80005ACC: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
L_80005AD0:
    // 0x80005AD0: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80005AD4: nop

    // 0x80005AD8: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80005ADC: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x80005AE0: srl         $t7, $a0, 1
    ctx->r15 = S32(U32(ctx->r4) >> 1);
    // 0x80005AE4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80005AE8: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x80005AEC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80005AF0: bne         $a0, $zero, L_80005AB0
    if (ctx->r4 != 0) {
        // 0x80005AF4: nop
    
            goto L_80005AB0;
    }
    // 0x80005AF4: nop

L_80005AF8:
    // 0x80005AF8: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80005AFC: b           L_80005B0C
    // 0x80005B00: nop

        goto L_80005B0C;
    // 0x80005B00: nop

    // 0x80005B04: b           L_80005B0C
    // 0x80005B08: nop

        goto L_80005B0C;
    // 0x80005B08: nop

L_80005B0C:
    // 0x80005B0C: jr          $ra
    // 0x80005B10: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80005B10: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void cosf_game(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036570: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x80036574: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x80036578: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8003657C: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80036580: sra         $t6, $v0, 22
    ctx->r14 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80036584: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x80036588: slti        $at, $t7, 0x136
    ctx->r1 = SIGNED(ctx->r15) < 0X136 ? 1 : 0;
    // 0x8003658C: beql        $at, $zero, L_800366B4
    if (ctx->r1 == 0) {
        // 0x80036590: c.eq.s      $f10, $f10
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f10.fl == ctx->f10.fl;
            goto L_800366B4;
    }
    goto skip_0;
    // 0x80036590: c.eq.s      $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f10.fl == ctx->f10.fl;
    skip_0:
    // 0x80036594: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80036598: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8003659C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800365A0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800365A4: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800365A8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800365AC: bc1fl       L_800365C0
    if (!c1cs) {
        // 0x800365B0: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_800365C0;
    }
    goto skip_1;
    // 0x800365B0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_1:
    // 0x800365B4: b           L_800365C0
    // 0x800365B8: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
        goto L_800365C0;
    // 0x800365B8: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
    // 0x800365BC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_800365C0:
    // 0x800365C0: ldc1        $f8, -0x3C48($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3C48);
    // 0x800365C4: cvt.d.s     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.d = CVT_D_S(ctx->f0.fl);
    // 0x800365C8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800365CC: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x800365D0: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x800365D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800365D8: add.d       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f14.d = ctx->f10.d + ctx->f18.d;
    // 0x800365DC: c.le.d      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.d <= ctx->f14.d;
    // 0x800365E0: nop

    // 0x800365E4: bc1fl       L_80036604
    if (!c1cs) {
        // 0x800365E8: sub.d       $f10, $f14, $f18
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f14.d - ctx->f18.d;
            goto L_80036604;
    }
    goto skip_2;
    // 0x800365E8: sub.d       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f14.d - ctx->f18.d;
    skip_2:
    // 0x800365EC: add.d       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f14.d + ctx->f18.d;
    // 0x800365F0: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x800365F4: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x800365F8: b           L_80036614
    // 0x800365FC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
        goto L_80036614;
    // 0x800365FC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80036600: sub.d       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f14.d - ctx->f18.d;
L_80036604:
    // 0x80036604: trunc.w.d   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80036608: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8003660C: nop

    // 0x80036610: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
L_80036614:
    // 0x80036614: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80036618: ldc1        $f10, -0x3C40($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3C40);
    // 0x8003661C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80036620: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80036624: ldc1        $f6, -0x3C38($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3C38);
    // 0x80036628: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x8003662C: addiu       $v1, $v1, -0x3C70
    ctx->r3 = ADD32(ctx->r3, -0X3C70);
    // 0x80036630: sub.d       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = ctx->f8.d - ctx->f18.d;
    // 0x80036634: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x80036638: mul.d       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x8003663C: ldc1        $f10, 0x20($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X20);
    // 0x80036640: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x80036644: ldc1        $f6, 0x18($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X18);
    // 0x80036648: sub.d       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f12.d - ctx->f4.d;
    // 0x8003664C: sub.d       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = ctx->f2.d - ctx->f8.d;
    // 0x80036650: mul.d       $f14, $f2, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f14.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80036654: nop

    // 0x80036658: mul.d       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f14.d);
    // 0x8003665C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80036660: ldc1        $f4, 0x10($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, 0X10);
    // 0x80036664: mul.d       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x80036668: add.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d + ctx->f4.d;
    // 0x8003666C: ldc1        $f10, 0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X8);
    // 0x80036670: mul.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f14.d);
    // 0x80036674: bne         $t0, $zero, L_80036694
    if (ctx->r8 != 0) {
        // 0x80036678: add.d       $f16, $f10, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
            goto L_80036694;
    }
    // 0x80036678: add.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
    // 0x8003667C: mul.d       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f14.d);
    // 0x80036680: nop

    // 0x80036684: mul.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x80036688: add.d       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f6.d + ctx->f2.d;
    // 0x8003668C: jr          $ra
    // 0x80036690: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    return;
    // 0x80036690: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_80036694:
    // 0x80036694: mul.d       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f14.d);
    // 0x80036698: nop

    // 0x8003669C: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x800366A0: add.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f4.d + ctx->f2.d;
    // 0x800366A4: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x800366A8: jr          $ra
    // 0x800366AC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x800366AC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x800366B0: c.eq.s      $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f10.fl == ctx->f10.fl;
L_800366B4:
    // 0x800366B4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800366B8: bc1t        L_800366CC
    if (c1cs) {
        // 0x800366BC: nop
    
            goto L_800366CC;
    }
    // 0x800366BC: nop

    // 0x800366C0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800366C4: jr          $ra
    // 0x800366C8: lwc1        $f0, -0x3940($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3940);
    return;
    // 0x800366C8: lwc1        $f0, -0x3940($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3940);
L_800366CC:
    // 0x800366CC: lwc1        $f0, -0x3C30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3C30);
    // 0x800366D0: jr          $ra
    // 0x800366D4: nop

    return;
    // 0x800366D4: nop

;}
RECOMP_FUNC void Debug_BackupMemTest(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020550: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80020554: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80020558: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002055C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80020560: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x80020564: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80020568: nop

    // 0x8002056C: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x80020570: beq         $t8, $zero, L_80020580
    if (ctx->r24 == 0) {
        // 0x80020574: nop
    
            goto L_80020580;
    }
    // 0x80020574: nop

    // 0x80020578: jal         0x8001D2C0
    // 0x8002057C: nop

    func_8001D2C0(rdram, ctx);
        goto after_0;
    // 0x8002057C: nop

    after_0:
L_80020580:
    // 0x80020580: jal         0x8001D1D4
    // 0x80020584: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x80020584: nop

    after_1:
    // 0x80020588: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002058C: bne         $v0, $at, L_8002059C
    if (ctx->r2 != ctx->r1) {
        // 0x80020590: nop
    
            goto L_8002059C;
    }
    // 0x80020590: nop

    // 0x80020594: b           L_80020834
    // 0x80020598: nop

        goto L_80020834;
    // 0x80020598: nop

L_8002059C:
    // 0x8002059C: jal         0x8001D1D4
    // 0x800205A0: nop

    func_8001D1D4(rdram, ctx);
        goto after_2;
    // 0x800205A0: nop

    after_2:
    // 0x800205A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800205A8: bne         $v0, $at, L_800205BC
    if (ctx->r2 != ctx->r1) {
        // 0x800205AC: nop
    
            goto L_800205BC;
    }
    // 0x800205AC: nop

    // 0x800205B0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800205B4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800205B8: sw          $t9, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r25;
L_800205BC:
    // 0x800205BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800205C0: addiu       $t0, $t0, -0x1D50
    ctx->r8 = ADD32(ctx->r8, -0X1D50);
    // 0x800205C4: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x800205C8: nop

    // 0x800205CC: andi        $t2, $t1, 0x20
    ctx->r10 = ctx->r9 & 0X20;
    // 0x800205D0: beq         $t2, $zero, L_80020670
    if (ctx->r10 == 0) {
        // 0x800205D4: nop
    
            goto L_80020670;
    }
    // 0x800205D4: nop

    // 0x800205D8: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x800205DC: lb          $t3, 0x7441($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X7441);
    // 0x800205E0: nop

    // 0x800205E4: bne         $t3, $zero, L_80020660
    if (ctx->r11 != 0) {
        // 0x800205E8: nop
    
            goto L_80020660;
    }
    // 0x800205E8: nop

    // 0x800205EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800205F0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800205F4: sb          $t4, 0x7441($at)
    MEM_B(0X7441, ctx->r1) = ctx->r12;
    // 0x800205F8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800205FC: sb          $zero, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = 0;
    // 0x80020600: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80020604: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80020608: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8002060C: jal         0x8001F174
    // 0x80020610: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F174(rdram, ctx);
        goto after_3;
    // 0x80020610: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_3:
    // 0x80020614: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80020618:
    // 0x80020618: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8002061C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80020620: addiu       $t7, $t7, 0x7040
    ctx->r15 = ADD32(ctx->r15, 0X7040);
    // 0x80020624: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80020628: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8002062C: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x80020630: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x80020634: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    // 0x80020638: jal         0x8001F328
    // 0x8002063C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_8001F328(rdram, ctx);
        goto after_4;
    // 0x8002063C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_4:
    // 0x80020640: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80020644: nop

    // 0x80020648: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8002064C: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x80020650: bne         $at, $zero, L_80020618
    if (ctx->r1 != 0) {
        // 0x80020654: sw          $t9, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r25;
            goto L_80020618;
    }
    // 0x80020654: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80020658: b           L_80020670
    // 0x8002065C: nop

        goto L_80020670;
    // 0x8002065C: nop

L_80020660:
    // 0x80020660: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020664: sb          $zero, 0x7441($at)
    MEM_B(0X7441, ctx->r1) = 0;
    // 0x80020668: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002066C: sb          $zero, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = 0;
L_80020670:
    // 0x80020670: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80020674: lb          $t0, 0x7441($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X7441);
    // 0x80020678: nop

    // 0x8002067C: bne         $t0, $zero, L_800207A8
    if (ctx->r8 != 0) {
        // 0x80020680: nop
    
            goto L_800207A8;
    }
    // 0x80020680: nop

    // 0x80020684: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80020688: addiu       $t1, $t1, -0x1D10
    ctx->r9 = ADD32(ctx->r9, -0X1D10);
    // 0x8002068C: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80020690: nop

    // 0x80020694: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x80020698: beq         $t3, $zero, L_800206D4
    if (ctx->r11 == 0) {
        // 0x8002069C: nop
    
            goto L_800206D4;
    }
    // 0x8002069C: nop

    // 0x800206A0: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800206A4: lb          $t4, 0x7440($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7440);
    // 0x800206A8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800206AC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800206B0: sll         $t6, $t5, 24
    ctx->r14 = S32(ctx->r13 << 24);
    // 0x800206B4: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x800206B8: bgez        $t7, L_800206CC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800206BC: sb          $t5, 0x7440($at)
        MEM_B(0X7440, ctx->r1) = ctx->r13;
            goto L_800206CC;
    }
    // 0x800206BC: sb          $t5, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = ctx->r13;
    // 0x800206C0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800206C4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800206C8: sb          $t8, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = ctx->r24;
L_800206CC:
    // 0x800206CC: b           L_80020720
    // 0x800206D0: nop

        goto L_80020720;
    // 0x800206D0: nop

L_800206D4:
    // 0x800206D4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800206D8: addiu       $t9, $t9, -0x1D10
    ctx->r25 = ADD32(ctx->r25, -0X1D10);
    // 0x800206DC: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x800206E0: nop

    // 0x800206E4: andi        $t1, $t0, 0x400
    ctx->r9 = ctx->r8 & 0X400;
    // 0x800206E8: beq         $t1, $zero, L_80020720
    if (ctx->r9 == 0) {
        // 0x800206EC: nop
    
            goto L_80020720;
    }
    // 0x800206EC: nop

    // 0x800206F0: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800206F4: lb          $t2, 0x7440($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7440);
    // 0x800206F8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800206FC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80020700: sll         $t4, $t3, 24
    ctx->r12 = S32(ctx->r11 << 24);
    // 0x80020704: sra         $t5, $t4, 24
    ctx->r13 = S32(SIGNED(ctx->r12) >> 24);
    // 0x80020708: sb          $t3, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = ctx->r11;
    // 0x8002070C: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80020710: bne         $at, $zero, L_80020720
    if (ctx->r1 != 0) {
        // 0x80020714: nop
    
            goto L_80020720;
    }
    // 0x80020714: nop

    // 0x80020718: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002071C: sb          $zero, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = 0;
L_80020720:
    // 0x80020720: lui         $s0, 0x8005
    ctx->r16 = S32(0X8005 << 16);
    // 0x80020724: lb          $s0, 0x7440($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X7440);
    // 0x80020728: nop

    // 0x8002072C: beq         $s0, $zero, L_80020760
    if (ctx->r16 == 0) {
        // 0x80020730: nop
    
            goto L_80020760;
    }
    // 0x80020730: nop

    // 0x80020734: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80020738: beq         $s0, $at, L_80020770
    if (ctx->r16 == ctx->r1) {
        // 0x8002073C: nop
    
            goto L_80020770;
    }
    // 0x8002073C: nop

    // 0x80020740: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80020744: beq         $s0, $at, L_80020780
    if (ctx->r16 == ctx->r1) {
        // 0x80020748: nop
    
            goto L_80020780;
    }
    // 0x80020748: nop

    // 0x8002074C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80020750: beq         $s0, $at, L_80020790
    if (ctx->r16 == ctx->r1) {
        // 0x80020754: nop
    
            goto L_80020790;
    }
    // 0x80020754: nop

    // 0x80020758: b           L_800207A0
    // 0x8002075C: nop

        goto L_800207A0;
    // 0x8002075C: nop

L_80020760:
    // 0x80020760: jal         0x800200D8
    // 0x80020764: nop

    PakWrite(rdram, ctx);
        goto after_5;
    // 0x80020764: nop

    after_5:
    // 0x80020768: b           L_800207A0
    // 0x8002076C: nop

        goto L_800207A0;
    // 0x8002076C: nop

L_80020770:
    // 0x80020770: jal         0x8002021C
    // 0x80020774: nop

    PakRead(rdram, ctx);
        goto after_6;
    // 0x80020774: nop

    after_6:
    // 0x80020778: b           L_800207A0
    // 0x8002077C: nop

        goto L_800207A0;
    // 0x8002077C: nop

L_80020780:
    // 0x80020780: jal         0x80020360
    // 0x80020784: nop

    Write2Eeprom(rdram, ctx);
        goto after_7;
    // 0x80020784: nop

    after_7:
    // 0x80020788: b           L_800207A0
    // 0x8002078C: nop

        goto L_800207A0;
    // 0x8002078C: nop

L_80020790:
    // 0x80020790: jal         0x800203C0
    // 0x80020794: nop

    ReadEeprom(rdram, ctx);
        goto after_8;
    // 0x80020794: nop

    after_8:
    // 0x80020798: b           L_800207A0
    // 0x8002079C: nop

        goto L_800207A0;
    // 0x8002079C: nop

L_800207A0:
    // 0x800207A0: b           L_800207C4
    // 0x800207A4: nop

        goto L_800207C4;
    // 0x800207A4: nop

L_800207A8:
    // 0x800207A8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800207AC: lb          $t6, 0x7441($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7441);
    // 0x800207B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800207B4: bne         $t6, $at, L_800207C4
    if (ctx->r14 != ctx->r1) {
        // 0x800207B8: nop
    
            goto L_800207C4;
    }
    // 0x800207B8: nop

    // 0x800207BC: jal         0x80020420
    // 0x800207C0: nop

    Debug_BackupMemTest_Unk(rdram, ctx);
        goto after_9;
    // 0x800207C0: nop

    after_9:
L_800207C4:
    // 0x800207C4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800207C8: jal         0x8001F238
    // 0x800207CC: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F238(rdram, ctx);
        goto after_10;
    // 0x800207CC: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_10:
    // 0x800207D0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_800207D4:
    // 0x800207D4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800207D8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800207DC: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x800207E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800207E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800207E8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800207EC: lw          $t9, 0x6E98($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6E98);
    // 0x800207F0: nop

    // 0x800207F4: bne         $t9, $zero, L_8002080C
    if (ctx->r25 != 0) {
        // 0x800207F8: nop
    
            goto L_8002080C;
    }
    // 0x800207F8: nop

    // 0x800207FC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80020800: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80020804: jal         0x8001F38C
    // 0x80020808: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F38C(rdram, ctx);
        goto after_11;
    // 0x80020808: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_11:
L_8002080C:
    // 0x8002080C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80020810: nop

    // 0x80020814: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80020818: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8002081C: bne         $at, $zero, L_800207D4
    if (ctx->r1 != 0) {
        // 0x80020820: sw          $t1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r9;
            goto L_800207D4;
    }
    // 0x80020820: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80020824: jal         0x8001994C
    // 0x80020828: nop

    func_8001994C(rdram, ctx);
        goto after_12;
    // 0x80020828: nop

    after_12:
    // 0x8002082C: b           L_80020834
    // 0x80020830: nop

        goto L_80020834;
    // 0x80020830: nop

L_80020834:
    // 0x80020834: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80020838: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002083C: jr          $ra
    // 0x80020840: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80020840: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80029B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029B60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029B68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80029B6C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80029B70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80029B74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80029B78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029B7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80029B80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029B84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80029B88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80029B8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80029B90: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80029B94: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80029B98: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80029B9C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80029BA0: lwc1        $f12, 0x128($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X128);
    // 0x80029BA4: jal         0x80015538
    // 0x80029BA8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80029BA8: nop

    after_0:
    // 0x80029BAC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80029BB0: nop

    // 0x80029BB4: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x80029BB8: b           L_80029BC0
    // 0x80029BBC: nop

        goto L_80029BC0;
    // 0x80029BBC: nop

L_80029BC0:
    // 0x80029BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029BC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80029BC8: jr          $ra
    // 0x80029BCC: nop

    return;
    // 0x80029BCC: nop

;}
RECOMP_FUNC void func_80016DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016DB4: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80016DB8: lh          $v0, 0x76DA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X76DA);
    // 0x80016DBC: jr          $ra
    // 0x80016DC0: nop

    return;
    // 0x80016DC0: nop

    // 0x80016DC4: jr          $ra
    // 0x80016DC8: nop

    return;
    // 0x80016DC8: nop

    // 0x80016DCC: jr          $ra
    // 0x80016DD0: nop

    return;
    // 0x80016DD0: nop

;}
RECOMP_FUNC void func_8002A9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A9A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A9A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A9AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002A9B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002A9B4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8002A9B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002A9BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002A9C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A9C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002A9C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A9CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002A9D0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002A9D4: lwc1        $f4, 0x4190($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x8002A9D8: nop

    // 0x8002A9DC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8002A9E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002A9E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8002A9E8: jal         0x8002A720
    // 0x8002A9EC: nop

    func_8002A720(rdram, ctx);
        goto after_0;
    // 0x8002A9EC: nop

    after_0:
    // 0x8002A9F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8002A9F4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8002A9F8: nop

    // 0x8002A9FC: bgez        $t8, L_8002AA1C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8002AA00: nop
    
            goto L_8002AA1C;
    }
    // 0x8002AA00: nop

    // 0x8002AA04: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002AA08: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002AA0C: jal         0x80015538
    // 0x8002AA10: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8002AA10: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x8002AA14: b           L_8002AA54
    // 0x8002AA18: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_8002AA54;
    // 0x8002AA18: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_8002AA1C:
    // 0x8002AA1C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8002AA20: nop

    // 0x8002AA24: blez        $t9, L_8002AA44
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8002AA28: nop
    
            goto L_8002AA44;
    }
    // 0x8002AA28: nop

    // 0x8002AA2C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002AA30: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002AA34: jal         0x80015538
    // 0x8002AA38: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8002AA38: nop

    after_2:
    // 0x8002AA3C: b           L_8002AA54
    // 0x8002AA40: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_8002AA54;
    // 0x8002AA40: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_8002AA44:
    // 0x8002AA44: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002AA48: jal         0x8002A4E0
    // 0x8002AA4C: nop

    func_8002A4E0(rdram, ctx);
        goto after_3;
    // 0x8002AA4C: nop

    after_3:
    // 0x8002AA50: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_8002AA54:
    // 0x8002AA54: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8002AA58: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002AA5C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002AA60: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002AA64: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8002AA68: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002AA6C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8002AA70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002AA74: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8002AA78: swc1        $f6, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f6.u32l;
    // 0x8002AA7C: b           L_8002AA84
    // 0x8002AA80: nop

        goto L_8002AA84;
    // 0x8002AA80: nop

L_8002AA84:
    // 0x8002AA84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AA88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002AA8C: jr          $ra
    // 0x8002AA90: nop

    return;
    // 0x8002AA90: nop

;}
RECOMP_FUNC void guMtxCatF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036400: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80036404: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80036408: addiu       $v1, $sp, 0x1C
    ctx->r3 = ADD32(ctx->r29, 0X1C);
    // 0x8003640C: addiu       $t3, $sp, 0x5C
    ctx->r11 = ADD32(ctx->r29, 0X5C);
    // 0x80036410: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80036414: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80036418: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
L_8003641C:
    // 0x8003641C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80036420: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80036424: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x80036428: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x8003642C: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80036430: lwc1        $f14, 0x0($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80036434: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80036438: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8003643C: mul.s       $f18, $f14, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80036440: beql        $a0, $t2, L_800364C4
    if (ctx->r4 == ctx->r10) {
        // 0x80036444: add.s       $f14, $f16, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
            goto L_800364C4;
    }
    goto skip_0;
    // 0x80036444: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
    skip_0:
    // 0x80036448: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
L_8003644C:
    // 0x8003644C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80036450: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80036454: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80036458: swc1        $f14, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f14.u32l;
    // 0x8003645C: lwc1        $f14, 0x4($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80036460: lwc1        $f12, 0xC($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80036464: lwc1        $f10, -0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0X4);
    // 0x80036468: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8003646C: add.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x80036470: swc1        $f12, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f12.u32l;
    // 0x80036474: lwc1        $f12, 0x8($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80036478: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8003647C: lwc1        $f14, -0x4($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, -0X4);
    // 0x80036480: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80036484: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x80036488: swc1        $f10, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f10.u32l;
    // 0x8003648C: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80036490: lwc1        $f14, 0x2C($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80036494: lwc1        $f12, -0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, -0X4);
    // 0x80036498: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x8003649C: mul.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x800364A0: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800364A4: add.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x800364A8: swc1        $f14, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f14.u32l;
    // 0x800364AC: lwc1        $f14, 0x0($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800364B0: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800364B4: mul.s       $f18, $f14, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x800364B8: bnel        $a0, $t2, L_8003644C
    if (ctx->r4 != ctx->r10) {
        // 0x800364BC: add.s       $f14, $f16, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
            goto L_8003644C;
    }
    goto skip_1;
    // 0x800364BC: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
    skip_1:
    // 0x800364C0: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
L_800364C4:
    // 0x800364C4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800364C8: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x800364CC: swc1        $f14, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f14.u32l;
    // 0x800364D0: lwc1        $f12, 0xC($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XC);
    // 0x800364D4: lwc1        $f14, 0x4($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X4);
    // 0x800364D8: lwc1        $f10, -0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0X4);
    // 0x800364DC: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x800364E0: add.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x800364E4: swc1        $f12, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f12.u32l;
    // 0x800364E8: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800364EC: lwc1        $f12, 0x8($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X8);
    // 0x800364F0: lwc1        $f14, -0x4($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, -0X4);
    // 0x800364F4: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x800364F8: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x800364FC: swc1        $f10, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f10.u32l;
    // 0x80036500: lwc1        $f14, 0x2C($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80036504: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80036508: lwc1        $f12, -0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, -0X4);
    // 0x8003650C: mul.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80036510: add.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x80036514: swc1        $f14, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f14.u32l;
    // 0x80036518: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8003651C: sltu        $at, $v1, $t3
    ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x80036520: bne         $at, $zero, L_8003641C
    if (ctx->r1 != 0) {
        // 0x80036524: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_8003641C;
    }
    // 0x80036524: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80036528: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x8003652C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80036530: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
L_80036534:
    // 0x80036534: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80036538: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8003653C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80036540: swc1        $f6, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->f6.u32l;
    // 0x80036544: lwc1        $f8, -0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, -0XC);
    // 0x80036548: swc1        $f8, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->f8.u32l;
    // 0x8003654C: lwc1        $f16, -0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, -0X8);
    // 0x80036550: swc1        $f16, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->f16.u32l;
    // 0x80036554: lwc1        $f10, -0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, -0X4);
    // 0x80036558: bne         $a0, $v0, L_80036534
    if (ctx->r4 != ctx->r2) {
        // 0x8003655C: swc1        $f10, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f10.u32l;
            goto L_80036534;
    }
    // 0x8003655C: swc1        $f10, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f10.u32l;
    // 0x80036560: jr          $ra
    // 0x80036564: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80036564: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void alRaw16Pull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003FDD4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8003FDD8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8003FDDC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003FDE0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003FDE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8003FDE8: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8003FDEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003FDF0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003FDF4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003FDF8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8003FDFC: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x8003FE00: bne         $a2, $zero, L_8003FE10
    if (ctx->r6 != 0) {
        // 0x8003FE04: or          $t1, $t0, $zero
        ctx->r9 = ctx->r8 | 0;
            goto L_8003FE10;
    }
    // 0x8003FE04: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x8003FE08: b           L_80040164
    // 0x8003FE0C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_80040164;
    // 0x8003FE0C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_8003FE10:
    // 0x8003FE10: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8003FE14: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8003FE18: addu        $t6, $v0, $s3
    ctx->r14 = ADD32(ctx->r2, ctx->r19);
    // 0x8003FE1C: sltu        $at, $v1, $t6
    ctx->r1 = ctx->r3 < ctx->r14 ? 1 : 0;
    // 0x8003FE20: beql        $at, $zero, L_80040034
    if (ctx->r1 == 0) {
        // 0x8003FE24: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_80040034;
    }
    goto skip_0;
    // 0x8003FE24: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_0:
    // 0x8003FE28: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x8003FE2C: subu        $s2, $v1, $v0
    ctx->r18 = SUB32(ctx->r3, ctx->r2);
    // 0x8003FE30: beql        $t7, $zero, L_80040034
    if (ctx->r15 == 0) {
        // 0x8003FE34: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_80040034;
    }
    goto skip_1;
    // 0x8003FE34: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_1:
    // 0x8003FE38: blez        $s2, L_8003FEB4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8003FE3C: sll         $s1, $s2, 1
        ctx->r17 = S32(ctx->r18 << 1);
            goto L_8003FEB4;
    }
    // 0x8003FE3C: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x8003FE40: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x8003FE44: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x8003FE48: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x8003FE4C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x8003FE50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003FE54: jalr        $t9
    // 0x8003FE58: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8003FE58: nop

    after_0:
    // 0x8003FE5C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8003FE60: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x8003FE64: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8003FE68: lh          $t8, 0x0($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X0);
    // 0x8003FE6C: addu        $a3, $s1, $a2
    ctx->r7 = ADD32(ctx->r17, ctx->r6);
    // 0x8003FE70: andi        $t5, $a3, 0x7
    ctx->r13 = ctx->r7 & 0X7;
    // 0x8003FE74: subu        $t6, $a3, $t5
    ctx->r14 = SUB32(ctx->r7, ctx->r13);
    // 0x8003FE78: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8003FE7C: andi        $t3, $t8, 0xFFFF
    ctx->r11 = ctx->r24 & 0XFFFF;
    // 0x8003FE80: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8003FE84: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8003FE88: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8003FE8C: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x8003FE90: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8003FE94: subu        $t3, $v0, $a2
    ctx->r11 = SUB32(ctx->r2, ctx->r6);
    // 0x8003FE98: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x8003FE9C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8003FEA0: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x8003FEA4: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x8003FEA8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8003FEAC: b           L_8003FEB8
    // 0x8003FEB0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8003FEB8;
    // 0x8003FEB0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8003FEB4:
    // 0x8003FEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8003FEB8:
    // 0x8003FEB8: lh          $t4, 0x0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X0);
    // 0x8003FEBC: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8003FEC0: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x8003FEC4: sh          $t5, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r13;
    // 0x8003FEC8: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x8003FECC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8003FED0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8003FED4: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8003FED8: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8003FEDC: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8003FEE0: sw          $t8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r24;
    // 0x8003FEE4: beq         $at, $zero, L_8004000C
    if (ctx->r1 == 0) {
        // 0x8003FEE8: lh          $t0, 0x0($t2)
        ctx->r8 = MEM_H(ctx->r10, 0X0);
            goto L_8004000C;
    }
    // 0x8003FEE8: lh          $t0, 0x0($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X0);
    // 0x8003FEEC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
L_8003FEF0:
    // 0x8003FEF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FEF4: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x8003FEF8: beq         $v0, $at, L_8003FF0C
    if (ctx->r2 == ctx->r1) {
        // 0x8003FEFC: subu        $s3, $s3, $s2
        ctx->r19 = SUB32(ctx->r19, ctx->r18);
            goto L_8003FF0C;
    }
    // 0x8003FEFC: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x8003FF00: beq         $v0, $zero, L_8003FF0C
    if (ctx->r2 == 0) {
        // 0x8003FF04: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_8003FF0C;
    }
    // 0x8003FF04: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x8003FF08: sw          $t3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r11;
L_8003FF0C:
    // 0x8003FF0C: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x8003FF10: lw          $t5, 0x1C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C);
    // 0x8003FF14: subu        $v0, $t4, $t5
    ctx->r2 = SUB32(ctx->r12, ctx->r13);
    // 0x8003FF18: sltu        $at, $s3, $v0
    ctx->r1 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x8003FF1C: beq         $at, $zero, L_8003FF2C
    if (ctx->r1 == 0) {
        // 0x8003FF20: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8003FF2C;
    }
    // 0x8003FF20: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8003FF24: b           L_8003FF2C
    // 0x8003FF28: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
        goto L_8003FF2C;
    // 0x8003FF28: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_8003FF2C:
    // 0x8003FF2C: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x8003FF30: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x8003FF34: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8003FF38: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8003FF3C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x8003FF40: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x8003FF44: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003FF48: jalr        $t9
    // 0x8003FF4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8003FF4C: nop

    after_1:
    // 0x8003FF50: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8003FF54: andi        $a1, $v0, 0x7
    ctx->r5 = ctx->r2 & 0X7;
    // 0x8003FF58: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8003FF5C: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x8003FF60: beq         $v1, $zero, L_8003FF74
    if (ctx->r3 == 0) {
        // 0x8003FF64: addu        $a3, $s1, $a1
        ctx->r7 = ADD32(ctx->r17, ctx->r5);
            goto L_8003FF74;
    }
    // 0x8003FF64: addu        $a3, $s1, $a1
    ctx->r7 = ADD32(ctx->r17, ctx->r5);
    // 0x8003FF68: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8003FF6C: b           L_8003FF78
    // 0x8003FF70: subu        $a2, $t6, $v1
    ctx->r6 = SUB32(ctx->r14, ctx->r3);
        goto L_8003FF78;
    // 0x8003FF70: subu        $a2, $t6, $v1
    ctx->r6 = SUB32(ctx->r14, ctx->r3);
L_8003FF74:
    // 0x8003FF74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8003FF78:
    // 0x8003FF78: addu        $t7, $t0, $a2
    ctx->r15 = ADD32(ctx->r8, ctx->r6);
    // 0x8003FF7C: andi        $t4, $a3, 0x7
    ctx->r12 = ctx->r7 & 0X7;
    // 0x8003FF80: subu        $t5, $a3, $t4
    ctx->r13 = SUB32(ctx->r7, ctx->r12);
    // 0x8003FF84: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8003FF88: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8003FF8C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8003FF90: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x8003FF94: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8003FF98: addiu       $t9, $t5, 0x8
    ctx->r25 = ADD32(ctx->r13, 0X8);
    // 0x8003FF9C: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x8003FFA0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8003FFA4: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8003FFA8: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8003FFAC: subu        $t8, $v0, $a1
    ctx->r24 = SUB32(ctx->r2, ctx->r5);
    // 0x8003FFB0: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x8003FFB4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8003FFB8: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8003FFBC: bne         $a1, $zero, L_8003FFC8
    if (ctx->r5 != 0) {
        // 0x8003FFC0: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_8003FFC8;
    }
    // 0x8003FFC0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8003FFC4: beq         $a2, $zero, L_80040000
    if (ctx->r6 == 0) {
        // 0x8003FFC8: addu        $t3, $t0, $a1
        ctx->r11 = ADD32(ctx->r8, ctx->r5);
            goto L_80040000;
    }
L_8003FFC8:
    // 0x8003FFC8: addu        $t3, $t0, $a1
    ctx->r11 = ADD32(ctx->r8, ctx->r5);
    // 0x8003FFCC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8003FFD0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8003FFD4: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8003FFD8: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8003FFDC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8003FFE0: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x8003FFE4: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x8003FFE8: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x8003FFEC: or          $t3, $t7, $t8
    ctx->r11 = ctx->r15 | ctx->r24;
    // 0x8003FFF0: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x8003FFF4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003FFF8: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8003FFFC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80040000:
    // 0x80040000: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80040004: bnel        $at, $zero, L_8003FEF0
    if (ctx->r1 != 0) {
        // 0x80040008: lw          $v0, 0x24($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X24);
            goto L_8003FEF0;
    }
    goto skip_2;
    // 0x80040008: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    skip_2:
L_8004000C:
    // 0x8004000C: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x80040010: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x80040014: sll         $t6, $s3, 1
    ctx->r14 = S32(ctx->r19 << 1);
    // 0x80040018: addu        $t5, $t4, $s3
    ctx->r13 = ADD32(ctx->r12, ctx->r19);
    // 0x8004001C: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80040020: sw          $t5, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r13;
    // 0x80040024: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x80040028: b           L_80040164
    // 0x8004002C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_80040164;
    // 0x8004002C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80040030: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
L_80040034:
    // 0x80040034: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80040038: sll         $s1, $s3, 1
    ctx->r17 = S32(ctx->r19 << 1);
    // 0x8004003C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80040040: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x80040044: addu        $v1, $a0, $s1
    ctx->r3 = ADD32(ctx->r4, ctx->r17);
    // 0x80040048: subu        $t3, $v1, $t8
    ctx->r11 = SUB32(ctx->r3, ctx->r24);
    // 0x8004004C: subu        $s2, $t3, $t4
    ctx->r18 = SUB32(ctx->r11, ctx->r12);
    // 0x80040050: bgezl       $s2, L_80040060
    if (SIGNED(ctx->r18) >= 0) {
        // 0x80040054: slt         $at, $s1, $s2
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_80040060;
    }
    goto skip_3;
    // 0x80040054: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    skip_3:
    // 0x80040058: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8004005C: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
L_80040060:
    // 0x80040060: beql        $at, $zero, L_80040070
    if (ctx->r1 == 0) {
        // 0x80040064: slt         $at, $s2, $s1
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80040070;
    }
    goto skip_4;
    // 0x80040064: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
    skip_4:
    // 0x80040068: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    // 0x8004006C: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
L_80040070:
    // 0x80040070: beql        $at, $zero, L_80040124
    if (ctx->r1 == 0) {
        // 0x80040074: sw          $v1, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r3;
            goto L_80040124;
    }
    goto skip_5;
    // 0x80040074: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    skip_5:
    // 0x80040078: blez        $s3, L_800400F8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8004007C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_800400F8;
    }
    // 0x8004007C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80040080: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80040084: subu        $a1, $s1, $s2
    ctx->r5 = SUB32(ctx->r17, ctx->r18);
    // 0x80040088: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x8004008C: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x80040090: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80040094: jalr        $t9
    // 0x80040098: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80040098: nop

    after_2:
    // 0x8004009C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800400A0: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800400A4: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x800400A8: lh          $t5, 0x0($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X0);
    // 0x800400AC: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x800400B0: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x800400B4: andi        $t8, $a3, 0x7
    ctx->r24 = ctx->r7 & 0X7;
    // 0x800400B8: subu        $t3, $a3, $t8
    ctx->r11 = SUB32(ctx->r7, ctx->r24);
    // 0x800400BC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800400C0: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x800400C4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800400C8: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x800400CC: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x800400D0: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x800400D4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800400D8: subu        $t6, $v0, $a2
    ctx->r14 = SUB32(ctx->r2, ctx->r6);
    // 0x800400DC: lui         $t5, 0x400
    ctx->r13 = S32(0X400 << 16);
    // 0x800400E0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x800400E4: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x800400E8: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x800400EC: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800400F0: b           L_800400F8
    // 0x800400F4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_800400F8;
    // 0x800400F4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_800400F8:
    // 0x800400F8: lh          $t7, 0x0($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X0);
    // 0x800400FC: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x80040100: sh          $t8, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r24;
    // 0x80040104: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x80040108: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x8004010C: addu        $t4, $t3, $s3
    ctx->r12 = ADD32(ctx->r11, ctx->r19);
    // 0x80040110: addu        $t5, $t9, $s1
    ctx->r13 = ADD32(ctx->r25, ctx->r17);
    // 0x80040114: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x80040118: b           L_80040124
    // 0x8004011C: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
        goto L_80040124;
    // 0x8004011C: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
    // 0x80040120: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
L_80040124:
    // 0x80040124: beq         $s2, $zero, L_80040160
    if (ctx->r18 == 0) {
        // 0x80040128: subu        $v1, $s1, $s2
        ctx->r3 = SUB32(ctx->r17, ctx->r18);
            goto L_80040160;
    }
    // 0x80040128: subu        $v1, $s1, $s2
    ctx->r3 = SUB32(ctx->r17, ctx->r18);
    // 0x8004012C: bgez        $v1, L_80040138
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80040130: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_80040138;
    }
    // 0x80040130: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80040134: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80040138:
    // 0x80040138: lh          $t6, 0x0($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X0);
    // 0x8004013C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80040140: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80040144: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80040148: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8004014C: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x80040150: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x80040154: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80040158: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x8004015C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80040160:
    // 0x80040160: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_80040164:
    // 0x80040164: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80040168: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8004016C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80040170: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80040174: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80040178: jr          $ra
    // 0x8004017C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8004017C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80011D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011D18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80011D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80011D20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80011D24: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80011D28: nop

    // 0x80011D2C: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x80011D30: nop

    // 0x80011D34: beq         $t7, $zero, L_80011DAC
    if (ctx->r15 == 0) {
        // 0x80011D38: nop
    
            goto L_80011DAC;
    }
    // 0x80011D38: nop

    // 0x80011D3C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80011D40: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80011D44: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80011D48: nop

    // 0x80011D4C: blez        $t9, L_80011D98
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80011D50: nop
    
            goto L_80011D98;
    }
    // 0x80011D50: nop

L_80011D54:
    // 0x80011D54: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80011D58: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80011D5C: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80011D60: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80011D64: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80011D68: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x80011D6C: jal         0x80011D18
    // 0x80011D70: nop

    func_80011D18(rdram, ctx);
        goto after_0;
    // 0x80011D70: nop

    after_0:
    // 0x80011D74: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80011D78: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80011D7C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80011D80: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80011D84: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x80011D88: nop

    // 0x80011D8C: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80011D90: bne         $at, $zero, L_80011D54
    if (ctx->r1 != 0) {
        // 0x80011D94: nop
    
            goto L_80011D54;
    }
    // 0x80011D94: nop

L_80011D98:
    // 0x80011D98: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80011D9C: nop

    // 0x80011DA0: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x80011DA4: jal         0x800309D0
    // 0x80011DA8: nop

    free_game(rdram, ctx);
        goto after_1;
    // 0x80011DA8: nop

    after_1:
L_80011DAC:
    // 0x80011DAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80011DB0: jal         0x800309D0
    // 0x80011DB4: nop

    free_game(rdram, ctx);
        goto after_2;
    // 0x80011DB4: nop

    after_2:
    // 0x80011DB8: b           L_80011DC0
    // 0x80011DBC: nop

        goto L_80011DC0;
    // 0x80011DBC: nop

L_80011DC0:
    // 0x80011DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80011DC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80011DC8: jr          $ra
    // 0x80011DCC: nop

    return;
    // 0x80011DCC: nop

;}
RECOMP_FUNC void func_8001C1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C1A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C1AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C1B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001C1B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001C1B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001C1BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8001C1C0: jal         0x80019510
    // 0x8001C1C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80019510(rdram, ctx);
        goto after_0;
    // 0x8001C1C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001C1C8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001C1CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8001C1D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001C1D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001C1D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001C1DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001C1E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001C1E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8001C1E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001C1EC: lbu         $t0, 0x130($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X130);
    // 0x8001C1F0: nop

    // 0x8001C1F4: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8001C1F8: bne         $t1, $zero, L_8001C228
    if (ctx->r9 != 0) {
        // 0x8001C1FC: nop
    
            goto L_8001C228;
    }
    // 0x8001C1FC: nop

    // 0x8001C200: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C204: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001C208: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8001C20C: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x8001C210: lh          $t5, 0x140($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X140);
    // 0x8001C214: nop

    // 0x8001C218: beq         $t5, $at, L_8001C228
    if (ctx->r13 == ctx->r1) {
        // 0x8001C21C: nop
    
            goto L_8001C228;
    }
    // 0x8001C21C: nop

    // 0x8001C220: b           L_8001C238
    // 0x8001C224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001C238;
    // 0x8001C224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001C228:
    // 0x8001C228: b           L_8001C238
    // 0x8001C22C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001C238;
    // 0x8001C22C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001C230: b           L_8001C238
    // 0x8001C234: nop

        goto L_8001C238;
    // 0x8001C234: nop

L_8001C238:
    // 0x8001C238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C23C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C240: jr          $ra
    // 0x8001C244: nop

    return;
    // 0x8001C244: nop

;}
RECOMP_FUNC void func_800293B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800293B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800293BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800293C0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800293C4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800293C8: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x800293CC: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x800293D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800293D4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800293D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800293DC: blez        $t6, L_80029474
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800293E0: nop
    
            goto L_80029474;
    }
    // 0x800293E0: nop

L_800293E4:
    // 0x800293E4: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800293E8: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800293EC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800293F0: jal         0x80067748
    // 0x800293F4: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x800293F4: nop

    after_0:
    // 0x800293F8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800293FC: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x80029400: nop

    // 0x80029404: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80029408: bne         $t8, $zero, L_80029420
    if (ctx->r24 != 0) {
        // 0x8002940C: nop
    
            goto L_80029420;
    }
    // 0x8002940C: nop

    // 0x80029410: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80029414: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80029418: b           L_80029474
    // 0x8002941C: nop

        goto L_80029474;
    // 0x8002941C: nop

L_80029420:
    // 0x80029420: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029424: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80029428: nop

    // 0x8002942C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80029430: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80029434: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80029438: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002943C: nop

    // 0x80029440: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80029444: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80029448: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8002944C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80029450: nop

    // 0x80029454: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80029458: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x8002945C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80029460: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80029464: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80029468: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8002946C: bne         $at, $zero, L_800293E4
    if (ctx->r1 != 0) {
        // 0x80029470: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_800293E4;
    }
    // 0x80029470: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
L_80029474:
    // 0x80029474: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80029478: nop

    // 0x8002947C: bne         $t3, $zero, L_8002949C
    if (ctx->r11 != 0) {
        // 0x80029480: nop
    
            goto L_8002949C;
    }
    // 0x80029480: nop

    // 0x80029484: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80029488: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002948C: bne         $t4, $at, L_8002949C
    if (ctx->r12 != ctx->r1) {
        // 0x80029490: nop
    
            goto L_8002949C;
    }
    // 0x80029490: nop

    // 0x80029494: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80029498: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_8002949C:
    // 0x8002949C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800294A0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800294A4: nop

    // 0x800294A8: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    // 0x800294AC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800294B0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800294B4: nop

    // 0x800294B8: swc1        $f16, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f16.u32l;
    // 0x800294BC: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800294C0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x800294C4: nop

    // 0x800294C8: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
    // 0x800294CC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800294D0: b           L_800294E0
    // 0x800294D4: nop

        goto L_800294E0;
    // 0x800294D4: nop

    // 0x800294D8: b           L_800294E0
    // 0x800294DC: nop

        goto L_800294E0;
    // 0x800294DC: nop

L_800294E0:
    // 0x800294E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800294E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800294E8: jr          $ra
    // 0x800294EC: nop

    return;
    // 0x800294EC: nop

;}
RECOMP_FUNC void func_800120FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800120FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80012100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012104: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80012108: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001210C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80012110: lw          $t7, 0x6C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X6C);
    // 0x80012114: nop

    // 0x80012118: sw          $t7, 0x5D5C($at)
    MEM_W(0X5D5C, ctx->r1) = ctx->r15;
    // 0x8001211C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80012120: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80012124: lw          $t9, 0x70($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X70);
    // 0x80012128: nop

    // 0x8001212C: sw          $t9, 0x5D60($at)
    MEM_W(0X5D60, ctx->r1) = ctx->r25;
    // 0x80012130: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80012134: lw          $t0, -0x5C2C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5C2C);
    // 0x80012138: nop

    // 0x8001213C: beq         $t0, $zero, L_80012154
    if (ctx->r8 == 0) {
        // 0x80012140: nop
    
            goto L_80012154;
    }
    // 0x80012140: nop

    // 0x80012144: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80012148: lw          $a0, -0x5C2C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5C2C);
    // 0x8001214C: jal         0x800309D0
    // 0x80012150: nop

    free_game(rdram, ctx);
        goto after_0;
    // 0x80012150: nop

    after_0:
L_80012154:
    // 0x80012154: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80012158: sw          $zero, -0x5C2C($at)
    MEM_W(-0X5C2C, ctx->r1) = 0;
    // 0x8001215C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80012160: sw          $zero, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = 0;
    // 0x80012164: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80012168: lw          $t1, 0x5D60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5D60);
    // 0x8001216C: nop

    // 0x80012170: beq         $t1, $zero, L_800122D8
    if (ctx->r9 == 0) {
        // 0x80012174: nop
    
            goto L_800122D8;
    }
    // 0x80012174: nop

    // 0x80012178: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8001217C: lw          $t2, 0x5D60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5D60);
    // 0x80012180: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80012184: sw          $zero, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = 0;
    // 0x80012188: blez        $t2, L_800121FC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8001218C: sw          $zero, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = 0;
            goto L_800121FC;
    }
    // 0x8001218C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80012190:
    // 0x80012190: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80012194: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80012198: lw          $t3, 0x5D5C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5D5C);
    // 0x8001219C: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x800121A0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800121A4: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x800121A8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800121AC: lw          $t8, 0x5D68($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5D68);
    // 0x800121B0: nop

    // 0x800121B4: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800121B8: beq         $at, $zero, L_800121E0
    if (ctx->r1 == 0) {
        // 0x800121BC: nop
    
            goto L_800121E0;
    }
    // 0x800121BC: nop

    // 0x800121C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800121C4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800121C8: lw          $t9, 0x5D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5D5C);
    // 0x800121CC: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x800121D0: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x800121D4: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x800121D8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800121DC: sw          $t4, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = ctx->r12;
L_800121E0:
    // 0x800121E0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800121E4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800121E8: lw          $t6, 0x5D60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5D60);
    // 0x800121EC: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x800121F0: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800121F4: bne         $at, $zero, L_80012190
    if (ctx->r1 != 0) {
        // 0x800121F8: sw          $t5, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r13;
            goto L_80012190;
    }
    // 0x800121F8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_800121FC:
    // 0x800121FC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80012200: lw          $t7, 0x5D68($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5D68);
    // 0x80012204: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80012208: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8001220C: sw          $t8, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = ctx->r24;
    // 0x80012210: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80012214: lw          $a0, 0x5D68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5D68);
    // 0x80012218: nop

    // 0x8001221C: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80012220: jal         0x8002FC34
    // 0x80012224: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    malloc_game(rdram, ctx);
        goto after_1;
    // 0x80012224: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x80012228: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001222C: sw          $v0, -0x5C2C($at)
    MEM_W(-0X5C2C, ctx->r1) = ctx->r2;
    // 0x80012230: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80012234: lw          $t9, 0x5D68($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5D68);
    // 0x80012238: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8001223C: blez        $t9, L_800122D8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80012240: nop
    
            goto L_800122D8;
    }
    // 0x80012240: nop

L_80012244:
    // 0x80012244: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80012248: lw          $t1, 0x5D60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5D60);
    // 0x8001224C: nop

    // 0x80012250: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80012254: bltz        $t2, L_800122A0
    if (SIGNED(ctx->r10) < 0) {
        // 0x80012258: sw          $t2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r10;
            goto L_800122A0;
    }
    // 0x80012258: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
L_8001225C:
    // 0x8001225C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80012260: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80012264: lw          $t4, 0x5D5C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5D5C);
    // 0x80012268: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8001226C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80012270: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80012274: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80012278: nop

    // 0x8001227C: bne         $t7, $t8, L_8001228C
    if (ctx->r15 != ctx->r24) {
        // 0x80012280: nop
    
            goto L_8001228C;
    }
    // 0x80012280: nop

    // 0x80012284: b           L_800122A0
    // 0x80012288: nop

        goto L_800122A0;
    // 0x80012288: nop

L_8001228C:
    // 0x8001228C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80012290: nop

    // 0x80012294: addiu       $t9, $t0, -0x1
    ctx->r25 = ADD32(ctx->r8, -0X1);
    // 0x80012298: bgez        $t9, L_8001225C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8001229C: sw          $t9, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r25;
            goto L_8001225C;
    }
    // 0x8001229C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_800122A0:
    // 0x800122A0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800122A4: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800122A8: lw          $t2, -0x5C2C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5C2C);
    // 0x800122AC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800122B0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800122B4: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800122B8: sw          $t1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r9;
    // 0x800122BC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800122C0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800122C4: lw          $t8, 0x5D68($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5D68);
    // 0x800122C8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800122CC: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800122D0: bne         $at, $zero, L_80012244
    if (ctx->r1 != 0) {
        // 0x800122D4: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80012244;
    }
    // 0x800122D4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_800122D8:
    // 0x800122D8: b           L_800122E0
    // 0x800122DC: nop

        goto L_800122E0;
    // 0x800122DC: nop

L_800122E0:
    // 0x800122E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800122E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800122E8: jr          $ra
    // 0x800122EC: nop

    return;
    // 0x800122EC: nop

;}
RECOMP_FUNC void func_80013948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013948: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001394C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013950: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80013954: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80013958: nop

    // 0x8001395C: lw          $t7, 0x6C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X6C);
    // 0x80013960: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80013964: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80013968: lw          $t8, 0x70($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X70);
    // 0x8001396C: nop

    // 0x80013970: blez        $t8, L_800139BC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80013974: nop
    
            goto L_800139BC;
    }
    // 0x80013974: nop

L_80013978:
    // 0x80013978: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001397C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80013980: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x80013984: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80013988: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8001398C: lw          $a1, 0x8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X8);
    // 0x80013990: jal         0x80013814
    // 0x80013994: nop

    func_80013814(rdram, ctx);
        goto after_0;
    // 0x80013994: nop

    after_0:
    // 0x80013998: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8001399C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800139A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800139A4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800139A8: lw          $t7, 0x70($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X70);
    // 0x800139AC: nop

    // 0x800139B0: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800139B4: bne         $at, $zero, L_80013978
    if (ctx->r1 != 0) {
        // 0x800139B8: nop
    
            goto L_80013978;
    }
    // 0x800139B8: nop

L_800139BC:
    // 0x800139BC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800139C0: nop

    // 0x800139C4: lw          $a0, 0x6C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X6C);
    // 0x800139C8: jal         0x800309D0
    // 0x800139CC: nop

    free_game(rdram, ctx);
        goto after_1;
    // 0x800139CC: nop

    after_1:
    // 0x800139D0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800139D4: nop

    // 0x800139D8: sw          $zero, 0x6C($t8)
    MEM_W(0X6C, ctx->r24) = 0;
    // 0x800139DC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800139E0: nop

    // 0x800139E4: sw          $zero, 0x70($t0)
    MEM_W(0X70, ctx->r8) = 0;
    // 0x800139E8: b           L_800139F0
    // 0x800139EC: nop

        goto L_800139F0;
    // 0x800139EC: nop

L_800139F0:
    // 0x800139F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800139F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800139F8: jr          $ra
    // 0x800139FC: nop

    return;
    // 0x800139FC: nop

;}
RECOMP_FUNC void alSeqpGetChlVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800348C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800348C4: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x800348C8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800348CC: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x800348D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800348D4: jr          $ra
    // 0x800348D8: lbu         $v0, 0x9($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X9);
    return;
    // 0x800348D8: lbu         $v0, 0x9($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X9);
;}
RECOMP_FUNC void func_80004458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004458: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x8000445C: lh          $v0, 0x2ED0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2ED0);
    // 0x80004460: nop

    // 0x80004464: bgez        $v0, L_80004474
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80004468: sra         $t6, $v0, 8
        ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
            goto L_80004474;
    }
    // 0x80004468: sra         $t6, $v0, 8
    ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8000446C: addiu       $at, $v0, 0xFF
    ctx->r1 = ADD32(ctx->r2, 0XFF);
    // 0x80004470: sra         $t6, $at, 8
    ctx->r14 = S32(SIGNED(ctx->r1) >> 8);
L_80004474:
    // 0x80004474: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80004478: sll         $t7, $v0, 24
    ctx->r15 = S32(ctx->r2 << 24);
    // 0x8000447C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80004480: sra         $t8, $v0, 24
    ctx->r24 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80004484: jr          $ra
    // 0x80004488: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x80004488: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8000448C: jr          $ra
    // 0x80004490: nop

    return;
    // 0x80004490: nop

    // 0x80004494: jr          $ra
    // 0x80004498: nop

    return;
    // 0x80004498: nop

;}
RECOMP_FUNC void alSynAddPlayer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EA30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EA34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EA38: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8003EA3C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8003EA40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003EA44: jal         0x80031F70
    // 0x8003EA48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8003EA48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003EA4C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8003EA50: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EA54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003EA58: lw          $t6, 0x20($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X20);
    // 0x8003EA5C: sw          $t6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r14;
    // 0x8003EA60: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x8003EA64: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8003EA68: jal         0x80031F70
    // 0x8003EA6C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x8003EA6C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    after_1:
    // 0x8003EA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EA78: jr          $ra
    // 0x8003EA7C: nop

    return;
    // 0x8003EA7C: nop

;}
RECOMP_FUNC void func_8000CF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CF40: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x8000CF44: lb          $v0, 0x2D7A($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X2D7A);
    // 0x8000CF48: jr          $ra
    // 0x8000CF4C: nop

    return;
    // 0x8000CF4C: nop

    // 0x8000CF50: jr          $ra
    // 0x8000CF54: nop

    return;
    // 0x8000CF54: nop

    // 0x8000CF58: jr          $ra
    // 0x8000CF5C: nop

    return;
    // 0x8000CF5C: nop

;}
RECOMP_FUNC void malloc_game(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FC34: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8002FC38: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x8002FC3C: lw          $v0, 0x7EC0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7EC0);
    // 0x8002FC40: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8002FC44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8002FC48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8002FC4C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8002FC50: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8002FC54: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002FC58: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8002FC5C: beq         $v0, $zero, L_8002FC74
    if (ctx->r2 == 0) {
        // 0x8002FC60: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_8002FC74;
    }
    // 0x8002FC60: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002FC64: jalr        $v0
    // 0x8002FC68: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8002FC68: nop

    after_0:
    // 0x8002FC6C: b           L_80030368
    // 0x8002FC70: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80030368;
    // 0x8002FC70: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8002FC74:
    // 0x8002FC74: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002FC78: lw          $t6, 0x7F48($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7F48);
    // 0x8002FC7C: nop

    // 0x8002FC80: bne         $t6, $zero, L_8002FCA4
    if (ctx->r14 != 0) {
        // 0x8002FC84: sltiu       $at, $s0, 0x8
        ctx->r1 = ctx->r16 < 0X8 ? 1 : 0;
            goto L_8002FCA4;
    }
    // 0x8002FC84: sltiu       $at, $s0, 0x8
    ctx->r1 = ctx->r16 < 0X8 ? 1 : 0;
    // 0x8002FC88: jal         0x8002F904
    // 0x8002FC8C: nop

    static_0_8002F904(rdram, ctx);
        goto after_1;
    // 0x8002FC8C: nop

    after_1:
    // 0x8002FC90: bne         $v0, $zero, L_8002FCA4
    if (ctx->r2 != 0) {
        // 0x8002FC94: sltiu       $at, $s0, 0x8
        ctx->r1 = ctx->r16 < 0X8 ? 1 : 0;
            goto L_8002FCA4;
    }
    // 0x8002FC94: sltiu       $at, $s0, 0x8
    ctx->r1 = ctx->r16 < 0X8 ? 1 : 0;
    // 0x8002FC98: b           L_80030364
    // 0x8002FC9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80030364;
    // 0x8002FC9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002FCA0: sltiu       $at, $s0, 0x8
    ctx->r1 = ctx->r16 < 0X8 ? 1 : 0;
L_8002FCA4:
    // 0x8002FCA4: beq         $at, $zero, L_8002FCB0
    if (ctx->r1 == 0) {
        // 0x8002FCA8: lui         $v1, 0x8005
        ctx->r3 = S32(0X8005 << 16);
            goto L_8002FCB0;
    }
    // 0x8002FCA8: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x8002FCAC: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
L_8002FCB0:
    // 0x8002FCB0: sltiu       $at, $s0, 0x801
    ctx->r1 = ctx->r16 < 0X801 ? 1 : 0;
    // 0x8002FCB4: beq         $at, $zero, L_8002FFD4
    if (ctx->r1 == 0) {
        // 0x8002FCB8: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8002FFD4;
    }
    // 0x8002FCB8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8002FCBC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8002FCC0: srl         $t7, $s0, 1
    ctx->r15 = S32(U32(ctx->r16) >> 1);
    // 0x8002FCC4: beq         $t7, $zero, L_8002FCDC
    if (ctx->r15 == 0) {
        // 0x8002FCC8: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_8002FCDC;
    }
    // 0x8002FCC8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_8002FCCC:
    // 0x8002FCCC: srl         $t8, $s0, 1
    ctx->r24 = S32(U32(ctx->r16) >> 1);
    // 0x8002FCD0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x8002FCD4: bne         $t8, $zero, L_8002FCCC
    if (ctx->r24 != 0) {
        // 0x8002FCD8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8002FCCC;
    }
    // 0x8002FCD8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8002FCDC:
    // 0x8002FCDC: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002FCE0: addiu       $t5, $t5, 0x7ED8
    ctx->r13 = ADD32(ctx->r13, 0X7ED8);
    // 0x8002FCE4: sll         $t9, $s1, 3
    ctx->r25 = S32(ctx->r17 << 3);
    // 0x8002FCE8: addu        $a1, $t9, $t5
    ctx->r5 = ADD32(ctx->r25, ctx->r13);
    // 0x8002FCEC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8002FCF0: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x8002FCF4: beq         $v0, $zero, L_8002FDF0
    if (ctx->r2 == 0) {
        // 0x8002FCF8: lui         $s4, 0x8005
        ctx->r20 = S32(0X8005 << 16);
            goto L_8002FDF0;
    }
    // 0x8002FCF8: lui         $s4, 0x8005
    ctx->r20 = S32(0X8005 << 16);
    // 0x8002FCFC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8002FD00: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8002FD04: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x8002FD08: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8002FD0C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8002FD10: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002FD14: beq         $v1, $zero, L_8002FD28
    if (ctx->r3 == 0) {
        // 0x8002FD18: lui         $t0, 0x8005
        ctx->r8 = S32(0X8005 << 16);
            goto L_8002FD28;
    }
    // 0x8002FD18: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002FD1C: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8002FD20: nop

    // 0x8002FD24: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
L_8002FD28:
    // 0x8002FD28: lw          $t9, 0x7EC4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7EC4);
    // 0x8002FD2C: addiu       $s4, $s4, 0x7EC8
    ctx->r20 = ADD32(ctx->r20, 0X7EC8);
    // 0x8002FD30: subu        $v1, $v0, $t9
    ctx->r3 = SUB32(ctx->r2, ctx->r25);
    // 0x8002FD34: bgez        $v1, L_8002FD44
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8002FD38: sra         $t5, $v1, 12
        ctx->r13 = S32(SIGNED(ctx->r3) >> 12);
            goto L_8002FD44;
    }
    // 0x8002FD38: sra         $t5, $v1, 12
    ctx->r13 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8002FD3C: addiu       $at, $v1, 0xFFF
    ctx->r1 = ADD32(ctx->r3, 0XFFF);
    // 0x8002FD40: sra         $t5, $at, 12
    ctx->r13 = S32(SIGNED(ctx->r1) >> 12);
L_8002FD44:
    // 0x8002FD44: addiu       $v1, $t5, 0x1
    ctx->r3 = ADD32(ctx->r13, 0X1);
    // 0x8002FD48: multu       $v1, $s3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002FD4C: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8002FD50: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x8002FD54: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002FD58: addiu       $t1, $t1, 0x7F3C
    ctx->r9 = ADD32(ctx->r9, 0X7F3C);
    // 0x8002FD5C: addiu       $v1, $v1, 0x7F44
    ctx->r3 = ADD32(ctx->r3, 0X7F44);
    // 0x8002FD60: addiu       $t0, $t0, 0x7F40
    ctx->r8 = ADD32(ctx->r8, 0X7F40);
    // 0x8002FD64: mflo        $a3
    ctx->r7 = lo;
    // 0x8002FD68: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    // 0x8002FD6C: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8002FD70: nop

    // 0x8002FD74: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8002FD78: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8002FD7C: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8002FD80: nop

    // 0x8002FD84: addu        $a0, $t9, $a3
    ctx->r4 = ADD32(ctx->r25, ctx->r7);
    // 0x8002FD88: lw          $t5, 0x4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X4);
    // 0x8002FD8C: nop

    // 0x8002FD90: beq         $t5, $zero, L_8002FDAC
    if (ctx->r13 == 0) {
        // 0x8002FD94: nop
    
            goto L_8002FDAC;
    }
    // 0x8002FD94: nop

    // 0x8002FD98: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8002FD9C: nop

    // 0x8002FDA0: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8002FDA4: srlv        $t8, $t7, $s1
    ctx->r24 = S32(U32(ctx->r15) >> (ctx->r17 & 31));
    // 0x8002FDA8: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
L_8002FDAC:
    // 0x8002FDAC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002FDB0: addiu       $a0, $a0, 0x7F38
    ctx->r4 = ADD32(ctx->r4, 0X7F38);
    // 0x8002FDB4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8002FDB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8002FDBC: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8002FDC0: sllv        $v0, $t6, $s1
    ctx->r2 = S32(ctx->r14 << (ctx->r17 & 31));
    // 0x8002FDC4: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8002FDC8: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x8002FDCC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8002FDD0: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8002FDD4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8002FDD8: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x8002FDDC: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x8002FDE0: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8002FDE4: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x8002FDE8: b           L_80030360
    // 0x8002FDEC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_80030360;
    // 0x8002FDEC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_8002FDF0:
    // 0x8002FDF0: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    // 0x8002FDF4: jal         0x8002FC34
    // 0x8002FDF8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    malloc_game(rdram, ctx);
        goto after_2;
    // 0x8002FDF8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_2:
    // 0x8002FDFC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8002FE00: bne         $v0, $zero, L_8002FE10
    if (ctx->r2 != 0) {
        // 0x8002FE04: or          $t3, $v0, $zero
        ctx->r11 = ctx->r2 | 0;
            goto L_8002FE10;
    }
    // 0x8002FE04: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x8002FE08: b           L_80030364
    // 0x8002FE0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80030364;
    // 0x8002FE0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002FE10:
    // 0x8002FE10: addiu       $t8, $zero, 0x1000
    ctx->r24 = ADD32(0, 0X1000);
    // 0x8002FE14: srav        $t4, $t8, $s1
    ctx->r12 = S32(SIGNED(ctx->r24) >> (ctx->r17 & 31));
    // 0x8002FE18: sltiu       $at, $t4, 0x2
    ctx->r1 = ctx->r12 < 0X2 ? 1 : 0;
    // 0x8002FE1C: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x8002FE20: bne         $at, $zero, L_8002FF1C
    if (ctx->r1 != 0) {
        // 0x8002FE24: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_8002FF1C;
    }
    // 0x8002FE24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8002FE28: addiu       $v1, $t0, -0x1
    ctx->r3 = ADD32(ctx->r8, -0X1);
    // 0x8002FE2C: andi        $t9, $v1, 0x3
    ctx->r25 = ctx->r3 & 0X3;
    // 0x8002FE30: beq         $t9, $zero, L_8002FE70
    if (ctx->r25 == 0) {
        // 0x8002FE34: addiu       $a3, $t9, 0x1
        ctx->r7 = ADD32(ctx->r25, 0X1);
            goto L_8002FE70;
    }
    // 0x8002FE34: addiu       $a3, $t9, 0x1
    ctx->r7 = ADD32(ctx->r25, 0X1);
    // 0x8002FE38: sllv        $t5, $a2, $s1
    ctx->r13 = S32(ctx->r6 << (ctx->r17 & 31));
L_8002FE3C:
    // 0x8002FE3C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8002FE40: addu        $v1, $v0, $t5
    ctx->r3 = ADD32(ctx->r2, ctx->r13);
    // 0x8002FE44: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8002FE48: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8002FE4C: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8002FE50: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8002FE54: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8002FE58: beq         $a0, $zero, L_8002FE64
    if (ctx->r4 == 0) {
        // 0x8002FE5C: nop
    
            goto L_8002FE64;
    }
    // 0x8002FE5C: nop

    // 0x8002FE60: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_8002FE64:
    // 0x8002FE64: bne         $a3, $a2, L_8002FE3C
    if (ctx->r7 != ctx->r6) {
        // 0x8002FE68: sllv        $t5, $a2, $s1
        ctx->r13 = S32(ctx->r6 << (ctx->r17 & 31));
            goto L_8002FE3C;
    }
    // 0x8002FE68: sllv        $t5, $a2, $s1
    ctx->r13 = S32(ctx->r6 << (ctx->r17 & 31));
    // 0x8002FE6C: beq         $a2, $t0, L_8002FF1C
    if (ctx->r6 == ctx->r8) {
        // 0x8002FE70: sllv        $t7, $a2, $s1
        ctx->r15 = S32(ctx->r6 << (ctx->r17 & 31));
            goto L_8002FF1C;
    }
L_8002FE70:
    // 0x8002FE70: sllv        $t7, $a2, $s1
    ctx->r15 = S32(ctx->r6 << (ctx->r17 & 31));
L_8002FE74:
    // 0x8002FE74: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8002FE78: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x8002FE7C: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8002FE80: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8002FE84: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8002FE88: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8002FE8C: addiu       $t9, $a2, 0x1
    ctx->r25 = ADD32(ctx->r6, 0X1);
    // 0x8002FE90: beq         $a0, $zero, L_8002FE9C
    if (ctx->r4 == 0) {
        // 0x8002FE94: sllv        $t5, $t9, $s1
        ctx->r13 = S32(ctx->r25 << (ctx->r17 & 31));
            goto L_8002FE9C;
    }
    // 0x8002FE94: sllv        $t5, $t9, $s1
    ctx->r13 = S32(ctx->r25 << (ctx->r17 & 31));
    // 0x8002FE98: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_8002FE9C:
    // 0x8002FE9C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8002FEA0: addu        $v1, $v0, $t5
    ctx->r3 = ADD32(ctx->r2, ctx->r13);
    // 0x8002FEA4: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8002FEA8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8002FEAC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8002FEB0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8002FEB4: addiu       $t7, $a2, 0x2
    ctx->r15 = ADD32(ctx->r6, 0X2);
    // 0x8002FEB8: beq         $a0, $zero, L_8002FEC4
    if (ctx->r4 == 0) {
        // 0x8002FEBC: sllv        $t8, $t7, $s1
        ctx->r24 = S32(ctx->r15 << (ctx->r17 & 31));
            goto L_8002FEC4;
    }
    // 0x8002FEBC: sllv        $t8, $t7, $s1
    ctx->r24 = S32(ctx->r15 << (ctx->r17 & 31));
    // 0x8002FEC0: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_8002FEC4:
    // 0x8002FEC4: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8002FEC8: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x8002FECC: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8002FED0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8002FED4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8002FED8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8002FEDC: addiu       $t5, $a2, 0x3
    ctx->r13 = ADD32(ctx->r6, 0X3);
    // 0x8002FEE0: beq         $a0, $zero, L_8002FEEC
    if (ctx->r4 == 0) {
        // 0x8002FEE4: sllv        $t6, $t5, $s1
        ctx->r14 = S32(ctx->r13 << (ctx->r17 & 31));
            goto L_8002FEEC;
    }
    // 0x8002FEE4: sllv        $t6, $t5, $s1
    ctx->r14 = S32(ctx->r13 << (ctx->r17 & 31));
    // 0x8002FEE8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_8002FEEC:
    // 0x8002FEEC: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8002FEF0: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x8002FEF4: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8002FEF8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8002FEFC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8002FF00: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8002FF04: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8002FF08: beq         $a0, $zero, L_8002FF14
    if (ctx->r4 == 0) {
        // 0x8002FF0C: nop
    
            goto L_8002FF14;
    }
    // 0x8002FF0C: nop

    // 0x8002FF10: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_8002FF14:
    // 0x8002FF14: bne         $a2, $t0, L_8002FE74
    if (ctx->r6 != ctx->r8) {
        // 0x8002FF18: sllv        $t7, $a2, $s1
        ctx->r15 = S32(ctx->r6 << (ctx->r17 & 31));
            goto L_8002FE74;
    }
    // 0x8002FF18: sllv        $t7, $a2, $s1
    ctx->r15 = S32(ctx->r6 << (ctx->r17 & 31));
L_8002FF1C:
    // 0x8002FF1C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002FF20: lw          $t8, 0x7EC4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7EC4);
    // 0x8002FF24: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x8002FF28: subu        $v1, $v0, $t8
    ctx->r3 = SUB32(ctx->r2, ctx->r24);
    // 0x8002FF2C: lui         $s4, 0x8005
    ctx->r20 = S32(0X8005 << 16);
    // 0x8002FF30: addiu       $s4, $s4, 0x7EC8
    ctx->r20 = ADD32(ctx->r20, 0X7EC8);
    // 0x8002FF34: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x8002FF38: addiu       $a0, $a2, -0x1
    ctx->r4 = ADD32(ctx->r6, -0X1);
    // 0x8002FF3C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002FF40: addiu       $t0, $t0, 0x7F40
    ctx->r8 = ADD32(ctx->r8, 0X7F40);
    // 0x8002FF44: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002FF48: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002FF4C: addiu       $t2, $t2, 0x7F44
    ctx->r10 = ADD32(ctx->r10, 0X7F44);
    // 0x8002FF50: addiu       $t1, $t1, 0x7F3C
    ctx->r9 = ADD32(ctx->r9, 0X7F3C);
    // 0x8002FF54: bgez        $v1, L_8002FF64
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8002FF58: sra         $t9, $v1, 12
        ctx->r25 = S32(SIGNED(ctx->r3) >> 12);
            goto L_8002FF64;
    }
    // 0x8002FF58: sra         $t9, $v1, 12
    ctx->r25 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8002FF5C: addiu       $at, $v1, 0xFFF
    ctx->r1 = ADD32(ctx->r3, 0XFFF);
    // 0x8002FF60: sra         $t9, $at, 12
    ctx->r25 = S32(SIGNED(ctx->r1) >> 12);
L_8002FF64:
    // 0x8002FF64: addiu       $v1, $t9, 0x1
    ctx->r3 = ADD32(ctx->r25, 0X1);
    // 0x8002FF68: multu       $v1, $s3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002FF6C: mflo        $a3
    ctx->r7 = lo;
    // 0x8002FF70: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x8002FF74: sw          $s1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r17;
    // 0x8002FF78: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8002FF7C: nop

    // 0x8002FF80: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x8002FF84: sw          $a0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r4;
    // 0x8002FF88: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8002FF8C: nop

    // 0x8002FF90: addu        $t5, $t9, $a3
    ctx->r13 = ADD32(ctx->r25, ctx->r7);
    // 0x8002FF94: sw          $a0, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r4;
    // 0x8002FF98: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x8002FF9C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002FFA0: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x8002FFA4: sllv        $t5, $t9, $s1
    ctx->r13 = S32(ctx->r25 << (ctx->r17 & 31));
    // 0x8002FFA8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8002FFAC: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x8002FFB0: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x8002FFB4: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x8002FFB8: subu        $a1, $t6, $t5
    ctx->r5 = SUB32(ctx->r14, ctx->r13);
    // 0x8002FFBC: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8002FFC0: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8002FFC4: subu        $t6, $t9, $a1
    ctx->r14 = SUB32(ctx->r25, ctx->r5);
    // 0x8002FFC8: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8002FFCC: b           L_80030360
    // 0x8002FFD0: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
        goto L_80030360;
    // 0x8002FFD0: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
L_8002FFD4:
    // 0x8002FFD4: lw          $v1, 0x7ED0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7ED0);
    // 0x8002FFD8: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x8002FFDC: multu       $v1, $s3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002FFE0: lui         $s4, 0x8005
    ctx->r20 = S32(0X8005 << 16);
    // 0x8002FFE4: addiu       $s4, $s4, 0x7EC8
    ctx->r20 = ADD32(ctx->r20, 0X7EC8);
    // 0x8002FFE8: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8002FFEC: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x8002FFF0: addiu       $s5, $s0, 0xFFF
    ctx->r21 = ADD32(ctx->r16, 0XFFF);
    // 0x8002FFF4: srl         $s2, $s5, 12
    ctx->r18 = S32(U32(ctx->r21) >> 12);
    // 0x8002FFF8: or          $s5, $s2, $zero
    ctx->r21 = ctx->r18 | 0;
    // 0x8002FFFC: mflo        $a3
    ctx->r7 = lo;
    // 0x80030000: addu        $a0, $v0, $a3
    ctx->r4 = ADD32(ctx->r2, ctx->r7);
    // 0x80030004: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x80030008: nop

    // 0x8003000C: sltu        $at, $a1, $s2
    ctx->r1 = ctx->r5 < ctx->r18 ? 1 : 0;
    // 0x80030010: beq         $at, $zero, L_800301A0
    if (ctx->r1 == 0) {
        // 0x80030014: nop
    
            goto L_800301A0;
    }
    // 0x80030014: nop

L_80030018:
    // 0x80030018: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8003001C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80030020: nop

    // 0x80030024: bne         $v1, $t7, L_80030180
    if (ctx->r3 != ctx->r15) {
        // 0x80030028: nop
    
            goto L_80030180;
    }
    // 0x80030028: nop

    // 0x8003002C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x80030030: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80030034: multu       $v1, $s3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030038: lw          $a0, 0x7ED4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7ED4);
    // 0x8003003C: mflo        $t8
    ctx->r24 = lo;
    // 0x80030040: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80030044: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x80030048: beq         $a0, $zero, L_800300EC
    if (ctx->r4 == 0) {
        // 0x8003004C: addu        $a2, $v1, $a1
        ctx->r6 = ADD32(ctx->r3, ctx->r5);
            goto L_800300EC;
    }
    // 0x8003004C: addu        $a2, $v1, $a1
    ctx->r6 = ADD32(ctx->r3, ctx->r5);
    // 0x80030050: bne         $a0, $a2, L_800300EC
    if (ctx->r4 != ctx->r6) {
        // 0x80030054: lui         $t9, 0x8005
        ctx->r25 = S32(0X8005 << 16);
            goto L_800300EC;
    }
    // 0x80030054: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80030058: lw          $t9, -0x58B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X58B0);
    // 0x8003005C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80030060: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x80030064: jalr        $t9
    // 0x80030068: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80030068: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_3:
    // 0x8003006C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80030070: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80030074: lw          $t7, 0x7EC4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7EC4);
    // 0x80030078: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8003007C: sll         $t5, $a2, 12
    ctx->r13 = S32(ctx->r6 << 12);
    // 0x80030080: addiu       $t6, $v0, 0x1000
    ctx->r14 = ADD32(ctx->r2, 0X1000);
    // 0x80030084: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80030088: bne         $t6, $t8, L_800300EC
    if (ctx->r14 != ctx->r24) {
        // 0x8003008C: subu        $s0, $s5, $a1
        ctx->r16 = SUB32(ctx->r21, ctx->r5);
            goto L_800300EC;
    }
    // 0x8003008C: subu        $s0, $s5, $a1
    ctx->r16 = SUB32(ctx->r21, ctx->r5);
    // 0x80030090: sll         $s1, $s0, 12
    ctx->r17 = S32(ctx->r16 << 12);
    // 0x80030094: jal         0x8002F9F8
    // 0x80030098: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_0_8002F9F8(rdram, ctx);
        goto after_4;
    // 0x80030098: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8003009C: beq         $v0, $zero, L_800300EC
    if (ctx->r2 == 0) {
        // 0x800300A0: nop
    
            goto L_800300EC;
    }
    // 0x800300A0: nop

    // 0x800300A4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x800300A8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800300AC: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x800300B0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800300B4: multu       $v1, $s3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800300B8: mflo        $t9
    ctx->r25 = lo;
    // 0x800300BC: addu        $a0, $v0, $t9
    ctx->r4 = ADD32(ctx->r2, ctx->r25);
    // 0x800300C0: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x800300C4: nop

    // 0x800300C8: addu        $t7, $t5, $s0
    ctx->r15 = ADD32(ctx->r13, ctx->r16);
    // 0x800300CC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800300D0: lw          $t6, 0x7F44($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7F44);
    // 0x800300D4: nop

    // 0x800300D8: addu        $t8, $t6, $s1
    ctx->r24 = ADD32(ctx->r14, ctx->r17);
    // 0x800300DC: sw          $t8, 0x7F44($at)
    MEM_W(0X7F44, ctx->r1) = ctx->r24;
    // 0x800300E0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x800300E4: b           L_80030180
    // 0x800300E8: nop

        goto L_80030180;
    // 0x800300E8: nop

L_800300EC:
    // 0x800300EC: sll         $s0, $s5, 12
    ctx->r16 = S32(ctx->r21 << 12);
    // 0x800300F0: jal         0x8002F9F8
    // 0x800300F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_0_8002F9F8(rdram, ctx);
        goto after_5;
    // 0x800300F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800300F8: bne         $v0, $zero, L_80030108
    if (ctx->r2 != 0) {
        // 0x800300FC: or          $t3, $v0, $zero
        ctx->r11 = ctx->r2 | 0;
            goto L_80030108;
    }
    // 0x800300FC: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x80030100: b           L_80030364
    // 0x80030104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80030364;
    // 0x80030104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80030108:
    // 0x80030108: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8003010C: lw          $t9, 0x7EC4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7EC4);
    // 0x80030110: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x80030114: subu        $v1, $t3, $t9
    ctx->r3 = SUB32(ctx->r11, ctx->r25);
    // 0x80030118: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8003011C: addiu       $a0, $a0, 0x7F38
    ctx->r4 = ADD32(ctx->r4, 0X7F38);
    // 0x80030120: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80030124: addiu       $t1, $t1, 0x7F3C
    ctx->r9 = ADD32(ctx->r9, 0X7F3C);
    // 0x80030128: bgez        $v1, L_80030138
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8003012C: sra         $t5, $v1, 12
        ctx->r13 = S32(SIGNED(ctx->r3) >> 12);
            goto L_80030138;
    }
    // 0x8003012C: sra         $t5, $v1, 12
    ctx->r13 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80030130: addiu       $at, $v1, 0xFFF
    ctx->r1 = ADD32(ctx->r3, 0XFFF);
    // 0x80030134: sra         $t5, $at, 12
    ctx->r13 = S32(SIGNED(ctx->r1) >> 12);
L_80030138:
    // 0x80030138: addiu       $v1, $t5, 0x1
    ctx->r3 = ADD32(ctx->r13, 0X1);
    // 0x8003013C: multu       $v1, $s3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030140: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80030144: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x80030148: mflo        $a3
    ctx->r7 = lo;
    // 0x8003014C: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x80030150: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x80030154: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x80030158: nop

    // 0x8003015C: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x80030160: sw          $s5, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r21;
    // 0x80030164: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80030168: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x8003016C: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80030170: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80030174: addu        $t8, $t6, $s0
    ctx->r24 = ADD32(ctx->r14, ctx->r16);
    // 0x80030178: b           L_80030364
    // 0x8003017C: sw          $t8, 0x7F3C($at)
    MEM_W(0X7F3C, ctx->r1) = ctx->r24;
        goto L_80030364;
    // 0x8003017C: sw          $t8, 0x7F3C($at)
    MEM_W(0X7F3C, ctx->r1) = ctx->r24;
L_80030180:
    // 0x80030180: multu       $v1, $s3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030184: mflo        $a3
    ctx->r7 = lo;
    // 0x80030188: addu        $a0, $v0, $a3
    ctx->r4 = ADD32(ctx->r2, ctx->r7);
    // 0x8003018C: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x80030190: nop

    // 0x80030194: sltu        $at, $a1, $s2
    ctx->r1 = ctx->r5 < ctx->r18 ? 1 : 0;
    // 0x80030198: bne         $at, $zero, L_80030018
    if (ctx->r1 != 0) {
        // 0x8003019C: nop
    
            goto L_80030018;
    }
    // 0x8003019C: nop

L_800301A0:
    // 0x800301A0: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800301A4: lw          $t5, 0x7EC4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7EC4);
    // 0x800301A8: sll         $t9, $v1, 12
    ctx->r25 = S32(ctx->r3 << 12);
    // 0x800301AC: sltu        $at, $s5, $a1
    ctx->r1 = ctx->r21 < ctx->r5 ? 1 : 0;
    // 0x800301B0: addu        $t3, $t9, $t5
    ctx->r11 = ADD32(ctx->r25, ctx->r13);
    // 0x800301B4: beq         $at, $zero, L_8003025C
    if (ctx->r1 == 0) {
        // 0x800301B8: addiu       $t3, $t3, -0x1000
        ctx->r11 = ADD32(ctx->r11, -0X1000);
            goto L_8003025C;
    }
    // 0x800301B8: addiu       $t3, $t3, -0x1000
    ctx->r11 = ADD32(ctx->r11, -0X1000);
    // 0x800301BC: addu        $t0, $v1, $s5
    ctx->r8 = ADD32(ctx->r3, ctx->r21);
    // 0x800301C0: multu       $t0, $s3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800301C4: subu        $t7, $a1, $s5
    ctx->r15 = SUB32(ctx->r5, ctx->r21);
    // 0x800301C8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800301CC: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x800301D0: mflo        $a0
    ctx->r4 = lo;
    // 0x800301D4: addu        $t6, $v0, $a0
    ctx->r14 = ADD32(ctx->r2, ctx->r4);
    // 0x800301D8: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x800301DC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x800301E0: nop

    // 0x800301E4: addu        $t8, $v0, $a3
    ctx->r24 = ADD32(ctx->r2, ctx->r7);
    // 0x800301E8: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x800301EC: addu        $t5, $v0, $a0
    ctx->r13 = ADD32(ctx->r2, ctx->r4);
    // 0x800301F0: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x800301F4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x800301F8: nop

    // 0x800301FC: addu        $t7, $v0, $a3
    ctx->r15 = ADD32(ctx->r2, ctx->r7);
    // 0x80030200: lw          $t6, 0x8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X8);
    // 0x80030204: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x80030208: sw          $t6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r14;
    // 0x8003020C: sw          $t0, 0x7ED0($at)
    MEM_W(0X7ED0, ctx->r1) = ctx->r8;
    // 0x80030210: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x80030214: lw          $a2, 0x7ED0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7ED0);
    // 0x80030218: addu        $t9, $v0, $a3
    ctx->r25 = ADD32(ctx->r2, ctx->r7);
    // 0x8003021C: lw          $t5, 0x4($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X4);
    // 0x80030220: nop

    // 0x80030224: multu       $t5, $s3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030228: mflo        $t7
    ctx->r15 = lo;
    // 0x8003022C: addu        $t6, $v0, $t7
    ctx->r14 = ADD32(ctx->r2, ctx->r15);
    // 0x80030230: sw          $a2, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r6;
    // 0x80030234: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x80030238: nop

    // 0x8003023C: addu        $t8, $v0, $a3
    ctx->r24 = ADD32(ctx->r2, ctx->r7);
    // 0x80030240: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80030244: nop

    // 0x80030248: multu       $t9, $s3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003024C: mflo        $t5
    ctx->r13 = lo;
    // 0x80030250: addu        $t7, $v0, $t5
    ctx->r15 = ADD32(ctx->r2, ctx->r13);
    // 0x80030254: b           L_800302C4
    // 0x80030258: sw          $a2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r6;
        goto L_800302C4;
    // 0x80030258: sw          $a2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r6;
L_8003025C:
    // 0x8003025C: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x80030260: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80030264: multu       $t8, $s3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030268: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8003026C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80030270: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80030274: addiu       $t0, $t0, 0x7F40
    ctx->r8 = ADD32(ctx->r8, 0X7F40);
    // 0x80030278: mflo        $t9
    ctx->r25 = lo;
    // 0x8003027C: addu        $t5, $v0, $t9
    ctx->r13 = ADD32(ctx->r2, ctx->r25);
    // 0x80030280: sw          $t6, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r14;
    // 0x80030284: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x80030288: nop

    // 0x8003028C: addu        $a0, $v0, $a3
    ctx->r4 = ADD32(ctx->r2, ctx->r7);
    // 0x80030290: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x80030294: nop

    // 0x80030298: sw          $t7, 0x7ED0($at)
    MEM_W(0X7ED0, ctx->r1) = ctx->r15;
    // 0x8003029C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800302A0: lw          $t8, 0x7ED0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7ED0);
    // 0x800302A4: multu       $t9, $s3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800302A8: mflo        $t6
    ctx->r14 = lo;
    // 0x800302AC: addu        $t5, $v0, $t6
    ctx->r13 = ADD32(ctx->r2, ctx->r14);
    // 0x800302B0: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x800302B4: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x800302B8: nop

    // 0x800302BC: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x800302C0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
L_800302C4:
    // 0x800302C4: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x800302C8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800302CC: addu        $t8, $t6, $a3
    ctx->r24 = ADD32(ctx->r14, ctx->r7);
    // 0x800302D0: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x800302D4: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x800302D8: addiu       $a0, $a0, 0x7F38
    ctx->r4 = ADD32(ctx->r4, 0X7F38);
    // 0x800302DC: addu        $t7, $t5, $a3
    ctx->r15 = ADD32(ctx->r13, ctx->r7);
    // 0x800302E0: sw          $s5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r21;
    // 0x800302E4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800302E8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800302EC: addiu       $t1, $t1, 0x7F3C
    ctx->r9 = ADD32(ctx->r9, 0X7F3C);
    // 0x800302F0: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x800302F4: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x800302F8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800302FC: sll         $s0, $s5, 12
    ctx->r16 = S32(ctx->r21 << 12);
    // 0x80030300: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80030304: lw          $t7, 0x7F44($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F44);
    // 0x80030308: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8003030C: addu        $t5, $t8, $s0
    ctx->r13 = ADD32(ctx->r24, ctx->r16);
    // 0x80030310: sw          $t5, 0x7F3C($at)
    MEM_W(0X7F3C, ctx->r1) = ctx->r13;
    // 0x80030314: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80030318: addiu       $s2, $s5, -0x1
    ctx->r18 = ADD32(ctx->r21, -0X1);
    // 0x8003031C: subu        $t9, $t7, $s0
    ctx->r25 = SUB32(ctx->r15, ctx->r16);
    // 0x80030320: beq         $s2, $zero, L_80030360
    if (ctx->r18 == 0) {
        // 0x80030324: sw          $t9, 0x7F44($at)
        MEM_W(0X7F44, ctx->r1) = ctx->r25;
            goto L_80030360;
    }
    // 0x80030324: sw          $t9, 0x7F44($at)
    MEM_W(0X7F44, ctx->r1) = ctx->r25;
    // 0x80030328: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x8003032C: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x80030330: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80030334:
    // 0x80030334: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x80030338: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8003033C: subu        $t5, $t5, $v1
    ctx->r13 = SUB32(ctx->r13, ctx->r3);
    // 0x80030340: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80030344: negu        $t6, $s2
    ctx->r14 = SUB32(0, ctx->r18);
    // 0x80030348: addu        $t7, $t8, $t5
    ctx->r15 = ADD32(ctx->r24, ctx->r13);
    // 0x8003034C: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x80030350: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80030354: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x80030358: bne         $s2, $zero, L_80030334
    if (ctx->r18 != 0) {
        // 0x8003035C: addiu       $v0, $v0, -0xC
        ctx->r2 = ADD32(ctx->r2, -0XC);
            goto L_80030334;
    }
    // 0x8003035C: addiu       $v0, $v0, -0xC
    ctx->r2 = ADD32(ctx->r2, -0XC);
L_80030360:
    // 0x80030360: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_80030364:
    // 0x80030364: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80030368:
    // 0x80030368: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003036C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80030370: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80030374: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80030378: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003037C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80030380: jr          $ra
    // 0x80030384: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80030384: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80001810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001818: lui         $t6, 0x1F
    ctx->r14 = S32(0X1F << 16);
    // 0x8000181C: lui         $t7, 0x1F
    ctx->r15 = S32(0X1F << 16);
    // 0x80001820: addiu       $t7, $t7, 0x6790
    ctx->r15 = ADD32(ctx->r15, 0X6790);
    // 0x80001824: addiu       $t6, $t6, 0x900
    ctx->r14 = ADD32(ctx->r14, 0X900);
    // 0x80001828: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000182C: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001830: jal         0x8000068C
    // 0x80001834: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001834: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001838: b           L_80001840
    // 0x8000183C: nop

        goto L_80001840;
    // 0x8000183C: nop

L_80001840:
    // 0x80001840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001848: jr          $ra
    // 0x8000184C: nop

    return;
    // 0x8000184C: nop

;}
RECOMP_FUNC void func_80025E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025E8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80025E90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025E94: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80025E98: addiu       $t6, $t6, 0x7450
    ctx->r14 = ADD32(ctx->r14, 0X7450);
    // 0x80025E9C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80025EA0: jal         0x8005FAA0
    // 0x80025EA4: addiu       $a1, $t6, 0x1FF
    ctx->r5 = ADD32(ctx->r14, 0X1FF);
    func_8005FAA0(rdram, ctx);
        goto after_0;
    // 0x80025EA4: addiu       $a1, $t6, 0x1FF
    ctx->r5 = ADD32(ctx->r14, 0X1FF);
    after_0:
    // 0x80025EA8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80025EAC: addiu       $t8, $t8, 0x4808
    ctx->r24 = ADD32(ctx->r24, 0X4808);
    // 0x80025EB0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80025EB4: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x80025EB8: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80025EBC: addiu       $t0, $t0, 0x4808
    ctx->r8 = ADD32(ctx->r8, 0X4808);
    // 0x80025EC0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80025EC4: sb          $t9, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r25;
    // 0x80025EC8: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80025ECC: addiu       $t2, $t2, 0x4808
    ctx->r10 = ADD32(ctx->r10, 0X4808);
    // 0x80025ED0: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80025ED4: sb          $t1, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r9;
    // 0x80025ED8: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80025EDC: addiu       $t4, $t4, 0x4808
    ctx->r12 = ADD32(ctx->r12, 0X4808);
    // 0x80025EE0: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80025EE4: sb          $t3, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r11;
    // 0x80025EE8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80025EEC: addiu       $t6, $t6, 0x4808
    ctx->r14 = ADD32(ctx->r14, 0X4808);
    // 0x80025EF0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80025EF4: sb          $t5, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r13;
    // 0x80025EF8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80025EFC: addiu       $t8, $t8, 0x4808
    ctx->r24 = ADD32(ctx->r24, 0X4808);
    // 0x80025F00: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80025F04: sb          $t7, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r15;
    // 0x80025F08: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80025F0C: addiu       $t0, $t0, 0x4808
    ctx->r8 = ADD32(ctx->r8, 0X4808);
    // 0x80025F10: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80025F14: sb          $t9, 0x6($t0)
    MEM_B(0X6, ctx->r8) = ctx->r25;
    // 0x80025F18: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80025F1C: addiu       $t2, $t2, 0x4808
    ctx->r10 = ADD32(ctx->r10, 0X4808);
    // 0x80025F20: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80025F24: sb          $t1, 0x7($t2)
    MEM_B(0X7, ctx->r10) = ctx->r9;
    // 0x80025F28: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80025F2C: addiu       $t4, $t4, 0x4808
    ctx->r12 = ADD32(ctx->r12, 0X4808);
    // 0x80025F30: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80025F34: sb          $t3, 0x8($t4)
    MEM_B(0X8, ctx->r12) = ctx->r11;
    // 0x80025F38: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80025F3C: addiu       $t6, $t6, 0x4808
    ctx->r14 = ADD32(ctx->r14, 0X4808);
    // 0x80025F40: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80025F44: sb          $t5, 0x9($t6)
    MEM_B(0X9, ctx->r14) = ctx->r13;
    // 0x80025F48: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80025F4C: addiu       $t8, $t8, 0x4808
    ctx->r24 = ADD32(ctx->r24, 0X4808);
    // 0x80025F50: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x80025F54: sb          $t7, 0xA($t8)
    MEM_B(0XA, ctx->r24) = ctx->r15;
    // 0x80025F58: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80025F5C: addiu       $t9, $t9, 0x4808
    ctx->r25 = ADD32(ctx->r25, 0X4808);
    // 0x80025F60: sb          $zero, 0xB($t9)
    MEM_B(0XB, ctx->r25) = 0;
    // 0x80025F64: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80025F68: addiu       $t1, $t1, 0x4808
    ctx->r9 = ADD32(ctx->r9, 0X4808);
    // 0x80025F6C: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80025F70: sb          $t0, 0xC($t1)
    MEM_B(0XC, ctx->r9) = ctx->r8;
    // 0x80025F74: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80025F78: addiu       $t3, $t3, 0x4808
    ctx->r11 = ADD32(ctx->r11, 0X4808);
    // 0x80025F7C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80025F80: sb          $t2, 0xD($t3)
    MEM_B(0XD, ctx->r11) = ctx->r10;
    // 0x80025F84: jal         0x800250A0
    // 0x80025F88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800250A0(rdram, ctx);
        goto after_1;
    // 0x80025F88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80025F8C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80025F90: addiu       $t4, $t4, 0x7450
    ctx->r12 = ADD32(ctx->r12, 0X7450);
    // 0x80025F94: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80025F98: jal         0x8005FAA0
    // 0x80025F9C: addiu       $a1, $t4, 0x1FF
    ctx->r5 = ADD32(ctx->r12, 0X1FF);
    func_8005FAA0(rdram, ctx);
        goto after_2;
    // 0x80025F9C: addiu       $a1, $t4, 0x1FF
    ctx->r5 = ADD32(ctx->r12, 0X1FF);
    after_2:
    // 0x80025FA0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80025FA4: addiu       $t6, $t6, 0x7450
    ctx->r14 = ADD32(ctx->r14, 0X7450);
    // 0x80025FA8: addiu       $t5, $zero, 0x23
    ctx->r13 = ADD32(0, 0X23);
    // 0x80025FAC: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80025FB0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80025FB4: addiu       $t8, $t8, 0x7450
    ctx->r24 = ADD32(ctx->r24, 0X7450);
    // 0x80025FB8: addiu       $t7, $zero, 0x45
    ctx->r15 = ADD32(0, 0X45);
    // 0x80025FBC: sb          $t7, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r15;
    // 0x80025FC0: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80025FC4: addiu       $t0, $t0, 0x7450
    ctx->r8 = ADD32(ctx->r8, 0X7450);
    // 0x80025FC8: addiu       $t9, $zero, 0x31
    ctx->r25 = ADD32(0, 0X31);
    // 0x80025FCC: sb          $t9, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r25;
    // 0x80025FD0: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80025FD4: addiu       $t2, $t2, 0x7450
    ctx->r10 = ADD32(ctx->r10, 0X7450);
    // 0x80025FD8: addiu       $t1, $zero, 0x42
    ctx->r9 = ADD32(0, 0X42);
    // 0x80025FDC: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
    // 0x80025FE0: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80025FE4: addiu       $t4, $t4, 0x7450
    ctx->r12 = ADD32(ctx->r12, 0X7450);
    // 0x80025FE8: addiu       $t3, $zero, 0x23
    ctx->r11 = ADD32(0, 0X23);
    // 0x80025FEC: sb          $t3, 0x4($t4)
    MEM_B(0X4, ctx->r12) = ctx->r11;
    // 0x80025FF0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80025FF4: addiu       $t6, $t6, 0x7450
    ctx->r14 = ADD32(ctx->r14, 0X7450);
    // 0x80025FF8: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x80025FFC: sb          $t5, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r13;
    // 0x80026000: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80026004: addiu       $t8, $t8, 0x7450
    ctx->r24 = ADD32(ctx->r24, 0X7450);
    // 0x80026008: addiu       $t7, $zero, 0x35
    ctx->r15 = ADD32(0, 0X35);
    // 0x8002600C: sb          $t7, 0x6($t8)
    MEM_B(0X6, ctx->r24) = ctx->r15;
    // 0x80026010: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80026014:
    // 0x80026014: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80026018:
    // 0x80026018: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8002601C:
    // 0x8002601C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80026020: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80026024: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80026028: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002602C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80026030: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80026034: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80026038: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002603C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80026040: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80026044: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80026048: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8002604C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80026050: addiu       $t9, $zero, 0x68
    ctx->r25 = ADD32(0, 0X68);
    // 0x80026054: sb          $t9, 0x4808($at)
    MEM_B(0X4808, ctx->r1) = ctx->r25;
    // 0x80026058: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8002605C: nop

    // 0x80026060: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80026064: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x80026068: bne         $at, $zero, L_8002601C
    if (ctx->r1 != 0) {
        // 0x8002606C: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_8002601C;
    }
    // 0x8002606C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80026070: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80026074: nop

    // 0x80026078: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x8002607C: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x80026080: bne         $at, $zero, L_80026018
    if (ctx->r1 != 0) {
        // 0x80026084: sw          $t2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r10;
            goto L_80026018;
    }
    // 0x80026084: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80026088: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8002608C: nop

    // 0x80026090: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80026094: slti        $at, $t3, 0x6
    ctx->r1 = SIGNED(ctx->r11) < 0X6 ? 1 : 0;
    // 0x80026098: bne         $at, $zero, L_80026014
    if (ctx->r1 != 0) {
        // 0x8002609C: sw          $t3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r11;
            goto L_80026014;
    }
    // 0x8002609C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x800260A0: jal         0x800251D4
    // 0x800260A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800251D4(rdram, ctx);
        goto after_3;
    // 0x800260A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800260A8: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x800260AC: addiu       $t4, $t4, 0x4808
    ctx->r12 = ADD32(ctx->r12, 0X4808);
    // 0x800260B0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x800260B4: jal         0x8005FAA0
    // 0x800260B8: addiu       $a1, $t4, 0xBA
    ctx->r5 = ADD32(ctx->r12, 0XBA);
    func_8005FAA0(rdram, ctx);
        goto after_4;
    // 0x800260B8: addiu       $a1, $t4, 0xBA
    ctx->r5 = ADD32(ctx->r12, 0XBA);
    after_4:
    // 0x800260BC: b           L_800260C4
    // 0x800260C0: nop

        goto L_800260C4;
    // 0x800260C0: nop

L_800260C4:
    // 0x800260C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800260C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800260CC: jr          $ra
    // 0x800260D0: nop

    return;
    // 0x800260D0: nop

;}
RECOMP_FUNC void func_8002894C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002894C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80028950: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80028954: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x80028958: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x8002895C: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x80028960: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80028964: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x80028968: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8002896C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80028970: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80028974: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80028978: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002897C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80028980: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80028984: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80028988: sw          $t9, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r25;
    // 0x8002898C: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x80028990: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80028994: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80028998: nop

    // 0x8002899C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800289A0: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x800289A4: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x800289A8: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x800289AC: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800289B0: nop

    // 0x800289B4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800289B8: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    // 0x800289BC: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x800289C0: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x800289C4: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800289C8: nop

    // 0x800289CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800289D0: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x800289D4: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x800289D8: nop

    // 0x800289DC: lwc1        $f10, 0x24($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X24);
    // 0x800289E0: nop

    // 0x800289E4: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x800289E8: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x800289EC: nop

    // 0x800289F0: lwc1        $f16, 0x28($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800289F4: nop

    // 0x800289F8: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x800289FC: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80028A00: nop

    // 0x80028A04: lwc1        $f18, 0x2C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80028A08: nop

    // 0x80028A0C: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x80028A10: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80028A14: lwc1        $f14, 0x9C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80028A18: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x80028A1C: jal         0x80067748
    // 0x80028A20: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x80028A20: nop

    after_0:
    // 0x80028A24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80028A28: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x80028A2C: nop

    // 0x80028A30: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80028A34: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x80028A38: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x80028A3C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80028A40: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x80028A44: nop

    // 0x80028A48: sb          $t9, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r25;
    // 0x80028A4C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80028A50: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80028A54: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80028A58: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80028A5C: lw          $t2, 0x76F0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X76F0);
    // 0x80028A60: nop

    // 0x80028A64: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x80028A68: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x80028A6C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80028A70: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80028A74: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80028A78: lw          $t5, 0x7700($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7700);
    // 0x80028A7C: nop

    // 0x80028A80: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x80028A84: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x80028A88: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80028A8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80028A90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80028A94: lw          $t8, 0x7710($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7710);
    // 0x80028A98: nop

    // 0x80028A9C: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x80028AA0: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80028AA4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80028AA8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80028AAC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80028AB0: lw          $t1, 0x7720($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7720);
    // 0x80028AB4: nop

    // 0x80028AB8: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x80028ABC: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80028AC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80028AC4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80028AC8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80028ACC: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80028AD0: nop

    // 0x80028AD4: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x80028AD8: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x80028ADC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80028AE0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80028AE4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80028AE8: lw          $t6, 0x7730($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7730);
    // 0x80028AEC: nop

    // 0x80028AF0: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x80028AF4: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x80028AF8: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80028AFC: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80028B00: jal         0x80015634
    // 0x80028B04: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_1;
    // 0x80028B04: nop

    after_1:
    // 0x80028B08: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x80028B0C: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_80028B10:
    // 0x80028B10: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80028B14: nop

    // 0x80028B18: bne         $t7, $zero, L_80028B3C
    if (ctx->r15 != 0) {
        // 0x80028B1C: nop
    
            goto L_80028B3C;
    }
    // 0x80028B1C: nop

    // 0x80028B20: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80028B24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80028B28: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80028B2C: nop

    // 0x80028B30: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80028B34: b           L_80028B70
    // 0x80028B38: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
        goto L_80028B70;
    // 0x80028B38: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
L_80028B3C:
    // 0x80028B3C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80028B40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80028B44: bne         $t8, $at, L_80028B58
    if (ctx->r24 != ctx->r1) {
        // 0x80028B48: nop
    
            goto L_80028B58;
    }
    // 0x80028B48: nop

    // 0x80028B4C: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80028B50: b           L_80028B70
    // 0x80028B54: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
        goto L_80028B70;
    // 0x80028B54: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
L_80028B58:
    // 0x80028B58: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80028B5C: lwc1        $f4, -0x4238($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4238);
    // 0x80028B60: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80028B64: nop

    // 0x80028B68: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80028B6C: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
L_80028B70:
    // 0x80028B70: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80028B74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80028B78: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80028B7C: nop

    // 0x80028B80: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80028B84: nop

    // 0x80028B88: bc1f        L_80028BA8
    if (!c1cs) {
        // 0x80028B8C: nop
    
            goto L_80028BA8;
    }
    // 0x80028B8C: nop

    // 0x80028B90: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80028B94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80028B98: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80028B9C: nop

    // 0x80028BA0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80028BA4: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
L_80028BA8:
    // 0x80028BA8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80028BAC: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80028BB0: lwc1        $f11, -0x4230($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X4230);
    // 0x80028BB4: lwc1        $f10, -0x422C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X422C);
    // 0x80028BB8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80028BBC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80028BC0: jal         0x80034970
    // 0x80028BC4: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80028BC4: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x80028BC8: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80028BCC: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80028BD0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80028BD4: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80028BD8: nop

    // 0x80028BDC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80028BE0: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80028BE4: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x80028BE8: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80028BEC: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80028BF0: nop

    // 0x80028BF4: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80028BF8: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x80028BFC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80028C00: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80028C04: lwc1        $f17, -0x4228($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4228);
    // 0x80028C08: lwc1        $f16, -0x4224($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4224);
    // 0x80028C0C: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x80028C10: mul.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f16.d);
    // 0x80028C14: jal         0x80036570
    // 0x80028C18: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80028C18: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x80028C1C: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80028C20: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80028C24: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80028C28: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80028C2C: nop

    // 0x80028C30: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80028C34: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80028C38: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x80028C3C: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80028C40: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80028C44: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x80028C48: jal         0x80067748
    // 0x80028C4C: nop

    func_80067748(rdram, ctx);
        goto after_4;
    // 0x80028C4C: nop

    after_4:
    // 0x80028C50: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80028C54: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x80028C58: nop

    // 0x80028C5C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80028C60: bne         $t0, $zero, L_80028D4C
    if (ctx->r8 != 0) {
        // 0x80028C64: nop
    
            goto L_80028D4C;
    }
    // 0x80028C64: nop

    // 0x80028C68: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80028C6C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80028C70: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80028C74: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x80028C78: sra         $t4, $t3, 31
    ctx->r12 = S32(SIGNED(ctx->r11) >> 31);
    // 0x80028C7C: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x80028C80: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80028C84: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x80028C88: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80028C8C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80028C90: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80028C94: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80028C98: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80028C9C: addiu       $t7, $t7, 0x76F0
    ctx->r15 = ADD32(ctx->r15, 0X76F0);
    // 0x80028CA0: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80028CA4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80028CA8: sra         $a0, $t1, 31
    ctx->r4 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80028CAC: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x80028CB0: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80028CB4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80028CB8: sra         $t2, $t0, 31
    ctx->r10 = S32(SIGNED(ctx->r8) >> 31);
    // 0x80028CBC: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x80028CC0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80028CC4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80028CC8: addiu       $t1, $t1, 0x7700
    ctx->r9 = ADD32(ctx->r9, 0X7700);
    // 0x80028CCC: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x80028CD0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80028CD4: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x80028CD8: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80028CDC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80028CE0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80028CE4: addiu       $t5, $t5, 0x7710
    ctx->r13 = ADD32(ctx->r13, 0X7710);
    // 0x80028CE8: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x80028CEC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80028CF0: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x80028CF4: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80028CF8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80028CFC: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80028D00: addiu       $t9, $t9, 0x7720
    ctx->r25 = ADD32(ctx->r25, 0X7720);
    // 0x80028D04: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x80028D08: nop

    // 0x80028D0C: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x80028D10: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80028D14: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80028D18: jal         0x8001608C
    // 0x80028D1C: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    Math_ComparePlanes(rdram, ctx);
        goto after_5;
    // 0x80028D1C: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    after_5:
    // 0x80028D20: bne         $v0, $zero, L_80028D44
    if (ctx->r2 != 0) {
        // 0x80028D24: nop
    
            goto L_80028D44;
    }
    // 0x80028D24: nop

    // 0x80028D28: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80028D2C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80028D30: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80028D34: addiu       $t6, $t3, 0x3
    ctx->r14 = ADD32(ctx->r11, 0X3);
    // 0x80028D38: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x80028D3C: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x80028D40: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
L_80028D44:
    // 0x80028D44: b           L_80028E24
    // 0x80028D48: nop

        goto L_80028E24;
    // 0x80028D48: nop

L_80028D4C:
    // 0x80028D4C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80028D50: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80028D54: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80028D58: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80028D5C: sra         $a0, $t9, 31
    ctx->r4 = S32(SIGNED(ctx->r25) >> 31);
    // 0x80028D60: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80028D64: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x80028D68: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80028D6C: or          $t9, $t5, $zero
    ctx->r25 = ctx->r13 | 0;
    // 0x80028D70: sra         $t8, $t5, 31
    ctx->r24 = S32(SIGNED(ctx->r13) >> 31);
    // 0x80028D74: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80028D78: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80028D7C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80028D80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80028D84: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80028D88: addiu       $t3, $t3, 0x76F0
    ctx->r11 = ADD32(ctx->r11, 0X76F0);
    // 0x80028D8C: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x80028D90: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x80028D94: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80028D98: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80028D9C: sra         $t2, $t0, 31
    ctx->r10 = S32(SIGNED(ctx->r8) >> 31);
    // 0x80028DA0: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x80028DA4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80028DA8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80028DAC: addiu       $t1, $t1, 0x7700
    ctx->r9 = ADD32(ctx->r9, 0X7700);
    // 0x80028DB0: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x80028DB4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80028DB8: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x80028DBC: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80028DC0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80028DC4: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80028DC8: addiu       $t5, $t5, 0x7710
    ctx->r13 = ADD32(ctx->r13, 0X7710);
    // 0x80028DCC: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x80028DD0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80028DD4: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x80028DD8: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80028DDC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80028DE0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80028DE4: addiu       $t9, $t9, 0x7720
    ctx->r25 = ADD32(ctx->r25, 0X7720);
    // 0x80028DE8: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x80028DEC: nop

    // 0x80028DF0: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x80028DF4: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80028DF8: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80028DFC: jal         0x8001608C
    // 0x80028E00: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    Math_ComparePlanes(rdram, ctx);
        goto after_6;
    // 0x80028E00: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    after_6:
    // 0x80028E04: bne         $v0, $zero, L_80028E24
    if (ctx->r2 != 0) {
        // 0x80028E08: nop
    
            goto L_80028E24;
    }
    // 0x80028E08: nop

    // 0x80028E0C: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80028E10: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80028E14: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80028E18: sllv        $t7, $t6, $t3
    ctx->r15 = S32(ctx->r14 << (ctx->r11 & 31));
    // 0x80028E1C: or          $t0, $t7, $t8
    ctx->r8 = ctx->r15 | ctx->r24;
    // 0x80028E20: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
L_80028E24:
    // 0x80028E24: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80028E28: nop

    // 0x80028E2C: addiu       $t9, $t1, 0x1
    ctx->r25 = ADD32(ctx->r9, 0X1);
    // 0x80028E30: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x80028E34: bne         $at, $zero, L_80028B10
    if (ctx->r1 != 0) {
        // 0x80028E38: sw          $t9, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r25;
            goto L_80028B10;
    }
    // 0x80028E38: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80028E3C: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x80028E40: b           L_80028E50
    // 0x80028E44: nop

        goto L_80028E50;
    // 0x80028E44: nop

    // 0x80028E48: b           L_80028E50
    // 0x80028E4C: nop

        goto L_80028E50;
    // 0x80028E4C: nop

L_80028E50:
    // 0x80028E50: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80028E54: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x80028E58: jr          $ra
    // 0x80028E5C: nop

    return;
    // 0x80028E5C: nop

;}
RECOMP_FUNC void guLookAt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037188: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8003718C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80037190: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80037194: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80037198: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8003719C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800371A0: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800371A4: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800371A8: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800371AC: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800371B0: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800371B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800371B8: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x800371BC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800371C0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800371C4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800371C8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800371CC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x800371D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800371D4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x800371D8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x800371DC: jal         0x80036ED0
    // 0x800371E0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    guLookAtF(rdram, ctx);
        goto after_0;
    // 0x800371E0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800371E4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800371E8: jal         0x800360F0
    // 0x800371EC: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x800371EC: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    after_1:
    // 0x800371F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800371F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x800371F8: jr          $ra
    // 0x800371FC: nop

    return;
    // 0x800371FC: nop

;}
RECOMP_FUNC void ctoi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014414: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80014418: slti        $at, $a0, 0x61
    ctx->r1 = SIGNED(ctx->r4) < 0X61 ? 1 : 0;
    // 0x8001441C: bne         $at, $zero, L_80014430
    if (ctx->r1 != 0) {
        // 0x80014420: nop
    
            goto L_80014430;
    }
    // 0x80014420: nop

    // 0x80014424: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x80014428: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8001442C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_80014430:
    // 0x80014430: slti        $at, $a0, 0x41
    ctx->r1 = SIGNED(ctx->r4) < 0X41 ? 1 : 0;
    // 0x80014434: bne         $at, $zero, L_80014444
    if (ctx->r1 != 0) {
        // 0x80014438: nop
    
            goto L_80014444;
    }
    // 0x80014438: nop

    // 0x8001443C: jr          $ra
    // 0x80014440: addiu       $v0, $a0, -0x37
    ctx->r2 = ADD32(ctx->r4, -0X37);
    return;
    // 0x80014440: addiu       $v0, $a0, -0x37
    ctx->r2 = ADD32(ctx->r4, -0X37);
L_80014444:
    // 0x80014444: jr          $ra
    // 0x80014448: addiu       $v0, $a0, -0x30
    ctx->r2 = ADD32(ctx->r4, -0X30);
    return;
    // 0x80014448: addiu       $v0, $a0, -0x30
    ctx->r2 = ADD32(ctx->r4, -0X30);
    // 0x8001444C: jr          $ra
    // 0x80014450: nop

    return;
    // 0x80014450: nop

    // 0x80014454: jr          $ra
    // 0x80014458: nop

    return;
    // 0x80014458: nop

;}
RECOMP_FUNC void __initFromBank(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CE84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003CE88: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003CE8C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8003CE90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003CE94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003CE98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003CE9C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8003CEA0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8003CEA4: lw          $s1, 0xC($v0)
    ctx->r17 = MEM_W(ctx->r2, 0XC);
L_8003CEA8:
    // 0x8003CEA8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8003CEAC: beql        $s1, $zero, L_8003CEA8
    if (ctx->r17 == 0) {
        // 0x8003CEB0: lw          $s1, 0xC($v0)
        ctx->r17 = MEM_W(ctx->r2, 0XC);
            goto L_8003CEA8;
    }
    goto skip_0;
    // 0x8003CEB0: lw          $s1, 0xC($v0)
    ctx->r17 = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x8003CEB4: lbu         $t6, 0x34($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X34);
    // 0x8003CEB8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003CEBC: blez        $t6, L_8003CEF0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8003CEC0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8003CEF0;
    }
    // 0x8003CEC0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8003CEC4:
    // 0x8003CEC4: jal         0x8003CE04
    // 0x8003CEC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    __resetPerfChanState(rdram, ctx);
        goto after_0;
    // 0x8003CEC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8003CECC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8003CED0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003CED4: jal         0x8003CDB0
    // 0x8003CED8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    __setInstChanState(rdram, ctx);
        goto after_1;
    // 0x8003CED8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x8003CEDC: lbu         $t7, 0x34($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X34);
    // 0x8003CEE0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003CEE4: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8003CEE8: bnel        $at, $zero, L_8003CEC4
    if (ctx->r1 != 0) {
        // 0x8003CEEC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8003CEC4;
    }
    goto skip_1;
    // 0x8003CEEC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
L_8003CEF0:
    // 0x8003CEF0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8003CEF4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8003CEF8: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8003CEFC: beql        $t9, $zero, L_8003CF24
    if (ctx->r25 == 0) {
        // 0x8003CF00: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8003CF24;
    }
    goto skip_2;
    // 0x8003CF00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x8003CF04: jal         0x8003CE04
    // 0x8003CF08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    __resetPerfChanState(rdram, ctx);
        goto after_2;
    // 0x8003CF08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8003CF0C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8003CF10: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8003CF14: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8003CF18: jal         0x8003CDB0
    // 0x8003CF1C: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    __setInstChanState(rdram, ctx);
        goto after_3;
    // 0x8003CF1C: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    after_3:
    // 0x8003CF20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8003CF24:
    // 0x8003CF24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003CF28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003CF2C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003CF30: jr          $ra
    // 0x8003CF34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003CF34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void alHeapDBAlloc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035870: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80035874: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80035878: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003587C: multu       $a3, $t6
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035880: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x80035884: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80035888: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x8003588C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80035890: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80035894: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80035898: mflo        $v0
    ctx->r2 = lo;
    // 0x8003589C: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x800358A0: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x800358A4: addu        $t1, $a0, $t7
    ctx->r9 = ADD32(ctx->r4, ctx->r15);
    // 0x800358A8: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x800358AC: bne         $at, $zero, L_800358BC
    if (ctx->r1 != 0) {
        // 0x800358B0: addu        $t2, $a0, $t7
        ctx->r10 = ADD32(ctx->r4, ctx->r15);
            goto L_800358BC;
    }
    // 0x800358B0: addu        $t2, $a0, $t7
    ctx->r10 = ADD32(ctx->r4, ctx->r15);
    // 0x800358B4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800358B8: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
L_800358BC:
    // 0x800358BC: jr          $ra
    // 0x800358C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800358C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8001B8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B8D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001B8DC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B8E0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001B8E4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B8E8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001B8EC: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8001B8F0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001B8F4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8001B8F8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001B8FC: lh          $t9, 0x4298($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4298);
    // 0x8001B900: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001B904: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001B908: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8001B90C: lbu         $v0, -0x3D62($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3D62);
    // 0x8001B910: nop

    // 0x8001B914: andi        $t1, $v0, 0x8
    ctx->r9 = ctx->r2 & 0X8;
    // 0x8001B918: jr          $ra
    // 0x8001B91C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8001B91C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8001B920: jr          $ra
    // 0x8001B924: nop

    return;
    // 0x8001B924: nop

    // 0x8001B928: jr          $ra
    // 0x8001B92C: nop

    return;
    // 0x8001B92C: nop

;}
RECOMP_FUNC void func_80001CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001CF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80001CF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80001CF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80001CFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80001D00: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80001D04: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80001D08: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80001D0C: nop

    // 0x80001D10: sw          $zero, 0x274($t6)
    MEM_W(0X274, ctx->r14) = 0;
    // 0x80001D14: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80001D18: nop

    // 0x80001D1C: sw          $zero, 0x278($t7)
    MEM_W(0X278, ctx->r15) = 0;
    // 0x80001D20: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80001D24: nop

    // 0x80001D28: sw          $zero, 0x260($t8)
    MEM_W(0X260, ctx->r24) = 0;
    // 0x80001D2C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80001D30: nop

    // 0x80001D34: sw          $zero, 0x27C($t9)
    MEM_W(0X27C, ctx->r25) = 0;
    // 0x80001D38: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80001D3C: nop

    // 0x80001D40: sw          $zero, 0x264($t0)
    MEM_W(0X264, ctx->r8) = 0;
    // 0x80001D44: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80001D48: nop

    // 0x80001D4C: sw          $zero, 0x268($t1)
    MEM_W(0X268, ctx->r9) = 0;
    // 0x80001D50: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80001D54: nop

    // 0x80001D58: sw          $zero, 0x26C($t2)
    MEM_W(0X26C, ctx->r10) = 0;
    // 0x80001D5C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80001D60: nop

    // 0x80001D64: sw          $zero, 0x270($t3)
    MEM_W(0X270, ctx->r11) = 0;
    // 0x80001D68: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80001D6C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80001D70: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x80001D74: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80001D78: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80001D7C: sh          $t6, 0x20($t7)
    MEM_H(0X20, ctx->r15) = ctx->r14;
    // 0x80001D80: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80001D84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80001D88: addiu       $a0, $t8, 0x40
    ctx->r4 = ADD32(ctx->r24, 0X40);
    // 0x80001D8C: jal         0x800319C0
    // 0x80001D90: addiu       $a1, $t8, 0x58
    ctx->r5 = ADD32(ctx->r24, 0X58);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80001D90: addiu       $a1, $t8, 0x58
    ctx->r5 = ADD32(ctx->r24, 0X58);
    after_0:
    // 0x80001D94: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80001D98: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80001D9C: addiu       $a0, $t9, 0x78
    ctx->r4 = ADD32(ctx->r25, 0X78);
    // 0x80001DA0: jal         0x800319C0
    // 0x80001DA4: addiu       $a1, $t9, 0x90
    ctx->r5 = ADD32(ctx->r25, 0X90);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80001DA4: addiu       $a1, $t9, 0x90
    ctx->r5 = ADD32(ctx->r25, 0X90);
    after_1:
    // 0x80001DA8: jal         0x80031AC0
    // 0x80001DAC: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    osCreateViManager_recomp(rdram, ctx);
        goto after_2;
    // 0x80001DAC: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_2:
    // 0x80001DB0: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x80001DB4: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80001DB8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80001DBC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80001DC0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80001DC4: addiu       $t2, $t2, -0x5890
    ctx->r10 = ADD32(ctx->r10, -0X5890);
    // 0x80001DC8: jal         0x80031E20
    // 0x80001DCC: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    osViSetMode_recomp(rdram, ctx);
        goto after_3;
    // 0x80001DCC: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    after_3:
    // 0x80001DD0: jal         0x80031A50
    // 0x80001DD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_4;
    // 0x80001DD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80001DD8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80001DDC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80001DE0: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    // 0x80001DE4: jal         0x80031E90
    // 0x80001DE8: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80001DE8: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_5:
    // 0x80001DEC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80001DF0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80001DF4: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    // 0x80001DF8: jal         0x80031E90
    // 0x80001DFC: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x80001DFC: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_6:
    // 0x80001E00: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80001E04: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80001E08: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    // 0x80001E0C: jal         0x80031E90
    // 0x80001E10: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x80001E10: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_7:
    // 0x80001E14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80001E18: lbu         $a2, 0x33($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X33);
    // 0x80001E1C: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    // 0x80001E20: jal         0x80031F00
    // 0x80001E24: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    osViSetEvent_recomp(rdram, ctx);
        goto after_8;
    // 0x80001E24: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_8:
    // 0x80001E28: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80001E2C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80001E30: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80001E34: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80001E38: addiu       $a2, $a2, 0x1FF4
    ctx->r6 = ADD32(ctx->r6, 0X1FF4);
    // 0x80001E3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80001E40: addiu       $a0, $t3, 0xB0
    ctx->r4 = ADD32(ctx->r11, 0XB0);
    // 0x80001E44: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x80001E48: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80001E4C: jal         0x800310B0
    // 0x80001E50: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    osCreateThread_recomp(rdram, ctx);
        goto after_9;
    // 0x80001E50: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_9:
    // 0x80001E54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80001E58: jal         0x80031200
    // 0x80001E5C: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    osStartThread_recomp(rdram, ctx);
        goto after_10;
    // 0x80001E5C: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    after_10:
    // 0x80001E60: b           L_80001E68
    // 0x80001E64: nop

        goto L_80001E68;
    // 0x80001E64: nop

L_80001E68:
    // 0x80001E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80001E6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80001E70: jr          $ra
    // 0x80001E74: nop

    return;
    // 0x80001E74: nop

;}
RECOMP_FUNC void func_8001EC6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EC6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EC70: sw          $zero, -0x1F58($at)
    MEM_W(-0X1F58, ctx->r1) = 0;
    // 0x8001EC74: jr          $ra
    // 0x8001EC78: nop

    return;
    // 0x8001EC78: nop

    // 0x8001EC7C: jr          $ra
    // 0x8001EC80: nop

    return;
    // 0x8001EC80: nop

;}
RECOMP_FUNC void func_8001838C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001838C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80018390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018394: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80018398: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8001839C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800183A0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800183A4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800183A8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800183AC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800183B0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x800183B4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800183B8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800183BC: lui         $t0, 0x100
    ctx->r8 = S32(0X100 << 16);
    // 0x800183C0: addiu       $t0, $t0, 0xCB0
    ctx->r8 = ADD32(ctx->r8, 0XCB0);
    // 0x800183C4: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x800183C8: jal         0x800181F0
    // 0x800183CC: nop

    func_800181F0(rdram, ctx);
        goto after_0;
    // 0x800183CC: nop

    after_0:
    // 0x800183D0: b           L_800183D8
    // 0x800183D4: nop

        goto L_800183D8;
    // 0x800183D4: nop

L_800183D8:
    // 0x800183D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800183DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800183E0: jr          $ra
    // 0x800183E4: nop

    return;
    // 0x800183E4: nop

;}
RECOMP_FUNC void func_8001C464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C464: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001C468: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001C46C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8001C470: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8001C474: addiu       $t7, $t6, 0x1260
    ctx->r15 = ADD32(ctx->r14, 0X1260);
    // 0x8001C478: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x8001C47C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8001C480: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_8001C484:
    // 0x8001C484: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8001C488: nop

    // 0x8001C48C: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x8001C490: nop

    // 0x8001C494: beq         $t0, $zero, L_8001C580
    if (ctx->r8 == 0) {
        // 0x8001C498: nop
    
            goto L_8001C580;
    }
    // 0x8001C498: nop

    // 0x8001C49C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8001C4A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8001C4A4: jal         0x80019510
    // 0x8001C4A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80019510(rdram, ctx);
        goto after_0;
    // 0x8001C4A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001C4AC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8001C4B0: nop

    // 0x8001C4B4: lbu         $t2, 0x130($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X130);
    // 0x8001C4B8: nop

    // 0x8001C4BC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8001C4C0: bne         $t3, $zero, L_8001C580
    if (ctx->r11 != 0) {
        // 0x8001C4C4: nop
    
            goto L_8001C580;
    }
    // 0x8001C4C4: nop

    // 0x8001C4C8: lbu         $t4, 0x131($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X131);
    // 0x8001C4CC: nop

    // 0x8001C4D0: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x8001C4D4: bne         $t5, $zero, L_8001C580
    if (ctx->r13 != 0) {
        // 0x8001C4D8: nop
    
            goto L_8001C580;
    }
    // 0x8001C4D8: nop

    // 0x8001C4DC: lh          $t6, 0x140($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X140);
    // 0x8001C4E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001C4E4: beq         $t6, $at, L_8001C580
    if (ctx->r14 == ctx->r1) {
        // 0x8001C4E8: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_8001C580;
    }
    // 0x8001C4E8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8001C4EC: jal         0x8001838C
    // 0x8001C4F0: nop

    func_8001838C(rdram, ctx);
        goto after_1;
    // 0x8001C4F0: nop

    after_1:
    // 0x8001C4F4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8001C4F8: jal         0x8001B014
    // 0x8001C4FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B014(rdram, ctx);
        goto after_2;
    // 0x8001C4FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8001C500: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C504: jal         0x8001A488
    // 0x8001C508: nop

    func_8001A488(rdram, ctx);
        goto after_3;
    // 0x8001C508: nop

    after_3:
    // 0x8001C50C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C510: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8001C514: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8001C518: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001C51C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8001C520: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001C524: lw          $t9, 0x5290($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5290);
    // 0x8001C528: nop

    // 0x8001C52C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8001C530: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C534: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8001C538: sll         $t2, $t0, 3
    ctx->r10 = S32(ctx->r8 << 3);
    // 0x8001C53C: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
    // 0x8001C540: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8001C544: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001C548: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001C54C: lw          $t4, -0x1C5C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1C5C);
    // 0x8001C550: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x8001C554: lw          $a0, 0x52AC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X52AC);
    // 0x8001C558: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001C55C: addiu       $a1, $a1, -0x1F04
    ctx->r5 = ADD32(ctx->r5, -0X1F04);
    // 0x8001C560: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8001C564: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x8001C568: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8001C56C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8001C570: jal         0x8000FD9C
    // 0x8001C574: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_8000FD9C(rdram, ctx);
        goto after_4;
    // 0x8001C574: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_4:
    // 0x8001C578: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C57C: sw          $v0, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = ctx->r2;
L_8001C580:
    // 0x8001C580: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8001C584: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8001C588: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001C58C: slti        $at, $t7, 0x4E
    ctx->r1 = SIGNED(ctx->r15) < 0X4E ? 1 : 0;
    // 0x8001C590: addiu       $t1, $t5, 0x150
    ctx->r9 = ADD32(ctx->r13, 0X150);
    // 0x8001C594: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8001C598: bne         $at, $zero, L_8001C484
    if (ctx->r1 != 0) {
        // 0x8001C59C: sw          $t7, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r15;
            goto L_8001C484;
    }
    // 0x8001C59C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8001C5A0: b           L_8001C5A8
    // 0x8001C5A4: nop

        goto L_8001C5A8;
    // 0x8001C5A4: nop

L_8001C5A8:
    // 0x8001C5A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001C5AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001C5B0: jr          $ra
    // 0x8001C5B4: nop

    return;
    // 0x8001C5B4: nop

;}
RECOMP_FUNC void func_8001C70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C70C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001C710: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001C714: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8001C718: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8001C71C: addiu       $t7, $t6, 0x6660
    ctx->r15 = ADD32(ctx->r14, 0X6660);
    // 0x8001C720: addiu       $t8, $zero, 0x4E
    ctx->r24 = ADD32(0, 0X4E);
    // 0x8001C724: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8001C728: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
L_8001C72C:
    // 0x8001C72C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8001C730: nop

    // 0x8001C734: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x8001C738: nop

    // 0x8001C73C: beq         $t0, $zero, L_8001C934
    if (ctx->r8 == 0) {
        // 0x8001C740: nop
    
            goto L_8001C934;
    }
    // 0x8001C740: nop

    // 0x8001C744: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8001C748: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8001C74C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8001C750: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8001C754: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8001C758: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8001C75C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8001C760: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8001C764: lbu         $t3, 0x4289($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X4289);
    // 0x8001C768: nop

    // 0x8001C76C: beq         $t3, $zero, L_8001C78C
    if (ctx->r11 == 0) {
        // 0x8001C770: nop
    
            goto L_8001C78C;
    }
    // 0x8001C770: nop

    // 0x8001C774: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8001C778: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8001C77C: jal         0x80019510
    // 0x8001C780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80019510(rdram, ctx);
        goto after_0;
    // 0x8001C780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8001C784: b           L_8001C79C
    // 0x8001C788: nop

        goto L_8001C79C;
    // 0x8001C788: nop

L_8001C78C:
    // 0x8001C78C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8001C790: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8001C794: jal         0x80019510
    // 0x8001C798: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80019510(rdram, ctx);
        goto after_1;
    // 0x8001C798: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_8001C79C:
    // 0x8001C79C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8001C7A0:
    // 0x8001C7A0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8001C7A4: nop

    // 0x8001C7A8: lbu         $t5, 0x130($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X130);
    // 0x8001C7AC: nop

    // 0x8001C7B0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8001C7B4: bne         $t6, $zero, L_8001C91C
    if (ctx->r14 != 0) {
        // 0x8001C7B8: nop
    
            goto L_8001C91C;
    }
    // 0x8001C7B8: nop

    // 0x8001C7BC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C7C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001C7C4: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8001C7C8: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x8001C7CC: lh          $t0, 0x140($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X140);
    // 0x8001C7D0: nop

    // 0x8001C7D4: beq         $t0, $at, L_8001C91C
    if (ctx->r8 == ctx->r1) {
        // 0x8001C7D8: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_8001C91C;
    }
    // 0x8001C7D8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x8001C7DC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001C7E0: lbu         $t1, 0x792C($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X792C);
    // 0x8001C7E4: nop

    // 0x8001C7E8: bne         $t1, $zero, L_8001C800
    if (ctx->r9 != 0) {
        // 0x8001C7EC: nop
    
            goto L_8001C800;
    }
    // 0x8001C7EC: nop

    // 0x8001C7F0: jal         0x8001838C
    // 0x8001C7F4: nop

    func_8001838C(rdram, ctx);
        goto after_2;
    // 0x8001C7F4: nop

    after_2:
    // 0x8001C7F8: b           L_8001C88C
    // 0x8001C7FC: nop

        goto L_8001C88C;
    // 0x8001C7FC: nop

L_8001C800:
    // 0x8001C800: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001C804: lbu         $t2, 0x792C($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X792C);
    // 0x8001C808: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001C80C: bne         $t2, $at, L_8001C854
    if (ctx->r10 != ctx->r1) {
        // 0x8001C810: nop
    
            goto L_8001C854;
    }
    // 0x8001C810: nop

    // 0x8001C814: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001C818: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001C81C: lh          $t5, 0x7948($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7948);
    // 0x8001C820: lh          $t3, 0x7944($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7944);
    // 0x8001C824: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001C828: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001C82C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8001C830: lbu         $a2, 0x7940($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7940);
    // 0x8001C834: lbu         $a1, 0x793E($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X793E);
    // 0x8001C838: lbu         $a0, 0x793A($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X793A);
    // 0x8001C83C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x8001C840: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8001C844: jal         0x800183E8
    // 0x8001C848: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_800183E8(rdram, ctx);
        goto after_3;
    // 0x8001C848: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x8001C84C: b           L_8001C88C
    // 0x8001C850: nop

        goto L_8001C88C;
    // 0x8001C850: nop

L_8001C854:
    // 0x8001C854: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001C858: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001C85C: lh          $t7, 0x7948($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7948);
    // 0x8001C860: lh          $t6, 0x7944($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7944);
    // 0x8001C864: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001C868: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001C86C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8001C870: lbu         $a2, 0x7940($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7940);
    // 0x8001C874: lbu         $a1, 0x793E($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X793E);
    // 0x8001C878: lbu         $a0, 0x793A($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X793A);
    // 0x8001C87C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x8001C880: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8001C884: jal         0x80018794
    // 0x8001C888: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80018794(rdram, ctx);
        goto after_4;
    // 0x8001C888: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_4:
L_8001C88C:
    // 0x8001C88C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8001C890: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C894: jal         0x8001B014
    // 0x8001C898: nop

    func_8001B014(rdram, ctx);
        goto after_5;
    // 0x8001C898: nop

    after_5:
    // 0x8001C89C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8001C8A0: jal         0x8001A488
    // 0x8001C8A4: nop

    func_8001A488(rdram, ctx);
        goto after_6;
    // 0x8001C8A4: nop

    after_6:
    // 0x8001C8A8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8001C8AC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8001C8B0: sll         $t8, $t4, 3
    ctx->r24 = S32(ctx->r12 << 3);
    // 0x8001C8B4: subu        $t8, $t8, $t4
    ctx->r24 = SUB32(ctx->r24, ctx->r12);
    // 0x8001C8B8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8001C8BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001C8C0: lw          $t9, 0x5290($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5290);
    // 0x8001C8C4: nop

    // 0x8001C8C8: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x8001C8CC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8001C8D0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8001C8D4: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8001C8D8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8001C8DC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8001C8E0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001C8E4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001C8E8: lw          $t3, -0x1C5C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1C5C);
    // 0x8001C8EC: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x8001C8F0: lw          $a0, 0x52AC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X52AC);
    // 0x8001C8F4: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001C8F8: addiu       $a1, $a1, -0x1F04
    ctx->r5 = ADD32(ctx->r5, -0X1F04);
    // 0x8001C8FC: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8001C900: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8001C904: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8001C908: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8001C90C: jal         0x8000FD9C
    // 0x8001C910: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_8000FD9C(rdram, ctx);
        goto after_7;
    // 0x8001C910: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_7:
    // 0x8001C914: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C918: sw          $v0, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = ctx->r2;
L_8001C91C:
    // 0x8001C91C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C920: nop

    // 0x8001C924: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8001C928: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x8001C92C: bne         $at, $zero, L_8001C7A0
    if (ctx->r1 != 0) {
        // 0x8001C930: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_8001C7A0;
    }
    // 0x8001C930: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_8001C934:
    // 0x8001C934: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8001C938: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8001C93C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001C940: slti        $at, $t9, 0x8E
    ctx->r1 = SIGNED(ctx->r25) < 0X8E ? 1 : 0;
    // 0x8001C944: addiu       $t4, $t7, 0x150
    ctx->r12 = ADD32(ctx->r15, 0X150);
    // 0x8001C948: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x8001C94C: bne         $at, $zero, L_8001C72C
    if (ctx->r1 != 0) {
        // 0x8001C950: sw          $t9, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r25;
            goto L_8001C72C;
    }
    // 0x8001C950: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x8001C954: b           L_8001C95C
    // 0x8001C958: nop

        goto L_8001C95C;
    // 0x8001C958: nop

L_8001C95C:
    // 0x8001C95C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001C960: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001C964: jr          $ra
    // 0x8001C968: nop

    return;
    // 0x8001C968: nop

;}
RECOMP_FUNC void func_800214B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800214B8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800214BC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800214C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800214C4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800214C8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800214CC: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800214D0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800214D4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800214D8: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x800214DC: nop

    // 0x800214E0: beq         $t9, $zero, L_8002156C
    if (ctx->r25 == 0) {
        // 0x800214E4: nop
    
            goto L_8002156C;
    }
    // 0x800214E4: nop

    // 0x800214E8: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x800214EC: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x800214F0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800214F4: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x800214F8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800214FC: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x80021500: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x80021504: nop

    // 0x80021508: bgtz        $t2, L_80021538
    if (SIGNED(ctx->r10) > 0) {
        // 0x8002150C: nop
    
            goto L_80021538;
    }
    // 0x8002150C: nop

    // 0x80021510: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x80021514: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x80021518: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8002151C: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x80021520: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80021524: addu        $t4, $t3, $t7
    ctx->r12 = ADD32(ctx->r11, ctx->r15);
    // 0x80021528: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x8002152C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80021530: bne         $t5, $at, L_8002156C
    if (ctx->r13 != ctx->r1) {
        // 0x80021534: nop
    
            goto L_8002156C;
    }
    // 0x80021534: nop

L_80021538:
    // 0x80021538: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002153C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80021540: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021544: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80021548: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8002154C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80021550: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80021554: lh          $t8, 0x4254($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4254);
    // 0x80021558: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002155C: bne         $t8, $at, L_8002156C
    if (ctx->r24 != ctx->r1) {
        // 0x80021560: nop
    
            goto L_8002156C;
    }
    // 0x80021560: nop

    // 0x80021564: jr          $ra
    // 0x80021568: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80021568: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002156C:
    // 0x8002156C: jr          $ra
    // 0x80021570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80021570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80021574: jr          $ra
    // 0x80021578: nop

    return;
    // 0x80021578: nop

    // 0x8002157C: jr          $ra
    // 0x80021580: nop

    return;
    // 0x80021580: nop

;}
RECOMP_FUNC void alSavePull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800417F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800417F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800417FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80041800: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80041804: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80041808: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8004180C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80041810: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80041814: jalr        $t9
    // 0x80041818: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80041818: nop

    after_0:
    // 0x8004181C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80041820: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80041824: lui         $t2, 0x440
    ctx->r10 = S32(0X440 << 16);
    // 0x80041828: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x8004182C: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x80041830: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x80041834: ori         $t2, $t2, 0x580
    ctx->r10 = ctx->r10 | 0X580;
    // 0x80041838: lui         $t1, 0xD00
    ctx->r9 = S32(0XD00 << 16);
    // 0x8004183C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x80041840: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x80041844: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80041848: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8004184C: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x80041850: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80041854: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x80041858: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x8004185C: sw          $t5, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r13;
    // 0x80041860: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80041864: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80041868: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8004186C: sw          $t7, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r15;
    // 0x80041870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80041874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80041878: jr          $ra
    // 0x8004187C: nop

    return;
    // 0x8004187C: nop

;}
