#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8000449C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000449C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800044A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800044A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800044A8: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x800044AC: nop

    // 0x800044B0: bgtz        $t6, L_800044C0
    if (SIGNED(ctx->r14) > 0) {
        // 0x800044B4: nop
    
            goto L_800044C0;
    }
    // 0x800044B4: nop

    // 0x800044B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800044BC: sh          $t7, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r15;
L_800044C0:
    // 0x800044C0: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x800044C4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800044C8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800044CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800044D0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800044D4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x800044D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800044DC: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800044E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800044E4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800044E8: nop

    // 0x800044EC: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x800044F0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800044F4: nop

    // 0x800044F8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800044FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80004500: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80004504: nop

    // 0x80004508: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000450C: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80004510: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80004514: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80004518: nop

    // 0x8000451C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80004520: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80004524: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80004528: jal         0x80034780
    // 0x8000452C: nop

    alSeqpSetTempo(rdram, ctx);
        goto after_0;
    // 0x8000452C: nop

    after_0:
    // 0x80004530: b           L_80004538
    // 0x80004534: nop

        goto L_80004538;
    // 0x80004534: nop

L_80004538:
    // 0x80004538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000453C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80004540: jr          $ra
    // 0x80004544: nop

    return;
    // 0x80004544: nop

;}
RECOMP_FUNC void func_80006830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006830: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80006834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006838: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8000683C: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x80006840: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80006844: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80006848: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000684C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80006850: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x80006854: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80006858: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000685C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80006860: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80006864: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80006868: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x8000686C: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80006870: nop

    // 0x80006874: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x80006878: sw          $t2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r10;
    // 0x8000687C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80006880: nop

    // 0x80006884: sw          $zero, 0xC($t3)
    MEM_W(0XC, ctx->r11) = 0;
    // 0x80006888: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8000688C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80006890: lh          $a0, 0x14($t4)
    ctx->r4 = MEM_H(ctx->r12, 0X14);
    // 0x80006894: jal         0x800069D0
    // 0x80006898: nop

    func_800069D0(rdram, ctx);
        goto after_0;
    // 0x80006898: nop

    after_0:
    // 0x8000689C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800068A0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800068A4: nop

    // 0x800068A8: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x800068AC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800068B0: nop

    // 0x800068B4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800068B8: nop

    // 0x800068BC: bne         $t8, $zero, L_800068CC
    if (ctx->r24 != 0) {
        // 0x800068C0: nop
    
            goto L_800068CC;
    }
    // 0x800068C0: nop

    // 0x800068C4: b           L_800069C0
    // 0x800068C8: nop

        goto L_800069C0;
    // 0x800068C8: nop

L_800068CC:
    // 0x800068CC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800068D0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800068D4: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x800068D8: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x800068DC: jal         0x80035240
    // 0x800068E0: nop

    alSndpAllocate(rdram, ctx);
        goto after_1;
    // 0x800068E0: nop

    after_1:
    // 0x800068E4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800068E8: nop

    // 0x800068EC: sh          $v0, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r2;
    // 0x800068F0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800068F4: nop

    // 0x800068F8: lh          $t0, 0x16($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X16);
    // 0x800068FC: nop

    // 0x80006900: bgez        $t0, L_80006910
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80006904: nop
    
            goto L_80006910;
    }
    // 0x80006904: nop

    // 0x80006908: b           L_800069C0
    // 0x8000690C: nop

        goto L_800069C0;
    // 0x8000690C: nop

L_80006910:
    // 0x80006910: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80006914: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80006918: lbu         $a2, 0x26($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X26);
    // 0x8000691C: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80006920: lh          $a1, 0x16($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X16);
    // 0x80006924: jal         0x800352E0
    // 0x80006928: addiu       $a2, $a2, 0xB
    ctx->r6 = ADD32(ctx->r6, 0XB);
    alSndpSetPriority(rdram, ctx);
        goto after_2;
    // 0x80006928: addiu       $a2, $a2, 0xB
    ctx->r6 = ADD32(ctx->r6, 0XB);
    after_2:
    // 0x8000692C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80006930: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80006934: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x80006938: lb          $a2, 0x29($t4)
    ctx->r6 = MEM_B(ctx->r12, 0X29);
    // 0x8000693C: jal         0x80008B84
    // 0x80006940: nop

    func_80008B84(rdram, ctx);
        goto after_3;
    // 0x80006940: nop

    after_3:
    // 0x80006944: lh          $a0, 0x3A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3A);
    // 0x80006948: jal         0x80008CF4
    // 0x8000694C: nop

    func_80008CF4(rdram, ctx);
        goto after_4;
    // 0x8000694C: nop

    after_4:
    // 0x80006950: lh          $a0, 0x3A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3A);
    // 0x80006954: lb          $a1, 0x32($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X32);
    // 0x80006958: jal         0x800083EC
    // 0x8000695C: nop

    func_800083EC(rdram, ctx);
        goto after_5;
    // 0x8000695C: nop

    after_5:
    // 0x80006960: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80006964: nop

    // 0x80006968: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8000696C: nop

    // 0x80006970: ori         $t7, $t6, 0xF
    ctx->r15 = ctx->r14 | 0XF;
    // 0x80006974: sw          $t7, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r15;
    // 0x80006978: lh          $a0, 0x3A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3A);
    // 0x8000697C: jal         0x80007890
    // 0x80006980: nop

    func_80007890(rdram, ctx);
        goto after_6;
    // 0x80006980: nop

    after_6:
    // 0x80006984: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80006988: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000698C: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80006990: lh          $a1, 0x16($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X16);
    // 0x80006994: jal         0x80035310
    // 0x80006998: nop

    alSndpSetSound(rdram, ctx);
        goto after_7;
    // 0x80006998: nop

    after_7:
    // 0x8000699C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800069A0: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x800069A4: jal         0x80035330
    // 0x800069A8: nop

    alSndpPlay(rdram, ctx);
        goto after_8;
    // 0x800069A8: nop

    after_8:
    // 0x800069AC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800069B0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800069B4: sw          $t9, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r25;
    // 0x800069B8: b           L_800069C0
    // 0x800069BC: nop

        goto L_800069C0;
    // 0x800069BC: nop

L_800069C0:
    // 0x800069C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800069C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800069C8: jr          $ra
    // 0x800069CC: nop

    return;
    // 0x800069CC: nop

;}
RECOMP_FUNC void alAuxBusNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F308: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F30C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003F310: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003F314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F318: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x8003F31C: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x8003F320: addiu       $a1, $a1, 0x16E0
    ctx->r5 = ADD32(ctx->r5, 0X16E0);
    // 0x8003F324: addiu       $a2, $a2, 0x16B0
    ctx->r6 = ADD32(ctx->r6, 0X16B0);
    // 0x8003F328: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003F32C: jal         0x80046400
    // 0x8003F330: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8003F330: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8003F334: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003F338: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8003F33C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8003F340: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x8003F344: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F348: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x8003F34C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F354: jr          $ra
    // 0x8003F358: nop

    return;
    // 0x8003F358: nop

;}
RECOMP_FUNC void __vsDelta(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CF40: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x8003CF44: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x8003CF48: subu        $v1, $t6, $a1
    ctx->r3 = SUB32(ctx->r14, ctx->r5);
    // 0x8003CF4C: bltz        $v1, L_8003CF5C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8003CF50: nop
    
            goto L_8003CF5C;
    }
    // 0x8003CF50: nop

    // 0x8003CF54: jr          $ra
    // 0x8003CF58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8003CF58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8003CF5C:
    // 0x8003CF5C: jr          $ra
    // 0x8003CF60: nop

    return;
    // 0x8003CF60: nop

