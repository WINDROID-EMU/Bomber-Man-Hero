#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80287A20_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287A28: jal         0x80285D4C
    // 0x80287A2C: nop

    func_80285D4C_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287A2C: nop

    after_0:
    // 0x80287A30: beq         $v0, $zero, L_80287A40
    if (ctx->r2 == 0) {
        // 0x80287A34: nop
    
            goto L_80287A40;
    }
    // 0x80287A34: nop

    // 0x80287A38: b           L_80287B34
    // 0x80287A3C: nop

        goto L_80287B34;
    // 0x80287A3C: nop

L_80287A40:
    // 0x80287A40: jal         0x80085D54
    // 0x80287A44: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80287A44: nop

    after_1:
    // 0x80287A48: beq         $v0, $zero, L_80287A58
    if (ctx->r2 == 0) {
        // 0x80287A4C: nop
    
            goto L_80287A58;
    }
    // 0x80287A4C: nop

    // 0x80287A50: b           L_80287B34
    // 0x80287A54: nop

        goto L_80287B34;
    // 0x80287A54: nop

L_80287A58:
    // 0x80287A58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287A5C: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80287A60: nop

    // 0x80287A64: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80287A68: bne         $t7, $zero, L_80287A9C
    if (ctx->r15 != 0) {
        // 0x80287A6C: nop
    
            goto L_80287A9C;
    }
    // 0x80287A6C: nop

    // 0x80287A70: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80287A74: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x80287A78: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x80287A7C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80287A80: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80287A84: sw          $t9, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r25;
    // 0x80287A88: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80287A8C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80287A90: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80287A94: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80287A98: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
L_80287A9C:
    // 0x80287A9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80287AA0: jal         0x8001B44C
    // 0x80287AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80287AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80287AA8: beq         $v0, $zero, L_80287B2C
    if (ctx->r2 == 0) {
        // 0x80287AAC: nop
    
            goto L_80287B2C;
    }
    // 0x80287AAC: nop

    // 0x80287AB0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80287AB4: lw          $t2, -0x1DA8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1DA8);
    // 0x80287AB8: nop

    // 0x80287ABC: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x80287AC0: beq         $t3, $zero, L_80287B2C
    if (ctx->r11 == 0) {
        // 0x80287AC4: nop
    
            goto L_80287B2C;
    }
    // 0x80287AC4: nop

    // 0x80287AC8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80287ACC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80287AD0: nop

    // 0x80287AD4: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x80287AD8: nop

    // 0x80287ADC: bne         $t5, $zero, L_80287AF4
    if (ctx->r13 != 0) {
        // 0x80287AE0: nop
    
            goto L_80287AF4;
    }
    // 0x80287AE0: nop

    // 0x80287AE4: jal         0x80283F9C
    // 0x80287AE8: nop

    func_80283F9C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80287AE8: nop

    after_3:
    // 0x80287AEC: b           L_80287B24
    // 0x80287AF0: nop

        goto L_80287B24;
    // 0x80287AF0: nop

L_80287AF4:
    // 0x80287AF4: jal         0x8028236C
    // 0x80287AF8: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80287AF8: nop

    after_4:
    // 0x80287AFC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80287B00: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80287B04: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80287B08: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x80287B0C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80287B10: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80287B14: nop

    // 0x80287B18: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80287B1C: nop

    // 0x80287B20: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
L_80287B24:
    // 0x80287B24: b           L_80287B34
    // 0x80287B28: nop

        goto L_80287B34;
    // 0x80287B28: nop

L_80287B2C:
    // 0x80287B2C: b           L_80287B34
    // 0x80287B30: nop

        goto L_80287B34;
    // 0x80287B30: nop

L_80287B34:
    // 0x80287B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80287B3C: jr          $ra
    // 0x80287B40: nop

    return;
    // 0x80287B40: nop

;}
RECOMP_FUNC void func_80286ED8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286ED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80286EDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80286EE0: jal         0x802858D8
    // 0x80286EE4: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80286EE4: nop

    after_0:
    // 0x80286EE8: beq         $v0, $zero, L_80286EF8
    if (ctx->r2 == 0) {
        // 0x80286EEC: nop
    
            goto L_80286EF8;
    }
    // 0x80286EEC: nop

    // 0x80286EF0: b           L_80286F94
    // 0x80286EF4: nop

        goto L_80286F94;
    // 0x80286EF4: nop

L_80286EF8:
    // 0x80286EF8: jal         0x80085D54
    // 0x80286EFC: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80286EFC: nop

    after_1:
    // 0x80286F00: beq         $v0, $zero, L_80286F10
    if (ctx->r2 == 0) {
        // 0x80286F04: nop
    
            goto L_80286F10;
    }
    // 0x80286F04: nop

    // 0x80286F08: b           L_80286F94
    // 0x80286F0C: nop

        goto L_80286F94;
    // 0x80286F0C: nop

L_80286F10:
    // 0x80286F10: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80286F14: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80286F18: nop

    // 0x80286F1C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80286F20: beq         $t7, $zero, L_80286F8C
    if (ctx->r15 == 0) {
        // 0x80286F24: nop
    
            goto L_80286F8C;
    }
    // 0x80286F24: nop

    // 0x80286F28: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80286F2C: lw          $t8, -0x1DA8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1DA8);
    // 0x80286F30: nop

    // 0x80286F34: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80286F38: bne         $t9, $zero, L_80286F64
    if (ctx->r25 != 0) {
        // 0x80286F3C: nop
    
            goto L_80286F64;
    }
    // 0x80286F3C: nop

    // 0x80286F40: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80286F44: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80286F48: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80286F4C: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80286F50: nop

    // 0x80286F54: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80286F58: nop

    // 0x80286F5C: bc1f        L_80286F74
    if (!c1cs) {
        // 0x80286F60: nop
    
            goto L_80286F74;
    }
    // 0x80286F60: nop

L_80286F64:
    // 0x80286F64: jal         0x80282AC4
    // 0x80286F68: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80286F68: nop

    after_2:
    // 0x80286F6C: b           L_80286F94
    // 0x80286F70: nop

        goto L_80286F94;
    // 0x80286F70: nop

L_80286F74:
    // 0x80286F74: jal         0x8028517C
    // 0x80286F78: nop

    func_8028517C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80286F78: nop

    after_3:
    // 0x80286F7C: beq         $v0, $zero, L_80286F8C
    if (ctx->r2 == 0) {
        // 0x80286F80: nop
    
            goto L_80286F8C;
    }
    // 0x80286F80: nop

    // 0x80286F84: b           L_80286F94
    // 0x80286F88: nop

        goto L_80286F94;
    // 0x80286F88: nop

L_80286F8C:
    // 0x80286F8C: b           L_80286F94
    // 0x80286F90: nop

        goto L_80286F94;
    // 0x80286F90: nop

L_80286F94:
    // 0x80286F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80286F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80286F9C: jr          $ra
    // 0x80286FA0: nop

    return;
    // 0x80286FA0: nop

;}
RECOMP_FUNC void func_80281248_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281248: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028124C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281250: jal         0x802811A8
    // 0x80281254: nop

    func_802811A8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80281254: nop

    after_0:
    // 0x80281258: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028125C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281260: nop

    // 0x80281264: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80281268: nop

    // 0x8028126C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80281270: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80281274: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281278: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028127C: nop

    // 0x80281280: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80281284: nop

    // 0x80281288: bc1f        L_802812A8
    if (!c1cs) {
        // 0x8028128C: nop
    
            goto L_802812A8;
    }
    // 0x8028128C: nop

    // 0x80281290: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80281294: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281298: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028129C: nop

    // 0x802812A0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802812A4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
L_802812A8:
    // 0x802812A8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802812AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802812B0: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802812B4: nop

    // 0x802812B8: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x802812BC: nop

    // 0x802812C0: bc1t        L_802812E4
    if (c1cs) {
        // 0x802812C4: nop
    
            goto L_802812E4;
    }
    // 0x802812C4: nop

    // 0x802812C8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802812CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802812D0: nop

    // 0x802812D4: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x802812D8: nop

    // 0x802812DC: bc1f        L_802812EC
    if (!c1cs) {
        // 0x802812E0: nop
    
            goto L_802812EC;
    }
    // 0x802812E0: nop

L_802812E4:
    // 0x802812E4: b           L_802812FC
    // 0x802812E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802812FC;
    // 0x802812E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802812EC:
    // 0x802812EC: b           L_802812FC
    // 0x802812F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802812FC;
    // 0x802812F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802812F4: b           L_802812FC
    // 0x802812F8: nop

        goto L_802812FC;
    // 0x802812F8: nop

L_802812FC:
    // 0x802812FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281304: jr          $ra
    // 0x80281308: nop

    return;
    // 0x80281308: nop

;}
RECOMP_FUNC void func_8028A9FC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A9FC: jr          $ra
    // 0x8028AA00: nop

    return;
    // 0x8028AA00: nop

    // 0x8028AA04: jr          $ra
    // 0x8028AA08: nop

    return;
    // 0x8028AA08: nop

;}
RECOMP_FUNC void func_80280284_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028028C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280290: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80280294: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x80280298: bne         $t6, $at, L_80280344
    if (ctx->r14 != ctx->r1) {
        // 0x8028029C: nop
    
            goto L_80280344;
    }
    // 0x8028029C: nop

    // 0x802802A0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802802A4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802802A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802802AC: lwc1        $f6, 0x51C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51C4);
    // 0x802802B0: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802802B4: nop

    // 0x802802B8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802802BC: nop

    // 0x802802C0: bc1f        L_802802E8
    if (!c1cs) {
        // 0x802802C4: nop
    
            goto L_802802E8;
    }
    // 0x802802C4: nop

    // 0x802802C8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802802CC: lwc1        $f10, 0x51CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X51CC);
    // 0x802802D0: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x802802D4: nop

    // 0x802802D8: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802802DC: nop

    // 0x802802E0: bc1t        L_80280344
    if (c1cs) {
        // 0x802802E4: nop
    
            goto L_80280344;
    }
    // 0x802802E4: nop

L_802802E8:
    // 0x802802E8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x802802EC: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x802802F0: nop

    // 0x802802F4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x802802F8: bne         $t9, $zero, L_80280344
    if (ctx->r25 != 0) {
        // 0x802802FC: nop
    
            goto L_80280344;
    }
    // 0x802802FC: nop

    // 0x80280300: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280304: lb          $t0, -0x1DD8($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1DD8);
    // 0x80280308: nop

    // 0x8028030C: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x80280310: bne         $t1, $zero, L_80280344
    if (ctx->r9 != 0) {
        // 0x80280314: nop
    
            goto L_80280344;
    }
    // 0x80280314: nop

    // 0x80280318: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028031C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280320: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80280324: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280328: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8028032C: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x80280330: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80280334: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x80280338: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8028033C: jal         0x80081468
    // 0x80280340: addiu       $a0, $zero, 0x2C6
    ctx->r4 = ADD32(0, 0X2C6);
    func_80081468(rdram, ctx);
        goto after_0;
    // 0x80280340: addiu       $a0, $zero, 0x2C6
    ctx->r4 = ADD32(0, 0X2C6);
    after_0:
L_80280344:
    // 0x80280344: b           L_8028034C
    // 0x80280348: nop

        goto L_8028034C;
    // 0x80280348: nop

L_8028034C:
    // 0x8028034C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280354: jr          $ra
    // 0x80280358: nop

    return;
    // 0x80280358: nop

;}
RECOMP_FUNC void func_80287E44_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287E44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287E48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287E4C: jal         0x80085D54
    // 0x80287E50: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80287E50: nop

    after_0:
    // 0x80287E54: beq         $v0, $zero, L_80287E64
    if (ctx->r2 == 0) {
        // 0x80287E58: nop
    
            goto L_80287E64;
    }
    // 0x80287E58: nop

    // 0x80287E5C: b           L_80287EA4
    // 0x80287E60: nop

        goto L_80287EA4;
    // 0x80287E60: nop

L_80287E64:
    // 0x80287E64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80287E68: jal         0x8001B62C
    // 0x80287E6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80287E6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80287E70: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80287E74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80287E78: nop

    // 0x80287E7C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80287E80: nop

    // 0x80287E84: bc1f        L_80287E9C
    if (!c1cs) {
        // 0x80287E88: nop
    
            goto L_80287E9C;
    }
    // 0x80287E88: nop

    // 0x80287E8C: jal         0x80283B18
    // 0x80287E90: nop

    func_80283B18_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80287E90: nop

    after_2:
    // 0x80287E94: b           L_80287EA4
    // 0x80287E98: nop

        goto L_80287EA4;
    // 0x80287E98: nop

L_80287E9C:
    // 0x80287E9C: b           L_80287EA4
    // 0x80287EA0: nop

        goto L_80287EA4;
    // 0x80287EA0: nop

L_80287EA4:
    // 0x80287EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80287EAC: jr          $ra
    // 0x80287EB0: nop

    return;
    // 0x80287EB0: nop

;}
RECOMP_FUNC void func_80288BF4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80288BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80288BFC: jal         0x802858D8
    // 0x80288C00: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80288C00: nop

    after_0:
    // 0x80288C04: beq         $v0, $zero, L_80288C14
    if (ctx->r2 == 0) {
        // 0x80288C08: nop
    
            goto L_80288C14;
    }
    // 0x80288C08: nop

    // 0x80288C0C: b           L_80288C70
    // 0x80288C10: nop

        goto L_80288C70;
    // 0x80288C10: nop

L_80288C14:
    // 0x80288C14: jal         0x80085D54
    // 0x80288C18: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80288C18: nop

    after_1:
    // 0x80288C1C: beq         $v0, $zero, L_80288C2C
    if (ctx->r2 == 0) {
        // 0x80288C20: nop
    
            goto L_80288C2C;
    }
    // 0x80288C20: nop

    // 0x80288C24: b           L_80288C70
    // 0x80288C28: nop

        goto L_80288C70;
    // 0x80288C28: nop

L_80288C2C:
    // 0x80288C2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288C30: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80288C34: nop

    // 0x80288C38: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x80288C3C: bne         $t7, $zero, L_80288C58
    if (ctx->r15 != 0) {
        // 0x80288C40: nop
    
            goto L_80288C58;
    }
    // 0x80288C40: nop

    // 0x80288C44: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80288C48: lb          $t8, -0x1CC8($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1CC8);
    // 0x80288C4C: nop

    // 0x80288C50: bne         $t8, $zero, L_80288C68
    if (ctx->r24 != 0) {
        // 0x80288C54: nop
    
            goto L_80288C68;
    }
    // 0x80288C54: nop

L_80288C58:
    // 0x80288C58: jal         0x8028236C
    // 0x80288C5C: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80288C5C: nop

    after_2:
    // 0x80288C60: b           L_80288C70
    // 0x80288C64: nop

        goto L_80288C70;
    // 0x80288C64: nop

L_80288C68:
    // 0x80288C68: b           L_80288C70
    // 0x80288C6C: nop

        goto L_80288C70;
    // 0x80288C6C: nop

L_80288C70:
    // 0x80288C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80288C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80288C78: jr          $ra
    // 0x80288C7C: nop

    return;
    // 0x80288C7C: nop

;}
RECOMP_FUNC void func_80285F4C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285F4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80285F50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285F54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285F58: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80285F5C: nop

    // 0x80285F60: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80285F64: beq         $t7, $zero, L_80285F74
    if (ctx->r15 == 0) {
        // 0x80285F68: nop
    
            goto L_80285F74;
    }
    // 0x80285F68: nop

    // 0x80285F6C: b           L_802861F0
    // 0x80285F70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802861F0;
    // 0x80285F70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80285F74:
    // 0x80285F74: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80285F78: lh          $t8, -0x1F4C($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F4C);
    // 0x80285F7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80285F80: beq         $t8, $at, L_80285F90
    if (ctx->r24 == ctx->r1) {
        // 0x80285F84: nop
    
            goto L_80285F90;
    }
    // 0x80285F84: nop

    // 0x80285F88: b           L_802861F0
    // 0x80285F8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802861F0;
    // 0x80285F8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80285F90:
    // 0x80285F90: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80285F94: lh          $t9, 0x5278($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X5278);
    // 0x80285F98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80285F9C: beq         $t9, $at, L_80285FFC
    if (ctx->r25 == ctx->r1) {
        // 0x80285FA0: nop
    
            goto L_80285FFC;
    }
    // 0x80285FA0: nop

    // 0x80285FA4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80285FA8: lh          $t0, 0x5278($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X5278);
    // 0x80285FAC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80285FB0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80285FB4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80285FB8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80285FBC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80285FC0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80285FC4: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80285FC8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80285FCC: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x80285FD0: nop

    // 0x80285FD4: beq         $t4, $zero, L_80285FF4
    if (ctx->r12 == 0) {
        // 0x80285FD8: nop
    
            goto L_80285FF4;
    }
    // 0x80285FD8: nop

    // 0x80285FDC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80285FE0: lh          $t6, 0x5280($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X5280);
    // 0x80285FE4: lh          $t5, 0xE4($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XE4);
    // 0x80285FE8: nop

    // 0x80285FEC: beq         $t5, $t6, L_80285FFC
    if (ctx->r13 == ctx->r14) {
        // 0x80285FF0: nop
    
            goto L_80285FFC;
    }
    // 0x80285FF0: nop

