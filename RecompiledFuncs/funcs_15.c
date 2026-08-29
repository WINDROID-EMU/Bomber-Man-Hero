#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8001000C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001000C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80010010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80010014: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80010018: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001001C: jal         0x8000FF44
    // 0x80010020: nop

    func_8000FF44(rdram, ctx);
        goto after_0;
    // 0x80010020: nop

    after_0:
    // 0x80010024: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80010028: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8001002C: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x80010030: nop

    // 0x80010034: blez        $t7, L_80010080
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80010038: nop
    
            goto L_80010080;
    }
    // 0x80010038: nop

L_8001003C:
    // 0x8001003C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80010040: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80010044: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80010048: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001004C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80010050: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80010054: jal         0x8001000C
    // 0x80010058: nop

    func_8001000C(rdram, ctx);
        goto after_1;
    // 0x80010058: nop

    after_1:
    // 0x8001005C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80010060: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80010064: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80010068: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8001006C: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x80010070: nop

    // 0x80010074: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80010078: bne         $at, $zero, L_8001003C
    if (ctx->r1 != 0) {
        // 0x8001007C: nop
    
            goto L_8001003C;
    }
    // 0x8001007C: nop

L_80010080:
    // 0x80010080: b           L_80010088
    // 0x80010084: nop

        goto L_80010088;
    // 0x80010084: nop

L_80010088:
    // 0x80010088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001008C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80010090: jr          $ra
    // 0x80010094: nop

    return;
    // 0x80010094: nop

;}
RECOMP_FUNC void func_80029D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029D04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029D0C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80029D10: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80029D14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80029D18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80029D1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029D20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80029D24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029D28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80029D2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80029D30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80029D34: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80029D38: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80029D3C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80029D40: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80029D44: lwc1        $f9, -0x41F8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X41F8);
    // 0x80029D48: lwc1        $f8, -0x41F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X41F4);
    // 0x80029D4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80029D50: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80029D54: jal         0x80034970
    // 0x80029D58: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80029D58: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80029D5C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80029D60: nop

    // 0x80029D64: lwc1        $f16, 0x48($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X48);
    // 0x80029D68: nop

    // 0x80029D6C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80029D70: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x80029D74: b           L_80029D7C
    // 0x80029D78: nop

        goto L_80029D7C;
    // 0x80029D78: nop

L_80029D7C:
    // 0x80029D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029D80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80029D84: jr          $ra
    // 0x80029D88: nop

    return;
    // 0x80029D88: nop

;}
RECOMP_FUNC void guPerspective(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036E70: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80036E74: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80036E78: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80036E7C: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80036E80: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80036E84: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80036E88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80036E8C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80036E90: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80036E94: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80036E98: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80036E9C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80036EA0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80036EA4: jal         0x80036C40
    // 0x80036EA8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspectiveF(rdram, ctx);
        goto after_0;
    // 0x80036EA8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80036EAC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80036EB0: jal         0x800360F0
    // 0x80036EB4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80036EB4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x80036EB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80036EBC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80036EC0: jr          $ra
    // 0x80036EC4: nop

    return;
    // 0x80036EC4: nop

;}
RECOMP_FUNC void RestartPak(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F938: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001F93C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F940: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001F944: lw          $t6, 0x6DF8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DF8);
    // 0x8001F948: nop

    // 0x8001F94C: beq         $t6, $zero, L_8001F95C
    if (ctx->r14 == 0) {
        // 0x8001F950: nop
    
            goto L_8001F95C;
    }
    // 0x8001F950: nop

    // 0x8001F954: b           L_8001F9CC
    // 0x8001F958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001F9CC;
    // 0x8001F958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001F95C:
    // 0x8001F95C: jal         0x8001EEB0
    // 0x8001F960: nop

    GetSi_Status(rdram, ctx);
        goto after_0;
    // 0x8001F960: nop

    after_0:
    // 0x8001F964: beq         $v0, $zero, L_8001F974
    if (ctx->r2 == 0) {
        // 0x8001F968: nop
    
            goto L_8001F974;
    }
    // 0x8001F968: nop

    // 0x8001F96C: b           L_8001F9CC
    // 0x8001F970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001F9CC;
    // 0x8001F970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001F974:
    // 0x8001F974: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001F978: jal         0x8003A0A0
    // 0x8001F97C: addiu       $a0, $a0, 0x6D90
    ctx->r4 = ADD32(ctx->r4, 0X6D90);
    osMotorStop_recomp(rdram, ctx);
        goto after_1;
    // 0x8001F97C: addiu       $a0, $a0, 0x6D90
    ctx->r4 = ADD32(ctx->r4, 0X6D90);
    after_1:
    // 0x8001F980: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8001F984: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F988: nop

    // 0x8001F98C: beq         $t7, $zero, L_8001F9C4
    if (ctx->r15 == 0) {
        // 0x8001F990: nop
    
            goto L_8001F9C4;
    }
    // 0x8001F990: nop

    // 0x8001F994: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8001F998: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001F99C: sw          $t8, 0x6DF8($at)
    MEM_W(0X6DF8, ctx->r1) = ctx->r24;
    // 0x8001F9A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001F9A4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8001F9A8: addiu       $a1, $a1, 0x6D90
    ctx->r5 = ADD32(ctx->r5, 0X6D90);
    // 0x8001F9AC: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x8001F9B0: jal         0x8003A55C
    // 0x8001F9B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osMotorInit_recomp(rdram, ctx);
        goto after_2;
    // 0x8001F9B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8001F9B8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001F9BC: jal         0x8003A0A0
    // 0x8001F9C0: addiu       $a0, $a0, 0x6D90
    ctx->r4 = ADD32(ctx->r4, 0X6D90);
    osMotorStop_recomp(rdram, ctx);
        goto after_3;
    // 0x8001F9C0: addiu       $a0, $a0, 0x6D90
    ctx->r4 = ADD32(ctx->r4, 0X6D90);
    after_3:
L_8001F9C4:
    // 0x8001F9C4: b           L_8001F9CC
    // 0x8001F9C8: nop

        goto L_8001F9CC;
    // 0x8001F9C8: nop

L_8001F9CC:
    // 0x8001F9CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F9D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001F9D4: jr          $ra
    // 0x8001F9D8: nop

    return;
    // 0x8001F9D8: nop

;}
RECOMP_FUNC void Check_PakState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F9DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001F9E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F9E4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001F9E8: lw          $t6, 0x6E20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6E20);
    // 0x8001F9EC: nop

    // 0x8001F9F0: beq         $t6, $zero, L_8001FA00
    if (ctx->r14 == 0) {
        // 0x8001F9F4: nop
    
            goto L_8001FA00;
    }
    // 0x8001F9F4: nop

    // 0x8001F9F8: b           L_8001FAC4
    // 0x8001F9FC: nop

        goto L_8001FAC4;
    // 0x8001F9FC: nop

L_8001FA00:
    // 0x8001FA00: jal         0x8001EEB0
    // 0x8001FA04: nop

    GetSi_Status(rdram, ctx);
        goto after_0;
    // 0x8001FA04: nop

    after_0:
    // 0x8001FA08: beq         $v0, $zero, L_8001FA20
    if (ctx->r2 == 0) {
        // 0x8001FA0C: nop
    
            goto L_8001FA20;
    }
    // 0x8001FA0C: nop

    // 0x8001FA10: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001FA14: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA18: b           L_8001FA58
    // 0x8001FA1C: sw          $t7, 0x6DF8($at)
    MEM_W(0X6DF8, ctx->r1) = ctx->r15;
        goto L_8001FA58;
    // 0x8001FA1C: sw          $t7, 0x6DF8($at)
    MEM_W(0X6DF8, ctx->r1) = ctx->r15;
L_8001FA20:
    // 0x8001FA20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001FA24: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8001FA28: addiu       $a1, $a1, 0x6D90
    ctx->r5 = ADD32(ctx->r5, 0X6D90);
    // 0x8001FA2C: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x8001FA30: jal         0x8003A55C
    // 0x8001FA34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osMotorInit_recomp(rdram, ctx);
        goto after_1;
    // 0x8001FA34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8001FA38: beq         $v0, $zero, L_8001FA50
    if (ctx->r2 == 0) {
        // 0x8001FA3C: nop
    
            goto L_8001FA50;
    }
    // 0x8001FA3C: nop

    // 0x8001FA40: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001FA44: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA48: b           L_8001FA58
    // 0x8001FA4C: sw          $t8, 0x6DF8($at)
    MEM_W(0X6DF8, ctx->r1) = ctx->r24;
        goto L_8001FA58;
    // 0x8001FA4C: sw          $t8, 0x6DF8($at)
    MEM_W(0X6DF8, ctx->r1) = ctx->r24;
L_8001FA50:
    // 0x8001FA50: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA54: sw          $zero, 0x6DF8($at)
    MEM_W(0X6DF8, ctx->r1) = 0;
L_8001FA58:
    // 0x8001FA58: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA5C: sw          $zero, 0x6DFC($at)
    MEM_W(0X6DFC, ctx->r1) = 0;
    // 0x8001FA60: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA64: sw          $zero, 0x6E00($at)
    MEM_W(0X6E00, ctx->r1) = 0;
    // 0x8001FA68: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA6C: sw          $zero, 0x6E04($at)
    MEM_W(0X6E04, ctx->r1) = 0;
    // 0x8001FA70: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA74: sw          $zero, 0x6E08($at)
    MEM_W(0X6E08, ctx->r1) = 0;
    // 0x8001FA78: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA7C: sw          $zero, 0x6E0C($at)
    MEM_W(0X6E0C, ctx->r1) = 0;
    // 0x8001FA80: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA84: sw          $zero, 0x6E10($at)
    MEM_W(0X6E10, ctx->r1) = 0;
    // 0x8001FA88: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA8C: sw          $zero, 0x6E14($at)
    MEM_W(0X6E14, ctx->r1) = 0;
    // 0x8001FA90: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA94: sw          $zero, 0x6E18($at)
    MEM_W(0X6E18, ctx->r1) = 0;
    // 0x8001FA98: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FA9C: sw          $zero, 0x6E1C($at)
    MEM_W(0X6E1C, ctx->r1) = 0;
    // 0x8001FAA0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8001FAA4: lw          $t9, 0x6DF8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6DF8);
    // 0x8001FAA8: nop

    // 0x8001FAAC: bne         $t9, $zero, L_8001FABC
    if (ctx->r25 != 0) {
        // 0x8001FAB0: nop
    
            goto L_8001FABC;
    }
    // 0x8001FAB0: nop

    // 0x8001FAB4: jal         0x8001F938
    // 0x8001FAB8: nop

    RestartPak(rdram, ctx);
        goto after_2;
    // 0x8001FAB8: nop

    after_2:
L_8001FABC:
    // 0x8001FABC: b           L_8001FAC4
    // 0x8001FAC0: nop

        goto L_8001FAC4;
    // 0x8001FAC0: nop

L_8001FAC4:
    // 0x8001FAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001FAC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001FACC: jr          $ra
    // 0x8001FAD0: nop

    return;
    // 0x8001FAD0: nop

;}
RECOMP_FUNC void _filterBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800464C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800464CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800464D0: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x800464D4: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x800464D8: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x800464DC: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x800464E0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800464E4: lui         $t2, 0xB00
    ctx->r10 = S32(0XB00 << 16);
    // 0x800464E8: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x800464EC: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x800464F0: ori         $t2, $t2, 0x20
    ctx->r10 = ctx->r10 | 0X20;
    // 0x800464F4: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x800464F8: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x800464FC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80046500: sw          $t2, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r10;
    // 0x80046504: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80046508: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8004650C: jal         0x800358D0
    // 0x80046510: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80046510: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x80046514: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80046518: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8004651C: lui         $at, 0xE00
    ctx->r1 = S32(0XE00 << 16);
    // 0x80046520: addiu       $v1, $a3, 0x10
    ctx->r3 = ADD32(ctx->r7, 0X10);
    // 0x80046524: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x80046528: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
    // 0x8004652C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80046530: lw          $t4, 0x2C($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X2C);
    // 0x80046534: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x80046538: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8004653C: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80046540: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80046544: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80046548: or          $t1, $t8, $t9
    ctx->r9 = ctx->r24 | ctx->r25;
    // 0x8004654C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80046550: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    // 0x80046554: jal         0x800358D0
    // 0x80046558: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80046558: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8004655C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80046560: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80046564: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80046568: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x8004656C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80046570: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80046574: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80046578: jr          $ra
    // 0x8004657C: nop

    return;
    // 0x8004657C: nop

;}
RECOMP_FUNC void func_80001FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001FDC: jr          $ra
    // 0x80001FE0: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
    return;
    // 0x80001FE0: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
    // 0x80001FE4: jr          $ra
    // 0x80001FE8: nop

    return;
    // 0x80001FE8: nop

    // 0x80001FEC: jr          $ra
    // 0x80001FF0: nop

    return;
    // 0x80001FF0: nop

;}
RECOMP_FUNC void func_800158B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800158B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800158B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800158BC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800158C0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800158C4: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x800158C8: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x800158CC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800158D0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800158D4: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800158D8: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800158DC: jal         0x80015634
    // 0x800158E0: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_0;
    // 0x800158E0: nop

    after_0:
    // 0x800158E4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800158E8: nop

    // 0x800158EC: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x800158F0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800158F4: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800158F8: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x800158FC: nop

    // 0x80015900: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80015904: jal         0x800366E0
    // 0x80015908: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x80015908: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_1:
    // 0x8001590C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80015910: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80015914: jal         0x800155A8
    // 0x80015918: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    Math_CalcAngle2D(rdram, ctx);
        goto after_2;
    // 0x80015918: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x8001591C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80015920: nop

    // 0x80015924: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x80015928: b           L_80015930
    // 0x8001592C: nop

        goto L_80015930;
    // 0x8001592C: nop

L_80015930:
    // 0x80015930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80015934: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80015938: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8001593C: jr          $ra
    // 0x80015940: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80015940: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void __lookupVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D3CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003D3D0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8003D3D4: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x8003D3D8: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8003D3DC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8003D3E0: beq         $v1, $zero, L_8003D434
    if (ctx->r3 == 0) {
        // 0x8003D3E4: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_8003D434;
    }
    // 0x8003D3E4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8003D3E8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8003D3EC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x8003D3F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003D3F4: lbu         $t8, 0x32($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X32);
L_8003D3F8:
    // 0x8003D3F8: bnel        $v0, $t8, L_8003D42C
    if (ctx->r2 != ctx->r24) {
        // 0x8003D3FC: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8003D42C;
    }
    goto skip_0;
    // 0x8003D3FC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x8003D400: lbu         $t9, 0x31($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X31);
    // 0x8003D404: bnel        $a2, $t9, L_8003D42C
    if (ctx->r6 != ctx->r25) {
        // 0x8003D408: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8003D42C;
    }
    goto skip_1;
    // 0x8003D408: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x8003D40C: lbu         $a0, 0x35($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X35);
    // 0x8003D410: beql        $a1, $a0, L_8003D42C
    if (ctx->r5 == ctx->r4) {
        // 0x8003D414: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8003D42C;
    }
    goto skip_2;
    // 0x8003D414: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x8003D418: beql        $a3, $a0, L_8003D42C
    if (ctx->r7 == ctx->r4) {
        // 0x8003D41C: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8003D42C;
    }
    goto skip_3;
    // 0x8003D41C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x8003D420: jr          $ra
    // 0x8003D424: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8003D424: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8003D428: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_8003D42C:
    // 0x8003D42C: bnel        $v1, $zero, L_8003D3F8
    if (ctx->r3 != 0) {
        // 0x8003D430: lbu         $t8, 0x32($v1)
        ctx->r24 = MEM_BU(ctx->r3, 0X32);
            goto L_8003D3F8;
    }
    goto skip_4;
    // 0x8003D430: lbu         $t8, 0x32($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X32);
    skip_4:
L_8003D434:
    // 0x8003D434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003D438: jr          $ra
    // 0x8003D43C: nop

    return;
    // 0x8003D43C: nop

;}
RECOMP_FUNC void stub2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D804: jr          $ra
    // 0x8001D808: nop

    return;
    // 0x8001D808: nop

    // 0x8001D80C: jr          $ra
    // 0x8001D810: nop

    return;
    // 0x8001D810: nop

;}
RECOMP_FUNC void func_80010C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010C14: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80010C18: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80010C1C: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80010C20: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80010C24: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80010C28: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80010C2C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80010C30: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80010C34: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80010C38: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80010C3C: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80010C40: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80010C44: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80010C48: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80010C4C: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80010C50: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80010C54: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80010C58: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80010C5C: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80010C60: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80010C64: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80010C68: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80010C6C: mul.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80010C70: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80010C74: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x80010C78: b           L_80010C80
    // 0x80010C7C: nop

        goto L_80010C80;
    // 0x80010C7C: nop

L_80010C80:
    // 0x80010C80: jr          $ra
    // 0x80010C84: nop

    return;
    // 0x80010C84: nop

;}
RECOMP_FUNC void alUnlink(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800357B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800357B4: beql        $v0, $zero, L_800357C8
    if (ctx->r2 == 0) {
        // 0x800357B8: lw          $v0, 0x4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X4);
            goto L_800357C8;
    }
    goto skip_0;
    // 0x800357B8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    skip_0:
    // 0x800357BC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x800357C0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800357C4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
L_800357C8:
    // 0x800357C8: beq         $v0, $zero, L_800357D8
    if (ctx->r2 == 0) {
        // 0x800357CC: nop
    
            goto L_800357D8;
    }
    // 0x800357CC: nop

    // 0x800357D0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800357D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_800357D8:
    // 0x800357D8: jr          $ra
    // 0x800357DC: nop

    return;
    // 0x800357DC: nop

;}
RECOMP_FUNC void _allocatePVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ECE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003ECE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003ECE8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8003ECEC: lw          $a3, 0x14($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X14);
    // 0x8003ECF0: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8003ECF4: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8003ECF8: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8003ECFC: beq         $a3, $zero, L_8003ED34
    if (ctx->r7 == 0) {
        // 0x8003ED00: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8003ED34;
    }
    // 0x8003ED00: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003ED04: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8003ED08: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8003ED0C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8003ED10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8003ED14: jal         0x800357B0
    // 0x8003ED18: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x8003ED18: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8003ED1C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8003ED20: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8003ED24: jal         0x800357E0
    // 0x8003ED28: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    alLink(rdram, ctx);
        goto after_1;
    // 0x8003ED28: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_1:
    // 0x8003ED2C: b           L_8003EDB4
    // 0x8003ED30: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_8003EDB4;
    // 0x8003ED30: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8003ED34:
    // 0x8003ED34: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x8003ED38: beq         $a3, $zero, L_8003ED6C
    if (ctx->r7 == 0) {
        // 0x8003ED3C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8003ED6C;
    }
    // 0x8003ED3C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8003ED40: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8003ED44: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8003ED48: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8003ED4C: jal         0x800357B0
    // 0x8003ED50: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    alUnlink(rdram, ctx);
        goto after_2;
    // 0x8003ED50: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8003ED54: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8003ED58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8003ED5C: jal         0x800357E0
    // 0x8003ED60: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    alLink(rdram, ctx);
        goto after_3;
    // 0x8003ED60: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_3:
    // 0x8003ED64: b           L_8003EDB4
    // 0x8003ED68: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_8003EDB4;
    // 0x8003ED68: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8003ED6C:
    // 0x8003ED6C: lw          $a3, 0xC($t0)
    ctx->r7 = MEM_W(ctx->r8, 0XC);
    // 0x8003ED70: beql        $a3, $zero, L_8003EDB8
    if (ctx->r7 == 0) {
        // 0x8003ED74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003EDB8;
    }
    goto skip_0;
    // 0x8003ED74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003ED78: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
L_8003ED7C:
    // 0x8003ED7C: lh          $t9, 0x16($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X16);
    // 0x8003ED80: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003ED84: bnel        $at, $zero, L_8003EDAC
    if (ctx->r1 != 0) {
        // 0x8003ED88: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8003EDAC;
    }
    goto skip_1;
    // 0x8003ED88: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_1:
    // 0x8003ED8C: lw          $t1, 0xD8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XD8);
    // 0x8003ED90: bnel        $t1, $zero, L_8003EDAC
    if (ctx->r9 != 0) {
        // 0x8003ED94: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8003EDAC;
    }
    goto skip_2;
    // 0x8003ED94: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_2:
    // 0x8003ED98: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8003ED9C: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x8003EDA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003EDA4: lh          $a2, 0x16($t2)
    ctx->r6 = MEM_H(ctx->r10, 0X16);
    // 0x8003EDA8: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_8003EDAC:
    // 0x8003EDAC: bnel        $a3, $zero, L_8003ED7C
    if (ctx->r7 != 0) {
        // 0x8003EDB0: lw          $t8, 0x8($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X8);
            goto L_8003ED7C;
    }
    goto skip_3;
    // 0x8003EDB0: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    skip_3:
L_8003EDB4:
    // 0x8003EDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003EDB8:
    // 0x8003EDB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003EDBC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8003EDC0: jr          $ra
    // 0x8003EDC4: nop

    return;
    // 0x8003EDC4: nop

;}
RECOMP_FUNC void func_800D6DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D6DFC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800D6E00: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D6E04: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800D6E08: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D6E0C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800D6E10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D6E14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D6E18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D6E1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D6E20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D6E24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D6E28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D6E2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D6E30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D6E34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D6E38: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800D6E3C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D6E40: nop

    // 0x800D6E44: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D6E48: nop

    // 0x800D6E4C: bne         $t1, $zero, L_800D6ECC
    if (ctx->r9 != 0) {
        // 0x800D6E50: nop
    
            goto L_800D6ECC;
    }
    // 0x800D6E50: nop

    // 0x800D6E54: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D6E58: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D6E5C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D6E60: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D6E64: nop

    // 0x800D6E68: sh          $zero, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = 0;
    // 0x800D6E6C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D6E70: nop

    // 0x800D6E74: lh          $s0, 0xB6($t5)
    ctx->r16 = MEM_H(ctx->r13, 0XB6);
    // 0x800D6E78: nop

    // 0x800D6E7C: sh          $s0, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r16;
    // 0x800D6E80: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D6E84: nop

    // 0x800D6E88: sh          $s0, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r16;
    // 0x800D6E8C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D6E90: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D6E94: nop

    // 0x800D6E98: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800D6E9C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D6EA0: nop

    // 0x800D6EA4: lwc1        $f6, 0x3C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800D6EA8: nop

    // 0x800D6EAC: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
    // 0x800D6EB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6EB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D6EBC: addiu       $a2, $zero, 0x59
    ctx->r6 = ADD32(0, 0X59);
    // 0x800D6EC0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800D6EC4: jal         0x80017664
    // 0x800D6EC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_0;
    // 0x800D6EC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_800D6ECC:
    // 0x800D6ECC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D6ED0: nop

    // 0x800D6ED4: lh          $t0, 0xB6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB6);
    // 0x800D6ED8: nop

    // 0x800D6EDC: bne         $t0, $zero, L_800D6FB8
    if (ctx->r8 != 0) {
        // 0x800D6EE0: nop
    
            goto L_800D6FB8;
    }
    // 0x800D6EE0: nop

    // 0x800D6EE4: lh          $t1, 0xA6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA6);
    // 0x800D6EE8: nop

    // 0x800D6EEC: bne         $t1, $zero, L_800D6FB8
    if (ctx->r9 != 0) {
        // 0x800D6EF0: nop
    
            goto L_800D6FB8;
    }
    // 0x800D6EF0: nop

    // 0x800D6EF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6EF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6EFC: jal         0x80028FA0
    // 0x800D6F00: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800D6F00: nop

    after_1:
    // 0x800D6F04: beq         $v0, $zero, L_800D6FB8
    if (ctx->r2 == 0) {
        // 0x800D6F08: nop
    
            goto L_800D6FB8;
    }
    // 0x800D6F08: nop

    // 0x800D6F0C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D6F10: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800D6F14: sh          $t2, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r10;
    // 0x800D6F18: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800D6F1C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D6F20: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800D6F24: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D6F28: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D6F2C: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800D6F30: nop

    // 0x800D6F34: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800D6F38: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x800D6F3C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800D6F40: sh          $t6, 0xB8($t4)
    MEM_H(0XB8, ctx->r12) = ctx->r14;
    // 0x800D6F44: nop

    // 0x800D6F48: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800D6F4C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D6F50: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D6F54: nop

    // 0x800D6F58: swc1        $f16, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f16.u32l;
    // 0x800D6F5C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D6F60: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800D6F64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D6F68: lwc1        $f18, 0x3C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800D6F6C: nop

    // 0x800D6F70: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800D6F74: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x800D6F78: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D6F7C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800D6F80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D6F84: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800D6F88: nop

    // 0x800D6F8C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x800D6F90: nop

    // 0x800D6F94: bc1f        L_800D6FB8
    if (!c1cs) {
        // 0x800D6F98: nop
    
            goto L_800D6FB8;
    }
    // 0x800D6F98: nop

    // 0x800D6F9C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D6FA0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800D6FA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D6FA8: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800D6FAC: nop

    // 0x800D6FB0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800D6FB4: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