;}
RECOMP_FUNC void func_80016560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016560: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80016564: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80016568: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x8001656C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80016570: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80016574: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80016578: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001657C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80016580: sub.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80016584: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80016588: sub.s       $f16, $f12, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x8001658C: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80016590: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80016594: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80016598: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x8001659C: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x800165A0: swc1        $f7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x800165A4: lwc1        $f9, 0x0($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x800165A8: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800165AC: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x800165B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800165B4: nop

    // 0x800165B8: c.lt.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d < ctx->f16.d;
    // 0x800165BC: nop

    // 0x800165C0: bc1f        L_800165D0
    if (!c1cs) {
        // 0x800165C4: nop
    
            goto L_800165D0;
    }
    // 0x800165C4: nop

    // 0x800165C8: b           L_8001670C
    // 0x800165CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001670C;
    // 0x800165CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800165D0:
    // 0x800165D0: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800165D4: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800165D8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800165DC: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800165E0: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800165E4: sub.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x800165E8: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800165EC: sub.s       $f8, $f12, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x800165F0: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x800165F4: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800165F8: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800165FC: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80016600: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x80016604: swc1        $f5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x80016608: lwc1        $f11, 0x0($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x8001660C: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80016610: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x80016614: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80016618: nop

    // 0x8001661C: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x80016620: nop

    // 0x80016624: bc1f        L_80016634
    if (!c1cs) {
        // 0x80016628: nop
    
            goto L_80016634;
    }
    // 0x80016628: nop

    // 0x8001662C: b           L_8001670C
    // 0x80016630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001670C;
    // 0x80016630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80016634:
    // 0x80016634: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80016638: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8001663C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80016640: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80016644: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80016648: sub.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8001664C: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80016650: sub.s       $f10, $f12, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x80016654: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80016658: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001665C: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80016660: cvt.d.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f18.d = CVT_D_S(ctx->f4.fl);
    // 0x80016664: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80016668: swc1        $f19, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x8001666C: lwc1        $f7, 0x0($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x80016670: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80016674: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x80016678: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001667C: nop

    // 0x80016680: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x80016684: nop

    // 0x80016688: bc1f        L_80016698
    if (!c1cs) {
        // 0x8001668C: nop
    
            goto L_80016698;
    }
    // 0x8001668C: nop

    // 0x80016690: b           L_8001670C
    // 0x80016694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001670C;
    // 0x80016694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80016698:
    // 0x80016698: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8001669C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800166A0: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800166A4: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800166A8: lwc1        $f8, 0x14($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800166AC: sub.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x800166B0: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800166B4: sub.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x800166B8: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x800166BC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800166C0: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x800166C4: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x800166C8: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x800166CC: swc1        $f17, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(17 - 1) * 2];
    // 0x800166D0: lwc1        $f5, 0x0($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x800166D4: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800166D8: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x800166DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800166E0: nop

    // 0x800166E4: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x800166E8: nop

    // 0x800166EC: bc1f        L_800166FC
    if (!c1cs) {
        // 0x800166F0: nop
    
            goto L_800166FC;
    }
    // 0x800166F0: nop

    // 0x800166F4: b           L_8001670C
    // 0x800166F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001670C;
    // 0x800166F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800166FC:
    // 0x800166FC: b           L_8001670C
    // 0x80016700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001670C;
    // 0x80016700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80016704: b           L_8001670C
    // 0x80016708: nop

        goto L_8001670C;
    // 0x80016708: nop

L_8001670C:
    // 0x8001670C: jr          $ra
    // 0x80016710: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80016710: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001AB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AB30: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8001AB34: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8001AB38: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001AB3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001AB40: lw          $t7, -0x3D68($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D68);
    // 0x8001AB44: nop

    // 0x8001AB48: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x8001AB4C: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x8001AB50: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001AB54: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001AB58: lbu         $t9, -0x3D63($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3D63);
    // 0x8001AB5C: nop

    // 0x8001AB60: sb          $t9, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r25;
    // 0x8001AB64: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8001AB68: lbu         $t2, 0x3($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3);
    // 0x8001AB6C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8001AB70: nop

    // 0x8001AB74: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8001AB78: lbu         $v0, 0x0($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X0);
    // 0x8001AB7C: b           L_8001AB8C
    // 0x8001AB80: nop

        goto L_8001AB8C;
    // 0x8001AB80: nop

    // 0x8001AB84: b           L_8001AB8C
    // 0x8001AB88: nop

        goto L_8001AB8C;
    // 0x8001AB88: nop

L_8001AB8C:
    // 0x8001AB8C: jr          $ra
    // 0x8001AB90: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8001AB90: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80019510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019510: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x80019514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019518: sw          $a0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r4;
    // 0x8001951C: sw          $a1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r5;
    // 0x80019520: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x80019524: lw          $t6, 0xF0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF0);
    // 0x80019528: nop

    // 0x8001952C: beq         $t6, $zero, L_80019540
    if (ctx->r14 == 0) {
        // 0x80019530: nop
    
            goto L_80019540;
    }
    // 0x80019530: nop

    // 0x80019534: lw          $a0, 0xE8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE8);
    // 0x80019538: jal         0x80019050
    // 0x8001953C: nop

    func_80019050(rdram, ctx);
        goto after_0;
    // 0x8001953C: nop

    after_0:
L_80019540:
    // 0x80019540: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80019544: lw          $a1, -0x1EFC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EFC);
    // 0x80019548: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x8001954C: jal         0x800362A8
    // 0x80019550: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
    guMtxL2F(rdram, ctx);
        goto after_1;
    // 0x80019550: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
    after_1:
    // 0x80019554: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x80019558: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8001955C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80019560: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80019564: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80019568: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001956C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80019570: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x80019574: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80019578: addiu       $t1, $sp, 0x68
    ctx->r9 = ADD32(ctx->r29, 0X68);
    // 0x8001957C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80019580: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80019584: jal         0x80036400
    // 0x80019588: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    guMtxCatF(rdram, ctx);
        goto after_2;
    // 0x80019588: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    after_2:
    // 0x8001958C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80019590: jal         0x800360F0
    // 0x80019594: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    guMtxF2L(rdram, ctx);
        goto after_3;
    // 0x80019594: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    after_3:
    // 0x80019598: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x8001959C: nop

    // 0x800195A0: bne         $t2, $zero, L_80019660
    if (ctx->r10 != 0) {
        // 0x800195A4: nop
    
            goto L_80019660;
    }
    // 0x800195A4: nop

    // 0x800195A8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800195AC: lw          $t4, -0x1C5C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1C5C);
    // 0x800195B0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800195B4: lw          $t3, -0x1EFC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1EFC);
    // 0x800195B8: addiu       $t7, $sp, 0xA8
    ctx->r15 = ADD32(ctx->r29, 0XA8);
    // 0x800195BC: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x800195C0: addiu       $t9, $t7, 0x3C
    ctx->r25 = ADD32(ctx->r15, 0X3C);
    // 0x800195C4: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
L_800195C8:
    // 0x800195C8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800195CC: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x800195D0: sw          $at, 0xE0($t6)
    MEM_W(0XE0, ctx->r14) = ctx->r1;
    // 0x800195D4: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x800195D8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x800195DC: sw          $at, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = ctx->r1;
    // 0x800195E0: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x800195E4: bne         $t7, $t9, L_800195C8
    if (ctx->r15 != ctx->r25) {
        // 0x800195E8: sw          $at, 0xDC($t6)
        MEM_W(0XDC, ctx->r14) = ctx->r1;
            goto L_800195C8;
    }
    // 0x800195E8: sw          $at, 0xDC($t6)
    MEM_W(0XDC, ctx->r14) = ctx->r1;
    // 0x800195EC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800195F0: nop

    // 0x800195F4: sw          $at, 0xE0($t6)
    MEM_W(0XE0, ctx->r14) = ctx->r1;
    // 0x800195F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800195FC: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x80019600: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019604: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80019608: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8001960C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80019610: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80019614: lui         $t2, 0x102
    ctx->r10 = S32(0X102 << 16);
    // 0x80019618: ori         $t2, $t2, 0x40
    ctx->r10 = ctx->r10 | 0X40;
    // 0x8001961C: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x80019620: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80019624: lw          $t5, -0x1C5C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1C5C);
    // 0x80019628: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001962C: lw          $t3, -0x1EFC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1EFC);
    // 0x80019630: sll         $t8, $t5, 6
    ctx->r24 = S32(ctx->r13 << 6);
    // 0x80019634: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80019638: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x8001963C: addiu       $t7, $t9, 0xE0
    ctx->r15 = ADD32(ctx->r25, 0XE0);
    // 0x80019640: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80019644: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
    // 0x80019648: lw          $t0, -0x1C5C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1C5C);
    // 0x8001964C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019650: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80019654: sw          $t1, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = ctx->r9;
    // 0x80019658: b           L_80019934
    // 0x8001965C: nop

        goto L_80019934;
    // 0x8001965C: nop

L_80019660:
    // 0x80019660: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x80019664: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80019668: bne         $t2, $at, L_80019734
    if (ctx->r10 != ctx->r1) {
        // 0x8001966C: nop
    
            goto L_80019734;
    }
    // 0x8001966C: nop

    // 0x80019670: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x80019674: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80019678: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8001967C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80019680: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80019684: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80019688: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8001968C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80019690: lwc1        $f4, 0x415C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X415C);
    // 0x80019694: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019698: swc1        $f4, -0x1C4C($at)
    MEM_W(-0X1C4C, ctx->r1) = ctx->f4.u32l;
    // 0x8001969C: lw          $t3, 0xE8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE8);
    // 0x800196A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800196A4: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x800196A8: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x800196AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800196B0: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x800196B4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800196B8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800196BC: lwc1        $f6, 0x4160($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4160);
    // 0x800196C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800196C4: swc1        $f6, -0x1C44($at)
    MEM_W(-0X1C44, ctx->r1) = ctx->f6.u32l;
    // 0x800196C8: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x800196CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800196D0: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x800196D4: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x800196D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800196DC: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x800196E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800196E4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800196E8: lwc1        $f8, 0x4164($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4164);
    // 0x800196EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800196F0: swc1        $f8, -0x1C3C($at)
    MEM_W(-0X1C3C, ctx->r1) = ctx->f8.u32l;
    // 0x800196F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800196F8: addiu       $t0, $sp, 0xA8
    ctx->r8 = ADD32(ctx->r29, 0XA8);
    // 0x800196FC: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x80019700: addiu       $t4, $t0, 0x3C
    ctx->r12 = ADD32(ctx->r8, 0X3C);
L_80019704:
    // 0x80019704: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80019708: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8001970C: sw          $at, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->r1;
    // 0x80019710: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x80019714: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80019718: sw          $at, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r1;
    // 0x8001971C: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80019720: bne         $t0, $t4, L_80019704
    if (ctx->r8 != ctx->r12) {
        // 0x80019724: sw          $at, 0x3C($t6)
        MEM_W(0X3C, ctx->r14) = ctx->r1;
            goto L_80019704;
    }
    // 0x80019724: sw          $at, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->r1;
    // 0x80019728: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8001972C: b           L_80019934
    // 0x80019730: sw          $at, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->r1;
        goto L_80019934;
    // 0x80019730: sw          $at, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->r1;
L_80019734:
    // 0x80019734: lw          $t5, 0xEC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XEC);
    // 0x80019738: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001973C: bne         $t5, $at, L_80019868
    if (ctx->r13 != ctx->r1) {
        // 0x80019740: nop
    
            goto L_80019868;
    }
    // 0x80019740: nop

    // 0x80019744: jal         0x800361F0
    // 0x80019748: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    guMtxIdentF(rdram, ctx);
        goto after_4;
    // 0x80019748: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x8001974C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80019750: jal         0x8000E680
    // 0x80019754: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    Math_Mat3f_Inverse(rdram, ctx);
        goto after_5;
    // 0x80019754: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_5:
    // 0x80019758: lw          $t3, 0xE8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE8);
    // 0x8001975C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80019760: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80019764: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x80019768: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001976C: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x80019770: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80019774: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80019778: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x8001977C: lw          $a1, 0xC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XC);
    // 0x80019780: lw          $a2, 0x10($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X10);
    // 0x80019784: lw          $a3, 0x14($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X14);
    // 0x80019788: jal         0x80013B70
    // 0x8001978C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    Math_Mat3f_Scale(rdram, ctx);
        goto after_6;
    // 0x8001978C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x80019790: addiu       $t2, $sp, 0x68
    ctx->r10 = ADD32(ctx->r29, 0X68);
    // 0x80019794: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80019798: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8001979C: jal         0x80036400
    // 0x800197A0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    guMtxCatF(rdram, ctx);
        goto after_7;
    // 0x800197A0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x800197A4: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x800197A8: jal         0x800360F0
    // 0x800197AC: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    guMtxF2L(rdram, ctx);
        goto after_8;
    // 0x800197AC: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    after_8:
    // 0x800197B0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800197B4: lw          $t4, -0x1C5C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1C5C);
    // 0x800197B8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800197BC: lw          $t1, -0x1EFC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1EFC);
    // 0x800197C0: addiu       $t5, $sp, 0xA8
    ctx->r13 = ADD32(ctx->r29, 0XA8);
    // 0x800197C4: sll         $t0, $t4, 6
    ctx->r8 = S32(ctx->r12 << 6);
    // 0x800197C8: addiu       $t8, $t5, 0x3C
    ctx->r24 = ADD32(ctx->r13, 0X3C);
    // 0x800197CC: addu        $t6, $t1, $t0
    ctx->r14 = ADD32(ctx->r9, ctx->r8);
L_800197D0:
    // 0x800197D0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x800197D4: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x800197D8: sw          $at, 0xE0($t6)
    MEM_W(0XE0, ctx->r14) = ctx->r1;
    // 0x800197DC: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x800197E0: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x800197E4: sw          $at, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = ctx->r1;
    // 0x800197E8: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x800197EC: bne         $t5, $t8, L_800197D0
    if (ctx->r13 != ctx->r24) {
        // 0x800197F0: sw          $at, 0xDC($t6)
        MEM_W(0XDC, ctx->r14) = ctx->r1;
            goto L_800197D0;
    }
    // 0x800197F0: sw          $at, 0xDC($t6)
    MEM_W(0XDC, ctx->r14) = ctx->r1;
    // 0x800197F4: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x800197F8: nop

    // 0x800197FC: sw          $at, 0xE0($t6)
    MEM_W(0XE0, ctx->r14) = ctx->r1;
    // 0x80019800: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80019804: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80019808: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001980C: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x80019810: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80019814: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80019818: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8001981C: lui         $t2, 0x102
    ctx->r10 = S32(0X102 << 16);
    // 0x80019820: ori         $t2, $t2, 0x40
    ctx->r10 = ctx->r10 | 0X40;
    // 0x80019824: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x80019828: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001982C: lw          $t0, -0x1C5C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1C5C);
    // 0x80019830: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80019834: lw          $t1, -0x1EFC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1EFC);
    // 0x80019838: sll         $t3, $t0, 6
    ctx->r11 = S32(ctx->r8 << 6);
    // 0x8001983C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80019840: addu        $t8, $t1, $t3
    ctx->r24 = ADD32(ctx->r9, ctx->r11);
    // 0x80019844: addiu       $t5, $t8, 0xE0
    ctx->r13 = ADD32(ctx->r24, 0XE0);
    // 0x80019848: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001984C: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80019850: lw          $t9, -0x1C5C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1C5C);
    // 0x80019854: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019858: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x8001985C: sw          $t7, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = ctx->r15;
    // 0x80019860: b           L_80019934
    // 0x80019864: nop

        goto L_80019934;
    // 0x80019864: nop

L_80019868:
    // 0x80019868: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x8001986C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80019870: bne         $t2, $at, L_80019934
    if (ctx->r10 != ctx->r1) {
        // 0x80019874: nop
    
            goto L_80019934;
    }
    // 0x80019874: nop

    // 0x80019878: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x8001987C: jal         0x800360F0
    // 0x80019880: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    guMtxF2L(rdram, ctx);
        goto after_9;
    // 0x80019880: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    after_9:
    // 0x80019884: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80019888: lw          $t0, -0x1C5C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1C5C);
    // 0x8001988C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80019890: lw          $t4, -0x1EFC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1EFC);
    // 0x80019894: addiu       $t8, $sp, 0xA8
    ctx->r24 = ADD32(ctx->r29, 0XA8);
    // 0x80019898: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x8001989C: addiu       $t6, $t8, 0x3C
    ctx->r14 = ADD32(ctx->r24, 0X3C);
    // 0x800198A0: addu        $t3, $t4, $t1
    ctx->r11 = ADD32(ctx->r12, ctx->r9);
L_800198A4:
    // 0x800198A4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x800198A8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x800198AC: sw          $at, 0xE0($t3)
    MEM_W(0XE0, ctx->r11) = ctx->r1;
    // 0x800198B0: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x800198B4: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x800198B8: sw          $at, 0xD8($t3)
    MEM_W(0XD8, ctx->r11) = ctx->r1;
    // 0x800198BC: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x800198C0: bne         $t8, $t6, L_800198A4
    if (ctx->r24 != ctx->r14) {
        // 0x800198C4: sw          $at, 0xDC($t3)
        MEM_W(0XDC, ctx->r11) = ctx->r1;
            goto L_800198A4;
    }
    // 0x800198C4: sw          $at, 0xDC($t3)
    MEM_W(0XDC, ctx->r11) = ctx->r1;
    // 0x800198C8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x800198CC: nop

    // 0x800198D0: sw          $at, 0xE0($t3)
    MEM_W(0XE0, ctx->r11) = ctx->r1;
    // 0x800198D4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800198D8: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x800198DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800198E0: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x800198E4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800198E8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800198EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800198F0: lui         $t2, 0x102
    ctx->r10 = S32(0X102 << 16);
    // 0x800198F4: ori         $t2, $t2, 0x40
    ctx->r10 = ctx->r10 | 0X40;
    // 0x800198F8: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x800198FC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80019900: lw          $t1, -0x1C5C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1C5C);
    // 0x80019904: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80019908: lw          $t4, -0x1EFC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1EFC);
    // 0x8001990C: sll         $t5, $t1, 6
    ctx->r13 = S32(ctx->r9 << 6);
    // 0x80019910: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80019914: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80019918: addiu       $t8, $t6, 0xE0
    ctx->r24 = ADD32(ctx->r14, 0XE0);
    // 0x8001991C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80019920: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x80019924: lw          $t9, -0x1C5C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1C5C);
    // 0x80019928: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001992C: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x80019930: sw          $t7, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = ctx->r15;
L_80019934:
    // 0x80019934: b           L_8001993C
    // 0x80019938: nop

        goto L_8001993C;
    // 0x80019938: nop

L_8001993C:
    // 0x8001993C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019940: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x80019944: jr          $ra
    // 0x80019948: nop

    return;
    // 0x80019948: nop

;}
RECOMP_FUNC void func_8001AB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AB94: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8001AB98: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001AB9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001ABA0: lw          $t7, -0x3D68($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D68);
    // 0x8001ABA4: nop

    // 0x8001ABA8: lbu         $v0, 0x18($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X18);
    // 0x8001ABAC: jr          $ra
    // 0x8001ABB0: nop

    return;
    // 0x8001ABB0: nop

    // 0x8001ABB4: jr          $ra
    // 0x8001ABB8: nop

    return;
    // 0x8001ABB8: nop

    // 0x8001ABBC: jr          $ra
    // 0x8001ABC0: nop

    return;
    // 0x8001ABC0: nop

;}
RECOMP_FUNC void func_800041E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800041E0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800041E4: lw          $t6, 0x2EC0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EC0);
    // 0x800041E8: nop

    // 0x800041EC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x800041F0: beq         $t7, $zero, L_80004200
    if (ctx->r15 == 0) {
        // 0x800041F4: nop
    
            goto L_80004200;
    }
    // 0x800041F4: nop

    // 0x800041F8: jr          $ra
    // 0x800041FC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    return;
    // 0x800041FC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_80004200:
    // 0x80004200: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80004204: lw          $t8, 0x2EC0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2EC0);
    // 0x80004208: nop

    // 0x8000420C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80004210: beq         $t9, $zero, L_80004220
    if (ctx->r25 == 0) {
        // 0x80004214: nop
    
            goto L_80004220;
    }
    // 0x80004214: nop

    // 0x80004218: jr          $ra
    // 0x8000421C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    return;
    // 0x8000421C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_80004220:
    // 0x80004220: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80004224: lw          $v0, 0x2EBC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2EBC);
    // 0x80004228: jr          $ra
    // 0x8000422C: nop

    return;
    // 0x8000422C: nop

    // 0x80004230: jr          $ra
    // 0x80004234: nop

    return;
    // 0x80004234: nop

    // 0x80004238: jr          $ra
    // 0x8000423C: nop

    return;
    // 0x8000423C: nop

;}
RECOMP_FUNC void func_8000265C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000265C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80002660: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x80002664: nop

    // 0x80002668: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8000266C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80002670: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80002674: bne         $t7, $at, L_800026AC
    if (ctx->r15 != ctx->r1) {
        // 0x80002678: nop
    
            goto L_800026AC;
    }
    // 0x80002678: nop

    // 0x8000267C: lw          $t8, 0x26C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X26C);
    // 0x80002680: nop

    // 0x80002684: beq         $t8, $zero, L_80002698
    if (ctx->r24 == 0) {
        // 0x80002688: nop
    
            goto L_80002698;
    }
    // 0x80002688: nop

    // 0x8000268C: lw          $t9, 0x26C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X26C);
    // 0x80002690: b           L_8000269C
    // 0x80002694: sw          $a1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r5;
        goto L_8000269C;
    // 0x80002694: sw          $a1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r5;
L_80002698:
    // 0x80002698: sw          $a1, 0x264($a0)
    MEM_W(0X264, ctx->r4) = ctx->r5;
L_8000269C:
    // 0x8000269C: sw          $a1, 0x26C($a0)
    MEM_W(0X26C, ctx->r4) = ctx->r5;
    // 0x800026A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800026A4: b           L_800026D0
    // 0x800026A8: sw          $t0, 0x280($a0)
    MEM_W(0X280, ctx->r4) = ctx->r8;
        goto L_800026D0;
    // 0x800026A8: sw          $t0, 0x280($a0)
    MEM_W(0X280, ctx->r4) = ctx->r8;
L_800026AC:
    // 0x800026AC: lw          $t1, 0x270($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X270);
    // 0x800026B0: nop

    // 0x800026B4: beq         $t1, $zero, L_800026C8
    if (ctx->r9 == 0) {
        // 0x800026B8: nop
    
            goto L_800026C8;
    }
    // 0x800026B8: nop

    // 0x800026BC: lw          $t2, 0x270($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X270);
    // 0x800026C0: b           L_800026CC
    // 0x800026C4: sw          $a1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r5;
        goto L_800026CC;
    // 0x800026C4: sw          $a1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r5;
L_800026C8:
    // 0x800026C8: sw          $a1, 0x268($a0)
    MEM_W(0X268, ctx->r4) = ctx->r5;
L_800026CC:
    // 0x800026CC: sw          $a1, 0x270($a0)
    MEM_W(0X270, ctx->r4) = ctx->r5;
L_800026D0:
    // 0x800026D0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x800026D4: lw          $t3, 0x8($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X8);
    // 0x800026D8: nop

    // 0x800026DC: andi        $t4, $t3, 0x3
    ctx->r12 = ctx->r11 & 0X3;
    // 0x800026E0: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x800026E4: b           L_800026EC
    // 0x800026E8: nop

        goto L_800026EC;
    // 0x800026E8: nop

L_800026EC:
    // 0x800026EC: jr          $ra
    // 0x800026F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800026F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8002B144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B144: jr          $ra
    // 0x8002B148: nop

    return;
    // 0x8002B148: nop

    // 0x8002B14C: jr          $ra
    // 0x8002B150: nop

    return;
    // 0x8002B150: nop

;}
RECOMP_FUNC void func_80016D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016D30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80016D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016D38: jal         0x80003170
    // 0x80016D3C: nop

    func_80003170(rdram, ctx);
        goto after_0;
    // 0x80016D3C: nop

    after_0:
    // 0x80016D40: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80016D44: jal         0x800031CC
    // 0x80016D48: nop

    func_800031CC(rdram, ctx);
        goto after_1;
    // 0x80016D48: nop

    after_1:
    // 0x80016D4C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80016D50: jal         0x800031E4
    // 0x80016D54: nop

    func_800031E4(rdram, ctx);
        goto after_2;
    // 0x80016D54: nop

    after_2:
    // 0x80016D58: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80016D5C: b           L_80016D64
    // 0x80016D60: nop

        goto L_80016D64;
    // 0x80016D60: nop

L_80016D64:
    // 0x80016D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016D68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80016D6C: jr          $ra
    // 0x80016D70: nop

    return;
    // 0x80016D70: nop

;}
RECOMP_FUNC void func_80010B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010B6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80010B70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80010B74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80010B78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80010B7C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80010B80: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80010B84: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80010B88: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80010B8C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80010B90: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80010B94: lwc1        $f14, 0x0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80010B98: jal         0x80010AD0
    // 0x80010B9C: nop

    func_80010AD0(rdram, ctx);
        goto after_0;
    // 0x80010B9C: nop

    after_0:
    // 0x80010BA0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80010BA4: nop

    // 0x80010BA8: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x80010BAC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80010BB0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80010BB4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80010BB8: lwc1        $f12, 0x4($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80010BBC: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80010BC0: jal         0x80010AD0
    // 0x80010BC4: nop

    func_80010AD0(rdram, ctx);
        goto after_1;
    // 0x80010BC4: nop

    after_1:
    // 0x80010BC8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80010BCC: nop

    // 0x80010BD0: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    // 0x80010BD4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80010BD8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80010BDC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80010BE0: lwc1        $f12, 0x8($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80010BE4: lwc1        $f14, 0x8($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80010BE8: jal         0x80010AD0
    // 0x80010BEC: nop

    func_80010AD0(rdram, ctx);
        goto after_2;
    // 0x80010BEC: nop

    after_2:
    // 0x80010BF0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80010BF4: nop

    // 0x80010BF8: swc1        $f0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f0.u32l;
    // 0x80010BFC: b           L_80010C04
    // 0x80010C00: nop

        goto L_80010C04;
    // 0x80010C00: nop