L_80285FF4:
    // 0x80285FF4: b           L_802861F0
    // 0x80285FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802861F0;
    // 0x80285FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80285FFC:
    // 0x80285FFC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80286000: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80286004: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80286008: lwc1        $f6, 0x51C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51C0);
    // 0x8028600C: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80286010: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80286014: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80286018: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8028601C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80286020: nop

    // 0x80286024: bc1f        L_802861E0
    if (!c1cs) {
        // 0x80286028: nop
    
            goto L_802861E0;
    }
    // 0x80286028: nop

    // 0x8028602C: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80286030: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80286034: jal         0x80280F18
    // 0x80286038: nop

    func_80280F18_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80286038: nop

    after_0:
    // 0x8028603C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80286040: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80286044: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80286048: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028604C: nop

    // 0x80286050: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80286054: nop

    // 0x80286058: bc1f        L_80286068
    if (!c1cs) {
        // 0x8028605C: nop
    
            goto L_80286068;
    }
    // 0x8028605C: nop

    // 0x80286060: b           L_802861F0
    // 0x80286064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802861F0;
    // 0x80286064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80286068:
    // 0x80286068: jal         0x80284228
    // 0x8028606C: nop

    func_80284228_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x8028606C: nop

    after_1:
    // 0x80286070: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286074: sb          $zero, -0x1D38($at)
    MEM_B(-0X1D38, ctx->r1) = 0;
    // 0x80286078: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028607C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80286080: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80286084: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80286088: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8028608C: nop

    // 0x80286090: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80286094: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
    // 0x80286098: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028609C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802860A0: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802860A4: nop

    // 0x802860A8: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x802860AC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802860B0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802860B4: nop

    // 0x802860B8: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x802860BC: nop

    // 0x802860C0: swc1        $f16, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f16.u32l;
    // 0x802860C4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x802860C8: lh          $t1, 0x5278($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X5278);
    // 0x802860CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802860D0: sh          $t1, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r9;
    // 0x802860D4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802860D8: lh          $t2, -0x1D58($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1D58);
    // 0x802860DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802860E0: beq         $t2, $at, L_802861D8
    if (ctx->r10 == ctx->r1) {
        // 0x802860E4: nop
    
            goto L_802861D8;
    }
    // 0x802860E4: nop

    // 0x802860E8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802860EC: lh          $t4, -0x1D58($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1D58);
    // 0x802860F0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x802860F4: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x802860F8: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x802860FC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80286100: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80286104: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80286108: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8028610C: lh          $t5, 0x4234($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4234);
    // 0x80286110: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286114: sh          $t5, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r13;
    // 0x80286118: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028611C: lh          $t7, -0x1D58($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D58);
    // 0x80286120: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286124: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80286128: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8028612C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80286130: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80286134: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80286138: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8028613C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80286140: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80286144: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80286148: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8028614C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80286150: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80286154: swc1        $f6, 0x5288($at)
    MEM_W(0X5288, ctx->r1) = ctx->f6.u32l;
    // 0x80286158: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028615C: lh          $t0, -0x1D58($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1D58);
    // 0x80286160: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80286164: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80286168: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8028616C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80286170: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80286174: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80286178: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8028617C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80286180: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80286184: lwc1        $f10, 0x4154($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80286188: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8028618C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286190: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80286194: swc1        $f16, -0x3D70($at)
    MEM_W(-0X3D70, ctx->r1) = ctx->f16.u32l;
    // 0x80286198: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028619C: lh          $t4, -0x1D58($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1D58);
    // 0x802861A0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802861A4: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x802861A8: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x802861AC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x802861B0: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x802861B4: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802861B8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x802861BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x802861C0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x802861C4: lwc1        $f4, 0x4158($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x802861C8: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x802861CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802861D0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802861D4: swc1        $f6, -0x3568($at)
    MEM_W(-0X3568, ctx->r1) = ctx->f6.u32l;
L_802861D8:
    // 0x802861D8: b           L_802861F0
    // 0x802861DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802861F0;
    // 0x802861DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802861E0:
    // 0x802861E0: b           L_802861F0
    // 0x802861E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802861F0;
    // 0x802861E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802861E8: b           L_802861F0
    // 0x802861EC: nop

        goto L_802861F0;
    // 0x802861EC: nop

L_802861F0:
    // 0x802861F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802861F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802861F8: jr          $ra
    // 0x802861FC: nop

    return;
    // 0x802861FC: nop

;}
RECOMP_FUNC void func_80289A34_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289A34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289A3C: jal         0x8028180C
    // 0x80289A40: nop

    func_8028180C_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289A40: nop

    after_0:
    // 0x80289A44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80289A48: lh          $a0, -0x1D68($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D68);
    // 0x80289A4C: jal         0x80281BA4
    // 0x80289A50: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80289A50: nop

    after_1:
    // 0x80289A54: b           L_80289A5C
    // 0x80289A58: nop

        goto L_80289A5C;
    // 0x80289A58: nop

L_80289A5C:
    // 0x80289A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80289A64: jr          $ra
    // 0x80289A68: nop

    return;
    // 0x80289A68: nop

;}
RECOMP_FUNC void func_8028945C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028945C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289460: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289464: jal         0x80281BA4
    // 0x80289468: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289468: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8028946C: b           L_80289474
    // 0x80289470: nop

        goto L_80289474;
    // 0x80289470: nop

L_80289474:
    // 0x80289474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028947C: jr          $ra
    // 0x80289480: nop

    return;
    // 0x80289480: nop

;}
RECOMP_FUNC void func_8028A8CC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A8CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028A8D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028A8D4: jal         0x80281638
    // 0x8028A8D8: nop

    func_80281638_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x8028A8D8: nop

    after_0:
    // 0x8028A8DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8028A8E0: lh          $a0, -0x1D68($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D68);
    // 0x8028A8E4: jal         0x80281BA4
    // 0x8028A8E8: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x8028A8E8: nop

    after_1:
    // 0x8028A8EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A8F0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028A8F4: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x8028A8F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028A8FC: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8028A900: jal         0x80015538
    // 0x8028A904: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8028A904: nop

    after_2:
    // 0x8028A908: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A90C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028A910: nop

    // 0x8028A914: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x8028A918: b           L_8028A920
    // 0x8028A91C: nop

        goto L_8028A920;
    // 0x8028A91C: nop

L_8028A920:
    // 0x8028A920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028A924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028A928: jr          $ra
    // 0x8028A92C: nop

    return;
    // 0x8028A92C: nop

;}
RECOMP_FUNC void func_80282788_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282788: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8028278C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282790: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282794: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x80282798: nop

    // 0x8028279C: bne         $t6, $zero, L_802827B0
    if (ctx->r14 != 0) {
        // 0x802827A0: nop
    
            goto L_802827B0;
    }
    // 0x802827A0: nop

    // 0x802827A4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802827A8: b           L_802827B8
    // 0x802827AC: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_802827B8;
    // 0x802827AC: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_802827B0:
    // 0x802827B0: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x802827B4: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_802827B8:
    // 0x802827B8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x802827BC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x802827C0: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x802827C4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x802827C8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x802827CC: addiu       $t1, $t1, 0x5808
    ctx->r9 = ADD32(ctx->r9, 0X5808);
    // 0x802827D0: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x802827D4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802827D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802827DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802827E0: jal         0x8001C0EC
    // 0x802827E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802827E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802827E8: jal         0x80280000
    // 0x802827EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802827EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802827F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802827F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802827F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802827FC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282800: jal         0x800178D4
    // 0x80282804: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80282804: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80282808: b           L_80282810
    // 0x8028280C: nop

        goto L_80282810;
    // 0x8028280C: nop

L_80282810:
    // 0x80282810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282818: jr          $ra
    // 0x8028281C: nop

    return;
    // 0x8028281C: nop

;}
RECOMP_FUNC void func_80288234_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80288238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028823C: jal         0x802858D8
    // 0x80288240: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80288240: nop

    after_0:
    // 0x80288244: beq         $v0, $zero, L_8028826C
    if (ctx->r2 == 0) {
        // 0x80288248: nop
    
            goto L_8028826C;
    }
    // 0x80288248: nop

    // 0x8028824C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80288250: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288254: sh          $t6, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r14;
    // 0x80288258: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8028825C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288260: sh          $t7, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r15;
    // 0x80288264: b           L_802883AC
    // 0x80288268: nop

        goto L_802883AC;
    // 0x80288268: nop

L_8028826C:
    // 0x8028826C: jal         0x80085D54
    // 0x80288270: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80288270: nop

    after_1:
    // 0x80288274: beq         $v0, $zero, L_8028829C
    if (ctx->r2 == 0) {
        // 0x80288278: nop
    
            goto L_8028829C;
    }
    // 0x80288278: nop

    // 0x8028827C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80288280: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288284: sh          $t8, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r24;
    // 0x80288288: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8028828C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288290: sh          $t9, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r25;
    // 0x80288294: b           L_802883AC
    // 0x80288298: nop

        goto L_802883AC;
    // 0x80288298: nop

L_8028829C:
    // 0x8028829C: jal         0x80286748
    // 0x802882A0: nop

    func_80286748_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802882A0: nop

    after_2:
    // 0x802882A4: beq         $v0, $zero, L_802882B4
    if (ctx->r2 == 0) {
        // 0x802882A8: nop
    
            goto L_802882B4;
    }
    // 0x802882A8: nop

    // 0x802882AC: b           L_802883AC
    // 0x802882B0: nop

        goto L_802883AC;
    // 0x802882B0: nop

L_802882B4:
    // 0x802882B4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802882B8: lhu         $t0, -0x1C7C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C7C);
    // 0x802882BC: nop

    // 0x802882C0: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x802882C4: beq         $t1, $zero, L_802882DC
    if (ctx->r9 == 0) {
        // 0x802882C8: nop
    
            goto L_802882DC;
    }
    // 0x802882C8: nop

    // 0x802882CC: jal         0x8028435C
    // 0x802882D0: nop

    func_8028435C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802882D0: nop

    after_3:
    // 0x802882D4: b           L_802883A4
    // 0x802882D8: nop

        goto L_802883A4;
    // 0x802882D8: nop

L_802882DC:
    // 0x802882DC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802882E0: lbu         $t2, -0x1D40($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1D40);
    // 0x802882E4: nop

    // 0x802882E8: beq         $t2, $zero, L_80288304
    if (ctx->r10 == 0) {
        // 0x802882EC: nop
    
            goto L_80288304;
    }
    // 0x802882EC: nop

    // 0x802882F0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802882F4: lbu         $t3, -0x1D38($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1D38);
    // 0x802882F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802882FC: bne         $t3, $at, L_802883A4
    if (ctx->r11 != ctx->r1) {
        // 0x80288300: nop
    
            goto L_802883A4;
    }
    // 0x80288300: nop

L_80288304:
    // 0x80288304: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80288308: lh          $t4, -0x1D68($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1D68);
    // 0x8028830C: nop

    // 0x80288310: blez        $t4, L_802883A4
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80288314: nop
    
            goto L_802883A4;
    }
    // 0x80288314: nop

    // 0x80288318: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028831C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80288320: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80288324: lwc1        $f14, 0x1C($t5)
    ctx->f14.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80288328: lwc1        $f12, 0x51D4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x8028832C: jal         0x80015538
    // 0x80288330: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80288330: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_4:
    // 0x80288334: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80288338: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8028833C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80288340: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80288344: nop

    // 0x80288348: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x8028834C: nop

    // 0x80288350: bc1t        L_80288374
    if (c1cs) {
        // 0x80288354: nop
    
            goto L_80288374;
    }
    // 0x80288354: nop

    // 0x80288358: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8028835C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80288360: nop

    // 0x80288364: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x80288368: nop

    // 0x8028836C: bc1f        L_80288384
    if (!c1cs) {
        // 0x80288370: nop
    
            goto L_80288384;
    }
    // 0x80288370: nop

L_80288374:
    // 0x80288374: jal         0x8028435C
    // 0x80288378: nop

    func_8028435C_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x80288378: nop

    after_5:
    // 0x8028837C: b           L_802883A4
    // 0x80288380: nop

        goto L_802883A4;
    // 0x80288380: nop

L_80288384:
    // 0x80288384: jal         0x80282AC4
    // 0x80288388: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_6;
    // 0x80288388: nop

    after_6:
    // 0x8028838C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80288390: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288394: sh          $t6, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r14;
    // 0x80288398: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8028839C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802883A0: sh          $t7, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r15;
L_802883A4:
    // 0x802883A4: b           L_802883AC
    // 0x802883A8: nop

        goto L_802883AC;
    // 0x802883A8: nop

L_802883AC:
    // 0x802883AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802883B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802883B4: jr          $ra
    // 0x802883B8: nop

    return;
    // 0x802883B8: nop

;}
RECOMP_FUNC void func_8028150C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028150C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281510: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281514: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281518: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028151C: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80281520: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80281524: nop

    // 0x80281528: beq         $t7, $at, L_802815A4
    if (ctx->r15 == ctx->r1) {
        // 0x8028152C: nop
    
            goto L_802815A4;
    }
    // 0x8028152C: nop

    // 0x80281530: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x80281534: beq         $t7, $at, L_802815A4
    if (ctx->r15 == ctx->r1) {
        // 0x80281538: nop
    
            goto L_802815A4;
    }
    // 0x80281538: nop

    // 0x8028153C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281540: lb          $t8, -0x1D98($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1D98);
    // 0x80281544: nop

    // 0x80281548: beq         $t8, $zero, L_8028159C
    if (ctx->r24 == 0) {
        // 0x8028154C: nop
    
            goto L_8028159C;
    }
    // 0x8028154C: nop

    // 0x80281550: jal         0x80281248
    // 0x80281554: nop

    func_80281248_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80281554: nop

    after_0:
    // 0x80281558: bne         $v0, $zero, L_80281570
    if (ctx->r2 != 0) {
        // 0x8028155C: nop
    
            goto L_80281570;
    }
    // 0x8028155C: nop

    // 0x80281560: b           L_80281628
    // 0x80281564: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80281628;
    // 0x80281564: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80281568: b           L_8028159C
    // 0x8028156C: nop

        goto L_8028159C;
    // 0x8028156C: nop

L_80281570:
    // 0x80281570: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281574: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281578: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028157C: lwc1        $f4, 0x44($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80281580: nop

    // 0x80281584: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80281588: nop

    // 0x8028158C: bc1f        L_8028159C
    if (!c1cs) {
        // 0x80281590: nop
    
            goto L_8028159C;
    }
    // 0x80281590: nop

    // 0x80281594: b           L_80281628
    // 0x80281598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281628;
    // 0x80281598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028159C:
    // 0x8028159C: b           L_80281618
    // 0x802815A0: nop

        goto L_80281618;
    // 0x802815A0: nop

L_802815A4:
    // 0x802815A4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802815A8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802815AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802815B0: lwc1        $f8, 0x44($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X44);
    // 0x802815B4: nop

    // 0x802815B8: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802815BC: nop

    // 0x802815C0: bc1f        L_80281618
    if (!c1cs) {
        // 0x802815C4: nop
    
            goto L_80281618;
    }
    // 0x802815C4: nop

    // 0x802815C8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x802815CC: addiu       $t1, $t1, 0x51D8
    ctx->r9 = ADD32(ctx->r9, 0X51D8);
    // 0x802815D0: lwc1        $f16, 0xC($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0XC);
    // 0x802815D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802815D8: nop

    // 0x802815DC: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x802815E0: nop

    // 0x802815E4: bc1t        L_80281610
    if (c1cs) {
        // 0x802815E8: nop
    
            goto L_80281610;
    }
    // 0x802815E8: nop

    // 0x802815EC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802815F0: lb          $t2, -0x1D98($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X1D98);
    // 0x802815F4: nop

    // 0x802815F8: bne         $t2, $zero, L_80281608
    if (ctx->r10 != 0) {
        // 0x802815FC: nop
    
            goto L_80281608;
    }
    // 0x802815FC: nop

    // 0x80281600: b           L_80281628
    // 0x80281604: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80281628;
    // 0x80281604: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80281608:
    // 0x80281608: b           L_80281618
    // 0x8028160C: nop

        goto L_80281618;
    // 0x8028160C: nop

L_80281610:
    // 0x80281610: b           L_80281628
    // 0x80281614: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80281628;
    // 0x80281614: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80281618:
    // 0x80281618: b           L_80281628
    // 0x8028161C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80281628;
    // 0x8028161C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80281620: b           L_80281628
    // 0x80281624: nop

        goto L_80281628;
    // 0x80281624: nop

L_80281628:
    // 0x80281628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028162C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281630: jr          $ra
    // 0x80281634: nop

    return;
    // 0x80281634: nop

