#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8033509C_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033509C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803350A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803350A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803350A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803350AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803350B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803350B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803350BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803350C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803350C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803350CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803350D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803350D4: nop

    // 0x803350D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803350DC: nop

    // 0x803350E0: bne         $t1, $zero, L_8033512C
    if (ctx->r9 != 0) {
        // 0x803350E4: nop
    
            goto L_8033512C;
    }
    // 0x803350E4: nop

    // 0x803350E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803350EC: nop

    // 0x803350F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803350F4: nop

    // 0x803350F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803350FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335100: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335104: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335108: jal         0x8001BBDC
    // 0x8033510C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x8033510C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80335110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335114: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033511C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80335120: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335124: jal         0x800175F0
    // 0x80335128: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80335128: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8033512C:
    // 0x8033512C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335130: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335134: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80335138: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033513C: jal         0x8002A0D0
    // 0x80335140: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_2;
    // 0x80335140: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_2:
    // 0x80335144: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335148: bne         $v0, $at, L_80335198
    if (ctx->r2 != ctx->r1) {
        // 0x8033514C: nop
    
            goto L_80335198;
    }
    // 0x8033514C: nop

    // 0x80335150: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335154: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335158: nop

    // 0x8033515C: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
    // 0x80335160: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335164: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80335168: lw          $t7, 0xC4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC4);
    // 0x8033516C: nop

    // 0x80335170: bne         $t7, $at, L_80335198
    if (ctx->r15 != ctx->r1) {
        // 0x80335174: nop
    
            goto L_80335198;
    }
    // 0x80335174: nop

    // 0x80335178: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033517C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80335180: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335184: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335188: nop

    // 0x8033518C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80335190: b           L_803351D8
    // 0x80335194: nop

        goto L_803351D8;
    // 0x80335194: nop

L_80335198:
    // 0x80335198: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033519C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351A0: jal         0x8001B4AC
    // 0x803351A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803351A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803351A8: beq         $v0, $zero, L_803351D0
    if (ctx->r2 == 0) {
        // 0x803351AC: nop
    
            goto L_803351D0;
    }
    // 0x803351AC: nop

    // 0x803351B0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803351B4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x803351B8: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803351BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803351C0: nop

    // 0x803351C4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x803351C8: b           L_803351D8
    // 0x803351CC: nop

        goto L_803351D8;
    // 0x803351CC: nop

L_803351D0:
    // 0x803351D0: b           L_803351D8
    // 0x803351D4: nop

        goto L_803351D8;
    // 0x803351D4: nop

L_803351D8:
    // 0x803351D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803351DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803351E0: jr          $ra
    // 0x803351E4: nop

    return;
    // 0x803351E4: nop

;}
RECOMP_FUNC void func_80333E64_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333E64: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80333E68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333E6C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333E70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333E74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333E78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333E7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333E80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333E84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333E88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333E8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333E90: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80333E94: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80333E98: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
L_80333E9C:
    // 0x80333E9C: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80333EA0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80333EA4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333EA8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333EAC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333EB0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333EB4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333EB8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333EBC: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x80333EC0: nop

    // 0x80333EC4: beq         $t3, $zero, L_80333F74
    if (ctx->r11 == 0) {
        // 0x80333EC8: nop
    
            goto L_80333F74;
    }
    // 0x80333EC8: nop

    // 0x80333ECC: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x80333ED0: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80333ED4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333ED8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333EDC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333EE0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333EE4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333EE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333EEC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333EF0: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80333EF4: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80333EF8: nop

    // 0x80333EFC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80333F00: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x80333F04: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80333F08: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80333F0C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333F10: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333F14: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333F18: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333F1C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333F20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F24: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333F28: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80333F2C: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80333F30: nop

    // 0x80333F34: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80333F38: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80333F3C: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80333F40: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80333F44: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80333F48: nop

    // 0x80333F4C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80333F50: nop

    // 0x80333F54: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80333F58: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80333F5C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80333F60: nop

    // 0x80333F64: bc1f        L_80333F74
    if (!c1cs) {
        // 0x80333F68: nop
    
            goto L_80333F74;
    }
    // 0x80333F68: nop

    // 0x80333F6C: b           L_80333F9C
    // 0x80333F70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80333F9C;
    // 0x80333F70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80333F74:
    // 0x80333F74: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x80333F78: nop

    // 0x80333F7C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80333F80: slti        $at, $t1, 0xE
    ctx->r1 = SIGNED(ctx->r9) < 0XE ? 1 : 0;
    // 0x80333F84: bne         $at, $zero, L_80333E9C
    if (ctx->r1 != 0) {
        // 0x80333F88: sw          $t1, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r9;
            goto L_80333E9C;
    }
    // 0x80333F88: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x80333F8C: b           L_80333F9C
    // 0x80333F90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80333F9C;
    // 0x80333F90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80333F94: b           L_80333F9C
    // 0x80333F98: nop

        goto L_80333F9C;
    // 0x80333F98: nop

L_80333F9C:
    // 0x80333F9C: jr          $ra
    // 0x80333FA0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80333FA0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80331020_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331020: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331024: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331028: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033102C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331030: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331034: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331038: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033103C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331040: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331044: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331048: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033104C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331050: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331054: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331058: nop

    // 0x8033105C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331060: nop

    // 0x80331064: bne         $t1, $zero, L_8033110C
    if (ctx->r9 != 0) {
        // 0x80331068: nop
    
            goto L_8033110C;
    }
    // 0x80331068: nop

    // 0x8033106C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331070: nop

    // 0x80331074: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331078: nop

    // 0x8033107C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331080: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331084: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331088: nop

    // 0x8033108C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331090: nop

    // 0x80331094: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033109C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803310A0: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x803310A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803310AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803310B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803310B4: jal         0x8001C0EC
    // 0x803310B8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803310B8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x803310BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803310C8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803310CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803310D0: jal         0x8001ABF4
    // 0x803310D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803310D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803310D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310DC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803310E0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803310E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310E8: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803310EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803310F0: jal         0x8001ABF4
    // 0x803310F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803310F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803310F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803310FC: nop

    // 0x80331100: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331104: nop

    // 0x80331108: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
L_8033110C:
    // 0x8033110C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331110: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331114: jal         0x8002A8B4
    // 0x80331118: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80331118: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033111C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331120: nop

    // 0x80331124: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80331128: nop

    // 0x8033112C: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x80331130: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331134: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331138: jal         0x8001B4AC
    // 0x8033113C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033113C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80331140: beq         $v0, $zero, L_80331160
    if (ctx->r2 == 0) {
        // 0x80331144: nop
    
            goto L_80331160;
    }
    // 0x80331144: nop

    // 0x80331148: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033114C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80331150: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80331154: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331158: nop

    // 0x8033115C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80331160:
    // 0x80331160: b           L_80331168
    // 0x80331164: nop

        goto L_80331168;
    // 0x80331164: nop

L_80331168:
    // 0x80331168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033116C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331170: jr          $ra
    // 0x80331174: nop

    return;
    // 0x80331174: nop

;}
RECOMP_FUNC void func_80335424_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335424: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80335428: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033542C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80335430: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80335434: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335438: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033543C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335440: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335444: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335448: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033544C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335450: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335454: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335458: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033545C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80335460: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335464: nop

    // 0x80335468: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033546C: nop

    // 0x80335470: bne         $t1, $zero, L_80335590
    if (ctx->r9 != 0) {
        // 0x80335474: nop
    
            goto L_80335590;
    }
    // 0x80335474: nop

    // 0x80335478: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033547C: nop

    // 0x80335480: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335484: nop

    // 0x80335488: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033548C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335490: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335494: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335498: nop

    // 0x8033549C: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x803354A0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803354A4: nop

    // 0x803354A8: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803354AC: nop

    // 0x803354B0: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x803354B4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803354B8: nop

    // 0x803354BC: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x803354C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803354C4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803354C8: nop

    // 0x803354CC: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x803354D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803354D4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803354D8: addiu       $t9, $t9, -0x53DC
    ctx->r25 = ADD32(ctx->r25, -0X53DC);
    // 0x803354DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803354E0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803354E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803354E8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803354EC: jal         0x8001C0EC
    // 0x803354F0: addiu       $a3, $zero, 0x18F
    ctx->r7 = ADD32(0, 0X18F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803354F0: addiu       $a3, $zero, 0x18F
    ctx->r7 = ADD32(0, 0X18F);
    after_0:
    // 0x803354F4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803354F8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803354FC: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80335500: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80335504: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x80335508: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033550C: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80335510: addiu       $a1, $a1, 0x57B0
    ctx->r5 = ADD32(ctx->r5, 0X57B0);
    // 0x80335514: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335518: jal         0x80027464
    // 0x8033551C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x8033551C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80335520: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80335524: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80335528: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033552C: addiu       $a3, $a3, -0x5330
    ctx->r7 = ADD32(ctx->r7, -0X5330);
    // 0x80335530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335534: jal         0x8001ABF4
    // 0x80335538: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80335538: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033553C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335540: addiu       $a3, $a3, -0x5330
    ctx->r7 = ADD32(ctx->r7, -0X5330);
    // 0x80335544: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80335548: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8033554C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80335550: jal         0x8001ABF4
    // 0x80335554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80335554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80335558: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033555C: addiu       $a3, $a3, -0x5330
    ctx->r7 = ADD32(ctx->r7, -0X5330);
    // 0x80335560: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80335564: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80335568: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033556C: jal         0x8001ABF4
    // 0x80335570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80335570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80335574: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335578: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033557C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335580: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x80335584: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335588: jal         0x800175F0
    // 0x8033558C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x8033558C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_80335590:
    // 0x80335590: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335594: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335598: jal         0x8001B4AC
    // 0x8033559C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x8033559C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x803355A0: beq         $v0, $zero, L_803355B8
    if (ctx->r2 == 0) {
        // 0x803355A4: nop
    
            goto L_803355B8;
    }
    // 0x803355A4: nop

    // 0x803355A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803355AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803355B0: jal         0x8002B114
    // 0x803355B4: nop

    func_8002B114(rdram, ctx);
        goto after_7;
    // 0x803355B4: nop

    after_7:
L_803355B8:
    // 0x803355B8: b           L_803355C0
    // 0x803355BC: nop

        goto L_803355C0;
    // 0x803355BC: nop

L_803355C0:
    // 0x803355C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803355C4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803355C8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803355CC: jr          $ra
    // 0x803355D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803355D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80334BB4_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334BB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334BB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334BBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334BC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334BC4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334BC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334BCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334BD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334BD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334BD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334BDC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334BE0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334BE4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334BE8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334BEC: nop

    // 0x80334BF0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334BF4: nop

    // 0x80334BF8: bne         $t1, $zero, L_80334C3C
    if (ctx->r9 != 0) {
        // 0x80334BFC: nop
    
            goto L_80334C3C;
    }
    // 0x80334BFC: nop

    // 0x80334C00: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C04: nop

    // 0x80334C08: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334C0C: nop

    // 0x80334C10: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334C14: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334C18: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C1C: nop

    // 0x80334C20: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x80334C24: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80334C2C: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x80334C30: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C34: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x80334C38: sh          $t8, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = ctx->r24;
L_80334C3C:
    // 0x80334C3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334C44: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80334C48: nop

    // 0x80334C4C: bne         $t1, $at, L_80334D6C
    if (ctx->r9 != ctx->r1) {
        // 0x80334C50: nop
    
            goto L_80334D6C;
    }
    // 0x80334C50: nop

    // 0x80334C54: jal         0x80014E80
    // 0x80334C58: addiu       $a0, $zero, -0x33
    ctx->r4 = ADD32(0, -0X33);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80334C58: addiu       $a0, $zero, -0x33
    ctx->r4 = ADD32(0, -0X33);
    after_0:
    // 0x80334C5C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80334C60: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80334C64: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80334C68: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334C6C: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80334C70: nop

    // 0x80334C74: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80334C78: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80334C7C: nop

    // 0x80334C80: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80334C84: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80334C88: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80334C8C: nop

    // 0x80334C90: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80334C94: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x80334C98: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80334C9C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80334CA0: nop

    // 0x80334CA4: jal         0x80014E80
    // 0x80334CA8: addiu       $a0, $zero, -0x33
    ctx->r4 = ADD32(0, -0X33);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80334CA8: addiu       $a0, $zero, -0x33
    ctx->r4 = ADD32(0, -0X33);
    after_1:
    // 0x80334CAC: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80334CB0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80334CB4: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80334CB8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80334CBC: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80334CC0: nop

    // 0x80334CC4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334CC8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80334CCC: nop

    // 0x80334CD0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80334CD4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80334CD8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80334CDC: nop

    // 0x80334CE0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80334CE4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80334CE8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80334CEC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80334CF0: nop

    // 0x80334CF4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334CF8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80334CFC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80334D00: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80334D04: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80334D08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334D0C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80334D10: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80334D14: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80334D18: addiu       $a1, $a1, 0x57A4
    ctx->r5 = ADD32(ctx->r5, 0X57A4);
    // 0x80334D1C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334D20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334D24: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    // 0x80334D28: jal         0x80027464
    // 0x80334D2C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80334D2C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80334D30: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80334D34: jal         0x80014E80
    // 0x80334D38: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x80334D38: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x80334D3C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80334D40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334D44: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334D48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334D4C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334D50: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334D54: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334D58: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334D5C: sw          $v0, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = ctx->r2;
    // 0x80334D60: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334D64: nop

    // 0x80334D68: sh          $zero, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = 0;
L_80334D6C:
    // 0x80334D6C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334D70: nop

    // 0x80334D74: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x80334D78: nop

    // 0x80334D7C: bne         $t2, $zero, L_80334E18
    if (ctx->r10 != 0) {
        // 0x80334D80: nop
    
            goto L_80334E18;
    }
    // 0x80334D80: nop

    // 0x80334D84: jal         0x80014E80
    // 0x80334D88: addiu       $a0, $zero, -0x97
    ctx->r4 = ADD32(0, -0X97);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x80334D88: addiu       $a0, $zero, -0x97
    ctx->r4 = ADD32(0, -0X97);
    after_4:
    // 0x80334D8C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80334D90: jal         0x80014E80
    // 0x80334D94: addiu       $a0, $zero, -0x97
    ctx->r4 = ADD32(0, -0X97);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x80334D94: addiu       $a0, $zero, -0x97
    ctx->r4 = ADD32(0, -0X97);
    after_5:
    // 0x80334D98: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80334D9C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334DA0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80334DA4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80334DA8: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80334DAC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80334DB0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334DB4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80334DB8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80334DBC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80334DC0: addiu       $a1, $a1, 0x57A4
    ctx->r5 = ADD32(ctx->r5, 0X57A4);
    // 0x80334DC4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80334DC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334DCC: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    // 0x80334DD0: jal         0x80027464
    // 0x80334DD4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80334DD4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x80334DD8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80334DDC: jal         0x80014E80
    // 0x80334DE0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_7;
    // 0x80334DE0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_7:
    // 0x80334DE4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80334DE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334DEC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80334DF0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334DF4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334DF8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334DFC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334E00: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334E04: sw          $v0, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = ctx->r2;
    // 0x80334E08: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334E0C: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x80334E10: b           L_80334E30
    // 0x80334E14: sh          $t9, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = ctx->r25;
        goto L_80334E30;
    // 0x80334E14: sh          $t9, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = ctx->r25;
L_80334E18:
    // 0x80334E18: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334E1C: nop

    // 0x80334E20: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x80334E24: nop

    // 0x80334E28: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80334E2C: sh          $t4, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = ctx->r12;
L_80334E30:
    // 0x80334E30: b           L_80334E38
    // 0x80334E34: nop

        goto L_80334E38;
    // 0x80334E34: nop

L_80334E38:
    // 0x80334E38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334E3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80334E40: jr          $ra
    // 0x80334E44: nop

    return;
    // 0x80334E44: nop

;}
RECOMP_FUNC void func_80332F88_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332F88: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80332F8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332F90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332F94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332F98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332F9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332FA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332FA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332FA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332FAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332FB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332FB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332FB8: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80332FBC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332FC0: nop

    // 0x80332FC4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332FC8: nop

    // 0x80332FCC: bne         $t1, $zero, L_80333388
    if (ctx->r9 != 0) {
        // 0x80332FD0: nop
    
            goto L_80333388;
    }
    // 0x80332FD0: nop

    // 0x80332FD4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332FD8: nop

    // 0x80332FDC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332FE0: nop

    // 0x80332FE4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332FE8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332FEC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332FF0: nop

    // 0x80332FF4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332FF8: nop

    // 0x80332FFC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333000: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333004: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333008: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033300C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333010: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333014: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333018: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x8033301C: jal         0x8001C0EC
    // 0x80333020: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333020: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80333024: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333028: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033302C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333030: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80333034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333038: jal         0x8001ABF4
    // 0x8033303C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033303C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80333040: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333044: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333048: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033304C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333050: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80333054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333058: jal         0x8001ABF4
    // 0x8033305C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033305C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80333060: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80333064: nop

    // 0x80333068: lh          $t9, 0x100($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X100);
    // 0x8033306C: nop

    // 0x80333070: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x80333074: bne         $at, $zero, L_803331F8
    if (ctx->r1 != 0) {
        // 0x80333078: nop
    
            goto L_803331F8;
    }
    // 0x80333078: nop

    // 0x8033307C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80333080:
    // 0x80333080: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80333084: lui         $at, 0x42E2
    ctx->r1 = S32(0X42E2 << 16);
    // 0x80333088: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033308C: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80333090: nop

    // 0x80333094: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80333098: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8033309C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803330A0: lui         $at, 0x4399
    ctx->r1 = S32(0X4399 << 16);
    // 0x803330A4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803330A8: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803330AC: jal         0x80015538
    // 0x803330B0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803330B0: nop

    after_3:
    // 0x803330B4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x803330B8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803330BC: lwc1        $f12, 0x57D0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X57D0);
    // 0x803330C0: jal         0x800366E0
    // 0x803330C4: nop

    sqrtf_recomp(rdram, ctx);
        goto after_4;
    // 0x803330C4: nop

    after_4:
    // 0x803330C8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x803330CC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803330D0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803330D4: lwc1        $f19, 0x57D8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X57D8);
    // 0x803330D8: lwc1        $f18, 0x57DC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X57DC);
    // 0x803330DC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803330E0: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x803330E4: jal         0x80034970
    // 0x803330E8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x803330E8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_5:
    // 0x803330EC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803330F0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803330F4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x803330F8: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803330FC: nop

    // 0x80333100: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80333104: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80333108: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033310C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333110: lwc1        $f7, 0x57E0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X57E0);
    // 0x80333114: lwc1        $f6, 0x57E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X57E4);
    // 0x80333118: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8033311C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80333120: jal         0x80036570
    // 0x80333124: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_6;
    // 0x80333124: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_6:
    // 0x80333128: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033312C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80333130: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80333134: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80333138: nop

    // 0x8033313C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80333140: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80333144: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333148: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033314C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80333150: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80333154: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80333158: addiu       $a1, $a1, 0x578C
    ctx->r5 = ADD32(ctx->r5, 0X578C);
    // 0x8033315C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333160: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80333164: jal         0x80027464
    // 0x80333168: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80333168: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x8033316C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80333170: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80333174: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80333178: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033317C: jal         0x80019448
    // 0x80333180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_8;
    // 0x80333180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x80333184: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80333188: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033318C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80333190: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80333194: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333198: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033319C: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x803331A0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803331A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803331A8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803331AC: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x803331B0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x803331B4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803331B8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803331BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803331C0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803331C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803331C8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803331CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803331D0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803331D4: sh          $t7, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r15;
    // 0x803331D8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803331DC: nop

    // 0x803331E0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803331E4: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x803331E8: bne         $at, $zero, L_80333080
    if (ctx->r1 != 0) {
        // 0x803331EC: sw          $t1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r9;
            goto L_80333080;
    }
    // 0x803331EC: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x803331F0: b           L_8033336C
    // 0x803331F4: nop

        goto L_8033336C;
    // 0x803331F4: nop