L_80010C04:
    // 0x80010C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80010C0C: jr          $ra
    // 0x80010C10: nop

    return;
    // 0x80010C10: nop

;}
RECOMP_FUNC void LoadFile(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E98C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001E990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E994: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001E998: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001E99C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001E9A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001E9A4: lw          $t6, 0x76D4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X76D4);
    // 0x8001E9A8: nop

    // 0x8001E9AC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8001E9B0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E9B4: nop

    // 0x8001E9B8: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8001E9BC: beq         $t8, $zero, L_8001E9E4
    if (ctx->r24 == 0) {
        // 0x8001E9C0: nop
    
            goto L_8001E9E4;
    }
    // 0x8001E9C0: nop

    // 0x8001E9C4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E9C8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8001E9CC: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x8001E9D0: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8001E9D4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8001E9D8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E9DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E9E0: sw          $t2, 0x76D4($at)
    MEM_W(0X76D4, ctx->r1) = ctx->r10;
L_8001E9E4:
    // 0x8001E9E4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8001E9E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8001E9EC: nop

    // 0x8001E9F0: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8001E9F4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8001E9F8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8001E9FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001EA00: lw          $t6, 0x76D4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X76D4);
    // 0x8001EA04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EA08: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8001EA0C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001EA10: sw          $t6, -0x3560($at)
    MEM_W(-0X3560, ctx->r1) = ctx->r14;
    // 0x8001EA14: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8001EA18: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001EA1C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001EA20: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8001EA24: lw          $a1, -0x3560($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3560);
    // 0x8001EA28: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8001EA2C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8001EA30: jal         0x8000068C
    // 0x8001EA34: nop

    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x8001EA34: nop

    after_0:
    // 0x8001EA38: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001EA3C: lw          $t1, 0x76D4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X76D4);
    // 0x8001EA40: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8001EA44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EA48: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8001EA4C: sw          $t3, 0x76D4($at)
    MEM_W(0X76D4, ctx->r1) = ctx->r11;
    // 0x8001EA50: b           L_8001EA58
    // 0x8001EA54: nop

        goto L_8001EA58;
    // 0x8001EA54: nop

L_8001EA58:
    // 0x8001EA58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001EA5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001EA60: jr          $ra
    // 0x8001EA64: nop

    return;
    // 0x8001EA64: nop

;}
RECOMP_FUNC void func_8002F738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002F73C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F740: jal         0x8001ECB8
    // 0x8002F744: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x8002F744: nop

    after_0:
    // 0x8002F748: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x8002F74C: addiu       $t6, $t6, -0xA68
    ctx->r14 = ADD32(ctx->r14, -0XA68);
    // 0x8002F750: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002F754: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x8002F758: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x8002F75C: addiu       $t7, $t7, -0xCD4
    ctx->r15 = ADD32(ctx->r15, -0XCD4);
    // 0x8002F760: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002F764: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x8002F768: jal         0x8002F000
    // 0x8002F76C: nop

    Debug_SetupSetMode(rdram, ctx);
        goto after_1;
    // 0x8002F76C: nop

    after_1:
    // 0x8002F770: jal         0x80000964
    // 0x8002F774: nop

    func_80000964(rdram, ctx);
        goto after_2;
    // 0x8002F774: nop

    after_2:
    // 0x8002F778: b           L_8002F780
    // 0x8002F77C: nop

        goto L_8002F780;
    // 0x8002F77C: nop

L_8002F780:
    // 0x8002F780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002F788: jr          $ra
    // 0x8002F78C: nop

    return;
    // 0x8002F78C: nop

;}
RECOMP_FUNC void alFxParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046D14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80046D18: bne         $a1, $at, L_80046D24
    if (ctx->r5 != ctx->r1) {
        // 0x80046D1C: nop
    
            goto L_80046D24;
    }
    // 0x80046D1C: nop

    // 0x80046D20: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_80046D24:
    // 0x80046D24: jr          $ra
    // 0x80046D28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80046D28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80016EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016EEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80016EF0: lh          $t6, 0x76DE($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X76DE);
    // 0x80016EF4: nop

    // 0x80016EF8: beq         $t6, $zero, L_80016F20
    if (ctx->r14 == 0) {
        // 0x80016EFC: nop
    
            goto L_80016F20;
    }
    // 0x80016EFC: nop

    // 0x80016F00: jal         0x800041E0
    // 0x80016F04: nop

    func_800041E0(rdram, ctx);
        goto after_0;
    // 0x80016F04: nop

    after_0:
    // 0x80016F08: bne         $v0, $zero, L_80016F20
    if (ctx->r2 != 0) {
        // 0x80016F0C: nop
    
            goto L_80016F20;
    }
    // 0x80016F0C: nop

    // 0x80016F10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80016F14: lh          $a0, 0x76E2($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X76E2);
    // 0x80016F18: jal         0x8000401C
    // 0x80016F1C: nop

    func_8000401C(rdram, ctx);
        goto after_1;
    // 0x80016F1C: nop

    after_1:
L_80016F20:
    // 0x80016F20: b           L_80016F28
    // 0x80016F24: nop

        goto L_80016F28;
    // 0x80016F24: nop

L_80016F28:
    // 0x80016F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016F30: jr          $ra
    // 0x80016F34: nop

    return;
    // 0x80016F34: nop

;}
RECOMP_FUNC void func_800012B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800012B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800012B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800012B8: lui         $t6, 0x1A
    ctx->r14 = S32(0X1A << 16);
    // 0x800012BC: lui         $t7, 0x1A
    ctx->r15 = S32(0X1A << 16);
    // 0x800012C0: addiu       $t7, $t7, -0x39F0
    ctx->r15 = ADD32(ctx->r15, -0X39F0);
    // 0x800012C4: addiu       $t6, $t6, -0x7EC0
    ctx->r14 = ADD32(ctx->r14, -0X7EC0);
    // 0x800012C8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800012CC: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800012D0: jal         0x8000068C
    // 0x800012D4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800012D4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x800012D8: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x800012DC: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x800012E0: addiu       $t9, $t9, -0x5470
    ctx->r25 = ADD32(ctx->r25, -0X5470);
    // 0x800012E4: addiu       $t8, $t8, -0x55B0
    ctx->r24 = ADD32(ctx->r24, -0X55B0);
    // 0x800012E8: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x800012EC: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x800012F0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800012F4: jal         0x8000068C
    // 0x800012F8: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x800012F8: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x800012FC: b           L_80001304
    // 0x80001300: nop

        goto L_80001304;
    // 0x80001300: nop

L_80001304:
    // 0x80001304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000130C: jr          $ra
    // 0x80001310: nop

    return;
    // 0x80001310: nop

;}
RECOMP_FUNC void func_8001B62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B62C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001B630: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B634: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001B638: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B63C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001B640: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8001B644: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001B648: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8001B64C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001B650: lh          $t9, 0x4290($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4290);
    // 0x8001B654: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001B658: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001B65C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8001B660: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001B664: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8001B668: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001B66C: lwc1        $f4, 0x52B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X52B4);
    // 0x8001B670: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8001B674: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001B678: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001B67C: nop

    // 0x8001B680: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8001B684: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8001B688: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8001B68C: bgez        $t2, L_8001B69C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8001B690: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_8001B69C;
    }
    // 0x8001B690: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8001B694: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x8001B698: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_8001B69C:
    // 0x8001B69C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8001B6A0: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8001B6A4: jr          $ra
    // 0x8001B6A8: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    return;
    // 0x8001B6A8: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001B6AC: jr          $ra
    // 0x8001B6B0: nop

    return;
    // 0x8001B6B0: nop

    // 0x8001B6B4: jr          $ra
    // 0x8001B6B8: nop

    return;
    // 0x8001B6B8: nop

;}
RECOMP_FUNC void func_80000C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000C94: lui         $t6, 0x14
    ctx->r14 = S32(0X14 << 16);
    // 0x80000C98: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x80000C9C: addiu       $t7, $t7, -0x3AC0
    ctx->r15 = ADD32(ctx->r15, -0X3AC0);
    // 0x80000CA0: addiu       $t6, $t6, 0x7BB0
    ctx->r14 = ADD32(ctx->r14, 0X7BB0);
    // 0x80000CA4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80000CA8: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80000CAC: jal         0x8000068C
    // 0x80000CB0: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000CB0: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    after_0:
    // 0x80000CB4: lui         $t8, 0x15
    ctx->r24 = S32(0X15 << 16);
    // 0x80000CB8: lui         $t9, 0x15
    ctx->r25 = S32(0X15 << 16);
    // 0x80000CBC: addiu       $t9, $t9, 0x3B70
    ctx->r25 = ADD32(ctx->r25, 0X3B70);
    // 0x80000CC0: addiu       $t8, $t8, 0x28A0
    ctx->r24 = ADD32(ctx->r24, 0X28A0);
    // 0x80000CC4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80000CC8: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    // 0x80000CCC: jal         0x8000068C
    // 0x80000CD0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80000CD0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_1:
    // 0x80000CD4: b           L_80000CDC
    // 0x80000CD8: nop

        goto L_80000CDC;
    // 0x80000CD8: nop

L_80000CDC:
    // 0x80000CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000CE4: jr          $ra
    // 0x80000CE8: nop

    return;
    // 0x80000CE8: nop

;}
RECOMP_FUNC void thread1_idle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800005E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800005E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800005EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800005F0: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800005F4: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x800005F8: addiu       $a2, $a2, -0x2C10
    ctx->r6 = ADD32(ctx->r6, -0X2C10);
    // 0x800005FC: addiu       $a1, $a1, -0x28F0
    ctx->r5 = ADD32(ctx->r5, -0X28F0);
    // 0x80000600: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x80000604: jal         0x80031350
    // 0x80000608: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    osCreatePiManager_recomp(rdram, ctx);
        goto after_0;
    // 0x80000608: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x8000060C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80000610: addiu       $t6, $t6, 0xD38
    ctx->r14 = ADD32(ctx->r14, 0XD38);
    // 0x80000614: addiu       $t7, $t6, 0x1000
    ctx->r15 = ADD32(ctx->r14, 0X1000);
    // 0x80000618: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000061C: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80000620: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80000624: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80000628: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8000062C: addiu       $a2, $a2, 0x1A74
    ctx->r6 = ADD32(ctx->r6, 0X1A74);
    // 0x80000630: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x80000634: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80000638: jal         0x800310B0
    // 0x8000063C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x8000063C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x80000640: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80000644: lw          $t9, -0x5C7C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5C7C);
    // 0x80000648: nop

    // 0x8000064C: bne         $t9, $zero, L_80000660
    if (ctx->r25 != 0) {
        // 0x80000650: nop
    
            goto L_80000660;
    }
    // 0x80000650: nop

    // 0x80000654: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80000658: jal         0x80031200
    // 0x8000065C: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x8000065C: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    after_2:
L_80000660:
    // 0x80000660: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80000664: jal         0x800314E0
    // 0x80000668: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osSetThreadPri_recomp(rdram, ctx);
        goto after_3;
    // 0x80000668: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_8000066C:
    // 0x8000066C: b           L_8000066C
    pause_self(rdram);
    // 0x80000670: nop

    // 0x80000674: b           L_8000067C
    // 0x80000678: nop

        goto L_8000067C;
    // 0x80000678: nop

L_8000067C:
    // 0x8000067C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80000680: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80000684: jr          $ra
    // 0x80000688: nop

    return;
    // 0x80000688: nop

;}
RECOMP_FUNC void func_80023904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80023904: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80023908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002390C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80023910: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80023914: nop

    // 0x80023918: lh          $t7, 0x104($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X104);
    // 0x8002391C: nop

    // 0x80023920: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80023924: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80023928: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8002392C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80023930: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80023934: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80023938: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002393C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80023940: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80023944: lb          $t0, 0x4252($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4252);
    // 0x80023948: nop

    // 0x8002394C: beq         $t0, $zero, L_8002396C
    if (ctx->r8 == 0) {
        // 0x80023950: nop
    
            goto L_8002396C;
    }
    // 0x80023950: nop

    // 0x80023954: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80023958: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002395C: sw          $t1, 0x7648($at)
    MEM_W(0X7648, ctx->r1) = ctx->r9;
    // 0x80023960: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80023964: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023968: sb          $t2, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r10;
L_8002396C:
    // 0x8002396C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80023970: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023974: sw          $t3, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r11;
    // 0x80023978: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8002397C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023980: sw          $t4, 0x7A64($at)
    MEM_W(0X7A64, ctx->r1) = ctx->r12;
    // 0x80023984: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80023988: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8002398C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80023990: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80023994: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80023998: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002399C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800239A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800239A4: lh          $t7, 0x4234($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4234);
    // 0x800239A8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800239AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800239B0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800239B4: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x800239B8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800239BC: lw          $t9, 0x4DAC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DAC);
    // 0x800239C0: nop

    // 0x800239C4: jalr        $t9
    // 0x800239C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800239C8: nop

    after_0:
    // 0x800239CC: b           L_800239D4
    // 0x800239D0: nop

        goto L_800239D4;
    // 0x800239D0: nop

L_800239D4:
    // 0x800239D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800239D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800239DC: jr          $ra
    // 0x800239E0: nop

    return;
    // 0x800239E0: nop

;}
RECOMP_FUNC void Math_WrapAngle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015538: add.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x8001553C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80015540: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80015544: nop

    // 0x80015548: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x8001554C: nop

    // 0x80015550: bc1f        L_80015568
    if (!c1cs) {
        // 0x80015554: nop
    
            goto L_80015568;
    }
    // 0x80015554: nop

    // 0x80015558: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8001555C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80015560: b           L_80015590
    // 0x80015564: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
        goto L_80015590;
    // 0x80015564: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
L_80015568:
    // 0x80015568: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001556C: nop

    // 0x80015570: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x80015574: nop

    // 0x80015578: bc1f        L_80015590
    if (!c1cs) {
        // 0x8001557C: nop
    
            goto L_80015590;
    }
    // 0x8001557C: nop

    // 0x80015580: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80015584: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80015588: nop

    // 0x8001558C: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_80015590:
    // 0x80015590: jr          $ra
    // 0x80015594: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x80015594: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x80015598: jr          $ra
    // 0x8001559C: nop

    return;
    // 0x8001559C: nop

    // 0x800155A0: jr          $ra
    // 0x800155A4: nop

    return;
    // 0x800155A4: nop

;}
RECOMP_FUNC void func_8001CDF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CDF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001CDF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CDFC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001CE00: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001CE04: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001CE08: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001CE0C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8001CE10: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8001CE14: jal         0x80019510
    // 0x8001CE18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80019510(rdram, ctx);
        goto after_0;
    // 0x8001CE18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001CE1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001CE20: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8001CE24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001CE28: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8001CE2C: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8001CE30: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8001CE34: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8001CE38: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x8001CE3C: lb          $t9, 0x8($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X8);
    // 0x8001CE40: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CE44: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8001CE48: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x8001CE4C: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x8001CE50: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x8001CE54: ori         $t4, $t3, 0x6
    ctx->r12 = ctx->r11 | 0X6;
    // 0x8001CE58: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8001CE5C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8001CE60: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CE64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001CE68: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8001CE6C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8001CE70: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8001CE74: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8001CE78: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8001CE7C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8001CE80: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8001CE84: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8001CE88: addiu       $t3, $t2, 0x14
    ctx->r11 = ADD32(ctx->r10, 0X14);
    // 0x8001CE8C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8001CE90: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8001CE94: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8001CE98: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8001CE9C: nop

    // 0x8001CEA0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8001CEA4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8001CEA8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001CEAC: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8001CEB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001CEB4: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8001CEB8: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8001CEBC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8001CEC0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8001CEC4: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8001CEC8: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8001CECC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8001CED0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8001CED4: nop

    // 0x8001CED8: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8001CEDC: b           L_8001CEE4
    // 0x8001CEE0: nop

        goto L_8001CEE4;
    // 0x8001CEE0: nop

L_8001CEE4:
    // 0x8001CEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CEE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001CEEC: jr          $ra
    // 0x8001CEF0: nop

    return;
    // 0x8001CEF0: nop

;}
RECOMP_FUNC void func_80001750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001758: lui         $t6, 0x1E
    ctx->r14 = S32(0X1E << 16);
    // 0x8000175C: lui         $t7, 0x1F
    ctx->r15 = S32(0X1F << 16);
    // 0x80001760: addiu       $t7, $t7, -0x27A0
    ctx->r15 = ADD32(ctx->r15, -0X27A0);
    // 0x80001764: addiu       $t6, $t6, 0x7490
    ctx->r14 = ADD32(ctx->r14, 0X7490);
    // 0x80001768: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000176C: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001770: jal         0x8000068C
    // 0x80001774: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001774: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001778: b           L_80001780
    // 0x8000177C: nop

        goto L_80001780;
    // 0x8000177C: nop

L_80001780:
    // 0x80001780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001788: jr          $ra
    // 0x8000178C: nop

    return;
    // 0x8000178C: nop