L_800D6FB8:
    // 0x800D6FB8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D6FBC: nop

    // 0x800D6FC0: lh          $t2, 0xB6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB6);
    // 0x800D6FC4: nop

    // 0x800D6FC8: beq         $t2, $zero, L_800D708C
    if (ctx->r10 == 0) {
        // 0x800D6FCC: nop
    
            goto L_800D708C;
    }
    // 0x800D6FCC: nop

    // 0x800D6FD0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D6FD4: nop

    // 0x800D6FD8: lh          $t5, 0xB6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XB6);
    // 0x800D6FDC: nop

    // 0x800D6FE0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800D6FE4: sh          $t6, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r14;
    // 0x800D6FE8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D6FEC: nop

    // 0x800D6FF0: lh          $t7, 0xB6($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XB6);
    // 0x800D6FF4: nop

    // 0x800D6FF8: bne         $t7, $zero, L_800D708C
    if (ctx->r15 != 0) {
        // 0x800D6FFC: nop
    
            goto L_800D708C;
    }
    // 0x800D6FFC: nop

    // 0x800D7000: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D7004: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D7008: nop

    // 0x800D700C: swc1        $f6, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f6.u32l;
    // 0x800D7010: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D7014: nop

    // 0x800D7018: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800D701C: nop

    // 0x800D7020: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x800D7024: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D7028: nop

    // 0x800D702C: swc1        $f20, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f20.u32l;
    // 0x800D7030: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800D7034: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D7038: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800D703C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D7040: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D7044: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800D7048: nop

    // 0x800D704C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800D7050: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x800D7054: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800D7058: sh          $t5, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r13;
    // 0x800D705C: nop

    // 0x800D7060: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D7064: nop

    // 0x800D7068: lh          $t3, 0xB8($t6)
    ctx->r11 = MEM_H(ctx->r14, 0XB8);
    // 0x800D706C: nop

    // 0x800D7070: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800D7074: nop

    // 0x800D7078: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D707C: swc1        $f18, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f18.u32l;
    // 0x800D7080: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D7084: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800D7088: sh          $t4, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r12;
L_800D708C:
    // 0x800D708C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D7090: nop

    // 0x800D7094: lh          $t0, 0xA6($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA6);
    // 0x800D7098: nop

    // 0x800D709C: beq         $t0, $zero, L_800D7120
    if (ctx->r8 == 0) {
        // 0x800D70A0: nop
    
            goto L_800D7120;
    }
    // 0x800D70A0: nop

    // 0x800D70A4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D70A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800D70AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800D70B0: lwc1        $f12, 0x3C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800D70B4: jal         0x80015538
    // 0x800D70B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800D70B8: nop

    after_2:
    // 0x800D70BC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D70C0: nop

    // 0x800D70C4: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
    // 0x800D70C8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D70CC: nop

    // 0x800D70D0: lwc1        $f4, 0x3C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800D70D4: nop

    // 0x800D70D8: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
    // 0x800D70DC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D70E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D70E4: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x800D70E8: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800D70EC: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800D70F0: nop

    // 0x800D70F4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D70F8: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x800D70FC: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x800D7100: nop

    // 0x800D7104: bc1f        L_800D7118
    if (!c1cs) {
        // 0x800D7108: nop
    
            goto L_800D7118;
    }
    // 0x800D7108: nop

    // 0x800D710C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D7110: nop

    // 0x800D7114: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_800D7118:
    // 0x800D7118: b           L_800D7328
    // 0x800D711C: nop

        goto L_800D7328;
    // 0x800D711C: nop

L_800D7120:
    // 0x800D7120: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D7124: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800D7128: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D712C: lwc1        $f4, 0x44($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X44);
    // 0x800D7130: nop

    // 0x800D7134: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x800D7138: nop

    // 0x800D713C: bc1f        L_800D7168
    if (!c1cs) {
        // 0x800D7140: nop
    
            goto L_800D7168;
    }
    // 0x800D7140: nop

    // 0x800D7144: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D7148: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x800D714C: lwc1        $f6, 0x44($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X44);
    // 0x800D7150: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800D7154: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D7158: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x800D715C: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800D7160: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800D7164: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
L_800D7168:
    // 0x800D7168: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D716C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D7170: nop

    // 0x800D7174: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x800D7178: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D717C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7180: jal         0x80029C40
    // 0x800D7184: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800D7184: nop

    after_3:
    // 0x800D7188: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D718C: nop

    // 0x800D7190: lh          $t9, 0xA6($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XA6);
    // 0x800D7194: nop

    // 0x800D7198: bne         $t9, $zero, L_800D7328
    if (ctx->r25 != 0) {
        // 0x800D719C: nop
    
            goto L_800D7328;
    }
    // 0x800D719C: nop

    // 0x800D71A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D71A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D71A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D71AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D71B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800D71B4: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800D71B8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D71BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800D71C0: jal         0x80029018
    // 0x800D71C4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800D71C4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x800D71C8: beq         $v0, $zero, L_800D72D8
    if (ctx->r2 == 0) {
        // 0x800D71CC: nop
    
            goto L_800D72D8;
    }
    // 0x800D71CC: nop

    // 0x800D71D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D71D4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D71D8: nop

    // 0x800D71DC: swc1        $f16, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f16.u32l;
    // 0x800D71E0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D71E4: nop

    // 0x800D71E8: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800D71EC: nop

    // 0x800D71F0: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800D71F4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D71F8: nop

    // 0x800D71FC: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x800D7200: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D7204: nop

    // 0x800D7208: lh          $t6, 0xB6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XB6);
    // 0x800D720C: nop

    // 0x800D7210: bne         $t6, $zero, L_800D72CC
    if (ctx->r14 != 0) {
        // 0x800D7214: nop
    
            goto L_800D72CC;
    }
    // 0x800D7214: nop

    // 0x800D7218: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D721C: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x800D7220: sh          $t4, 0xB6($t7)
    MEM_H(0XB6, ctx->r15) = ctx->r12;
    // 0x800D7224: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800D7228: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D722C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800D7230: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D7234: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D7238: lwc1        $f18, 0x3C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800D723C: nop

    // 0x800D7240: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800D7244: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x800D7248: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800D724C: sh          $t9, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r25;
    // 0x800D7250: nop

    // 0x800D7254: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800D7258: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D725C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D7260: nop

    // 0x800D7264: swc1        $f8, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f8.u32l;
    // 0x800D7268: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D726C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800D7270: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D7274: lwc1        $f6, 0x3C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800D7278: nop

    // 0x800D727C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800D7280: swc1        $f16, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f16.u32l;
    // 0x800D7284: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D7288: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800D728C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D7290: lwc1        $f18, 0x3C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800D7294: nop

    // 0x800D7298: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x800D729C: nop

    // 0x800D72A0: bc1f        L_800D72C4
    if (!c1cs) {
        // 0x800D72A4: nop
    
            goto L_800D72C4;
    }
    // 0x800D72A4: nop

    // 0x800D72A8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D72AC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800D72B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D72B4: lwc1        $f8, 0x3C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800D72B8: nop

    // 0x800D72BC: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x800D72C0: swc1        $f10, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f10.u32l;
L_800D72C4:
    // 0x800D72C4: b           L_800D72D8
    // 0x800D72C8: nop

        goto L_800D72D8;
    // 0x800D72C8: nop

L_800D72CC:
    // 0x800D72CC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D72D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800D72D4: sh          $t6, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r14;
L_800D72D8:
    // 0x800D72D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D72DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D72E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D72E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D72E8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x800D72EC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x800D72F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D72F4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800D72F8: jal         0x800295C0
    // 0x800D72FC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x800D72FC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x800D7300: beq         $v0, $zero, L_800D7318
    if (ctx->r2 == 0) {
        // 0x800D7304: nop
    
            goto L_800D7318;
    }
    // 0x800D7304: nop

    // 0x800D7308: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800D730C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D7310: b           L_800D7328
    // 0x800D7314: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
        goto L_800D7328;
    // 0x800D7314: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
L_800D7318:
    // 0x800D7318: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800D731C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D7320: nop

    // 0x800D7324: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_800D7328:
    // 0x800D7328: b           L_800D7330
    // 0x800D732C: nop

        goto L_800D7330;
    // 0x800D732C: nop

L_800D7330:
    // 0x800D7330: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D7334: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800D7338: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800D733C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800D7340: jr          $ra
    // 0x800D7344: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800D7344: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800B1914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B1914: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B1918: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B191C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B1920: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B1924: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B1928: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B192C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1930: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B1934: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1938: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B193C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B1940: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B1944: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B1948: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B194C: nop

    // 0x800B1950: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B1954: nop

    // 0x800B1958: bne         $t1, $zero, L_800B1A24
    if (ctx->r9 != 0) {
        // 0x800B195C: nop
    
            goto L_800B1A24;
    }
    // 0x800B195C: nop

    // 0x800B1960: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B1964: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B1968: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B196C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B1970: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B1974: nop

    // 0x800B1978: swc1        $f4, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f4.u32l;
    // 0x800B197C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B1980: nop

    // 0x800B1984: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x800B1988: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800B198C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800B1990: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
    // 0x800B1994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1998: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B199C: jal         0x8001BBDC
    // 0x800B19A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800B19A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B19A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B19A8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800B19AC: addiu       $t8, $t8, 0x7884
    ctx->r24 = ADD32(ctx->r24, 0X7884);
    // 0x800B19B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B19B4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800B19B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B19BC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800B19C0: jal         0x8001C0EC
    // 0x800B19C4: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B19C4: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_1:
    // 0x800B19C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800B19CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B19D0: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800B19D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B19D8: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800B19DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B19E0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B19E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800B19E8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800B19EC: jal         0x800296AC
    // 0x800B19F0: nop

    func_800296AC(rdram, ctx);
        goto after_2;
    // 0x800B19F0: nop

    after_2:
    // 0x800B19F4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800B19F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800B19FC: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800B1A00: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B1A04: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B1A08: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800B1A0C: nop

    // 0x800B1A10: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800B1A14: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x800B1A18: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800B1A1C: sh          $t3, 0xB0($t1)
    MEM_H(0XB0, ctx->r9) = ctx->r11;
    // 0x800B1A20: nop

L_800B1A24:
    // 0x800B1A24: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B1A28: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B1A2C: lwc1        $f16, 0x44($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X44);
    // 0x800B1A30: nop

    // 0x800B1A34: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x800B1A38: nop

    // 0x800B1A3C: bc1f        L_800B1A60
    if (!c1cs) {
        // 0x800B1A40: nop
    
            goto L_800B1A60;
    }
    // 0x800B1A40: nop

    // 0x800B1A44: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B1A48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800B1A4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B1A50: lwc1        $f4, 0x44($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X44);
    // 0x800B1A54: nop

    // 0x800B1A58: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800B1A5C: swc1        $f8, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f8.u32l;
L_800B1A60:
    // 0x800B1A60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B1A64: nop

    // 0x800B1A68: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800B1A6C: nop

    // 0x800B1A70: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800B1A74: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
    // 0x800B1A78: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800B1A7C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800B1A80: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800B1A84: nop

    // 0x800B1A88: bne         $t0, $at, L_800B1ACC
    if (ctx->r8 != ctx->r1) {
        // 0x800B1A8C: nop
    
            goto L_800B1ACC;
    }
    // 0x800B1A8C: nop

    // 0x800B1A90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1A94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B1A9C: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x800B1AA0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B1AA4: jal         0x800175F0
    // 0x800B1AA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x800B1AA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x800B1AAC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800B1AB0: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800B1AB4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800B1AB8: jal         0x800B34AC
    // 0x800B1ABC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800B34AC(rdram, ctx);
        goto after_4;
    // 0x800B1ABC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x800B1AC0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B1AC4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800B1AC8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800B1ACC:
    // 0x800B1ACC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1AD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1AD4: jal         0x80029C40
    // 0x800B1AD8: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800B1AD8: nop

    after_5:
    // 0x800B1ADC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1AE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1AE4: jal         0x80029D04
    // 0x800B1AE8: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800B1AE8: nop

    after_6:
    // 0x800B1AEC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800B1AF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B1AF4: lbu         $t4, 0x132($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X132);
    // 0x800B1AF8: nop

    // 0x800B1AFC: bne         $t4, $at, L_800B1B64
    if (ctx->r12 != ctx->r1) {
        // 0x800B1B00: nop
    
            goto L_800B1B64;
    }
    // 0x800B1B00: nop

    // 0x800B1B04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1B08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1B0C: jal         0x8001B44C
    // 0x800B1B10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x800B1B10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800B1B14: beq         $v0, $zero, L_800B1B64
    if (ctx->r2 == 0) {
        // 0x800B1B18: nop
    
            goto L_800B1B64;
    }
    // 0x800B1B18: nop

    // 0x800B1B1C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800B1B20: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800B1B24: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800B1B28: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B1B2C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B1B30: sh          $t8, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r24;
    // 0x800B1B34: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800B1B38: nop

    // 0x800B1B3C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800B1B40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1B44: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800B1B48: addiu       $t0, $t0, 0x7884
    ctx->r8 = ADD32(ctx->r8, 0X7884);
    // 0x800B1B4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1B50: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800B1B54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B1B58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B1B5C: jal         0x8001C0EC
    // 0x800B1B60: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x800B1B60: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_8:
L_800B1B64:
    // 0x800B1B64: b           L_800B1B6C
    // 0x800B1B68: nop

        goto L_800B1B6C;
    // 0x800B1B68: nop

L_800B1B6C:
    // 0x800B1B6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B1B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B1B74: jr          $ra
    // 0x800B1B78: nop

    return;
    // 0x800B1B78: nop

;}
RECOMP_FUNC void func_80090ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090ECC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090ED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090ED4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090ED8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090EDC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090EE0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090EE4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090EE8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090EEC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090EF0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090EF4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090EF8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090EFC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090F00: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090F04: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090F08: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090F0C: addiu       $a1, $a1, 0x14D4
    ctx->r5 = ADD32(ctx->r5, 0X14D4);
    // 0x80090F10: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090F14: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090F18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090F1C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090F20: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090F24: jal         0x80027464
    // 0x80090F28: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090F28: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090F2C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090F30: b           L_80090F38
    // 0x80090F34: nop

        goto L_80090F38;
    // 0x80090F34: nop

L_80090F38:
    // 0x80090F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090F3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090F40: jr          $ra
    // 0x80090F44: nop

    return;
    // 0x80090F44: nop

;}
RECOMP_FUNC void func_80093520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093520: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80093524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093528: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009352C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093530: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80093534: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80093538: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009353C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80093540: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80093544: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80093548: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009354C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80093550: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80093554: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80093558: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009355C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80093560: addiu       $a1, $a1, 0x1810
    ctx->r5 = ADD32(ctx->r5, 0X1810);
    // 0x80093564: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80093568: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009356C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80093570: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80093574: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80093578: jal         0x80027464
    // 0x8009357C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009357C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80093580: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80093584: b           L_8009358C
    // 0x80093588: nop

        goto L_8009358C;
    // 0x80093588: nop

L_8009358C:
    // 0x8009358C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093590: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80093594: jr          $ra
    // 0x80093598: nop

    return;
    // 0x80093598: nop

;}
RECOMP_FUNC void func_8007A1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A1A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A1AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A1B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007A1B4: lh          $a0, -0x1F00($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1F00);
    // 0x8007A1B8: jal         0x8001A928
    // 0x8007A1BC: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007A1BC: nop

    after_0:
    // 0x8007A1C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A1C4: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x8007A1C8: b           L_8007A1D0
    // 0x8007A1CC: nop

        goto L_8007A1D0;
    // 0x8007A1CC: nop

L_8007A1D0:
    // 0x8007A1D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A1D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A1D8: jr          $ra
    // 0x8007A1DC: nop

    return;
    // 0x8007A1DC: nop

;}
RECOMP_FUNC void func_80064000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064000: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80064004: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80064008: lb          $t6, 0x48B2($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X48B2);
    // 0x8006400C: nop

    // 0x80064010: bne         $t6, $zero, L_80064020
    if (ctx->r14 != 0) {
        // 0x80064014: nop
    
            goto L_80064020;
    }
    // 0x80064014: nop

    // 0x80064018: b           L_80064118
    // 0x8006401C: nop

        goto L_80064118;
    // 0x8006401C: nop

L_80064020:
    // 0x80064020: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80064024: lh          $t7, 0x48B0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X48B0);
    // 0x80064028: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8006402C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80064030: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80064034: lh          $t9, 0x48BE($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X48BE);
    // 0x80064038: nop

    // 0x8006403C: bgtz        $t9, L_80064080
    if (SIGNED(ctx->r25) > 0) {
        // 0x80064040: nop
    
            goto L_80064080;
    }
    // 0x80064040: nop

    // 0x80064044: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80064048: lh          $t0, 0x48B0($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X48B0);
    // 0x8006404C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80064050: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80064054: sh          $t1, 0x48B0($at)
    MEM_H(0X48B0, ctx->r1) = ctx->r9;
    // 0x80064058: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8006405C: lh          $t2, 0x48B0($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X48B0);
    // 0x80064060: nop

    // 0x80064064: slti        $at, $t2, 0x53
    ctx->r1 = SIGNED(ctx->r10) < 0X53 ? 1 : 0;
    // 0x80064068: bne         $at, $zero, L_80064080
    if (ctx->r1 != 0) {
        // 0x8006406C: nop
    
            goto L_80064080;
    }
    // 0x8006406C: nop

    // 0x80064070: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80064074: sb          $zero, 0x48B2($at)
    MEM_B(0X48B2, ctx->r1) = 0;
    // 0x80064078: b           L_80064118
    // 0x8006407C: nop

        goto L_80064118;
    // 0x8006407C: nop

L_80064080:
    // 0x80064080: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80064084: lh          $t3, 0x48B0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X48B0);
    // 0x80064088: nop

    // 0x8006408C: slti        $at, $t3, 0x53
    ctx->r1 = SIGNED(ctx->r11) < 0X53 ? 1 : 0;
    // 0x80064090: beq         $at, $zero, L_80064110
    if (ctx->r1 == 0) {
        // 0x80064094: sh          $t3, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r11;
            goto L_80064110;
    }
    // 0x80064094: sh          $t3, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r11;
L_80064098:
    // 0x80064098: lh          $t4, 0x6($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6);
    // 0x8006409C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800640A0: addiu       $t6, $t6, 0x48B8
    ctx->r14 = ADD32(ctx->r14, 0X48B8);
    // 0x800640A4: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x800640A8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800640AC: lh          $t8, 0x6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X6);
    // 0x800640B0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800640B4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800640B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800640BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800640C0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800640C4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800640C8: nop

    // 0x800640CC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800640D0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800640D4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800640D8: nop

    // 0x800640DC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800640E0: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x800640E4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800640E8: sh          $t0, 0x6($t7)
    MEM_H(0X6, ctx->r15) = ctx->r8;
    // 0x800640EC: nop

    // 0x800640F0: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x800640F4: nop

    // 0x800640F8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800640FC: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80064100: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80064104: slti        $at, $t4, 0x53
    ctx->r1 = SIGNED(ctx->r12) < 0X53 ? 1 : 0;
    // 0x80064108: bne         $at, $zero, L_80064098
    if (ctx->r1 != 0) {
        // 0x8006410C: sh          $t2, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r10;
            goto L_80064098;
    }
    // 0x8006410C: sh          $t2, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r10;
L_80064110:
    // 0x80064110: b           L_80064118
    // 0x80064114: nop

        goto L_80064118;
    // 0x80064114: nop

L_80064118:
    // 0x80064118: jr          $ra
    // 0x8006411C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006411C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8008E788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E788: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8008E78C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8008E790: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8008E794: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8008E798: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008E79C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8008E7A0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008E7A4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008E7A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008E7AC: lh          $t7, 0x4234($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4234);
    // 0x8008E7B0: addiu       $at, $zero, 0xF8
    ctx->r1 = ADD32(0, 0XF8);
    // 0x8008E7B4: bne         $t7, $at, L_8008E804
    if (ctx->r15 != ctx->r1) {
        // 0x8008E7B8: nop
    
            goto L_8008E804;
    }
    // 0x8008E7B8: nop

    // 0x8008E7BC: b           L_8008E7C4
    // 0x8008E7C0: nop

        goto L_8008E7C4;
    // 0x8008E7C0: nop

L_8008E7C4:
    // 0x8008E7C4: bne         $a1, $zero, L_8008E7E0
    if (ctx->r5 != 0) {
        // 0x8008E7C8: nop
    
            goto L_8008E7E0;
    }
    // 0x8008E7C8: nop

    // 0x8008E7CC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8008E7D0: addiu       $t8, $t8, 0x694C
    ctx->r24 = ADD32(ctx->r24, 0X694C);
    // 0x8008E7D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E7D8: b           L_8008E7F0
    // 0x8008E7DC: sw          $t8, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r24;
        goto L_8008E7F0;
    // 0x8008E7DC: sw          $t8, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r24;
L_8008E7E0:
    // 0x8008E7E0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8008E7E4: addiu       $t9, $t9, 0x6950
    ctx->r25 = ADD32(ctx->r25, 0X6950);
    // 0x8008E7E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E7EC: sw          $t9, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r25;
L_8008E7F0:
    // 0x8008E7F0: addiu       $t0, $zero, 0xA5
    ctx->r8 = ADD32(0, 0XA5);
    // 0x8008E7F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E7F8: sw          $t0, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r8;
    // 0x8008E7FC: b           L_8008E80C
    // 0x8008E800: nop

        goto L_8008E80C;
    // 0x8008E800: nop

L_8008E804:
    // 0x8008E804: b           L_8008E80C
    // 0x8008E808: nop

        goto L_8008E80C;
    // 0x8008E808: nop

L_8008E80C:
    // 0x8008E80C: jr          $ra
    // 0x8008E810: nop

    return;
    // 0x8008E810: nop

    // 0x8008E814: jr          $ra
    // 0x8008E818: nop

    return;
    // 0x8008E818: nop

;}
RECOMP_FUNC void func_800E2A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E2A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E2A08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2A0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2A10: jal         0x8002B0E4
    // 0x800E2A14: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800E2A14: nop

    after_0:
    // 0x800E2A18: b           L_800E2A20
    // 0x800E2A1C: nop

        goto L_800E2A20;
    // 0x800E2A1C: nop

L_800E2A20:
    // 0x800E2A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E2A24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E2A28: jr          $ra
    // 0x800E2A2C: nop

    return;
    // 0x800E2A2C: nop