L_803331F8:
    // 0x803331F8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_803331FC:
    // 0x803331FC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80333200: lui         $at, 0x42E2
    ctx->r1 = S32(0X42E2 << 16);
    // 0x80333204: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333208: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033320C: nop

    // 0x80333210: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80333214: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80333218: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033321C: lui         $at, 0x4399
    ctx->r1 = S32(0X4399 << 16);
    // 0x80333220: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80333224: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80333228: jal         0x80015538
    // 0x8033322C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x8033322C: nop

    after_9:
    // 0x80333230: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80333234: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333238: lwc1        $f12, 0x57E8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X57E8);
    // 0x8033323C: jal         0x800366E0
    // 0x80333240: nop

    sqrtf_recomp(rdram, ctx);
        goto after_10;
    // 0x80333240: nop

    after_10:
    // 0x80333244: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80333248: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033324C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333250: lwc1        $f9, 0x57F0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X57F0);
    // 0x80333254: lwc1        $f8, 0x57F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X57F4);
    // 0x80333258: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033325C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80333260: jal         0x80034970
    // 0x80333264: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_11;
    // 0x80333264: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_11:
    // 0x80333268: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033326C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80333270: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80333274: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80333278: nop

    // 0x8033327C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80333280: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80333284: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333288: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033328C: lwc1        $f17, 0x57F8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X57F8);
    // 0x80333290: lwc1        $f16, 0x57FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X57FC);
    // 0x80333294: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80333298: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8033329C: jal         0x80036570
    // 0x803332A0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_12;
    // 0x803332A0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_12:
    // 0x803332A4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803332A8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803332AC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803332B0: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x803332B4: nop

    // 0x803332B8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803332BC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x803332C0: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803332C4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803332C8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803332CC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x803332D0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x803332D4: addiu       $a1, $a1, 0x578C
    ctx->r5 = ADD32(ctx->r5, 0X578C);
    // 0x803332D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803332DC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803332E0: jal         0x80027464
    // 0x803332E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_13;
    // 0x803332E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x803332E8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x803332EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803332F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803332F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803332F8: jal         0x80019448
    // 0x803332FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_14;
    // 0x803332FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_14:
    // 0x80333300: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80333304: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80333308: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8033330C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333310: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333314: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333318: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x8033331C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333320: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333324: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333328: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x8033332C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80333330: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
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
    // 0x80333348: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033334C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333350: sh          $t9, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r25;
    // 0x80333354: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333358: nop

    // 0x8033335C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333360: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x80333364: bne         $at, $zero, L_803331FC
    if (ctx->r1 != 0) {
        // 0x80333368: sw          $t4, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r12;
            goto L_803331FC;
    }
    // 0x80333368: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_8033336C:
    // 0x8033336C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333370: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333374: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333378: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x8033337C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333380: jal         0x800175F0
    // 0x80333384: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_15;
    // 0x80333384: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
L_80333388:
    // 0x80333388: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033338C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333390: jal         0x8002A8B4
    // 0x80333394: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_16;
    // 0x80333394: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_16:
    // 0x80333398: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8033339C: nop

    // 0x803333A0: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803333A4: nop

    // 0x803333A8: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x803333AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803333B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803333B4: jal         0x8001B4AC
    // 0x803333B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_17;
    // 0x803333B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x803333BC: beq         $v0, $zero, L_803333DC
    if (ctx->r2 == 0) {
        // 0x803333C0: nop
    
            goto L_803333DC;
    }
    // 0x803333C0: nop

    // 0x803333C4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803333C8: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x803333CC: sh          $t2, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r10;
    // 0x803333D0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803333D4: nop

    // 0x803333D8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803333DC:
    // 0x803333DC: b           L_803333E4
    // 0x803333E0: nop

        goto L_803333E4;
    // 0x803333E0: nop

L_803333E4:
    // 0x803333E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803333E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x803333EC: jr          $ra
    // 0x803333F0: nop

    return;
    // 0x803333F0: nop

;}
RECOMP_FUNC void func_80334EDC_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334EDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334EE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334EE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334EE8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334EEC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334EF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334EF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334EF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334EFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334F00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334F04: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334F08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334F0C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334F10: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334F14: nop

    // 0x80334F18: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334F1C: nop

    // 0x80334F20: bne         $t1, $zero, L_80334FA0
    if (ctx->r9 != 0) {
        // 0x80334F24: nop
    
            goto L_80334FA0;
    }
    // 0x80334F24: nop

    // 0x80334F28: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334F2C: nop

    // 0x80334F30: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334F34: nop

    // 0x80334F38: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334F3C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334F40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F44: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80334F48: addiu       $t5, $t5, -0x53DC
    ctx->r13 = ADD32(ctx->r13, -0X53DC);
    // 0x80334F4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F50: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80334F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334F5C: jal         0x8001C0EC
    // 0x80334F60: addiu       $a3, $zero, 0x18F
    ctx->r7 = ADD32(0, 0X18F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334F60: addiu       $a3, $zero, 0x18F
    ctx->r7 = ADD32(0, 0X18F);
    after_0:
    // 0x80334F64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F6C: jal         0x8001BBDC
    // 0x80334F70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80334F70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80334F74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80334F80: jal         0x80029EF8
    // 0x80334F84: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x80334F84: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_2:
    // 0x80334F88: jal         0x80014E80
    // 0x80334F8C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x80334F8C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_3:
    // 0x80334F90: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80334F94: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334F98: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334F9C: swc1        $f6, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f6.u32l;
L_80334FA0:
    // 0x80334FA0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334FA4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80334FA8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80334FAC: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80334FB0: jal         0x80015538
    // 0x80334FB4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80334FB4: nop

    after_4:
    // 0x80334FB8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334FBC: nop

    // 0x80334FC0: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80334FC4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334FC8: nop

    // 0x80334FCC: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80334FD0: nop

    // 0x80334FD4: swc1        $f8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f8.u32l;
    // 0x80334FD8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334FDC: nop

    // 0x80334FE0: lwc1        $f10, 0x28($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80334FE4: nop

    // 0x80334FE8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80334FEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334FF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334FF4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80334FF8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80334FFC: jal         0x8002A0D0
    // 0x80335000: lui         $a3, 0xC334
    ctx->r7 = S32(0XC334 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_5;
    // 0x80335000: lui         $a3, 0xC334
    ctx->r7 = S32(0XC334 << 16);
    after_5:
    // 0x80335004: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335008: bne         $v0, $at, L_80335084
    if (ctx->r2 != ctx->r1) {
        // 0x8033500C: nop
    
            goto L_80335084;
    }
    // 0x8033500C: nop

    // 0x80335010: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335014: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80335018: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033501C: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80335020: nop

    // 0x80335024: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80335028: nop

    // 0x8033502C: bc1f        L_8033505C
    if (!c1cs) {
        // 0x80335030: nop
    
            goto L_8033505C;
    }
    // 0x80335030: nop

    // 0x80335034: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335038: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033503C: nop

    // 0x80335040: swc1        $f4, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f4.u32l;
    // 0x80335044: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335048: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8033504C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80335050: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335054: b           L_80335084
    // 0x80335058: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80335084;
    // 0x80335058: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033505C:
    // 0x8033505C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80335060: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335064: nop

    // 0x80335068: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x8033506C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335070: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80335074: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80335078: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033507C: nop

    // 0x80335080: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80335084:
    // 0x80335084: b           L_8033508C
    // 0x80335088: nop

        goto L_8033508C;
    // 0x80335088: nop

L_8033508C:
    // 0x8033508C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335094: jr          $ra
    // 0x80335098: nop

    return;
    // 0x80335098: nop

;}
RECOMP_FUNC void func_80334190_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334190: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334194: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334198: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033419C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803341A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803341A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803341A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803341B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803341B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803341BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803341C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803341C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803341C8: nop

    // 0x803341CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803341D0: nop

    // 0x803341D4: bne         $t1, $zero, L_8033422C
    if (ctx->r9 != 0) {
        // 0x803341D8: nop
    
            goto L_8033422C;
    }
    // 0x803341D8: nop

    // 0x803341DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803341E0: nop

    // 0x803341E4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803341E8: nop

    // 0x803341EC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803341F0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803341F4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803341F8: nop

    // 0x803341FC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334200: nop

    // 0x80334204: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334208: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033420C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334210: addiu       $t7, $t7, -0x5448
    ctx->r15 = ADD32(ctx->r15, -0X5448);
    // 0x80334214: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334218: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033421C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334220: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80334224: jal         0x8001C0EC
    // 0x80334228: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334228: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_0:
L_8033422C:
    // 0x8033422C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334230: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334234: jal         0x8002A8B4
    // 0x80334238: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80334238: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x8033423C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334240: nop

    // 0x80334244: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80334248: nop

    // 0x8033424C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80334250: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334254: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334258: jal         0x8001B4AC
    // 0x8033425C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033425C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334260: beq         $v0, $zero, L_80334280
    if (ctx->r2 == 0) {
        // 0x80334264: nop
    
            goto L_80334280;
    }
    // 0x80334264: nop

    // 0x80334268: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033426C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80334270: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80334274: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334278: nop

    // 0x8033427C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80334280:
    // 0x80334280: b           L_80334288
    // 0x80334284: nop

        goto L_80334288;
    // 0x80334284: nop

L_80334288:
    // 0x80334288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033428C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334290: jr          $ra
    // 0x80334294: nop

    return;
    // 0x80334294: nop

;}
RECOMP_FUNC void func_80334B2C_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334B2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334B30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334B34: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80334B38: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80334B3C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80334B40: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80334B44: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80334B48: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80334B4C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80334B50: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80334B54: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80334B58: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80334B5C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80334B60: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80334B64: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334B68: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80334B6C: addiu       $a1, $a1, 0x5798
    ctx->r5 = ADD32(ctx->r5, 0X5798);
    // 0x80334B70: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80334B74: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80334B78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334B7C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80334B80: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80334B84: jal         0x80027464
    // 0x80334B88: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80334B88: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80334B8C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80334B90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80334B94: jal         0x8001BB34
    // 0x80334B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80334B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80334B9C: b           L_80334BA4
    // 0x80334BA0: nop

        goto L_80334BA4;
    // 0x80334BA0: nop

L_80334BA4:
    // 0x80334BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334BA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334BAC: jr          $ra
    // 0x80334BB0: nop

    return;
    // 0x80334BB0: nop

;}
RECOMP_FUNC void func_8033367C_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033367C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333684: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333688: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033368C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333690: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333694: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333698: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033369C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803336A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803336A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803336A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803336AC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803336B0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803336B4: nop

    // 0x803336B8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803336BC: nop

    // 0x803336C0: bne         $t1, $zero, L_80333728
    if (ctx->r9 != 0) {
        // 0x803336C4: nop
    
            goto L_80333728;
    }
    // 0x803336C4: nop

    // 0x803336C8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803336CC: nop

    // 0x803336D0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803336D4: nop

    // 0x803336D8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803336DC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803336E0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803336E4: nop

    // 0x803336E8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803336EC: nop

    // 0x803336F0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803336F4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803336F8: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x803336FC: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x80333700: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80333704: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333708: lh          $t0, 0xB6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB6);
    // 0x8033370C: nop

    // 0x80333710: bne         $t0, $at, L_80333728
    if (ctx->r8 != ctx->r1) {
        // 0x80333714: nop
    
            goto L_80333728;
    }
    // 0x80333714: nop

    // 0x80333718: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033371C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333720: jal         0x80069E60
    // 0x80333724: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80333724: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
L_80333728:
    // 0x80333728: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033372C: nop

    // 0x80333730: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x80333734: nop

    // 0x80333738: bgez        $t3, L_80333748
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8033373C: nop
    
            goto L_80333748;
    }
    // 0x8033373C: nop

    // 0x80333740: b           L_803337DC
    // 0x80333744: nop

        goto L_803337DC;
    // 0x80333744: nop

L_80333748:
    // 0x80333748: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033374C: nop

    // 0x80333750: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x80333754: nop

    // 0x80333758: bne         $t2, $zero, L_803337A8
    if (ctx->r10 != 0) {
        // 0x8033375C: nop
    
            goto L_803337A8;
    }
    // 0x8033375C: nop

    // 0x80333760: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80333764: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333768: lh          $t5, 0xB6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XB6);
    // 0x8033376C: nop

    // 0x80333770: bne         $t5, $at, L_80333790
    if (ctx->r13 != ctx->r1) {
        // 0x80333774: nop
    
            goto L_80333790;
    }
    // 0x80333774: nop

    // 0x80333778: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033377C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333780: jal         0x8002B114
    // 0x80333784: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80333784: nop

    after_1:
    // 0x80333788: b           L_803337A0
    // 0x8033378C: nop

        goto L_803337A0;
    // 0x8033378C: nop

L_80333790:
    // 0x80333790: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333798: jal         0x8002B114
    // 0x8033379C: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033379C: nop

    after_2:
L_803337A0:
    // 0x803337A0: b           L_803337DC
    // 0x803337A4: nop

        goto L_803337DC;
    // 0x803337A4: nop

L_803337A8:
    // 0x803337A8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803337AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803337B0: lh          $a1, 0xA6($t7)
    ctx->r5 = MEM_H(ctx->r15, 0XA6);
    // 0x803337B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803337B8: andi        $t8, $a1, 0x1
    ctx->r24 = ctx->r5 & 0X1;
    // 0x803337BC: jal         0x8001BB34
    // 0x803337C0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x803337C0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_3:
    // 0x803337C4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803337C8: nop

    // 0x803337CC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803337D0: nop

    // 0x803337D4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x803337D8: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_803337DC:
    // 0x803337DC: b           L_803337E4
    // 0x803337E0: nop

        goto L_803337E4;
    // 0x803337E0: nop

L_803337E4:
    // 0x803337E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803337E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803337EC: jr          $ra
    // 0x803337F0: nop

    return;
    // 0x803337F0: nop

;}
RECOMP_FUNC void func_80333538_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333538: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033353C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333540: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333544: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333548: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033354C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333550: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333554: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333558: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033355C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333560: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333564: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333568: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033356C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333570: nop

    // 0x80333574: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333578: nop

    // 0x8033357C: bne         $t1, $zero, L_80333610
    if (ctx->r9 != 0) {
        // 0x80333580: nop
    
            goto L_80333610;
    }
    // 0x80333580: nop

    // 0x80333584: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333588: nop

    // 0x8033358C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333590: nop

    // 0x80333594: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333598: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033359C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803335A0: nop

    // 0x803335A4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803335A8: nop

    // 0x803335AC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803335B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335B4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803335B8: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x803335BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803335C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803335C8: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x803335CC: jal         0x8001C0EC
    // 0x803335D0: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803335D0: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x803335D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335DC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803335E0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803335E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803335E8: jal         0x8001ABF4
    // 0x803335EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803335EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803335F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335F4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803335F8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803335FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333600: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80333604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333608: jal         0x8001ABF4
    // 0x8033360C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033360C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80333610:
    // 0x80333610: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333614: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333618: jal         0x8002A8B4
    // 0x8033361C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033361C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80333620: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333624: nop

    // 0x80333628: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033362C: nop

    // 0x80333630: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80333634: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333638: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033363C: jal         0x8001B4AC
    // 0x80333640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80333640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333644: beq         $v0, $zero, L_80333664
    if (ctx->r2 == 0) {
        // 0x80333648: nop
    
            goto L_80333664;
    }
    // 0x80333648: nop

    // 0x8033364C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333650: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80333654: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80333658: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033365C: nop

    // 0x80333660: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80333664:
    // 0x80333664: b           L_8033366C
    // 0x80333668: nop

        goto L_8033366C;
    // 0x80333668: nop

L_8033366C:
    // 0x8033366C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333670: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333674: jr          $ra
    // 0x80333678: nop

    return;
    // 0x80333678: nop

;}
RECOMP_FUNC void func_803306D8_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803306D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803306DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803306E0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803306E4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803306E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803306EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803306F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803306F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803306F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803306FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330700: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330704: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330708: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033070C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330710: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330714: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330718: nop

    // 0x8033071C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330720: nop

    // 0x80330724: bne         $t1, $zero, L_803307E8
    if (ctx->r9 != 0) {
        // 0x80330728: nop
    
            goto L_803307E8;
    }
    // 0x80330728: nop

    // 0x8033072C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330730: nop

    // 0x80330734: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330738: nop

    // 0x8033073C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330740: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330744: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330748: nop

    // 0x8033074C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330750: nop

    // 0x80330754: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330758: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033075C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330760: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80330764: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330768: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033076C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330770: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80330774: jal         0x8001C0EC
    // 0x80330778: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330778: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033077C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80330780: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330784: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330788: nop

    // 0x8033078C: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x80330790: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330798: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033079C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803307A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803307A4: jal         0x8001ABF4
    // 0x803307A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803307A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803307AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803307B4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803307B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307BC: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803307C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803307C4: jal         0x8001ABF4
    // 0x803307C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803307C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803307CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803307D8: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    // 0x803307DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803307E0: jal         0x800175F0
    // 0x803307E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x803307E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_803307E8:
    // 0x803307E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307F0: jal         0x8002A8B4
    // 0x803307F4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x803307F4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
    // 0x803307F8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803307FC: nop

    // 0x80330800: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80330804: nop

    // 0x80330808: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x8033080C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330810: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330814: jal         0x80029C40
    // 0x80330818: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x80330818: nop

    after_5:
    // 0x8033081C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330820: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330824: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330828: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033082C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330830: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80330834: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330838: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033083C: jal         0x80029018
    // 0x80330840: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x80330840: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x80330844: beq         $v0, $zero, L_803308AC
    if (ctx->r2 == 0) {
        // 0x80330848: nop
    
            goto L_803308AC;
    }
    // 0x80330848: nop

    // 0x8033084C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330850: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330854: nop

    // 0x80330858: swc1        $f16, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f16.u32l;
    // 0x8033085C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330860: nop

    // 0x80330864: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80330868: nop

    // 0x8033086C: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x80330870: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330874: nop

    // 0x80330878: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x8033087C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330880: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330884: nop

    // 0x80330888: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
    // 0x8033088C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330890: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330894: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80330898: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033089C: nop

    // 0x803308A0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x803308A4: b           L_803308E4
    // 0x803308A8: nop

        goto L_803308E4;
    // 0x803308A8: nop

L_803308AC:
    // 0x803308AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803308B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803308B4: jal         0x8001B4AC
    // 0x803308B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x803308B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x803308BC: beq         $v0, $zero, L_803308DC
    if (ctx->r2 == 0) {
        // 0x803308C0: nop
    
            goto L_803308DC;
    }
    // 0x803308C0: nop

    // 0x803308C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803308C8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803308CC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803308D0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803308D4: nop

    // 0x803308D8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803308DC:
    // 0x803308DC: b           L_803308E4
    // 0x803308E0: nop

        goto L_803308E4;
    // 0x803308E0: nop