;}
RECOMP_FUNC void alFxParamHdl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046AB8: addiu       $v1, $a1, -0x2
    ctx->r3 = ADD32(ctx->r5, -0X2);
    // 0x80046ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80046AC0: andi        $t6, $v1, 0x7
    ctx->r14 = ctx->r3 & 0X7;
    // 0x80046AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80046AC8: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x80046ACC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80046AD0: beq         $at, $zero, L_80046D00
    if (ctx->r1 == 0) {
        // 0x80046AD4: lw          $t0, 0x0($a2)
        ctx->r8 = MEM_W(ctx->r6, 0X0);
            goto L_80046D00;
    }
    // 0x80046AD4: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x80046AD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80046ADC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80046AE0: addu        $at, $at, $t6
    gpr jr_addend_80046AE8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80046AE4: lw          $t6, -0x3760($at)
    ctx->r14 = ADD32(ctx->r1, -0X3760);
    // 0x80046AE8: jr          $t6
    // 0x80046AEC: nop

    switch (jr_addend_80046AE8 >> 2) {
        case 0: goto L_80046AF0; break;
        case 1: goto L_80046B24; break;
        case 2: goto L_80046B84; break;
        case 3: goto L_80046B58; break;
        case 4: goto L_80046BB0; break;
        case 5: goto L_80046BDC; break;
        case 6: goto L_80046C44; break;
        case 7: goto L_80046CBC; break;
        default: switch_error(__func__, 0x80046AE8, 0x8004C8A0);
    }
    // 0x80046AEC: nop

L_80046AF0:
    // 0x80046AF0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80046AF4: and         $t7, $t0, $at
    ctx->r15 = ctx->r8 & ctx->r1;
    // 0x80046AF8: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x80046AFC: bgez        $v1, L_80046B0C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80046B00: sra         $t9, $v1, 3
        ctx->r25 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80046B0C;
    }
    // 0x80046B00: sra         $t9, $v1, 3
    ctx->r25 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80046B04: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80046B08: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_80046B0C:
    // 0x80046B0C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80046B10: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80046B14: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80046B18: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x80046B1C: b           L_80046D00
    // 0x80046B20: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
        goto L_80046D00;
    // 0x80046B20: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
L_80046B24:
    // 0x80046B24: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80046B28: and         $t3, $t0, $at
    ctx->r11 = ctx->r8 & ctx->r1;
    // 0x80046B2C: lw          $t4, 0x20($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X20);
    // 0x80046B30: bgez        $v1, L_80046B40
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80046B34: sra         $t5, $v1, 3
        ctx->r13 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80046B40;
    }
    // 0x80046B34: sra         $t5, $v1, 3
    ctx->r13 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80046B38: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80046B3C: sra         $t5, $at, 3
    ctx->r13 = S32(SIGNED(ctx->r1) >> 3);
L_80046B40:
    // 0x80046B40: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80046B44: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80046B48: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80046B4C: addu        $t9, $t4, $t6
    ctx->r25 = ADD32(ctx->r12, ctx->r14);
    // 0x80046B50: b           L_80046D00
    // 0x80046B54: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
        goto L_80046D00;
    // 0x80046B54: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
L_80046B58:
    // 0x80046B58: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x80046B5C: bgez        $v1, L_80046B6C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80046B60: sra         $t1, $v1, 3
        ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80046B6C;
    }
    // 0x80046B60: sra         $t1, $v1, 3
    ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80046B64: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80046B68: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_80046B6C:
    // 0x80046B6C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80046B70: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80046B74: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80046B78: addu        $t2, $t8, $t7
    ctx->r10 = ADD32(ctx->r24, ctx->r15);
    // 0x80046B7C: b           L_80046D00
    // 0x80046B80: sh          $t0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r8;
        goto L_80046D00;
    // 0x80046B80: sh          $t0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r8;
L_80046B84:
    // 0x80046B84: lw          $t5, 0x20($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X20);
    // 0x80046B88: bgez        $v1, L_80046B98
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80046B8C: sra         $t4, $v1, 3
        ctx->r12 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80046B98;
    }
    // 0x80046B8C: sra         $t4, $v1, 3
    ctx->r12 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80046B90: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80046B94: sra         $t4, $at, 3
    ctx->r12 = S32(SIGNED(ctx->r1) >> 3);
L_80046B98:
    // 0x80046B98: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80046B9C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80046BA0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80046BA4: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x80046BA8: b           L_80046D00
    // 0x80046BAC: sh          $t0, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r8;
        goto L_80046D00;
    // 0x80046BAC: sh          $t0, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r8;
L_80046BB0:
    // 0x80046BB0: lw          $t9, 0x20($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X20);
    // 0x80046BB4: bgez        $v1, L_80046BC4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80046BB8: sra         $t1, $v1, 3
        ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80046BC4;
    }
    // 0x80046BB8: sra         $t1, $v1, 3
    ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80046BBC: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80046BC0: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_80046BC4:
    // 0x80046BC4: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80046BC8: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x80046BCC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80046BD0: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80046BD4: b           L_80046D00
    // 0x80046BD8: sh          $t0, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r8;
        goto L_80046D00;
    // 0x80046BD8: sh          $t0, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r8;
L_80046BDC:
    // 0x80046BDC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80046BE0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80046BE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80046BE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80046BEC: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80046BF0: lw          $t2, -0x4AF0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4AF0);
    // 0x80046BF4: lw          $t5, 0x20($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X20);
    // 0x80046BF8: lw          $t4, 0x44($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X44);
    // 0x80046BFC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80046C00: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80046C04: nop

    // 0x80046C08: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x80046C0C: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x80046C10: add.d       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f0.d + ctx->f0.d;
    // 0x80046C14: div.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f16.d, ctx->f4.d);
    // 0x80046C18: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80046C1C: bgez        $v1, L_80046C2C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80046C20: sra         $t6, $v1, 3
        ctx->r14 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80046C2C;
    }
    // 0x80046C20: sra         $t6, $v1, 3
    ctx->r14 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80046C24: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80046C28: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80046C2C:
    // 0x80046C2C: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80046C30: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80046C34: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80046C38: addu        $t1, $t5, $t3
    ctx->r9 = ADD32(ctx->r13, ctx->r11);
    // 0x80046C3C: b           L_80046D00
    // 0x80046C40: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
        goto L_80046D00;
    // 0x80046C40: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
L_80046C44:
    // 0x80046C44: lw          $t9, 0x20($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X20);
    // 0x80046C48: bgez        $v1, L_80046C58
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80046C4C: sra         $t8, $v1, 3
        ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80046C58;
    }
    // 0x80046C4C: sra         $t8, $v1, 3
    ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80046C50: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80046C54: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_80046C58:
    // 0x80046C58: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80046C5C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80046C60: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80046C64: addu        $v0, $t9, $t7
    ctx->r2 = ADD32(ctx->r25, ctx->r15);
    // 0x80046C68: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x80046C6C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80046C70: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80046C74: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80046C78: subu        $t6, $t2, $t4
    ctx->r14 = SUB32(ctx->r10, ctx->r12);
    // 0x80046C7C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80046C80: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80046C84: bgez        $t6, L_80046C9C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80046C88: cvt.d.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
            goto L_80046C9C;
    }
    // 0x80046C88: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x80046C8C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80046C90: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80046C94: nop

    // 0x80046C98: add.d       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f18.d + ctx->f16.d;
L_80046C9C:
    // 0x80046C9C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80046CA0: ldc1        $f10, -0x3740($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3740);
    // 0x80046CA4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80046CA8: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80046CAC: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x80046CB0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80046CB4: b           L_80046D00
    // 0x80046CB8: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
        goto L_80046D00;
    // 0x80046CB8: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
L_80046CBC:
    // 0x80046CBC: bgez        $v1, L_80046CCC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80046CC0: sra         $v0, $v1, 3
        ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80046CCC;
    }
    // 0x80046CC0: sra         $v0, $v1, 3
    ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80046CC4: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80046CC8: sra         $v0, $at, 3
    ctx->r2 = S32(SIGNED(ctx->r1) >> 3);
L_80046CCC:
    // 0x80046CCC: lw          $t3, 0x20($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X20);
    // 0x80046CD0: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x80046CD4: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x80046CD8: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80046CDC: addu        $t1, $t3, $t5
    ctx->r9 = ADD32(ctx->r11, ctx->r13);
    // 0x80046CE0: lw          $a1, 0x20($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X20);
    // 0x80046CE4: beql        $a1, $zero, L_80046D04
    if (ctx->r5 == 0) {
        // 0x80046CE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80046D04;
    }
    goto skip_0;
    // 0x80046CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80046CEC: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    // 0x80046CF0: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x80046CF4: addu        $t9, $t8, $t5
    ctx->r25 = ADD32(ctx->r24, ctx->r13);
    // 0x80046CF8: jal         0x8003F530
    // 0x80046CFC: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    init_lpfilter(rdram, ctx);
        goto after_0;
    // 0x80046CFC: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    after_0:
L_80046D00:
    // 0x80046D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80046D04:
    // 0x80046D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80046D08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80046D0C: jr          $ra
    // 0x80046D10: nop

    return;
    // 0x80046D10: nop

;}
RECOMP_FUNC void func_800013DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800013DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800013E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800013E4: lui         $t6, 0x1B
    ctx->r14 = S32(0X1B << 16);
    // 0x800013E8: lui         $t7, 0x1B
    ctx->r15 = S32(0X1B << 16);
    // 0x800013EC: addiu       $t7, $t7, -0x1330
    ctx->r15 = ADD32(ctx->r15, -0X1330);
    // 0x800013F0: addiu       $t6, $t6, -0x43A0
    ctx->r14 = ADD32(ctx->r14, -0X43A0);
    // 0x800013F4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800013F8: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800013FC: jal         0x8000068C
    // 0x80001400: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001400: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001404: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x80001408: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x8000140C: addiu       $t9, $t9, -0x6F30
    ctx->r25 = ADD32(ctx->r25, -0X6F30);
    // 0x80001410: addiu       $t8, $t8, -0x7CE0
    ctx->r24 = ADD32(ctx->r24, -0X7CE0);
    // 0x80001414: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x80001418: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x8000141C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80001420: jal         0x8000068C
    // 0x80001424: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80001424: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x80001428: b           L_80001430
    // 0x8000142C: nop

        goto L_80001430;
    // 0x8000142C: nop

L_80001430:
    // 0x80001430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001438: jr          $ra
    // 0x8000143C: nop

    return;
    // 0x8000143C: nop

;}
RECOMP_FUNC void func_80016714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016714: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80016718: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001671C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80016720: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80016724: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80016728: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8001672C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x80016730: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x80016734: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80016738: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x8001673C: jal         0x80036A68
    // 0x80016740: nop

    __ll_mul_recomp(rdram, ctx);
        goto after_0;
    // 0x80016740: nop

    after_0:
    // 0x80016744: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80016748: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8001674C: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x80016750: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x80016754: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80016758: jal         0x80036A68
    // 0x8001675C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    __ll_mul_recomp(rdram, ctx);
        goto after_1;
    // 0x8001675C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_1:
    // 0x80016760: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80016764: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80016768: subu        $t8, $t6, $v0
    ctx->r24 = SUB32(ctx->r14, ctx->r2);
    // 0x8001676C: sltu        $at, $t7, $v1
    ctx->r1 = ctx->r15 < ctx->r3 ? 1 : 0;
    // 0x80016770: subu        $t8, $t8, $at
    ctx->r24 = SUB32(ctx->r24, ctx->r1);
    // 0x80016774: subu        $t9, $t7, $v1
    ctx->r25 = SUB32(ctx->r15, ctx->r3);
    // 0x80016778: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x8001677C: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80016780: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80016784: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x80016788: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x8001678C: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x80016790: jal         0x80036A68
    // 0x80016794: nop

    __ll_mul_recomp(rdram, ctx);
        goto after_2;
    // 0x80016794: nop

    after_2:
    // 0x80016798: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8001679C: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x800167A0: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x800167A4: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x800167A8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800167AC: jal         0x80036A68
    // 0x800167B0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    __ll_mul_recomp(rdram, ctx);
        goto after_3;
    // 0x800167B0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_3:
    // 0x800167B4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800167B8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800167BC: subu        $t2, $t0, $v0
    ctx->r10 = SUB32(ctx->r8, ctx->r2);
    // 0x800167C0: sltu        $at, $t1, $v1
    ctx->r1 = ctx->r9 < ctx->r3 ? 1 : 0;
    // 0x800167C4: subu        $t2, $t2, $at
    ctx->r10 = SUB32(ctx->r10, ctx->r1);
    // 0x800167C8: subu        $t3, $t1, $v1
    ctx->r11 = SUB32(ctx->r9, ctx->r3);
    // 0x800167CC: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x800167D0: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x800167D4: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x800167D8: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x800167DC: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x800167E0: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x800167E4: jal         0x80036A68
    // 0x800167E8: nop

    __ll_mul_recomp(rdram, ctx);
        goto after_4;
    // 0x800167E8: nop

    after_4:
    // 0x800167EC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800167F0: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800167F4: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x800167F8: lw          $a3, 0x8C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8C);
    // 0x800167FC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80016800: jal         0x80036A68
    // 0x80016804: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    __ll_mul_recomp(rdram, ctx);
        goto after_5;
    // 0x80016804: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_5:
    // 0x80016808: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8001680C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80016810: subu        $t6, $t4, $v0
    ctx->r14 = SUB32(ctx->r12, ctx->r2);
    // 0x80016814: sltu        $at, $t5, $v1
    ctx->r1 = ctx->r13 < ctx->r3 ? 1 : 0;
    // 0x80016818: subu        $t6, $t6, $at
    ctx->r14 = SUB32(ctx->r14, ctx->r1);
    // 0x8001681C: subu        $t7, $t5, $v1
    ctx->r15 = SUB32(ctx->r13, ctx->r3);
    // 0x80016820: sltiu       $at, $t7, 0x1
    ctx->r1 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x80016824: nor         $t8, $t6, $zero
    ctx->r24 = ~(ctx->r14 | 0);
    // 0x80016828: addu        $t8, $t8, $at
    ctx->r24 = ADD32(ctx->r24, ctx->r1);
    // 0x8001682C: negu        $t9, $t7
    ctx->r25 = SUB32(0, ctx->r15);
    // 0x80016830: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80016834: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80016838: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8001683C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80016840: bne         $t0, $zero, L_80016850
    if (ctx->r8 != 0) {
        // 0x80016844: nop
    
            goto L_80016850;
    }
    // 0x80016844: nop

    // 0x80016848: beq         $t1, $zero, L_800168B0
    if (ctx->r9 == 0) {
        // 0x8001684C: nop
    
            goto L_800168B0;
    }
    // 0x8001684C: nop

L_80016850:
    // 0x80016850: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80016854: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80016858: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8001685C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80016860: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80016864: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80016868: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8001686C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80016870: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x80016874: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x80016878: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8001687C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80016880: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80016884: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80016888: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8001688C: jal         0x80015C24
    // 0x80016890: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    Math_SolvePlaneX(rdram, ctx);
        goto after_6;
    // 0x80016890: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_6:
    // 0x80016894: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x80016898: nop

    // 0x8001689C: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x800168A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800168A4: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x800168A8: b           L_80016948
    // 0x800168AC: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
        goto L_80016948;
    // 0x800168AC: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
L_800168B0:
    // 0x800168B0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800168B4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800168B8: bne         $t0, $zero, L_800168C8
    if (ctx->r8 != 0) {
        // 0x800168BC: nop
    
            goto L_800168C8;
    }
    // 0x800168BC: nop

    // 0x800168C0: beq         $t1, $zero, L_80016928
    if (ctx->r9 == 0) {
        // 0x800168C4: nop
    
            goto L_80016928;
    }
    // 0x800168C4: nop

L_800168C8:
    // 0x800168C8: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800168CC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800168D0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800168D4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800168D8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800168DC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800168E0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800168E4: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x800168E8: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x800168EC: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x800168F0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800168F4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800168F8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800168FC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80016900: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80016904: jal         0x80015E34
    // 0x80016908: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    Math_SolvePlaneZ(rdram, ctx);
        goto after_7;
    // 0x80016908: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_7:
    // 0x8001690C: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x80016910: nop

    // 0x80016914: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x80016918: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001691C: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x80016920: b           L_80016948
    // 0x80016924: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
        goto L_80016948;
    // 0x80016924: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
L_80016928:
    // 0x80016928: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001692C: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x80016930: nop

    // 0x80016934: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x80016938: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001693C: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x80016940: nop

    // 0x80016944: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
L_80016948:
    // 0x80016948: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8001694C: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80016950: bne         $t2, $zero, L_80016960
    if (ctx->r10 != 0) {
        // 0x80016954: nop
    
            goto L_80016960;
    }
    // 0x80016954: nop

    // 0x80016958: beq         $t3, $zero, L_800169C8
    if (ctx->r11 == 0) {
        // 0x8001695C: nop
    
            goto L_800169C8;
    }
    // 0x8001695C: nop