;}
RECOMP_FUNC void func_80280A9C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280A9C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80280AA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280AA4: lb          $t6, -0x1D78($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1D78);
    // 0x80280AA8: nop

    // 0x80280AAC: bne         $t6, $zero, L_80280ABC
    if (ctx->r14 != 0) {
        // 0x80280AB0: nop
    
            goto L_80280ABC;
    }
    // 0x80280AB0: nop

    // 0x80280AB4: b           L_80280C5C
    // 0x80280AB8: nop

        goto L_80280C5C;
    // 0x80280AB8: nop

L_80280ABC:
    // 0x80280ABC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280AC0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280AC4: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80280AC8: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80280ACC: nop

    // 0x80280AD0: beq         $t8, $at, L_80280B20
    if (ctx->r24 == ctx->r1) {
        // 0x80280AD4: nop
    
            goto L_80280B20;
    }
    // 0x80280AD4: nop

    // 0x80280AD8: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80280ADC: beq         $t8, $at, L_80280B20
    if (ctx->r24 == ctx->r1) {
        // 0x80280AE0: nop
    
            goto L_80280B20;
    }
    // 0x80280AE0: nop

    // 0x80280AE4: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x80280AE8: beq         $t8, $at, L_80280B20
    if (ctx->r24 == ctx->r1) {
        // 0x80280AEC: nop
    
            goto L_80280B20;
    }
    // 0x80280AEC: nop

    // 0x80280AF0: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x80280AF4: beq         $t8, $at, L_80280B20
    if (ctx->r24 == ctx->r1) {
        // 0x80280AF8: nop
    
            goto L_80280B20;
    }
    // 0x80280AF8: nop

    // 0x80280AFC: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x80280B00: beq         $t8, $at, L_80280B20
    if (ctx->r24 == ctx->r1) {
        // 0x80280B04: nop
    
            goto L_80280B20;
    }
    // 0x80280B04: nop

    // 0x80280B08: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80280B0C: beq         $t8, $at, L_80280B20
    if (ctx->r24 == ctx->r1) {
        // 0x80280B10: nop
    
            goto L_80280B20;
    }
    // 0x80280B10: nop

    // 0x80280B14: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x80280B18: bne         $t8, $at, L_80280B30
    if (ctx->r24 != ctx->r1) {
        // 0x80280B1C: nop
    
            goto L_80280B30;
    }
    // 0x80280B1C: nop

L_80280B20:
    // 0x80280B20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280B24: sb          $zero, -0x1D78($at)
    MEM_B(-0X1D78, ctx->r1) = 0;
    // 0x80280B28: b           L_80280C5C
    // 0x80280B2C: nop

        goto L_80280C5C;
    // 0x80280B2C: nop

L_80280B30:
    // 0x80280B30: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80280B34: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80280B38: nop

    // 0x80280B3C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80280B40: beq         $t0, $zero, L_80280B58
    if (ctx->r8 == 0) {
        // 0x80280B44: nop
    
            goto L_80280B58;
    }
    // 0x80280B44: nop

    // 0x80280B48: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280B4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280B50: b           L_80280B68
    // 0x80280B54: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
        goto L_80280B68;
    // 0x80280B54: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
L_80280B58:
    // 0x80280B58: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80280B5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280B60: nop

    // 0x80280B64: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
L_80280B68:
    // 0x80280B68: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280B6C: lb          $t1, -0x1D78($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1D78);
    // 0x80280B70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80280B74: bne         $t1, $at, L_80280B9C
    if (ctx->r9 != ctx->r1) {
        // 0x80280B78: nop
    
            goto L_80280B9C;
    }
    // 0x80280B78: nop

    // 0x80280B7C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280B80: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280B84: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280B88: lwc1        $f8, 0x24($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X24);
    // 0x80280B8C: nop

    // 0x80280B90: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80280B94: b           L_80280C34
    // 0x80280B98: swc1        $f16, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f16.u32l;
        goto L_80280C34;
    // 0x80280B98: swc1        $f16, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f16.u32l;
L_80280B9C:
    // 0x80280B9C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280BA0: lb          $t3, -0x1D78($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1D78);
    // 0x80280BA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80280BA8: bne         $t3, $at, L_80280BD0
    if (ctx->r11 != ctx->r1) {
        // 0x80280BAC: nop
    
            goto L_80280BD0;
    }
    // 0x80280BAC: nop

    // 0x80280BB0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280BB4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280BB8: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280BBC: lwc1        $f18, 0x24($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X24);
    // 0x80280BC0: nop

    // 0x80280BC4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80280BC8: b           L_80280C34
    // 0x80280BCC: swc1        $f6, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f6.u32l;
        goto L_80280C34;
    // 0x80280BCC: swc1        $f6, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f6.u32l;
L_80280BD0:
    // 0x80280BD0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280BD4: lb          $t5, -0x1D78($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1D78);
    // 0x80280BD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80280BDC: bne         $t5, $at, L_80280C04
    if (ctx->r13 != ctx->r1) {
        // 0x80280BE0: nop
    
            goto L_80280C04;
    }
    // 0x80280BE0: nop

    // 0x80280BE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280BE8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280BEC: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280BF0: lwc1        $f8, 0x2C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80280BF4: nop

    // 0x80280BF8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80280BFC: b           L_80280C34
    // 0x80280C00: swc1        $f16, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f16.u32l;
        goto L_80280C34;
    // 0x80280C00: swc1        $f16, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f16.u32l;
L_80280C04:
    // 0x80280C04: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280C08: lb          $t7, -0x1D78($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1D78);
    // 0x80280C0C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80280C10: bne         $t7, $at, L_80280C34
    if (ctx->r15 != ctx->r1) {
        // 0x80280C14: nop
    
            goto L_80280C34;
    }
    // 0x80280C14: nop

    // 0x80280C18: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280C1C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280C20: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280C24: lwc1        $f18, 0x2C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80280C28: nop

    // 0x80280C2C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80280C30: swc1        $f6, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f6.u32l;
L_80280C34:
    // 0x80280C34: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80280C38: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80280C3C: nop

    // 0x80280C40: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80280C44: bne         $t0, $zero, L_80280C54
    if (ctx->r8 != 0) {
        // 0x80280C48: nop
    
            goto L_80280C54;
    }
    // 0x80280C48: nop

    // 0x80280C4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280C50: sb          $zero, -0x1D78($at)
    MEM_B(-0X1D78, ctx->r1) = 0;
L_80280C54:
    // 0x80280C54: b           L_80280C5C
    // 0x80280C58: nop

        goto L_80280C5C;
    // 0x80280C58: nop

L_80280C5C:
    // 0x80280C5C: jr          $ra
    // 0x80280C60: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80280C60: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80282250_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282250: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282258: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028225C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282260: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282264: lwc1        $f6, 0x51D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x80282268: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8028226C: nop

    // 0x80282270: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80282274: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80282278: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8028227C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80282280: nop

    // 0x80282284: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80282288: nop

    // 0x8028228C: bc1f        L_802822A4
    if (!c1cs) {
        // 0x80282290: nop
    
            goto L_802822A4;
    }
    // 0x80282290: nop

    // 0x80282294: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80282298: nop

    // 0x8028229C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x802822A0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_802822A4:
    // 0x802822A4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802822A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802822AC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802822B0: nop

    // 0x802822B4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802822B8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x802822BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802822C0: lwc1        $f14, 0x51D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x802822C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802822C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802822CC: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802822D0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802822D4: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802822D8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802822DC: nop

    // 0x802822E0: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x802822E4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802822E8: jal         0x80084120
    // 0x802822EC: nop

    func_80084120(rdram, ctx);
        goto after_0;
    // 0x802822EC: nop

    after_0:
    // 0x802822F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802822F4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x802822F8: nop

    // 0x802822FC: bne         $t8, $zero, L_8028231C
    if (ctx->r24 != 0) {
        // 0x80282300: nop
    
            goto L_8028231C;
    }
    // 0x80282300: nop

    // 0x80282304: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282308: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028230C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282310: lwc1        $f6, 0x51D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x80282314: b           L_80282354
    // 0x80282318: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
        goto L_80282354;
    // 0x80282318: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
L_8028231C:
    // 0x8028231C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80282320: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282324: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80282328: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028232C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80282330: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80282334: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80282338: mul.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8028233C: jal         0x80015538
    // 0x80282340: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80282340: nop

    after_1:
    // 0x80282344: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80282348: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028234C: nop

    // 0x80282350: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
L_80282354:
    // 0x80282354: b           L_8028235C
    // 0x80282358: nop

        goto L_8028235C;
    // 0x80282358: nop

L_8028235C:
    // 0x8028235C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282360: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282364: jr          $ra
    // 0x80282368: nop

    return;
    // 0x80282368: nop

;}
RECOMP_FUNC void func_802807F8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802807F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802807FC: lb          $t6, -0x1CD8($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1CD8);
    // 0x80280800: nop

    // 0x80280804: beq         $t6, $zero, L_80280824
    if (ctx->r14 == 0) {
        // 0x80280808: nop
    
            goto L_80280824;
    }
    // 0x80280808: nop

    // 0x8028080C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80280810: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280814: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280818: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028081C: b           L_80280884
    // 0x80280820: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
        goto L_80280884;
    // 0x80280820: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
L_80280824:
    // 0x80280824: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80280828: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x8028082C: nop

    // 0x80280830: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x80280834: beq         $t9, $zero, L_80280854
    if (ctx->r25 == 0) {
        // 0x80280838: nop
    
            goto L_80280854;
    }
    // 0x80280838: nop

    // 0x8028083C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80280840: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280844: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280848: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028084C: b           L_80280884
    // 0x80280850: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
        goto L_80280884;
    // 0x80280850: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
L_80280854:
    // 0x80280854: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80280858: lw          $t1, 0x51A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51A4);
    // 0x8028085C: nop

    // 0x80280860: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x80280864: bne         $t2, $zero, L_80280884
    if (ctx->r10 != 0) {
        // 0x80280868: nop
    
            goto L_80280884;
    }
    // 0x80280868: nop

    // 0x8028086C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80280870: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280874: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280878: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028087C: nop

    // 0x80280880: swc1        $f8, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f8.u32l;
L_80280884:
    // 0x80280884: jr          $ra
    // 0x80280888: nop

    return;
    // 0x80280888: nop

    // 0x8028088C: jr          $ra
    // 0x80280890: nop

    return;
    // 0x80280890: nop

;}
RECOMP_FUNC void func_80288C80_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288C80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80288C84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80288C88: jal         0x802858D8
    // 0x80288C8C: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80288C8C: nop

    after_0:
    // 0x80288C90: beq         $v0, $zero, L_80288CC4
    if (ctx->r2 == 0) {
        // 0x80288C94: nop
    
            goto L_80288CC4;
    }
    // 0x80288C94: nop

    // 0x80288C98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288C9C: lw          $t6, 0x7544($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7544);
    // 0x80288CA0: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80288CA4: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80288CA8: lwc1        $f14, 0x4($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80288CAC: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x80288CB0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80288CB4: jal         0x8002AE38
    // 0x80288CB8: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    func_8002AE38(rdram, ctx);
        goto after_1;
    // 0x80288CB8: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_1:
    // 0x80288CBC: b           L_80288D64
    // 0x80288CC0: nop

        goto L_80288D64;
    // 0x80288CC0: nop

L_80288CC4:
    // 0x80288CC4: jal         0x80085D54
    // 0x80288CC8: nop

    func_80085D54(rdram, ctx);
        goto after_2;
    // 0x80288CC8: nop

    after_2:
    // 0x80288CCC: beq         $v0, $zero, L_80288D00
    if (ctx->r2 == 0) {
        // 0x80288CD0: nop
    
            goto L_80288D00;
    }
    // 0x80288CD0: nop

    // 0x80288CD4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80288CD8: lw          $t8, 0x7544($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7544);
    // 0x80288CDC: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80288CE0: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80288CE4: lwc1        $f14, 0x4($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80288CE8: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x80288CEC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80288CF0: jal         0x8002AE38
    // 0x80288CF4: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    func_8002AE38(rdram, ctx);
        goto after_3;
    // 0x80288CF4: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_3:
    // 0x80288CF8: b           L_80288D64
    // 0x80288CFC: nop

        goto L_80288D64;
    // 0x80288CFC: nop

L_80288D00:
    // 0x80288D00: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80288D04: lh          $t0, -0x1DE4($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1DE4);
    // 0x80288D08: nop

    // 0x80288D0C: bne         $t0, $zero, L_80288D48
    if (ctx->r8 != 0) {
        // 0x80288D10: nop
    
            goto L_80288D48;
    }
    // 0x80288D10: nop

    // 0x80288D14: jal         0x8028236C
    // 0x80288D18: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80288D18: nop

    after_4:
    // 0x80288D1C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80288D20: lw          $t1, 0x7544($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7544);
    // 0x80288D24: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80288D28: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80288D2C: lwc1        $f14, 0x4($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80288D30: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80288D34: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80288D38: jal         0x8002AE38
    // 0x80288D3C: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    func_8002AE38(rdram, ctx);
        goto after_5;
    // 0x80288D3C: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_5:
    // 0x80288D40: b           L_80288D64
    // 0x80288D44: nop

        goto L_80288D64;
    // 0x80288D44: nop

L_80288D48:
    // 0x80288D48: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80288D4C: lh          $t3, -0x1DE4($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1DE4);
    // 0x80288D50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288D54: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80288D58: sh          $t4, -0x1DE4($at)
    MEM_H(-0X1DE4, ctx->r1) = ctx->r12;
    // 0x80288D5C: b           L_80288D64
    // 0x80288D60: nop

        goto L_80288D64;
    // 0x80288D60: nop

L_80288D64:
    // 0x80288D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80288D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80288D6C: jr          $ra
    // 0x80288D70: nop

    return;
    // 0x80288D70: nop

;}
RECOMP_FUNC void func_80286C50_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286C50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80286C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80286C58: jal         0x802858D8
    // 0x80286C5C: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80286C5C: nop

    after_0:
    // 0x80286C60: beq         $v0, $zero, L_80286C70
    if (ctx->r2 == 0) {
        // 0x80286C64: nop
    
            goto L_80286C70;
    }
    // 0x80286C64: nop

    // 0x80286C68: b           L_80286D98
    // 0x80286C6C: nop

        goto L_80286D98;
    // 0x80286C6C: nop

L_80286C70:
    // 0x80286C70: jal         0x80085D54
    // 0x80286C74: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80286C74: nop

    after_1:
    // 0x80286C78: beq         $v0, $zero, L_80286C88
    if (ctx->r2 == 0) {
        // 0x80286C7C: nop
    
            goto L_80286C88;
    }
    // 0x80286C7C: nop

    // 0x80286C80: b           L_80286D98
    // 0x80286C84: nop

        goto L_80286D98;
    // 0x80286C84: nop

L_80286C88:
    // 0x80286C88: jal         0x80285F4C
    // 0x80286C8C: nop

    func_80285F4C_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80286C8C: nop

    after_2:
    // 0x80286C90: beq         $v0, $zero, L_80286CA0
    if (ctx->r2 == 0) {
        // 0x80286C94: nop
    
            goto L_80286CA0;
    }
    // 0x80286C94: nop

    // 0x80286C98: b           L_80286D98
    // 0x80286C9C: nop

        goto L_80286D98;
    // 0x80286C9C: nop

L_80286CA0:
    // 0x80286CA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286CA4: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80286CA8: nop

    // 0x80286CAC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80286CB0: bne         $t7, $zero, L_80286CC8
    if (ctx->r15 != 0) {
        // 0x80286CB4: nop
    
            goto L_80286CC8;
    }
    // 0x80286CB4: nop

    // 0x80286CB8: jal         0x80282AC4
    // 0x80286CBC: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80286CBC: nop

    after_3:
    // 0x80286CC0: b           L_80286D98
    // 0x80286CC4: nop

        goto L_80286D98;
    // 0x80286CC4: nop

L_80286CC8:
    // 0x80286CC8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80286CCC: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80286CD0: nop

    // 0x80286CD4: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80286CD8: beq         $t9, $zero, L_80286CF0
    if (ctx->r25 == 0) {
        // 0x80286CDC: nop
    
            goto L_80286CF0;
    }
    // 0x80286CDC: nop

    // 0x80286CE0: jal         0x802828C0
    // 0x80286CE4: nop

    func_802828C0_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80286CE4: nop

    after_4:
    // 0x80286CE8: b           L_80286D98
    // 0x80286CEC: nop

        goto L_80286D98;
    // 0x80286CEC: nop

L_80286CF0:
    // 0x80286CF0: jal         0x80285EB4
    // 0x80286CF4: nop

    func_80285EB4_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x80286CF4: nop

    after_5:
    // 0x80286CF8: beq         $v0, $zero, L_80286D08
    if (ctx->r2 == 0) {
        // 0x80286CFC: nop
    
            goto L_80286D08;
    }
    // 0x80286CFC: nop

    // 0x80286D00: b           L_80286D98
    // 0x80286D04: nop

        goto L_80286D98;
    // 0x80286D04: nop