;}
RECOMP_FUNC void func_800AD458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AD458: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AD45C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AD460: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800AD464: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800AD468: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800AD46C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800AD470: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800AD474: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800AD478: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800AD47C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AD480: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800AD484: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800AD488: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800AD48C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800AD490: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AD494: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800AD498: addiu       $a1, $a1, 0x3958
    ctx->r5 = ADD32(ctx->r5, 0X3958);
    // 0x800AD49C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800AD4A0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800AD4A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800AD4A8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800AD4AC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800AD4B0: jal         0x80027464
    // 0x800AD4B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800AD4B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800AD4B8: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800AD4BC: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800AD4C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AD4C4: beq         $t1, $at, L_800AD630
    if (ctx->r9 == ctx->r1) {
        // 0x800AD4C8: nop
    
            goto L_800AD630;
    }
    // 0x800AD4C8: nop

    // 0x800AD4CC: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800AD4D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AD4D4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800AD4D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AD4DC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800AD4E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AD4E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800AD4E8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800AD4EC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AD4F0: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800AD4F4: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x800AD4F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AD4FC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800AD500: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800AD504: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800AD508: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800AD50C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800AD510: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800AD514: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x800AD518: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x800AD51C: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x800AD520: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AD524: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800AD528: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800AD52C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800AD530: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800AD534: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800AD538: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800AD53C: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x800AD540: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800AD544: lw          $t0, 0x5100($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5100);
    // 0x800AD548: nop

    // 0x800AD54C: lh          $t1, 0xA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA);
    // 0x800AD550: nop

    // 0x800AD554: beq         $t1, $zero, L_800AD5EC
    if (ctx->r9 == 0) {
        // 0x800AD558: nop
    
            goto L_800AD5EC;
    }
    // 0x800AD558: nop

    // 0x800AD55C: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x800AD560: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AD564: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800AD568: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800AD56C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800AD570: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800AD574: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800AD578: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800AD57C: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x800AD580: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x800AD584: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800AD588: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800AD58C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800AD590: lh          $t5, 0x8($t7)
    ctx->r13 = MEM_H(ctx->r15, 0X8);
    // 0x800AD594: nop

    // 0x800AD598: bne         $t5, $at, L_800AD5A4
    if (ctx->r13 != ctx->r1) {
        // 0x800AD59C: sh          $t5, 0x24($sp)
        MEM_H(0X24, ctx->r29) = ctx->r13;
            goto L_800AD5A4;
    }
    // 0x800AD59C: sh          $t5, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r13;
    // 0x800AD5A0: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
L_800AD5A4:
    // 0x800AD5A4: lh          $t8, 0x24($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X24);
    // 0x800AD5A8: nop

    // 0x800AD5AC: bgez        $t8, L_800AD5C0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800AD5B0: andi        $t9, $t8, 0x3
        ctx->r25 = ctx->r24 & 0X3;
            goto L_800AD5C0;
    }
    // 0x800AD5B0: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x800AD5B4: beq         $t9, $zero, L_800AD5C0
    if (ctx->r25 == 0) {
        // 0x800AD5B8: nop
    
            goto L_800AD5C0;
    }
    // 0x800AD5B8: nop

    // 0x800AD5BC: addiu       $t9, $t9, -0x4
    ctx->r25 = ADD32(ctx->r25, -0X4);
L_800AD5C0:
    // 0x800AD5C0: sh          $t9, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r25;
    // 0x800AD5C4: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x800AD5C8: lh          $t6, 0x24($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X24);
    // 0x800AD5CC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800AD5D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800AD5D4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800AD5D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800AD5DC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800AD5E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AD5E4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800AD5E8: sh          $t6, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r14;
L_800AD5EC:
    // 0x800AD5EC: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x800AD5F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AD5F4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800AD5F8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AD5FC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800AD600: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AD604: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800AD608: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800AD60C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800AD610: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800AD614: addiu       $t4, $t4, 0x7874
    ctx->r12 = ADD32(ctx->r12, 0X7874);
    // 0x800AD618: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800AD61C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800AD620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AD624: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800AD628: jal         0x8001C0EC
    // 0x800AD62C: addiu       $a3, $zero, 0x99
    ctx->r7 = ADD32(0, 0X99);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800AD62C: addiu       $a3, $zero, 0x99
    ctx->r7 = ADD32(0, 0X99);
    after_1:
L_800AD630:
    // 0x800AD630: b           L_800AD638
    // 0x800AD634: nop

        goto L_800AD638;
    // 0x800AD634: nop

L_800AD638:
    // 0x800AD638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD63C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AD640: jr          $ra
    // 0x800AD644: nop

    return;
    // 0x800AD644: nop

;}
RECOMP_FUNC void func_80066AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066AE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80066AEC: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x80066AF0: lw          $t7, 0xE0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XE0);
    // 0x80066AF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066AF8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80066AFC: nop

    // 0x80066B00: sw          $t8, 0x7778($at)
    MEM_W(0X7778, ctx->r1) = ctx->r24;
    // 0x80066B04: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066B08: lw          $t9, 0x7778($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7778);
    // 0x80066B0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066B10: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x80066B14: nop

    // 0x80066B18: sh          $t0, 0x7788($at)
    MEM_H(0X7788, ctx->r1) = ctx->r8;
    // 0x80066B1C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066B20: lw          $t1, 0x7778($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7778);
    // 0x80066B24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066B28: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x80066B2C: nop

    // 0x80066B30: sh          $t2, 0x7798($at)
    MEM_H(0X7798, ctx->r1) = ctx->r10;
    // 0x80066B34: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80066B38: lw          $t3, 0x7778($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7778);
    // 0x80066B3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066B40: lh          $t4, 0x4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X4);
    // 0x80066B44: nop

    // 0x80066B48: sh          $t4, 0x77A8($at)
    MEM_H(0X77A8, ctx->r1) = ctx->r12;
    // 0x80066B4C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066B50: lw          $t5, 0x7778($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7778);
    // 0x80066B54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066B58: lh          $t6, 0x6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X6);
    // 0x80066B5C: nop

    // 0x80066B60: sh          $t6, 0x77B8($at)
    MEM_H(0X77B8, ctx->r1) = ctx->r14;
    // 0x80066B64: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80066B68: lw          $t7, 0x7778($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7778);
    // 0x80066B6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066B70: lh          $t8, 0x8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8);
    // 0x80066B74: nop

    // 0x80066B78: sh          $t8, 0x77C8($at)
    MEM_H(0X77C8, ctx->r1) = ctx->r24;
    // 0x80066B7C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066B80: lw          $t9, 0x7778($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7778);
    // 0x80066B84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066B88: lh          $t0, 0xA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA);
    // 0x80066B8C: nop

    // 0x80066B90: sh          $t0, 0x77D8($at)
    MEM_H(0X77D8, ctx->r1) = ctx->r8;
    // 0x80066B94: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066B98: lw          $t1, 0x7778($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7778);
    // 0x80066B9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066BA0: lh          $t2, 0xC($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC);
    // 0x80066BA4: nop

    // 0x80066BA8: sh          $t2, 0x77E8($at)
    MEM_H(0X77E8, ctx->r1) = ctx->r10;
    // 0x80066BAC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80066BB0: lw          $t3, 0x7778($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7778);
    // 0x80066BB4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066BB8: lh          $t4, 0xE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE);
    // 0x80066BBC: nop

    // 0x80066BC0: sh          $t4, 0x78F0($at)
    MEM_H(0X78F0, ctx->r1) = ctx->r12;
    // 0x80066BC4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066BC8: lw          $t5, 0x7778($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7778);
    // 0x80066BCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066BD0: lh          $t6, 0x10($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X10);
    // 0x80066BD4: nop

    // 0x80066BD8: sh          $t6, 0x78F8($at)
    MEM_H(0X78F8, ctx->r1) = ctx->r14;
    // 0x80066BDC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80066BE0: lw          $t7, 0x7778($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7778);
    // 0x80066BE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066BE8: lh          $t8, 0x12($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X12);
    // 0x80066BEC: nop

    // 0x80066BF0: sh          $t8, 0x7900($at)
    MEM_H(0X7900, ctx->r1) = ctx->r24;
    // 0x80066BF4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066BF8: lw          $t9, 0x7778($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7778);
    // 0x80066BFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066C00: lh          $t0, 0x14($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X14);
    // 0x80066C04: nop

    // 0x80066C08: sh          $t0, 0x7908($at)
    MEM_H(0X7908, ctx->r1) = ctx->r8;
    // 0x80066C0C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066C10: lw          $t1, 0x7778($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7778);
    // 0x80066C14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066C18: lh          $t2, 0x16($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X16);
    // 0x80066C1C: nop

    // 0x80066C20: sh          $t2, 0x790C($at)
    MEM_H(0X790C, ctx->r1) = ctx->r10;
    // 0x80066C24: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80066C28: lw          $t3, 0x7778($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7778);
    // 0x80066C2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066C30: lh          $t4, 0x18($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X18);
    // 0x80066C34: nop

    // 0x80066C38: sh          $t4, 0x7910($at)
    MEM_H(0X7910, ctx->r1) = ctx->r12;
    // 0x80066C3C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066C40: lw          $t5, 0x7778($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7778);
    // 0x80066C44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066C48: lh          $t6, 0x1A($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X1A);
    // 0x80066C4C: nop

    // 0x80066C50: sh          $t6, 0x7914($at)
    MEM_H(0X7914, ctx->r1) = ctx->r14;
    // 0x80066C54: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80066C58: lw          $t7, 0x7778($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7778);
    // 0x80066C5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066C60: lh          $t8, 0x1C($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X1C);
    // 0x80066C64: nop

    // 0x80066C68: sh          $t8, 0x7918($at)
    MEM_H(0X7918, ctx->r1) = ctx->r24;
    // 0x80066C6C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066C70: lw          $t9, 0x7778($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7778);
    // 0x80066C74: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066C78: lbu         $t0, 0x24($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X24);
    // 0x80066C7C: addiu       $t1, $t1, 0x791C
    ctx->r9 = ADD32(ctx->r9, 0X791C);
    // 0x80066C80: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
    // 0x80066C84: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80066C88: lw          $t2, 0x7778($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7778);
    // 0x80066C8C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80066C90: lbu         $t3, 0x25($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X25);
    // 0x80066C94: addiu       $t4, $t4, 0x791C
    ctx->r12 = ADD32(ctx->r12, 0X791C);
    // 0x80066C98: sb          $t3, 0x1($t4)
    MEM_B(0X1, ctx->r12) = ctx->r11;
    // 0x80066C9C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066CA0: lw          $t5, 0x7778($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7778);
    // 0x80066CA4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80066CA8: lbu         $t6, 0x26($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X26);
    // 0x80066CAC: addiu       $t7, $t7, 0x791C
    ctx->r15 = ADD32(ctx->r15, 0X791C);
    // 0x80066CB0: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
    // 0x80066CB4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80066CB8: lw          $t8, 0x7778($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7778);
    // 0x80066CBC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80066CC0: lbu         $t9, 0x27($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X27);
    // 0x80066CC4: addiu       $t0, $t0, 0x791C
    ctx->r8 = ADD32(ctx->r8, 0X791C);
    // 0x80066CC8: sb          $t9, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r25;
    // 0x80066CCC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066CD0: lw          $t1, 0x7778($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7778);
    // 0x80066CD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066CD8: lbu         $t2, 0x28($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X28);
    // 0x80066CDC: nop

    // 0x80066CE0: sb          $t2, 0x7921($at)
    MEM_B(0X7921, ctx->r1) = ctx->r10;
    // 0x80066CE4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80066CE8: lw          $t3, 0x7778($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7778);
    // 0x80066CEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066CF0: lbu         $t4, 0x2A($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X2A);
    // 0x80066CF4: nop

    // 0x80066CF8: sb          $t4, 0x7928($at)
    MEM_B(0X7928, ctx->r1) = ctx->r12;
    // 0x80066CFC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066D00: lw          $t5, 0x7778($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7778);
    // 0x80066D04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066D08: lbu         $t6, 0x2B($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X2B);
    // 0x80066D0C: nop

    // 0x80066D10: sb          $t6, 0x792C($at)
    MEM_B(0X792C, ctx->r1) = ctx->r14;
    // 0x80066D14: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80066D18: lw          $t7, 0x7778($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7778);
    // 0x80066D1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066D20: lbu         $t8, 0x2C($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2C);
    // 0x80066D24: nop

    // 0x80066D28: sb          $t8, 0x792E($at)
    MEM_B(0X792E, ctx->r1) = ctx->r24;
    // 0x80066D2C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066D30: lw          $t9, 0x7778($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7778);
    // 0x80066D34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066D38: lbu         $t0, 0x2D($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2D);
    // 0x80066D3C: nop

    // 0x80066D40: sb          $t0, 0x7930($at)
    MEM_B(0X7930, ctx->r1) = ctx->r8;
    // 0x80066D44: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066D48: lw          $t1, 0x7778($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7778);
    // 0x80066D4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066D50: lbu         $t2, 0x2E($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X2E);
    // 0x80066D54: nop

    // 0x80066D58: sb          $t2, 0x7932($at)
    MEM_B(0X7932, ctx->r1) = ctx->r10;
    // 0x80066D5C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80066D60: lw          $t3, 0x7778($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7778);
    // 0x80066D64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066D68: lbu         $t4, 0x2F($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X2F);
    // 0x80066D6C: nop

    // 0x80066D70: sb          $t4, 0x7934($at)
    MEM_B(0X7934, ctx->r1) = ctx->r12;
    // 0x80066D74: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066D78: lw          $t5, 0x7778($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7778);
    // 0x80066D7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066D80: lbu         $t6, 0x30($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X30);
    // 0x80066D84: nop

    // 0x80066D88: sb          $t6, 0x7938($at)
    MEM_B(0X7938, ctx->r1) = ctx->r14;
    // 0x80066D8C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80066D90: lw          $t7, 0x7778($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7778);
    // 0x80066D94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066D98: lbu         $t8, 0x31($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X31);
    // 0x80066D9C: nop

    // 0x80066DA0: sb          $t8, 0x793A($at)
    MEM_B(0X793A, ctx->r1) = ctx->r24;
    // 0x80066DA4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066DA8: lw          $t9, 0x7778($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7778);
    // 0x80066DAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066DB0: lbu         $t0, 0x32($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X32);
    // 0x80066DB4: nop

    // 0x80066DB8: sb          $t0, 0x793E($at)
    MEM_B(0X793E, ctx->r1) = ctx->r8;
    // 0x80066DBC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066DC0: lw          $t1, 0x7778($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7778);
    // 0x80066DC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066DC8: lbu         $t2, 0x33($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X33);
    // 0x80066DCC: nop

    // 0x80066DD0: sb          $t2, 0x7940($at)
    MEM_B(0X7940, ctx->r1) = ctx->r10;
    // 0x80066DD4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80066DD8: lw          $t3, 0x7778($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7778);
    // 0x80066DDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066DE0: lh          $t4, 0x34($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X34);
    // 0x80066DE4: nop

    // 0x80066DE8: sh          $t4, 0x7944($at)
    MEM_H(0X7944, ctx->r1) = ctx->r12;
    // 0x80066DEC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066DF0: lw          $t5, 0x7778($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7778);
    // 0x80066DF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066DF8: lh          $t6, 0x36($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X36);
    // 0x80066DFC: nop

    // 0x80066E00: sh          $t6, 0x7948($at)
    MEM_H(0X7948, ctx->r1) = ctx->r14;
    // 0x80066E04: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80066E08: lw          $t7, 0x7778($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7778);
    // 0x80066E0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066E10: lw          $t8, 0x38($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X38);
    // 0x80066E14: nop

    // 0x80066E18: sw          $t8, 0x794C($at)
    MEM_W(0X794C, ctx->r1) = ctx->r24;
    // 0x80066E1C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066E20: lw          $t9, 0x7778($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7778);
    // 0x80066E24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066E28: lw          $t0, 0x3C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X3C);
    // 0x80066E2C: nop

    // 0x80066E30: sw          $t0, 0x7954($at)
    MEM_W(0X7954, ctx->r1) = ctx->r8;
    // 0x80066E34: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066E38: lw          $t1, 0x7778($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7778);
    // 0x80066E3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066E40: lw          $t2, 0x40($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X40);
    // 0x80066E44: nop

    // 0x80066E48: sw          $t2, 0x795C($at)
    MEM_W(0X795C, ctx->r1) = ctx->r10;
    // 0x80066E4C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80066E50: lw          $t3, 0x7778($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7778);
    // 0x80066E54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066E58: lw          $t4, 0x44($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X44);
    // 0x80066E5C: nop

    // 0x80066E60: sw          $t4, 0x7964($at)
    MEM_W(0X7964, ctx->r1) = ctx->r12;
    // 0x80066E64: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066E68: lw          $t5, -0x1BD8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1BD8);
    // 0x80066E6C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80066E70: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80066E74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80066E78: lw          $t7, -0x7DC8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7DC8);
    // 0x80066E7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80066E80: lw          $t8, 0x20($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X20);
    // 0x80066E84: nop

    // 0x80066E88: beq         $t8, $at, L_80066EA4
    if (ctx->r24 == ctx->r1) {
        // 0x80066E8C: nop
    
            goto L_80066EA4;
    }
    // 0x80066E8C: nop

    // 0x80066E90: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80066E94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066E98: sb          $t9, 0x7928($at)
    MEM_B(0X7928, ctx->r1) = ctx->r25;
    // 0x80066E9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066EA0: sb          $zero, 0x792C($at)
    MEM_B(0X792C, ctx->r1) = 0;
L_80066EA4:
    // 0x80066EA4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80066EA8: lw          $t0, -0x1BD8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1BD8);
    // 0x80066EAC: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80066EB0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80066EB4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80066EB8: lw          $t2, -0x4C04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4C04);
    // 0x80066EBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066EC0: lbu         $t3, 0x4($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X4);
    // 0x80066EC4: nop

    // 0x80066EC8: sb          $t3, 0x7974($at)
    MEM_B(0X7974, ctx->r1) = ctx->r11;
    // 0x80066ECC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80066ED0: addiu       $t4, $t4, -0x1BB0
    ctx->r12 = ADD32(ctx->r12, -0X1BB0);
    // 0x80066ED4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066ED8: sw          $t4, 0x796C($at)
    MEM_W(0X796C, ctx->r1) = ctx->r12;
    // 0x80066EDC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066EE0: lw          $t5, -0x1BD8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1BD8);
    // 0x80066EE4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80066EE8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80066EEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80066EF0: lw          $t7, -0x4C04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4C04);
    // 0x80066EF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066EF8: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x80066EFC: nop

    // 0x80066F00: sw          $t8, 0x797C($at)
    MEM_W(0X797C, ctx->r1) = ctx->r24;
    // 0x80066F04: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066F08: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x80066F0C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80066F10: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80066F14: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80066F18: lw          $t1, -0x4C04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4C04);
    // 0x80066F1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066F20: lw          $t2, 0x1C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X1C);
    // 0x80066F24: nop

    // 0x80066F28: sw          $t2, 0x7984($at)
    MEM_W(0X7984, ctx->r1) = ctx->r10;
    // 0x80066F2C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80066F30: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x80066F34: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80066F38: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80066F3C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80066F40: lw          $t5, -0x4C04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4C04);
    // 0x80066F44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066F48: lh          $t6, 0xC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC);
    // 0x80066F4C: nop

    // 0x80066F50: sh          $t6, 0x798C($at)
    MEM_H(0X798C, ctx->r1) = ctx->r14;
    // 0x80066F54: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80066F58: lw          $t7, -0x1BD8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1BD8);
    // 0x80066F5C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80066F60: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80066F64: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80066F68: lw          $t9, -0x4C04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4C04);
    // 0x80066F6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066F70: lh          $t0, 0xE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE);
    // 0x80066F74: nop

    // 0x80066F78: sh          $t0, 0x7994($at)
    MEM_H(0X7994, ctx->r1) = ctx->r8;
    // 0x80066F7C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066F80: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x80066F84: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80066F88: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80066F8C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80066F90: lw          $t3, -0x4C04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4C04);
    // 0x80066F94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066F98: lh          $t4, 0x10($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X10);
    // 0x80066F9C: nop

    // 0x80066FA0: sh          $t4, 0x799C($at)
    MEM_H(0X799C, ctx->r1) = ctx->r12;
    // 0x80066FA4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066FA8: lw          $t5, -0x1BD8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1BD8);
    // 0x80066FAC: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80066FB0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80066FB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80066FB8: lw          $t7, -0x4C04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4C04);
    // 0x80066FBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066FC0: lh          $t8, 0x12($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X12);
    // 0x80066FC4: nop

    // 0x80066FC8: sh          $t8, 0x79A4($at)
    MEM_H(0X79A4, ctx->r1) = ctx->r24;
    // 0x80066FCC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066FD0: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x80066FD4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80066FD8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80066FDC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80066FE0: lw          $t1, -0x4C04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4C04);
    // 0x80066FE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066FE8: lh          $t2, 0x14($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X14);
    // 0x80066FEC: nop

    // 0x80066FF0: sh          $t2, 0x79AC($at)
    MEM_H(0X79AC, ctx->r1) = ctx->r10;
    // 0x80066FF4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80066FF8: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x80066FFC: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80067000: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80067004: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80067008: lw          $t5, -0x4C04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4C04);
    // 0x8006700C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067010: lh          $t6, 0x16($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X16);
    // 0x80067014: nop

    // 0x80067018: sh          $t6, 0x79B8($at)
    MEM_H(0X79B8, ctx->r1) = ctx->r14;
    // 0x8006701C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80067020: lw          $t7, -0x1BD8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1BD8);
    // 0x80067024: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80067028: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006702C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80067030: lw          $t9, -0x4C04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4C04);
    // 0x80067034: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067038: lwc1        $f4, 0x2C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x8006703C: nop

    // 0x80067040: swc1        $f4, 0x79C8($at)
    MEM_W(0X79C8, ctx->r1) = ctx->f4.u32l;
    // 0x80067044: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80067048: lw          $t0, -0x1BD8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1BD8);
    // 0x8006704C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80067050: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80067054: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80067058: lw          $t2, -0x4C04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4C04);
    // 0x8006705C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067060: lbu         $t3, 0x6($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X6);
    // 0x80067064: nop

    // 0x80067068: sb          $t3, 0x79E0($at)
    MEM_B(0X79E0, ctx->r1) = ctx->r11;
    // 0x8006706C: jr          $ra
    // 0x80067070: nop

    return;
    // 0x80067070: nop

    // 0x80067074: jr          $ra
    // 0x80067078: nop

    return;
    // 0x80067078: nop

;}
RECOMP_FUNC void func_80092CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092CCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092CD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092CD4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092CD8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092CDC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092CE0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092CE4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092CE8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092CEC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092CF0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092CF4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092CF8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092CFC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092D00: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092D04: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092D08: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092D0C: addiu       $a1, $a1, 0x1768
    ctx->r5 = ADD32(ctx->r5, 0X1768);
    // 0x80092D10: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092D14: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092D18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092D1C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092D20: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092D24: jal         0x80027464
    // 0x80092D28: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092D28: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092D2C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092D30: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80092D34: addiu       $t1, $t1, 0x6F48
    ctx->r9 = ADD32(ctx->r9, 0X6F48);
    // 0x80092D38: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092D3C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80092D40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092D44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80092D48: jal         0x8001C0EC
    // 0x80092D4C: addiu       $a3, $zero, 0x27F
    ctx->r7 = ADD32(0, 0X27F);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80092D4C: addiu       $a3, $zero, 0x27F
    ctx->r7 = ADD32(0, 0X27F);
    after_1:
    // 0x80092D50: b           L_80092D58
    // 0x80092D54: nop

        goto L_80092D58;
    // 0x80092D54: nop