L_80016960:
    // 0x80016960: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80016964: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80016968: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8001696C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80016970: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80016974: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80016978: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8001697C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80016980: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80016984: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x80016988: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x8001698C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80016990: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80016994: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80016998: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8001699C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800169A0: jal         0x80015C24
    // 0x800169A4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    Math_SolvePlaneX(rdram, ctx);
        goto after_8;
    // 0x800169A4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_8:
    // 0x800169A8: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x800169AC: nop

    // 0x800169B0: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
    // 0x800169B4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800169B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800169BC: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x800169C0: b           L_80016A68
    // 0x800169C4: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
        goto L_80016A68;
    // 0x800169C4: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
L_800169C8:
    // 0x800169C8: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800169CC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800169D0: bne         $t2, $zero, L_800169E0
    if (ctx->r10 != 0) {
        // 0x800169D4: nop
    
            goto L_800169E0;
    }
    // 0x800169D4: nop

    // 0x800169D8: beq         $t3, $zero, L_80016A48
    if (ctx->r11 == 0) {
        // 0x800169DC: nop
    
            goto L_80016A48;
    }
    // 0x800169DC: nop

L_800169E0:
    // 0x800169E0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800169E4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800169E8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800169EC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800169F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800169F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800169F8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800169FC: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80016A00: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80016A04: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x80016A08: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x80016A0C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80016A10: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80016A14: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80016A18: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80016A1C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80016A20: jal         0x80015E34
    // 0x80016A24: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    Math_SolvePlaneZ(rdram, ctx);
        goto after_9;
    // 0x80016A24: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_9:
    // 0x80016A28: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x80016A2C: nop

    // 0x80016A30: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
    // 0x80016A34: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80016A38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80016A3C: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x80016A40: b           L_80016A68
    // 0x80016A44: swc1        $f18, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f18.u32l;
        goto L_80016A68;
    // 0x80016A44: swc1        $f18, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f18.u32l;
L_80016A48:
    // 0x80016A48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80016A4C: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x80016A50: nop

    // 0x80016A54: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x80016A58: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80016A5C: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x80016A60: nop

    // 0x80016A64: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
L_80016A68:
    // 0x80016A68: b           L_80016A70
    // 0x80016A6C: nop

        goto L_80016A70;
    // 0x80016A6C: nop

L_80016A70:
    // 0x80016A70: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80016A74: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80016A78: jr          $ra
    // 0x80016A7C: nop

    return;
    // 0x80016A7C: nop

;}
RECOMP_FUNC void alEvtqNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E9BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003E9C0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003E9C4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003E9C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003E9CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003E9D0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003E9D4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8003E9D8: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8003E9DC: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8003E9E0: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8003E9E4: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8003E9E8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8003E9EC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8003E9F0: blez        $a2, L_8003EA14
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8003E9F4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8003EA14;
    }
    // 0x8003E9F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E9F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
L_8003E9FC:
    // 0x8003E9FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003EA00: jal         0x800357E0
    // 0x8003EA04: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_0;
    // 0x8003EA04: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x8003EA08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003EA0C: bne         $s0, $s3, L_8003E9FC
    if (ctx->r16 != ctx->r19) {
        // 0x8003EA10: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_8003E9FC;
    }
    // 0x8003EA10: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
L_8003EA14:
    // 0x8003EA14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003EA18: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003EA1C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003EA20: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EA24: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003EA28: jr          $ra
    // 0x8003EA2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003EA2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000281C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000281C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002824: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80002828: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8000282C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80002830: lw          $t7, 0x274($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X274);
    // 0x80002834: nop

    // 0x80002838: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8000283C: nop

    // 0x80002840: bne         $t8, $at, L_80002878
    if (ctx->r24 != ctx->r1) {
        // 0x80002844: nop
    
            goto L_80002878;
    }
    // 0x80002844: nop

    // 0x80002848: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8000284C: nop

    // 0x80002850: lw          $t0, 0x274($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X274);
    // 0x80002854: nop

    // 0x80002858: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x8000285C: nop

    // 0x80002860: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x80002864: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x80002868: jal         0x80032680
    // 0x8000286C: nop

    osSpTaskYield_recomp(rdram, ctx);
        goto after_0;
    // 0x8000286C: nop

    after_0:
    // 0x80002870: b           L_80002878
    // 0x80002874: nop

        goto L_80002878;
    // 0x80002874: nop

L_80002878:
    // 0x80002878: b           L_80002880
    // 0x8000287C: nop

        goto L_80002880;
    // 0x8000287C: nop

L_80002880:
    // 0x80002880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002888: jr          $ra
    // 0x8000288C: nop

    return;
    // 0x8000288C: nop

;}
RECOMP_FUNC void func_80002DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002DD4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80002DD8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80002DDC: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80002DE0: nop

    // 0x80002DE4: bgez        $t6, L_80002DF4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80002DE8: nop
    
            goto L_80002DF4;
    }
    // 0x80002DE8: nop

    // 0x80002DEC: b           L_80002E0C
    // 0x80002DF0: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
        goto L_80002E0C;
    // 0x80002DF0: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_80002DF4:
    // 0x80002DF4: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x80002DF8: nop

    // 0x80002DFC: slt         $at, $a1, $t7
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80002E00: beq         $at, $zero, L_80002E0C
    if (ctx->r1 == 0) {
        // 0x80002E04: nop
    
            goto L_80002E0C;
    }
    // 0x80002E04: nop

    // 0x80002E08: sh          $a1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r5;
L_80002E0C:
    // 0x80002E0C: jr          $ra
    // 0x80002E10: nop

    return;
    // 0x80002E10: nop

    // 0x80002E14: jr          $ra
    // 0x80002E18: nop

    return;
    // 0x80002E18: nop

;}
RECOMP_FUNC void func_8002590C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002590C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80025910: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80025914: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80025918: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8002591C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80025920: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80025924: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80025928: lbu         $t7, 0x7653($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7653);
    // 0x8002592C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025930: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80025934: sb          $t7, 0x7498($at)
    MEM_B(0X7498, ctx->r1) = ctx->r15;
    // 0x80025938: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8002593C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80025940: lbu         $t9, 0x7654($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X7654);
    // 0x80025944: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025948: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8002594C: sb          $t9, 0x7499($at)
    MEM_B(0X7499, ctx->r1) = ctx->r25;
    // 0x80025950: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80025954: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80025958: lbu         $t1, 0x7655($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X7655);
    // 0x8002595C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025960: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80025964: sb          $t1, 0x749A($at)
    MEM_B(0X749A, ctx->r1) = ctx->r9;
    // 0x80025968: b           L_80025970
    // 0x8002596C: nop

        goto L_80025970;
    // 0x8002596C: nop

L_80025970:
    // 0x80025970: jr          $ra
    // 0x80025974: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80025974: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80009AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009AD0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80009AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009AD8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80009ADC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80009AE0: lw          $t7, 0x2D58($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D58);
    // 0x80009AE4: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x80009AE8: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x80009AEC: nop

    // 0x80009AF0: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80009AF4: beq         $at, $zero, L_80009B04
    if (ctx->r1 == 0) {
        // 0x80009AF8: nop
    
            goto L_80009B04;
    }
    // 0x80009AF8: nop

    // 0x80009AFC: bgez        $t6, L_80009B0C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80009B00: nop
    
            goto L_80009B0C;
    }
    // 0x80009B00: nop

L_80009B04:
    // 0x80009B04: b           L_80009B3C
    // 0x80009B08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80009B3C;
    // 0x80009B08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80009B0C:
    // 0x80009B0C: lh          $a0, 0x3A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3A);
    // 0x80009B10: jal         0x800069D0
    // 0x80009B14: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800069D0(rdram, ctx);
        goto after_0;
    // 0x80009B14: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x80009B18: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80009B1C: jal         0x80007140
    // 0x80009B20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80007140(rdram, ctx);
        goto after_1;
    // 0x80009B20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80009B24: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80009B28: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x80009B2C: b           L_80009B3C
    // 0x80009B30: nop

        goto L_80009B3C;
    // 0x80009B30: nop

    // 0x80009B34: b           L_80009B3C
    // 0x80009B38: nop

        goto L_80009B3C;
    // 0x80009B38: nop

L_80009B3C:
    // 0x80009B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80009B40: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80009B44: jr          $ra
    // 0x80009B48: nop

    return;
    // 0x80009B48: nop

;}
RECOMP_FUNC void Set_DecompressHeap(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E954: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E958: sw          $a0, 0x76D4($at)
    MEM_W(0X76D4, ctx->r1) = ctx->r4;
    // 0x8001E95C: jr          $ra
    // 0x8001E960: nop

    return;
    // 0x8001E960: nop

    // 0x8001E964: jr          $ra
    // 0x8001E968: nop

    return;
    // 0x8001E968: nop

;}
RECOMP_FUNC void __mapVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D440: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003D444: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8003D448: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8003D44C: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x8003D450: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8003D454: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8003D458: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x8003D45C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8003D460: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8003D464: beq         $v1, $zero, L_8003D4A8
    if (ctx->r3 == 0) {
        // 0x8003D468: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_8003D4A8;
    }
    // 0x8003D468: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8003D46C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8003D470: sw          $t9, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r25;
    // 0x8003D474: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8003D478: lw          $t0, 0x64($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X64);
    // 0x8003D47C: bnel        $t0, $zero, L_8003D490
    if (ctx->r8 != 0) {
        // 0x8003D480: lw          $t1, 0x68($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X68);
            goto L_8003D490;
    }
    goto skip_0;
    // 0x8003D480: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
    skip_0:
    // 0x8003D484: b           L_8003D494
    // 0x8003D488: sw          $v1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r3;
        goto L_8003D494;
    // 0x8003D488: sw          $v1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r3;
    // 0x8003D48C: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
L_8003D490:
    // 0x8003D490: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
L_8003D494:
    // 0x8003D494: sw          $v1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r3;
    // 0x8003D498: sb          $a3, 0x31($v1)
    MEM_B(0X31, ctx->r3) = ctx->r7;
    // 0x8003D49C: sb          $a1, 0x32($v1)
    MEM_B(0X32, ctx->r3) = ctx->r5;
    // 0x8003D4A0: sb          $a2, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r6;
    // 0x8003D4A4: sw          $v1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r3;
L_8003D4A8:
    // 0x8003D4A8: jr          $ra
    // 0x8003D4AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8003D4AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void Game_IsObjectPaused(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021418: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002141C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80021420: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021424: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80021428: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8002142C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80021430: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80021434: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80021438: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x8002143C: nop

    // 0x80021440: beq         $t9, $zero, L_800214A0
    if (ctx->r25 == 0) {
        // 0x80021444: nop
    
            goto L_800214A0;
    }
    // 0x80021444: nop

    // 0x80021448: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x8002144C: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80021450: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80021454: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80021458: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8002145C: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x80021460: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x80021464: nop

    // 0x80021468: beq         $t2, $zero, L_800214A0
    if (ctx->r10 == 0) {
        // 0x8002146C: nop
    
            goto L_800214A0;
    }
    // 0x8002146C: nop

    // 0x80021470: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x80021474: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x80021478: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8002147C: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x80021480: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80021484: addu        $t4, $t3, $t7
    ctx->r12 = ADD32(ctx->r11, ctx->r15);
    // 0x80021488: lh          $t5, 0x104($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X104);
    // 0x8002148C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80021490: bne         $t5, $at, L_800214A0
    if (ctx->r13 != ctx->r1) {
        // 0x80021494: nop
    
            goto L_800214A0;
    }
    // 0x80021494: nop

    // 0x80021498: jr          $ra
    // 0x8002149C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002149C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800214A0:
    // 0x800214A0: jr          $ra
    // 0x800214A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800214A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800214A8: jr          $ra
    // 0x800214AC: nop

    return;
    // 0x800214AC: nop

    // 0x800214B0: jr          $ra
    // 0x800214B4: nop

    return;
    // 0x800214B4: nop

;}
RECOMP_FUNC void func_8001ABF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ABF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001ABF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001ABFC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001AC00: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001AC04: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001AC08: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8001AC0C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001AC10: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001AC14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001AC18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001AC1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001AC20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001AC24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001AC28: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001AC2C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8001AC30: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8001AC34: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001AC38: lh          $t1, 0x4298($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4298);
    // 0x8001AC3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001AC40: beq         $t1, $at, L_8001AC54
    if (ctx->r9 == ctx->r1) {
        // 0x8001AC44: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_8001AC54;
    }
    // 0x8001AC44: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8001AC48: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AC4C: jal         0x80019CCC
    // 0x8001AC50: nop

    func_80019CCC(rdram, ctx);
        goto after_0;
    // 0x8001AC50: nop

    after_0:
L_8001AC54:
    // 0x8001AC54: jal         0x8001AA60
    // 0x8001AC58: nop

    func_8001AA60(rdram, ctx);
        goto after_1;
    // 0x8001AC58: nop

    after_1:
    // 0x8001AC5C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8001AC60: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8001AC64: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8001AC68: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8001AC6C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001AC70: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001AC74: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001AC78: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8001AC7C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8001AC80: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AC84: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x8001AC88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8001AC8C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001AC90: sh          $t2, 0x4298($at)
    MEM_H(0X4298, ctx->r1) = ctx->r10;
    // 0x8001AC94: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AC98: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001AC9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ACA0: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001ACA4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001ACA8: sw          $t7, -0x3D68($at)
    MEM_W(-0X3D68, ctx->r1) = ctx->r15;
    // 0x8001ACAC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001ACB0: jal         0x8001AB30
    // 0x8001ACB4: nop

    func_8001AB30(rdram, ctx);
        goto after_2;
    // 0x8001ACB4: nop

    after_2:
    // 0x8001ACB8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001ACBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ACC0: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x8001ACC4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001ACC8: sb          $v0, -0x3D64($at)
    MEM_B(-0X3D64, ctx->r1) = ctx->r2;
    // 0x8001ACCC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001ACD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ACD4: sll         $t4, $t5, 3
    ctx->r12 = S32(ctx->r13 << 3);
    // 0x8001ACD8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8001ACDC: sb          $zero, -0x3D63($at)
    MEM_B(-0X3D63, ctx->r1) = 0;
    // 0x8001ACE0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001ACE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ACE8: sll         $t8, $t2, 3
    ctx->r24 = S32(ctx->r10 << 3);
    // 0x8001ACEC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001ACF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001ACF4: sb          $t6, -0x3D62($at)
    MEM_B(-0X3D62, ctx->r1) = ctx->r14;
    // 0x8001ACF8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001ACFC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8001AD00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AD04: sll         $t0, $t7, 3
    ctx->r8 = S32(ctx->r15 << 3);
    // 0x8001AD08: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001AD0C: sb          $t9, -0x3D61($at)
    MEM_B(-0X3D61, ctx->r1) = ctx->r25;
    // 0x8001AD10: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8001AD14: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8001AD18: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8001AD1C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8001AD20: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001AD24: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8001AD28: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8001AD2C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8001AD30: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8001AD34: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8001AD38: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8001AD3C: lbu         $t8, -0x5A20($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X5A20);
    // 0x8001AD40: addu        $t4, $t3, $t5
    ctx->r12 = ADD32(ctx->r11, ctx->r13);
    // 0x8001AD44: lbu         $t2, 0x130($t4)
    ctx->r10 = MEM_BU(ctx->r12, 0X130);
    // 0x8001AD48: nor         $t7, $t8, $zero
    ctx->r15 = ~(ctx->r24 | 0);
    // 0x8001AD4C: and         $t9, $t2, $t7
    ctx->r25 = ctx->r10 & ctx->r15;
    // 0x8001AD50: sb          $t9, 0x130($t4)
    MEM_B(0X130, ctx->r12) = ctx->r25;
    // 0x8001AD54: b           L_8001AD5C
    // 0x8001AD58: nop

        goto L_8001AD5C;
    // 0x8001AD58: nop

L_8001AD5C:
    // 0x8001AD5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001AD60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001AD64: jr          $ra
    // 0x8001AD68: nop

    return;
    // 0x8001AD68: nop

;}
RECOMP_FUNC void alCSeqNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800340BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800340C0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800340C4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800340C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800340CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800340D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800340D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800340D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800340DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800340E0: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x800340E4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x800340E8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x800340EC: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x800340F0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x800340F4: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x800340F8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800340FC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80034100: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
    // 0x80034104: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80034108: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