L_803308E4:
    // 0x803308E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803308E8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803308EC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803308F0: jr          $ra
    // 0x803308F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803308F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330250_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330250: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330258: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033025C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330260: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330264: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033026C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330270: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330274: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330278: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033027C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330280: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330284: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330288: nop

    // 0x8033028C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330290: nop

    // 0x80330294: bne         $t1, $zero, L_80330394
    if (ctx->r9 != 0) {
        // 0x80330298: nop
    
            goto L_80330394;
    }
    // 0x80330298: nop

    // 0x8033029C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803302A0: nop

    // 0x803302A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803302A8: nop

    // 0x803302AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803302B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803302B4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803302B8: nop

    // 0x803302BC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803302C0: nop

    // 0x803302C4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803302C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803302CC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803302D0: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x803302D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803302D8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803302DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803302E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803302E4: jal         0x8001C0EC
    // 0x803302E8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803302E8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x803302EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803302F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803302F4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803302F8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803302FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330300: jal         0x8001ABF4
    // 0x80330304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80330308: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033030C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330310: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80330314: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330318: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8033031C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330320: jal         0x8001ABF4
    // 0x80330324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330328: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033032C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330330: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x80330334: nop

    // 0x80330338: bne         $t9, $at, L_8033037C
    if (ctx->r25 != ctx->r1) {
        // 0x8033033C: nop
    
            goto L_8033037C;
    }
    // 0x8033033C: nop

    // 0x80330340: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330344: nop

    // 0x80330348: lh          $t1, 0x100($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X100);
    // 0x8033034C: nop

    // 0x80330350: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x80330354: bne         $at, $zero, L_80330368
    if (ctx->r1 != 0) {
        // 0x80330358: nop
    
            goto L_80330368;
    }
    // 0x80330358: nop

    // 0x8033035C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330360: b           L_80330374
    // 0x80330364: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
        goto L_80330374;
    // 0x80330364: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
L_80330368:
    // 0x80330368: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033036C: nop

    // 0x80330370: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
L_80330374:
    // 0x80330374: b           L_80330394
    // 0x80330378: nop

        goto L_80330394;
    // 0x80330378: nop

L_8033037C:
    // 0x8033037C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330380: nop

    // 0x80330384: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
    // 0x80330388: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033038C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330390: sh          $t6, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r14;
L_80330394:
    // 0x80330394: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330398: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033039C: jal         0x8002A8B4
    // 0x803303A0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x803303A0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x803303A4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803303A8: nop

    // 0x803303AC: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x803303B0: nop

    // 0x803303B4: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x803303B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803303BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803303C0: jal         0x8001B4AC
    // 0x803303C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803303C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803303C8: beq         $v0, $zero, L_803305E0
    if (ctx->r2 == 0) {
        // 0x803303CC: nop
    
            goto L_803305E0;
    }
    // 0x803303CC: nop

    // 0x803303D0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803303D4: nop

    // 0x803303D8: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x803303DC: nop

    // 0x803303E0: bne         $t9, $zero, L_803305C8
    if (ctx->r25 != 0) {
        // 0x803303E4: nop
    
            goto L_803305C8;
    }
    // 0x803303E4: nop

    // 0x803303E8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803303EC: nop

    // 0x803303F0: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803303F4: nop

    // 0x803303F8: bne         $t1, $zero, L_803304E4
    if (ctx->r9 != 0) {
        // 0x803303FC: nop
    
            goto L_803304E4;
    }
    // 0x803303FC: nop

    // 0x80330400: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330404: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330408: jal         0x8002A1FC
    // 0x8033040C: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x8033040C: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_5:
    // 0x80330410: beq         $v0, $zero, L_80330458
    if (ctx->r2 == 0) {
        // 0x80330414: nop
    
            goto L_80330458;
    }
    // 0x80330414: nop

    // 0x80330418: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033041C: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    // 0x80330420: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80330424: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330428: nop

    // 0x8033042C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80330430: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330434: nop

    // 0x80330438: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
    // 0x8033043C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330440: nop

    // 0x80330444: sh          $zero, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = 0;
    // 0x80330448: b           L_803306C8
    // 0x8033044C: nop

        goto L_803306C8;
    // 0x8033044C: nop

    // 0x80330450: b           L_803304DC
    // 0x80330454: nop

        goto L_803304DC;
    // 0x80330454: nop

L_80330458:
    // 0x80330458: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033045C: nop

    // 0x80330460: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x80330464: nop

    // 0x80330468: bne         $t8, $zero, L_803304B0
    if (ctx->r24 != 0) {
        // 0x8033046C: nop
    
            goto L_803304B0;
    }
    // 0x8033046C: nop

    // 0x80330470: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330474: addiu       $t9, $zero, 0x1F
    ctx->r25 = ADD32(0, 0X1F);
    // 0x80330478: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033047C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330480: nop

    // 0x80330484: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80330488: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033048C: nop

    // 0x80330490: sh          $zero, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = 0;
    // 0x80330494: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330498: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033049C: sh          $t4, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r12;
    // 0x803304A0: b           L_803306C8
    // 0x803304A4: nop

        goto L_803306C8;
    // 0x803304A4: nop

    // 0x803304A8: b           L_803304DC
    // 0x803304AC: nop

        goto L_803304DC;
    // 0x803304AC: nop

L_803304B0:
    // 0x803304B0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803304B4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x803304B8: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x803304BC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803304C0: nop

    // 0x803304C4: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x803304C8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803304CC: nop

    // 0x803304D0: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x803304D4: b           L_803306C8
    // 0x803304D8: nop

        goto L_803306C8;
    // 0x803304D8: nop

L_803304DC:
    // 0x803304DC: b           L_803305C0
    // 0x803304E0: nop

        goto L_803305C0;
    // 0x803304E0: nop

L_803304E4:
    // 0x803304E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304EC: jal         0x8002A1FC
    // 0x803304F0: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_6;
    // 0x803304F0: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_6:
    // 0x803304F4: beq         $v0, $zero, L_8033053C
    if (ctx->r2 == 0) {
        // 0x803304F8: nop
    
            goto L_8033053C;
    }
    // 0x803304F8: nop

    // 0x803304FC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330500: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
    // 0x80330504: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330508: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033050C: nop

    // 0x80330510: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80330514: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330518: nop

    // 0x8033051C: sh          $zero, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = 0;
    // 0x80330520: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330524: nop

    // 0x80330528: sh          $zero, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = 0;
    // 0x8033052C: b           L_803306C8
    // 0x80330530: nop

        goto L_803306C8;
    // 0x80330530: nop

    // 0x80330534: b           L_803305C0
    // 0x80330538: nop

        goto L_803305C0;
    // 0x80330538: nop

L_8033053C:
    // 0x8033053C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330540: nop

    // 0x80330544: lh          $t6, 0xAA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAA);
    // 0x80330548: nop

    // 0x8033054C: bne         $t6, $zero, L_80330594
    if (ctx->r14 != 0) {
        // 0x80330550: nop
    
            goto L_80330594;
    }
    // 0x80330550: nop

    // 0x80330554: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330558: addiu       $t5, $zero, 0x1F
    ctx->r13 = ADD32(0, 0X1F);
    // 0x8033055C: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80330560: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330564: nop

    // 0x80330568: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x8033056C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330570: nop

    // 0x80330574: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
    // 0x80330578: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033057C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80330580: sh          $t0, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r8;
    // 0x80330584: b           L_803306C8
    // 0x80330588: nop

        goto L_803306C8;
    // 0x80330588: nop

    // 0x8033058C: b           L_803305C0
    // 0x80330590: nop

        goto L_803305C0;
    // 0x80330590: nop

L_80330594:
    // 0x80330594: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330598: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x8033059C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803305A0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803305A4: nop

    // 0x803305A8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803305AC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803305B0: nop

    // 0x803305B4: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
    // 0x803305B8: b           L_803306C8
    // 0x803305BC: nop

        goto L_803306C8;
    // 0x803305BC: nop

L_803305C0:
    // 0x803305C0: b           L_803305E0
    // 0x803305C4: nop

        goto L_803305E0;
    // 0x803305C4: nop

L_803305C8:
    // 0x803305C8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803305CC: nop

    // 0x803305D0: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x803305D4: nop

    // 0x803305D8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x803305DC: sh          $t8, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r24;
L_803305E0:
    // 0x803305E0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803305E4: nop

    // 0x803305E8: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x803305EC: nop

    // 0x803305F0: bne         $t0, $zero, L_803306C0
    if (ctx->r8 != 0) {
        // 0x803305F4: nop
    
            goto L_803306C0;
    }
    // 0x803305F4: nop

    // 0x803305F8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x803305FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330600: jal         0x80333D24
    // 0x80330604: nop

    func_80333D24_unk_bin_24(rdram, ctx);
        goto after_7;
    // 0x80330604: nop

    after_7:
    // 0x80330608: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033060C: beq         $v0, $at, L_80330630
    if (ctx->r2 == ctx->r1) {
        // 0x80330610: nop
    
            goto L_80330630;
    }
    // 0x80330610: nop

    // 0x80330614: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80330618: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033061C: jal         0x80333E64
    // 0x80330620: nop

    func_80333E64_unk_bin_24(rdram, ctx);
        goto after_8;
    // 0x80330620: nop

    after_8:
    // 0x80330624: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330628: bne         $v0, $at, L_803306C0
    if (ctx->r2 != ctx->r1) {
        // 0x8033062C: nop
    
            goto L_803306C0;
    }
    // 0x8033062C: nop

L_80330630:
    // 0x80330630: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330634: nop

    // 0x80330638: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033063C: nop

    // 0x80330640: bne         $t3, $zero, L_80330688
    if (ctx->r11 != 0) {
        // 0x80330644: nop
    
            goto L_80330688;
    }
    // 0x80330644: nop

    // 0x80330648: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033064C: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x80330650: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80330654: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330658: nop

    // 0x8033065C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80330660: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330664: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330668: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x8033066C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330670: nop

    // 0x80330674: sh          $zero, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = 0;
    // 0x80330678: b           L_803306C8
    // 0x8033067C: nop

        goto L_803306C8;
    // 0x8033067C: nop

    // 0x80330680: b           L_803306C0
    // 0x80330684: nop

        goto L_803306C0;
    // 0x80330684: nop

L_80330688:
    // 0x80330688: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033068C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80330690: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330694: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330698: nop

    // 0x8033069C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803306A0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803306A4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803306A8: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
    // 0x803306AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803306B0: nop

    // 0x803306B4: sh          $zero, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = 0;
    // 0x803306B8: b           L_803306C8
    // 0x803306BC: nop

        goto L_803306C8;
    // 0x803306BC: nop

L_803306C0:
    // 0x803306C0: b           L_803306C8
    // 0x803306C4: nop

        goto L_803306C8;
    // 0x803306C4: nop

L_803306C8:
    // 0x803306C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803306CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803306D0: jr          $ra
    // 0x803306D4: nop

    return;
    // 0x803306D4: nop

;}
RECOMP_FUNC void func_80331710_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331710: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331714: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331718: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033171C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331720: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331724: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331728: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033172C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331730: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331734: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331738: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033173C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331740: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331744: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331748: nop

    // 0x8033174C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331750: nop

    // 0x80331754: bne         $t1, $zero, L_803317F8
    if (ctx->r9 != 0) {
        // 0x80331758: nop
    
            goto L_803317F8;
    }
    // 0x80331758: nop

    // 0x8033175C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331760: nop

    // 0x80331764: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331768: nop

    // 0x8033176C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331770: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331774: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331778: nop

    // 0x8033177C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331780: nop

    // 0x80331784: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033178C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331790: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80331794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331798: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033179C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803317A0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x803317A4: jal         0x8001C0EC
    // 0x803317A8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803317A8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x803317AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317B4: jal         0x8001BBDC
    // 0x803317B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803317B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x803317BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803317C8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803317CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803317D0: jal         0x8001ABF4
    // 0x803317D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803317D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803317D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317DC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803317E0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803317E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317E8: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803317EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803317F0: jal         0x8001ABF4
    // 0x803317F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803317F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_803317F8:
    // 0x803317F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331800: jal         0x8002A8B4
    // 0x80331804: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x80331804: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
    // 0x80331808: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033180C: nop

    // 0x80331810: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331814: nop

    // 0x80331818: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033181C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331820: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331824: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80331828: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033182C: jal         0x8002A0D0
    // 0x80331830: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_5;
    // 0x80331830: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_5:
    // 0x80331834: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331838: bne         $v0, $at, L_80331860
    if (ctx->r2 != ctx->r1) {
        // 0x8033183C: nop
    
            goto L_80331860;
    }
    // 0x8033183C: nop

    // 0x80331840: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331844: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331848: jal         0x8001BBDC
    // 0x8033184C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x8033184C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80331850: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331854: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331858: nop

    // 0x8033185C: swc1        $f6, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f6.u32l;
L_80331860:
    // 0x80331860: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331864: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331868: jal         0x8001B4AC
    // 0x8033186C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x8033186C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80331870: beq         $v0, $zero, L_803318D4
    if (ctx->r2 == 0) {
        // 0x80331874: nop
    
            goto L_803318D4;
    }
    // 0x80331874: nop

    // 0x80331878: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033187C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80331880: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80331884: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331888: nop

    // 0x8033188C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80331890: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331894: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331898: nop

    // 0x8033189C: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
    // 0x803318A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803318A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803318A8: nop

    // 0x803318AC: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
    // 0x803318B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803318B4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803318B8: nop

    // 0x803318BC: swc1        $f16, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f16.u32l;
    // 0x803318C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803318C4: nop

    // 0x803318C8: lwc1        $f18, 0x2C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x803318CC: nop

    // 0x803318D0: swc1        $f18, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f18.u32l;
L_803318D4:
    // 0x803318D4: b           L_803318DC
    // 0x803318D8: nop

        goto L_803318DC;
    // 0x803318D8: nop

L_803318DC:
    // 0x803318DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803318E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803318E4: jr          $ra
    // 0x803318E8: nop

    return;
    // 0x803318E8: nop

;}
RECOMP_FUNC void func_80332E44_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332E44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332E48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332E4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332E50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332E54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332E58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332E5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332E64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332E6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332E70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332E74: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332E78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332E7C: nop

    // 0x80332E80: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332E84: nop

    // 0x80332E88: bne         $t1, $zero, L_80332F1C
    if (ctx->r9 != 0) {
        // 0x80332E8C: nop
    
            goto L_80332F1C;
    }
    // 0x80332E8C: nop

    // 0x80332E90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332E94: nop

    // 0x80332E98: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332E9C: nop

    // 0x80332EA0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332EA4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332EA8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332EAC: nop

    // 0x80332EB0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332EB4: nop

    // 0x80332EB8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332EBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EC0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332EC4: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80332EC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332ECC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332ED0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332ED4: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80332ED8: jal         0x8001C0EC
    // 0x80332EDC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332EDC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80332EE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EE8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332EEC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332EF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332EF4: jal         0x8001ABF4
    // 0x80332EF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332EF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332EFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F00: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332F04: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332F08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F0C: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80332F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332F14: jal         0x8001ABF4
    // 0x80332F18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80332F18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80332F1C:
    // 0x80332F1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F24: jal         0x8002A8B4
    // 0x80332F28: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80332F28: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80332F2C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332F30: nop

    // 0x80332F34: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80332F38: nop

    // 0x80332F3C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80332F40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F48: jal         0x8001B4AC
    // 0x80332F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80332F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332F50: beq         $v0, $zero, L_80332F70
    if (ctx->r2 == 0) {
        // 0x80332F54: nop
    
            goto L_80332F70;
    }
    // 0x80332F54: nop

    // 0x80332F58: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332F5C: addiu       $t9, $zero, 0x1B
    ctx->r25 = ADD32(0, 0X1B);
    // 0x80332F60: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80332F64: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332F68: nop

    // 0x80332F6C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80332F70:
    // 0x80332F70: b           L_80332F78
    // 0x80332F74: nop

        goto L_80332F78;
    // 0x80332F74: nop

L_80332F78:
    // 0x80332F78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332F7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332F80: jr          $ra
    // 0x80332F84: nop

    return;
    // 0x80332F84: nop

;}
RECOMP_FUNC void func_8033228C_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033228C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332294: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332298: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033229C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803322A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803322A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803322A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803322AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803322B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803322B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803322B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803322BC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803322C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803322C4: nop

    // 0x803322C8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803322CC: nop

    // 0x803322D0: bne         $t1, $zero, L_80332364
    if (ctx->r9 != 0) {
        // 0x803322D4: nop
    
            goto L_80332364;
    }
    // 0x803322D4: nop

    // 0x803322D8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803322DC: nop

    // 0x803322E0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803322E4: nop

    // 0x803322E8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803322EC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803322F0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803322F4: nop

    // 0x803322F8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803322FC: nop

    // 0x80332300: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332304: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332308: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033230C: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80332310: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332314: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033231C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80332320: jal         0x8001C0EC
    // 0x80332324: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332324: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80332328: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033232C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332330: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332334: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033233C: jal         0x8001ABF4
    // 0x80332340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332344: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332348: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033234C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332350: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332354: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80332358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033235C: jal         0x8001ABF4
    // 0x80332360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80332360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80332364:
    // 0x80332364: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332368: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033236C: jal         0x8002A8B4
    // 0x80332370: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80332370: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80332374: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332378: nop

    // 0x8033237C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80332380: nop

    // 0x80332384: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80332388: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033238C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332390: jal         0x8001B4AC
    // 0x80332394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80332394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332398: beq         $v0, $zero, L_803323B8
    if (ctx->r2 == 0) {
        // 0x8033239C: nop
    
            goto L_803323B8;
    }
    // 0x8033239C: nop

    // 0x803323A0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803323A4: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x803323A8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803323AC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803323B0: nop

    // 0x803323B4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803323B8:
    // 0x803323B8: b           L_803323C0
    // 0x803323BC: nop

        goto L_803323C0;
    // 0x803323BC: nop

L_803323C0:
    // 0x803323C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803323C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803323C8: jr          $ra
    // 0x803323CC: nop

    return;
    // 0x803323CC: nop

;}
RECOMP_FUNC void func_803308F8_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803308F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803308FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330900: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330904: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330908: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033090C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330910: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330914: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330918: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033091C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330920: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330924: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330928: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033092C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330930: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330934: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330938: nop

    // 0x8033093C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330940: nop

    // 0x80330944: bne         $t1, $zero, L_803309D8
    if (ctx->r9 != 0) {
        // 0x80330948: nop
    
            goto L_803309D8;
    }
    // 0x80330948: nop

    // 0x8033094C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330950: nop

    // 0x80330954: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330958: nop

    // 0x8033095C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330960: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330964: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330968: nop

    // 0x8033096C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330970: nop

    // 0x80330974: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330978: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033097C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330980: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80330984: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330988: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033098C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330990: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80330994: jal         0x8001C0EC
    // 0x80330998: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330998: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033099C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309A4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803309A8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803309AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803309B0: jal         0x8001ABF4
    // 0x803309B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803309B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803309B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309BC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803309C0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803309C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309C8: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803309CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803309D0: jal         0x8001ABF4
    // 0x803309D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803309D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_803309D8:
    // 0x803309D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309E0: jal         0x8002A8B4
    // 0x803309E4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x803309E4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x803309E8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803309EC: nop

    // 0x803309F0: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803309F4: nop

    // 0x803309F8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803309FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A04: jal         0x80029C40
    // 0x80330A08: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80330A08: nop

    after_4:
    // 0x80330A0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330A10: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330A14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330A20: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80330A24: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330A28: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330A2C: jal         0x80029018
    // 0x80330A30: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80330A30: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80330A34: beq         $v0, $zero, L_80330A9C
    if (ctx->r2 == 0) {
        // 0x80330A38: nop
    
            goto L_80330A9C;
    }
    // 0x80330A38: nop

    // 0x80330A3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330A40: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A44: nop

    // 0x80330A48: swc1        $f10, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f10.u32l;
    // 0x80330A4C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A50: nop

    // 0x80330A54: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80330A58: nop

    // 0x80330A5C: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x80330A60: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A64: nop

    // 0x80330A68: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x80330A6C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330A70: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A74: nop

    // 0x80330A78: swc1        $f16, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f16.u32l;
    // 0x80330A7C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A80: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80330A84: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80330A88: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A8C: nop

    // 0x80330A90: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80330A94: b           L_80330AD4
    // 0x80330A98: nop

        goto L_80330AD4;
    // 0x80330A98: nop