L_80092D58:
    // 0x80092D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092D5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092D60: jr          $ra
    // 0x80092D64: nop

    return;
    // 0x80092D64: nop

;}
RECOMP_FUNC void func_800AB450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB450: jr          $ra
    // 0x800AB454: nop

    return;
    // 0x800AB454: nop

    // 0x800AB458: jr          $ra
    // 0x800AB45C: nop

    return;
    // 0x800AB45C: nop

;}
RECOMP_FUNC void func_800E39F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E39F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E39F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E39FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E3A00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E3A04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E3A08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3A0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3A10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E3A14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3A18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3A1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E3A20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E3A24: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E3A28: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E3A2C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E3A30: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800E3A34: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800E3A38: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x800E3A3C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800E3A40: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800E3A44: addiu       $a1, $a1, 0x4390
    ctx->r5 = ADD32(ctx->r5, 0X4390);
    // 0x800E3A48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E3A4C: jal         0x80027464
    // 0x800E3A50: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E3A50: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800E3A54: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800E3A58: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800E3A5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E3A60: beq         $t1, $at, L_800E3B28
    if (ctx->r9 == ctx->r1) {
        // 0x800E3A64: nop
    
            goto L_800E3B28;
    }
    // 0x800E3A64: nop

    // 0x800E3A68: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800E3A6C: addiu       $t2, $t2, -0x700C
    ctx->r10 = ADD32(ctx->r10, -0X700C);
    // 0x800E3A70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E3A74: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800E3A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E3A7C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800E3A80: jal         0x8001C0EC
    // 0x800E3A84: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800E3A84: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_1:
    // 0x800E3A88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E3A8C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E3A90: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800E3A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E3A98: jal         0x8001ABF4
    // 0x800E3A9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E3A9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E3AA0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E3AA4: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800E3AA8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E3AAC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E3AB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E3AB4: jal         0x8001ABF4
    // 0x800E3AB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800E3AB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800E3ABC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800E3AC0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E3AC4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800E3AC8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800E3ACC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E3AD0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800E3AD4: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800E3AD8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E3ADC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E3AE0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800E3AE4: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x800E3AE8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800E3AEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E3AF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3AF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3AF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E3AFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3B00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3B04: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E3B08: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800E3B0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3B10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3B14: jal         0x8002B114
    // 0x800E3B18: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x800E3B18: nop

    after_4:
    // 0x800E3B1C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E3B20: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x800E3B24: sh          $t8, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r24;
L_800E3B28:
    // 0x800E3B28: b           L_800E3B30
    // 0x800E3B2C: nop

        goto L_800E3B30;
    // 0x800E3B2C: nop

L_800E3B30:
    // 0x800E3B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E3B34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E3B38: jr          $ra
    // 0x800E3B3C: nop

    return;
    // 0x800E3B3C: nop

;}
RECOMP_FUNC void func_800D4D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4D74: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800D4D78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D4D7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D4D80: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D4D84: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D4D88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D4D8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4D90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D4D94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4D98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D4D9C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D4DA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D4DA4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800D4DA8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4DAC: nop

    // 0x800D4DB0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D4DB4: nop

    // 0x800D4DB8: bne         $t1, $zero, L_800D4DE8
    if (ctx->r9 != 0) {
        // 0x800D4DBC: nop
    
            goto L_800D4DE8;
    }
    // 0x800D4DBC: nop

    // 0x800D4DC0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4DC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D4DC8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D4DCC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4DD0: nop

    // 0x800D4DD4: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x800D4DD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4DDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4DE0: jal         0x8001BBDC
    // 0x800D4DE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800D4DE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800D4DE8:
    // 0x800D4DE8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4DEC: nop

    // 0x800D4DF0: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800D4DF4: nop

    // 0x800D4DF8: bne         $t6, $zero, L_800D55A8
    if (ctx->r14 != 0) {
        // 0x800D4DFC: nop
    
            goto L_800D55A8;
    }
    // 0x800D4DFC: nop

    // 0x800D4E00: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x800D4E04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D4E08: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4E0C: nop

    // 0x800D4E10: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800D4E14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D4E18: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4E1C: nop

    // 0x800D4E20: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
    // 0x800D4E24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4E28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4E2C: jal         0x80029C40
    // 0x800D4E30: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800D4E30: nop

    after_1:
    // 0x800D4E34: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4E38: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D4E3C: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800D4E40: lwc1        $f17, 0x50B8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X50B8);
    // 0x800D4E44: lwc1        $f16, 0x50BC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X50BC);
    // 0x800D4E48: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800D4E4C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800D4E50: jal         0x80034970
    // 0x800D4E54: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x800D4E54: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x800D4E58: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D4E5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D4E60: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4E64: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800D4E68: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800D4E6C: nop

    // 0x800D4E70: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800D4E74: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800D4E78: nop

    // 0x800D4E7C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800D4E80: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D4E84: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D4E88: nop

    // 0x800D4E8C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800D4E90: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x800D4E94: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800D4E98: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x800D4E9C: nop

    // 0x800D4EA0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4EA4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D4EA8: lwc1        $f18, 0x3C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800D4EAC: lwc1        $f7, 0x50C0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X50C0);
    // 0x800D4EB0: lwc1        $f6, 0x50C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X50C4);
    // 0x800D4EB4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800D4EB8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x800D4EBC: jal         0x80036570
    // 0x800D4EC0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x800D4EC0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_3:
    // 0x800D4EC4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D4EC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D4ECC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4ED0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800D4ED4: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x800D4ED8: nop

    // 0x800D4EDC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800D4EE0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800D4EE4: nop

    // 0x800D4EE8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800D4EEC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D4EF0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D4EF4: nop

    // 0x800D4EF8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800D4EFC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x800D4F00: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800D4F04: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x800D4F08: nop

    // 0x800D4F0C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4F10: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D4F14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D4F18: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800D4F1C: nop

    // 0x800D4F20: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800D4F24: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800D4F28: nop

    // 0x800D4F2C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800D4F30: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D4F34: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D4F38: nop

    // 0x800D4F3C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800D4F40: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x800D4F44: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800D4F48: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800D4F4C: nop

    // 0x800D4F50: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800D4F54: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800D4F58: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800D4F5C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D4F60: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D4F64: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800D4F68: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800D4F6C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800D4F70: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D4F74: jal         0x80067748
    // 0x800D4F78: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    func_80067748(rdram, ctx);
        goto after_4;
    // 0x800D4F78: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x800D4F7C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800D4F80: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x800D4F84: nop

    // 0x800D4F88: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x800D4F8C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x800D4F90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D4F94: nop

    // 0x800D4F98: bne         $t5, $zero, L_800D50A0
    if (ctx->r13 != 0) {
        // 0x800D4F9C: nop
    
            goto L_800D50A0;
    }
    // 0x800D4F9C: nop

    // 0x800D4FA0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D4FA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800D4FA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D4FAC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800D4FB0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800D4FB4: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x800D4FB8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800D4FBC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D4FC0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D4FC4: nop

    // 0x800D4FC8: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800D4FCC: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x800D4FD0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800D4FD4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800D4FD8: nop

    // 0x800D4FDC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D4FE0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4FE4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800D4FE8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D4FEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D4FF0: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800D4FF4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D4FF8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800D4FFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D5000: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x800D5004: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x800D5008: nop

    // 0x800D500C: bc1f        L_800D502C
    if (!c1cs) {
        // 0x800D5010: nop
    
            goto L_800D502C;
    }
    // 0x800D5010: nop

    // 0x800D5014: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5018: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800D501C: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800D5020: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5024: b           L_800D5098
    // 0x800D5028: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800D5098;
    // 0x800D5028: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800D502C:
    // 0x800D502C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D5030: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D5034: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5038: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D503C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800D5040: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800D5044: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D5048: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800D504C: jal         0x800295C0
    // 0x800D5050: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x800D5050: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x800D5054: beq         $v0, $zero, L_800D506C
    if (ctx->r2 == 0) {
        // 0x800D5058: nop
    
            goto L_800D506C;
    }
    // 0x800D5058: nop

    // 0x800D505C: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800D5060: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5064: b           L_800D507C
    // 0x800D5068: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
        goto L_800D507C;
    // 0x800D5068: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
L_800D506C:
    // 0x800D506C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800D5070: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5074: nop

    // 0x800D5078: swc1        $f10, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f10.u32l;
L_800D507C:
    // 0x800D507C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5080: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D5084: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D5088: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800D508C: nop

    // 0x800D5090: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800D5094: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
L_800D5098:
    // 0x800D5098: b           L_800D55A0
    // 0x800D509C: nop

        goto L_800D55A0;
    // 0x800D509C: nop

L_800D50A0:
    // 0x800D50A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D50A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D50A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D50AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D50B0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800D50B4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800D50B8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D50BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800D50C0: jal         0x800295C0
    // 0x800D50C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x800D50C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x800D50C8: beq         $v0, $zero, L_800D50E0
    if (ctx->r2 == 0) {
        // 0x800D50CC: nop
    
            goto L_800D50E0;
    }
    // 0x800D50CC: nop

    // 0x800D50D0: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800D50D4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D50D8: b           L_800D50F0
    // 0x800D50DC: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
        goto L_800D50F0;
    // 0x800D50DC: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_800D50E0:
    // 0x800D50E0: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800D50E4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D50E8: nop

    // 0x800D50EC: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
L_800D50F0:
    // 0x800D50F0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D50F4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D50F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D50FC: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800D5100: nop

    // 0x800D5104: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800D5108: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
    // 0x800D510C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5110: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x800D5114: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x800D5118: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D511C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5120: nop

    // 0x800D5124: swc1        $f6, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f6.u32l;
    // 0x800D5128: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D512C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5130: nop

    // 0x800D5134: swc1        $f10, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f10.u32l;
    // 0x800D5138: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D513C: nop

    // 0x800D5140: lwc1        $f16, 0x2C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800D5144: nop

    // 0x800D5148: swc1        $f16, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f16.u32l;
    // 0x800D514C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5150: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800D5154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D5158: lwc1        $f18, 0x3C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800D515C: nop

    // 0x800D5160: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800D5164: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800D5168: nop

    // 0x800D516C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800D5170: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D5174: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D5178: nop

    // 0x800D517C: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800D5180: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800D5184: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800D5188: sh          $t8, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r24;
    // 0x800D518C: nop

    // 0x800D5190: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5194: nop

    // 0x800D5198: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800D519C: nop

    // 0x800D51A0: bgez        $t0, L_800D51A8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800D51A4: nop
    
            goto L_800D51A8;
    }
    // 0x800D51A4: nop

L_800D51A8:
    // 0x800D51A8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D51AC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800D51B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D51B4: lwc1        $f10, 0x3C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800D51B8: nop

    // 0x800D51BC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800D51C0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800D51C4: nop

    // 0x800D51C8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800D51CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D51D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D51D4: nop

    // 0x800D51D8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800D51DC: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x800D51E0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800D51E4: sh          $t3, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r11;
    // 0x800D51E8: nop

    // 0x800D51EC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D51F0: nop

    // 0x800D51F4: lh          $t5, 0xAA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAA);
    // 0x800D51F8: nop

    // 0x800D51FC: slti        $at, $t5, 0x168
    ctx->r1 = SIGNED(ctx->r13) < 0X168 ? 1 : 0;
    // 0x800D5200: bne         $at, $zero, L_800D5208
    if (ctx->r1 != 0) {
        // 0x800D5204: nop
    
            goto L_800D5208;
    }
    // 0x800D5204: nop

L_800D5208:
    // 0x800D5208: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D520C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D5210: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800D5214: lwc1        $f11, 0x50C8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X50C8);
    // 0x800D5218: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800D521C: lwc1        $f10, 0x50CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X50CC);
    // 0x800D5220: cvt.d.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.d = CVT_D_W(ctx->f8.u32l);
    // 0x800D5224: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x800D5228: jal         0x80034970
    // 0x800D522C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x800D522C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_7:
    // 0x800D5230: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x800D5234: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D5238: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D523C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800D5240: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800D5244: nop

    // 0x800D5248: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800D524C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800D5250: nop

    // 0x800D5254: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800D5258: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D525C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D5260: nop

    // 0x800D5264: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800D5268: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x800D526C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800D5270: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x800D5274: nop

    // 0x800D5278: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D527C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D5280: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800D5284: lwc1        $f5, 0x50D0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X50D0);
    // 0x800D5288: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800D528C: lwc1        $f4, 0x50D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X50D4);
    // 0x800D5290: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x800D5294: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x800D5298: jal         0x80036570
    // 0x800D529C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_8;
    // 0x800D529C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_8:
    // 0x800D52A0: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x800D52A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D52A8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D52AC: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800D52B0: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800D52B4: nop

    // 0x800D52B8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800D52BC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800D52C0: nop

    // 0x800D52C4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800D52C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D52CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D52D0: nop

    // 0x800D52D4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800D52D8: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x800D52DC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800D52E0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x800D52E4: nop

    // 0x800D52E8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D52EC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D52F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D52F4: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800D52F8: nop

    // 0x800D52FC: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x800D5300: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800D5304: nop

    // 0x800D5308: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800D530C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D5310: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D5314: nop

    // 0x800D5318: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800D531C: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x800D5320: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800D5324: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800D5328: nop

    // 0x800D532C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800D5330: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800D5334: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800D5338: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D533C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D5340: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800D5344: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800D5348: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800D534C: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D5350: jal         0x80067748
    // 0x800D5354: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    func_80067748(rdram, ctx);
        goto after_9;
    // 0x800D5354: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_9:
    // 0x800D5358: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800D535C: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x800D5360: nop

    // 0x800D5364: andi        $t1, $t3, 0x1
    ctx->r9 = ctx->r11 & 0X1;
    // 0x800D5368: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800D536C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D5370: nop

    // 0x800D5374: bne         $t4, $zero, L_800D53CC
    if (ctx->r12 != 0) {
        // 0x800D5378: nop
    
            goto L_800D53CC;
    }
    // 0x800D5378: nop

    // 0x800D537C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D5380: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D5384: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5388: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800D538C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800D5390: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800D5394: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800D5398: lwc1        $f18, 0x7760($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x800D539C: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x800D53A0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D53A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D53A8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800D53AC: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x800D53B0: nop

    // 0x800D53B4: bc1f        L_800D53CC
    if (!c1cs) {
        // 0x800D53B8: nop
    
            goto L_800D53CC;
    }
    // 0x800D53B8: nop

    // 0x800D53BC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D53C0: addiu       $t8, $zero, -0xA
    ctx->r24 = ADD32(0, -0XA);
    // 0x800D53C4: b           L_800D55A0
    // 0x800D53C8: sh          $t8, 0xB6($t6)
    MEM_H(0XB6, ctx->r14) = ctx->r24;
        goto L_800D55A0;
    // 0x800D53C8: sh          $t8, 0xB6($t6)
    MEM_H(0XB6, ctx->r14) = ctx->r24;
L_800D53CC:
    // 0x800D53CC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D53D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D53D4: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x800D53D8: lwc1        $f17, 0x50D8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X50D8);
    // 0x800D53DC: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800D53E0: lwc1        $f16, 0x50DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X50DC);
    // 0x800D53E4: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x800D53E8: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800D53EC: jal         0x80034970
    // 0x800D53F0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_10;
    // 0x800D53F0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_10:
    // 0x800D53F4: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x800D53F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D53FC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5400: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800D5404: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800D5408: nop

    // 0x800D540C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800D5410: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800D5414: nop

    // 0x800D5418: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800D541C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D5420: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D5424: nop

    // 0x800D5428: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800D542C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x800D5430: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800D5434: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x800D5438: nop

    // 0x800D543C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5440: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D5444: lh          $t4, 0xAA($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XAA);
    // 0x800D5448: lwc1        $f9, 0x50E0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X50E0);
    // 0x800D544C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x800D5450: lwc1        $f8, 0x50E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X50E4);
    // 0x800D5454: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x800D5458: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x800D545C: jal         0x80036570
    // 0x800D5460: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_11;
    // 0x800D5460: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_11:
    // 0x800D5464: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x800D5468: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D546C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5470: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800D5474: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800D5478: nop

    // 0x800D547C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800D5480: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800D5484: nop

    // 0x800D5488: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800D548C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D5490: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D5494: nop

    // 0x800D5498: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800D549C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x800D54A0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800D54A4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x800D54A8: nop

    // 0x800D54AC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D54B0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D54B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D54B8: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800D54BC: nop

    // 0x800D54C0: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x800D54C4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800D54C8: nop

    // 0x800D54CC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800D54D0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D54D4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D54D8: nop

    // 0x800D54DC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800D54E0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x800D54E4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800D54E8: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x800D54EC: nop

    // 0x800D54F0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800D54F4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800D54F8: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800D54FC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D5500: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D5504: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800D5508: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800D550C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800D5510: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D5514: jal         0x80067748
    // 0x800D5518: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    func_80067748(rdram, ctx);
        goto after_12;
    // 0x800D5518: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_12:
    // 0x800D551C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800D5520: lbu         $t4, 0x76E0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X76E0);
    // 0x800D5524: nop

    // 0x800D5528: andi        $t7, $t4, 0x1
    ctx->r15 = ctx->r12 & 0X1;
    // 0x800D552C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x800D5530: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D5534: nop

    // 0x800D5538: bne         $t8, $zero, L_800D5590
    if (ctx->r24 != 0) {
        // 0x800D553C: nop
    
            goto L_800D5590;
    }
    // 0x800D553C: nop

    // 0x800D5540: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D5544: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D5548: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D554C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800D5550: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800D5554: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800D5558: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D555C: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x800D5560: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800D5564: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800D5568: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D556C: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800D5570: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x800D5574: nop

    // 0x800D5578: bc1f        L_800D5590
    if (!c1cs) {
        // 0x800D557C: nop
    
            goto L_800D5590;
    }
    // 0x800D557C: nop

    // 0x800D5580: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D5584: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x800D5588: b           L_800D55A0
    // 0x800D558C: sh          $t0, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r8;
        goto L_800D55A0;
    // 0x800D558C: sh          $t0, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r8;
L_800D5590:
    // 0x800D5590: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5594: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5598: jal         0x8002B114
    // 0x800D559C: nop

    func_8002B114(rdram, ctx);
        goto after_13;
    // 0x800D559C: nop

    after_13:
L_800D55A0:
    // 0x800D55A0: b           L_800D55F8
    // 0x800D55A4: nop

        goto L_800D55F8;
    // 0x800D55A4: nop

L_800D55A8:
    // 0x800D55A8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D55AC: nop

    // 0x800D55B0: lh          $t1, 0xB6($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XB6);
    // 0x800D55B4: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800D55B8: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800D55BC: nop

    // 0x800D55C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D55C4: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800D55C8: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x800D55CC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D55D0: nop

    // 0x800D55D4: lwc1        $f8, 0x3C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800D55D8: nop

    // 0x800D55DC: swc1        $f8, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f8.u32l;
    // 0x800D55E0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D55E4: nop

    // 0x800D55E8: lh          $t7, 0xA6($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XA6);
    // 0x800D55EC: nop

    // 0x800D55F0: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x800D55F4: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_800D55F8:
    // 0x800D55F8: b           L_800D5600
    // 0x800D55FC: nop

        goto L_800D5600;
    // 0x800D55FC: nop

L_800D5600:
    // 0x800D5600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5604: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800D5608: jr          $ra
    // 0x800D560C: nop

    return;
    // 0x800D560C: nop

;}
RECOMP_FUNC void func_800F52A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F52A8: jr          $ra
    // 0x800F52AC: nop

    return;
    // 0x800F52AC: nop

    // 0x800F52B0: jr          $ra
    // 0x800F52B4: nop

    return;
    // 0x800F52B4: nop

;}
RECOMP_FUNC void func_800D5610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D5614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D5618: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D561C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D5620: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D5624: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D5628: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D562C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D5630: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D5634: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D5638: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D563C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D5640: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800D5644: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5648: nop

    // 0x800D564C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D5650: nop

    // 0x800D5654: bne         $t1, $zero, L_800D56B0
    if (ctx->r9 != 0) {
        // 0x800D5658: nop
    
            goto L_800D56B0;
    }
    // 0x800D5658: nop

    // 0x800D565C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5660: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D5664: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D5668: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800D566C: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x800D5670: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800D5674: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800D5678: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D567C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5680: nop

    // 0x800D5684: swc1        $f4, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = ctx->f4.u32l;
    // 0x800D5688: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800D568C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D5690: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5694: nop

    // 0x800D5698: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
    // 0x800D569C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D56A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D56A4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x800D56A8: jal         0x80029EF8
    // 0x800D56AC: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800D56AC: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    after_0:
L_800D56B0:
    // 0x800D56B0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800D56B4: nop

    // 0x800D56B8: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800D56BC: nop

    // 0x800D56C0: bne         $t9, $zero, L_800D56E0
    if (ctx->r25 != 0) {
        // 0x800D56C4: nop
    
            goto L_800D56E0;
    }
    // 0x800D56C4: nop

    // 0x800D56C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D56CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D56D0: jal         0x8002B0E4
    // 0x800D56D4: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800D56D4: nop

    after_1:
    // 0x800D56D8: b           L_800D5764
    // 0x800D56DC: nop

        goto L_800D5764;
    // 0x800D56DC: nop

L_800D56E0:
    // 0x800D56E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D56E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D56E8: jal         0x80029C40
    // 0x800D56EC: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800D56EC: nop

    after_2:
    // 0x800D56F0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800D56F4: nop

    // 0x800D56F8: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800D56FC: nop

    // 0x800D5700: slti        $at, $t1, 0x19
    ctx->r1 = SIGNED(ctx->r9) < 0X19 ? 1 : 0;
    // 0x800D5704: beq         $at, $zero, L_800D574C
    if (ctx->r1 == 0) {
        // 0x800D5708: nop
    
            goto L_800D574C;
    }
    // 0x800D5708: nop

    // 0x800D570C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5710: nop

    // 0x800D5714: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800D5718: lwc1        $f10, 0xD8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XD8);
    // 0x800D571C: nop

    // 0x800D5720: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800D5724: swc1        $f16, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f16.u32l;
    // 0x800D5728: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800D572C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800D5730: lwc1        $f18, 0xD8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XD8);
    // 0x800D5734: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800D5738: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D573C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800D5740: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800D5744: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800D5748: swc1        $f10, 0xD8($t3)
    MEM_W(0XD8, ctx->r11) = ctx->f10.u32l;
L_800D574C:
    // 0x800D574C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5750: nop

    // 0x800D5754: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800D5758: nop

    // 0x800D575C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800D5760: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_800D5764:
    // 0x800D5764: b           L_800D576C
    // 0x800D5768: nop

        goto L_800D576C;
    // 0x800D5768: nop

L_800D576C:
    // 0x800D576C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D5770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D5774: jr          $ra
    // 0x800D5778: nop

    return;
    // 0x800D5778: nop

;}
RECOMP_FUNC void func_800660DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800660DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800660E0: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_800660E4:
    // 0x800660E4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800660E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800660EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800660F0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800660F4: sw          $zero, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = 0;
    // 0x800660F8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800660FC: nop

    // 0x80066100: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80066104: slti        $at, $t9, 0x40
    ctx->r1 = SIGNED(ctx->r25) < 0X40 ? 1 : 0;
    // 0x80066108: bne         $at, $zero, L_800660E4
    if (ctx->r1 != 0) {
        // 0x8006610C: sw          $t9, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r25;
            goto L_800660E4;
    }
    // 0x8006610C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80066110: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80066114: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80066118: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006611C: subu        $t1, $a2, $t0
    ctx->r9 = SUB32(ctx->r6, ctx->r8);
    // 0x80066120: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x80066124: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x80066128: lh          $t3, 0x7918($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7918);
    // 0x8006612C: nop

    // 0x80066130: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80066134: beq         $at, $zero, L_800663DC
    if (ctx->r1 == 0) {
        // 0x80066138: nop
    
            goto L_800663DC;
    }
    // 0x80066138: nop

    // 0x8006613C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80066140: nop

    // 0x80066144: addu        $t5, $a2, $t4
    ctx->r13 = ADD32(ctx->r6, ctx->r12);
    // 0x80066148: slt         $at, $t5, $t2
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8006614C: bne         $at, $zero, L_800663DC
    if (ctx->r1 != 0) {
        // 0x80066150: nop
    
            goto L_800663DC;
    }
    // 0x80066150: nop