L_8003410C:
    // 0x8003410C: sb          $zero, 0xA8($s1)
    MEM_B(0XA8, ctx->r17) = 0;
    // 0x80034110: sw          $zero, 0x58($t4)
    MEM_W(0X58, ctx->r12) = 0;
    // 0x80034114: sb          $zero, 0x98($s1)
    MEM_B(0X98, ctx->r17) = 0;
    // 0x80034118: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8003411C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80034120: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x80034124: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x80034128: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x8003412C: beq         $v0, $zero, L_80034158
    if (ctx->r2 == 0) {
        // 0x80034130: addu        $t6, $s4, $v0
        ctx->r14 = ADD32(ctx->r20, ctx->r2);
            goto L_80034158;
    }
    // 0x80034130: addu        $t6, $s4, $v0
    ctx->r14 = ADD32(ctx->r20, ctx->r2);
    // 0x80034134: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80034138: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x8003413C: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
    // 0x80034140: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80034144: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x80034148: jal         0x80033D64
    // 0x8003414C: sw          $t6, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r14;
    static_0_80033D64(rdram, ctx);
        goto after_0;
    // 0x8003414C: sw          $t6, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r14;
    after_0:
    // 0x80034150: b           L_8003415C
    // 0x80034154: sw          $v0, 0xB8($t4)
    MEM_W(0XB8, ctx->r12) = ctx->r2;
        goto L_8003415C;
    // 0x80034154: sw          $v0, 0xB8($t4)
    MEM_W(0XB8, ctx->r12) = ctx->r2;
L_80034158:
    // 0x80034158: sw          $zero, 0x18($t4)
    MEM_W(0X18, ctx->r12) = 0;
L_8003415C:
    // 0x8003415C: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x80034160: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80034164: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80034168: bne         $t5, $s3, L_8003410C
    if (ctx->r13 != ctx->r19) {
        // 0x8003416C: addiu       $t4, $t4, 0x4
        ctx->r12 = ADD32(ctx->r12, 0X4);
            goto L_8003410C;
    }
    // 0x8003416C: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
    // 0x80034170: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80034174: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80034178: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8003417C: lw          $t7, 0x40($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X40);
    // 0x80034180: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80034184: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80034188: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8003418C: bgez        $t7, L_800341A0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80034190: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800341A0;
    }
    // 0x80034190: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80034194: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80034198: nop

    // 0x8003419C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_800341A0:
    // 0x800341A0: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x800341A4: div.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x800341A8: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x800341AC: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x800341B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800341B4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800341B8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800341BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800341C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800341C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800341C8: jr          $ra
    // 0x800341CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800341CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void realloc_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030AA0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80030AA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80030AA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80030AAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80030AB0: bne         $a1, $zero, L_80030AD0
    if (ctx->r5 != 0) {
        // 0x80030AB4: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80030AD0;
    }
    // 0x80030AB4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80030AB8: jal         0x800309D0
    // 0x80030ABC: nop

    free_game(rdram, ctx);
        goto after_0;
    // 0x80030ABC: nop

    after_0:
    // 0x80030AC0: jal         0x8002FC34
    // 0x80030AC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    malloc_game(rdram, ctx);
        goto after_1;
    // 0x80030AC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80030AC8: b           L_80030DB0
    // 0x80030ACC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80030DB0;
    // 0x80030ACC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80030AD0:
    // 0x80030AD0: bne         $s0, $zero, L_80030AE8
    if (ctx->r16 != 0) {
        // 0x80030AD4: lui         $v0, 0x8005
        ctx->r2 = S32(0X8005 << 16);
            goto L_80030AE8;
    }
    // 0x80030AD4: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80030AD8: jal         0x8002FC34
    // 0x80030ADC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    malloc_game(rdram, ctx);
        goto after_2;
    // 0x80030ADC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x80030AE0: b           L_80030DB0
    // 0x80030AE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80030DB0;
    // 0x80030AE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80030AE8:
    // 0x80030AE8: lw          $v0, 0x7F70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F70);
    // 0x80030AEC: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80030AF0: beq         $v0, $zero, L_80030B0C
    if (ctx->r2 == 0) {
        // 0x80030AF4: addiu       $t2, $t2, 0x7EC8
        ctx->r10 = ADD32(ctx->r10, 0X7EC8);
            goto L_80030B0C;
    }
    // 0x80030AF4: addiu       $t2, $t2, 0x7EC8
    ctx->r10 = ADD32(ctx->r10, 0X7EC8);
    // 0x80030AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030AFC: jalr        $v0
    // 0x80030B00: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80030B00: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_3:
    // 0x80030B04: b           L_80030DB0
    // 0x80030B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80030DB0;
    // 0x80030B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80030B0C:
    // 0x80030B0C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80030B10: lw          $t6, 0x7EC4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7EC4);
    // 0x80030B14: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x80030B18: subu        $t1, $s0, $t6
    ctx->r9 = SUB32(ctx->r16, ctx->r14);
    // 0x80030B1C: bgez        $t1, L_80030B2C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80030B20: sra         $t7, $t1, 12
        ctx->r15 = S32(SIGNED(ctx->r9) >> 12);
            goto L_80030B2C;
    }
    // 0x80030B20: sra         $t7, $t1, 12
    ctx->r15 = S32(SIGNED(ctx->r9) >> 12);
    // 0x80030B24: addiu       $at, $t1, 0xFFF
    ctx->r1 = ADD32(ctx->r9, 0XFFF);
    // 0x80030B28: sra         $t7, $at, 12
    ctx->r15 = S32(SIGNED(ctx->r1) >> 12);
L_80030B2C:
    // 0x80030B2C: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x80030B30: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80030B34: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x80030B38: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80030B3C: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80030B40: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x80030B44: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80030B48: bne         $v1, $zero, L_80030D18
    if (ctx->r3 != 0) {
        // 0x80030B4C: addiu       $t8, $v1, 0x1F
        ctx->r24 = ADD32(ctx->r3, 0X1F);
            goto L_80030D18;
    }
    // 0x80030B4C: addiu       $t8, $v1, 0x1F
    ctx->r24 = ADD32(ctx->r3, 0X1F);
    // 0x80030B50: sltiu       $at, $a2, 0x801
    ctx->r1 = ctx->r6 < 0X801 ? 1 : 0;
    // 0x80030B54: beq         $at, $zero, L_80030BA8
    if (ctx->r1 == 0) {
        // 0x80030B58: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80030BA8;
    }
    // 0x80030B58: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80030B5C: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    // 0x80030B60: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80030B64: jal         0x8002FC34
    // 0x80030B68: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    malloc_game(rdram, ctx);
        goto after_4;
    // 0x80030B68: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_4:
    // 0x80030B6C: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80030B70: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80030B74: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80030B78: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80030B7C: beq         $v0, $zero, L_80030BA8
    if (ctx->r2 == 0) {
        // 0x80030B80: addiu       $t2, $t2, 0x7EC8
        ctx->r10 = ADD32(ctx->r10, 0X7EC8);
            goto L_80030BA8;
    }
    // 0x80030B80: addiu       $t2, $t2, 0x7EC8
    ctx->r10 = ADD32(ctx->r10, 0X7EC8);
    // 0x80030B84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80030B88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80030B8C: jal         0x8003A840
    // 0x80030B90: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80030B90: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_5:
    // 0x80030B94: jal         0x800303F0
    // 0x80030B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _free_internal(rdram, ctx);
        goto after_6;
    // 0x80030B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80030B9C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x80030BA0: b           L_80030DB0
    // 0x80030BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80030DB0;
    // 0x80030BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80030BA8:
    // 0x80030BA8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80030BAC: addiu       $v1, $a2, 0xFFF
    ctx->r3 = ADD32(ctx->r6, 0XFFF);
    // 0x80030BB0: addu        $t4, $v0, $t0
    ctx->r12 = ADD32(ctx->r2, ctx->r8);
    // 0x80030BB4: lw          $a1, 0x4($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X4);
    // 0x80030BB8: srl         $t3, $v1, 12
    ctx->r11 = S32(U32(ctx->r3) >> 12);
    // 0x80030BBC: sltu        $at, $t3, $a1
    ctx->r1 = ctx->r11 < ctx->r5 ? 1 : 0;
    // 0x80030BC0: beq         $at, $zero, L_80030C38
    if (ctx->r1 == 0) {
        // 0x80030BC4: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_80030C38;
    }
    // 0x80030BC4: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x80030BC8: addu        $a1, $t1, $t3
    ctx->r5 = ADD32(ctx->r9, ctx->r11);
    // 0x80030BCC: sll         $a2, $a1, 2
    ctx->r6 = S32(ctx->r5 << 2);
    // 0x80030BD0: subu        $a2, $a2, $a1
    ctx->r6 = SUB32(ctx->r6, ctx->r5);
    // 0x80030BD4: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80030BD8: addu        $t5, $v0, $a2
    ctx->r13 = ADD32(ctx->r2, ctx->r6);
    // 0x80030BDC: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x80030BE0: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80030BE4: lui         $a3, 0x8005
    ctx->r7 = S32(0X8005 << 16);
    // 0x80030BE8: addu        $t6, $v0, $t0
    ctx->r14 = ADD32(ctx->r2, ctx->r8);
    // 0x80030BEC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80030BF0: addu        $t9, $v0, $a2
    ctx->r25 = ADD32(ctx->r2, ctx->r6);
    // 0x80030BF4: subu        $t8, $t7, $t3
    ctx->r24 = SUB32(ctx->r15, ctx->r11);
    // 0x80030BF8: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x80030BFC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80030C00: addiu       $a3, $a3, 0x7F38
    ctx->r7 = ADD32(ctx->r7, 0X7F38);
    // 0x80030C04: addu        $t4, $t3, $t0
    ctx->r12 = ADD32(ctx->r11, ctx->r8);
    // 0x80030C08: sw          $v1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r3;
    // 0x80030C0C: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x80030C10: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80030C14: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80030C18: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80030C1C: lw          $t8, 0x7EC4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7EC4);
    // 0x80030C20: sll         $t7, $a1, 12
    ctx->r15 = S32(ctx->r5 << 12);
    // 0x80030C24: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80030C28: jal         0x800303F0
    // 0x80030C2C: addiu       $a0, $a0, -0x1000
    ctx->r4 = ADD32(ctx->r4, -0X1000);
    _free_internal(rdram, ctx);
        goto after_7;
    // 0x80030C2C: addiu       $a0, $a0, -0x1000
    ctx->r4 = ADD32(ctx->r4, -0X1000);
    after_7:
    // 0x80030C30: b           L_80030DA8
    // 0x80030C34: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
        goto L_80030DA8;
    // 0x80030C34: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
L_80030C38:
    // 0x80030C38: bne         $v1, $a1, L_80030C48
    if (ctx->r3 != ctx->r5) {
        // 0x80030C3C: lui         $v0, 0x8005
        ctx->r2 = S32(0X8005 << 16);
            goto L_80030C48;
    }
    // 0x80030C3C: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80030C40: b           L_80030DA8
    // 0x80030C44: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
        goto L_80030DA8;
    // 0x80030C44: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
L_80030C48:
    // 0x80030C48: addiu       $v0, $v0, 0x7ED4
    ctx->r2 = ADD32(ctx->r2, 0X7ED4);
    // 0x80030C4C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80030C50: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80030C54: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80030C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030C5C: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    // 0x80030C60: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80030C64: jal         0x800303F0
    // 0x80030C68: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    _free_internal(rdram, ctx);
        goto after_8;
    // 0x80030C68: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    after_8:
    // 0x80030C6C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80030C70: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80030C74: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80030C78: jal         0x8002FC34
    // 0x80030C7C: sw          $t3, 0x7ED4($at)
    MEM_W(0X7ED4, ctx->r1) = ctx->r11;
    malloc_game(rdram, ctx);
        goto after_9;
    // 0x80030C7C: sw          $t3, 0x7ED4($at)
    MEM_W(0X7ED4, ctx->r1) = ctx->r11;
    after_9:
    // 0x80030C80: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80030C84: bne         $v0, $zero, L_80030CEC
    if (ctx->r2 != 0) {
        // 0x80030C88: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80030CEC;
    }
    // 0x80030C88: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80030C8C: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80030C90: lw          $v0, 0x7ED0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7ED0);
    // 0x80030C94: nop

    // 0x80030C98: bne         $t1, $v0, L_80030CBC
    if (ctx->r9 != ctx->r2) {
        // 0x80030C9C: subu        $a0, $t1, $v0
        ctx->r4 = SUB32(ctx->r9, ctx->r2);
            goto L_80030CBC;
    }
    // 0x80030C9C: subu        $a0, $t1, $v0
    ctx->r4 = SUB32(ctx->r9, ctx->r2);
    // 0x80030CA0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80030CA4: nop

    // 0x80030CA8: sll         $t4, $a0, 12
    ctx->r12 = S32(ctx->r4 << 12);
    // 0x80030CAC: jal         0x8002FC34
    // 0x80030CB0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    malloc_game(rdram, ctx);
        goto after_10;
    // 0x80030CB0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_10:
    // 0x80030CB4: b           L_80030DAC
    // 0x80030CB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80030DAC;
    // 0x80030CB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80030CBC:
    // 0x80030CBC: sll         $t5, $a0, 12
    ctx->r13 = S32(ctx->r4 << 12);
    // 0x80030CC0: jal         0x8002FC34
    // 0x80030CC4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    malloc_game(rdram, ctx);
        goto after_11;
    // 0x80030CC4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_11:
    // 0x80030CC8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80030CCC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80030CD0: sll         $t6, $a0, 12
    ctx->r14 = S32(ctx->r4 << 12);
    // 0x80030CD4: jal         0x8002FC34
    // 0x80030CD8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    malloc_game(rdram, ctx);
        goto after_12;
    // 0x80030CD8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_12:
    // 0x80030CDC: jal         0x800303F0
    // 0x80030CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _free_internal(rdram, ctx);
        goto after_13;
    // 0x80030CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80030CE4: b           L_80030DAC
    // 0x80030CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80030DAC;
    // 0x80030CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80030CEC:
    // 0x80030CEC: beq         $s0, $v0, L_80030DA8
    if (ctx->r16 == ctx->r2) {
        // 0x80030CF0: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80030DA8;
    }
    // 0x80030CF0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80030CF4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80030CF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80030CFC: sll         $t7, $a2, 12
    ctx->r15 = S32(ctx->r6 << 12);
    // 0x80030D00: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80030D04: jal         0x8000E274
    // 0x80030D08: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    memmove_recomp(rdram, ctx);
        goto after_14;
    // 0x80030D08: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_14:
    // 0x80030D0C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80030D10: b           L_80030DAC
    // 0x80030D14: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
        goto L_80030DAC;
    // 0x80030D14: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_80030D18:
    // 0x80030D18: sllv        $t3, $t9, $t8
    ctx->r11 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x80030D1C: sltu        $at, $t3, $a2
    ctx->r1 = ctx->r11 < ctx->r6 ? 1 : 0;
    // 0x80030D20: beq         $at, $zero, L_80030D40
    if (ctx->r1 == 0) {
        // 0x80030D24: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_80030D40;
    }
    // 0x80030D24: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80030D28: sllv        $t5, $t4, $v1
    ctx->r13 = S32(ctx->r12 << (ctx->r3 & 31));
    // 0x80030D2C: sltu        $at, $t5, $a2
    ctx->r1 = ctx->r13 < ctx->r6 ? 1 : 0;
    // 0x80030D30: bne         $at, $zero, L_80030D44
    if (ctx->r1 != 0) {
        // 0x80030D34: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80030D44;
    }
    // 0x80030D34: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80030D38: b           L_80030DA8
    // 0x80030D3C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
        goto L_80030DA8;
    // 0x80030D3C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
L_80030D40:
    // 0x80030D40: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_80030D44:
    // 0x80030D44: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80030D48: jal         0x8002FC34
    // 0x80030D4C: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    malloc_game(rdram, ctx);
        goto after_15;
    // 0x80030D4C: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    after_15:
    // 0x80030D50: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80030D54: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80030D58: bne         $v0, $zero, L_80030D68
    if (ctx->r2 != 0) {
        // 0x80030D5C: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80030D68;
    }
    // 0x80030D5C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80030D60: b           L_80030DAC
    // 0x80030D64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80030DAC;
    // 0x80030D64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80030D68:
    // 0x80030D68: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80030D6C: sllv        $v0, $t6, $v1
    ctx->r2 = S32(ctx->r14 << (ctx->r3 & 31));
    // 0x80030D70: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80030D74: beq         $at, $zero, L_80030D84
    if (ctx->r1 == 0) {
        // 0x80030D78: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80030D84;
    }
    // 0x80030D78: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80030D7C: b           L_80030D88
    // 0x80030D80: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
        goto L_80030D88;
    // 0x80030D80: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
L_80030D84:
    // 0x80030D84: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80030D88:
    // 0x80030D88: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80030D8C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80030D90: jal         0x8003A840
    // 0x80030D94: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80030D94: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_16:
    // 0x80030D98: jal         0x800309D0
    // 0x80030D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    free_game(rdram, ctx);
        goto after_17;
    // 0x80030D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80030DA0: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80030DA4: nop