L_80330A9C:
    // 0x80330A9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330AA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330AA4: jal         0x8001B4AC
    // 0x80330AA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80330AA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80330AAC: beq         $v0, $zero, L_80330ACC
    if (ctx->r2 == 0) {
        // 0x80330AB0: nop
    
            goto L_80330ACC;
    }
    // 0x80330AB0: nop

    // 0x80330AB4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AB8: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80330ABC: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80330AC0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AC4: nop

    // 0x80330AC8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80330ACC:
    // 0x80330ACC: b           L_80330AD4
    // 0x80330AD0: nop

        goto L_80330AD4;
    // 0x80330AD0: nop

L_80330AD4:
    // 0x80330AD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330AD8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330ADC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330AE0: jr          $ra
    // 0x80330AE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330AE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803338F4_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803338F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803338F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803338FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333900: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333904: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333908: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033390C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333910: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333914: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333918: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033391C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333920: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333924: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333928: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033392C: nop

    // 0x80333930: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333934: nop

    // 0x80333938: bne         $t1, $zero, L_803339CC
    if (ctx->r9 != 0) {
        // 0x8033393C: nop
    
            goto L_803339CC;
    }
    // 0x8033393C: nop

    // 0x80333940: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333944: nop

    // 0x80333948: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033394C: nop

    // 0x80333950: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333954: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333958: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033395C: nop

    // 0x80333960: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333964: nop

    // 0x80333968: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033396C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333970: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333974: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80333978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033397C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333984: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80333988: jal         0x8001C0EC
    // 0x8033398C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033398C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80333990: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333994: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333998: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033399C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803339A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803339A4: jal         0x8001ABF4
    // 0x803339A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803339A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803339AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803339B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803339B4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803339B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803339BC: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803339C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803339C4: jal         0x8001ABF4
    // 0x803339C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803339C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_803339CC:
    // 0x803339CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803339D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803339D4: jal         0x8002A8B4
    // 0x803339D8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x803339D8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x803339DC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803339E0: nop

    // 0x803339E4: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803339E8: nop

    // 0x803339EC: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803339F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803339F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803339F8: jal         0x8001B4AC
    // 0x803339FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803339FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333A00: beq         $v0, $zero, L_80333A20
    if (ctx->r2 == 0) {
        // 0x80333A04: nop
    
            goto L_80333A20;
    }
    // 0x80333A04: nop

    // 0x80333A08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333A0C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80333A10: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80333A14: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333A18: nop

    // 0x80333A1C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80333A20:
    // 0x80333A20: b           L_80333A28
    // 0x80333A24: nop

        goto L_80333A28;
    // 0x80333A24: nop

L_80333A28:
    // 0x80333A28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333A2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333A30: jr          $ra
    // 0x80333A34: nop

    return;
    // 0x80333A34: nop

;}
RECOMP_FUNC void func_80333D24_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333D24: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80333D28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333D2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333D30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333D34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333D38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333D40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333D48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333D4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333D50: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80333D54: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80333D58: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
L_80333D5C:
    // 0x80333D5C: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80333D60: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80333D64: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333D68: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333D6C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333D70: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333D74: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333D78: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333D7C: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x80333D80: nop

    // 0x80333D84: beq         $t3, $zero, L_80333E34
    if (ctx->r11 == 0) {
        // 0x80333D88: nop
    
            goto L_80333E34;
    }
    // 0x80333D88: nop

    // 0x80333D8C: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x80333D90: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80333D94: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333D98: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333D9C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333DA0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333DA4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333DA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333DAC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333DB0: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80333DB4: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80333DB8: nop

    // 0x80333DBC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80333DC0: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x80333DC4: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80333DC8: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80333DCC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333DD0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333DD4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333DD8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333DDC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333DE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333DE4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333DE8: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80333DEC: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80333DF0: nop

    // 0x80333DF4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80333DF8: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80333DFC: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80333E00: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80333E04: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80333E08: nop

    // 0x80333E0C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80333E10: nop

    // 0x80333E14: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80333E18: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80333E1C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80333E20: nop

    // 0x80333E24: bc1f        L_80333E34
    if (!c1cs) {
        // 0x80333E28: nop
    
            goto L_80333E34;
    }
    // 0x80333E28: nop

    // 0x80333E2C: b           L_80333E5C
    // 0x80333E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80333E5C;
    // 0x80333E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80333E34:
    // 0x80333E34: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x80333E38: nop

    // 0x80333E3C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80333E40: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x80333E44: bne         $at, $zero, L_80333D5C
    if (ctx->r1 != 0) {
        // 0x80333E48: sw          $t1, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r9;
            goto L_80333D5C;
    }
    // 0x80333E48: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x80333E4C: b           L_80333E5C
    // 0x80333E50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80333E5C;
    // 0x80333E50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80333E54: b           L_80333E5C
    // 0x80333E58: nop

        goto L_80333E5C;
    // 0x80333E58: nop

L_80333E5C:
    // 0x80333E5C: jr          $ra
    // 0x80333E60: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80333E60: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80334AA8_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334AA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334AB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334AB4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334AB8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334ABC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334AC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334AC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334AC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334ACC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334AD0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334AD4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334AD8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334ADC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334AE4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80334AE8: nop

    // 0x80334AEC: bne         $t1, $at, L_80334B0C
    if (ctx->r9 != ctx->r1) {
        // 0x80334AF0: nop
    
            goto L_80334B0C;
    }
    // 0x80334AF0: nop

    // 0x80334AF4: b           L_80334AFC
    // 0x80334AF8: nop

        goto L_80334AFC;
    // 0x80334AF8: nop

L_80334AFC:
    // 0x80334AFC: jal         0x803346C8
    // 0x80334B00: nop

    func_803346C8_unk_bin_24(rdram, ctx);
        goto after_0;
    // 0x80334B00: nop

    after_0:
    // 0x80334B04: b           L_80334B14
    // 0x80334B08: nop

        goto L_80334B14;
    // 0x80334B08: nop

L_80334B0C:
    // 0x80334B0C: b           L_80334B14
    // 0x80334B10: nop

        goto L_80334B14;
    // 0x80334B10: nop

L_80334B14:
    // 0x80334B14: b           L_80334B1C
    // 0x80334B18: nop

        goto L_80334B1C;
    // 0x80334B18: nop

L_80334B1C:
    // 0x80334B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334B20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334B24: jr          $ra
    // 0x80334B28: nop

    return;
    // 0x80334B28: nop

;}
RECOMP_FUNC void func_80334088_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334088: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033408C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334090: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334094: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334098: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033409C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803340A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803340A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803340A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803340AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803340B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803340B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803340B8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803340BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803340C0: nop

    // 0x803340C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803340C8: nop

    // 0x803340CC: bne         $t1, $zero, L_80334124
    if (ctx->r9 != 0) {
        // 0x803340D0: nop
    
            goto L_80334124;
    }
    // 0x803340D0: nop

    // 0x803340D4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803340D8: nop

    // 0x803340DC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803340E0: nop

    // 0x803340E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803340E8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803340EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803340F0: nop

    // 0x803340F4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803340F8: nop

    // 0x803340FC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334100: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334104: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334108: addiu       $t7, $t7, -0x5448
    ctx->r15 = ADD32(ctx->r15, -0X5448);
    // 0x8033410C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334110: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334118: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033411C: jal         0x8001C0EC
    // 0x80334120: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334120: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_0:
L_80334124:
    // 0x80334124: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334128: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033412C: jal         0x8002A8B4
    // 0x80334130: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80334130: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80334134: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334138: nop

    // 0x8033413C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80334140: nop

    // 0x80334144: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80334148: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033414C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334150: jal         0x8001B4AC
    // 0x80334154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80334154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334158: beq         $v0, $zero, L_80334178
    if (ctx->r2 == 0) {
        // 0x8033415C: nop
    
            goto L_80334178;
    }
    // 0x8033415C: nop

    // 0x80334160: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334164: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80334168: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033416C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334170: nop

    // 0x80334174: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80334178:
    // 0x80334178: b           L_80334180
    // 0x8033417C: nop

        goto L_80334180;
    // 0x8033417C: nop

L_80334180:
    // 0x80334180: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334184: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334188: jr          $ra
    // 0x8033418C: nop

    return;
    // 0x8033418C: nop

;}
RECOMP_FUNC void func_803344A8_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803344A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803344AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803344B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803344B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803344B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803344BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803344C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803344C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803344C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803344CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803344D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803344D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803344D8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803344DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803344E0: nop

    // 0x803344E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803344E8: nop

    // 0x803344EC: bne         $t1, $zero, L_80334544
    if (ctx->r9 != 0) {
        // 0x803344F0: nop
    
            goto L_80334544;
    }
    // 0x803344F0: nop

    // 0x803344F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803344F8: nop

    // 0x803344FC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334500: nop

    // 0x80334504: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334508: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033450C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334510: nop

    // 0x80334514: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334518: nop

    // 0x8033451C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334520: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334524: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334528: addiu       $t7, $t7, -0x5448
    ctx->r15 = ADD32(ctx->r15, -0X5448);
    // 0x8033452C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334530: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334538: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8033453C: jal         0x8001C0EC
    // 0x80334540: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334540: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_0:
L_80334544:
    // 0x80334544: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334548: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033454C: jal         0x8002A8B4
    // 0x80334550: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80334550: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80334554: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334558: nop

    // 0x8033455C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80334560: nop

    // 0x80334564: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80334568: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033456C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334570: jal         0x8001B4AC
    // 0x80334574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80334574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334578: beq         $v0, $zero, L_80334590
    if (ctx->r2 == 0) {
        // 0x8033457C: nop
    
            goto L_80334590;
    }
    // 0x8033457C: nop

    // 0x80334580: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334584: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334588: jal         0x8002B114
    // 0x8033458C: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x8033458C: nop

    after_3:
L_80334590:
    // 0x80334590: b           L_80334598
    // 0x80334594: nop

        goto L_80334598;
    // 0x80334594: nop

L_80334598:
    // 0x80334598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033459C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803345A0: jr          $ra
    // 0x803345A4: nop

    return;
    // 0x803345A4: nop

;}
RECOMP_FUNC void func_803345A8_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803345A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803345AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803345B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803345B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803345B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803345BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803345C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803345C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803345C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803345CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803345D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803345D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803345D8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803345DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803345E0: nop

    // 0x803345E4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x803345E8: nop

    // 0x803345EC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803345F0: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x803345F4: beq         $at, $zero, L_80334678
    if (ctx->r1 == 0) {
        // 0x803345F8: nop
    
            goto L_80334678;
    }
    // 0x803345F8: nop

    // 0x803345FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334600: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334604: addu        $at, $at, $t2
    gpr jr_addend_80334610 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334608: lw          $t2, 0x5880($at)
    ctx->r10 = ADD32(ctx->r1, 0X5880);
    // 0x8033460C: nop

    // 0x80334610: jr          $t2
    // 0x80334614: nop

    switch (jr_addend_80334610 >> 2) {
        case 0: goto L_80334618; break;
        case 1: goto L_80334628; break;
        case 2: goto L_80334638; break;
        case 3: goto L_80334648; break;
        case 4: goto L_80334658; break;
        case 5: goto L_80334668; break;
        default: switch_error(__func__, 0x80334610, 0x80335880);
    }
    // 0x80334614: nop

L_80334618:
    // 0x80334618: jal         0x80333FA4
    // 0x8033461C: nop

    func_80333FA4_unk_bin_24(rdram, ctx);
        goto after_0;
    // 0x8033461C: nop

    after_0:
    // 0x80334620: b           L_80334680
    // 0x80334624: nop

        goto L_80334680;
    // 0x80334624: nop

L_80334628:
    // 0x80334628: jal         0x80334088
    // 0x8033462C: nop

    func_80334088_unk_bin_24(rdram, ctx);
        goto after_1;
    // 0x8033462C: nop

    after_1:
    // 0x80334630: b           L_80334680
    // 0x80334634: nop

        goto L_80334680;
    // 0x80334634: nop

L_80334638:
    // 0x80334638: jal         0x80334190
    // 0x8033463C: nop

    func_80334190_unk_bin_24(rdram, ctx);
        goto after_2;
    // 0x8033463C: nop

    after_2:
    // 0x80334640: b           L_80334680
    // 0x80334644: nop

        goto L_80334680;
    // 0x80334644: nop

L_80334648:
    // 0x80334648: jal         0x80334298
    // 0x8033464C: nop

    func_80334298_unk_bin_24(rdram, ctx);
        goto after_3;
    // 0x8033464C: nop

    after_3:
    // 0x80334650: b           L_80334680
    // 0x80334654: nop

        goto L_80334680;
    // 0x80334654: nop

L_80334658:
    // 0x80334658: jal         0x803343A0
    // 0x8033465C: nop

    func_803343A0_unk_bin_24(rdram, ctx);
        goto after_4;
    // 0x8033465C: nop

    after_4:
    // 0x80334660: b           L_80334680
    // 0x80334664: nop

        goto L_80334680;
    // 0x80334664: nop

L_80334668:
    // 0x80334668: jal         0x803344A8
    // 0x8033466C: nop

    func_803344A8_unk_bin_24(rdram, ctx);
        goto after_5;
    // 0x8033466C: nop

    after_5:
    // 0x80334670: b           L_80334680
    // 0x80334674: nop

        goto L_80334680;
    // 0x80334674: nop

L_80334678:
    // 0x80334678: b           L_80334680
    // 0x8033467C: nop

        goto L_80334680;
    // 0x8033467C: nop

L_80334680:
    // 0x80334680: b           L_80334688
    // 0x80334684: nop

        goto L_80334688;
    // 0x80334684: nop

L_80334688:
    // 0x80334688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033468C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334690: jr          $ra
    // 0x80334694: nop

    return;
    // 0x80334694: nop

;}
RECOMP_FUNC void func_80332BBC_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332BBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332BC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332BC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332BC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332BCC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332BD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332BD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332BD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332BDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332BE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332BE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332BE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332BEC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332BF0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332BF4: nop

    // 0x80332BF8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332BFC: nop

    // 0x80332C00: bne         $t1, $zero, L_80332C94
    if (ctx->r9 != 0) {
        // 0x80332C04: nop
    
            goto L_80332C94;
    }
    // 0x80332C04: nop

    // 0x80332C08: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C0C: nop

    // 0x80332C10: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332C14: nop

    // 0x80332C18: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332C1C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332C20: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C24: nop

    // 0x80332C28: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332C2C: nop

    // 0x80332C30: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332C34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C38: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332C3C: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80332C40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332C4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80332C50: jal         0x8001C0EC
    // 0x80332C54: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332C54: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80332C58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C60: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332C64: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332C68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332C6C: jal         0x8001ABF4
    // 0x80332C70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332C70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332C74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C78: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332C7C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332C80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C84: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80332C88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332C8C: jal         0x8001ABF4
    // 0x80332C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80332C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80332C94:
    // 0x80332C94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C9C: jal         0x8002A8B4
    // 0x80332CA0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80332CA0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80332CA4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CA8: nop

    // 0x80332CAC: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80332CB0: nop

    // 0x80332CB4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80332CB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CC0: jal         0x8001B4AC
    // 0x80332CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80332CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332CC8: beq         $v0, $zero, L_80332CE8
    if (ctx->r2 == 0) {
        // 0x80332CCC: nop
    
            goto L_80332CE8;
    }
    // 0x80332CCC: nop

    // 0x80332CD0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CD4: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x80332CD8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80332CDC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CE0: nop

    // 0x80332CE4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80332CE8:
    // 0x80332CE8: b           L_80332CF0
    // 0x80332CEC: nop

        goto L_80332CF0;
    // 0x80332CEC: nop

L_80332CF0:
    // 0x80332CF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332CF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332CF8: jr          $ra
    // 0x80332CFC: nop

    return;
    // 0x80332CFC: nop

;}
RECOMP_FUNC void func_803356B0_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803356B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803356B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803356B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803356BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803356C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803356C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803356C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803356CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803356D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803356D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803356D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803356DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803356E0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803356E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803356E8: nop

    // 0x803356EC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803356F0: nop

    // 0x803356F4: bne         $t1, $zero, L_80335738
    if (ctx->r9 != 0) {
        // 0x803356F8: nop
    
            goto L_80335738;
    }
    // 0x803356F8: nop

    // 0x803356FC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335700: nop

    // 0x80335704: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335708: nop

    // 0x8033570C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335710: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335714: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335718: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8033571C: addiu       $t5, $t5, -0x53D0
    ctx->r13 = ADD32(ctx->r13, -0X53D0);
    // 0x80335720: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335724: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80335728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033572C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335730: jal         0x8001C0EC
    // 0x80335734: addiu       $a3, $zero, 0x190
    ctx->r7 = ADD32(0, 0X190);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335734: addiu       $a3, $zero, 0x190
    ctx->r7 = ADD32(0, 0X190);
    after_0:
L_80335738:
    // 0x80335738: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033573C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335740: jal         0x8001B4AC
    // 0x80335744: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80335744: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335748: beq         $v0, $zero, L_80335760
    if (ctx->r2 == 0) {
        // 0x8033574C: nop
    
            goto L_80335760;
    }
    // 0x8033574C: nop

    // 0x80335750: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335754: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335758: jal         0x8002B114
    // 0x8033575C: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033575C: nop

    after_2:
L_80335760:
    // 0x80335760: b           L_80335768
    // 0x80335764: nop

        goto L_80335768;
    // 0x80335764: nop

L_80335768:
    // 0x80335768: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033576C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335770: jr          $ra
    // 0x80335774: nop

    return;
    // 0x80335774: nop

    // 0x80335778: nop

    // 0x8033577C: nop

;}
RECOMP_FUNC void func_803346C8_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803346C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803346CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803346D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803346D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803346D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803346DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803346E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803346E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803346E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803346EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803346F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803346F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803346F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803346FC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334700: nop

    // 0x80334704: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334708: nop

    // 0x8033470C: bne         $t1, $zero, L_803349FC
    if (ctx->r9 != 0) {
        // 0x80334710: nop
    
            goto L_803349FC;
    }
    // 0x80334710: nop

    // 0x80334714: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334718: nop

    // 0x8033471C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334720: nop

    // 0x80334724: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334728: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033472C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334730: nop

    // 0x80334734: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334738: nop

    // 0x8033473C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334740: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80334744: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334748: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033474C: nop

    // 0x80334750: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80334754: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x80334758: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033475C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334760: nop

    // 0x80334764: swc1        $f6, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f6.u32l;
    // 0x80334768: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033476C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334770: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334774: nop

    // 0x80334778: swc1        $f8, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f8.u32l;
    // 0x8033477C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334780: nop

    // 0x80334784: lhu         $t1, 0xC0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0XC0);
    // 0x80334788: nop

    // 0x8033478C: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x80334790: beq         $at, $zero, L_803349A0
    if (ctx->r1 == 0) {
        // 0x80334794: nop
    
            goto L_803349A0;
    }
    // 0x80334794: nop

    // 0x80334798: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033479C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803347A0: addu        $at, $at, $t1
    gpr jr_addend_803347AC = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803347A4: lw          $t1, 0x5898($at)
    ctx->r9 = ADD32(ctx->r1, 0X5898);
    // 0x803347A8: nop

    // 0x803347AC: jr          $t1
    // 0x803347B0: nop

    switch (jr_addend_803347AC >> 2) {
        case 0: goto L_803347B4; break;
        case 1: goto L_80334818; break;
        case 2: goto L_80334874; break;
        case 3: goto L_803348D8; break;
        case 4: goto L_8033493C; break;
        default: switch_error(__func__, 0x803347AC, 0x80335898);
    }
    // 0x803347B0: nop