L_80286D08:
    // 0x80286D08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80286D0C: jal         0x8001B62C
    // 0x80286D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_6;
    // 0x80286D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80286D14: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80286D18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80286D1C: nop

    // 0x80286D20: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80286D24: nop

    // 0x80286D28: bc1f        L_80286D54
    if (!c1cs) {
        // 0x80286D2C: nop
    
            goto L_80286D54;
    }
    // 0x80286D2C: nop

    // 0x80286D30: jal         0x802813EC
    // 0x80286D34: nop

    func_802813EC_code_extra_0(rdram, ctx);
        goto after_7;
    // 0x80286D34: nop

    after_7:
    // 0x80286D38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80286D3C: bne         $v0, $at, L_80286D54
    if (ctx->r2 != ctx->r1) {
        // 0x80286D40: nop
    
            goto L_80286D54;
    }
    // 0x80286D40: nop

    // 0x80286D44: jal         0x80282820
    // 0x80286D48: nop

    func_80282820_code_extra_0(rdram, ctx);
        goto after_8;
    // 0x80286D48: nop

    after_8:
    // 0x80286D4C: b           L_80286D98
    // 0x80286D50: nop

        goto L_80286D98;
    // 0x80286D50: nop

L_80286D54:
    // 0x80286D54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80286D58: jal         0x8001B44C
    // 0x80286D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_9;
    // 0x80286D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80286D60: beq         $v0, $zero, L_80286D90
    if (ctx->r2 == 0) {
        // 0x80286D64: nop
    
            goto L_80286D90;
    }
    // 0x80286D64: nop

    // 0x80286D68: jal         0x8028236C
    // 0x80286D6C: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_10;
    // 0x80286D6C: nop

    after_10:
    // 0x80286D70: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80286D74: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80286D78: nop

    // 0x80286D7C: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80286D80: nop

    // 0x80286D84: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x80286D88: b           L_80286D98
    // 0x80286D8C: nop

        goto L_80286D98;
    // 0x80286D8C: nop

L_80286D90:
    // 0x80286D90: b           L_80286D98
    // 0x80286D94: nop

        goto L_80286D98;
    // 0x80286D94: nop

L_80286D98:
    // 0x80286D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80286D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80286DA0: jr          $ra
    // 0x80286DA4: nop

    return;
    // 0x80286DA4: nop

;}
RECOMP_FUNC void func_80280C64_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280C64: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80280C68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280C6C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80280C70: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80280C74: lui         $t7, 0xE
    ctx->r15 = S32(0XE << 16);
    // 0x80280C78: ori         $t7, $t7, 0x1000
    ctx->r15 = ctx->r15 | 0X1000;
    // 0x80280C7C: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80280C80: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80280C84: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80280C88: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x80280C8C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80280C90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280C94: nop

    // 0x80280C98: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x80280C9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80280CA0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80280CA4: addiu       $t9, $t8, 0x1260
    ctx->r25 = ADD32(ctx->r24, 0X1260);
    // 0x80280CA8: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x80280CAC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80280CB0:
    // 0x80280CB0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80280CB4: nop

    // 0x80280CB8: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80280CBC: nop

    // 0x80280CC0: beq         $t1, $zero, L_80280E88
    if (ctx->r9 == 0) {
        // 0x80280CC4: nop
    
            goto L_80280E88;
    }
    // 0x80280CC4: nop

    // 0x80280CC8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280CCC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280CD0: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80280CD4: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80280CD8: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80280CDC: nop

    // 0x80280CE0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80280CE4: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x80280CE8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280CEC: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280CF0: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80280CF4: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80280CF8: lwc1        $f16, 0x4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80280CFC: nop

    // 0x80280D00: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80280D04: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x80280D08: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280D0C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280D10: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80280D14: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80280D18: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80280D1C: nop

    // 0x80280D20: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80280D24: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80280D28: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80280D2C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80280D30: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80280D34: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80280D38: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80280D3C: nop

    // 0x80280D40: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80280D44: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80280D48: jal         0x8003670C
    // 0x80280D4C: add.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f16.fl;
    __f_to_ll_recomp(rdram, ctx);
        goto after_0;
    // 0x80280D4C: add.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f16.fl;
    after_0:
    // 0x80280D50: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80280D54: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80280D58: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80280D5C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80280D60: bgtz        $t8, L_80280E88
    if (SIGNED(ctx->r24) > 0) {
        // 0x80280D64: nop
    
            goto L_80280E88;
    }
    // 0x80280D64: nop

    // 0x80280D68: bltz        $t8, L_80280D84
    if (SIGNED(ctx->r24) < 0) {
        // 0x80280D6C: nop
    
            goto L_80280D84;
    }
    // 0x80280D6C: nop

    // 0x80280D70: lui         $at, 0xE
    ctx->r1 = S32(0XE << 16);
    // 0x80280D74: ori         $at, $at, 0x1000
    ctx->r1 = ctx->r1 | 0X1000;
    // 0x80280D78: sltu        $at, $t9, $at
    ctx->r1 = ctx->r25 < ctx->r1 ? 1 : 0;
    // 0x80280D7C: beq         $at, $zero, L_80280E88
    if (ctx->r1 == 0) {
        // 0x80280D80: nop
    
            goto L_80280E88;
    }
    // 0x80280D80: nop

L_80280D84:
    // 0x80280D84: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80280D88: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280D8C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80280D90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280D94: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280D98: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80280D9C: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80280DA0: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80280DA4: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x80280DA8: nop

    // 0x80280DAC: bc1f        L_80280E88
    if (!c1cs) {
        // 0x80280DB0: nop
    
            goto L_80280E88;
    }
    // 0x80280DB0: nop

    // 0x80280DB4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80280DB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280DBC: nop

    // 0x80280DC0: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80280DC4: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x80280DC8: nop

    // 0x80280DCC: bc1f        L_80280E88
    if (!c1cs) {
        // 0x80280DD0: nop
    
            goto L_80280E88;
    }
    // 0x80280DD0: nop

    // 0x80280DD4: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80280DD8: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80280DDC: jal         0x80015634
    // 0x80280DE0: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_1;
    // 0x80280DE0: nop

    after_1:
    // 0x80280DE4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280DE8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280DEC: nop

    // 0x80280DF0: lwc1        $f6, 0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80280DF4: nop

    // 0x80280DF8: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80280DFC: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x80280E00: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80280E04: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80280E08: nop

    // 0x80280E0C: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x80280E10: nop

    // 0x80280E14: bc1f        L_80280E2C
    if (!c1cs) {
        // 0x80280E18: nop
    
            goto L_80280E2C;
    }
    // 0x80280E18: nop

    // 0x80280E1C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80280E20: nop

    // 0x80280E24: neg.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = -ctx->f4.fl;
    // 0x80280E28: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
L_80280E2C:
    // 0x80280E2C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80280E30: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80280E34: nop

    // 0x80280E38: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80280E3C: nop

    // 0x80280E40: bc1f        L_80280E88
    if (!c1cs) {
        // 0x80280E44: nop
    
            goto L_80280E88;
    }
    // 0x80280E44: nop

    // 0x80280E48: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80280E4C: nop

    // 0x80280E50: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x80280E54: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80280E58: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80280E5C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80280E60: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80280E64: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80280E68: nop

    // 0x80280E6C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x80280E70: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80280E74: nop

    // 0x80280E78: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x80280E7C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80280E80: nop

    // 0x80280E84: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_80280E88:
    // 0x80280E88: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80280E8C: nop

    // 0x80280E90: addiu       $t7, $t6, 0x150
    ctx->r15 = ADD32(ctx->r14, 0X150);
    // 0x80280E94: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x80280E98: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80280E9C: nop

    // 0x80280EA0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80280EA4: slti        $at, $t9, 0x40
    ctx->r1 = SIGNED(ctx->r25) < 0X40 ? 1 : 0;
    // 0x80280EA8: bne         $at, $zero, L_80280CB0
    if (ctx->r1 != 0) {
        // 0x80280EAC: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_80280CB0;
    }
    // 0x80280EAC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80280EB0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80280EB4: nop

    // 0x80280EB8: beq         $t0, $zero, L_80280EEC
    if (ctx->r8 == 0) {
        // 0x80280EBC: nop
    
            goto L_80280EEC;
    }
    // 0x80280EBC: nop

    // 0x80280EC0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80280EC4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80280EC8: nop

    // 0x80280ECC: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80280ED0: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80280ED4: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80280ED8: jal         0x80015634
    // 0x80280EDC: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_2;
    // 0x80280EDC: nop

    after_2:
    // 0x80280EE0: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80280EE4: b           L_80280F00
    // 0x80280EE8: swc1        $f0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f0.u32l;
        goto L_80280F00;
    // 0x80280EE8: swc1        $f0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f0.u32l;
L_80280EEC:
    // 0x80280EEC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80280EF0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280EF4: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80280EF8: nop

    // 0x80280EFC: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
L_80280F00:
    // 0x80280F00: b           L_80280F08
    // 0x80280F04: nop

        goto L_80280F08;
    // 0x80280F04: nop

L_80280F08:
    // 0x80280F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280F0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80280F10: jr          $ra
    // 0x80280F14: nop

    return;
    // 0x80280F14: nop

;}
RECOMP_FUNC void func_8028130C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028130C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281314: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281318: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028131C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281320: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80281324: lwc1        $f8, -0x1C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80281328: nop

    // 0x8028132C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80281330: jal         0x800366E0
    // 0x80281334: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x80281334: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_0:
    // 0x80281338: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8028133C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80281340: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281344: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281348: nop

    // 0x8028134C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80281350: nop

    // 0x80281354: bc1f        L_80281368
    if (!c1cs) {
        // 0x80281358: nop
    
            goto L_80281368;
    }
    // 0x80281358: nop

    // 0x8028135C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281360: b           L_802813D4
    // 0x80281364: sh          $zero, -0x1D68($at)
    MEM_H(-0X1D68, ctx->r1) = 0;
        goto L_802813D4;
    // 0x80281364: sh          $zero, -0x1D68($at)
    MEM_H(-0X1D68, ctx->r1) = 0;
L_80281368:
    // 0x80281368: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x8028136C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281370: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281374: nop

    // 0x80281378: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8028137C: nop

    // 0x80281380: bc1f        L_80281398
    if (!c1cs) {
        // 0x80281384: nop
    
            goto L_80281398;
    }
    // 0x80281384: nop

    // 0x80281388: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028138C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281390: b           L_802813D4
    // 0x80281394: sh          $t6, -0x1D68($at)
    MEM_H(-0X1D68, ctx->r1) = ctx->r14;
        goto L_802813D4;
    // 0x80281394: sh          $t6, -0x1D68($at)
    MEM_H(-0X1D68, ctx->r1) = ctx->r14;
L_80281398:
    // 0x80281398: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8028139C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802813A0: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802813A4: nop

    // 0x802813A8: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x802813AC: nop

    // 0x802813B0: bc1f        L_802813C8
    if (!c1cs) {
        // 0x802813B4: nop
    
            goto L_802813C8;
    }
    // 0x802813B4: nop

    // 0x802813B8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802813BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802813C0: b           L_802813D4
    // 0x802813C4: sh          $t7, -0x1D68($at)
    MEM_H(-0X1D68, ctx->r1) = ctx->r15;
        goto L_802813D4;
    // 0x802813C4: sh          $t7, -0x1D68($at)
    MEM_H(-0X1D68, ctx->r1) = ctx->r15;
L_802813C8:
    // 0x802813C8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802813CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802813D0: sh          $t8, -0x1D68($at)
    MEM_H(-0X1D68, ctx->r1) = ctx->r24;
L_802813D4:
    // 0x802813D4: b           L_802813DC
    // 0x802813D8: nop

        goto L_802813DC;
    // 0x802813D8: nop

L_802813DC:
    // 0x802813DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802813E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802813E4: jr          $ra
    // 0x802813E8: nop

    return;
    // 0x802813E8: nop

;}
RECOMP_FUNC void func_80289434_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028943C: jal         0x80281BA4
    // 0x80289440: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289440: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80289444: b           L_8028944C
    // 0x80289448: nop

        goto L_8028944C;
    // 0x80289448: nop

L_8028944C:
    // 0x8028944C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80289454: jr          $ra
    // 0x80289458: nop

    return;
    // 0x80289458: nop

;}
RECOMP_FUNC void func_80286748_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286748: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028674C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80286750: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286754: lh          $t6, -0x1D58($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D58);
    // 0x80286758: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8028675C: beq         $t6, $at, L_802867DC
    if (ctx->r14 == ctx->r1) {
        // 0x80286760: nop
    
            goto L_802867DC;
    }
    // 0x80286760: nop

    // 0x80286764: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80286768: lh          $t7, -0x1D58($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D58);
    // 0x8028676C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80286770: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80286774: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80286778: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8028677C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80286780: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80286784: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80286788: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8028678C: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80286790: nop

    // 0x80286794: beq         $t1, $zero, L_802867B4
    if (ctx->r9 == 0) {
        // 0x80286798: nop
    
            goto L_802867B4;
    }
    // 0x80286798: nop

    // 0x8028679C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802867A0: lh          $t3, -0x1D48($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1D48);
    // 0x802867A4: lh          $t2, 0xE4($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XE4);
    // 0x802867A8: nop

    // 0x802867AC: beq         $t2, $t3, L_802867DC
    if (ctx->r10 == ctx->r11) {
        // 0x802867B0: nop
    
            goto L_802867DC;
    }
    // 0x802867B0: nop

L_802867B4:
    // 0x802867B4: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x802867B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802867BC: sh          $t4, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r12;
    // 0x802867C0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x802867C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802867C8: sh          $t5, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r13;
    // 0x802867CC: jal         0x80282AC4
    // 0x802867D0: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802867D0: nop

    after_0:
    // 0x802867D4: b           L_802867EC
    // 0x802867D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802867EC;
    // 0x802867D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802867DC:
    // 0x802867DC: b           L_802867EC
    // 0x802867E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802867EC;
    // 0x802867E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802867E4: b           L_802867EC
    // 0x802867E8: nop

        goto L_802867EC;
    // 0x802867E8: nop

L_802867EC:
    // 0x802867EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802867F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802867F4: jr          $ra
    // 0x802867F8: nop

    return;
    // 0x802867F8: nop

;}
RECOMP_FUNC void func_80289B54_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289B54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80289B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289B5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289B60: jal         0x8001B62C
    // 0x80289B64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80289B64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80289B68: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80289B6C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289B70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80289B74: nop

    // 0x80289B78: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80289B7C: nop

    // 0x80289B80: bc1f        L_80289BB8
    if (!c1cs) {
        // 0x80289B84: nop
    
            goto L_80289BB8;
    }
    // 0x80289B84: nop

    // 0x80289B88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289B8C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289B90: nop

    // 0x80289B94: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80289B98: nop

    // 0x80289B9C: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x80289BA0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80289BA4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80289BA8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80289BAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80289BB0: b           L_80289BEC
    // 0x80289BB4: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
        goto L_80289BEC;
    // 0x80289BB4: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
L_80289BB8:
    // 0x80289BB8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80289BBC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80289BC0: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289BC4: nop

    // 0x80289BC8: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80289BCC: nop

    // 0x80289BD0: bc1f        L_80289BEC
    if (!c1cs) {
        // 0x80289BD4: nop
    
            goto L_80289BEC;
    }
    // 0x80289BD4: nop

    // 0x80289BD8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80289BDC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80289BE0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80289BE4: nop

    // 0x80289BE8: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
L_80289BEC:
    // 0x80289BEC: b           L_80289BF4
    // 0x80289BF0: nop

        goto L_80289BF4;
    // 0x80289BF0: nop

L_80289BF4:
    // 0x80289BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80289BFC: jr          $ra
    // 0x80289C00: nop

    return;
    // 0x80289C00: nop

;}
RECOMP_FUNC void func_80289F4C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289F4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80289F50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80289F54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289F58: jal         0x8001B880
    // 0x80289F5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80289F5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80289F60: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80289F64: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80289F68: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x80289F6C: bne         $t6, $at, L_8028A038
    if (ctx->r14 != ctx->r1) {
        // 0x80289F70: nop
    
            goto L_8028A038;
    }
    // 0x80289F70: nop

    // 0x80289F74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289F78: jal         0x8001B62C
    // 0x80289F7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80289F7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80289F80: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80289F84: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80289F88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80289F8C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80289F90: nop

    // 0x80289F94: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80289F98: nop

    // 0x80289F9C: bc1f        L_80289FC0
    if (!c1cs) {
        // 0x80289FA0: nop
    
            goto L_80289FC0;
    }
    // 0x80289FA0: nop

    // 0x80289FA4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80289FA8: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x80289FAC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80289FB0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80289FB4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80289FB8: b           L_8028A038
    // 0x80289FBC: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
        goto L_8028A038;
    // 0x80289FBC: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