L_80030DA8:
    // 0x80030DA8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_80030DAC:
    // 0x80030DAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80030DB0:
    // 0x80030DB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80030DB4: jr          $ra
    // 0x80030DB8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80030DB8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void init_lpfilter(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F530: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8003F534: addiu       $t9, $zero, 0x4000
    ctx->r25 = ADD32(0, 0X4000);
    // 0x8003F538: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8003F53C: sll         $t6, $v0, 14
    ctx->r14 = S32(ctx->r2 << 14);
    // 0x8003F540: sra         $v1, $t6, 15
    ctx->r3 = S32(SIGNED(ctx->r14) >> 15);
    // 0x8003F544: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x8003F548: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8003F54C: subu        $t0, $t9, $v1
    ctx->r8 = SUB32(ctx->r25, ctx->r3);
    // 0x8003F550: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
    // 0x8003F554: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x8003F558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F55C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_8003F560:
    // 0x8003F560: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8003F564: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x8003F568: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8003F56C: bne         $at, $zero, L_8003F560
    if (ctx->r1 != 0) {
        // 0x8003F570: sh          $zero, 0x6($a2)
        MEM_H(0X6, ctx->r6) = 0;
            goto L_8003F560;
    }
    // 0x8003F570: sh          $zero, 0x6($a2)
    MEM_H(0X6, ctx->r6) = 0;
    // 0x8003F574: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8003F578: lui         $at, 0x40D0
    ctx->r1 = S32(0X40D0 << 16);
    // 0x8003F57C: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x8003F580: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8003F584: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8003F588: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8003F58C: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x8003F590: sh          $v1, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r3;
    // 0x8003F594: div.d       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f12.d);
    // 0x8003F598: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8003F59C: beq         $at, $zero, L_8003F5C8
    if (ctx->r1 == 0) {
        // 0x8003F5A0: mov.d       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
            goto L_8003F5C8;
    }
    // 0x8003F5A0: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
L_8003F5A4:
    // 0x8003F5A4: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x8003F5A8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8003F5AC: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x8003F5B0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8003F5B4: mul.d       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x8003F5B8: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x8003F5BC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8003F5C0: bne         $at, $zero, L_8003F5A4
    if (ctx->r1 != 0) {
        // 0x8003F5C4: sh          $t3, 0x6($a2)
        MEM_H(0X6, ctx->r6) = ctx->r11;
            goto L_8003F5A4;
    }
    // 0x8003F5C4: sh          $t3, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r11;
L_8003F5C8:
    // 0x8003F5C8: jr          $ra
    // 0x8003F5CC: nop

    return;
    // 0x8003F5CC: nop

;}
RECOMP_FUNC void Math_SolvePlaneY(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015D2C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80015D30: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80015D34: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80015D38: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80015D3C: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x80015D40: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x80015D44: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80015D48: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80015D4C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80015D50: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80015D54: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80015D58: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80015D5C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80015D60: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80015D64: bne         $t6, $zero, L_80015D74
    if (ctx->r14 != 0) {
        // 0x80015D68: nop
    
            goto L_80015D74;
    }
    // 0x80015D68: nop

    // 0x80015D6C: beq         $t7, $zero, L_80015DF0
    if (ctx->r15 == 0) {
        // 0x80015D70: nop
    
            goto L_80015DF0;
    }
    // 0x80015D70: nop

L_80015D74:
    // 0x80015D74: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80015D78: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80015D7C: jal         0x8003687C
    // 0x80015D80: nop

    __ll_to_f_recomp(rdram, ctx);
        goto after_0;
    // 0x80015D80: nop

    after_0:
    // 0x80015D84: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80015D88: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80015D8C: jal         0x8003687C
    // 0x80015D90: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    __ll_to_f_recomp(rdram, ctx);
        goto after_1;
    // 0x80015D90: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    after_1:
    // 0x80015D94: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80015D98: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80015D9C: nor         $a0, $a0, $zero
    ctx->r4 = ~(ctx->r4 | 0);
    // 0x80015DA0: sltiu       $at, $a1, 0x1
    ctx->r1 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80015DA4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80015DA8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80015DAC: jal         0x8003687C
    // 0x80015DB0: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    __ll_to_f_recomp(rdram, ctx);
        goto after_2;
    // 0x80015DB0: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_2:
    // 0x80015DB4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80015DB8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80015DBC: jal         0x8003687C
    // 0x80015DC0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __ll_to_f_recomp(rdram, ctx);
        goto after_3;
    // 0x80015DC0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_3:
    // 0x80015DC4: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80015DC8: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80015DCC: mul.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x80015DD0: nop

    // 0x80015DD4: mul.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x80015DD8: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80015DDC: add.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x80015DE0: nop

    // 0x80015DE4: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80015DE8: b           L_80015DFC
    // 0x80015DEC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
        goto L_80015DFC;
    // 0x80015DEC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
L_80015DF0:
    // 0x80015DF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80015DF4: nop

    // 0x80015DF8: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
L_80015DFC:
    // 0x80015DFC: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80015E00: b           L_80015E10
    // 0x80015E04: nop

        goto L_80015E10;
    // 0x80015E04: nop

    // 0x80015E08: b           L_80015E10
    // 0x80015E0C: nop

        goto L_80015E10;
    // 0x80015E0C: nop

L_80015E10:
    // 0x80015E10: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80015E14: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80015E18: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80015E1C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80015E20: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015E24: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80015E28: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80015E2C: jr          $ra
    // 0x80015E30: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80015E30: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void strchr_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A894: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8003A898: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8003A89C: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8003A8A0: beql        $t6, $v1, L_8003A8CC
    if (ctx->r14 == ctx->r3) {
        // 0x8003A8A4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8003A8CC;
    }
    goto skip_0;
    // 0x8003A8A4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
L_8003A8A8:
    // 0x8003A8A8: bnel        $v1, $zero, L_8003A8BC
    if (ctx->r3 != 0) {
        // 0x8003A8AC: lbu         $v1, 0x1($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X1);
            goto L_8003A8BC;
    }
    goto skip_1;
    // 0x8003A8AC: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    skip_1:
    // 0x8003A8B0: jr          $ra
    // 0x8003A8B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8003A8B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003A8B8: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
L_8003A8BC:
    // 0x8003A8BC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003A8C0: bne         $v0, $v1, L_8003A8A8
    if (ctx->r2 != ctx->r3) {
        // 0x8003A8C4: nop
    
            goto L_8003A8A8;
    }
    // 0x8003A8C4: nop

    // 0x8003A8C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8003A8CC:
    // 0x8003A8CC: jr          $ra
    // 0x8003A8D0: nop

    return;
    // 0x8003A8D0: nop

;}
RECOMP_FUNC void func_8000B4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B4EC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8000B4F0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8000B4F4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8000B4F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000B4FC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8000B500: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000B504: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000B508: lw          $t7, 0x2D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D5C);
    // 0x8000B50C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8000B510: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000B514: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000B518: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8000B51C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000B520: lw          $t9, 0x2D68($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D68);
    // 0x8000B524: nop

    // 0x8000B528: beq         $t9, $zero, L_8000B550
    if (ctx->r25 == 0) {
        // 0x8000B52C: nop
    
            goto L_8000B550;
    }
    // 0x8000B52C: nop

    // 0x8000B530: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8000B534: nop

    // 0x8000B538: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x8000B53C: nop

    // 0x8000B540: beq         $t1, $zero, L_8000B550
    if (ctx->r9 == 0) {
        // 0x8000B544: nop
    
            goto L_8000B550;
    }
    // 0x8000B544: nop

    // 0x8000B548: b           L_8000B590
    // 0x8000B54C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_8000B590;
    // 0x8000B54C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8000B550:
    // 0x8000B550: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8000B554: nop

    // 0x8000B558: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8000B55C: nop

    // 0x8000B560: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x8000B564: beq         $t4, $zero, L_8000B574
    if (ctx->r12 == 0) {
        // 0x8000B568: nop
    
            goto L_8000B574;
    }
    // 0x8000B568: nop

    // 0x8000B56C: b           L_8000B590
    // 0x8000B570: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
        goto L_8000B590;
    // 0x8000B570: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_8000B574:
    // 0x8000B574: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8000B578: nop

    // 0x8000B57C: lw          $v0, 0xC($t5)
    ctx->r2 = MEM_W(ctx->r13, 0XC);
    // 0x8000B580: b           L_8000B590
    // 0x8000B584: nop

        goto L_8000B590;
    // 0x8000B584: nop

    // 0x8000B588: b           L_8000B590
    // 0x8000B58C: nop

        goto L_8000B590;
    // 0x8000B58C: nop

L_8000B590:
    // 0x8000B590: jr          $ra
    // 0x8000B594: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8000B594: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001F550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F550: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001F554: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001F558: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8001F55C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8001F560: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8001F564: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8001F568: lw          $t0, 0x210($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X210);
    // 0x8001F56C: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001F570: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001F574: lhu         $a1, 0x8($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X8);
    // 0x8001F578: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x8001F57C: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x8001F580: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8001F584: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F588: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x8001F58C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8001F590: addiu       $t3, $t9, 0x68
    ctx->r11 = ADD32(ctx->r25, 0X68);
    // 0x8001F594: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8001F598: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8001F59C: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    // 0x8001F5A0: jal         0x80038AF0
    // 0x8001F5A4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    osPfsAllocateFile_recomp(rdram, ctx);
        goto after_0;
    // 0x8001F5A4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_0:
    // 0x8001F5A8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8001F5AC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8001F5B0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8001F5B4: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001F5B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001F5BC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F5C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F5C4: addu        $t6, $t5, $t8
    ctx->r14 = ADD32(ctx->r13, ctx->r24);
    // 0x8001F5C8: sw          $t4, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->r12;
    // 0x8001F5CC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F5D0: b           L_8001F5E0
    // 0x8001F5D4: nop

        goto L_8001F5E0;
    // 0x8001F5D4: nop

    // 0x8001F5D8: b           L_8001F5E0
    // 0x8001F5DC: nop

        goto L_8001F5E0;
    // 0x8001F5DC: nop

L_8001F5E0:
    // 0x8001F5E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001F5E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8001F5E8: jr          $ra
    // 0x8001F5EC: nop

    return;
    // 0x8001F5EC: nop

;}
RECOMP_FUNC void func_800043D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800043D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800043D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800043DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800043E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800043E4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800043E8: swc1        $f4, 0x2EC4($at)
    MEM_W(0X2EC4, ctx->r1) = ctx->f4.u32l;
    // 0x800043EC: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x800043F0: jal         0x80002D90
    // 0x800043F4: nop

    func_80002D90(rdram, ctx);
        goto after_0;
    // 0x800043F4: nop

    after_0:
    // 0x800043F8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800043FC: sh          $v0, 0x2ED2($at)
    MEM_H(0X2ED2, ctx->r1) = ctx->r2;
    // 0x80004400: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80004404: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80004408: lh          $t7, 0x2ED0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X2ED0);
    // 0x8000440C: lh          $t6, 0x2ED2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2ED2);
    // 0x80004410: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80004414: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80004418: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000441C: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80004420: mflo        $a1
    ctx->r5 = lo;
    // 0x80004424: nop

    // 0x80004428: nop

    // 0x8000442C: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80004430: mflo        $t8
    ctx->r24 = lo;
    // 0x80004434: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80004438: jal         0x800346A0
    // 0x8000443C: nop

    alSeqpSetVol(rdram, ctx);
        goto after_1;
    // 0x8000443C: nop

    after_1:
    // 0x80004440: b           L_80004448
    // 0x80004444: nop

        goto L_80004448;
    // 0x80004444: nop

L_80004448:
    // 0x80004448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000444C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004450: jr          $ra
    // 0x80004454: nop

    return;
    // 0x80004454: nop

;}
RECOMP_FUNC void func_8001C384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C384: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001C388: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001C38C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8001C390: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8001C394: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8001C398: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8001C39C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001C3A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001C3A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001C3A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001C3AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001C3B0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001C3B4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8001C3B8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8001C3BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001C3C0: lh          $t1, 0x4290($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4290);
    // 0x8001C3C4: nop

    // 0x8001C3C8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8001C3CC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C3D0: jal         0x8001A488
    // 0x8001C3D4: nop

    func_8001A488(rdram, ctx);
        goto after_0;
    // 0x8001C3D4: nop

    after_0:
    // 0x8001C3D8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C3DC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8001C3E0: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8001C3E4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8001C3E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8001C3EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001C3F0: lw          $t4, 0x5290($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5290);
    // 0x8001C3F4: nop

    // 0x8001C3F8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8001C3FC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C400: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8001C404: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8001C408: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8001C40C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001C410: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001C414: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001C418: lw          $t7, -0x1C5C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1C5C);
    // 0x8001C41C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x8001C420: lw          $a0, 0x52AC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X52AC);
    // 0x8001C424: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001C428: addiu       $a1, $a1, -0x1F04
    ctx->r5 = ADD32(ctx->r5, -0X1F04);
    // 0x8001C42C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8001C430: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8001C434: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8001C438: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8001C43C: jal         0x8000FD9C
    // 0x8001C440: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_8000FD9C(rdram, ctx);
        goto after_1;
    // 0x8001C440: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_1:
    // 0x8001C444: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C448: sw          $v0, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = ctx->r2;
    // 0x8001C44C: b           L_8001C454
    // 0x8001C450: nop

        goto L_8001C454;
    // 0x8001C450: nop

L_8001C454:
    // 0x8001C454: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001C458: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8001C45C: jr          $ra
    // 0x8001C460: nop

    return;
    // 0x8001C460: nop

;}
RECOMP_FUNC void func_800181F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800181F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800181F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800181F8: lb          $t6, 0x75BC($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75BC);
    // 0x800181FC: nop

    // 0x80018200: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x80018204: beq         $t7, $zero, L_8001837C
    if (ctx->r15 == 0) {
        // 0x80018208: nop
    
            goto L_8001837C;
    }
    // 0x80018208: nop

    // 0x8001820C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80018210: lb          $t8, 0x75BC($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X75BC);
    // 0x80018214: nop

    // 0x80018218: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8001821C: beq         $t9, $zero, L_800182C4
    if (ctx->r25 == 0) {
        // 0x80018220: nop
    
            goto L_800182C4;
    }
    // 0x80018220: nop

    // 0x80018224: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80018228: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001822C: lbu         $t2, 0x75E4($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X75E4);
    // 0x80018230: lbu         $t0, 0x75DC($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X75DC);
    // 0x80018234: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80018238: lbu         $t5, 0x75EC($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X75EC);
    // 0x8001823C: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80018240: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x80018244: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80018248: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8001824C: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80018250: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80018254: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80018258: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8001825C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018260: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80018264: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80018268: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8001826C: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x80018270: lui         $t0, 0xBC00
    ctx->r8 = S32(0XBC00 << 16);
    // 0x80018274: ori         $t0, $t0, 0x400A
    ctx->r8 = ctx->r8 | 0X400A;
    // 0x80018278: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x8001827C: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x80018280: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x80018284: nop

    // 0x80018288: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x8001828C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80018290: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80018294: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018298: addiu       $t4, $t5, 0x8
    ctx->r12 = ADD32(ctx->r13, 0X8);
    // 0x8001829C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x800182A0: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
    // 0x800182A4: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x800182A8: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x800182AC: ori         $t6, $t6, 0x440A
    ctx->r14 = ctx->r14 | 0X440A;
    // 0x800182B0: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800182B4: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x800182B8: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x800182BC: nop

    // 0x800182C0: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
L_800182C4:
    // 0x800182C4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800182C8: lb          $t0, 0x75BC($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X75BC);
    // 0x800182CC: nop

    // 0x800182D0: andi        $t2, $t0, 0x2
    ctx->r10 = ctx->r8 & 0X2;
    // 0x800182D4: beq         $t2, $zero, L_8001837C
    if (ctx->r10 == 0) {
        // 0x800182D8: nop
    
            goto L_8001837C;
    }
    // 0x800182D8: nop

    // 0x800182DC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800182E0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800182E4: lbu         $t5, 0x75CC($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X75CC);
    // 0x800182E8: lbu         $t1, 0x75C4($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X75C4);
    // 0x800182EC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800182F0: lbu         $t7, 0x75D4($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X75D4);
    // 0x800182F4: sll         $t4, $t5, 16
    ctx->r12 = S32(ctx->r13 << 16);
    // 0x800182F8: sll         $t3, $t1, 24
    ctx->r11 = S32(ctx->r9 << 24);
    // 0x800182FC: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x80018300: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x80018304: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80018308: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8001830C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80018310: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x80018314: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018318: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x8001831C: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80018320: sw          $t0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r8;
    // 0x80018324: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x80018328: lui         $t1, 0xBC00
    ctx->r9 = S32(0XBC00 << 16);
    // 0x8001832C: ori         $t1, $t1, 0xA
    ctx->r9 = ctx->r9 | 0XA;
    // 0x80018330: sw          $t1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r9;
    // 0x80018334: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x80018338: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8001833C: nop

    // 0x80018340: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80018344: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80018348: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8001834C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018350: addiu       $t6, $t7, 0x8
    ctx->r14 = ADD32(ctx->r15, 0X8);
    // 0x80018354: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80018358: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x8001835C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80018360: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80018364: ori         $t8, $t8, 0x40A
    ctx->r24 = ctx->r24 | 0X40A;
    // 0x80018368: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8001836C: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80018370: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80018374: nop

    // 0x80018378: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