L_803347B4:
    // 0x803347B4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803347B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803347BC: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x803347C0: nop

    // 0x803347C4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803347C8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803347CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803347D0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803347D4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803347D8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803347DC: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803347E0: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x803347E4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803347E8: jal         0x80015538
    // 0x803347EC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803347EC: nop

    after_0:
    // 0x803347F0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803347F4: nop

    // 0x803347F8: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x803347FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334800: nop

    // 0x80334804: lwc1        $f10, 0x1C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80334808: nop

    // 0x8033480C: swc1        $f10, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f10.u32l;
    // 0x80334810: b           L_803349FC
    // 0x80334814: nop

        goto L_803349FC;
    // 0x80334814: nop

L_80334818:
    // 0x80334818: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033481C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334820: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80334824: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80334828: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033482C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334830: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334834: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334838: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033483C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80334840: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80334844: jal         0x80015538
    // 0x80334848: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80334848: nop

    after_1:
    // 0x8033484C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334850: nop

    // 0x80334854: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x80334858: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033485C: nop

    // 0x80334860: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80334864: nop

    // 0x80334868: swc1        $f16, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f16.u32l;
    // 0x8033486C: b           L_803349FC
    // 0x80334870: nop

        goto L_803349FC;
    // 0x80334870: nop

L_80334874:
    // 0x80334874: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334878: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033487C: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80334880: nop

    // 0x80334884: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80334888: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033488C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334890: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80334894: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334898: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033489C: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803348A0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803348A4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803348A8: jal         0x80015538
    // 0x803348AC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x803348AC: nop

    after_2:
    // 0x803348B0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803348B4: nop

    // 0x803348B8: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x803348BC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803348C0: nop

    // 0x803348C4: lwc1        $f18, 0x1C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x803348C8: nop

    // 0x803348CC: swc1        $f18, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f18.u32l;
    // 0x803348D0: b           L_803349FC
    // 0x803348D4: nop

        goto L_803349FC;
    // 0x803348D4: nop

L_803348D8:
    // 0x803348D8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803348DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803348E0: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x803348E4: nop

    // 0x803348E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803348EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803348F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803348F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803348F8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803348FC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80334900: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80334904: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80334908: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033490C: jal         0x80015538
    // 0x80334910: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80334910: nop

    after_3:
    // 0x80334914: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334918: nop

    // 0x8033491C: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x80334920: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334924: nop

    // 0x80334928: lwc1        $f4, 0x1C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033492C: nop

    // 0x80334930: swc1        $f4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f4.u32l;
    // 0x80334934: b           L_803349FC
    // 0x80334938: nop

        goto L_803349FC;
    // 0x80334938: nop

L_8033493C:
    // 0x8033493C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334940: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334944: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80334948: nop

    // 0x8033494C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80334950: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80334954: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334958: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033495C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334960: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334964: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80334968: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8033496C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80334970: jal         0x80015538
    // 0x80334974: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80334974: nop

    after_4:
    // 0x80334978: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033497C: nop

    // 0x80334980: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x80334984: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334988: nop

    // 0x8033498C: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80334990: nop

    // 0x80334994: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80334998: b           L_803349FC
    // 0x8033499C: nop

        goto L_803349FC;
    // 0x8033499C: nop

L_803349A0:
    // 0x803349A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803349A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803349A8: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x803349AC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803349B0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803349B4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803349B8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803349BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803349C0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803349C4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803349C8: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803349CC: jal         0x80015538
    // 0x803349D0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803349D0: nop

    after_5:
    // 0x803349D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803349D8: nop

    // 0x803349DC: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x803349E0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803349E4: nop

    // 0x803349E8: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803349EC: nop

    // 0x803349F0: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
    // 0x803349F4: b           L_803349FC
    // 0x803349F8: nop

        goto L_803349FC;
    // 0x803349F8: nop

L_803349FC:
    // 0x803349FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A04: jal         0x80029D8C
    // 0x80334A08: nop

    func_80029D8C(rdram, ctx);
        goto after_6;
    // 0x80334A08: nop

    after_6:
    // 0x80334A0C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334A10: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334A14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334A20: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80334A24: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334A28: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80334A2C: jal         0x80029018
    // 0x80334A30: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x80334A30: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x80334A34: beq         $v0, $zero, L_80334A54
    if (ctx->r2 == 0) {
        // 0x80334A38: nop
    
            goto L_80334A54;
    }
    // 0x80334A38: nop

    // 0x80334A3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A44: jal         0x8002B0E4
    // 0x80334A48: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x80334A48: nop

    after_8:
    // 0x80334A4C: b           L_80334A98
    // 0x80334A50: nop

        goto L_80334A98;
    // 0x80334A50: nop

L_80334A54:
    // 0x80334A54: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334A58: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80334A5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334A60: lwc1        $f18, 0x4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80334A64: nop

    // 0x80334A68: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80334A6C: nop

    // 0x80334A70: bc1f        L_80334A90
    if (!c1cs) {
        // 0x80334A74: nop
    
            goto L_80334A90;
    }
    // 0x80334A74: nop

    // 0x80334A78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A80: jal         0x8002B0E4
    // 0x80334A84: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x80334A84: nop

    after_9:
    // 0x80334A88: b           L_80334A98
    // 0x80334A8C: nop

        goto L_80334A98;
    // 0x80334A8C: nop

L_80334A90:
    // 0x80334A90: b           L_80334A98
    // 0x80334A94: nop

        goto L_80334A98;
    // 0x80334A94: nop

L_80334A98:
    // 0x80334A98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334AA0: jr          $ra
    // 0x80334AA4: nop

    return;
    // 0x80334AA4: nop

;}
RECOMP_FUNC void func_80331A0C_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331A10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331A14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331A18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331A1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A3C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331A40: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331A44: nop

    // 0x80331A48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331A4C: nop

    // 0x80331A50: bne         $t1, $zero, L_80331AE4
    if (ctx->r9 != 0) {
        // 0x80331A54: nop
    
            goto L_80331AE4;
    }
    // 0x80331A54: nop

    // 0x80331A58: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331A5C: nop

    // 0x80331A60: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331A64: nop

    // 0x80331A68: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331A6C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331A70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331A74: nop

    // 0x80331A78: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331A7C: nop

    // 0x80331A80: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331A84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A88: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331A8C: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80331A90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A94: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331A9C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80331AA0: jal         0x8001C0EC
    // 0x80331AA4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331AA4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80331AA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AB0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331AB4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331ABC: jal         0x8001ABF4
    // 0x80331AC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331AC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331AC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AC8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331ACC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331AD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AD4: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80331AD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331ADC: jal         0x8001ABF4
    // 0x80331AE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80331AE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80331AE4:
    // 0x80331AE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AEC: jal         0x8001B4AC
    // 0x80331AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80331AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80331AF4: beq         $v0, $zero, L_80331B14
    if (ctx->r2 == 0) {
        // 0x80331AF8: nop
    
            goto L_80331B14;
    }
    // 0x80331AF8: nop

    // 0x80331AFC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331B00: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x80331B04: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331B08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331B0C: nop

    // 0x80331B10: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331B14:
    // 0x80331B14: b           L_80331B1C
    // 0x80331B18: nop

        goto L_80331B1C;
    // 0x80331B18: nop

L_80331B1C:
    // 0x80331B1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331B24: jr          $ra
    // 0x80331B28: nop

    return;
    // 0x80331B28: nop

;}
RECOMP_FUNC void func_80330AE8_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330AE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330AEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330AF0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330AF4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330AF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330AFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330B00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330B04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330B08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B18: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330B1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330B20: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330B24: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B28: nop

    // 0x80330B2C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330B30: nop

    // 0x80330B34: bne         $t1, $zero, L_80330BC8
    if (ctx->r9 != 0) {
        // 0x80330B38: nop
    
            goto L_80330BC8;
    }
    // 0x80330B38: nop

    // 0x80330B3C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B40: nop

    // 0x80330B44: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330B48: nop

    // 0x80330B4C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330B50: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330B54: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B58: nop

    // 0x80330B5C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330B60: nop

    // 0x80330B64: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330B68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B6C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330B70: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80330B74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330B80: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80330B84: jal         0x8001C0EC
    // 0x80330B88: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330B88: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80330B8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B94: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330B98: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80330B9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330BA0: jal         0x8001ABF4
    // 0x80330BA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330BA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80330BA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BAC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330BB0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80330BB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BB8: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80330BBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330BC0: jal         0x8001ABF4
    // 0x80330BC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330BC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80330BC8:
    // 0x80330BC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BD0: jal         0x8002A8B4
    // 0x80330BD4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80330BD4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80330BD8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BDC: nop

    // 0x80330BE0: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330BE4: nop

    // 0x80330BE8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330BEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BF4: jal         0x80029C40
    // 0x80330BF8: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80330BF8: nop

    after_4:
    // 0x80330BFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330C00: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330C04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330C10: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80330C14: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330C18: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330C1C: jal         0x80029018
    // 0x80330C20: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80330C20: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80330C24: beq         $v0, $zero, L_80330C8C
    if (ctx->r2 == 0) {
        // 0x80330C28: nop
    
            goto L_80330C8C;
    }
    // 0x80330C28: nop

    // 0x80330C2C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330C30: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C34: nop

    // 0x80330C38: swc1        $f10, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f10.u32l;
    // 0x80330C3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C40: nop

    // 0x80330C44: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80330C48: nop

    // 0x80330C4C: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x80330C50: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C54: nop

    // 0x80330C58: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x80330C5C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330C60: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C64: nop

    // 0x80330C68: swc1        $f16, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f16.u32l;
    // 0x80330C6C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C70: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80330C74: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80330C78: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C7C: nop

    // 0x80330C80: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80330C84: b           L_80330CC4
    // 0x80330C88: nop

        goto L_80330CC4;
    // 0x80330C88: nop

L_80330C8C:
    // 0x80330C8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C94: jal         0x8001B4AC
    // 0x80330C98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80330C98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80330C9C: beq         $v0, $zero, L_80330CBC
    if (ctx->r2 == 0) {
        // 0x80330CA0: nop
    
            goto L_80330CBC;
    }
    // 0x80330CA0: nop

    // 0x80330CA4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CA8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80330CAC: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80330CB0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CB4: nop

    // 0x80330CB8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80330CBC:
    // 0x80330CBC: b           L_80330CC4
    // 0x80330CC0: nop

        goto L_80330CC4;
    // 0x80330CC0: nop

L_80330CC4:
    // 0x80330CC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330CC8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330CCC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330CD0: jr          $ra
    // 0x80330CD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330CD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331178_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331178: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033117C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331180: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331184: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331188: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033118C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331190: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331194: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331198: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033119C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803311A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803311A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803311A8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803311AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803311B0: nop

    // 0x803311B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803311B8: nop

    // 0x803311BC: bne         $t1, $zero, L_80331250
    if (ctx->r9 != 0) {
        // 0x803311C0: nop
    
            goto L_80331250;
    }
    // 0x803311C0: nop

    // 0x803311C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803311C8: nop

    // 0x803311CC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803311D0: nop

    // 0x803311D4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803311D8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803311DC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803311E0: nop

    // 0x803311E4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803311E8: nop

    // 0x803311EC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803311F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311F4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803311F8: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x803311FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331200: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331208: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8033120C: jal         0x8001C0EC
    // 0x80331210: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331210: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80331214: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033121C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331220: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331228: jal         0x8001ABF4
    // 0x8033122C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033122C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331230: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331234: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331238: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033123C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331240: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80331244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331248: jal         0x8001ABF4
    // 0x8033124C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033124C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80331250:
    // 0x80331250: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331254: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331258: jal         0x8001B4AC
    // 0x8033125C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x8033125C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80331260: beq         $v0, $zero, L_80331280
    if (ctx->r2 == 0) {
        // 0x80331264: nop
    
            goto L_80331280;
    }
    // 0x80331264: nop

    // 0x80331268: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033126C: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x80331270: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331274: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331278: nop

    // 0x8033127C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331280:
    // 0x80331280: b           L_80331288
    // 0x80331284: nop

        goto L_80331288;
    // 0x80331284: nop

L_80331288:
    // 0x80331288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033128C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331290: jr          $ra
    // 0x80331294: nop

    return;
    // 0x80331294: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330010: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
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
    // 0x80330040: addiu       $a1, $a1, 0x57BC
    ctx->r5 = ADD32(ctx->r5, 0X57BC);
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
    // 0x80330060: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80330064: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330068: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033006C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80330070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330074: jal         0x8001ABF4
    // 0x80330078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033007C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330080: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80330084: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330088: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8033008C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330090: jal         0x8001ABF4
    // 0x80330094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330098: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033009C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x803300A0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803300A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803300A8: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x803300AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803300B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803300B4: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x803300B8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803300BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300C0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803300C4: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x803300C8: b           L_803300D0
    // 0x803300CC: nop

        goto L_803300D0;
    // 0x803300CC: nop

L_803300D0:
    // 0x803300D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803300D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803300D8: jr          $ra
    // 0x803300DC: nop

    return;
    // 0x803300DC: nop

;}
RECOMP_FUNC void func_803351E8_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803351E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803351EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803351F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803351F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803351F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803351FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335200: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335204: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335208: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033520C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335210: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335214: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335218: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033521C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80335220: nop

    // 0x80335224: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335228: nop

    // 0x8033522C: bne         $t1, $zero, L_803352A4
    if (ctx->r9 != 0) {
        // 0x80335230: nop
    
            goto L_803352A4;
    }
    // 0x80335230: nop

    // 0x80335234: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80335238: nop

    // 0x8033523C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335240: nop

    // 0x80335244: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335248: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033524C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335250: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80335254: addiu       $t5, $t5, -0x53DC
    ctx->r13 = ADD32(ctx->r13, -0X53DC);
    // 0x80335258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033525C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80335260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80335268: jal         0x8001C0EC
    // 0x8033526C: addiu       $a3, $zero, 0x18F
    ctx->r7 = ADD32(0, 0X18F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033526C: addiu       $a3, $zero, 0x18F
    ctx->r7 = ADD32(0, 0X18F);
    after_0:
    // 0x80335270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335278: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033527C: jal         0x80029EF8
    // 0x80335280: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x80335280: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_1:
    // 0x80335284: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80335288: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033528C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80335290: nop

    // 0x80335294: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80335298: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033529C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x803352A0: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
L_803352A4:
    // 0x803352A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352AC: jal         0x80028FA0
    // 0x803352B0: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x803352B0: nop

    after_2:
    // 0x803352B4: beq         $v0, $zero, L_803352CC
    if (ctx->r2 == 0) {
        // 0x803352B8: nop
    
            goto L_803352CC;
    }
    // 0x803352B8: nop

    // 0x803352BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352C4: jal         0x80029B60
    // 0x803352C8: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x803352C8: nop

    after_3:
L_803352CC:
    // 0x803352CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803352D0: nop

    // 0x803352D4: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x803352D8: nop

    // 0x803352DC: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x803352E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352E8: jal         0x80029C40
    // 0x803352EC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x803352EC: nop

    after_4:
    // 0x803352F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803352FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80335300: jal         0x8002A0D0
    // 0x80335304: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_5;
    // 0x80335304: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_5:
    // 0x80335308: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033530C: bne         $v0, $at, L_803353B8
    if (ctx->r2 != ctx->r1) {
        // 0x80335310: nop
    
            goto L_803353B8;
    }
    // 0x80335310: nop

    // 0x80335314: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335318: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033531C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335320: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335324: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80335328: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8033532C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335330: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80335334: jal         0x800295C0
    // 0x80335338: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x80335338: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x8033533C: beq         $v0, $zero, L_80335354
    if (ctx->r2 == 0) {
        // 0x80335340: nop
    
            goto L_80335354;
    }
    // 0x80335340: nop

    // 0x80335344: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80335348: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033534C: b           L_80335364
    // 0x80335350: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
        goto L_80335364;
    // 0x80335350: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
L_80335354:
    // 0x80335354: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80335358: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033535C: nop

    // 0x80335360: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
L_80335364:
    // 0x80335364: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80335368: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033536C: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80335370: nop

    // 0x80335374: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80335378: nop

    // 0x8033537C: bc1f        L_803353A4
    if (!c1cs) {
        // 0x80335380: nop
    
            goto L_803353A4;
    }
    // 0x80335380: nop

    // 0x80335384: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80335388: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8033538C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80335390: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80335394: nop

    // 0x80335398: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x8033539C: b           L_80335414
    // 0x803353A0: nop

        goto L_80335414;
    // 0x803353A0: nop

L_803353A4:
    // 0x803353A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803353A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803353AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803353B0: jal         0x80029EF8
    // 0x803353B4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x803353B4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_7:
L_803353B8:
    // 0x803353B8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803353BC: nop

    // 0x803353C0: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
    // 0x803353C4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803353C8: nop

    // 0x803353CC: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x803353D0: nop

    // 0x803353D4: beq         $t8, $zero, L_803353F4
    if (ctx->r24 == 0) {
        // 0x803353D8: nop
    
            goto L_803353F4;
    }
    // 0x803353D8: nop

    // 0x803353DC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803353E0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x803353E4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803353E8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803353EC: b           L_8033540C
    // 0x803353F0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_8033540C;
    // 0x803353F0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803353F4:
    // 0x803353F4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803353F8: nop

    // 0x803353FC: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80335400: nop

    // 0x80335404: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80335408: sh          $t2, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r10;
L_8033540C:
    // 0x8033540C: b           L_80335414
    // 0x80335410: nop

        goto L_80335414;
    // 0x80335410: nop

L_80335414:
    // 0x80335414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335418: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033541C: jr          $ra
    // 0x80335420: nop

    return;
    // 0x80335420: nop

;}
RECOMP_FUNC void func_803328DC_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803328DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803328E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803328E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803328E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803328EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803328F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803328F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803328F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803328FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332900: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332904: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332908: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033290C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332910: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332914: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80332918: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033291C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80332920: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332924: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332928: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033292C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332930: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332934: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80332938: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8033293C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332940: nop

    // 0x80332944: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80332948: nop

    // 0x8033294C: bne         $t6, $zero, L_803329E0
    if (ctx->r14 != 0) {
        // 0x80332950: nop
    
            goto L_803329E0;
    }
    // 0x80332950: nop

    // 0x80332954: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332958: nop

    // 0x8033295C: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80332960: nop

    // 0x80332964: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332968: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033296C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332970: nop

    // 0x80332974: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80332978: nop

    // 0x8033297C: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80332980: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332984: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80332988: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x8033298C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332990: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80332994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332998: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x8033299C: jal         0x8001C0EC
    // 0x803329A0: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803329A0: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x803329A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329AC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803329B0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803329B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803329B8: jal         0x8001ABF4
    // 0x803329BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803329BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803329C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803329C8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803329CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329D0: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803329D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803329D8: jal         0x8001ABF4
    // 0x803329DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803329DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_803329E0:
    // 0x803329E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329E8: jal         0x8002A8B4
    // 0x803329EC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x803329EC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x803329F0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803329F4: nop

    // 0x803329F8: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x803329FC: nop

    // 0x80332A00: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x80332A04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A0C: jal         0x8001B4AC
    // 0x80332A10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80332A10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332A14: beq         $v0, $zero, L_80332A34
    if (ctx->r2 == 0) {
        // 0x80332A18: nop
    
            goto L_80332A34;
    }
    // 0x80332A18: nop

    // 0x80332A1C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A20: addiu       $t4, $zero, 0x17
    ctx->r12 = ADD32(0, 0X17);
    // 0x80332A24: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80332A28: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A2C: nop

    // 0x80332A30: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80332A34:
    // 0x80332A34: b           L_80332A3C
    // 0x80332A38: nop

        goto L_80332A3C;
    // 0x80332A38: nop