L_80066154:
    // 0x80066154: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80066158: nop

    // 0x8006615C: bltz        $t6, L_800663A8
    if (SIGNED(ctx->r14) < 0) {
        // 0x80066160: nop
    
            goto L_800663A8;
    }
    // 0x80066160: nop

    // 0x80066164: subu        $t7, $a0, $a3
    ctx->r15 = SUB32(ctx->r4, ctx->r7);
    // 0x80066168: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8006616C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066170: lh          $t9, 0x7910($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7910);
    // 0x80066174: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x80066178: nop

    // 0x8006617C: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80066180: beq         $at, $zero, L_800663A8
    if (ctx->r1 == 0) {
        // 0x80066184: nop
    
            goto L_800663A8;
    }
    // 0x80066184: nop

    // 0x80066188: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8006618C: nop

    // 0x80066190: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x80066194: slt         $at, $t1, $t8
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80066198: bne         $at, $zero, L_800663A8
    if (ctx->r1 != 0) {
        // 0x8006619C: nop
    
            goto L_800663A8;
    }
    // 0x8006619C: nop

L_800661A0:
    // 0x800661A0: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x800661A4: nop

    // 0x800661A8: bltz        $t3, L_80066374
    if (SIGNED(ctx->r11) < 0) {
        // 0x800661AC: nop
    
            goto L_80066374;
    }
    // 0x800661AC: nop

    // 0x800661B0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800661B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800661B8: subu        $t2, $a1, $t4
    ctx->r10 = SUB32(ctx->r5, ctx->r12);
    // 0x800661BC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800661C0: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x800661C4: lh          $t6, 0x7914($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7914);
    // 0x800661C8: nop

    // 0x800661CC: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800661D0: beq         $at, $zero, L_80066374
    if (ctx->r1 == 0) {
        // 0x800661D4: nop
    
            goto L_80066374;
    }
    // 0x800661D4: nop

    // 0x800661D8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800661DC: nop

    // 0x800661E0: addu        $t9, $a1, $t7
    ctx->r25 = ADD32(ctx->r5, ctx->r15);
    // 0x800661E4: slt         $at, $t9, $t5
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800661E8: bne         $at, $zero, L_80066374
    if (ctx->r1 != 0) {
        // 0x800661EC: nop
    
            goto L_80066374;
    }
    // 0x800661EC: nop

L_800661F0:
    // 0x800661F0: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x800661F4: nop

    // 0x800661F8: bltz        $t0, L_80066340
    if (SIGNED(ctx->r8) < 0) {
        // 0x800661FC: nop
    
            goto L_80066340;
    }
    // 0x800661FC: nop

    // 0x80066200: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80066204: lh          $t8, 0x7918($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7918);
    // 0x80066208: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x8006620C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80066210: multu       $t8, $t1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80066214: lh          $t4, 0x7910($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X7910);
    // 0x80066218: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8006621C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80066220: mflo        $t3
    ctx->r11 = lo;
    // 0x80066224: nop

    // 0x80066228: nop

    // 0x8006622C: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80066230: mflo        $t2
    ctx->r10 = lo;
    // 0x80066234: nop

    // 0x80066238: nop

    // 0x8006623C: multu       $t6, $t4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80066240: mflo        $t7
    ctx->r15 = lo;
    // 0x80066244: addu        $t5, $t2, $t7
    ctx->r13 = ADD32(ctx->r10, ctx->r15);
    // 0x80066248: addu        $t0, $t5, $t9
    ctx->r8 = ADD32(ctx->r13, ctx->r25);
    // 0x8006624C: sw          $t0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r8;
    // 0x80066250: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80066254: lbu         $t8, 0x7928($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7928);
    // 0x80066258: nop

    // 0x8006625C: beq         $t8, $zero, L_800662B8
    if (ctx->r24 == 0) {
        // 0x80066260: nop
    
            goto L_800662B8;
    }
    // 0x80066260: nop

    // 0x80066264: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x80066268: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006626C: lw          $t1, 0x794C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X794C);
    // 0x80066270: sll         $t6, $t3, 4
    ctx->r14 = S32(ctx->r11 << 4);
    // 0x80066274: addu        $t4, $t1, $t6
    ctx->r12 = ADD32(ctx->r9, ctx->r14);
    // 0x80066278: lbu         $t2, 0x0($t4)
    ctx->r10 = MEM_BU(ctx->r12, 0X0);
    // 0x8006627C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80066280: beq         $t2, $at, L_800662B0
    if (ctx->r10 == ctx->r1) {
        // 0x80066284: nop
    
            goto L_800662B0;
    }
    // 0x80066284: nop

    // 0x80066288: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8006628C: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x80066290: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80066294: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066298: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006629C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800662A0: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x800662A4: addiu       $t3, $t8, 0x1
    ctx->r11 = ADD32(ctx->r24, 0X1);
    // 0x800662A8: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x800662AC: sw          $t5, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r13;
L_800662B0:
    // 0x800662B0: b           L_80066324
    // 0x800662B4: nop

        goto L_80066324;
    // 0x800662B4: nop

L_800662B8:
    // 0x800662B8: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x800662BC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800662C0: lw          $t1, 0x794C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X794C);
    // 0x800662C4: sll         $t4, $t6, 4
    ctx->r12 = S32(ctx->r14 << 4);
    // 0x800662C8: addu        $t2, $t1, $t4
    ctx->r10 = ADD32(ctx->r9, ctx->r12);
    // 0x800662CC: lbu         $t7, 0x1($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X1);
    // 0x800662D0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800662D4: bne         $t7, $at, L_800662FC
    if (ctx->r15 != ctx->r1) {
        // 0x800662D8: nop
    
            goto L_800662FC;
    }
    // 0x800662D8: nop

    // 0x800662DC: lbu         $t9, 0x2($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X2);
    // 0x800662E0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800662E4: bne         $t9, $at, L_800662FC
    if (ctx->r25 != ctx->r1) {
        // 0x800662E8: nop
    
            goto L_800662FC;
    }
    // 0x800662E8: nop

    // 0x800662EC: lbu         $t5, 0x3($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X3);
    // 0x800662F0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800662F4: beq         $t5, $at, L_80066324
    if (ctx->r13 == ctx->r1) {
        // 0x800662F8: nop
    
            goto L_80066324;
    }
    // 0x800662F8: nop

L_800662FC:
    // 0x800662FC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80066300: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x80066304: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80066308: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006630C: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80066310: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80066314: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x80066318: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x8006631C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x80066320: sw          $t8, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r24;
L_80066324:
    // 0x80066324: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80066328: nop

    // 0x8006632C: slti        $at, $t7, 0x40
    ctx->r1 = SIGNED(ctx->r15) < 0X40 ? 1 : 0;
    // 0x80066330: bne         $at, $zero, L_80066340
    if (ctx->r1 != 0) {
        // 0x80066334: nop
    
            goto L_80066340;
    }
    // 0x80066334: nop

    // 0x80066338: b           L_800663E4
    // 0x8006633C: nop

        goto L_800663E4;
    // 0x8006633C: nop

L_80066340:
    // 0x80066340: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x80066344: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066348: lh          $t5, 0x7914($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7914);
    // 0x8006634C: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80066350: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80066354: beq         $at, $zero, L_80066374
    if (ctx->r1 == 0) {
        // 0x80066358: sw          $t2, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r10;
            goto L_80066374;
    }
    // 0x80066358: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8006635C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80066360: nop

    // 0x80066364: addu        $t3, $a1, $t0
    ctx->r11 = ADD32(ctx->r5, ctx->r8);
    // 0x80066368: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8006636C: beq         $at, $zero, L_800661F0
    if (ctx->r1 == 0) {
        // 0x80066370: nop
    
            goto L_800661F0;
    }
    // 0x80066370: nop

L_80066374:
    // 0x80066374: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x80066378: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006637C: lh          $t1, 0x7910($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7910);
    // 0x80066380: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80066384: slt         $at, $t6, $t1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80066388: beq         $at, $zero, L_800663A8
    if (ctx->r1 == 0) {
        // 0x8006638C: sw          $t6, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r14;
            goto L_800663A8;
    }
    // 0x8006638C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80066390: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80066394: nop

    // 0x80066398: addu        $t7, $a0, $t4
    ctx->r15 = ADD32(ctx->r4, ctx->r12);
    // 0x8006639C: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800663A0: beq         $at, $zero, L_800661A0
    if (ctx->r1 == 0) {
        // 0x800663A4: nop
    
            goto L_800661A0;
    }
    // 0x800663A4: nop

L_800663A8:
    // 0x800663A8: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x800663AC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800663B0: lh          $t0, 0x7918($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7918);
    // 0x800663B4: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x800663B8: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800663BC: beq         $at, $zero, L_800663DC
    if (ctx->r1 == 0) {
        // 0x800663C0: sw          $t5, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r13;
            goto L_800663DC;
    }
    // 0x800663C0: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
    // 0x800663C4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800663C8: nop

    // 0x800663CC: addu        $t3, $a2, $t2
    ctx->r11 = ADD32(ctx->r6, ctx->r10);
    // 0x800663D0: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800663D4: beq         $at, $zero, L_80066154
    if (ctx->r1 == 0) {
        // 0x800663D8: nop
    
            goto L_80066154;
    }
    // 0x800663D8: nop

L_800663DC:
    // 0x800663DC: b           L_800663E4
    // 0x800663E0: nop

        goto L_800663E4;
    // 0x800663E0: nop

L_800663E4:
    // 0x800663E4: jr          $ra
    // 0x800663E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800663E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F7EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7EA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F7EA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F7EAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800F7EB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7EB4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F7EB8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F7EBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F7EC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7EC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F7EC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7ECC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F7ED0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F7ED4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F7ED8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F7EDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F7EE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7EE4: jal         0x8001B44C
    // 0x800F7EE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_0;
    // 0x800F7EE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800F7EEC: beq         $v0, $zero, L_800F7FA0
    if (ctx->r2 == 0) {
        // 0x800F7EF0: nop
    
            goto L_800F7FA0;
    }
    // 0x800F7EF0: nop

    // 0x800F7EF4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F7EF8: nop

    // 0x800F7EFC: lh          $t1, 0xAE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAE);
    // 0x800F7F00: nop

    // 0x800F7F04: beq         $t1, $zero, L_800F7FA0
    if (ctx->r9 == 0) {
        // 0x800F7F08: nop
    
            goto L_800F7FA0;
    }
    // 0x800F7F08: nop

    // 0x800F7F0C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F7F10: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800F7F14: lh          $t3, 0xAC($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAC);
    // 0x800F7F18: nop

    // 0x800F7F1C: subu        $t5, $t4, $t3
    ctx->r13 = SUB32(ctx->r12, ctx->r11);
    // 0x800F7F20: sh          $t5, 0xAC($t2)
    MEM_H(0XAC, ctx->r10) = ctx->r13;
    // 0x800F7F24: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800F7F28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F7F2C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800F7F30: addiu       $t7, $t7, -0x46B0
    ctx->r15 = ADD32(ctx->r15, -0X46B0);
    // 0x800F7F34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7F38: lh          $a2, 0xAC($t6)
    ctx->r6 = MEM_H(ctx->r14, 0XAC);
    // 0x800F7F3C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800F7F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F7F44: jal         0x8001C0EC
    // 0x800F7F48: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F7F48: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    after_1:
    // 0x800F7F4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F7F50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7F54: jal         0x8001BBDC
    // 0x800F7F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800F7F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800F7F5C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F7F60: nop

    // 0x800F7F64: sh          $zero, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = 0;
    // 0x800F7F68: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F7F6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F7F70: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x800F7F74: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800F7F78: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800F7F7C: sll         $t4, $t1, 3
    ctx->r12 = S32(ctx->r9 << 3);
    // 0x800F7F80: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x800F7F84: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F7F88: addiu       $t3, $t3, -0x4648
    ctx->r11 = ADD32(ctx->r11, -0X4648);
    // 0x800F7F8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7F90: addu        $a3, $t4, $t3
    ctx->r7 = ADD32(ctx->r12, ctx->r11);
    // 0x800F7F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F7F98: jal         0x8001ABF4
    // 0x800F7F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800F7F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800F7FA0:
    // 0x800F7FA0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F7FA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F7FA8: lh          $s0, 0xA4($t5)
    ctx->r16 = MEM_H(ctx->r13, 0XA4);
    // 0x800F7FAC: nop

    // 0x800F7FB0: beq         $s0, $at, L_800F7FD8
    if (ctx->r16 == ctx->r1) {
        // 0x800F7FB4: nop
    
            goto L_800F7FD8;
    }
    // 0x800F7FB4: nop

    // 0x800F7FB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F7FBC: beq         $s0, $at, L_800F7FE8
    if (ctx->r16 == ctx->r1) {
        // 0x800F7FC0: nop
    
            goto L_800F7FE8;
    }
    // 0x800F7FC0: nop

    // 0x800F7FC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F7FC8: beq         $s0, $at, L_800F7FF8
    if (ctx->r16 == ctx->r1) {
        // 0x800F7FCC: nop
    
            goto L_800F7FF8;
    }
    // 0x800F7FCC: nop

    // 0x800F7FD0: b           L_800F8008
    // 0x800F7FD4: nop

        goto L_800F8008;
    // 0x800F7FD4: nop

L_800F7FD8:
    // 0x800F7FD8: jal         0x800F7A0C
    // 0x800F7FDC: nop

    func_800F7A0C(rdram, ctx);
        goto after_4;
    // 0x800F7FDC: nop

    after_4:
    // 0x800F7FE0: b           L_800F8010
    // 0x800F7FE4: nop

        goto L_800F8010;
    // 0x800F7FE4: nop

L_800F7FE8:
    // 0x800F7FE8: jal         0x800F7BF4
    // 0x800F7FEC: nop

    func_800F7BF4(rdram, ctx);
        goto after_5;
    // 0x800F7FEC: nop

    after_5:
    // 0x800F7FF0: b           L_800F8010
    // 0x800F7FF4: nop

        goto L_800F8010;
    // 0x800F7FF4: nop

L_800F7FF8:
    // 0x800F7FF8: jal         0x800F7D08
    // 0x800F7FFC: nop

    func_800F7D08(rdram, ctx);
        goto after_6;
    // 0x800F7FFC: nop

    after_6:
    // 0x800F8000: b           L_800F8010
    // 0x800F8004: nop

        goto L_800F8010;
    // 0x800F8004: nop

L_800F8008:
    // 0x800F8008: b           L_800F8010
    // 0x800F800C: nop

        goto L_800F8010;
    // 0x800F800C: nop

L_800F8010:
    // 0x800F8010: b           L_800F8018
    // 0x800F8014: nop

        goto L_800F8018;
    // 0x800F8014: nop

L_800F8018:
    // 0x800F8018: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F801C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800F8020: jr          $ra
    // 0x800F8024: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800F8024: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800F98C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F98C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F98C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F98CC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F98D0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F98D4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F98D8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F98DC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F98E0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F98E4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F98E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F98EC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F98F0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F98F4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F98F8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800F98FC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F9900: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F9904: addiu       $a1, $a1, 0x37E4
    ctx->r5 = ADD32(ctx->r5, 0X37E4);
    // 0x800F9908: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F990C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F9910: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F9914: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F9918: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F991C: jal         0x80027464
    // 0x800F9920: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F9920: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800F9924: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800F9928: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800F992C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F9930: beq         $t1, $at, L_800F9A08
    if (ctx->r9 == ctx->r1) {
        // 0x800F9934: nop
    
            goto L_800F9A08;
    }
    // 0x800F9934: nop

    // 0x800F9938: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800F993C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800F9940: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F9944: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F9948: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F994C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F9950: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F9954: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800F9958: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800F995C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x800F9960: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800F9964: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800F9968: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F996C: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x800F9970: nop

    // 0x800F9974: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
    // 0x800F9978: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800F997C: lw          $a0, 0x519C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X519C);
    // 0x800F9980: jal         0x80026260
    // 0x800F9984: nop

    func_80026260(rdram, ctx);
        goto after_1;
    // 0x800F9984: nop

    after_1:
    // 0x800F9988: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F998C: bne         $v0, $at, L_800F99D4
    if (ctx->r2 != ctx->r1) {
        // 0x800F9990: nop
    
            goto L_800F99D4;
    }
    // 0x800F9990: nop

    // 0x800F9994: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F9998: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x800F999C: lh          $t0, 0xE4($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XE4);
    // 0x800F99A0: nop

    // 0x800F99A4: bne         $t0, $at, L_800F99BC
    if (ctx->r8 != ctx->r1) {
        // 0x800F99A8: nop
    
            goto L_800F99BC;
    }
    // 0x800F99A8: nop

    // 0x800F99AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F99B0: addiu       $t1, $zero, 0x4E
    ctx->r9 = ADD32(0, 0X4E);
    // 0x800F99B4: b           L_800F99C8
    // 0x800F99B8: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
        goto L_800F99C8;
    // 0x800F99B8: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
L_800F99BC:
    // 0x800F99BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F99C0: addiu       $t3, $zero, 0x4D
    ctx->r11 = ADD32(0, 0X4D);
    // 0x800F99C4: sh          $t3, 0xE4($t4)
    MEM_H(0XE4, ctx->r12) = ctx->r11;
L_800F99C8:
    // 0x800F99C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F99CC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800F99D0: sh          $t5, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r13;
L_800F99D4:
    // 0x800F99D4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F99D8: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x800F99DC: lh          $t9, 0xE4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE4);
    // 0x800F99E0: nop

    // 0x800F99E4: bne         $t9, $at, L_800F9A08
    if (ctx->r25 != ctx->r1) {
        // 0x800F99E8: nop
    
            goto L_800F9A08;
    }
    // 0x800F99E8: nop

    // 0x800F99EC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F99F0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800F99F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F99F8: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800F99FC: nop

    // 0x800F9A00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800F9A04: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
L_800F9A08:
    // 0x800F9A08: b           L_800F9A10
    // 0x800F9A0C: nop

        goto L_800F9A10;
    // 0x800F9A0C: nop

L_800F9A10:
    // 0x800F9A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9A14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F9A18: jr          $ra
    // 0x800F9A1C: nop

    return;
    // 0x800F9A1C: nop

;}
RECOMP_FUNC void func_8008F710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F710: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8008F714: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8008F718: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008F71C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8008F720: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8008F724: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008F728: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8008F72C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008F730: lui         $a2, 0x8015
    ctx->r6 = S32(0X8015 << 16);
    // 0x8008F734: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x8008F738: lh          $a2, 0x4234($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X4234);
    // 0x8008F73C: nop

    // 0x8008F740: slti        $at, $a2, 0x188
    ctx->r1 = SIGNED(ctx->r6) < 0X188 ? 1 : 0;
    // 0x8008F744: bne         $at, $zero, L_8008F778
    if (ctx->r1 != 0) {
        // 0x8008F748: nop
    
            goto L_8008F778;
    }
    // 0x8008F748: nop

    // 0x8008F74C: addiu       $t7, $a2, -0x220
    ctx->r15 = ADD32(ctx->r6, -0X220);
    // 0x8008F750: sltiu       $at, $t7, 0x69
    ctx->r1 = ctx->r15 < 0X69 ? 1 : 0;
    // 0x8008F754: beq         $at, $zero, L_8008FF98
    if (ctx->r1 == 0) {
        // 0x8008F758: nop
    
            goto L_8008FF98;
    }
    // 0x8008F758: nop

    // 0x8008F75C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008F760: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8008F764: addu        $at, $at, $t7
    gpr jr_addend_8008F770 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008F768: lw          $t7, 0x11E0($at)
    ctx->r15 = ADD32(ctx->r1, 0X11E0);
    // 0x8008F76C: nop

    // 0x8008F770: jr          $t7
    // 0x8008F774: nop

    switch (jr_addend_8008F770 >> 2) {
        case 0: goto L_8008F7C8; break;
        case 1: goto L_8008FF98; break;
        case 2: goto L_8008FF98; break;
        case 3: goto L_8008F7F8; break;
        case 4: goto L_8008FA78; break;
        case 5: goto L_8008FAA8; break;
        case 6: goto L_8008FAD8; break;
        case 7: goto L_8008FB08; break;
        case 8: goto L_8008FF98; break;
        case 9: goto L_8008F828; break;
        case 10: goto L_8008FF98; break;
        case 11: goto L_8008FB38; break;
        case 12: goto L_8008FBC8; break;
        case 13: goto L_8008FBF8; break;
        case 14: goto L_8008FF98; break;
        case 15: goto L_8008FC28; break;
        case 16: goto L_8008FC58; break;
        case 17: goto L_8008F888; break;
        case 18: goto L_8008FB68; break;
        case 19: goto L_8008FF98; break;
        case 20: goto L_8008FF98; break;
        case 21: goto L_8008FC88; break;
        case 22: goto L_8008FF98; break;
        case 23: goto L_8008FF98; break;
        case 24: goto L_8008F8B8; break;
        case 25: goto L_8008FF98; break;
        case 26: goto L_8008FF98; break;
        case 27: goto L_8008FF98; break;
        case 28: goto L_8008F7C8; break;
        case 29: goto L_8008FF98; break;
        case 30: goto L_8008F8E8; break;
        case 31: goto L_8008FF98; break;
        case 32: goto L_8008FF98; break;
        case 33: goto L_8008FF98; break;
        case 34: goto L_8008FF98; break;
        case 35: goto L_8008FF98; break;
        case 36: goto L_8008FCB8; break;
        case 37: goto L_8008FF98; break;
        case 38: goto L_8008FF98; break;
        case 39: goto L_8008FCE8; break;
        case 40: goto L_8008FD18; break;
        case 41: goto L_8008FF98; break;
        case 42: goto L_8008FF98; break;
        case 43: goto L_8008FD48; break;
        case 44: goto L_8008F97C; break;
        case 45: goto L_8008F948; break;
        case 46: goto L_8008F918; break;
        case 47: goto L_8008FF98; break;
        case 48: goto L_8008FF98; break;
        case 49: goto L_8008F9B0; break;
        case 50: goto L_8008F9E0; break;
        case 51: goto L_8008FF98; break;
        case 52: goto L_8008FA10; break;
        case 53: goto L_8008FA44; break;
        case 54: goto L_8008FD7C; break;
        case 55: goto L_8008FE74; break;
        case 56: goto L_8008FF98; break;
        case 57: goto L_8008FF98; break;
        case 58: goto L_8008FE40; break;
        case 59: goto L_8008FF98; break;
        case 60: goto L_8008FDB0; break;
        case 61: goto L_8008FDE0; break;
        case 62: goto L_8008FE10; break;
        case 63: goto L_8008FF98; break;
        case 64: goto L_8008FF98; break;
        case 65: goto L_8008FF98; break;
        case 66: goto L_8008FF98; break;
        case 67: goto L_8008FF98; break;
        case 68: goto L_8008FF98; break;
        case 69: goto L_8008FF98; break;
        case 70: goto L_8008FF68; break;
        case 71: goto L_8008FEA8; break;
        case 72: goto L_8008FF98; break;
        case 73: goto L_8008FF98; break;
        case 74: goto L_8008FF98; break;
        case 75: goto L_8008FF98; break;
        case 76: goto L_8008FF98; break;
        case 77: goto L_8008FF98; break;
        case 78: goto L_8008FF98; break;
        case 79: goto L_8008FF98; break;
        case 80: goto L_8008FF98; break;
        case 81: goto L_8008FF98; break;
        case 82: goto L_8008FF98; break;
        case 83: goto L_8008FF98; break;
        case 84: goto L_8008FF98; break;
        case 85: goto L_8008FF98; break;
        case 86: goto L_8008FF98; break;
        case 87: goto L_8008FF98; break;
        case 88: goto L_8008FF98; break;
        case 89: goto L_8008FF98; break;
        case 90: goto L_8008FF98; break;
        case 91: goto L_8008FF98; break;
        case 92: goto L_8008FF98; break;
        case 93: goto L_8008FED8; break;
        case 94: goto L_8008FF08; break;
        case 95: goto L_8008FF98; break;
        case 96: goto L_8008FF98; break;
        case 97: goto L_8008FF38; break;
        case 98: goto L_8008FF98; break;
        case 99: goto L_8008FF98; break;
        case 100: goto L_8008FF98; break;
        case 101: goto L_8008FF98; break;
        case 102: goto L_8008FF98; break;
        case 103: goto L_8008FF98; break;
        case 104: goto L_8008FB98; break;
        default: switch_error(__func__, 0x8008F770, 0x801111E0);
    }
    // 0x8008F774: nop