L_8001837C:
    // 0x8001837C: b           L_80018384
    // 0x80018380: nop

        goto L_80018384;
    // 0x80018380: nop

L_80018384:
    // 0x80018384: jr          $ra
    // 0x80018388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80018388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001F088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F088: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001F08C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F090: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001F094: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8001F098:
    // 0x8001F098: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001F09C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F0A0: jal         0x8001EFD0
    // 0x8001F0A4: nop

    func_8001EFD0(rdram, ctx);
        goto after_0;
    // 0x8001F0A4: nop

    after_0:
    // 0x8001F0A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001F0AC: lbu         $t6, -0x1D84($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1D84);
    // 0x8001F0B0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F0B4: nop

    // 0x8001F0B8: srav        $t8, $t6, $t7
    ctx->r24 = S32(SIGNED(ctx->r14) >> (ctx->r15 & 31));
    // 0x8001F0BC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8001F0C0: beq         $t9, $zero, L_8001F144
    if (ctx->r25 == 0) {
        // 0x8001F0C4: nop
    
            goto L_8001F144;
    }
    // 0x8001F0C4: nop

    // 0x8001F0C8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F0CC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001F0D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001F0D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8001F0D8: lhu         $t2, 0x7650($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X7650);
    // 0x8001F0DC: nop

    // 0x8001F0E0: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x8001F0E4: beq         $t3, $zero, L_8001F144
    if (ctx->r11 == 0) {
        // 0x8001F0E8: nop
    
            goto L_8001F144;
    }
    // 0x8001F0E8: nop

    // 0x8001F0EC: andi        $t4, $t2, 0x1
    ctx->r12 = ctx->r10 & 0X1;
    // 0x8001F0F0: beq         $t4, $zero, L_8001F144
    if (ctx->r12 == 0) {
        // 0x8001F0F4: nop
    
            goto L_8001F144;
    }
    // 0x8001F0F4: nop

    // 0x8001F0F8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F0FC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8001F100: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8001F104: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001F108: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001F10C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001F110: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x8001F114: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8001F118: jal         0x80037DC0
    // 0x8001F11C: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    osPfsInitPak_recomp(rdram, ctx);
        goto after_1;
    // 0x8001F11C: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    after_1:
    // 0x8001F120: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8001F124: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F128: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8001F12C: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x8001F130: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001F134: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8001F138: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001F13C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x8001F140: sw          $t8, 0x74($t3)
    MEM_W(0X74, ctx->r11) = ctx->r24;
L_8001F144:
    // 0x8001F144: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F148: nop

    // 0x8001F14C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x8001F150: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x8001F154: bne         $at, $zero, L_8001F098
    if (ctx->r1 != 0) {
        // 0x8001F158: sw          $t4, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r12;
            goto L_8001F098;
    }
    // 0x8001F158: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8001F15C: b           L_8001F164
    // 0x8001F160: nop

        goto L_8001F164;
    // 0x8001F160: nop

L_8001F164:
    // 0x8001F164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001F16C: jr          $ra
    // 0x8001F170: nop

    return;
    // 0x8001F170: nop

;}
RECOMP_FUNC void func_80003214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003214: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80003218: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8000321C: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x80003220: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80003224: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x80003228: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8000322C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003230: sb          $zero, 0x2DB7($at)
    MEM_B(0X2DB7, ctx->r1) = 0;
    // 0x80003234: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80003238: lbu         $t8, 0x2DB7($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2DB7);
    // 0x8000323C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003240: or          $t9, $t8, $a0
    ctx->r25 = ctx->r24 | ctx->r4;
    // 0x80003244: sb          $t9, 0x2DB7($at)
    MEM_B(0X2DB7, ctx->r1) = ctx->r25;
    // 0x80003248: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000324C: lw          $t0, -0x5CF4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5CF4);
    // 0x80003250: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x80003254: blez        $t0, L_800032D8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80003258: nop
    
            goto L_800032D8;
    }
    // 0x80003258: nop

L_8000325C:
    // 0x8000325C: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80003260: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80003264: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80003268: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8000326C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80003270: lw          $t3, 0x2D5C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2D5C);
    // 0x80003274: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80003278: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000327C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80003280: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x80003284: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80003288: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000328C: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x80003290: nop

    // 0x80003294: beq         $t6, $at, L_800032A4
    if (ctx->r14 == ctx->r1) {
        // 0x80003298: nop
    
            goto L_800032A4;
    }
    // 0x80003298: nop

    // 0x8000329C: b           L_800032BC
    // 0x800032A0: nop

        goto L_800032BC;
    // 0x800032A0: nop

L_800032A4:
    // 0x800032A4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800032A8: nop

    // 0x800032AC: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x800032B0: nop

    // 0x800032B4: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x800032B8: sw          $t9, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r25;
L_800032BC:
    // 0x800032BC: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x800032C0: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800032C4: lw          $t2, -0x5CF4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5CF4);
    // 0x800032C8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800032CC: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800032D0: bne         $at, $zero, L_8000325C
    if (ctx->r1 != 0) {
        // 0x800032D4: sw          $t1, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r9;
            goto L_8000325C;
    }
    // 0x800032D4: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
L_800032D8:
    // 0x800032D8: b           L_800032E0
    // 0x800032DC: nop

        goto L_800032E0;
    // 0x800032DC: nop

L_800032E0:
    // 0x800032E0: jr          $ra
    // 0x800032E4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800032E4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void _bcopy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C960: beq         $a2, $zero, L_8003C9CC
    if (ctx->r6 == 0) {
        // 0x8003C964: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8003C9CC;
    }
    // 0x8003C964: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8003C968: beq         $a0, $a1, L_8003C9CC
    if (ctx->r4 == ctx->r5) {
        // 0x8003C96C: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8003C9CC;
    }
    // 0x8003C96C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003C970: bnel        $at, $zero, L_8003C994
    if (ctx->r1 != 0) {
        // 0x8003C974: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_8003C994;
    }
    goto skip_0;
    // 0x8003C974: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_0:
    // 0x8003C978: add         $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x8003C97C: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003C980: beql        $at, $zero, L_8003C994
    if (ctx->r1 == 0) {
        // 0x8003C984: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_8003C994;
    }
    goto skip_1;
    // 0x8003C984: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_1:
    // 0x8003C988: b           L_8003CAF8
    // 0x8003C98C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
        goto L_8003CAF8;
    // 0x8003C98C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x8003C990: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_8003C994:
    // 0x8003C994: bne         $at, $zero, L_8003C9AC
    if (ctx->r1 != 0) {
        // 0x8003C998: nop
    
            goto L_8003C9AC;
    }
    // 0x8003C998: nop

    // 0x8003C99C: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x8003C9A0: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x8003C9A4: beq         $v0, $v1, L_8003C9D4
    if (ctx->r2 == ctx->r3) {
        // 0x8003C9A8: nop
    
            goto L_8003C9D4;
    }
    // 0x8003C9A8: nop

L_8003C9AC:
    // 0x8003C9AC: beq         $a2, $zero, L_8003C9CC
    if (ctx->r6 == 0) {
        // 0x8003C9B0: nop
    
            goto L_8003C9CC;
    }
    // 0x8003C9B0: nop

    // 0x8003C9B4: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
L_8003C9B8:
    // 0x8003C9B8: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8003C9BC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003C9C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8003C9C4: bne         $a0, $v1, L_8003C9B8
    if (ctx->r4 != ctx->r3) {
        // 0x8003C9C8: sb          $v0, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r2;
            goto L_8003C9B8;
    }
    // 0x8003C9C8: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
L_8003C9CC:
    // 0x8003C9CC: jr          $ra
    // 0x8003C9D0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x8003C9D0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8003C9D4:
    // 0x8003C9D4: beq         $v0, $zero, L_8003CA38
    if (ctx->r2 == 0) {
        // 0x8003C9D8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8003CA38;
    }
    // 0x8003C9D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003C9DC: beq         $v0, $at, L_8003CA1C
    if (ctx->r2 == ctx->r1) {
        // 0x8003C9E0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003CA1C;
    }
    // 0x8003C9E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003C9E4: beql        $v0, $at, L_8003CA08
    if (ctx->r2 == ctx->r1) {
        // 0x8003C9E8: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_8003CA08;
    }
    goto skip_2;
    // 0x8003C9E8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    skip_2:
    // 0x8003C9EC: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8003C9F0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003C9F4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8003C9F8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8003C9FC: b           L_8003CA38
    // 0x8003CA00: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
        goto L_8003CA38;
    // 0x8003CA00: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
    // 0x8003CA04: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
L_8003CA08:
    // 0x8003CA08: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8003CA0C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8003CA10: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x8003CA14: b           L_8003CA38
    // 0x8003CA18: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
        goto L_8003CA38;
    // 0x8003CA18: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
L_8003CA1C:
    // 0x8003CA1C: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8003CA20: lh          $v1, 0x1($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1);
    // 0x8003CA24: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8003CA28: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x8003CA2C: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x8003CA30: sb          $v0, -0x3($a1)
    MEM_B(-0X3, ctx->r5) = ctx->r2;
    // 0x8003CA34: sh          $v1, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r3;
L_8003CA38:
    // 0x8003CA38: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x8003CA3C: bnel        $at, $zero, L_8003CA98
    if (ctx->r1 != 0) {
        // 0x8003CA40: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_8003CA98;
    }
    goto skip_3;
    // 0x8003CA40: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_3:
    // 0x8003CA44: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003CA48: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8003CA4C: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x8003CA50: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x8003CA54: lw          $t2, 0x10($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X10);
    // 0x8003CA58: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x8003CA5C: lw          $t4, 0x18($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X18);
    // 0x8003CA60: lw          $t5, 0x1C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X1C);
    // 0x8003CA64: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x8003CA68: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x8003CA6C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x8003CA70: sw          $v0, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r2;
    // 0x8003CA74: sw          $v1, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r3;
    // 0x8003CA78: sw          $t0, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->r8;
    // 0x8003CA7C: sw          $t1, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->r9;
    // 0x8003CA80: sw          $t2, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r10;
    // 0x8003CA84: sw          $t3, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r11;
    // 0x8003CA88: sw          $t4, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r12;
    // 0x8003CA8C: b           L_8003CA38
    // 0x8003CA90: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
        goto L_8003CA38;
    // 0x8003CA90: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
L_8003CA94:
    // 0x8003CA94: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_8003CA98:
    // 0x8003CA98: bnel        $at, $zero, L_8003CAD4
    if (ctx->r1 != 0) {
        // 0x8003CA9C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_8003CAD4;
    }
    goto skip_4;
    // 0x8003CA9C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_4:
    // 0x8003CAA0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003CAA4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8003CAA8: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x8003CAAC: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x8003CAB0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8003CAB4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8003CAB8: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8003CABC: sw          $v0, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r2;
    // 0x8003CAC0: sw          $v1, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r3;
    // 0x8003CAC4: sw          $t0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r8;
    // 0x8003CAC8: b           L_8003CA94
    // 0x8003CACC: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
        goto L_8003CA94;
    // 0x8003CACC: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
L_8003CAD0:
    // 0x8003CAD0: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_8003CAD4:
    // 0x8003CAD4: bne         $at, $zero, L_8003C9AC
    if (ctx->r1 != 0) {
        // 0x8003CAD8: nop
    
            goto L_8003C9AC;
    }
    // 0x8003CAD8: nop

    // 0x8003CADC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003CAE0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8003CAE4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8003CAE8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8003CAEC: b           L_8003CAD0
    // 0x8003CAF0: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
        goto L_8003CAD0;
    // 0x8003CAF0: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x8003CAF4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_8003CAF8:
    // 0x8003CAF8: add         $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8003CAFC: bne         $at, $zero, L_8003CB14
    if (ctx->r1 != 0) {
        // 0x8003CB00: add         $a1, $a1, $a2
        ctx->r5 = ADD32(ctx->r5, ctx->r6);
            goto L_8003CB14;
    }
    // 0x8003CB00: add         $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8003CB04: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x8003CB08: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x8003CB0C: beq         $v0, $v1, L_8003CB44
    if (ctx->r2 == ctx->r3) {
        // 0x8003CB10: nop
    
            goto L_8003CB44;
    }
    // 0x8003CB10: nop

L_8003CB14:
    // 0x8003CB14: beq         $a2, $zero, L_8003C9CC
    if (ctx->r6 == 0) {
        // 0x8003CB18: nop
    
            goto L_8003C9CC;
    }
    // 0x8003CB18: nop

    // 0x8003CB1C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8003CB20: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8003CB24: subu        $v1, $a0, $a2
    ctx->r3 = SUB32(ctx->r4, ctx->r6);
L_8003CB28:
    // 0x8003CB28: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8003CB2C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8003CB30: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8003CB34: bne         $a0, $v1, L_8003CB28
    if (ctx->r4 != ctx->r3) {
        // 0x8003CB38: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_8003CB28;
    }
    // 0x8003CB38: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x8003CB3C: jr          $ra
    // 0x8003CB40: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x8003CB40: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8003CB44:
    // 0x8003CB44: beq         $v0, $zero, L_8003CBA8
    if (ctx->r2 == 0) {
        // 0x8003CB48: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8003CBA8;
    }
    // 0x8003CB48: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003CB4C: beq         $v0, $at, L_8003CB8C
    if (ctx->r2 == ctx->r1) {
        // 0x8003CB50: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003CB8C;
    }
    // 0x8003CB50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003CB54: beql        $v0, $at, L_8003CB78
    if (ctx->r2 == ctx->r1) {
        // 0x8003CB58: lh          $v0, -0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, -0X2);
            goto L_8003CB78;
    }
    goto skip_5;
    // 0x8003CB58: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
    skip_5:
    // 0x8003CB5C: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x8003CB60: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8003CB64: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8003CB68: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8003CB6C: b           L_8003CBA8
    // 0x8003CB70: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
        goto L_8003CBA8;
    // 0x8003CB70: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8003CB74: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
L_8003CB78:
    // 0x8003CB78: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x8003CB7C: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x8003CB80: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x8003CB84: b           L_8003CBA8
    // 0x8003CB88: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_8003CBA8;
    // 0x8003CB88: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8003CB8C:
    // 0x8003CB8C: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x8003CB90: lh          $v1, -0x3($a0)
    ctx->r3 = MEM_H(ctx->r4, -0X3);
    // 0x8003CB94: addiu       $a0, $a0, -0x3
    ctx->r4 = ADD32(ctx->r4, -0X3);
    // 0x8003CB98: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x8003CB9C: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x8003CBA0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8003CBA4: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_8003CBA8:
    // 0x8003CBA8: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x8003CBAC: bnel        $at, $zero, L_8003CC08
    if (ctx->r1 != 0) {
        // 0x8003CBB0: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_8003CC08;
    }
    goto skip_6;
    // 0x8003CBB0: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_6:
    // 0x8003CBB4: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x8003CBB8: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x8003CBBC: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x8003CBC0: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x8003CBC4: lw          $t2, -0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, -0X14);
    // 0x8003CBC8: lw          $t3, -0x18($a0)
    ctx->r11 = MEM_W(ctx->r4, -0X18);
    // 0x8003CBCC: lw          $t4, -0x1C($a0)
    ctx->r12 = MEM_W(ctx->r4, -0X1C);
    // 0x8003CBD0: lw          $t5, -0x20($a0)
    ctx->r13 = MEM_W(ctx->r4, -0X20);
    // 0x8003CBD4: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x8003CBD8: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
    // 0x8003CBDC: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x8003CBE0: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x8003CBE4: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x8003CBE8: sw          $t0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r8;
    // 0x8003CBEC: sw          $t1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r9;
    // 0x8003CBF0: sw          $t2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r10;
    // 0x8003CBF4: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x8003CBF8: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x8003CBFC: b           L_8003CBA8
    // 0x8003CC00: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
        goto L_8003CBA8;
    // 0x8003CC00: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_8003CC04:
    // 0x8003CC04: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_8003CC08:
    // 0x8003CC08: bnel        $at, $zero, L_8003CC44
    if (ctx->r1 != 0) {
        // 0x8003CC0C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_8003CC44;
    }
    goto skip_7;
    // 0x8003CC0C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_7:
    // 0x8003CC10: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x8003CC14: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x8003CC18: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x8003CC1C: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x8003CC20: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x8003CC24: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x8003CC28: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8003CC2C: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x8003CC30: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x8003CC34: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x8003CC38: b           L_8003CC04
    // 0x8003CC3C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
        goto L_8003CC04;
    // 0x8003CC3C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_8003CC40:
    // 0x8003CC40: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_8003CC44:
    // 0x8003CC44: bne         $at, $zero, L_8003CB14
    if (ctx->r1 != 0) {
        // 0x8003CC48: nop
    
            goto L_8003CB14;
    }
    // 0x8003CC48: nop

    // 0x8003CC4C: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x8003CC50: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8003CC54: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8003CC58: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8003CC5C: b           L_8003CC40
    // 0x8003CC60: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_8003CC40;
    // 0x8003CC60: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
;}