L_80289FC0:
    // 0x80289FC0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80289FC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80289FC8: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80289FCC: nop

    // 0x80289FD0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80289FD4: nop

    // 0x80289FD8: bc1f        L_8028A038
    if (!c1cs) {
        // 0x80289FDC: nop
    
            goto L_8028A038;
    }
    // 0x80289FDC: nop

    // 0x80289FE0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80289FE4: addiu       $t9, $t9, 0x5808
    ctx->r25 = ADD32(ctx->r25, 0X5808);
    // 0x80289FE8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80289FEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80289FF4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80289FF8: jal         0x8001C0EC
    // 0x80289FFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80289FFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8028A000: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028A004: jal         0x8001B754
    // 0x8028A008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x8028A008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8028A00C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028A010: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028A014: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028A018: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028A01C: nop

    // 0x8028A020: swc1        $f16, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f16.u32l;
    // 0x8028A024: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8028A028: lw          $t1, 0x51A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51A4);
    // 0x8028A02C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028A030: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x8028A034: sw          $t2, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r10;
L_8028A038:
    // 0x8028A038: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028A03C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028A040: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028A044: nop

    // 0x8028A048: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
    // 0x8028A04C: b           L_8028A054
    // 0x8028A050: nop

        goto L_8028A054;
    // 0x8028A050: nop

L_8028A054:
    // 0x8028A054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028A058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8028A05C: jr          $ra
    // 0x8028A060: nop

    return;
    // 0x8028A060: nop

;}
RECOMP_FUNC void func_80285EB4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285EB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80285EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285EBC: jal         0x8028150C
    // 0x80285EC0: nop

    func_8028150C_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80285EC0: nop

    after_0:
    // 0x80285EC4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80285EC8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80285ECC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80285ED0: bne         $t6, $at, L_80285EF0
    if (ctx->r14 != ctx->r1) {
        // 0x80285ED4: nop
    
            goto L_80285EF0;
    }
    // 0x80285ED4: nop

    // 0x80285ED8: jal         0x802836EC
    // 0x80285EDC: nop

    func_802836EC_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80285EDC: nop

    after_1:
    // 0x80285EE0: b           L_80285F20
    // 0x80285EE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80285F20;
    // 0x80285EE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80285EE8: b           L_80285F10
    // 0x80285EEC: nop

        goto L_80285F10;
    // 0x80285EEC: nop

L_80285EF0:
    // 0x80285EF0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80285EF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80285EF8: bne         $t7, $at, L_80285F10
    if (ctx->r15 != ctx->r1) {
        // 0x80285EFC: nop
    
            goto L_80285F10;
    }
    // 0x80285EFC: nop

    // 0x80285F00: jal         0x80283808
    // 0x80285F04: nop

    func_80283808_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80285F04: nop

    after_2:
    // 0x80285F08: b           L_80285F20
    // 0x80285F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80285F20;
    // 0x80285F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80285F10:
    // 0x80285F10: b           L_80285F20
    // 0x80285F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80285F20;
    // 0x80285F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80285F18: b           L_80285F20
    // 0x80285F1C: nop

        goto L_80285F20;
    // 0x80285F1C: nop

L_80285F20:
    // 0x80285F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285F24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80285F28: jr          $ra
    // 0x80285F2C: nop

    return;
    // 0x80285F2C: nop

;}
RECOMP_FUNC void func_80284C70_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284C70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80284C74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284C78: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80284C7C: lb          $t6, 0x5244($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X5244);
    // 0x80284C80: nop

    // 0x80284C84: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80284C88: beq         $at, $zero, L_80284CA8
    if (ctx->r1 == 0) {
        // 0x80284C8C: nop
    
            goto L_80284CA8;
    }
    // 0x80284C8C: nop

    // 0x80284C90: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x80284C94: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80284C98: jal         0x80280000
    // 0x80284C9C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80284C9C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x80284CA0: b           L_80284CB8
    // 0x80284CA4: nop

        goto L_80284CB8;
    // 0x80284CA4: nop

L_80284CA8:
    // 0x80284CA8: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x80284CAC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80284CB0: jal         0x80280000
    // 0x80284CB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80284CB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
L_80284CB8:
    // 0x80284CB8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80284CBC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80284CC0: addiu       $t9, $zero, 0x34
    ctx->r25 = ADD32(0, 0X34);
    // 0x80284CC4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80284CC8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80284CCC: addiu       $t1, $t1, 0x5808
    ctx->r9 = ADD32(ctx->r9, 0X5808);
    // 0x80284CD0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80284CD4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80284CD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284CE0: jal         0x8001C0EC
    // 0x80284CE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80284CE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80284CE8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80284CEC: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x80284CF0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80284CF4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x80284CF8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80284CFC: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
    // 0x80284D00: b           L_80284D08
    // 0x80284D04: nop

        goto L_80284D08;
    // 0x80284D04: nop

L_80284D08:
    // 0x80284D08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284D0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80284D10: jr          $ra
    // 0x80284D14: nop

    return;
    // 0x80284D14: nop

;}
RECOMP_FUNC void func_80288738_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028873C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80288740: jal         0x802858D8
    // 0x80288744: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80288744: nop

    after_0:
    // 0x80288748: beq         $v0, $zero, L_80288758
    if (ctx->r2 == 0) {
        // 0x8028874C: nop
    
            goto L_80288758;
    }
    // 0x8028874C: nop

    // 0x80288750: b           L_802887B4
    // 0x80288754: nop

        goto L_802887B4;
    // 0x80288754: nop

L_80288758:
    // 0x80288758: jal         0x80085D54
    // 0x8028875C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x8028875C: nop

    after_1:
    // 0x80288760: beq         $v0, $zero, L_80288770
    if (ctx->r2 == 0) {
        // 0x80288764: nop
    
            goto L_80288770;
    }
    // 0x80288764: nop

    // 0x80288768: b           L_802887B4
    // 0x8028876C: nop

        goto L_802887B4;
    // 0x8028876C: nop

L_80288770:
    // 0x80288770: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80288774: jal         0x8001B44C
    // 0x80288778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80288778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8028877C: beq         $v0, $zero, L_802887AC
    if (ctx->r2 == 0) {
        // 0x80288780: nop
    
            goto L_802887AC;
    }
    // 0x80288780: nop

    // 0x80288784: jal         0x8028236C
    // 0x80288788: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80288788: nop

    after_3:
    // 0x8028878C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288790: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80288794: nop

    // 0x80288798: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8028879C: nop

    // 0x802887A0: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x802887A4: b           L_802887B4
    // 0x802887A8: nop

        goto L_802887B4;
    // 0x802887A8: nop

L_802887AC:
    // 0x802887AC: b           L_802887B4
    // 0x802887B0: nop

        goto L_802887B4;
    // 0x802887B0: nop

L_802887B4:
    // 0x802887B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802887B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802887BC: jr          $ra
    // 0x802887C0: nop

    return;
    // 0x802887C0: nop

;}
RECOMP_FUNC void func_802811A8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802811A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802811AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802811B0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802811B4: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x802811B8: lw          $t8, 0x51AC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51AC);
    // 0x802811BC: lw          $t6, 0x51B4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51B4);
    // 0x802811C0: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x802811C4: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x802811C8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802811CC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x802811D0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802811D4: jal         0x80014F50
    // 0x802811D8: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_Atan2f(rdram, ctx);
        goto after_0;
    // 0x802811D8: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_0:
    // 0x802811DC: b           L_802811EC
    // 0x802811E0: nop

        goto L_802811EC;
    // 0x802811E0: nop

    // 0x802811E4: b           L_802811EC
    // 0x802811E8: nop

        goto L_802811EC;
    // 0x802811E8: nop

L_802811EC:
    // 0x802811EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802811F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802811F4: jr          $ra
    // 0x802811F8: nop

    return;
    // 0x802811F8: nop

;}
RECOMP_FUNC void func_80288030_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80288034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80288038: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028803C: lbu         $t6, -0x1F70($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F70);
    // 0x80288040: nop

    // 0x80288044: slti        $at, $t6, 0x5A
    ctx->r1 = SIGNED(ctx->r14) < 0X5A ? 1 : 0;
    // 0x80288048: bne         $at, $zero, L_80288064
    if (ctx->r1 != 0) {
        // 0x8028804C: nop
    
            goto L_80288064;
    }
    // 0x8028804C: nop

    // 0x80288050: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80288054: jal         0x80069A54
    // 0x80288058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_0;
    // 0x80288058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8028805C: b           L_80288078
    // 0x80288060: nop

        goto L_80288078;
    // 0x80288060: nop

L_80288064:
    // 0x80288064: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80288068: lbu         $t7, -0x1F70($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1F70);
    // 0x8028806C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288070: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80288074: sb          $t8, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = ctx->r24;
L_80288078:
    // 0x80288078: b           L_80288080
    // 0x8028807C: nop

        goto L_80288080;
    // 0x8028807C: nop

L_80288080:
    // 0x80288080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80288084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80288088: jr          $ra
    // 0x8028808C: nop

    return;
    // 0x8028808C: nop

;}
RECOMP_FUNC void func_80284140_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284140: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284144: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284148: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028414C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284150: addiu       $t6, $zero, 0x25
    ctx->r14 = ADD32(0, 0X25);
    // 0x80284154: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80284158: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8028415C: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80284160: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80284164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028416C: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x80284170: jal         0x8001C0EC
    // 0x80284174: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80284174: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80284178: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028417C: jal         0x8001B754
    // 0x80284180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80284180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80284184: jal         0x80280000
    // 0x80284188: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80284188: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x8028418C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284190: jal         0x8001BB04
    // 0x80284194: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_3;
    // 0x80284194: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80284198: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028419C: sb          $zero, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = 0;
    // 0x802841A0: b           L_802841A8
    // 0x802841A4: nop

        goto L_802841A8;
    // 0x802841A4: nop

L_802841A8:
    // 0x802841A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802841AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802841B0: jr          $ra
    // 0x802841B4: nop

    return;
    // 0x802841B4: nop

;}
RECOMP_FUNC void func_80281BA4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281BA4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80281BA8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80281BAC: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80281BB0: nop

    // 0x80281BB4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80281BB8: beq         $t7, $zero, L_80281BD4
    if (ctx->r15 == 0) {
        // 0x80281BBC: nop
    
            goto L_80281BD4;
    }
    // 0x80281BBC: nop

    // 0x80281BC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80281BC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281BC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281BCC: b           L_80281C20
    // 0x80281BD0: swc1        $f4, -0x1D88($at)
    MEM_W(-0X1D88, ctx->r1) = ctx->f4.u32l;
        goto L_80281C20;
    // 0x80281BD0: swc1        $f4, -0x1D88($at)
    MEM_W(-0X1D88, ctx->r1) = ctx->f4.u32l;
L_80281BD4:
    // 0x80281BD4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281BD8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281BDC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80281BE0: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80281BE4: nop

    // 0x80281BE8: beq         $t9, $at, L_80281BFC
    if (ctx->r25 == ctx->r1) {
        // 0x80281BEC: nop
    
            goto L_80281BFC;
    }
    // 0x80281BEC: nop

    // 0x80281BF0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80281BF4: bne         $t9, $at, L_80281C10
    if (ctx->r25 != ctx->r1) {
        // 0x80281BF8: nop
    
            goto L_80281C10;
    }
    // 0x80281BF8: nop

L_80281BFC:
    // 0x80281BFC: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80281C00: lwc1        $f6, -0x497C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X497C);
    // 0x80281C04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C08: b           L_80281C20
    // 0x80281C0C: swc1        $f6, -0x1D88($at)
    MEM_W(-0X1D88, ctx->r1) = ctx->f6.u32l;
        goto L_80281C20;
    // 0x80281C0C: swc1        $f6, -0x1D88($at)
    MEM_W(-0X1D88, ctx->r1) = ctx->f6.u32l;
L_80281C10:
    // 0x80281C10: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80281C14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281C18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C1C: swc1        $f8, -0x1D88($at)
    MEM_W(-0X1D88, ctx->r1) = ctx->f8.u32l;
L_80281C20:
    // 0x80281C20: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80281C24: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80281C28: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80281C2C: lwc1        $f10, -0x4E5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4E5C);
    // 0x80281C30: nop

    // 0x80281C34: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
    // 0x80281C38: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281C3C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281C40: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80281C44: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80281C48: nop

    // 0x80281C4C: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80281C50: nop

    // 0x80281C54: bc1f        L_80281CC4
    if (!c1cs) {
        // 0x80281C58: nop
    
            goto L_80281CC4;
    }
    // 0x80281C58: nop

    // 0x80281C5C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281C60: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281C64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C68: lwc1        $f6, -0x1D88($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1D88);
    // 0x80281C6C: lwc1        $f4, 0x44($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80281C70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C74: lwc1        $f10, -0x1D90($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1D90);
    // 0x80281C78: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80281C7C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80281C80: swc1        $f16, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f16.u32l;
    // 0x80281C84: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281C88: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281C8C: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80281C90: lwc1        $f18, 0x44($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80281C94: nop

    // 0x80281C98: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80281C9C: nop

    // 0x80281CA0: bc1f        L_80281CBC
    if (!c1cs) {
        // 0x80281CA4: nop
    
            goto L_80281CBC;
    }
    // 0x80281CA4: nop

    // 0x80281CA8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281CAC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281CB0: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80281CB4: nop

    // 0x80281CB8: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
L_80281CBC:
    // 0x80281CBC: b           L_80281D48
    // 0x80281CC0: nop

        goto L_80281D48;
    // 0x80281CC0: nop

L_80281CC4:
    // 0x80281CC4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281CC8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281CCC: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80281CD0: lwc1        $f8, 0x44($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80281CD4: nop

    // 0x80281CD8: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80281CDC: nop

    // 0x80281CE0: bc1f        L_80281D48
    if (!c1cs) {
        // 0x80281CE4: nop
    
            goto L_80281D48;
    }
    // 0x80281CE4: nop

    // 0x80281CE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281CEC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281CF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281CF4: lwc1        $f18, -0x1D88($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1D88);
    // 0x80281CF8: lwc1        $f16, 0x44($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80281CFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281D00: lwc1        $f6, -0x1D90($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1D90);
    // 0x80281D04: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80281D08: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80281D0C: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x80281D10: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281D14: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281D18: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80281D1C: lwc1        $f10, 0x44($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80281D20: nop

    // 0x80281D24: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80281D28: nop

    // 0x80281D2C: bc1f        L_80281D48
    if (!c1cs) {
        // 0x80281D30: nop
    
            goto L_80281D48;
    }
    // 0x80281D30: nop

    // 0x80281D34: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281D38: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281D3C: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80281D40: nop

    // 0x80281D44: swc1        $f18, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f18.u32l;
L_80281D48:
    // 0x80281D48: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281D4C: lh          $t9, -0x1F00($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1F00);
    // 0x80281D50: nop

    // 0x80281D54: bne         $t9, $zero, L_80281D78
    if (ctx->r25 != 0) {
        // 0x80281D58: nop
    
            goto L_80281D78;
    }
    // 0x80281D58: nop

    // 0x80281D5C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281D60: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281D64: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x80281D68: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80281D6C: nop

    // 0x80281D70: bne         $t1, $at, L_80281DC0
    if (ctx->r9 != ctx->r1) {
        // 0x80281D74: nop
    
            goto L_80281DC0;
    }
    // 0x80281D74: nop

L_80281D78:
    // 0x80281D78: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281D7C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281D80: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80281D84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281D88: lwc1        $f4, 0x44($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80281D8C: nop

    // 0x80281D90: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80281D94: nop

    // 0x80281D98: bc1f        L_80281DB8
    if (!c1cs) {
        // 0x80281D9C: nop
    
            goto L_80281DB8;
    }
    // 0x80281D9C: nop

    // 0x80281DA0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80281DA4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281DA8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281DAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281DB0: nop

    // 0x80281DB4: swc1        $f8, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f8.u32l;
L_80281DB8:
    // 0x80281DB8: b           L_80281E00
    // 0x80281DBC: nop

        goto L_80281E00;
    // 0x80281DBC: nop

L_80281DC0:
    // 0x80281DC0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281DC4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281DC8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80281DCC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281DD0: lwc1        $f10, 0x44($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X44);
    // 0x80281DD4: nop

    // 0x80281DD8: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80281DDC: nop

    // 0x80281DE0: bc1f        L_80281E00
    if (!c1cs) {
        // 0x80281DE4: nop
    
            goto L_80281E00;
    }
    // 0x80281DE4: nop

    // 0x80281DE8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80281DEC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281DF0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281DF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281DF8: nop

    // 0x80281DFC: swc1        $f18, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f18.u32l;
L_80281E00:
    // 0x80281E00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281E04: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281E08: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80281E0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281E10: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80281E14: nop

    // 0x80281E18: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80281E1C: nop

    // 0x80281E20: bc1f        L_80281E40
    if (!c1cs) {
        // 0x80281E24: nop
    
            goto L_80281E40;
    }
    // 0x80281E24: nop

    // 0x80281E28: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80281E2C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281E30: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281E34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281E38: nop

    // 0x80281E3C: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