L_8008F778:
    // 0x8008F778: addiu       $at, $zero, 0xF9
    ctx->r1 = ADD32(0, 0XF9);
    // 0x8008F77C: beq         $a2, $at, L_8008F858
    if (ctx->r6 == ctx->r1) {
        // 0x8008F780: nop
    
            goto L_8008F858;
    }
    // 0x8008F780: nop

    // 0x8008F784: addiu       $at, $zero, 0x187
    ctx->r1 = ADD32(0, 0X187);
    // 0x8008F788: beq         $a2, $at, L_8008F798
    if (ctx->r6 == ctx->r1) {
        // 0x8008F78C: nop
    
            goto L_8008F798;
    }
    // 0x8008F78C: nop

    // 0x8008F790: b           L_8008FF98
    // 0x8008F794: nop

        goto L_8008FF98;
    // 0x8008F794: nop

L_8008F798:
    // 0x8008F798: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F79C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F7A0: sll         $t8, $a1, 3
    ctx->r24 = S32(ctx->r5 << 3);
    // 0x8008F7A4: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x8008F7A8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8008F7AC: addiu       $t9, $t9, -0x68B0
    ctx->r25 = ADD32(ctx->r25, -0X68B0);
    // 0x8008F7B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008F7B4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8008F7B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F7BC: sw          $t0, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r8;
    // 0x8008F7C0: b           L_8008FFA0
    // 0x8008F7C4: nop

        goto L_8008FFA0;
    // 0x8008F7C4: nop

L_8008F7C8:
    // 0x8008F7C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F7CC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F7D0: sll         $t1, $a1, 3
    ctx->r9 = S32(ctx->r5 << 3);
    // 0x8008F7D4: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x8008F7D8: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8008F7DC: addiu       $t2, $t2, 0x1EB4
    ctx->r10 = ADD32(ctx->r10, 0X1EB4);
    // 0x8008F7E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008F7E4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8008F7E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F7EC: sw          $t3, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r11;
    // 0x8008F7F0: b           L_8008FFA0
    // 0x8008F7F4: nop

        goto L_8008FFA0;
    // 0x8008F7F4: nop

L_8008F7F8:
    // 0x8008F7F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F7FC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F800: sll         $t4, $a1, 3
    ctx->r12 = S32(ctx->r5 << 3);
    // 0x8008F804: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x8008F808: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8008F80C: addiu       $t5, $t5, 0x2064
    ctx->r13 = ADD32(ctx->r13, 0X2064);
    // 0x8008F810: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008F814: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8008F818: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F81C: sw          $t6, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r14;
    // 0x8008F820: b           L_8008FFA0
    // 0x8008F824: nop

        goto L_8008FFA0;
    // 0x8008F824: nop

L_8008F828:
    // 0x8008F828: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F82C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F830: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x8008F834: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8008F838: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8008F83C: addiu       $t8, $t8, 0x21A4
    ctx->r24 = ADD32(ctx->r24, 0X21A4);
    // 0x8008F840: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008F844: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008F848: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F84C: sw          $t9, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r25;
    // 0x8008F850: b           L_8008FFA0
    // 0x8008F854: nop

        goto L_8008FFA0;
    // 0x8008F854: nop

L_8008F858:
    // 0x8008F858: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F85C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F860: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x8008F864: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x8008F868: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008F86C: addiu       $t1, $t1, 0x698C
    ctx->r9 = ADD32(ctx->r9, 0X698C);
    // 0x8008F870: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008F874: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008F878: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F87C: sw          $t2, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r10;
    // 0x8008F880: b           L_8008FFA0
    // 0x8008F884: nop

        goto L_8008FFA0;
    // 0x8008F884: nop

L_8008F888:
    // 0x8008F888: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F88C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F890: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x8008F894: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x8008F898: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8008F89C: addiu       $t4, $t4, 0x2298
    ctx->r12 = ADD32(ctx->r12, 0X2298);
    // 0x8008F8A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008F8A4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008F8A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F8AC: sw          $t5, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r13;
    // 0x8008F8B0: b           L_8008FFA0
    // 0x8008F8B4: nop

        goto L_8008FFA0;
    // 0x8008F8B4: nop

L_8008F8B8:
    // 0x8008F8B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F8BC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F8C0: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x8008F8C4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8008F8C8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8008F8CC: addiu       $t7, $t7, 0x2314
    ctx->r15 = ADD32(ctx->r15, 0X2314);
    // 0x8008F8D0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008F8D4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008F8D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F8DC: sw          $t8, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r24;
    // 0x8008F8E0: b           L_8008FFA0
    // 0x8008F8E4: nop

        goto L_8008FFA0;
    // 0x8008F8E4: nop

L_8008F8E8:
    // 0x8008F8E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F8EC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F8F0: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x8008F8F4: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x8008F8F8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8008F8FC: addiu       $t0, $t0, 0x2414
    ctx->r8 = ADD32(ctx->r8, 0X2414);
    // 0x8008F900: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008F904: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8008F908: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F90C: sw          $t1, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r9;
    // 0x8008F910: b           L_8008FFA0
    // 0x8008F914: nop

        goto L_8008FFA0;
    // 0x8008F914: nop

L_8008F918:
    // 0x8008F918: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F91C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F920: sll         $t2, $a1, 3
    ctx->r10 = S32(ctx->r5 << 3);
    // 0x8008F924: subu        $t2, $t2, $a1
    ctx->r10 = SUB32(ctx->r10, ctx->r5);
    // 0x8008F928: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8008F92C: addiu       $t3, $t3, 0x2940
    ctx->r11 = ADD32(ctx->r11, 0X2940);
    // 0x8008F930: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008F934: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8008F938: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F93C: sw          $t4, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r12;
    // 0x8008F940: b           L_8008FFA0
    // 0x8008F944: nop

        goto L_8008FFA0;
    // 0x8008F944: nop

L_8008F948:
    // 0x8008F948: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8008F94C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F950: sw          $t5, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r13;
    // 0x8008F954: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x8008F958: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8008F95C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8008F960: addiu       $t7, $t7, 0x2A64
    ctx->r15 = ADD32(ctx->r15, 0X2A64);
    // 0x8008F964: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008F968: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008F96C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F970: sw          $t8, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r24;
    // 0x8008F974: b           L_8008FFA0
    // 0x8008F978: nop

        goto L_8008FFA0;
    // 0x8008F978: nop

L_8008F97C:
    // 0x8008F97C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8008F980: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F984: sw          $t9, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r25;
    // 0x8008F988: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x8008F98C: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x8008F990: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008F994: addiu       $t1, $t1, 0x2ADC
    ctx->r9 = ADD32(ctx->r9, 0X2ADC);
    // 0x8008F998: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008F99C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008F9A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F9A4: sw          $t2, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r10;
    // 0x8008F9A8: b           L_8008FFA0
    // 0x8008F9AC: nop

        goto L_8008FFA0;
    // 0x8008F9AC: nop

L_8008F9B0:
    // 0x8008F9B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F9B4: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F9B8: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x8008F9BC: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x8008F9C0: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8008F9C4: addiu       $t4, $t4, 0x2BD0
    ctx->r12 = ADD32(ctx->r12, 0X2BD0);
    // 0x8008F9C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008F9CC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008F9D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F9D4: sw          $t5, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r13;
    // 0x8008F9D8: b           L_8008FFA0
    // 0x8008F9DC: nop

        goto L_8008FFA0;
    // 0x8008F9DC: nop

L_8008F9E0:
    // 0x8008F9E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F9E4: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008F9E8: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x8008F9EC: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8008F9F0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8008F9F4: addiu       $t7, $t7, 0x2D20
    ctx->r15 = ADD32(ctx->r15, 0X2D20);
    // 0x8008F9F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008F9FC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008FA00: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FA04: sw          $t8, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r24;
    // 0x8008FA08: b           L_8008FFA0
    // 0x8008FA0C: nop

        goto L_8008FFA0;
    // 0x8008FA0C: nop

L_8008FA10:
    // 0x8008FA10: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8008FA14: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FA18: sw          $t9, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r25;
    // 0x8008FA1C: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x8008FA20: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x8008FA24: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008FA28: addiu       $t1, $t1, 0x2E28
    ctx->r9 = ADD32(ctx->r9, 0X2E28);
    // 0x8008FA2C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008FA30: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008FA34: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FA38: sw          $t2, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r10;
    // 0x8008FA3C: b           L_8008FFA0
    // 0x8008FA40: nop

        goto L_8008FFA0;
    // 0x8008FA40: nop

L_8008FA44:
    // 0x8008FA44: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8008FA48: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FA4C: sw          $t3, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r11;
    // 0x8008FA50: sll         $t4, $a1, 3
    ctx->r12 = S32(ctx->r5 << 3);
    // 0x8008FA54: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x8008FA58: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8008FA5C: addiu       $t5, $t5, 0x2EF8
    ctx->r13 = ADD32(ctx->r13, 0X2EF8);
    // 0x8008FA60: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008FA64: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8008FA68: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FA6C: sw          $t6, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r14;
    // 0x8008FA70: b           L_8008FFA0
    // 0x8008FA74: nop

        goto L_8008FFA0;
    // 0x8008FA74: nop

L_8008FA78:
    // 0x8008FA78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FA7C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FA80: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x8008FA84: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8008FA88: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8008FA8C: addiu       $t8, $t8, 0x2064
    ctx->r24 = ADD32(ctx->r24, 0X2064);
    // 0x8008FA90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008FA94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008FA98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FA9C: sw          $t9, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r25;
    // 0x8008FAA0: b           L_8008FFA0
    // 0x8008FAA4: nop

        goto L_8008FFA0;
    // 0x8008FAA4: nop

L_8008FAA8:
    // 0x8008FAA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FAAC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FAB0: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x8008FAB4: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x8008FAB8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008FABC: addiu       $t1, $t1, 0x1EB4
    ctx->r9 = ADD32(ctx->r9, 0X1EB4);
    // 0x8008FAC0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008FAC4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008FAC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FACC: sw          $t2, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r10;
    // 0x8008FAD0: b           L_8008FFA0
    // 0x8008FAD4: nop

        goto L_8008FFA0;
    // 0x8008FAD4: nop

L_8008FAD8:
    // 0x8008FAD8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FADC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FAE0: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x8008FAE4: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x8008FAE8: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8008FAEC: addiu       $t4, $t4, 0x2064
    ctx->r12 = ADD32(ctx->r12, 0X2064);
    // 0x8008FAF0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008FAF4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008FAF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FAFC: sw          $t5, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r13;
    // 0x8008FB00: b           L_8008FFA0
    // 0x8008FB04: nop

        goto L_8008FFA0;
    // 0x8008FB04: nop

L_8008FB08:
    // 0x8008FB08: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FB0C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FB10: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x8008FB14: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8008FB18: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8008FB1C: addiu       $t7, $t7, 0x1EB4
    ctx->r15 = ADD32(ctx->r15, 0X1EB4);
    // 0x8008FB20: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008FB24: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008FB28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FB2C: sw          $t8, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r24;
    // 0x8008FB30: b           L_8008FFA0
    // 0x8008FB34: nop

        goto L_8008FFA0;
    // 0x8008FB34: nop

L_8008FB38:
    // 0x8008FB38: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FB3C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FB40: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x8008FB44: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x8008FB48: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8008FB4C: addiu       $t0, $t0, 0x2064
    ctx->r8 = ADD32(ctx->r8, 0X2064);
    // 0x8008FB50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008FB54: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8008FB58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FB5C: sw          $t1, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r9;
    // 0x8008FB60: b           L_8008FFA0
    // 0x8008FB64: nop

        goto L_8008FFA0;
    // 0x8008FB64: nop

L_8008FB68:
    // 0x8008FB68: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FB6C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FB70: sll         $t2, $a1, 3
    ctx->r10 = S32(ctx->r5 << 3);
    // 0x8008FB74: subu        $t2, $t2, $a1
    ctx->r10 = SUB32(ctx->r10, ctx->r5);
    // 0x8008FB78: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8008FB7C: addiu       $t3, $t3, 0x1EB4
    ctx->r11 = ADD32(ctx->r11, 0X1EB4);
    // 0x8008FB80: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008FB84: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8008FB88: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FB8C: sw          $t4, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r12;
    // 0x8008FB90: b           L_8008FFA0
    // 0x8008FB94: nop

        goto L_8008FFA0;
    // 0x8008FB94: nop

L_8008FB98:
    // 0x8008FB98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FB9C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FBA0: sll         $t5, $a1, 3
    ctx->r13 = S32(ctx->r5 << 3);
    // 0x8008FBA4: subu        $t5, $t5, $a1
    ctx->r13 = SUB32(ctx->r13, ctx->r5);
    // 0x8008FBA8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8008FBAC: addiu       $t6, $t6, 0x1EB4
    ctx->r14 = ADD32(ctx->r14, 0X1EB4);
    // 0x8008FBB0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008FBB4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8008FBB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FBBC: sw          $t7, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r15;
    // 0x8008FBC0: b           L_8008FFA0
    // 0x8008FBC4: nop

        goto L_8008FFA0;
    // 0x8008FBC4: nop

L_8008FBC8:
    // 0x8008FBC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FBCC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FBD0: sll         $t8, $a1, 3
    ctx->r24 = S32(ctx->r5 << 3);
    // 0x8008FBD4: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x8008FBD8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8008FBDC: addiu       $t9, $t9, 0x1EB4
    ctx->r25 = ADD32(ctx->r25, 0X1EB4);
    // 0x8008FBE0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008FBE4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8008FBE8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FBEC: sw          $t0, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r8;
    // 0x8008FBF0: b           L_8008FFA0
    // 0x8008FBF4: nop

        goto L_8008FFA0;
    // 0x8008FBF4: nop

L_8008FBF8:
    // 0x8008FBF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FBFC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FC00: sll         $t1, $a1, 3
    ctx->r9 = S32(ctx->r5 << 3);
    // 0x8008FC04: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x8008FC08: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8008FC0C: addiu       $t2, $t2, 0x1EB4
    ctx->r10 = ADD32(ctx->r10, 0X1EB4);
    // 0x8008FC10: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008FC14: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8008FC18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FC1C: sw          $t3, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r11;
    // 0x8008FC20: b           L_8008FFA0
    // 0x8008FC24: nop

        goto L_8008FFA0;
    // 0x8008FC24: nop

L_8008FC28:
    // 0x8008FC28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FC2C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FC30: sll         $t4, $a1, 3
    ctx->r12 = S32(ctx->r5 << 3);
    // 0x8008FC34: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x8008FC38: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8008FC3C: addiu       $t5, $t5, 0x1EB4
    ctx->r13 = ADD32(ctx->r13, 0X1EB4);
    // 0x8008FC40: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008FC44: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8008FC48: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FC4C: sw          $t6, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r14;
    // 0x8008FC50: b           L_8008FFA0
    // 0x8008FC54: nop

        goto L_8008FFA0;
    // 0x8008FC54: nop

L_8008FC58:
    // 0x8008FC58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FC5C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FC60: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x8008FC64: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8008FC68: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8008FC6C: addiu       $t8, $t8, 0x2064
    ctx->r24 = ADD32(ctx->r24, 0X2064);
    // 0x8008FC70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008FC74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008FC78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FC7C: sw          $t9, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r25;
    // 0x8008FC80: b           L_8008FFA0
    // 0x8008FC84: nop

        goto L_8008FFA0;
    // 0x8008FC84: nop

L_8008FC88:
    // 0x8008FC88: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FC8C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FC90: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x8008FC94: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x8008FC98: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008FC9C: addiu       $t1, $t1, 0x1EB4
    ctx->r9 = ADD32(ctx->r9, 0X1EB4);
    // 0x8008FCA0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008FCA4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008FCA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FCAC: sw          $t2, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r10;
    // 0x8008FCB0: b           L_8008FFA0
    // 0x8008FCB4: nop

        goto L_8008FFA0;
    // 0x8008FCB4: nop

L_8008FCB8:
    // 0x8008FCB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FCBC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FCC0: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x8008FCC4: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x8008FCC8: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8008FCCC: addiu       $t4, $t4, 0x1C80
    ctx->r12 = ADD32(ctx->r12, 0X1C80);
    // 0x8008FCD0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008FCD4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008FCD8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FCDC: sw          $t5, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r13;
    // 0x8008FCE0: b           L_8008FFA0
    // 0x8008FCE4: nop

        goto L_8008FFA0;
    // 0x8008FCE4: nop

L_8008FCE8:
    // 0x8008FCE8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FCEC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FCF0: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x8008FCF4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8008FCF8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8008FCFC: addiu       $t7, $t7, 0x283C
    ctx->r15 = ADD32(ctx->r15, 0X283C);
    // 0x8008FD00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008FD04: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008FD08: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FD0C: sw          $t8, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r24;
    // 0x8008FD10: b           L_8008FFA0
    // 0x8008FD14: nop

        goto L_8008FFA0;
    // 0x8008FD14: nop

L_8008FD18:
    // 0x8008FD18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FD1C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FD20: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x8008FD24: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x8008FD28: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8008FD2C: addiu       $t0, $t0, 0x263C
    ctx->r8 = ADD32(ctx->r8, 0X263C);
    // 0x8008FD30: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008FD34: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8008FD38: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FD3C: sw          $t1, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r9;
    // 0x8008FD40: b           L_8008FFA0
    // 0x8008FD44: nop

        goto L_8008FFA0;
    // 0x8008FD44: nop

L_8008FD48:
    // 0x8008FD48: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8008FD4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FD50: sw          $t2, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r10;
    // 0x8008FD54: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x8008FD58: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x8008FD5C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8008FD60: addiu       $t4, $t4, 0x259C
    ctx->r12 = ADD32(ctx->r12, 0X259C);
    // 0x8008FD64: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008FD68: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008FD6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FD70: sw          $t5, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r13;
    // 0x8008FD74: b           L_8008FFA0
    // 0x8008FD78: nop

        goto L_8008FFA0;
    // 0x8008FD78: nop

L_8008FD7C:
    // 0x8008FD7C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8008FD80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FD84: sw          $t6, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r14;
    // 0x8008FD88: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x8008FD8C: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8008FD90: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8008FD94: addiu       $t8, $t8, -0x7688
    ctx->r24 = ADD32(ctx->r24, -0X7688);
    // 0x8008FD98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008FD9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008FDA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FDA4: sw          $t9, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r25;
    // 0x8008FDA8: b           L_8008FFA0
    // 0x8008FDAC: nop

        goto L_8008FFA0;
    // 0x8008FDAC: nop

L_8008FDB0:
    // 0x8008FDB0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FDB4: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FDB8: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x8008FDBC: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x8008FDC0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008FDC4: addiu       $t1, $t1, 0x2F8C
    ctx->r9 = ADD32(ctx->r9, 0X2F8C);
    // 0x8008FDC8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008FDCC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008FDD0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FDD4: sw          $t2, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r10;
    // 0x8008FDD8: b           L_8008FFA0
    // 0x8008FDDC: nop

        goto L_8008FFA0;
    // 0x8008FDDC: nop

L_8008FDE0:
    // 0x8008FDE0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FDE4: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FDE8: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x8008FDEC: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x8008FDF0: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8008FDF4: addiu       $t4, $t4, 0x2F8C
    ctx->r12 = ADD32(ctx->r12, 0X2F8C);
    // 0x8008FDF8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008FDFC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008FE00: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FE04: sw          $t5, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r13;
    // 0x8008FE08: b           L_8008FFA0
    // 0x8008FE0C: nop

        goto L_8008FFA0;
    // 0x8008FE0C: nop

L_8008FE10:
    // 0x8008FE10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FE14: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FE18: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x8008FE1C: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8008FE20: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8008FE24: addiu       $t7, $t7, 0x2F8C
    ctx->r15 = ADD32(ctx->r15, 0X2F8C);
    // 0x8008FE28: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008FE2C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008FE30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FE34: sw          $t8, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r24;
    // 0x8008FE38: b           L_8008FFA0
    // 0x8008FE3C: nop

        goto L_8008FFA0;
    // 0x8008FE3C: nop

L_8008FE40:
    // 0x8008FE40: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8008FE44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FE48: sw          $t9, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r25;
    // 0x8008FE4C: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x8008FE50: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x8008FE54: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008FE58: addiu       $t1, $t1, 0x3118
    ctx->r9 = ADD32(ctx->r9, 0X3118);
    // 0x8008FE5C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008FE60: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008FE64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FE68: sw          $t2, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r10;
    // 0x8008FE6C: b           L_8008FFA0
    // 0x8008FE70: nop

        goto L_8008FFA0;
    // 0x8008FE70: nop

L_8008FE74:
    // 0x8008FE74: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8008FE78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FE7C: sw          $t3, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r11;
    // 0x8008FE80: sll         $t4, $a1, 3
    ctx->r12 = S32(ctx->r5 << 3);
    // 0x8008FE84: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x8008FE88: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8008FE8C: addiu       $t5, $t5, 0x3084
    ctx->r13 = ADD32(ctx->r13, 0X3084);
    // 0x8008FE90: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008FE94: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8008FE98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FE9C: sw          $t6, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r14;
    // 0x8008FEA0: b           L_8008FFA0
    // 0x8008FEA4: nop

        goto L_8008FFA0;
    // 0x8008FEA4: nop

L_8008FEA8:
    // 0x8008FEA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FEAC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FEB0: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x8008FEB4: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8008FEB8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8008FEBC: addiu       $t8, $t8, 0x3164
    ctx->r24 = ADD32(ctx->r24, 0X3164);
    // 0x8008FEC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008FEC4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008FEC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FECC: sw          $t9, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r25;
    // 0x8008FED0: b           L_8008FFA0
    // 0x8008FED4: nop

        goto L_8008FFA0;
    // 0x8008FED4: nop

L_8008FED8:
    // 0x8008FED8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FEDC: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FEE0: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x8008FEE4: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x8008FEE8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008FEEC: addiu       $t1, $t1, 0x1EB4
    ctx->r9 = ADD32(ctx->r9, 0X1EB4);
    // 0x8008FEF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008FEF4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008FEF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FEFC: sw          $t2, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r10;
    // 0x8008FF00: b           L_8008FFA0
    // 0x8008FF04: nop

        goto L_8008FFA0;
    // 0x8008FF04: nop

L_8008FF08:
    // 0x8008FF08: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FF0C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FF10: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x8008FF14: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x8008FF18: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8008FF1C: addiu       $t4, $t4, 0x2064
    ctx->r12 = ADD32(ctx->r12, 0X2064);
    // 0x8008FF20: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008FF24: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008FF28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FF2C: sw          $t5, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r13;
    // 0x8008FF30: b           L_8008FFA0
    // 0x8008FF34: nop

        goto L_8008FFA0;
    // 0x8008FF34: nop