L_80332A3C:
    // 0x80332A3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332A44: jr          $ra
    // 0x80332A48: nop

    return;
    // 0x80332A48: nop

;}
RECOMP_FUNC void func_803337F4_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803337F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803337F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803337FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333800: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333804: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333808: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033380C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333810: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333814: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333818: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033381C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333820: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333824: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333828: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033382C: nop

    // 0x80333830: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333834: nop

    // 0x80333838: bne         $t1, $zero, L_803338AC
    if (ctx->r9 != 0) {
        // 0x8033383C: nop
    
            goto L_803338AC;
    }
    // 0x8033383C: nop

    // 0x80333840: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333844: nop

    // 0x80333848: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033384C: nop

    // 0x80333850: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333854: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333858: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033385C: nop

    // 0x80333860: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333864: nop

    // 0x80333868: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033386C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333870: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333874: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80333878: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033387C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333884: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80333888: jal         0x8001C0EC
    // 0x8033388C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033388C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80333890: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80333894: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80333898: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033389C: sh          $t8, 0x15AA($t9)
    MEM_H(0X15AA, ctx->r25) = ctx->r24;
    // 0x803338A0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803338A4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803338A8: sb          $zero, 0x1632($t0)
    MEM_B(0X1632, ctx->r8) = 0;
L_803338AC:
    // 0x803338AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803338B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803338B4: jal         0x8001B4AC
    // 0x803338B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803338B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803338BC: beq         $v0, $zero, L_803338DC
    if (ctx->r2 == 0) {
        // 0x803338C0: nop
    
            goto L_803338DC;
    }
    // 0x803338C0: nop

    // 0x803338C4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803338C8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803338CC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803338D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803338D4: nop

    // 0x803338D8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803338DC:
    // 0x803338DC: b           L_803338E4
    // 0x803338E0: nop

        goto L_803338E4;
    // 0x803338E0: nop

L_803338E4:
    // 0x803338E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803338E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803338EC: jr          $ra
    // 0x803338F0: nop

    return;
    // 0x803338F0: nop

;}
RECOMP_FUNC void func_80332D00_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332D00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332D04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332D08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332D0C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332D10: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332D14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332D18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332D1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332D20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332D24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332D28: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332D2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332D30: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332D34: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D38: nop

    // 0x80332D3C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332D40: nop

    // 0x80332D44: bne         $t1, $zero, L_80332DD8
    if (ctx->r9 != 0) {
        // 0x80332D48: nop
    
            goto L_80332DD8;
    }
    // 0x80332D48: nop

    // 0x80332D4C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D50: nop

    // 0x80332D54: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332D58: nop

    // 0x80332D5C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332D60: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332D64: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D68: nop

    // 0x80332D6C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332D70: nop

    // 0x80332D74: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332D78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D7C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332D80: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80332D84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D90: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80332D94: jal         0x8001C0EC
    // 0x80332D98: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332D98: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80332D9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DA4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332DA8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332DAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332DB0: jal         0x8001ABF4
    // 0x80332DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332DB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DBC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332DC0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332DC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DC8: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80332DCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332DD0: jal         0x8001ABF4
    // 0x80332DD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80332DD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80332DD8:
    // 0x80332DD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DE0: jal         0x8002A8B4
    // 0x80332DE4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80332DE4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80332DE8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DEC: nop

    // 0x80332DF0: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80332DF4: nop

    // 0x80332DF8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80332DFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E04: jal         0x8001B4AC
    // 0x80332E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80332E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332E0C: beq         $v0, $zero, L_80332E2C
    if (ctx->r2 == 0) {
        // 0x80332E10: nop
    
            goto L_80332E2C;
    }
    // 0x80332E10: nop

    // 0x80332E14: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E18: addiu       $t9, $zero, 0x1A
    ctx->r25 = ADD32(0, 0X1A);
    // 0x80332E1C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80332E20: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E24: nop

    // 0x80332E28: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80332E2C:
    // 0x80332E2C: b           L_80332E34
    // 0x80332E30: nop

        goto L_80332E34;
    // 0x80332E30: nop

L_80332E34:
    // 0x80332E34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332E38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332E3C: jr          $ra
    // 0x80332E40: nop

    return;
    // 0x80332E40: nop

;}
RECOMP_FUNC void func_80331E40_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331E44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331E48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331E4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331E50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331E54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331E58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331E60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331E68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331E6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331E70: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331E74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331E78: nop

    // 0x80331E7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331E80: nop

    // 0x80331E84: bne         $t1, $zero, L_80331F18
    if (ctx->r9 != 0) {
        // 0x80331E88: nop
    
            goto L_80331F18;
    }
    // 0x80331E88: nop

    // 0x80331E8C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331E90: nop

    // 0x80331E94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331E98: nop

    // 0x80331E9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331EA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331EA4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331EA8: nop

    // 0x80331EAC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331EB0: nop

    // 0x80331EB4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331EB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EBC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331EC0: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80331EC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EC8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331ECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331ED0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80331ED4: jal         0x8001C0EC
    // 0x80331ED8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331ED8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80331EDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EE4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331EE8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331EF0: jal         0x8001ABF4
    // 0x80331EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331EF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EFC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331F00: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331F04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F08: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80331F0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331F10: jal         0x8001ABF4
    // 0x80331F14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80331F14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80331F18:
    // 0x80331F18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F20: jal         0x80029C40
    // 0x80331F24: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x80331F24: nop

    after_3:
    // 0x80331F28: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331F2C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331F30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331F3C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80331F40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331F44: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80331F48: jal         0x80029018
    // 0x80331F4C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x80331F4C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80331F50: beq         $v0, $zero, L_80331F98
    if (ctx->r2 == 0) {
        // 0x80331F54: nop
    
            goto L_80331F98;
    }
    // 0x80331F54: nop

    // 0x80331F58: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331F5C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331F60: nop

    // 0x80331F64: swc1        $f8, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f8.u32l;
    // 0x80331F68: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331F6C: nop

    // 0x80331F70: lwc1        $f10, 0x2C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80331F74: nop

    // 0x80331F78: swc1        $f10, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f10.u32l;
    // 0x80331F7C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331F80: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331F84: nop

    // 0x80331F88: swc1        $f16, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f16.u32l;
    // 0x80331F8C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331F90: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80331F94: sh          $t1, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = ctx->r9;
L_80331F98:
    // 0x80331F98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FA0: jal         0x8001B4AC
    // 0x80331FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80331FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80331FA8: beq         $v0, $zero, L_80331FFC
    if (ctx->r2 == 0) {
        // 0x80331FAC: nop
    
            goto L_80331FFC;
    }
    // 0x80331FAC: nop

    // 0x80331FB0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331FB4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331FB8: nop

    // 0x80331FBC: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
    // 0x80331FC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331FC4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331FC8: nop

    // 0x80331FCC: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
    // 0x80331FD0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331FD4: nop

    // 0x80331FD8: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80331FDC: nop

    // 0x80331FE0: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x80331FE4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331FE8: addiu       $t5, $zero, 0x11
    ctx->r13 = ADD32(0, 0X11);
    // 0x80331FEC: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80331FF0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331FF4: nop

    // 0x80331FF8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80331FFC:
    // 0x80331FFC: b           L_80332004
    // 0x80332000: nop

        goto L_80332004;
    // 0x80332000: nop

L_80332004:
    // 0x80332004: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332008: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033200C: jr          $ra
    // 0x80332010: nop

    return;
    // 0x80332010: nop

;}
RECOMP_FUNC void func_80331B2C_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331B30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331B34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331B38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331B3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331B40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331B44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331B4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331B54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331B58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331B5C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331B60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331B64: nop

    // 0x80331B68: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331B6C: nop

    // 0x80331B70: bne         $t1, $zero, L_80331C04
    if (ctx->r9 != 0) {
        // 0x80331B74: nop
    
            goto L_80331C04;
    }
    // 0x80331B74: nop

    // 0x80331B78: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331B7C: nop

    // 0x80331B80: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331B84: nop

    // 0x80331B88: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331B8C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331B90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331B94: nop

    // 0x80331B98: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331B9C: nop

    // 0x80331BA0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331BA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BA8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331BAC: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80331BB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331BB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331BB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331BBC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80331BC0: jal         0x8001C0EC
    // 0x80331BC4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331BC4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80331BC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331BD0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331BD4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331BDC: jal         0x8001ABF4
    // 0x80331BE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331BE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331BE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BE8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331BEC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331BF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331BF4: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80331BF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331BFC: jal         0x8001ABF4
    // 0x80331C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80331C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80331C04:
    // 0x80331C04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C0C: jal         0x8001B4AC
    // 0x80331C10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80331C10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80331C14: beq         $v0, $zero, L_80331C34
    if (ctx->r2 == 0) {
        // 0x80331C18: nop
    
            goto L_80331C34;
    }
    // 0x80331C18: nop

    // 0x80331C1C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331C20: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80331C24: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331C28: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331C2C: nop

    // 0x80331C30: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331C34:
    // 0x80331C34: b           L_80331C3C
    // 0x80331C38: nop

        goto L_80331C3C;
    // 0x80331C38: nop

L_80331C3C:
    // 0x80331C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331C44: jr          $ra
    // 0x80331C48: nop

    return;
    // 0x80331C48: nop

;}
RECOMP_FUNC void func_80333A38_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333A38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333A3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333A40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80333A44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333A48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333A4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333A50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333A54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333A58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333A5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333A60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333A64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333A68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333A6C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333A70: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333A74: nop

    // 0x80333A78: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80333A7C: nop

    // 0x80333A80: bne         $t1, $zero, L_80333AA0
    if (ctx->r9 != 0) {
        // 0x80333A84: nop
    
            goto L_80333AA0;
    }
    // 0x80333A84: nop

    // 0x80333A88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A90: jal         0x8001BB34
    // 0x80333A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80333A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80333A98: b           L_80333AC8
    // 0x80333A9C: nop

        goto L_80333AC8;
    // 0x80333A9C: nop

L_80333AA0:
    // 0x80333AA0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333AA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333AA8: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x80333AAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333AB0: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x80333AB4: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80333AB8: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80333ABC: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80333AC0: jal         0x8001BB34
    // 0x80333AC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80333AC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_80333AC8:
    // 0x80333AC8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333ACC: nop

    // 0x80333AD0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333AD4: nop

    // 0x80333AD8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80333ADC: sltiu       $at, $t7, 0x20
    ctx->r1 = ctx->r15 < 0X20 ? 1 : 0;
    // 0x80333AE0: beq         $at, $zero, L_80333D04
    if (ctx->r1 == 0) {
        // 0x80333AE4: nop
    
            goto L_80333D04;
    }
    // 0x80333AE4: nop

    // 0x80333AE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333AEC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333AF0: addu        $at, $at, $t7
    gpr jr_addend_80333AFC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333AF4: lw          $t7, 0x5800($at)
    ctx->r15 = ADD32(ctx->r1, 0X5800);
    // 0x80333AF8: nop

    // 0x80333AFC: jr          $t7
    // 0x80333B00: nop

    switch (jr_addend_80333AFC >> 2) {
        case 0: goto L_80333B04; break;
        case 1: goto L_80333B14; break;
        case 2: goto L_80333B24; break;
        case 3: goto L_80333B34; break;
        case 4: goto L_80333B44; break;
        case 5: goto L_80333B54; break;
        case 6: goto L_80333B64; break;
        case 7: goto L_80333B74; break;
        case 8: goto L_80333B84; break;
        case 9: goto L_80333B94; break;
        case 10: goto L_80333BA4; break;
        case 11: goto L_80333BB4; break;
        case 12: goto L_80333BC4; break;
        case 13: goto L_80333BD4; break;
        case 14: goto L_80333BE4; break;
        case 15: goto L_80333BF4; break;
        case 16: goto L_80333C04; break;
        case 17: goto L_80333C14; break;
        case 18: goto L_80333C24; break;
        case 19: goto L_80333C34; break;
        case 20: goto L_80333C44; break;
        case 21: goto L_80333C54; break;
        case 22: goto L_80333C64; break;
        case 23: goto L_80333C74; break;
        case 24: goto L_80333C84; break;
        case 25: goto L_80333C94; break;
        case 26: goto L_80333CA4; break;
        case 27: goto L_80333CB4; break;
        case 28: goto L_80333CC4; break;
        case 29: goto L_80333CD4; break;
        case 30: goto L_80333CE4; break;
        case 31: goto L_80333CF4; break;
        default: switch_error(__func__, 0x80333AFC, 0x80335800);
    }
    // 0x80333B00: nop

L_80333B04:
    // 0x80333B04: jal         0x80330250
    // 0x80333B08: nop

    func_80330250_unk_bin_24(rdram, ctx);
        goto after_2;
    // 0x80333B08: nop

    after_2:
    // 0x80333B0C: b           L_80333D0C
    // 0x80333B10: nop

        goto L_80333D0C;
    // 0x80333B10: nop

L_80333B14:
    // 0x80333B14: jal         0x803306D8
    // 0x80333B18: nop

    func_803306D8_unk_bin_24(rdram, ctx);
        goto after_3;
    // 0x80333B18: nop

    after_3:
    // 0x80333B1C: b           L_80333D0C
    // 0x80333B20: nop

        goto L_80333D0C;
    // 0x80333B20: nop

L_80333B24:
    // 0x80333B24: jal         0x803308F8
    // 0x80333B28: nop

    func_803308F8_unk_bin_24(rdram, ctx);
        goto after_4;
    // 0x80333B28: nop

    after_4:
    // 0x80333B2C: b           L_80333D0C
    // 0x80333B30: nop

        goto L_80333D0C;
    // 0x80333B30: nop

L_80333B34:
    // 0x80333B34: jal         0x80330AE8
    // 0x80333B38: nop

    func_80330AE8_unk_bin_24(rdram, ctx);
        goto after_5;
    // 0x80333B38: nop

    after_5:
    // 0x80333B3C: b           L_80333D0C
    // 0x80333B40: nop

        goto L_80333D0C;
    // 0x80333B40: nop

L_80333B44:
    // 0x80333B44: jal         0x80330CD8
    // 0x80333B48: nop

    func_80330CD8_unk_bin_24(rdram, ctx);
        goto after_6;
    // 0x80333B48: nop

    after_6:
    // 0x80333B4C: b           L_80333D0C
    // 0x80333B50: nop

        goto L_80333D0C;
    // 0x80333B50: nop

L_80333B54:
    // 0x80333B54: jal         0x80331020
    // 0x80333B58: nop

    func_80331020_unk_bin_24(rdram, ctx);
        goto after_7;
    // 0x80333B58: nop

    after_7:
    // 0x80333B5C: b           L_80333D0C
    // 0x80333B60: nop

        goto L_80333D0C;
    // 0x80333B60: nop

L_80333B64:
    // 0x80333B64: jal         0x80331178
    // 0x80333B68: nop

    func_80331178_unk_bin_24(rdram, ctx);
        goto after_8;
    // 0x80333B68: nop

    after_8:
    // 0x80333B6C: b           L_80333D0C
    // 0x80333B70: nop

        goto L_80333D0C;
    // 0x80333B70: nop

L_80333B74:
    // 0x80333B74: jal         0x80331298
    // 0x80333B78: nop

    func_80331298_unk_bin_24(rdram, ctx);
        goto after_9;
    // 0x80333B78: nop

    after_9:
    // 0x80333B7C: b           L_80333D0C
    // 0x80333B80: nop

        goto L_80333D0C;
    // 0x80333B80: nop

L_80333B84:
    // 0x80333B84: jal         0x803313D4
    // 0x80333B88: nop

    func_803313D4_unk_bin_24(rdram, ctx);
        goto after_10;
    // 0x80333B88: nop

    after_10:
    // 0x80333B8C: b           L_80333D0C
    // 0x80333B90: nop

        goto L_80333D0C;
    // 0x80333B90: nop

L_80333B94:
    // 0x80333B94: jal         0x80331548
    // 0x80333B98: nop

    func_80331548_unk_bin_24(rdram, ctx);
        goto after_11;
    // 0x80333B98: nop

    after_11:
    // 0x80333B9C: b           L_80333D0C
    // 0x80333BA0: nop

        goto L_80333D0C;
    // 0x80333BA0: nop

L_80333BA4:
    // 0x80333BA4: jal         0x80331710
    // 0x80333BA8: nop

    func_80331710_unk_bin_24(rdram, ctx);
        goto after_12;
    // 0x80333BA8: nop

    after_12:
    // 0x80333BAC: b           L_80333D0C
    // 0x80333BB0: nop

        goto L_80333D0C;
    // 0x80333BB0: nop

L_80333BB4:
    // 0x80333BB4: jal         0x803318EC
    // 0x80333BB8: nop

    func_803318EC_unk_bin_24(rdram, ctx);
        goto after_13;
    // 0x80333BB8: nop

    after_13:
    // 0x80333BBC: b           L_80333D0C
    // 0x80333BC0: nop

        goto L_80333D0C;
    // 0x80333BC0: nop

L_80333BC4:
    // 0x80333BC4: jal         0x80331A0C
    // 0x80333BC8: nop

    func_80331A0C_unk_bin_24(rdram, ctx);
        goto after_14;
    // 0x80333BC8: nop

    after_14:
    // 0x80333BCC: b           L_80333D0C
    // 0x80333BD0: nop

        goto L_80333D0C;
    // 0x80333BD0: nop

L_80333BD4:
    // 0x80333BD4: jal         0x80331B2C
    // 0x80333BD8: nop

    func_80331B2C_unk_bin_24(rdram, ctx);
        goto after_15;
    // 0x80333BD8: nop

    after_15:
    // 0x80333BDC: b           L_80333D0C
    // 0x80333BE0: nop

        goto L_80333D0C;
    // 0x80333BE0: nop

L_80333BE4:
    // 0x80333BE4: jal         0x80331C4C
    // 0x80333BE8: nop

    func_80331C4C_unk_bin_24(rdram, ctx);
        goto after_16;
    // 0x80333BE8: nop

    after_16:
    // 0x80333BEC: b           L_80333D0C
    // 0x80333BF0: nop

        goto L_80333D0C;
    // 0x80333BF0: nop

L_80333BF4:
    // 0x80333BF4: jal         0x80331E40
    // 0x80333BF8: nop

    func_80331E40_unk_bin_24(rdram, ctx);
        goto after_17;
    // 0x80333BF8: nop

    after_17:
    // 0x80333BFC: b           L_80333D0C
    // 0x80333C00: nop

        goto L_80333D0C;
    // 0x80333C00: nop