L_80281E40:
    // 0x80281E40: b           L_80281E48
    // 0x80281E44: nop

        goto L_80281E48;
    // 0x80281E44: nop

L_80281E48:
    // 0x80281E48: jr          $ra
    // 0x80281E4C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80281E4C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80289CE8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289CE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289CEC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289CF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80289CF4: nop

    // 0x80289CF8: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80289CFC: jr          $ra
    // 0x80289D00: nop

    return;
    // 0x80289D00: nop

    // 0x80289D04: jr          $ra
    // 0x80289D08: nop

    return;
    // 0x80289D08: nop

;}
RECOMP_FUNC void func_8028236C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028236C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80282370: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80282374: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80282378: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8028237C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80282380: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282384: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282388: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028238C: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80282390: nop

    // 0x80282394: bne         $t7, $at, L_802823B4
    if (ctx->r15 != ctx->r1) {
        // 0x80282398: nop
    
            goto L_802823B4;
    }
    // 0x80282398: nop

    // 0x8028239C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802823A0: lw          $t8, -0x1EE8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1EE8);
    // 0x802823A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802823A8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802823AC: b           L_802823BC
    // 0x802823B0: sw          $t9, -0x1EE8($at)
    MEM_W(-0X1EE8, ctx->r1) = ctx->r25;
        goto L_802823BC;
    // 0x802823B0: sw          $t9, -0x1EE8($at)
    MEM_W(-0X1EE8, ctx->r1) = ctx->r25;
L_802823B4:
    // 0x802823B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802823B8: sw          $zero, -0x1EE8($at)
    MEM_W(-0X1EE8, ctx->r1) = 0;
L_802823BC:
    // 0x802823BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802823C0: lh          $t0, -0x1D68($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1D68);
    // 0x802823C4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802823C8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802823CC: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x802823D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802823D4: lb          $t1, -0x4E4C($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X4E4C);
    // 0x802823D8: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x802823DC: nop

    // 0x802823E0: beq         $t1, $t3, L_8028240C
    if (ctx->r9 == ctx->r11) {
        // 0x802823E4: nop
    
            goto L_8028240C;
    }
    // 0x802823E4: nop

    // 0x802823E8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802823EC: lh          $t4, -0x1D68($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1D68);
    // 0x802823F0: lui         $t5, 0x8029
    ctx->r13 = S32(0X8029 << 16);
    // 0x802823F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802823F8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802823FC: lb          $t5, -0x4E4C($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X4E4C);
    // 0x80282400: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282404: nop

    // 0x80282408: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_8028240C:
    // 0x8028240C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282410: lh          $t7, -0x1D68($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D68);
    // 0x80282414: nop

    // 0x80282418: beq         $t7, $zero, L_8028243C
    if (ctx->r15 == 0) {
        // 0x8028241C: nop
    
            goto L_8028243C;
    }
    // 0x8028241C: nop

    // 0x80282420: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282424: lh          $t8, -0x1D68($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1D68);
    // 0x80282428: lui         $t9, 0x8029
    ctx->r25 = S32(0X8029 << 16);
    // 0x8028242C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80282430: lb          $t9, -0x4E48($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X4E48);
    // 0x80282434: b           L_802824D8
    // 0x80282438: sh          $t9, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r25;
        goto L_802824D8;
    // 0x80282438: sh          $t9, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r25;
L_8028243C:
    // 0x8028243C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282440: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80282444: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80282448: lwc1        $f4, 0x44($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X44);
    // 0x8028244C: nop

    // 0x80282450: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80282454: nop

    // 0x80282458: bc1f        L_80282468
    if (!c1cs) {
        // 0x8028245C: nop
    
            goto L_80282468;
    }
    // 0x8028245C: nop

    // 0x80282460: b           L_802824D8
    // 0x80282464: sh          $zero, 0x46($sp)
    MEM_H(0X46, ctx->r29) = 0;
        goto L_802824D8;
    // 0x80282464: sh          $zero, 0x46($sp)
    MEM_H(0X46, ctx->r29) = 0;
L_80282468:
    // 0x80282468: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028246C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80282470: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80282474: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80282478: lwc1        $f8, 0x44($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8028247C: nop

    // 0x80282480: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80282484: nop

    // 0x80282488: bc1f        L_8028249C
    if (!c1cs) {
        // 0x8028248C: nop
    
            goto L_8028249C;
    }
    // 0x8028248C: nop

    // 0x80282490: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80282494: b           L_802824D8
    // 0x80282498: sh          $t1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r9;
        goto L_802824D8;
    // 0x80282498: sh          $t1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r9;
L_8028249C:
    // 0x8028249C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802824A0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802824A4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802824A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802824AC: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x802824B0: nop

    // 0x802824B4: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x802824B8: nop

    // 0x802824BC: bc1f        L_802824D0
    if (!c1cs) {
        // 0x802824C0: nop
    
            goto L_802824D0;
    }
    // 0x802824C0: nop

    // 0x802824C4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x802824C8: b           L_802824D8
    // 0x802824CC: sh          $t4, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r12;
        goto L_802824D8;
    // 0x802824CC: sh          $t4, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r12;
L_802824D0:
    // 0x802824D0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x802824D4: sh          $t5, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r13;
L_802824D8:
    // 0x802824D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802824DC: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x802824E0: nop

    // 0x802824E4: beq         $t6, $zero, L_80282568
    if (ctx->r14 == 0) {
        // 0x802824E8: nop
    
            goto L_80282568;
    }
    // 0x802824E8: nop

    // 0x802824EC: lh          $s0, 0x46($sp)
    ctx->r16 = MEM_H(ctx->r29, 0X46);
    // 0x802824F0: nop

    // 0x802824F4: beq         $s0, $zero, L_80282528
    if (ctx->r16 == 0) {
        // 0x802824F8: nop
    
            goto L_80282528;
    }
    // 0x802824F8: nop

    // 0x802824FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80282500: beq         $s0, $at, L_80282538
    if (ctx->r16 == ctx->r1) {
        // 0x80282504: nop
    
            goto L_80282538;
    }
    // 0x80282504: nop

    // 0x80282508: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028250C: beq         $s0, $at, L_80282548
    if (ctx->r16 == ctx->r1) {
        // 0x80282510: nop
    
            goto L_80282548;
    }
    // 0x80282510: nop

    // 0x80282514: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80282518: beq         $s0, $at, L_80282558
    if (ctx->r16 == ctx->r1) {
        // 0x8028251C: nop
    
            goto L_80282558;
    }
    // 0x8028251C: nop

    // 0x80282520: b           L_80282568
    // 0x80282524: nop

        goto L_80282568;
    // 0x80282524: nop

L_80282528:
    // 0x80282528: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x8028252C: sh          $t7, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r15;
    // 0x80282530: b           L_80282568
    // 0x80282534: nop

        goto L_80282568;
    // 0x80282534: nop

L_80282538:
    // 0x80282538: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x8028253C: sh          $t8, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r24;
    // 0x80282540: b           L_80282568
    // 0x80282544: nop

        goto L_80282568;
    // 0x80282544: nop

L_80282548:
    // 0x80282548: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x8028254C: sh          $t9, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r25;
    // 0x80282550: b           L_80282568
    // 0x80282554: nop

        goto L_80282568;
    // 0x80282554: nop

L_80282558:
    // 0x80282558: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x8028255C: sh          $t0, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r8;
    // 0x80282560: b           L_80282568
    // 0x80282564: nop

        goto L_80282568;
    // 0x80282564: nop

L_80282568:
    // 0x80282568: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028256C: jal         0x8001B880
    // 0x80282570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80282570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282574: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80282578: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028257C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80282580: nop

    // 0x80282584: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80282588: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8028258C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80282590: beq         $t2, $at, L_802825D4
    if (ctx->r10 == ctx->r1) {
        // 0x80282594: nop
    
            goto L_802825D4;
    }
    // 0x80282594: nop

    // 0x80282598: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028259C: beq         $t2, $at, L_802825D4
    if (ctx->r10 == ctx->r1) {
        // 0x802825A0: nop
    
            goto L_802825D4;
    }
    // 0x802825A0: nop

    // 0x802825A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802825A8: beq         $t2, $at, L_802825D4
    if (ctx->r10 == ctx->r1) {
        // 0x802825AC: nop
    
            goto L_802825D4;
    }
    // 0x802825AC: nop

    // 0x802825B0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x802825B4: beq         $t2, $at, L_802825D4
    if (ctx->r10 == ctx->r1) {
        // 0x802825B8: nop
    
            goto L_802825D4;
    }
    // 0x802825B8: nop

    // 0x802825BC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802825C0: beq         $t2, $at, L_802825D4
    if (ctx->r10 == ctx->r1) {
        // 0x802825C4: nop
    
            goto L_802825D4;
    }
    // 0x802825C4: nop

    // 0x802825C8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x802825CC: bne         $t2, $at, L_80282610
    if (ctx->r10 != ctx->r1) {
        // 0x802825D0: nop
    
            goto L_80282610;
    }
    // 0x802825D0: nop

L_802825D4:
    // 0x802825D4: lh          $t1, 0x46($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X46);
    // 0x802825D8: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x802825DC: nop

    // 0x802825E0: beq         $t1, $t3, L_80282610
    if (ctx->r9 == ctx->r11) {
        // 0x802825E4: nop
    
            goto L_80282610;
    }
    // 0x802825E4: nop

    // 0x802825E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802825EC: jal         0x8001B62C
    // 0x802825F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x802825F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802825F4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802825F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802825FC: jal         0x8001B580
    // 0x80282600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_2;
    // 0x80282600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80282604: nop

    // 0x80282608: div.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8028260C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
L_80282610:
    // 0x80282610: lh          $t4, 0x46($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X46);
    // 0x80282614: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80282618: nop

    // 0x8028261C: beq         $t4, $t5, L_8028264C
    if (ctx->r12 == ctx->r13) {
        // 0x80282620: nop
    
            goto L_8028264C;
    }
    // 0x80282620: nop

    // 0x80282624: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80282628: addiu       $t6, $t6, 0x5808
    ctx->r14 = ADD32(ctx->r14, 0X5808);
    // 0x8028262C: lh          $a2, 0x46($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X46);
    // 0x80282630: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80282634: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282638: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028263C: jal         0x8001C0EC
    // 0x80282640: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80282640: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80282644: jal         0x80280000
    // 0x80282648: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80282648: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
L_8028264C:
    // 0x8028264C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80282650: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80282654: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80282658: nop

    // 0x8028265C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80282660: nop

    // 0x80282664: bc1t        L_802826DC
    if (c1cs) {
        // 0x80282668: nop
    
            goto L_802826DC;
    }
    // 0x80282668: nop

    // 0x8028266C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282670: jal         0x8001B580
    // 0x80282674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_5;
    // 0x80282674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80282678: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8028267C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80282680: mul.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80282684: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028268C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80282690: nop

    // 0x80282694: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80282698: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8028269C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802826A0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802826A4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802826A8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x802826AC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802826B0: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x802826B4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x802826B8: bgez        $t9, L_802826D0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802826BC: cvt.s.w     $f6, $f6
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
            goto L_802826D0;
    }
    // 0x802826BC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802826C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802826C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802826C8: nop

    // 0x802826CC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_802826D0:
    // 0x802826D0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802826D4: jal         0x8001B6BC
    // 0x802826D8: nop

    func_8001B6BC(rdram, ctx);
        goto after_6;
    // 0x802826D8: nop

    after_6:
L_802826DC:
    // 0x802826DC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802826E0: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x802826E4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802826E8: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x802826EC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802826F0: sw          $t2, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r10;
    // 0x802826F4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802826F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802826FC: swc1        $f10, -0x1DA0($at)
    MEM_W(-0X1DA0, ctx->r1) = ctx->f10.u32l;
    // 0x80282700: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80282704: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80282708: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8028270C: lh          $t3, 0xA4($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA4);
    // 0x80282710: nop

    // 0x80282714: bne         $t3, $at, L_80282768
    if (ctx->r11 != ctx->r1) {
        // 0x80282718: nop
    
            goto L_80282768;
    }
    // 0x80282718: nop

    // 0x8028271C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80282720: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80282724: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80282728: nop

    // 0x8028272C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80282730: nop

    // 0x80282734: bc1f        L_80282768
    if (!c1cs) {
        // 0x80282738: nop
    
            goto L_80282768;
    }
    // 0x80282738: nop

    // 0x8028273C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80282740: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80282744: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80282748: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028274C: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80282750: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x80282754: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80282758: lw          $a3, 0x8($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X8);
    // 0x8028275C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80282760: jal         0x80081468
    // 0x80282764: addiu       $a0, $zero, 0x2C4
    ctx->r4 = ADD32(0, 0X2C4);
    func_80081468(rdram, ctx);
        goto after_7;
    // 0x80282764: addiu       $a0, $zero, 0x2C4
    ctx->r4 = ADD32(0, 0X2C4);
    after_7:
L_80282768:
    // 0x80282768: b           L_80282770
    // 0x8028276C: nop

        goto L_80282770;
    // 0x8028276C: nop

L_80282770:
    // 0x80282770: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80282774: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80282778: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8028277C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80282780: jr          $ra
    // 0x80282784: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80282784: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80283DF8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283DF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283DFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283E00: jal         0x8001A928
    // 0x80283E04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80283E04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80283E08: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283E0C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80283E10: addiu       $t6, $zero, 0x21
    ctx->r14 = ADD32(0, 0X21);
    // 0x80283E14: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283E18: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283E1C: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80283E20: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283E24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283E28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283E2C: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    // 0x80283E30: jal         0x8001C0EC
    // 0x80283E34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80283E34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80283E38: jal         0x80280000
    // 0x80283E3C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80283E3C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x80283E40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283E44: sb          $zero, -0x1D28($at)
    MEM_B(-0X1D28, ctx->r1) = 0;
    // 0x80283E48: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80283E4C: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80283E50: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80283E54: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80283E58: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283E5C: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x80283E60: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283E64: addiu       $t1, $t1, -0x3560
    ctx->r9 = ADD32(ctx->r9, -0X3560);
    // 0x80283E68: lw          $a3, 0x18($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X18);
    // 0x80283E6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80283E70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283E74: jal         0x8001BD44
    // 0x80283E78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BD44(rdram, ctx);
        goto after_3;
    // 0x80283E78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80283E7C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80283E80: addiu       $t2, $t2, 0x62EC
    ctx->r10 = ADD32(ctx->r10, 0X62EC);
    // 0x80283E84: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80283E88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80283E8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283E90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80283E94: jal         0x8001C0EC
    // 0x80283E98: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80283E98: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_4:
    // 0x80283E9C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80283EA0: lw          $t4, 0x7544($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7544);
    // 0x80283EA4: addiu       $t3, $zero, 0x2A9
    ctx->r11 = ADD32(0, 0X2A9);
    // 0x80283EA8: sh          $t3, 0xE4($t4)
    MEM_H(0XE4, ctx->r12) = ctx->r11;
    // 0x80283EAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283EB0: lw          $t6, 0x7544($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7544);
    // 0x80283EB4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80283EB8: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80283EBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283EC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283EC4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80283EC8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283ECC: jal         0x800178D4
    // 0x80283ED0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80283ED0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80283ED4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80283ED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80283EDC: jal         0x8001FB3C
    // 0x80283EE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_6;
    // 0x80283EE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80283EE4: b           L_80283EEC
    // 0x80283EE8: nop

        goto L_80283EEC;
    // 0x80283EE8: nop

L_80283EEC:
    // 0x80283EEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283EF4: jr          $ra
    // 0x80283EF8: nop

    return;
    // 0x80283EF8: nop

;}
RECOMP_FUNC void func_802844D4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802844D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802844D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802844DC: jal         0x8001A928
    // 0x802844E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x802844E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802844E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802844E8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802844EC: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x802844F0: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x802844F4: nop

    // 0x802844F8: beq         $t7, $at, L_80284538
    if (ctx->r15 == ctx->r1) {
        // 0x802844FC: nop
    
            goto L_80284538;
    }
    // 0x802844FC: nop

    // 0x80284500: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80284504: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80284508: addiu       $t8, $zero, 0x2C
    ctx->r24 = ADD32(0, 0X2C);
    // 0x8028450C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80284510: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80284514: addiu       $t0, $t0, 0x5808
    ctx->r8 = ADD32(ctx->r8, 0X5808);
    // 0x80284518: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8028451C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284524: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x80284528: jal         0x8001C0EC
    // 0x8028452C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8028452C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80284530: jal         0x80280000
    // 0x80284534: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80284534: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