L_8008FF38:
    // 0x8008FF38: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FF3C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FF40: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x8008FF44: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8008FF48: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8008FF4C: addiu       $t7, $t7, 0x1D2C
    ctx->r15 = ADD32(ctx->r15, 0X1D2C);
    // 0x8008FF50: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008FF54: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008FF58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FF5C: sw          $t8, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r24;
    // 0x8008FF60: b           L_8008FFA0
    // 0x8008FF64: nop

        goto L_8008FFA0;
    // 0x8008FF64: nop

L_8008FF68:
    // 0x8008FF68: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FF6C: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008FF70: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x8008FF74: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x8008FF78: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8008FF7C: addiu       $t0, $t0, 0x1A74
    ctx->r8 = ADD32(ctx->r8, 0X1A74);
    // 0x8008FF80: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008FF84: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8008FF88: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008FF8C: sw          $t1, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r9;
    // 0x8008FF90: b           L_8008FFA0
    // 0x8008FF94: nop

        goto L_8008FFA0;
    // 0x8008FF94: nop

L_8008FF98:
    // 0x8008FF98: b           L_8008FFA0
    // 0x8008FF9C: nop

        goto L_8008FFA0;
    // 0x8008FF9C: nop

L_8008FFA0:
    // 0x8008FFA0: b           L_8008FFA8
    // 0x8008FFA4: nop

        goto L_8008FFA8;
    // 0x8008FFA4: nop

L_8008FFA8:
    // 0x8008FFA8: jr          $ra
    // 0x8008FFAC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008FFAC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800BD86C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD86C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BD870: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BD874: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800BD878: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800BD87C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800BD880: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800BD884: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800BD888: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800BD88C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800BD890: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800BD894: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BD898: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BD89C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800BD8A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BD8A4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800BD8A8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BD8AC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800BD8B0: addiu       $a1, $a1, 0x3D9C
    ctx->r5 = ADD32(ctx->r5, 0X3D9C);
    // 0x800BD8B4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BD8B8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800BD8BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800BD8C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BD8C4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800BD8C8: jal         0x80027464
    // 0x800BD8CC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800BD8CC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800BD8D0: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x800BD8D4: lb          $t1, 0x2F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD8D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BD8DC: beq         $t1, $at, L_800BDB74
    if (ctx->r9 == ctx->r1) {
        // 0x800BD8E0: nop
    
            goto L_800BDB74;
    }
    // 0x800BD8E0: nop

    // 0x800BD8E4: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD8E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD8EC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800BD8F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BD8F4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BD8F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BD8FC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800BD900: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800BD904: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BD908: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800BD90C: lb          $t7, 0x2F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD910: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD914: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800BD918: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BD91C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800BD920: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BD924: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800BD928: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800BD92C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800BD930: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x800BD934: lb          $t9, 0x2F($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD938: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD93C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800BD940: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800BD944: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BD948: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800BD94C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BD950: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BD954: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x800BD958: lb          $t1, 0x2F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD95C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD960: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800BD964: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800BD968: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800BD96C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800BD970: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800BD974: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800BD978: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800BD97C: sh          $t0, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r8;
    // 0x800BD980: lb          $t4, 0x2F($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD984: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD988: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800BD98C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800BD990: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BD994: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800BD998: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BD99C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800BD9A0: addiu       $t2, $zero, 0x1E0
    ctx->r10 = ADD32(0, 0X1E0);
    // 0x800BD9A4: sh          $t2, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r10;
    // 0x800BD9A8: lb          $t8, 0x2F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD9AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD9B0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800BD9B4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BD9B8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800BD9BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BD9C0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800BD9C4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800BD9C8: addiu       $t5, $zero, 0x190
    ctx->r13 = ADD32(0, 0X190);
    // 0x800BD9CC: sh          $t5, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = ctx->r13;
    // 0x800BD9D0: lb          $t6, 0x2F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD9D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD9D8: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x800BD9DC: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800BD9E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800BD9E4: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800BD9E8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800BD9EC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800BD9F0: sh          $zero, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = 0;
    // 0x800BD9F4: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD9F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD9FC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800BDA00: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800BDA04: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800BDA08: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800BDA0C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800BDA10: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800BDA14: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BDA18: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800BDA1C: addiu       $t4, $t4, 0x7E64
    ctx->r12 = ADD32(ctx->r12, 0X7E64);
    // 0x800BDA20: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x800BDA24: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800BDA28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BDA2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BDA30: jal         0x8001C0EC
    // 0x800BDA34: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800BDA34: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    after_1:
    // 0x800BDA38: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x800BDA3C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BDA40: addiu       $a3, $a3, 0x7EA8
    ctx->r7 = ADD32(ctx->r7, 0X7EA8);
    // 0x800BDA44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BDA48: jal         0x8001ABF4
    // 0x800BDA4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800BDA4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800BDA50: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800BDA54: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x800BDA58: nop

    // 0x800BDA5C: lh          $t7, 0xA($t2)
    ctx->r15 = MEM_H(ctx->r10, 0XA);
    // 0x800BDA60: nop

    // 0x800BDA64: beq         $t7, $zero, L_800BDB74
    if (ctx->r15 == 0) {
        // 0x800BDA68: nop
    
            goto L_800BDB74;
    }
    // 0x800BDA68: nop

    // 0x800BDA6C: lb          $t5, 0x2F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2F);
    // 0x800BDA70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BDA74: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x800BDA78: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x800BDA7C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800BDA80: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x800BDA84: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800BDA88: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800BDA8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800BDA90: sh          $t8, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r24;
    // 0x800BDA94: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800BDA98: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800BDA9C: nop

    // 0x800BDAA0: lh          $t1, 0xC($t6)
    ctx->r9 = MEM_H(ctx->r14, 0XC);
    // 0x800BDAA4: nop

    // 0x800BDAA8: bgez        $t1, L_800BDADC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800BDAAC: nop
    
            goto L_800BDADC;
    }
    // 0x800BDAAC: nop

    // 0x800BDAB0: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x800BDAB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BDAB8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800BDABC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BDAC0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BDAC4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BDAC8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800BDACC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800BDAD0: negu        $t0, $t1
    ctx->r8 = SUB32(0, ctx->r9);
    // 0x800BDAD4: b           L_800BDB0C
    // 0x800BDAD8: sh          $t0, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r8;
        goto L_800BDB0C;
    // 0x800BDAD8: sh          $t0, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r8;
L_800BDADC:
    // 0x800BDADC: lb          $t5, 0x2F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2F);
    // 0x800BDAE0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800BDAE4: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x800BDAE8: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800BDAEC: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x800BDAF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800BDAF4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800BDAF8: lh          $t7, 0xC($t2)
    ctx->r15 = MEM_H(ctx->r10, 0XC);
    // 0x800BDAFC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800BDB00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BDB04: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800BDB08: sh          $t7, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r15;
L_800BDB0C:
    // 0x800BDB0C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800BDB10: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x800BDB14: nop

    // 0x800BDB18: lh          $t6, 0xE($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XE);
    // 0x800BDB1C: nop

    // 0x800BDB20: bgez        $t6, L_800BDB30
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800BDB24: nop
    
            goto L_800BDB30;
    }
    // 0x800BDB24: nop

    // 0x800BDB28: b           L_800BDB44
    // 0x800BDB2C: negu        $s0, $t6
    ctx->r16 = SUB32(0, ctx->r14);
        goto L_800BDB44;
    // 0x800BDB2C: negu        $s0, $t6
    ctx->r16 = SUB32(0, ctx->r14);
L_800BDB30:
    // 0x800BDB30: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800BDB34: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x800BDB38: nop

    // 0x800BDB3C: lh          $s0, 0xE($t1)
    ctx->r16 = MEM_H(ctx->r9, 0XE);
    // 0x800BDB40: nop

L_800BDB44:
    // 0x800BDB44: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x800BDB48: sll         $t3, $s0, 4
    ctx->r11 = S32(ctx->r16 << 4);
    // 0x800BDB4C: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x800BDB50: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x800BDB54: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BDB58: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x800BDB5C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800BDB60: subu        $t3, $t3, $s0
    ctx->r11 = SUB32(ctx->r11, ctx->r16);
    // 0x800BDB64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BDB68: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800BDB6C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800BDB70: sh          $t3, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r11;
L_800BDB74:
    // 0x800BDB74: b           L_800BDB7C
    // 0x800BDB78: nop

        goto L_800BDB7C;
    // 0x800BDB78: nop

L_800BDB7C:
    // 0x800BDB7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BDB80: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800BDB84: jr          $ra
    // 0x800BDB88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800BDB88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007EDF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007EDF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007EDF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007EDFC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8007EE00: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8007EE04: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x8007EE08: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x8007EE0C: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007EE10: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007EE14: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8007EE18: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8007EE1C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007EE20: jal         0x8007EBEC
    // 0x8007EE24: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8007EBEC(rdram, ctx);
        goto after_0;
    // 0x8007EE24: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x8007EE28: b           L_8007EE30
    // 0x8007EE2C: nop

        goto L_8007EE30;
    // 0x8007EE2C: nop

L_8007EE30:
    // 0x8007EE30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007EE34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007EE38: jr          $ra
    // 0x8007EE3C: nop

    return;
    // 0x8007EE3C: nop

;}
RECOMP_FUNC void func_8007FB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FB34: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007FB38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007FB3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8007FB40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007FB44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007FB48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FB4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007FB50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FB54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007FB58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007FB5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007FB60: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8007FB64: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8007FB68: addiu       $t0, $zero, 0x2BE
    ctx->r8 = ADD32(0, 0X2BE);
    // 0x8007FB6C: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
    // 0x8007FB70: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8007FB74: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8007FB78: sh          $t2, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = ctx->r10;
    // 0x8007FB7C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8007FB80: nop

    // 0x8007FB84: sh          $zero, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = 0;
    // 0x8007FB88: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8007FB8C: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x8007FB90: sh          $t5, 0xC2($t6)
    MEM_H(0XC2, ctx->r14) = ctx->r13;
    // 0x8007FB94: b           L_8007FB9C
    // 0x8007FB98: nop

        goto L_8007FB9C;
    // 0x8007FB98: nop

L_8007FB9C:
    // 0x8007FB9C: jr          $ra
    // 0x8007FBA0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007FBA0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800E7974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7974: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E7978: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E797C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E7980: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E7984: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E7988: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E798C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7990: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E7994: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7998: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E799C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E79A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E79A4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E79A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E79AC: nop

    // 0x800E79B0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E79B4: nop

    // 0x800E79B8: bne         $t1, $zero, L_800E7A10
    if (ctx->r9 != 0) {
        // 0x800E79BC: nop
    
            goto L_800E7A10;
    }
    // 0x800E79BC: nop

    // 0x800E79C0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E79C4: nop

    // 0x800E79C8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E79CC: nop

    // 0x800E79D0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E79D4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E79D8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E79DC: nop

    // 0x800E79E0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E79E4: nop

    // 0x800E79E8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E79EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E79F0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E79F4: addiu       $t7, $t7, -0x6878
    ctx->r15 = ADD32(ctx->r15, -0X6878);
    // 0x800E79F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E79FC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E7A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7A04: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x800E7A08: jal         0x8001C0EC
    // 0x800E7A0C: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E7A0C: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
L_800E7A10:
    // 0x800E7A10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7A14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7A18: jal         0x8002A8B4
    // 0x800E7A1C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800E7A1C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_1:
    // 0x800E7A20: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E7A24: nop

    // 0x800E7A28: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800E7A2C: nop

    // 0x800E7A30: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x800E7A34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7A38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7A3C: jal         0x8001B4AC
    // 0x800E7A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E7A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E7A44: beq         $v0, $zero, L_800E7A64
    if (ctx->r2 == 0) {
        // 0x800E7A48: nop
    
            goto L_800E7A64;
    }
    // 0x800E7A48: nop

    // 0x800E7A4C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E7A50: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800E7A54: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800E7A58: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E7A5C: nop

    // 0x800E7A60: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800E7A64:
    // 0x800E7A64: b           L_800E7A6C
    // 0x800E7A68: nop

        goto L_800E7A6C;
    // 0x800E7A68: nop

L_800E7A6C:
    // 0x800E7A6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7A70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E7A74: jr          $ra
    // 0x800E7A78: nop

    return;
    // 0x800E7A78: nop

;}
RECOMP_FUNC void func_80069A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069A54: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80069A58: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x80069A5C: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80069A60: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80069A64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80069A68: lb          $t6, -0x1C34($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C34);
    // 0x80069A6C: nop

    // 0x80069A70: beq         $t6, $zero, L_80069A80
    if (ctx->r14 == 0) {
        // 0x80069A74: nop
    
            goto L_80069A80;
    }
    // 0x80069A74: nop

    // 0x80069A78: jr          $ra
    // 0x80069A7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80069A7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80069A80:
    // 0x80069A80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069A84: sb          $a0, -0x1C34($at)
    MEM_B(-0X1C34, ctx->r1) = ctx->r4;
    // 0x80069A88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069A8C: sb          $a1, -0x1C33($at)
    MEM_B(-0X1C33, ctx->r1) = ctx->r5;
    // 0x80069A90: jr          $ra
    // 0x80069A94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80069A94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069A98: jr          $ra
    // 0x80069A9C: nop

    return;
    // 0x80069A9C: nop

    // 0x80069AA0: jr          $ra
    // 0x80069AA4: nop

    return;
    // 0x80069AA4: nop

;}
RECOMP_FUNC void func_800D8014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D8014: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D8018: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D801C: nop

    // 0x800D8020: bne         $t6, $zero, L_800D807C
    if (ctx->r14 != 0) {
        // 0x800D8024: nop
    
            goto L_800D807C;
    }
    // 0x800D8024: nop

    // 0x800D8028: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800D802C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800D8030: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D8034: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D8038: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D803C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D8040: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D8044: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D8048: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D804C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800D8050: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D8054: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D8058: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D805C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D8060: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D8064: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D8068: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D806C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D8070: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D8074: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800D8078: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_800D807C:
    // 0x800D807C: jr          $ra
    // 0x800D8080: nop

    return;
    // 0x800D8080: nop

    // 0x800D8084: jr          $ra
    // 0x800D8088: nop

    return;
    // 0x800D8088: nop

;}
RECOMP_FUNC void func_800E3474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E347C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3480: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3484: jal         0x8002B0E4
    // 0x800E3488: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800E3488: nop

    after_0:
    // 0x800E348C: b           L_800E3494
    // 0x800E3490: nop

        goto L_800E3494;
    // 0x800E3490: nop

L_800E3494:
    // 0x800E3494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E349C: jr          $ra
    // 0x800E34A0: nop

    return;
    // 0x800E34A0: nop

;}
RECOMP_FUNC void func_80064358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064358: slti        $at, $a0, 0x4E
    ctx->r1 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x8006435C: beq         $at, $zero, L_800643A8
    if (ctx->r1 == 0) {
        // 0x80064360: nop
    
            goto L_800643A8;
    }
    // 0x80064360: nop

L_80064364:
    // 0x80064364: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80064368: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8006436C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80064370: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80064374: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80064378: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8006437C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80064380: lh          $t7, 0x41F4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F4);
    // 0x80064384: nop

    // 0x80064388: bne         $t7, $zero, L_80064398
    if (ctx->r15 != 0) {
        // 0x8006438C: nop
    
            goto L_80064398;
    }
    // 0x8006438C: nop

    // 0x80064390: jr          $ra
    // 0x80064394: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80064394: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80064398:
    // 0x80064398: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8006439C: slti        $at, $a0, 0x4E
    ctx->r1 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x800643A0: bne         $at, $zero, L_80064364
    if (ctx->r1 != 0) {
        // 0x800643A4: nop
    
            goto L_80064364;
    }
    // 0x800643A4: nop

L_800643A8:
    // 0x800643A8: jr          $ra
    // 0x800643AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x800643AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800643B0: jr          $ra
    // 0x800643B4: nop

    return;
    // 0x800643B4: nop

    // 0x800643B8: jr          $ra
    // 0x800643BC: nop

    return;
    // 0x800643BC: nop

;}
RECOMP_FUNC void func_80088D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088D84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80088D88: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088D8C: swc1        $f4, 0x4F30($at)
    MEM_W(0X4F30, ctx->r1) = ctx->f4.u32l;
    // 0x80088D90: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088D94: swc1        $f4, 0x4F2C($at)
    MEM_W(0X4F2C, ctx->r1) = ctx->f4.u32l;
    // 0x80088D98: swc1        $f4, 0x4F28($at)
    MEM_W(0X4F28, ctx->r1) = ctx->f4.u32l;
    // 0x80088D9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80088DA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088DA4: swc1        $f6, 0x4F4C($at)
    MEM_W(0X4F4C, ctx->r1) = ctx->f6.u32l;
    // 0x80088DA8: swc1        $f6, 0x4F48($at)
    MEM_W(0X4F48, ctx->r1) = ctx->f6.u32l;
    // 0x80088DAC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088DB0: swc1        $f6, 0x4F44($at)
    MEM_W(0X4F44, ctx->r1) = ctx->f6.u32l;
    // 0x80088DB4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80088DB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088DBC: swc1        $f8, 0x4F40($at)
    MEM_W(0X4F40, ctx->r1) = ctx->f8.u32l;
    // 0x80088DC0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088DC4: swc1        $f8, 0x4F3C($at)
    MEM_W(0X4F3C, ctx->r1) = ctx->f8.u32l;
    // 0x80088DC8: swc1        $f8, 0x4F38($at)
    MEM_W(0X4F38, ctx->r1) = ctx->f8.u32l;
    // 0x80088DCC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088DD0: swc1        $f8, 0x4F34($at)
    MEM_W(0X4F34, ctx->r1) = ctx->f8.u32l;
    // 0x80088DD4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80088DD8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088DDC: swc1        $f10, 0x4F58($at)
    MEM_W(0X4F58, ctx->r1) = ctx->f10.u32l;
    // 0x80088DE0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088DE4: swc1        $f10, 0x4F54($at)
    MEM_W(0X4F54, ctx->r1) = ctx->f10.u32l;
    // 0x80088DE8: swc1        $f10, 0x4F50($at)
    MEM_W(0X4F50, ctx->r1) = ctx->f10.u32l;
    // 0x80088DEC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80088DF0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088DF4: swc1        $f16, 0x4F70($at)
    MEM_W(0X4F70, ctx->r1) = ctx->f16.u32l;
    // 0x80088DF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088DFC: swc1        $f16, 0x4F6C($at)
    MEM_W(0X4F6C, ctx->r1) = ctx->f16.u32l;
    // 0x80088E00: swc1        $f16, 0x4F68($at)
    MEM_W(0X4F68, ctx->r1) = ctx->f16.u32l;
    // 0x80088E04: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80088E08: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E0C: swc1        $f18, 0x4F74($at)
    MEM_W(0X4F74, ctx->r1) = ctx->f18.u32l;
    // 0x80088E10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E14: swc1        $f18, 0x4F64($at)
    MEM_W(0X4F64, ctx->r1) = ctx->f18.u32l;
    // 0x80088E18: swc1        $f18, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f18.u32l;
    // 0x80088E1C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E20: swc1        $f18, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f18.u32l;
    // 0x80088E24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80088E28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E2C: swc1        $f4, 0x4F80($at)
    MEM_W(0X4F80, ctx->r1) = ctx->f4.u32l;
    // 0x80088E30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E34: swc1        $f4, 0x4F7C($at)
    MEM_W(0X4F7C, ctx->r1) = ctx->f4.u32l;
    // 0x80088E38: swc1        $f4, 0x4F78($at)
    MEM_W(0X4F78, ctx->r1) = ctx->f4.u32l;
    // 0x80088E3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80088E40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E44: swc1        $f6, 0x4F98($at)
    MEM_W(0X4F98, ctx->r1) = ctx->f6.u32l;
    // 0x80088E48: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E4C: swc1        $f6, 0x4F94($at)
    MEM_W(0X4F94, ctx->r1) = ctx->f6.u32l;
    // 0x80088E50: swc1        $f6, 0x4F90($at)
    MEM_W(0X4F90, ctx->r1) = ctx->f6.u32l;
    // 0x80088E54: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80088E58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E5C: swc1        $f8, 0x4F9C($at)
    MEM_W(0X4F9C, ctx->r1) = ctx->f8.u32l;
    // 0x80088E60: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E64: swc1        $f8, 0x4F8C($at)
    MEM_W(0X4F8C, ctx->r1) = ctx->f8.u32l;
    // 0x80088E68: swc1        $f8, 0x4F88($at)
    MEM_W(0X4F88, ctx->r1) = ctx->f8.u32l;
    // 0x80088E6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E70: swc1        $f8, 0x4F84($at)
    MEM_W(0X4F84, ctx->r1) = ctx->f8.u32l;
    // 0x80088E74: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80088E78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E7C: sh          $t6, 0x4FA0($at)
    MEM_H(0X4FA0, ctx->r1) = ctx->r14;
    // 0x80088E80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E84: sh          $zero, 0x4FA2($at)
    MEM_H(0X4FA2, ctx->r1) = 0;
    // 0x80088E88: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E8C: sh          $zero, 0x4FA6($at)
    MEM_H(0X4FA6, ctx->r1) = 0;
    // 0x80088E90: sh          $zero, 0x4FA4($at)
    MEM_H(0X4FA4, ctx->r1) = 0;
    // 0x80088E94: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088E98: sw          $zero, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = 0;
    // 0x80088E9C: jr          $ra
    // 0x80088EA0: nop

    return;
    // 0x80088EA0: nop

    // 0x80088EA4: jr          $ra
    // 0x80088EA8: nop

    return;
    // 0x80088EA8: nop

;}
RECOMP_FUNC void func_800D3048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3048: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D304C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3050: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D3054: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D3058: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D305C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D3060: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3064: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D3068: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D306C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D3070: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D3074: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D3078: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800D307C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D3080: nop

    // 0x800D3084: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D3088: nop

    // 0x800D308C: bne         $t1, $zero, L_800D30F4
    if (ctx->r9 != 0) {
        // 0x800D3090: nop
    
            goto L_800D30F4;
    }
    // 0x800D3090: nop

    // 0x800D3094: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D3098: nop

    // 0x800D309C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D30A0: nop

    // 0x800D30A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D30A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D30AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D30B0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800D30B4: nop

    // 0x800D30B8: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800D30BC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800D30C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D30C4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D30C8: nop

    // 0x800D30CC: swc1        $f6, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f6.u32l;
    // 0x800D30D0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800D30D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D30D8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800D30DC: nop

    // 0x800D30E0: swc1        $f8, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f8.u32l;
    // 0x800D30E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D30E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D30EC: jal         0x8001BB04
    // 0x800D30F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_0;
    // 0x800D30F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800D30F4:
    // 0x800D30F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D30F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D30FC: jal         0x80029D04
    // 0x800D3100: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800D3100: nop

    after_1:
    // 0x800D3104: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D3108: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D310C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3110: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3114: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800D3118: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800D311C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D3120: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D3124: jal         0x800295C0
    // 0x800D3128: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_2;
    // 0x800D3128: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x800D312C: bne         $v0, $zero, L_800D3190
    if (ctx->r2 != 0) {
        // 0x800D3130: nop
    
            goto L_800D3190;
    }
    // 0x800D3130: nop

    // 0x800D3134: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800D3138: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D313C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800D3140: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800D3144: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800D3148: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800D314C: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x800D3150: nop

    // 0x800D3154: bc1f        L_800D3190
    if (!c1cs) {
        // 0x800D3158: nop
    
            goto L_800D3190;
    }
    // 0x800D3158: nop

    // 0x800D315C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D3160: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800D3164: nop

    // 0x800D3168: swc1        $f10, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f10.u32l;
    // 0x800D316C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D3170: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800D3174: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x800D3178: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800D317C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800D3180: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800D3184: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D3188: nop

    // 0x800D318C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800D3190:
    // 0x800D3190: b           L_800D3198
    // 0x800D3194: nop

        goto L_800D3198;
    // 0x800D3194: nop