L_80333C04:
    // 0x80333C04: jal         0x80332014
    // 0x80333C08: nop

    func_80332014_unk_bin_24(rdram, ctx);
        goto after_18;
    // 0x80333C08: nop

    after_18:
    // 0x80333C0C: b           L_80333D0C
    // 0x80333C10: nop

        goto L_80333D0C;
    // 0x80333C10: nop

L_80333C14:
    // 0x80333C14: jal         0x8033228C
    // 0x80333C18: nop

    func_8033228C_unk_bin_24(rdram, ctx);
        goto after_19;
    // 0x80333C18: nop

    after_19:
    // 0x80333C1C: b           L_80333D0C
    // 0x80333C20: nop

        goto L_80333D0C;
    // 0x80333C20: nop

L_80333C24:
    // 0x80333C24: jal         0x803323D0
    // 0x80333C28: nop

    func_803323D0_unk_bin_24(rdram, ctx);
        goto after_20;
    // 0x80333C28: nop

    after_20:
    // 0x80333C2C: b           L_80333D0C
    // 0x80333C30: nop

        goto L_80333D0C;
    // 0x80333C30: nop

L_80333C34:
    // 0x80333C34: jal         0x803325E0
    // 0x80333C38: nop

    func_803325E0_unk_bin_24(rdram, ctx);
        goto after_21;
    // 0x80333C38: nop

    after_21:
    // 0x80333C3C: b           L_80333D0C
    // 0x80333C40: nop

        goto L_80333D0C;
    // 0x80333C40: nop

L_80333C44:
    // 0x80333C44: jal         0x80332750
    // 0x80333C48: nop

    func_80332750_unk_bin_24(rdram, ctx);
        goto after_22;
    // 0x80333C48: nop

    after_22:
    // 0x80333C4C: b           L_80333D0C
    // 0x80333C50: nop

        goto L_80333D0C;
    // 0x80333C50: nop

L_80333C54:
    // 0x80333C54: jal         0x803328DC
    // 0x80333C58: nop

    func_803328DC_unk_bin_24(rdram, ctx);
        goto after_23;
    // 0x80333C58: nop

    after_23:
    // 0x80333C5C: b           L_80333D0C
    // 0x80333C60: nop

        goto L_80333D0C;
    // 0x80333C60: nop

L_80333C64:
    // 0x80333C64: jal         0x80332A4C
    // 0x80333C68: nop

    func_80332A4C_unk_bin_24(rdram, ctx);
        goto after_24;
    // 0x80333C68: nop

    after_24:
    // 0x80333C6C: b           L_80333D0C
    // 0x80333C70: nop

        goto L_80333D0C;
    // 0x80333C70: nop

L_80333C74:
    // 0x80333C74: jal         0x80332BBC
    // 0x80333C78: nop

    func_80332BBC_unk_bin_24(rdram, ctx);
        goto after_25;
    // 0x80333C78: nop

    after_25:
    // 0x80333C7C: b           L_80333D0C
    // 0x80333C80: nop

        goto L_80333D0C;
    // 0x80333C80: nop

L_80333C84:
    // 0x80333C84: jal         0x80332D00
    // 0x80333C88: nop

    func_80332D00_unk_bin_24(rdram, ctx);
        goto after_26;
    // 0x80333C88: nop

    after_26:
    // 0x80333C8C: b           L_80333D0C
    // 0x80333C90: nop

        goto L_80333D0C;
    // 0x80333C90: nop

L_80333C94:
    // 0x80333C94: jal         0x80332E44
    // 0x80333C98: nop

    func_80332E44_unk_bin_24(rdram, ctx);
        goto after_27;
    // 0x80333C98: nop

    after_27:
    // 0x80333C9C: b           L_80333D0C
    // 0x80333CA0: nop

        goto L_80333D0C;
    // 0x80333CA0: nop

L_80333CA4:
    // 0x80333CA4: jal         0x80332F88
    // 0x80333CA8: nop

    func_80332F88_unk_bin_24(rdram, ctx);
        goto after_28;
    // 0x80333CA8: nop

    after_28:
    // 0x80333CAC: b           L_80333D0C
    // 0x80333CB0: nop

        goto L_80333D0C;
    // 0x80333CB0: nop

L_80333CB4:
    // 0x80333CB4: jal         0x803333F4
    // 0x80333CB8: nop

    func_803333F4_unk_bin_24(rdram, ctx);
        goto after_29;
    // 0x80333CB8: nop

    after_29:
    // 0x80333CBC: b           L_80333D0C
    // 0x80333CC0: nop

        goto L_80333D0C;
    // 0x80333CC0: nop

L_80333CC4:
    // 0x80333CC4: jal         0x80333538
    // 0x80333CC8: nop

    func_80333538_unk_bin_24(rdram, ctx);
        goto after_30;
    // 0x80333CC8: nop

    after_30:
    // 0x80333CCC: b           L_80333D0C
    // 0x80333CD0: nop

        goto L_80333D0C;
    // 0x80333CD0: nop

L_80333CD4:
    // 0x80333CD4: jal         0x8033367C
    // 0x80333CD8: nop

    func_8033367C_unk_bin_24(rdram, ctx);
        goto after_31;
    // 0x80333CD8: nop

    after_31:
    // 0x80333CDC: b           L_80333D0C
    // 0x80333CE0: nop

        goto L_80333D0C;
    // 0x80333CE0: nop

L_80333CE4:
    // 0x80333CE4: jal         0x803337F4
    // 0x80333CE8: nop

    func_803337F4_unk_bin_24(rdram, ctx);
        goto after_32;
    // 0x80333CE8: nop

    after_32:
    // 0x80333CEC: b           L_80333D0C
    // 0x80333CF0: nop

        goto L_80333D0C;
    // 0x80333CF0: nop

L_80333CF4:
    // 0x80333CF4: jal         0x803338F4
    // 0x80333CF8: nop

    func_803338F4_unk_bin_24(rdram, ctx);
        goto after_33;
    // 0x80333CF8: nop

    after_33:
    // 0x80333CFC: b           L_80333D0C
    // 0x80333D00: nop

        goto L_80333D0C;
    // 0x80333D00: nop

L_80333D04:
    // 0x80333D04: b           L_80333D0C
    // 0x80333D08: nop

        goto L_80333D0C;
    // 0x80333D08: nop

L_80333D0C:
    // 0x80333D0C: b           L_80333D14
    // 0x80333D10: nop

        goto L_80333D14;
    // 0x80333D10: nop

L_80333D14:
    // 0x80333D14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333D18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80333D1C: jr          $ra
    // 0x80333D20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80333D20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80332A4C_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332A4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332A50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332A54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332A58: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332A5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332A60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332A64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332A6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332A74: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332A78: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332A7C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332A80: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A84: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80332A88: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332A8C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80332A90: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332A94: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332A98: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332A9C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332AA0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332AA4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80332AA8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80332AAC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332AB0: nop

    // 0x80332AB4: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80332AB8: nop

    // 0x80332ABC: bne         $t6, $zero, L_80332B50
    if (ctx->r14 != 0) {
        // 0x80332AC0: nop
    
            goto L_80332B50;
    }
    // 0x80332AC0: nop

    // 0x80332AC4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332AC8: nop

    // 0x80332ACC: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80332AD0: nop

    // 0x80332AD4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332AD8: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80332ADC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332AE0: nop

    // 0x80332AE4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80332AE8: nop

    // 0x80332AEC: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80332AF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AF4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80332AF8: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x80332AFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B00: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80332B04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332B08: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x80332B0C: jal         0x8001C0EC
    // 0x80332B10: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332B10: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80332B14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B1C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332B20: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332B24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332B28: jal         0x8001ABF4
    // 0x80332B2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332B2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332B30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B34: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332B38: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332B3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B40: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80332B44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332B48: jal         0x8001ABF4
    // 0x80332B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80332B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80332B50:
    // 0x80332B50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B58: jal         0x8002A8B4
    // 0x80332B5C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80332B5C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80332B60: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B64: nop

    // 0x80332B68: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80332B6C: nop

    // 0x80332B70: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x80332B74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B7C: jal         0x8001B4AC
    // 0x80332B80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80332B80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332B84: beq         $v0, $zero, L_80332BA4
    if (ctx->r2 == 0) {
        // 0x80332B88: nop
    
            goto L_80332BA4;
    }
    // 0x80332B88: nop

    // 0x80332B8C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B90: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80332B94: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80332B98: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B9C: nop

    // 0x80332BA0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80332BA4:
    // 0x80332BA4: b           L_80332BAC
    // 0x80332BA8: nop

        goto L_80332BAC;
    // 0x80332BA8: nop

L_80332BAC:
    // 0x80332BAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332BB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332BB4: jr          $ra
    // 0x80332BB8: nop

    return;
    // 0x80332BB8: nop

;}
RECOMP_FUNC void func_80334698_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334698: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033469C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803346A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803346A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803346A8: jal         0x8002B0E4
    // 0x803346AC: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803346AC: nop

    after_0:
    // 0x803346B0: b           L_803346B8
    // 0x803346B4: nop

        goto L_803346B8;
    // 0x803346B4: nop

L_803346B8:
    // 0x803346B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803346BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803346C0: jr          $ra
    // 0x803346C4: nop

    return;
    // 0x803346C4: nop

;}
RECOMP_FUNC void func_80332750_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332750: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332758: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033275C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332760: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332764: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332768: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033276C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332774: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332778: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033277C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332780: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332784: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332788: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033278C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332790: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80332794: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332798: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033279C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803327A0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803327A4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803327A8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803327AC: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x803327B0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803327B4: nop

    // 0x803327B8: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x803327BC: nop

    // 0x803327C0: bne         $t6, $zero, L_80332870
    if (ctx->r14 != 0) {
        // 0x803327C4: nop
    
            goto L_80332870;
    }
    // 0x803327C4: nop

    // 0x803327C8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803327CC: nop

    // 0x803327D0: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x803327D4: nop

    // 0x803327D8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803327DC: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x803327E0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803327E4: nop

    // 0x803327E8: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x803327EC: nop

    // 0x803327F0: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x803327F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803327F8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803327FC: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x80332800: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332804: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80332808: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033280C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x80332810: jal         0x8001C0EC
    // 0x80332814: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332814: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80332818: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033281C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332820: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332824: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033282C: jal         0x8001ABF4
    // 0x80332830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332834: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332838: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033283C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80332840: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332844: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80332848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033284C: jal         0x8001ABF4
    // 0x80332850: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80332850: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80332854: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332858: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033285C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332860: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x80332864: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332868: jal         0x800175F0
    // 0x8033286C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x8033286C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_80332870:
    // 0x80332870: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332874: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332878: jal         0x8002A8B4
    // 0x8033287C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x8033287C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
    // 0x80332880: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332884: nop

    // 0x80332888: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033288C: nop

    // 0x80332890: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x80332894: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332898: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033289C: jal         0x8001B4AC
    // 0x803328A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x803328A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x803328A4: beq         $v0, $zero, L_803328C4
    if (ctx->r2 == 0) {
        // 0x803328A8: nop
    
            goto L_803328C4;
    }
    // 0x803328A8: nop

    // 0x803328AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803328B0: addiu       $t4, $zero, 0x16
    ctx->r12 = ADD32(0, 0X16);
    // 0x803328B4: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x803328B8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803328BC: nop

    // 0x803328C0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803328C4:
    // 0x803328C4: b           L_803328CC
    // 0x803328C8: nop

        goto L_803328CC;
    // 0x803328C8: nop

L_803328CC:
    // 0x803328CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803328D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803328D4: jr          $ra
    // 0x803328D8: nop

    return;
    // 0x803328D8: nop

;}
RECOMP_FUNC void func_80332014_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332014: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033201C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332020: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332024: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332028: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033202C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332030: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332034: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332038: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033203C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332040: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332044: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332048: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033204C: nop

    // 0x80332050: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332054: nop

    // 0x80332058: bne         $t1, $zero, L_803320EC
    if (ctx->r9 != 0) {
        // 0x8033205C: nop
    
            goto L_803320EC;
    }
    // 0x8033205C: nop

    // 0x80332060: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332064: nop

    // 0x80332068: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033206C: nop

    // 0x80332070: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332074: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332078: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033207C: nop

    // 0x80332080: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332084: nop

    // 0x80332088: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033208C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332090: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332094: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80332098: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033209C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803320A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803320A4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x803320A8: jal         0x8001C0EC
    // 0x803320AC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803320AC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x803320B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320B8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803320BC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803320C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803320C4: jal         0x8001ABF4
    // 0x803320C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803320C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803320CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803320D4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803320D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320DC: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803320E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803320E4: jal         0x8001ABF4
    // 0x803320E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803320E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_803320EC:
    // 0x803320EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320F4: jal         0x8001B4AC
    // 0x803320F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803320F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803320FC: beq         $v0, $zero, L_80332274
    if (ctx->r2 == 0) {
        // 0x80332100: nop
    
            goto L_80332274;
    }
    // 0x80332100: nop

    // 0x80332104: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332108: nop

    // 0x8033210C: lh          $t9, 0xBE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBE);
    // 0x80332110: nop

    // 0x80332114: bne         $t9, $zero, L_80332204
    if (ctx->r25 != 0) {
        // 0x80332118: nop
    
            goto L_80332204;
    }
    // 0x80332118: nop

    // 0x8033211C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332120: nop

    // 0x80332124: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80332128: nop

    // 0x8033212C: bne         $t1, $zero, L_8033219C
    if (ctx->r9 != 0) {
        // 0x80332130: nop
    
            goto L_8033219C;
    }
    // 0x80332130: nop

    // 0x80332134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033213C: jal         0x8002A1FC
    // 0x80332140: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x80332140: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_4:
    // 0x80332144: beq         $v0, $zero, L_80332174
    if (ctx->r2 == 0) {
        // 0x80332148: nop
    
            goto L_80332174;
    }
    // 0x80332148: nop

    // 0x8033214C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332150: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    // 0x80332154: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332158: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033215C: nop

    // 0x80332160: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80332164: b           L_8033227C
    // 0x80332168: nop

        goto L_8033227C;
    // 0x80332168: nop

    // 0x8033216C: b           L_80332194
    // 0x80332170: nop

        goto L_80332194;
    // 0x80332170: nop

L_80332174:
    // 0x80332174: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332178: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8033217C: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80332180: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332184: nop

    // 0x80332188: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x8033218C: b           L_8033227C
    // 0x80332190: nop

        goto L_8033227C;
    // 0x80332190: nop

L_80332194:
    // 0x80332194: b           L_803321FC
    // 0x80332198: nop

        goto L_803321FC;
    // 0x80332198: nop

L_8033219C:
    // 0x8033219C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803321A4: jal         0x8002A1FC
    // 0x803321A8: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x803321A8: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_5:
    // 0x803321AC: beq         $v0, $zero, L_803321DC
    if (ctx->r2 == 0) {
        // 0x803321B0: nop
    
            goto L_803321DC;
    }
    // 0x803321B0: nop

    // 0x803321B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803321B8: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x803321BC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803321C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803321C4: nop

    // 0x803321C8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x803321CC: b           L_8033227C
    // 0x803321D0: nop

        goto L_8033227C;
    // 0x803321D0: nop

    // 0x803321D4: b           L_803321FC
    // 0x803321D8: nop

        goto L_803321FC;
    // 0x803321D8: nop

L_803321DC:
    // 0x803321DC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803321E0: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x803321E4: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803321E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803321EC: nop

    // 0x803321F0: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x803321F4: b           L_8033227C
    // 0x803321F8: nop

        goto L_8033227C;
    // 0x803321F8: nop

L_803321FC:
    // 0x803321FC: b           L_80332224
    // 0x80332200: nop

        goto L_80332224;
    // 0x80332200: nop

L_80332204:
    // 0x80332204: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332208: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x8033220C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80332210: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332214: nop

    // 0x80332218: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x8033221C: b           L_8033227C
    // 0x80332220: nop

        goto L_8033227C;
    // 0x80332220: nop

L_80332224:
    // 0x80332224: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80332228: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033222C: jal         0x80333D24
    // 0x80332230: nop

    func_80333D24_unk_bin_24(rdram, ctx);
        goto after_6;
    // 0x80332230: nop

    after_6:
    // 0x80332234: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332238: beq         $v0, $at, L_8033225C
    if (ctx->r2 == ctx->r1) {
        // 0x8033223C: nop
    
            goto L_8033225C;
    }
    // 0x8033223C: nop

    // 0x80332240: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80332244: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80332248: jal         0x80333E64
    // 0x8033224C: nop

    func_80333E64_unk_bin_24(rdram, ctx);
        goto after_7;
    // 0x8033224C: nop

    after_7:
    // 0x80332250: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332254: bne         $v0, $at, L_80332274
    if (ctx->r2 != ctx->r1) {
        // 0x80332258: nop
    
            goto L_80332274;
    }
    // 0x80332258: nop

L_8033225C:
    // 0x8033225C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332260: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x80332264: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80332268: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033226C: nop

    // 0x80332270: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80332274:
    // 0x80332274: b           L_8033227C
    // 0x80332278: nop

        goto L_8033227C;
    // 0x80332278: nop

L_8033227C:
    // 0x8033227C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332280: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332284: jr          $ra
    // 0x80332288: nop

    return;
    // 0x80332288: nop

;}
RECOMP_FUNC void func_803313D4_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803313D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803313D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803313DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803313E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803313E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803313E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803313EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803313F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803313F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803313F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803313FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331400: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331404: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331408: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033140C: nop

    // 0x80331410: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331414: nop

    // 0x80331418: bne         $t1, $zero, L_803314E4
    if (ctx->r9 != 0) {
        // 0x8033141C: nop
    
            goto L_803314E4;
    }
    // 0x8033141C: nop

    // 0x80331420: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331424: nop

    // 0x80331428: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033142C: nop

    // 0x80331430: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331434: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331438: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033143C: nop

    // 0x80331440: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331444: nop

    // 0x80331448: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033144C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331450: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331454: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80331458: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033145C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331464: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80331468: jal         0x8001C0EC
    // 0x8033146C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033146C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80331470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331474: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331478: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033147C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331484: jal         0x8001ABF4
    // 0x80331488: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331488: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033148C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331490: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331494: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331498: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033149C: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803314A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803314A4: jal         0x8001ABF4
    // 0x803314A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803314A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803314AC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803314B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803314B4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803314B8: nop

    // 0x803314BC: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x803314C0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803314C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803314C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803314CC: nop

    // 0x803314D0: swc1        $f6, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f6.u32l;
    // 0x803314D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314DC: jal         0x8001BBDC
    // 0x803314E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x803314E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_803314E4:
    // 0x803314E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314EC: jal         0x80029D8C
    // 0x803314F0: nop

    func_80029D8C(rdram, ctx);
        goto after_4;
    // 0x803314F0: nop

    after_4:
    // 0x803314F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803314F8: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x803314FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331500: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80331504: nop

    // 0x80331508: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8033150C: nop

    // 0x80331510: bc1f        L_80331530
    if (!c1cs) {
        // 0x80331514: nop
    
            goto L_80331530;
    }
    // 0x80331514: nop

    // 0x80331518: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033151C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80331520: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80331524: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331528: nop

    // 0x8033152C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80331530:
    // 0x80331530: b           L_80331538
    // 0x80331534: nop

        goto L_80331538;
    // 0x80331534: nop