L_80284538:
    // 0x80284538: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028453C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80284540: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80284544: nop

    // 0x80284548: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x8028454C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80284550: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x80284554: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80284558: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x8028455C: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
    // 0x80284560: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80284564: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80284568: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028456C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80284570: nop

    // 0x80284574: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
    // 0x80284578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028457C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284580: addiu       $a2, $zero, 0x69
    ctx->r6 = ADD32(0, 0X69);
    // 0x80284584: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80284588: jal         0x800175F0
    // 0x8028458C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x8028458C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80284590: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80284594: lh          $t5, -0x1F00($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1F00);
    // 0x80284598: nop

    // 0x8028459C: beq         $t5, $zero, L_802845AC
    if (ctx->r13 == 0) {
        // 0x802845A0: nop
    
            goto L_802845AC;
    }
    // 0x802845A0: nop

    // 0x802845A4: jal         0x8007A6DC
    // 0x802845A8: nop

    func_8007A6DC(rdram, ctx);
        goto after_4;
    // 0x802845A8: nop

    after_4:
L_802845AC:
    // 0x802845AC: b           L_802845B4
    // 0x802845B0: nop

        goto L_802845B4;
    // 0x802845B0: nop

L_802845B4:
    // 0x802845B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802845B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802845BC: jr          $ra
    // 0x802845C0: nop

    return;
    // 0x802845C0: nop

;}
RECOMP_FUNC void func_802843CC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802843CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802843D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802843D4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802843D8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802843DC: addiu       $t6, $zero, 0x2A
    ctx->r14 = ADD32(0, 0X2A);
    // 0x802843E0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802843E4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802843E8: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x802843EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802843F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802843F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802843F8: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x802843FC: jal         0x8001C0EC
    // 0x80284400: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80284400: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80284404: jal         0x80280000
    // 0x80284408: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80284408: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8028440C: b           L_80284414
    // 0x80284410: nop

        goto L_80284414;
    // 0x80284410: nop

L_80284414:
    // 0x80284414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284418: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028441C: jr          $ra
    // 0x80284420: nop

    return;
    // 0x80284420: nop

;}
RECOMP_FUNC void func_8028A064_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A064: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A068: lbu         $t6, -0x1D38($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1D38);
    // 0x8028A06C: nop

    // 0x8028A070: bne         $t6, $zero, L_8028A098
    if (ctx->r14 != 0) {
        // 0x8028A074: nop
    
            goto L_8028A098;
    }
    // 0x8028A074: nop

    // 0x8028A078: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A07C: lh          $t7, -0x1D68($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D68);
    // 0x8028A080: nop

    // 0x8028A084: bne         $t7, $zero, L_8028A098
    if (ctx->r15 != 0) {
        // 0x8028A088: nop
    
            goto L_8028A098;
    }
    // 0x8028A088: nop

    // 0x8028A08C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8028A090: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028A094: sb          $t8, -0x1D38($at)
    MEM_B(-0X1D38, ctx->r1) = ctx->r24;
L_8028A098:
    // 0x8028A098: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028A09C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028A0A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028A0A4: nop

    // 0x8028A0A8: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
    // 0x8028A0AC: jr          $ra
    // 0x8028A0B0: nop

    return;
    // 0x8028A0B0: nop

    // 0x8028A0B4: jr          $ra
    // 0x8028A0B8: nop

    return;
    // 0x8028A0B8: nop

;}
RECOMP_FUNC void func_80284084_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284084: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284088: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028408C: jal         0x8001A928
    // 0x80284090: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80284090: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80284094: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284098: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028409C: addiu       $t6, $zero, 0x24
    ctx->r14 = ADD32(0, 0X24);
    // 0x802840A0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802840A4: jal         0x80280000
    // 0x802840A8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802840A8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x802840AC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802840B0: addiu       $t8, $t8, -0x3560
    ctx->r24 = ADD32(ctx->r24, -0X3560);
    // 0x802840B4: lw          $a3, 0x10($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X10);
    // 0x802840B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802840BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802840C0: jal         0x8001BD44
    // 0x802840C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001BD44(rdram, ctx);
        goto after_2;
    // 0x802840C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x802840C8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802840CC: addiu       $t9, $t9, 0x62E8
    ctx->r25 = ADD32(ctx->r25, 0X62E8);
    // 0x802840D0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802840D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802840D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802840DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802840E0: jal         0x8001C0EC
    // 0x802840E4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x802840E4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_3:
    // 0x802840E8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802840EC: lw          $t1, 0x7544($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7544);
    // 0x802840F0: addiu       $t0, $zero, 0x2A8
    ctx->r8 = ADD32(0, 0X2A8);
    // 0x802840F4: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
    // 0x802840F8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802840FC: lw          $t3, 0x7544($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7544);
    // 0x80284100: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80284104: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80284108: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8028410C: lw          $t4, 0x51A4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X51A4);
    // 0x80284110: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80284114: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80284118: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028411C: sw          $t5, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r13;
    // 0x80284120: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80284124: sb          $zero, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = 0;
    // 0x80284128: b           L_80284130
    // 0x8028412C: nop

        goto L_80284130;
    // 0x8028412C: nop

L_80284130:
    // 0x80284130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284138: jr          $ra
    // 0x8028413C: nop

    return;
    // 0x8028413C: nop

;}
RECOMP_FUNC void func_80287C68_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287C6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287C70: jal         0x80285D4C
    // 0x80287C74: nop

    func_80285D4C_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287C74: nop

    after_0:
    // 0x80287C78: beq         $v0, $zero, L_80287C88
    if (ctx->r2 == 0) {
        // 0x80287C7C: nop
    
            goto L_80287C88;
    }
    // 0x80287C7C: nop

    // 0x80287C80: b           L_80287CD0
    // 0x80287C84: nop

        goto L_80287CD0;
    // 0x80287C84: nop

L_80287C88:
    // 0x80287C88: jal         0x80085D54
    // 0x80287C8C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80287C8C: nop

    after_1:
    // 0x80287C90: beq         $v0, $zero, L_80287CA0
    if (ctx->r2 == 0) {
        // 0x80287C94: nop
    
            goto L_80287CA0;
    }
    // 0x80287C94: nop

    // 0x80287C98: b           L_80287CD0
    // 0x80287C9C: nop

        goto L_80287CD0;
    // 0x80287C9C: nop

L_80287CA0:
    // 0x80287CA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287CA4: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80287CA8: nop

    // 0x80287CAC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80287CB0: beq         $t7, $zero, L_80287CC8
    if (ctx->r15 == 0) {
        // 0x80287CB4: nop
    
            goto L_80287CC8;
    }
    // 0x80287CB4: nop

    // 0x80287CB8: jal         0x80283C28
    // 0x80287CBC: nop

    func_80283C28_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80287CBC: nop

    after_2:
    // 0x80287CC0: b           L_80287CD0
    // 0x80287CC4: nop

        goto L_80287CD0;
    // 0x80287CC4: nop

L_80287CC8:
    // 0x80287CC8: b           L_80287CD0
    // 0x80287CCC: nop

        goto L_80287CD0;
    // 0x80287CCC: nop

L_80287CD0:
    // 0x80287CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80287CD8: jr          $ra
    // 0x80287CDC: nop

    return;
    // 0x80287CDC: nop

;}
RECOMP_FUNC void func_8028491C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028491C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80284920: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80284924: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80284928: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8028492C: jal         0x8001A928
    // 0x80284930: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80284930: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80284934: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284938: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8028493C: nop

    // 0x80284940: beq         $t6, $zero, L_80284950
    if (ctx->r14 == 0) {
        // 0x80284944: nop
    
            goto L_80284950;
    }
    // 0x80284944: nop

    // 0x80284948: jal         0x8007A6DC
    // 0x8028494C: nop

    func_8007A6DC(rdram, ctx);
        goto after_1;
    // 0x8028494C: nop

    after_1:
L_80284950:
    // 0x80284950: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284954: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80284958: addiu       $t7, $zero, 0x31
    ctx->r15 = ADD32(0, 0X31);
    // 0x8028495C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80284960: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80284964: addiu       $t9, $t9, 0x5808
    ctx->r25 = ADD32(ctx->r25, 0X5808);
    // 0x80284968: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8028496C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284974: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x80284978: jal         0x8001C0EC
    // 0x8028497C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x8028497C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80284980: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284984: jal         0x8001B754
    // 0x80284988: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x80284988: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8028498C: jal         0x80280000
    // 0x80284990: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80284990: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80284994: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80284998: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028499C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802849A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802849A4: nop

    // 0x802849A8: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x802849AC: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x802849B0: lw          $t1, 0x51A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51A4);
    // 0x802849B4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802849B8: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x802849BC: sw          $t2, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r10;
    // 0x802849C0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802849C4: addiu       $t3, $t3, -0x3560
    ctx->r11 = ADD32(ctx->r11, -0X3560);
    // 0x802849C8: lw          $a3, 0x40($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X40);
    // 0x802849CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802849D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802849D4: jal         0x8001BD44
    // 0x802849D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BD44(rdram, ctx);
        goto after_5;
    // 0x802849D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x802849DC: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x802849E0: addiu       $t4, $t4, 0x63A0
    ctx->r12 = ADD32(ctx->r12, 0X63A0);
    // 0x802849E4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802849E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802849EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802849F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802849F4: jal         0x8001C0EC
    // 0x802849F8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x802849F8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_6:
    // 0x802849FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284A00: lw          $t6, 0x7544($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7544);
    // 0x80284A04: addiu       $t5, $zero, 0x2AE
    ctx->r13 = ADD32(0, 0X2AE);
    // 0x80284A08: sh          $t5, 0xE4($t6)
    MEM_H(0XE4, ctx->r14) = ctx->r13;
    // 0x80284A0C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284A10: lw          $t8, 0x7544($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7544);
    // 0x80284A14: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80284A18: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80284A1C: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80284A20: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80284A24: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x80284A28: lwc1        $f6, -0x4978($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4978);
    // 0x80284A2C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80284A30: swc1        $f6, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f6.u32l;
    // 0x80284A34: lw          $t0, 0x7544($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7544);
    // 0x80284A38: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80284A3C: lwc1        $f20, 0x14($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X14);
    // 0x80284A40: nop

    // 0x80284A44: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
    // 0x80284A48: lw          $t1, 0x7544($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7544);
    // 0x80284A4C: nop

    // 0x80284A50: swc1        $f20, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f20.u32l;
    // 0x80284A54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284A58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284A5C: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    // 0x80284A60: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80284A64: jal         0x800178D4
    // 0x80284A68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_7;
    // 0x80284A68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80284A6C: addiu       $t2, $zero, 0x177
    ctx->r10 = ADD32(0, 0X177);
    // 0x80284A70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80284A74: sh          $t2, -0x1DE4($at)
    MEM_H(-0X1DE4, ctx->r1) = ctx->r10;
    // 0x80284A78: b           L_80284A80
    // 0x80284A7C: nop

        goto L_80284A80;
    // 0x80284A7C: nop

L_80284A80:
    // 0x80284A80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80284A84: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80284A88: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80284A8C: jr          $ra
    // 0x80284A90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80284A90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80284BA4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284BA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284BA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284BAC: jal         0x8001A928
    // 0x80284BB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80284BB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80284BB4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284BB8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284BBC: addiu       $t6, $zero, 0x33
    ctx->r14 = ADD32(0, 0X33);
    // 0x80284BC0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80284BC4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80284BC8: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80284BCC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80284BD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284BD8: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x80284BDC: jal         0x8001C0EC
    // 0x80284BE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80284BE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80284BE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284BE8: jal         0x8001B754
    // 0x80284BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80284BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80284BF0: jal         0x80280000
    // 0x80284BF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80284BF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80284BF8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80284BFC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80284C00: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80284C04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80284C08: nop

    // 0x80284C0C: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    // 0x80284C10: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80284C14: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80284C18: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x80284C1C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80284C20: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80284C24: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80284C28: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80284C2C: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x80284C30: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80284C34: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x80284C38: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
    // 0x80284C3C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80284C40: lh          $t4, -0x1F00($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1F00);
    // 0x80284C44: nop

    // 0x80284C48: beq         $t4, $zero, L_80284C58
    if (ctx->r12 == 0) {
        // 0x80284C4C: nop
    
            goto L_80284C58;
    }
    // 0x80284C4C: nop

    // 0x80284C50: jal         0x8007A6DC
    // 0x80284C54: nop

    func_8007A6DC(rdram, ctx);
        goto after_4;
    // 0x80284C54: nop

    after_4:
L_80284C58:
    // 0x80284C58: b           L_80284C60
    // 0x80284C5C: nop

        goto L_80284C60;
    // 0x80284C5C: nop

L_80284C60:
    // 0x80284C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284C64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284C68: jr          $ra
    // 0x80284C6C: nop

    return;
    // 0x80284C6C: nop

;}
RECOMP_FUNC void func_80281638_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281638: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028163C: lh          $t6, -0x1D68($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D68);
    // 0x80281640: nop

    // 0x80281644: beq         $t6, $zero, L_80281664
    if (ctx->r14 == 0) {
        // 0x80281648: nop
    
            goto L_80281664;
    }
    // 0x80281648: nop

    // 0x8028164C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281650: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281654: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281658: lwc1        $f4, 0x51D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x8028165C: nop

    // 0x80281660: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
L_80281664:
    // 0x80281664: jr          $ra
    // 0x80281668: nop

    return;
    // 0x80281668: nop

    // 0x8028166C: jr          $ra
    // 0x80281670: nop

    return;
    // 0x80281670: nop

;}
RECOMP_FUNC void func_80289A90_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289A90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80289A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289A98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289A9C: jal         0x8001B62C
    // 0x80289AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80289AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80289AA4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80289AA8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289AAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80289AB0: nop

    // 0x80289AB4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80289AB8: nop

    // 0x80289ABC: bc1f        L_80289B08
    if (!c1cs) {
        // 0x80289AC0: nop
    
            goto L_80289B08;
    }
    // 0x80289AC0: nop

    // 0x80289AC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289AC8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289ACC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80289AD0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80289AD4: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80289AD8: jal         0x80015538
    // 0x80289ADC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80289ADC: nop

    after_1:
    // 0x80289AE0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80289AE4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80289AE8: nop

    // 0x80289AEC: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x80289AF0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80289AF4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80289AF8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80289AFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80289B00: b           L_80289B3C
    // 0x80289B04: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
        goto L_80289B3C;
    // 0x80289B04: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
L_80289B08:
    // 0x80289B08: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80289B0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80289B10: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289B14: nop

    // 0x80289B18: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80289B1C: nop

    // 0x80289B20: bc1f        L_80289B3C
    if (!c1cs) {
        // 0x80289B24: nop
    
            goto L_80289B3C;
    }
    // 0x80289B24: nop

    // 0x80289B28: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80289B2C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80289B30: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80289B34: nop

    // 0x80289B38: swc1        $f18, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f18.u32l;
L_80289B3C:
    // 0x80289B3C: b           L_80289B44
    // 0x80289B40: nop

        goto L_80289B44;
    // 0x80289B40: nop

L_80289B44:
    // 0x80289B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289B48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80289B4C: jr          $ra
    // 0x80289B50: nop

    return;
    // 0x80289B50: nop

;}
RECOMP_FUNC void func_80289484_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028948C: jal         0x80281638
    // 0x80289490: nop

    func_80281638_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289490: nop

    after_0:
    // 0x80289494: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289498: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028949C: nop

    // 0x802894A0: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x802894A4: nop

    // 0x802894A8: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x802894AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x802894B0: lh          $a0, -0x1D68($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D68);
    // 0x802894B4: jal         0x80281BA4
    // 0x802894B8: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802894B8: nop

    after_1:
    // 0x802894BC: b           L_802894C4
    // 0x802894C0: nop

        goto L_802894C4;
    // 0x802894C0: nop

L_802894C4:
    // 0x802894C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802894C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802894CC: jr          $ra
    // 0x802894D0: nop

    return;
    // 0x802894D0: nop

;}
RECOMP_FUNC void func_80289504_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289504: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80289508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028950C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80289510: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80289514: nop

    // 0x80289518: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8028951C: bne         $t7, $zero, L_802895C4
    if (ctx->r15 != 0) {
        // 0x80289520: nop
    
            goto L_802895C4;
    }
    // 0x80289520: nop

    // 0x80289524: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289528: jal         0x8001B62C
    // 0x8028952C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8028952C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80289530: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80289534: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80289538: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x8028953C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80289540: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80289544: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80289548: sw          $t9, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r25;
    // 0x8028954C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80289550: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80289554: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80289558: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x8028955C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80289560: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289564: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80289568: nop

    // 0x8028956C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80289570: nop

    // 0x80289574: bc1f        L_8028958C
    if (!c1cs) {
        // 0x80289578: nop
    
            goto L_8028958C;
    }
    // 0x80289578: nop

    // 0x8028957C: jal         0x802807F8
    // 0x80289580: nop

    func_802807F8_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80289580: nop

    after_1:
    // 0x80289584: b           L_802895C4
    // 0x80289588: nop

        goto L_802895C4;
    // 0x80289588: nop