L_800D3198:
    // 0x800D3198: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D319C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800D31A0: jr          $ra
    // 0x800D31A4: nop

    return;
    // 0x800D31A4: nop

;}
RECOMP_FUNC void func_800BBF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BBF30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BBF34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BBF38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800BBF3C: sb          $zero, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = 0;
L_800BBF40:
    // 0x800BBF40: lb          $t6, 0x23($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X23);
    // 0x800BBF44: lb          $t8, 0x1E($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X1E);
    // 0x800BBF48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BBF4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BBF50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BBF54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BBF58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BBF5C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800BBF60: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800BBF64: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800BBF68: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800BBF6C: lh          $t1, 0x4238($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4238);
    // 0x800BBF70: nop

    // 0x800BBF74: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    // 0x800BBF78: lb          $t3, 0x1F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X1F);
    // 0x800BBF7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBF80: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800BBF84: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BBF88: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BBF8C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BBF90: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800BBF94: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800BBF98: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BBF9C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800BBFA0: lb          $t5, 0x1F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1F);
    // 0x800BBFA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBFA8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BBFAC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BBFB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BBFB4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BBFB8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BBFBC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BBFC0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BBFC4: lb          $t8, 0x23($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X23);
    // 0x800BBFC8: lb          $t5, 0x1F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1F);
    // 0x800BBFCC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800BBFD0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800BBFD4: lb          $t9, 0x1E($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X1E);
    // 0x800BBFD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BBFDC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800BBFE0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BBFE4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BBFE8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800BBFEC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BBFF0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800BBFF4: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x800BBFF8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BBFFC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800BC000: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x800BC004: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BC008: lh          $t4, 0xE6($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XE6);
    // 0x800BC00C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BC010: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x800BC014: sh          $t4, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r12;
    // 0x800BC018: lb          $t7, 0x1F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X1F);
    // 0x800BC01C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BC020: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x800BC024: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800BC028: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800BC02C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800BC030: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800BC034: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800BC038: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800BC03C: sh          $t9, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r25;
    // 0x800BC040: lb          $t2, 0x1F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X1F);
    // 0x800BC044: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BC048: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800BC04C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800BC050: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800BC054: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800BC058: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800BC05C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800BC060: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800BC064: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
    // 0x800BC068: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x800BC06C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BC070: addiu       $a3, $a3, 0x7E48
    ctx->r7 = ADD32(ctx->r7, 0X7E48);
    // 0x800BC074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BC078: jal         0x8001ABF4
    // 0x800BC07C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800BC07C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800BC080: lb          $t6, 0x1E($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1E);
    // 0x800BC084: nop

    // 0x800BC088: bne         $t6, $zero, L_800BC0B8
    if (ctx->r14 != 0) {
        // 0x800BC08C: nop
    
            goto L_800BC0B8;
    }
    // 0x800BC08C: nop

    // 0x800BC090: lb          $t4, 0x1F($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X1F);
    // 0x800BC094: lb          $t3, 0x23($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X23);
    // 0x800BC098: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800BC09C: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800BC0A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800BC0A4: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800BC0A8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800BC0AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BC0B0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800BC0B4: sh          $t3, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r11;
L_800BC0B8:
    // 0x800BC0B8: lb          $t7, 0x1E($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X1E);
    // 0x800BC0BC: nop

    // 0x800BC0C0: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800BC0C4: sll         $t0, $t9, 24
    ctx->r8 = S32(ctx->r25 << 24);
    // 0x800BC0C8: sra         $t2, $t0, 24
    ctx->r10 = S32(SIGNED(ctx->r8) >> 24);
    // 0x800BC0CC: slti        $at, $t2, 0x8
    ctx->r1 = SIGNED(ctx->r10) < 0X8 ? 1 : 0;
    // 0x800BC0D0: bne         $at, $zero, L_800BBF40
    if (ctx->r1 != 0) {
        // 0x800BC0D4: sb          $t9, 0x1E($sp)
        MEM_B(0X1E, ctx->r29) = ctx->r25;
            goto L_800BBF40;
    }
    // 0x800BC0D4: sb          $t9, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r25;
    // 0x800BC0D8: lb          $t5, 0x23($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X23);
    // 0x800BC0DC: lb          $t1, 0x1F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X1F);
    // 0x800BC0E0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BC0E4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BC0E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BC0EC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BC0F0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BC0F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BC0F8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BC0FC: sh          $t1, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r9;
    // 0x800BC100: lb          $v0, 0x1E($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X1E);
    // 0x800BC104: b           L_800BC114
    // 0x800BC108: nop

        goto L_800BC114;
    // 0x800BC108: nop

    // 0x800BC10C: b           L_800BC114
    // 0x800BC110: nop

        goto L_800BC114;
    // 0x800BC110: nop

L_800BC114:
    // 0x800BC114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BC118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BC11C: jr          $ra
    // 0x800BC120: nop

    return;
    // 0x800BC120: nop

;}
RECOMP_FUNC void func_800B33B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B33B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B33B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B33BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B33C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B33C4: jal         0x8002B0E4
    // 0x800B33C8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800B33C8: nop

    after_0:
    // 0x800B33CC: b           L_800B33D4
    // 0x800B33D0: nop

        goto L_800B33D4;
    // 0x800B33D0: nop

L_800B33D4:
    // 0x800B33D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B33D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B33DC: jr          $ra
    // 0x800B33E0: nop

    return;
    // 0x800B33E0: nop

;}
RECOMP_FUNC void func_800E2CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2CDC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E2CE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E2CE4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E2CE8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E2CEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E2CF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2CF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E2CF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2CFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E2D00: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E2D04: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E2D08: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E2D0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E2D10: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800E2D14: nop

    // 0x800E2D18: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x800E2D1C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E2D20: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E2D24: nop

    // 0x800E2D28: swc1        $f6, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f6.u32l;
    // 0x800E2D2C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E2D30: nop

    // 0x800E2D34: lwc1        $f8, 0x2C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800E2D38: nop

    // 0x800E2D3C: swc1        $f8, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f8.u32l;
    // 0x800E2D40: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E2D44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E2D48: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800E2D4C: nop

    // 0x800E2D50: bne         $t4, $at, L_800E2D74
    if (ctx->r12 != ctx->r1) {
        // 0x800E2D54: nop
    
            goto L_800E2D74;
    }
    // 0x800E2D54: nop

    // 0x800E2D58: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E2D5C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800E2D60: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800E2D64: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800E2D68: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800E2D6C: b           L_800E2E18
    // 0x800E2D70: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
        goto L_800E2E18;
    // 0x800E2D70: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
L_800E2D74:
    // 0x800E2D74: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800E2D78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E2D7C: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800E2D80: nop

    // 0x800E2D84: bne         $t0, $at, L_800E2D9C
    if (ctx->r8 != ctx->r1) {
        // 0x800E2D88: nop
    
            goto L_800E2D9C;
    }
    // 0x800E2D88: nop

    // 0x800E2D8C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E2D90: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800E2D94: b           L_800E2E18
    // 0x800E2D98: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
        goto L_800E2E18;
    // 0x800E2D98: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
L_800E2D9C:
    // 0x800E2D9C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E2DA0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800E2DA4: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800E2DA8: nop

    // 0x800E2DAC: bne         $t4, $at, L_800E2DC4
    if (ctx->r12 != ctx->r1) {
        // 0x800E2DB0: nop
    
            goto L_800E2DC4;
    }
    // 0x800E2DB0: nop

    // 0x800E2DB4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E2DB8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x800E2DBC: b           L_800E2E18
    // 0x800E2DC0: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
        goto L_800E2E18;
    // 0x800E2DC0: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_800E2DC4:
    // 0x800E2DC4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800E2DC8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800E2DCC: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x800E2DD0: nop

    // 0x800E2DD4: bne         $t8, $at, L_800E2DF4
    if (ctx->r24 != ctx->r1) {
        // 0x800E2DD8: nop
    
            goto L_800E2DF4;
    }
    // 0x800E2DD8: nop

    // 0x800E2DDC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800E2DE0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800E2DE4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800E2DE8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E2DEC: b           L_800E2E18
    // 0x800E2DF0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_800E2E18;
    // 0x800E2DF0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800E2DF4:
    // 0x800E2DF4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E2DF8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800E2DFC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800E2E00: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800E2E04: nop

    // 0x800E2E08: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800E2E0C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800E2E10: nop

    // 0x800E2E14: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_800E2E18:
    // 0x800E2E18: b           L_800E2E20
    // 0x800E2E1C: nop

        goto L_800E2E20;
    // 0x800E2E1C: nop

L_800E2E20:
    // 0x800E2E20: jr          $ra
    // 0x800E2E24: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E2E24: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800D7348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D7348: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D734C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D7350: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D7354: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D7358: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D735C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D7360: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D7364: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D7368: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D736C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D7370: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D7374: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D7378: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D737C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D7380: nop

    // 0x800D7384: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D7388: nop

    // 0x800D738C: bne         $t1, $zero, L_800D7428
    if (ctx->r9 != 0) {
        // 0x800D7390: nop
    
            goto L_800D7428;
    }
    // 0x800D7390: nop

    // 0x800D7394: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D7398: nop

    // 0x800D739C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D73A0: nop

    // 0x800D73A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D73A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D73AC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D73B0: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800D73B4: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800D73B8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800D73BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D73C0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D73C4: nop

    // 0x800D73C8: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800D73CC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D73D0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800D73D4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800D73D8: lwc1        $f12, 0x128($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X128);
    // 0x800D73DC: jal         0x80015538
    // 0x800D73E0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800D73E0: nop

    after_0:
    // 0x800D73E4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D73E8: nop

    // 0x800D73EC: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800D73F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D73F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D73F8: lui         $a1, 0x4166
    ctx->r5 = S32(0X4166 << 16);
    // 0x800D73FC: lui         $a2, 0x3F87
    ctx->r6 = S32(0X3F87 << 16);
    // 0x800D7400: ori         $a2, $a2, 0xCB3E
    ctx->r6 = ctx->r6 | 0XCB3E;
    // 0x800D7404: jal         0x80029EF8
    // 0x800D7408: ori         $a1, $a1, 0xF26
    ctx->r5 = ctx->r5 | 0XF26;
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800D7408: ori         $a1, $a1, 0xF26
    ctx->r5 = ctx->r5 | 0XF26;
    after_1:
    // 0x800D740C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7410: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7414: jal         0x8001BBDC
    // 0x800D7418: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800D7418: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800D741C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D7420: nop

    // 0x800D7424: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
L_800D7428:
    // 0x800D7428: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D742C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x800D7430: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800D7434: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800D7438: jal         0x80015538
    // 0x800D743C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800D743C: nop

    after_3:
    // 0x800D7440: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D7444: nop

    // 0x800D7448: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x800D744C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D7450: nop

    // 0x800D7454: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800D7458: nop

    // 0x800D745C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800D7460: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D7464: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D7468: nop

    // 0x800D746C: swc1        $f8, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f8.u32l;
    // 0x800D7470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7474: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7478: jal         0x80029C40
    // 0x800D747C: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800D747C: nop

    after_4:
    // 0x800D7480: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D7484: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D7488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D748C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D7494: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800D7498: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D749C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D74A0: jal         0x80029018
    // 0x800D74A4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800D74A4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x800D74A8: beq         $v0, $zero, L_800D74D4
    if (ctx->r2 == 0) {
        // 0x800D74AC: nop
    
            goto L_800D74D4;
    }
    // 0x800D74AC: nop

    // 0x800D74B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D74B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D74B8: nop

    // 0x800D74BC: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x800D74C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D74C4: nop

    // 0x800D74C8: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800D74CC: nop

    // 0x800D74D0: swc1        $f4, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f4.u32l;
L_800D74D4:
    // 0x800D74D4: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800D74D8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D74DC: nop

    // 0x800D74E0: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
    // 0x800D74E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D74E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D74EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D74F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D74F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D74F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800D74FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D7500: jal         0x80029F58
    // 0x800D7504: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_6;
    // 0x800D7504: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x800D7508: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D750C: bne         $v0, $at, L_800D7520
    if (ctx->r2 != ctx->r1) {
        // 0x800D7510: nop
    
            goto L_800D7520;
    }
    // 0x800D7510: nop

    // 0x800D7514: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D7518: nop

    // 0x800D751C: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_800D7520:
    // 0x800D7520: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D7524: nop

    // 0x800D7528: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800D752C: nop

    // 0x800D7530: bne         $t0, $zero, L_800D7550
    if (ctx->r8 != 0) {
        // 0x800D7534: nop
    
            goto L_800D7550;
    }
    // 0x800D7534: nop

    // 0x800D7538: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D753C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7540: jal         0x8002B0E4
    // 0x800D7544: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800D7544: nop

    after_7:
    // 0x800D7548: b           L_800D7568
    // 0x800D754C: nop

        goto L_800D7568;
    // 0x800D754C: nop

L_800D7550:
    // 0x800D7550: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D7554: nop

    // 0x800D7558: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800D755C: nop

    // 0x800D7560: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800D7564: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_800D7568:
    // 0x800D7568: b           L_800D7570
    // 0x800D756C: nop

        goto L_800D7570;
    // 0x800D756C: nop

L_800D7570:
    // 0x800D7570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D7574: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D7578: jr          $ra
    // 0x800D757C: nop

    return;
    // 0x800D757C: nop

;}
RECOMP_FUNC void func_800AFB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AFB8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AFB90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AFB94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AFB98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AFB9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AFBA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AFBA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AFBA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AFBAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AFBB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AFBB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AFBB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AFBBC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AFBC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AFBC4: nop

    // 0x800AFBC8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AFBCC: nop

    // 0x800AFBD0: bne         $t1, $zero, L_800AFC28
    if (ctx->r9 != 0) {
        // 0x800AFBD4: nop
    
            goto L_800AFC28;
    }
    // 0x800AFBD4: nop

    // 0x800AFBD8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AFBDC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AFBE0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AFBE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AFBE8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AFBEC: nop

    // 0x800AFBF0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AFBF4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AFBF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AFBFC: nop

    // 0x800AFC00: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AFC04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFC08: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800AFC0C: addiu       $t6, $t6, 0x7660
    ctx->r14 = ADD32(ctx->r14, 0X7660);
    // 0x800AFC10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFC14: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800AFC18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AFC1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800AFC20: jal         0x8001C0EC
    // 0x800AFC24: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800AFC24: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    after_0:
L_800AFC28:
    // 0x800AFC28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFC2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFC30: jal         0x80029C40
    // 0x800AFC34: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800AFC34: nop

    after_1:
    // 0x800AFC38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFC3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFC40: jal         0x80029D04
    // 0x800AFC44: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800AFC44: nop

    after_2:
    // 0x800AFC48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFC4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFC50: jal         0x8001B44C
    // 0x800AFC54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x800AFC54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800AFC58: beq         $v0, $zero, L_800AFCA8
    if (ctx->r2 == 0) {
        // 0x800AFC5C: nop
    
            goto L_800AFCA8;
    }
    // 0x800AFC5C: nop

    // 0x800AFC60: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AFC64: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800AFC68: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800AFC6C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800AFC70: nop

    // 0x800AFC74: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800AFC78: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AFC7C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800AFC80: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x800AFC84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFC88: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800AFC8C: addiu       $t2, $t2, 0x7660
    ctx->r10 = ADD32(ctx->r10, 0X7660);
    // 0x800AFC90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFC94: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800AFC98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AFC9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800AFCA0: jal         0x8001C0EC
    // 0x800AFCA4: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800AFCA4: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    after_4:
L_800AFCA8:
    // 0x800AFCA8: b           L_800AFCB0
    // 0x800AFCAC: nop

        goto L_800AFCB0;
    // 0x800AFCAC: nop

L_800AFCB0:
    // 0x800AFCB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AFCB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AFCB8: jr          $ra
    // 0x800AFCBC: nop

    return;
    // 0x800AFCBC: nop

;}
RECOMP_FUNC void func_8007F070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F070: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007F074: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007F078: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8007F07C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8007F080: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8007F084: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x8007F088: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007F08C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8007F090: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8007F094: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_8007F098:
    // 0x8007F098: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007F09C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007F0A0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007F0A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007F0A8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007F0AC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007F0B0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007F0B4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8007F0B8: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8007F0BC: nop

    // 0x8007F0C0: bne         $t9, $zero, L_8007F218
    if (ctx->r25 != 0) {
        // 0x8007F0C4: nop
    
            goto L_8007F218;
    }
    // 0x8007F0C4: nop

    // 0x8007F0C8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007F0CC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8007F0D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007F0D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007F0D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007F0DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007F0E0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007F0E4: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8007F0E8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8007F0EC: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8007F0F0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007F0F4: jal         0x8001A928
    // 0x8007F0F8: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007F0F8: nop

    after_0:
    // 0x8007F0FC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007F100: addiu       $t4, $t4, -0x3560
    ctx->r12 = ADD32(ctx->r12, -0X3560);
    // 0x8007F104: lw          $a3, 0x88($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X88);
    // 0x8007F108: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007F10C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007F110: jal         0x8001BD44
    // 0x8007F114: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x8007F114: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x8007F118: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8007F11C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007F120: addiu       $t7, $t7, -0x3560
    ctx->r15 = ADD32(ctx->r15, -0X3560);
    // 0x8007F124: addiu       $t5, $t5, 0x6668
    ctx->r13 = ADD32(ctx->r13, 0X6668);
    // 0x8007F128: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8007F12C: lw          $t8, 0x88($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X88);
    // 0x8007F130: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007F134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007F138: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8007F13C: jal         0x8001BD44
    // 0x8007F140: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    func_8001BD44(rdram, ctx);
        goto after_2;
    // 0x8007F140: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    after_2:
    // 0x8007F144: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8007F148: addiu       $t9, $t9, 0x666C
    ctx->r25 = ADD32(ctx->r25, 0X666C);
    // 0x8007F14C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007F150: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8007F154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007F158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007F15C: jal         0x8001C0EC
    // 0x8007F160: addiu       $a3, $zero, 0x11
    ctx->r7 = ADD32(0, 0X11);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x8007F160: addiu       $a3, $zero, 0x11
    ctx->r7 = ADD32(0, 0X11);
    after_3:
    // 0x8007F164: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8007F168: addiu       $t0, $t0, 0x6670
    ctx->r8 = ADD32(ctx->r8, 0X6670);
    // 0x8007F16C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007F170: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8007F174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007F178: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007F17C: jal         0x8001C0EC
    // 0x8007F180: addiu       $a3, $zero, 0x11
    ctx->r7 = ADD32(0, 0X11);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x8007F180: addiu       $a3, $zero, 0x11
    ctx->r7 = ADD32(0, 0X11);
    after_4:
    // 0x8007F184: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007F188: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x8007F18C: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x8007F190: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007F194: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007F198: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8007F19C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8007F1A0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8007F1A4: nop

    // 0x8007F1A8: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
    // 0x8007F1AC: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007F1B0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007F1B4: nop

    // 0x8007F1B8: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x8007F1BC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007F1C0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007F1C4: nop

    // 0x8007F1C8: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x8007F1CC: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007F1D0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007F1D4: nop

    // 0x8007F1D8: swc1        $f10, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f10.u32l;
    // 0x8007F1DC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8007F1E0: nop

    // 0x8007F1E4: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x8007F1E8: nop

    // 0x8007F1EC: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x8007F1F0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007F1F4: nop

    // 0x8007F1F8: swc1        $f20, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f20.u32l;
    // 0x8007F1FC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007F200: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007F204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007F208: jal         0x80019448
    // 0x8007F20C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_5;
    // 0x8007F20C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x8007F210: b           L_8007F230
    // 0x8007F214: nop

        goto L_8007F230;
    // 0x8007F214: nop

L_8007F218:
    // 0x8007F218: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8007F21C: nop

    // 0x8007F220: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8007F224: slti        $at, $t2, 0xE
    ctx->r1 = SIGNED(ctx->r10) < 0XE ? 1 : 0;
    // 0x8007F228: bne         $at, $zero, L_8007F098
    if (ctx->r1 != 0) {
        // 0x8007F22C: sw          $t2, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r10;
            goto L_8007F098;
    }
    // 0x8007F22C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_8007F230:
    // 0x8007F230: b           L_8007F238
    // 0x8007F234: nop

        goto L_8007F238;
    // 0x8007F234: nop

L_8007F238:
    // 0x8007F238: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007F23C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007F240: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007F244: jr          $ra
    // 0x8007F248: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007F248: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800DFC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFC2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DFC30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DFC34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DFC38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DFC3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DFC40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DFC44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DFC48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DFC4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DFC50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DFC54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DFC58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DFC5C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DFC60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DFC64: nop

    // 0x800DFC68: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DFC6C: nop

    // 0x800DFC70: bne         $t1, $zero, L_800DFD08
    if (ctx->r9 != 0) {
        // 0x800DFC74: nop
    
            goto L_800DFD08;
    }
    // 0x800DFC74: nop

    // 0x800DFC78: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DFC7C: nop

    // 0x800DFC80: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DFC84: nop

    // 0x800DFC88: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DFC8C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DFC90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFC94: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DFC98: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DFC9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFCA0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DFCA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DFCA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800DFCAC: jal         0x8001C0EC
    // 0x800DFCB0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DFCB0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DFCB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFCB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFCBC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DFCC0: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800DFCC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DFCC8: jal         0x8001ABF4
    // 0x800DFCCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DFCCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DFCD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFCD4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DFCD8: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800DFCDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFCE0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DFCE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DFCE8: jal         0x8001ABF4
    // 0x800DFCEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DFCEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DFCF0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800DFCF4: nop

    // 0x800DFCF8: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800DFCFC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DFD00: nop

    // 0x800DFD04: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
L_800DFD08:
    // 0x800DFD08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFD0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFD10: jal         0x8002A8B4
    // 0x800DFD14: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800DFD14: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x800DFD18: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DFD1C: nop

    // 0x800DFD20: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800DFD24: nop

    // 0x800DFD28: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x800DFD2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFD30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFD34: jal         0x8001B4AC
    // 0x800DFD38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x800DFD38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800DFD3C: beq         $v0, $zero, L_800DFDA4
    if (ctx->r2 == 0) {
        // 0x800DFD40: nop
    
            goto L_800DFDA4;
    }
    // 0x800DFD40: nop

    // 0x800DFD44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFD48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFD4C: jal         0x8002A1FC
    // 0x800DFD50: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800DFD50: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_5:
    // 0x800DFD54: beq         $v0, $zero, L_800DFD80
    if (ctx->r2 == 0) {
        // 0x800DFD58: nop
    
            goto L_800DFD80;
    }
    // 0x800DFD58: nop

    // 0x800DFD5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DFD60: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800DFD64: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800DFD68: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800DFD6C: nop

    // 0x800DFD70: sh          $zero, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = 0;
    // 0x800DFD74: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800DFD78: b           L_800DFDA4
    // 0x800DFD7C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_800DFDA4;
    // 0x800DFD7C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800DFD80:
    // 0x800DFD80: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DFD84: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800DFD88: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800DFD8C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800DFD90: nop

    // 0x800DFD94: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800DFD98: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DFD9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800DFDA0: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
L_800DFDA4:
    // 0x800DFDA4: b           L_800DFDAC
    // 0x800DFDA8: nop

        goto L_800DFDAC;
    // 0x800DFDA8: nop

L_800DFDAC:
    // 0x800DFDAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DFDB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DFDB4: jr          $ra
    // 0x800DFDB8: nop

    return;
    // 0x800DFDB8: nop

;}