L_80331538:
    // 0x80331538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033153C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331540: jr          $ra
    // 0x80331544: nop

    return;
    // 0x80331544: nop

;}
RECOMP_FUNC void func_80331298_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331298: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033129C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803312A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803312A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803312A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803312AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803312B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803312B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803312C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803312C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803312C8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803312CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803312D0: nop

    // 0x803312D4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803312D8: nop

    // 0x803312DC: bne         $t1, $zero, L_8033138C
    if (ctx->r9 != 0) {
        // 0x803312E0: nop
    
            goto L_8033138C;
    }
    // 0x803312E0: nop

    // 0x803312E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803312E8: nop

    // 0x803312EC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803312F0: nop

    // 0x803312F4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803312F8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803312FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331300: nop

    // 0x80331304: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331308: nop

    // 0x8033130C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331310: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331314: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331318: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033131C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331320: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331328: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8033132C: jal         0x8001C0EC
    // 0x80331330: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331330: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80331334: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331338: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033133C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331340: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331348: jal         0x8001ABF4
    // 0x8033134C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033134C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331354: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331358: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033135C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331360: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80331364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331368: jal         0x8001ABF4
    // 0x8033136C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033136C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80331370: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331374: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033137C: addiu       $a2, $zero, 0x7E
    ctx->r6 = ADD32(0, 0X7E);
    // 0x80331380: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331384: jal         0x800175F0
    // 0x80331388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x80331388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_8033138C:
    // 0x8033138C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331390: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331394: jal         0x8001B4AC
    // 0x80331398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80331398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033139C: beq         $v0, $zero, L_803313BC
    if (ctx->r2 == 0) {
        // 0x803313A0: nop
    
            goto L_803313BC;
    }
    // 0x803313A0: nop

    // 0x803313A4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803313A8: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x803313AC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803313B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803313B4: nop

    // 0x803313B8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803313BC:
    // 0x803313BC: b           L_803313C4
    // 0x803313C0: nop

        goto L_803313C4;
    // 0x803313C0: nop

L_803313C4:
    // 0x803313C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803313C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803313CC: jr          $ra
    // 0x803313D0: nop

    return;
    // 0x803313D0: nop

;}
RECOMP_FUNC void func_803325E0_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803325E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803325E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803325E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803325EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803325F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803325F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803325F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803325FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332600: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332604: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332608: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033260C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332610: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332614: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332618: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033261C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332620: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80332624: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332628: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033262C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332630: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332634: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332638: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033263C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80332640: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332644: nop

    // 0x80332648: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033264C: nop

    // 0x80332650: bne         $t6, $zero, L_803326E4
    if (ctx->r14 != 0) {
        // 0x80332654: nop
    
            goto L_803326E4;
    }
    // 0x80332654: nop

    // 0x80332658: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033265C: nop

    // 0x80332660: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80332664: nop

    // 0x80332668: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033266C: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80332670: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332674: nop

    // 0x80332678: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033267C: nop

    // 0x80332680: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80332684: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332688: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033268C: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x80332690: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332694: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80332698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033269C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x803326A0: jal         0x8001C0EC
    // 0x803326A4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803326A4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x803326A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803326B4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803326B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803326BC: jal         0x8001ABF4
    // 0x803326C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803326C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803326C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326C8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803326CC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803326D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326D4: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803326D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803326DC: jal         0x8001ABF4
    // 0x803326E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803326E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_803326E4:
    // 0x803326E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326EC: jal         0x8002A8B4
    // 0x803326F0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x803326F0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x803326F4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803326F8: nop

    // 0x803326FC: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80332700: nop

    // 0x80332704: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x80332708: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033270C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332710: jal         0x8001B4AC
    // 0x80332714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80332714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332718: beq         $v0, $zero, L_80332738
    if (ctx->r2 == 0) {
        // 0x8033271C: nop
    
            goto L_80332738;
    }
    // 0x8033271C: nop

    // 0x80332720: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332724: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x80332728: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8033272C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332730: nop

    // 0x80332734: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80332738:
    // 0x80332738: b           L_80332740
    // 0x8033273C: nop

        goto L_80332740;
    // 0x8033273C: nop

L_80332740:
    // 0x80332740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332744: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332748: jr          $ra
    // 0x8033274C: nop

    return;
    // 0x8033274C: nop

;}
RECOMP_FUNC void func_803318EC_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803318EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803318F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803318F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803318F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803318FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331900: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331904: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331908: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033190C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331910: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331914: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331918: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033191C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331920: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331924: nop

    // 0x80331928: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033192C: nop

    // 0x80331930: bne         $t1, $zero, L_803319C4
    if (ctx->r9 != 0) {
        // 0x80331934: nop
    
            goto L_803319C4;
    }
    // 0x80331934: nop

    // 0x80331938: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033193C: nop

    // 0x80331940: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331944: nop

    // 0x80331948: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033194C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331950: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331954: nop

    // 0x80331958: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033195C: nop

    // 0x80331960: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331964: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331968: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033196C: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80331970: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331974: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331978: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033197C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80331980: jal         0x8001C0EC
    // 0x80331984: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331984: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80331988: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033198C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331990: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331994: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033199C: jal         0x8001ABF4
    // 0x803319A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803319A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803319A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319A8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803319AC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803319B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319B4: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803319B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803319BC: jal         0x8001ABF4
    // 0x803319C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803319C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_803319C4:
    // 0x803319C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319CC: jal         0x8001B4AC
    // 0x803319D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803319D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803319D4: beq         $v0, $zero, L_803319F4
    if (ctx->r2 == 0) {
        // 0x803319D8: nop
    
            goto L_803319F4;
    }
    // 0x803319D8: nop

    // 0x803319DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803319E0: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x803319E4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803319E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803319EC: nop

    // 0x803319F0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803319F4:
    // 0x803319F4: b           L_803319FC
    // 0x803319F8: nop

        goto L_803319FC;
    // 0x803319F8: nop

L_803319FC:
    // 0x803319FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331A04: jr          $ra
    // 0x80331A08: nop

    return;
    // 0x80331A08: nop

;}
RECOMP_FUNC void func_803355D4_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803355D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803355D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803355DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803355E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803355E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803355E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803355EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803355F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803355F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803355F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803355FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335600: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335604: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335608: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033560C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335610: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335614: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80335618: nop

    // 0x8033561C: beq         $s0, $at, L_80335650
    if (ctx->r16 == ctx->r1) {
        // 0x80335620: nop
    
            goto L_80335650;
    }
    // 0x80335620: nop

    // 0x80335624: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335628: beq         $s0, $at, L_80335660
    if (ctx->r16 == ctx->r1) {
        // 0x8033562C: nop
    
            goto L_80335660;
    }
    // 0x8033562C: nop

    // 0x80335630: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80335634: beq         $s0, $at, L_80335670
    if (ctx->r16 == ctx->r1) {
        // 0x80335638: nop
    
            goto L_80335670;
    }
    // 0x80335638: nop

    // 0x8033563C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80335640: beq         $s0, $at, L_80335680
    if (ctx->r16 == ctx->r1) {
        // 0x80335644: nop
    
            goto L_80335680;
    }
    // 0x80335644: nop

    // 0x80335648: b           L_80335690
    // 0x8033564C: nop

        goto L_80335690;
    // 0x8033564C: nop

L_80335650:
    // 0x80335650: jal         0x80334EDC
    // 0x80335654: nop

    func_80334EDC_unk_bin_24(rdram, ctx);
        goto after_0;
    // 0x80335654: nop

    after_0:
    // 0x80335658: b           L_80335698
    // 0x8033565C: nop

        goto L_80335698;
    // 0x8033565C: nop

L_80335660:
    // 0x80335660: jal         0x8033509C
    // 0x80335664: nop

    func_8033509C_unk_bin_24(rdram, ctx);
        goto after_1;
    // 0x80335664: nop

    after_1:
    // 0x80335668: b           L_80335698
    // 0x8033566C: nop

        goto L_80335698;
    // 0x8033566C: nop

L_80335670:
    // 0x80335670: jal         0x803351E8
    // 0x80335674: nop

    func_803351E8_unk_bin_24(rdram, ctx);
        goto after_2;
    // 0x80335674: nop

    after_2:
    // 0x80335678: b           L_80335698
    // 0x8033567C: nop

        goto L_80335698;
    // 0x8033567C: nop

L_80335680:
    // 0x80335680: jal         0x80335424
    // 0x80335684: nop

    func_80335424_unk_bin_24(rdram, ctx);
        goto after_3;
    // 0x80335684: nop

    after_3:
    // 0x80335688: b           L_80335698
    // 0x8033568C: nop

        goto L_80335698;
    // 0x8033568C: nop

L_80335690:
    // 0x80335690: b           L_80335698
    // 0x80335694: nop

        goto L_80335698;
    // 0x80335694: nop

L_80335698:
    // 0x80335698: b           L_803356A0
    // 0x8033569C: nop

        goto L_803356A0;
    // 0x8033569C: nop

L_803356A0:
    // 0x803356A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803356A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803356A8: jr          $ra
    // 0x803356AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803356AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803323D0_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803323D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803323D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803323D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803323DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803323E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803323E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803323E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803323EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803323F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803323F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803323F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803323FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332400: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332404: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332408: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033240C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332410: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80332414: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332418: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033241C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332420: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332424: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332428: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033242C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80332430: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332434: nop

    // 0x80332438: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033243C: nop

    // 0x80332440: bne         $t6, $zero, L_803324D4
    if (ctx->r14 != 0) {
        // 0x80332444: nop
    
            goto L_803324D4;
    }
    // 0x80332444: nop

    // 0x80332448: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033244C: nop

    // 0x80332450: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80332454: nop

    // 0x80332458: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033245C: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80332460: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332464: nop

    // 0x80332468: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033246C: nop

    // 0x80332470: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80332474: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332478: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033247C: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x80332480: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332484: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80332488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033248C: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80332490: jal         0x8001C0EC
    // 0x80332494: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332494: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80332498: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033249C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803324A0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803324A4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803324A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803324AC: jal         0x8001ABF4
    // 0x803324B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803324B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803324B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803324B8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803324BC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803324C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803324C4: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803324C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803324CC: jal         0x8001ABF4
    // 0x803324D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803324D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_803324D4:
    // 0x803324D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803324D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803324DC: jal         0x8001B62C
    // 0x803324E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x803324E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803324E4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803324E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803324EC: nop

    // 0x803324F0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x803324F4: nop

    // 0x803324F8: bc1f        L_80332574
    if (!c1cs) {
        // 0x803324FC: nop
    
            goto L_80332574;
    }
    // 0x803324FC: nop

    // 0x80332500: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332504: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332508: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8033250C: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80332510: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x80332514: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332518: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8033251C: addiu       $a1, $a1, 0x5780
    ctx->r5 = ADD32(ctx->r5, 0X5780);
    // 0x80332520: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332524: jal         0x80027464
    // 0x80332528: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80332528: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x8033252C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80332530: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80332534: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x80332538: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033253C: jal         0x80026F10
    // 0x80332540: nop

    func_80026F10(rdram, ctx);
        goto after_5;
    // 0x80332540: nop

    after_5:
    // 0x80332544: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332548: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033254C: nop

    // 0x80332550: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x80332554: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80332558: addiu       $t6, $t6, -0x5448
    ctx->r14 = ADD32(ctx->r14, -0X5448);
    // 0x8033255C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80332560: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80332564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033256C: jal         0x8001C0EC
    // 0x80332570: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x80332570: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_6:
L_80332574:
    // 0x80332574: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332578: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033257C: jal         0x8002A8B4
    // 0x80332580: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_7;
    // 0x80332580: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_7:
    // 0x80332584: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332588: nop

    // 0x8033258C: lwc1        $f10, 0x3C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80332590: nop

    // 0x80332594: swc1        $f10, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f10.u32l;
    // 0x80332598: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033259C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803325A0: jal         0x8001B4AC
    // 0x803325A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x803325A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x803325A8: beq         $v0, $zero, L_803325C8
    if (ctx->r2 == 0) {
        // 0x803325AC: nop
    
            goto L_803325C8;
    }
    // 0x803325AC: nop

    // 0x803325B0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803325B4: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x803325B8: sh          $t9, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r25;
    // 0x803325BC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803325C0: nop

    // 0x803325C4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803325C8:
    // 0x803325C8: b           L_803325D0
    // 0x803325CC: nop

        goto L_803325D0;
    // 0x803325CC: nop

L_803325D0:
    // 0x803325D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803325D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803325D8: jr          $ra
    // 0x803325DC: nop

    return;
    // 0x803325DC: nop

;}
RECOMP_FUNC void func_80334298_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334298: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033429C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803342A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803342A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803342A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803342AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803342B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803342B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803342B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803342BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803342C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803342C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803342C8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803342CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803342D0: nop

    // 0x803342D4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803342D8: nop

    // 0x803342DC: bne         $t1, $zero, L_80334334
    if (ctx->r9 != 0) {
        // 0x803342E0: nop
    
            goto L_80334334;
    }
    // 0x803342E0: nop

    // 0x803342E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803342E8: nop

    // 0x803342EC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803342F0: nop

    // 0x803342F4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803342F8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803342FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334300: nop

    // 0x80334304: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334308: nop

    // 0x8033430C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334310: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334314: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334318: addiu       $t7, $t7, -0x5448
    ctx->r15 = ADD32(ctx->r15, -0X5448);
    // 0x8033431C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334320: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334328: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8033432C: jal         0x8001C0EC
    // 0x80334330: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334330: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_0:
L_80334334:
    // 0x80334334: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334338: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033433C: jal         0x8002A8B4
    // 0x80334340: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80334340: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80334344: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334348: nop

    // 0x8033434C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80334350: nop

    // 0x80334354: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80334358: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033435C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334360: jal         0x8001B4AC
    // 0x80334364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80334364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334368: beq         $v0, $zero, L_80334388
    if (ctx->r2 == 0) {
        // 0x8033436C: nop
    
            goto L_80334388;
    }
    // 0x8033436C: nop

    // 0x80334370: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334374: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80334378: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033437C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334380: nop

    // 0x80334384: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80334388:
    // 0x80334388: b           L_80334390
    // 0x8033438C: nop

        goto L_80334390;
    // 0x8033438C: nop

L_80334390:
    // 0x80334390: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334394: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334398: jr          $ra
    // 0x8033439C: nop

    return;
    // 0x8033439C: nop

;}
RECOMP_FUNC void func_803333F4_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803333F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803333F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803333FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333400: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333404: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333408: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033340C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333410: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333414: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333418: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033341C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333420: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333424: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333428: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033342C: nop

    // 0x80333430: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333434: nop

    // 0x80333438: bne         $t1, $zero, L_803334CC
    if (ctx->r9 != 0) {
        // 0x8033343C: nop
    
            goto L_803334CC;
    }
    // 0x8033343C: nop

    // 0x80333440: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333444: nop

    // 0x80333448: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033344C: nop

    // 0x80333450: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333454: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333458: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033345C: nop

    // 0x80333460: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333464: nop

    // 0x80333468: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033346C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333470: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333474: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80333478: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033347C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333484: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80333488: jal         0x8001C0EC
    // 0x8033348C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033348C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80333490: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333498: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033349C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803334A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803334A4: jal         0x8001ABF4
    // 0x803334A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803334A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803334AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803334B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803334B4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803334B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803334BC: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803334C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803334C4: jal         0x8001ABF4
    // 0x803334C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803334C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_803334CC:
    // 0x803334CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803334D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803334D4: jal         0x8002A8B4
    // 0x803334D8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x803334D8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x803334DC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803334E0: nop

    // 0x803334E4: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803334E8: nop

    // 0x803334EC: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803334F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803334F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803334F8: jal         0x8001B4AC
    // 0x803334FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803334FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333500: beq         $v0, $zero, L_80333520
    if (ctx->r2 == 0) {
        // 0x80333504: nop
    
            goto L_80333520;
    }
    // 0x80333504: nop

    // 0x80333508: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033350C: addiu       $t9, $zero, 0x1D
    ctx->r25 = ADD32(0, 0X1D);
    // 0x80333510: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80333514: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333518: nop

    // 0x8033351C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80333520:
    // 0x80333520: b           L_80333528
    // 0x80333524: nop

        goto L_80333528;
    // 0x80333524: nop

L_80333528:
    // 0x80333528: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033352C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333530: jr          $ra
    // 0x80333534: nop

    return;
    // 0x80333534: nop

;}
RECOMP_FUNC void func_803300E0_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803300E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803300E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803300E8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803300EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803300F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803300F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803300F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803300FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330100: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330104: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330108: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033010C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330110: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330114: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330118: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033011C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330120: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80330124: nop

    // 0x80330128: bne         $t0, $zero, L_80330214
    if (ctx->r8 != 0) {
        // 0x8033012C: nop
    
            goto L_80330214;
    }
    // 0x8033012C: nop

    // 0x80330130: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330134: nop

    // 0x80330138: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x8033013C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330140: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x80330144: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80330148: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033014C: nop

    // 0x80330150: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80330154: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330158: nop

    // 0x8033015C: lh          $t6, 0xB6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB6);
    // 0x80330160: nop

    // 0x80330164: bne         $t6, $zero, L_803301AC
    if (ctx->r14 != 0) {
        // 0x80330168: nop
    
            goto L_803301AC;
    }
    // 0x80330168: nop

    // 0x8033016C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80330170: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80330174: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80330178: bne         $t7, $at, L_80330194
    if (ctx->r15 != ctx->r1) {
        // 0x8033017C: nop
    
            goto L_80330194;
    }
    // 0x8033017C: nop

    // 0x80330180: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80330184: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80330188: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033018C: b           L_803301A4
    // 0x80330190: sh          $t8, 0x1466($t9)
    MEM_H(0X1466, ctx->r25) = ctx->r24;
        goto L_803301A4;
    // 0x80330190: sh          $t8, 0x1466($t9)
    MEM_H(0X1466, ctx->r25) = ctx->r24;
L_80330194:
    // 0x80330194: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80330198: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033019C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803301A0: sh          $t0, 0x1316($t1)
    MEM_H(0X1316, ctx->r9) = ctx->r8;
L_803301A4:
    // 0x803301A4: b           L_803301BC
    // 0x803301A8: nop

        goto L_803301BC;
    // 0x803301A8: nop

L_803301AC:
    // 0x803301AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803301B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803301B4: jal         0x80069E60
    // 0x803301B8: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x803301B8: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
L_803301BC:
    // 0x803301BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803301C0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803301C4: nop

    // 0x803301C8: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
    // 0x803301CC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803301D0: nop

    // 0x803301D4: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x803301D8: nop

    // 0x803301DC: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x803301E0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803301E4: nop

    // 0x803301E8: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
    // 0x803301EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803301F0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803301F4: nop

    // 0x803301F8: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x803301FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330200: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330204: jal         0x8001BBDC
    // 0x80330208: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80330208: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8033020C: b           L_80330234
    // 0x80330210: nop

        goto L_80330234;
    // 0x80330210: nop

L_80330214:
    // 0x80330214: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330218: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8033021C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330220: bne         $t6, $at, L_80330234
    if (ctx->r14 != ctx->r1) {
        // 0x80330224: nop
    
            goto L_80330234;
    }
    // 0x80330224: nop

    // 0x80330228: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033022C: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x80330230: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
L_80330234:
    // 0x80330234: b           L_8033023C
    // 0x80330238: nop

        goto L_8033023C;
    // 0x80330238: nop

L_8033023C:
    // 0x8033023C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330240: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80330244: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80330248: jr          $ra
    // 0x8033024C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033024C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