L_8028958C:
    // 0x8028958C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80289590: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80289594: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289598: nop

    // 0x8028959C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802895A0: nop

    // 0x802895A4: bc1f        L_802895C4
    if (!c1cs) {
        // 0x802895A8: nop
    
            goto L_802895C4;
    }
    // 0x802895A8: nop

    // 0x802895AC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x802895B0: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x802895B4: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x802895B8: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x802895BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802895C0: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
L_802895C4:
    // 0x802895C4: jal         0x80281E50
    // 0x802895C8: nop

    func_80281E50_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802895C8: nop

    after_2:
    // 0x802895CC: jal         0x80282034
    // 0x802895D0: nop

    func_80282034_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802895D0: nop

    after_3:
    // 0x802895D4: b           L_802895DC
    // 0x802895D8: nop

        goto L_802895DC;
    // 0x802895D8: nop

L_802895DC:
    // 0x802895DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802895E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802895E4: jr          $ra
    // 0x802895E8: nop

    return;
    // 0x802895E8: nop

;}
RECOMP_FUNC void func_80286FA4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80286FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80286FAC: jal         0x802858D8
    // 0x80286FB0: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80286FB0: nop

    after_0:
    // 0x80286FB4: beq         $v0, $zero, L_80286FC4
    if (ctx->r2 == 0) {
        // 0x80286FB8: nop
    
            goto L_80286FC4;
    }
    // 0x80286FB8: nop

    // 0x80286FBC: b           L_8028709C
    // 0x80286FC0: nop

        goto L_8028709C;
    // 0x80286FC0: nop

L_80286FC4:
    // 0x80286FC4: jal         0x80085D54
    // 0x80286FC8: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80286FC8: nop

    after_1:
    // 0x80286FCC: beq         $v0, $zero, L_80286FDC
    if (ctx->r2 == 0) {
        // 0x80286FD0: nop
    
            goto L_80286FDC;
    }
    // 0x80286FD0: nop

    // 0x80286FD4: b           L_8028709C
    // 0x80286FD8: nop

        goto L_8028709C;
    // 0x80286FD8: nop

L_80286FDC:
    // 0x80286FDC: jal         0x80286200
    // 0x80286FE0: nop

    func_80286200_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80286FE0: nop

    after_2:
    // 0x80286FE4: beq         $v0, $zero, L_80286FF4
    if (ctx->r2 == 0) {
        // 0x80286FE8: nop
    
            goto L_80286FF4;
    }
    // 0x80286FE8: nop

    // 0x80286FEC: b           L_8028709C
    // 0x80286FF0: nop

        goto L_8028709C;
    // 0x80286FF0: nop

L_80286FF4:
    // 0x80286FF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286FF8: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80286FFC: nop

    // 0x80287000: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80287004: beq         $t7, $zero, L_8028701C
    if (ctx->r15 == 0) {
        // 0x80287008: nop
    
            goto L_8028701C;
    }
    // 0x80287008: nop

    // 0x8028700C: jal         0x80282CD0
    // 0x80287010: nop

    func_80282CD0_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80287010: nop

    after_3:
    // 0x80287014: b           L_8028709C
    // 0x80287018: nop

        goto L_8028709C;
    // 0x80287018: nop

L_8028701C:
    // 0x8028701C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80287020: lb          $t8, -0x1DB8($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1DB8);
    // 0x80287024: nop

    // 0x80287028: bne         $t8, $zero, L_8028705C
    if (ctx->r24 != 0) {
        // 0x8028702C: nop
    
            goto L_8028705C;
    }
    // 0x8028702C: nop

    // 0x80287030: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80287034: lhu         $t9, -0x1C7C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C7C);
    // 0x80287038: nop

    // 0x8028703C: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80287040: beq         $t0, $zero, L_80287054
    if (ctx->r8 == 0) {
        // 0x80287044: nop
    
            goto L_80287054;
    }
    // 0x80287044: nop

    // 0x80287048: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8028704C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80287050: sb          $t1, -0x1DB8($at)
    MEM_B(-0X1DB8, ctx->r1) = ctx->r9;
L_80287054:
    // 0x80287054: b           L_8028707C
    // 0x80287058: nop

        goto L_8028707C;
    // 0x80287058: nop

L_8028705C:
    // 0x8028705C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80287060: lhu         $t2, -0x1C82($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1C82);
    // 0x80287064: nop

    // 0x80287068: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x8028706C: bne         $t3, $zero, L_8028707C
    if (ctx->r11 != 0) {
        // 0x80287070: nop
    
            goto L_8028707C;
    }
    // 0x80287070: nop

    // 0x80287074: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80287078: sb          $zero, -0x1DB8($at)
    MEM_B(-0X1DB8, ctx->r1) = 0;
L_8028707C:
    // 0x8028707C: jal         0x8028517C
    // 0x80287080: nop

    func_8028517C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80287080: nop

    after_4:
    // 0x80287084: beq         $v0, $zero, L_80287094
    if (ctx->r2 == 0) {
        // 0x80287088: nop
    
            goto L_80287094;
    }
    // 0x80287088: nop

    // 0x8028708C: b           L_8028709C
    // 0x80287090: nop

        goto L_8028709C;
    // 0x80287090: nop

L_80287094:
    // 0x80287094: b           L_8028709C
    // 0x80287098: nop

        goto L_8028709C;
    // 0x80287098: nop

L_8028709C:
    // 0x8028709C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802870A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802870A4: jr          $ra
    // 0x802870A8: nop

    return;
    // 0x802870A8: nop

;}
RECOMP_FUNC void func_80288E4C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288E4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80288E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80288E54: jal         0x802858D8
    // 0x80288E58: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80288E58: nop

    after_0:
    // 0x80288E5C: beq         $v0, $zero, L_80288E6C
    if (ctx->r2 == 0) {
        // 0x80288E60: nop
    
            goto L_80288E6C;
    }
    // 0x80288E60: nop

    // 0x80288E64: b           L_80288F18
    // 0x80288E68: nop

        goto L_80288F18;
    // 0x80288E68: nop

L_80288E6C:
    // 0x80288E6C: jal         0x80085D54
    // 0x80288E70: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80288E70: nop

    after_1:
    // 0x80288E74: beq         $v0, $zero, L_80288E84
    if (ctx->r2 == 0) {
        // 0x80288E78: nop
    
            goto L_80288E84;
    }
    // 0x80288E78: nop

    // 0x80288E7C: b           L_80288F18
    // 0x80288E80: nop

        goto L_80288F18;
    // 0x80288E80: nop

L_80288E84:
    // 0x80288E84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288E88: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80288E8C: nop

    // 0x80288E90: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80288E94: bne         $t7, $zero, L_80288EAC
    if (ctx->r15 != 0) {
        // 0x80288E98: nop
    
            goto L_80288EAC;
    }
    // 0x80288E98: nop

    // 0x80288E9C: jal         0x80282AC4
    // 0x80288EA0: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80288EA0: nop

    after_2:
    // 0x80288EA4: b           L_80288F18
    // 0x80288EA8: nop

        goto L_80288F18;
    // 0x80288EA8: nop

L_80288EAC:
    // 0x80288EAC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80288EB0: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80288EB4: nop

    // 0x80288EB8: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80288EBC: beq         $t9, $zero, L_80288ED4
    if (ctx->r25 == 0) {
        // 0x80288EC0: nop
    
            goto L_80288ED4;
    }
    // 0x80288EC0: nop

    // 0x80288EC4: jal         0x802828C0
    // 0x80288EC8: nop

    func_802828C0_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80288EC8: nop

    after_3:
    // 0x80288ECC: b           L_80288F18
    // 0x80288ED0: nop

        goto L_80288F18;
    // 0x80288ED0: nop

L_80288ED4:
    // 0x80288ED4: jal         0x8028517C
    // 0x80288ED8: nop

    func_8028517C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80288ED8: nop

    after_4:
    // 0x80288EDC: beq         $v0, $zero, L_80288EEC
    if (ctx->r2 == 0) {
        // 0x80288EE0: nop
    
            goto L_80288EEC;
    }
    // 0x80288EE0: nop

    // 0x80288EE4: b           L_80288F18
    // 0x80288EE8: nop

        goto L_80288F18;
    // 0x80288EE8: nop

L_80288EEC:
    // 0x80288EEC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80288EF0: lh          $t0, -0x1D68($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1D68);
    // 0x80288EF4: nop

    // 0x80288EF8: beq         $t0, $zero, L_80288F10
    if (ctx->r8 == 0) {
        // 0x80288EFC: nop
    
            goto L_80288F10;
    }
    // 0x80288EFC: nop

    // 0x80288F00: jal         0x8028236C
    // 0x80288F04: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x80288F04: nop

    after_5:
    // 0x80288F08: b           L_80288F18
    // 0x80288F0C: nop

        goto L_80288F18;
    // 0x80288F0C: nop

L_80288F10:
    // 0x80288F10: b           L_80288F18
    // 0x80288F14: nop

        goto L_80288F18;
    // 0x80288F14: nop

L_80288F18:
    // 0x80288F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80288F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80288F20: jr          $ra
    // 0x80288F24: nop

    return;
    // 0x80288F24: nop

;}
RECOMP_FUNC void func_80284668_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284668: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028466C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284670: jal         0x8001A928
    // 0x80284674: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80284674: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80284678: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028467C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284680: addiu       $t6, $zero, 0x2E
    ctx->r14 = ADD32(0, 0X2E);
    // 0x80284684: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80284688: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8028468C: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80284690: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80284694: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028469C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802846A0: jal         0x8001C0EC
    // 0x802846A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802846A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802846A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802846AC: sh          $zero, -0x1CE8($at)
    MEM_H(-0X1CE8, ctx->r1) = 0;
    // 0x802846B0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802846B4: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802846B8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802846BC: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x802846C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802846C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802846C8: addiu       $a2, $zero, 0x39
    ctx->r6 = ADD32(0, 0X39);
    // 0x802846CC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802846D0: jal         0x800178D4
    // 0x802846D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x802846D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802846D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802846DC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802846E0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802846E4: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x802846E8: nop

    // 0x802846EC: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
    // 0x802846F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802846F4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802846F8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802846FC: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x80284700: nop

    // 0x80284704: swc1        $f6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f6.u32l;
    // 0x80284708: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028470C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80284710: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80284714: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x80284718: nop

    // 0x8028471C: swc1        $f8, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f8.u32l;
    // 0x80284720: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80284724: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80284728: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028472C: lwc1        $f10, -0x1BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x80284730: nop

    // 0x80284734: swc1        $f10, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f10.u32l;
    // 0x80284738: jal         0x80073580
    // 0x8028473C: nop

    func_80073580(rdram, ctx);
        goto after_3;
    // 0x8028473C: nop

    after_3:
    // 0x80284740: b           L_80284748
    // 0x80284744: nop

        goto L_80284748;
    // 0x80284744: nop

L_80284748:
    // 0x80284748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028474C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284750: jr          $ra
    // 0x80284754: nop

    return;
    // 0x80284754: nop

;}
RECOMP_FUNC void func_80281674_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028167C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80281680: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80281684: nop

    // 0x80281688: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8028168C: bne         $t7, $zero, L_802816C8
    if (ctx->r15 != 0) {
        // 0x80281690: nop
    
            goto L_802816C8;
    }
    // 0x80281690: nop

    // 0x80281694: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281698: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028169C: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x802816A0: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x802816A4: nop

    // 0x802816A8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802816AC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802816B0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802816B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802816B8: lb          $t1, -0x4DF3($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X4DF3);
    // 0x802816BC: nop

    // 0x802816C0: beq         $t1, $zero, L_802816E0
    if (ctx->r9 == 0) {
        // 0x802816C4: nop
    
            goto L_802816E0;
    }
    // 0x802816C4: nop

L_802816C8:
    // 0x802816C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802816CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802816D0: swc1        $f4, -0x1D90($at)
    MEM_W(-0X1D90, ctx->r1) = ctx->f4.u32l;
    // 0x802816D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802816D8: b           L_802817C4
    // 0x802816DC: sb          $zero, -0x1D98($at)
    MEM_B(-0X1D98, ctx->r1) = 0;
        goto L_802817C4;
    // 0x802816DC: sb          $zero, -0x1D98($at)
    MEM_B(-0X1D98, ctx->r1) = 0;
L_802816E0:
    // 0x802816E0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x802816E4: addiu       $t2, $t2, 0x51D8
    ctx->r10 = ADD32(ctx->r10, 0X51D8);
    // 0x802816E8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802816EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802816F0: lwc1        $f6, 0xC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XC);
    // 0x802816F4: nop

    // 0x802816F8: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x802816FC: nop

    // 0x80281700: bc1f        L_80281728
    if (!c1cs) {
        // 0x80281704: nop
    
            goto L_80281728;
    }
    // 0x80281704: nop

    // 0x80281708: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x8028170C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281710: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281714: swc1        $f10, -0x1D90($at)
    MEM_W(-0X1D90, ctx->r1) = ctx->f10.u32l;
    // 0x80281718: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8028171C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281720: b           L_802817C4
    // 0x80281724: sb          $t3, -0x1D98($at)
    MEM_B(-0X1D98, ctx->r1) = ctx->r11;
        goto L_802817C4;
    // 0x80281724: sb          $t3, -0x1D98($at)
    MEM_B(-0X1D98, ctx->r1) = ctx->r11;
L_80281728:
    // 0x80281728: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8028172C: addiu       $t4, $t4, 0x51D8
    ctx->r12 = ADD32(ctx->r12, 0X51D8);
    // 0x80281730: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80281734: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281738: lwc1        $f16, 0xC($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XC);
    // 0x8028173C: nop

    // 0x80281740: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80281744: nop

    // 0x80281748: bc1f        L_8028176C
    if (!c1cs) {
        // 0x8028174C: nop
    
            goto L_8028176C;
    }
    // 0x8028174C: nop

    // 0x80281750: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80281754: lwc1        $f4, -0x4980($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4980);
    // 0x80281758: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028175C: swc1        $f4, -0x1D90($at)
    MEM_W(-0X1D90, ctx->r1) = ctx->f4.u32l;
    // 0x80281760: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281764: b           L_802817C4
    // 0x80281768: sb          $zero, -0x1D98($at)
    MEM_B(-0X1D98, ctx->r1) = 0;
        goto L_802817C4;
    // 0x80281768: sb          $zero, -0x1D98($at)
    MEM_B(-0X1D98, ctx->r1) = 0;
L_8028176C:
    // 0x8028176C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80281770: addiu       $t5, $t5, 0x51D8
    ctx->r13 = ADD32(ctx->r13, 0X51D8);
    // 0x80281774: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80281778: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028177C: lwc1        $f6, 0xC($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0XC);
    // 0x80281780: nop

    // 0x80281784: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80281788: nop

    // 0x8028178C: bc1f        L_802817B0
    if (!c1cs) {
        // 0x80281790: nop
    
            goto L_802817B0;
    }
    // 0x80281790: nop

    // 0x80281794: lui         $at, 0xBF40
    ctx->r1 = S32(0XBF40 << 16);
    // 0x80281798: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028179C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802817A0: swc1        $f10, -0x1D90($at)
    MEM_W(-0X1D90, ctx->r1) = ctx->f10.u32l;
    // 0x802817A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802817A8: b           L_802817C4
    // 0x802817AC: sb          $zero, -0x1D98($at)
    MEM_B(-0X1D98, ctx->r1) = 0;
        goto L_802817C4;
    // 0x802817AC: sb          $zero, -0x1D98($at)
    MEM_B(-0X1D98, ctx->r1) = 0;
L_802817B0:
    // 0x802817B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802817B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802817B8: swc1        $f16, -0x1D90($at)
    MEM_W(-0X1D90, ctx->r1) = ctx->f16.u32l;
    // 0x802817BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802817C0: sb          $zero, -0x1D98($at)
    MEM_B(-0X1D98, ctx->r1) = 0;
L_802817C4:
    // 0x802817C4: jal         0x80281248
    // 0x802817C8: nop

    func_80281248_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802817C8: nop

    after_0:
    // 0x802817CC: bne         $v0, $zero, L_802817F4
    if (ctx->r2 != 0) {
        // 0x802817D0: nop
    
            goto L_802817F4;
    }
    // 0x802817D0: nop

    // 0x802817D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802817D8: lb          $t6, -0x1D98($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1D98);
    // 0x802817DC: nop

    // 0x802817E0: bne         $t6, $zero, L_802817F4
    if (ctx->r14 != 0) {
        // 0x802817E4: nop
    
            goto L_802817F4;
    }
    // 0x802817E4: nop

    // 0x802817E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802817EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802817F0: swc1        $f18, -0x1D90($at)
    MEM_W(-0X1D90, ctx->r1) = ctx->f18.u32l;
L_802817F4:
    // 0x802817F4: b           L_802817FC
    // 0x802817F8: nop

        goto L_802817FC;
    // 0x802817F8: nop

L_802817FC:
    // 0x802817FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281804: jr          $ra
    // 0x80281808: nop

    return;
    // 0x80281808: nop

;}
