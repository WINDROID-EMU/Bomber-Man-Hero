#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80332E00_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332E00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332E04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332E08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332E0C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332E10: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332E14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332E18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332E20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332E28: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332E2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332E30: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332E34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332E38: nop

    // 0x80332E3C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332E40: nop

    // 0x80332E44: bne         $t1, $zero, L_80332E9C
    if (ctx->r9 != 0) {
        // 0x80332E48: nop
    
            goto L_80332E9C;
    }
    // 0x80332E48: nop

    // 0x80332E4C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332E50: nop

    // 0x80332E54: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332E58: nop

    // 0x80332E5C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332E60: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332E64: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332E68: nop

    // 0x80332E6C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332E70: nop

    // 0x80332E74: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332E78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E7C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332E80: addiu       $t7, $t7, -0x432C
    ctx->r15 = ADD32(ctx->r15, -0X432C);
    // 0x80332E84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332E8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332E90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332E94: jal         0x8001C0EC
    // 0x80332E98: addiu       $a3, $zero, 0x156
    ctx->r7 = ADD32(0, 0X156);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332E98: addiu       $a3, $zero, 0x156
    ctx->r7 = ADD32(0, 0X156);
    after_0:
L_80332E9C:
    // 0x80332E9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EA4: jal         0x8001B4AC
    // 0x80332EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80332EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332EAC: beq         $v0, $zero, L_80332EC4
    if (ctx->r2 == 0) {
        // 0x80332EB0: nop
    
            goto L_80332EC4;
    }
    // 0x80332EB0: nop

    // 0x80332EB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EBC: jal         0x8002B114
    // 0x80332EC0: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80332EC0: nop

    after_2:
L_80332EC4:
    // 0x80332EC4: b           L_80332ECC
    // 0x80332EC8: nop

        goto L_80332ECC;
    // 0x80332EC8: nop

L_80332ECC:
    // 0x80332ECC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332ED0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332ED4: jr          $ra
    // 0x80332ED8: nop

    return;
    // 0x80332ED8: nop

;}
RECOMP_FUNC void func_8033309C_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033309C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803330A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803330A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803330A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803330AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803330B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803330B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803330B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803330BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803330C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803330C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803330C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803330CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803330D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803330D4: nop

    // 0x803330D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803330DC: nop

    // 0x803330E0: bne         $t1, $zero, L_80333138
    if (ctx->r9 != 0) {
        // 0x803330E4: nop
    
            goto L_80333138;
    }
    // 0x803330E4: nop

    // 0x803330E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803330EC: nop

    // 0x803330F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803330F4: nop

    // 0x803330F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803330FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333100: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333104: nop

    // 0x80333108: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033310C: nop

    // 0x80333110: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333114: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333118: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033311C: addiu       $t7, $t7, -0x4320
    ctx->r15 = ADD32(ctx->r15, -0X4320);
    // 0x80333120: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333124: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033312C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333130: jal         0x8001C0EC
    // 0x80333134: addiu       $a3, $zero, 0x1A2
    ctx->r7 = ADD32(0, 0X1A2);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333134: addiu       $a3, $zero, 0x1A2
    ctx->r7 = ADD32(0, 0X1A2);
    after_0:
L_80333138:
    // 0x80333138: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033313C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333140: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80333144: nop

    // 0x80333148: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033314C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333150: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333154: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333158: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033315C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333160: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333164: nop

    // 0x80333168: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033316C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333170: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333174: jal         0x8001B4AC
    // 0x80333178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80333178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033317C: beq         $v0, $zero, L_80333194
    if (ctx->r2 == 0) {
        // 0x80333180: nop
    
            goto L_80333194;
    }
    // 0x80333180: nop

    // 0x80333184: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033318C: jal         0x8002B114
    // 0x80333190: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80333190: nop

    after_2:
L_80333194:
    // 0x80333194: b           L_8033319C
    // 0x80333198: nop

        goto L_8033319C;
    // 0x80333198: nop

L_8033319C:
    // 0x8033319C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803331A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803331A4: jr          $ra
    // 0x803331A8: nop

    return;
    // 0x803331A8: nop

;}
RECOMP_FUNC void func_8033124C_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033124C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331250: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
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
    // 0x8033127C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331280: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331284: nop

    // 0x80331288: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033128C: nop

    // 0x80331290: bne         $t1, $zero, L_803312E8
    if (ctx->r9 != 0) {
        // 0x80331294: nop
    
            goto L_803312E8;
    }
    // 0x80331294: nop

    // 0x80331298: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033129C: nop

    // 0x803312A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803312A4: nop

    // 0x803312A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803312AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803312B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803312B4: nop

    // 0x803312B8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803312BC: nop

    // 0x803312C0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803312C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312C8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803312CC: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803312D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312D4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803312D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803312DC: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x803312E0: jal         0x8001C0EC
    // 0x803312E4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803312E4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_803312E8:
    // 0x803312E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312F0: jal         0x8001B4AC
    // 0x803312F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803312F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803312F8: beq         $v0, $zero, L_80331318
    if (ctx->r2 == 0) {
        // 0x803312FC: nop
    
            goto L_80331318;
    }
    // 0x803312FC: nop

    // 0x80331300: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331304: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x80331308: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033130C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331310: nop

    // 0x80331314: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331318:
    // 0x80331318: b           L_80331320
    // 0x8033131C: nop

        goto L_80331320;
    // 0x8033131C: nop

L_80331320:
    // 0x80331320: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331324: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331328: jr          $ra
    // 0x8033132C: nop

    return;
    // 0x8033132C: nop

;}
RECOMP_FUNC void func_80332378_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332378: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033237C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332380: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80332384: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332388: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033238C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332390: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332394: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332398: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033239C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803323A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803323A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803323A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803323AC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803323B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803323B4: nop

    // 0x803323B8: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x803323BC: nop

    // 0x803323C0: bne         $t1, $zero, L_803323E0
    if (ctx->r9 != 0) {
        // 0x803323C4: nop
    
            goto L_803323E0;
    }
    // 0x803323C4: nop

    // 0x803323C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323D0: jal         0x8001BB34
    // 0x803323D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803323D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803323D8: b           L_80332408
    // 0x803323DC: nop

        goto L_80332408;
    // 0x803323DC: nop

L_803323E0:
    // 0x803323E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803323E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323E8: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x803323EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323F0: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x803323F4: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x803323F8: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803323FC: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80332400: jal         0x8001BB34
    // 0x80332404: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80332404: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_80332408:
    // 0x80332408: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033240C: nop

    // 0x80332410: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332414: nop

    // 0x80332418: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8033241C: sltiu       $at, $t7, 0x15
    ctx->r1 = ctx->r15 < 0X15 ? 1 : 0;
    // 0x80332420: beq         $at, $zero, L_80332594
    if (ctx->r1 == 0) {
        // 0x80332424: nop
    
            goto L_80332594;
    }
    // 0x80332424: nop

    // 0x80332428: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033242C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332430: addu        $at, $at, $t7
    gpr jr_addend_8033243C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332434: lw          $t7, 0x3240($at)
    ctx->r15 = ADD32(ctx->r1, 0X3240);
    // 0x80332438: nop

    // 0x8033243C: jr          $t7
    // 0x80332440: nop

    switch (jr_addend_8033243C >> 2) {
        case 0: goto L_80332444; break;
        case 1: goto L_80332454; break;
        case 2: goto L_80332464; break;
        case 3: goto L_80332474; break;
        case 4: goto L_80332484; break;
        case 5: goto L_80332494; break;
        case 6: goto L_803324A4; break;
        case 7: goto L_803324B4; break;
        case 8: goto L_803324C4; break;
        case 9: goto L_803324D4; break;
        case 10: goto L_803324E4; break;
        case 11: goto L_803324F4; break;
        case 12: goto L_80332504; break;
        case 13: goto L_80332514; break;
        case 14: goto L_80332524; break;
        case 15: goto L_80332534; break;
        case 16: goto L_80332544; break;
        case 17: goto L_80332554; break;
        case 18: goto L_80332564; break;
        case 19: goto L_80332574; break;
        case 20: goto L_80332584; break;
        default: switch_error(__func__, 0x8033243C, 0x80333240);
    }
    // 0x80332440: nop

L_80332444:
    // 0x80332444: jal         0x8033020C
    // 0x80332448: nop

    func_8033020C_unk_bin_20(rdram, ctx);
        goto after_2;
    // 0x80332448: nop

    after_2:
    // 0x8033244C: b           L_8033259C
    // 0x80332450: nop

        goto L_8033259C;
    // 0x80332450: nop

L_80332454:
    // 0x80332454: jal         0x80330394
    // 0x80332458: nop

    func_80330394_unk_bin_20(rdram, ctx);
        goto after_3;
    // 0x80332458: nop

    after_3:
    // 0x8033245C: b           L_8033259C
    // 0x80332460: nop

        goto L_8033259C;
    // 0x80332460: nop

L_80332464:
    // 0x80332464: jal         0x80330478
    // 0x80332468: nop

    func_80330478_unk_bin_20(rdram, ctx);
        goto after_4;
    // 0x80332468: nop

    after_4:
    // 0x8033246C: b           L_8033259C
    // 0x80332470: nop

        goto L_8033259C;
    // 0x80332470: nop

L_80332474:
    // 0x80332474: jal         0x8033055C
    // 0x80332478: nop

    func_8033055C_unk_bin_20(rdram, ctx);
        goto after_5;
    // 0x80332478: nop

    after_5:
    // 0x8033247C: b           L_8033259C
    // 0x80332480: nop

        goto L_8033259C;
    // 0x80332480: nop

L_80332484:
    // 0x80332484: jal         0x80330764
    // 0x80332488: nop

    func_80330764_unk_bin_20(rdram, ctx);
        goto after_6;
    // 0x80332488: nop

    after_6:
    // 0x8033248C: b           L_8033259C
    // 0x80332490: nop

        goto L_8033259C;
    // 0x80332490: nop

L_80332494:
    // 0x80332494: jal         0x803308F0
    // 0x80332498: nop

    func_803308F0_unk_bin_20(rdram, ctx);
        goto after_7;
    // 0x80332498: nop

    after_7:
    // 0x8033249C: b           L_8033259C
    // 0x803324A0: nop

        goto L_8033259C;
    // 0x803324A0: nop

L_803324A4:
    // 0x803324A4: jal         0x803309F8
    // 0x803324A8: nop

    func_803309F8_unk_bin_20(rdram, ctx);
        goto after_8;
    // 0x803324A8: nop

    after_8:
    // 0x803324AC: b           L_8033259C
    // 0x803324B0: nop

        goto L_8033259C;
    // 0x803324B0: nop

L_803324B4:
    // 0x803324B4: jal         0x80330B00
    // 0x803324B8: nop

    func_80330B00_unk_bin_20(rdram, ctx);
        goto after_9;
    // 0x803324B8: nop

    after_9:
    // 0x803324BC: b           L_8033259C
    // 0x803324C0: nop

        goto L_8033259C;
    // 0x803324C0: nop

L_803324C4:
    // 0x803324C4: jal         0x80330C08
    // 0x803324C8: nop

    func_80330C08_unk_bin_20(rdram, ctx);
        goto after_10;
    // 0x803324C8: nop

    after_10:
    // 0x803324CC: b           L_8033259C
    // 0x803324D0: nop

        goto L_8033259C;
    // 0x803324D0: nop

L_803324D4:
    // 0x803324D4: jal         0x80330D10
    // 0x803324D8: nop

    func_80330D10_unk_bin_20(rdram, ctx);
        goto after_11;
    // 0x803324D8: nop

    after_11:
    // 0x803324DC: b           L_8033259C
    // 0x803324E0: nop

        goto L_8033259C;
    // 0x803324E0: nop

L_803324E4:
    // 0x803324E4: jal         0x8033124C
    // 0x803324E8: nop

    func_8033124C_unk_bin_20(rdram, ctx);
        goto after_12;
    // 0x803324E8: nop

    after_12:
    // 0x803324EC: b           L_8033259C
    // 0x803324F0: nop

        goto L_8033259C;
    // 0x803324F0: nop

L_803324F4:
    // 0x803324F4: jal         0x80331330
    // 0x803324F8: nop

    func_80331330_unk_bin_20(rdram, ctx);
        goto after_13;
    // 0x803324F8: nop

    after_13:
    // 0x803324FC: b           L_8033259C
    // 0x80332500: nop

        goto L_8033259C;
    // 0x80332500: nop

L_80332504:
    // 0x80332504: jal         0x80331434
    // 0x80332508: nop

    func_80331434_unk_bin_20(rdram, ctx);
        goto after_14;
    // 0x80332508: nop

    after_14:
    // 0x8033250C: b           L_8033259C
    // 0x80332510: nop

        goto L_8033259C;
    // 0x80332510: nop

L_80332514:
    // 0x80332514: jal         0x80331518
    // 0x80332518: nop

    func_80331518_unk_bin_20(rdram, ctx);
        goto after_15;
    // 0x80332518: nop

    after_15:
    // 0x8033251C: b           L_8033259C
    // 0x80332520: nop

        goto L_8033259C;
    // 0x80332520: nop

L_80332524:
    // 0x80332524: jal         0x803317C4
    // 0x80332528: nop

    func_803317C4_unk_bin_20(rdram, ctx);
        goto after_16;
    // 0x80332528: nop

    after_16:
    // 0x8033252C: b           L_8033259C
    // 0x80332530: nop

        goto L_8033259C;
    // 0x80332530: nop

L_80332534:
    // 0x80332534: jal         0x80331A40
    // 0x80332538: nop

    func_80331A40_unk_bin_20(rdram, ctx);
        goto after_17;
    // 0x80332538: nop

    after_17:
    // 0x8033253C: b           L_8033259C
    // 0x80332540: nop

        goto L_8033259C;
    // 0x80332540: nop

L_80332544:
    // 0x80332544: jal         0x80331C44
    // 0x80332548: nop

    func_80331C44_unk_bin_20(rdram, ctx);
        goto after_18;
    // 0x80332548: nop

    after_18:
    // 0x8033254C: b           L_8033259C
    // 0x80332550: nop

        goto L_8033259C;
    // 0x80332550: nop

L_80332554:
    // 0x80332554: jal         0x80331D28
    // 0x80332558: nop

    func_80331D28_unk_bin_20(rdram, ctx);
        goto after_19;
    // 0x80332558: nop

    after_19:
    // 0x8033255C: b           L_8033259C
    // 0x80332560: nop

        goto L_8033259C;
    // 0x80332560: nop

L_80332564:
    // 0x80332564: jal         0x80331E0C
    // 0x80332568: nop

    func_80331E0C_unk_bin_20(rdram, ctx);
        goto after_20;
    // 0x80332568: nop

    after_20:
    // 0x8033256C: b           L_8033259C
    // 0x80332570: nop

        goto L_8033259C;
    // 0x80332570: nop

L_80332574:
    // 0x80332574: jal         0x80331EF0
    // 0x80332578: nop

    func_80331EF0_unk_bin_20(rdram, ctx);
        goto after_21;
    // 0x80332578: nop

    after_21:
    // 0x8033257C: b           L_8033259C
    // 0x80332580: nop

        goto L_8033259C;
    // 0x80332580: nop

L_80332584:
    // 0x80332584: jal         0x803321E4
    // 0x80332588: nop

    func_803321E4_unk_bin_20(rdram, ctx);
        goto after_22;
    // 0x80332588: nop

    after_22:
    // 0x8033258C: b           L_8033259C
    // 0x80332590: nop

        goto L_8033259C;
    // 0x80332590: nop

L_80332594:
    // 0x80332594: b           L_8033259C
    // 0x80332598: nop

        goto L_8033259C;
    // 0x80332598: nop

L_8033259C:
    // 0x8033259C: b           L_803325A4
    // 0x803325A0: nop

        goto L_803325A4;
    // 0x803325A0: nop

L_803325A4:
    // 0x803325A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803325A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803325AC: jr          $ra
    // 0x803325B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803325B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80332744_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332744: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332748: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033274C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332750: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332754: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332758: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033275C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332760: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332764: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332768: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033276C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332770: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332774: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332778: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033277C: nop

    // 0x80332780: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332784: nop

    // 0x80332788: bne         $t1, $zero, L_803327EC
    if (ctx->r9 != 0) {
        // 0x8033278C: nop
    
            goto L_803327EC;
    }
    // 0x8033278C: nop

    // 0x80332790: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332794: nop

    // 0x80332798: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033279C: nop

    // 0x803327A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803327A4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803327A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803327AC: nop

    // 0x803327B0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803327B4: nop

    // 0x803327B8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803327BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803327C0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803327C4: addiu       $t7, $t7, -0x5E88
    ctx->r15 = ADD32(ctx->r15, -0X5E88);
    // 0x803327C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803327CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803327D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803327D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803327D8: jal         0x8001C0EC
    // 0x803327DC: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803327DC: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_0:
    // 0x803327E0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803327E4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x803327E8: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_803327EC:
    // 0x803327EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803327F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803327F4: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803327F8: nop

    // 0x803327FC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332800: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332804: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332808: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033280C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332810: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332814: lwc1        $f4, 0x4168($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80332818: nop

    // 0x8033281C: swc1        $f4, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f4.u32l;
    // 0x80332820: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332824: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332828: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x8033282C: nop

    // 0x80332830: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332834: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332838: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033283C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332840: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332844: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332848: lwc1        $f6, 0x4190($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x8033284C: nop

    // 0x80332850: swc1        $f6, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f6.u32l;
    // 0x80332854: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332858: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033285C: lh          $t7, 0xC2($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XC2);
    // 0x80332860: nop

    // 0x80332864: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80332868: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033286C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332870: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332874: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332878: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033287C: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80332880: nop

    // 0x80332884: swc1        $f8, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f8.u32l;
    // 0x80332888: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033288C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332890: lh          $t1, 0xC2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XC2);
    // 0x80332894: nop

    // 0x80332898: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033289C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803328A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803328A4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803328A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803328AC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803328B0: lwc1        $f10, 0x418C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803328B4: nop

    // 0x803328B8: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
    // 0x803328BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803328C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803328C4: jal         0x8001B4AC
    // 0x803328C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803328C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803328CC: beq         $v0, $zero, L_803328EC
    if (ctx->r2 == 0) {
        // 0x803328D0: nop
    
            goto L_803328EC;
    }
    // 0x803328D0: nop

    // 0x803328D4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803328D8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x803328DC: sh          $t0, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r8;
    // 0x803328E0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803328E4: nop

    // 0x803328E8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803328EC:
    // 0x803328EC: b           L_803328F4
    // 0x803328F0: nop

        goto L_803328F4;
    // 0x803328F0: nop

L_803328F4:
    // 0x803328F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803328F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803328FC: jr          $ra
    // 0x80332900: nop

    return;
    // 0x80332900: nop

;}
RECOMP_FUNC void func_80330A10_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330A10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330A14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330A18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330A1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330A20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330A24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330A28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330A30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330A38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330A3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330A40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330A44: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330A48: nop

    // 0x80330A4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330A50: nop

    // 0x80330A54: bne         $t1, $zero, L_80330AAC
    if (ctx->r9 != 0) {
        // 0x80330A58: nop
    
            goto L_80330AAC;
    }
    // 0x80330A58: nop

    // 0x80330A5C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330A60: nop

    // 0x80330A64: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330A68: nop

    // 0x80330A6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330A70: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330A74: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330A78: nop

    // 0x80330A7C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330A80: nop

    // 0x80330A84: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330A88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A8C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330A90: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330A94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A98: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330A9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330AA0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80330AA4: jal         0x8001C0EC
    // 0x80330AA8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330AA8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80330AAC:
    // 0x80330AAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330AB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330AB4: jal         0x8002A8B4
    // 0x80330AB8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330AB8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80330ABC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330AC0: nop

    // 0x80330AC4: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330AC8: nop

    // 0x80330ACC: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330AD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330AD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330AD8: jal         0x8001B4AC
    // 0x80330ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330AE0: beq         $v0, $zero, L_80330B00
    if (ctx->r2 == 0) {
        // 0x80330AE4: nop
    
            goto L_80330B00;
    }
    // 0x80330AE4: nop

    // 0x80330AE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330AEC: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80330AF0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330AF4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330AF8: nop

    // 0x80330AFC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330B00:
    // 0x80330B00: b           L_80330B08
    // 0x80330B04: nop

        goto L_80330B08;
    // 0x80330B04: nop

L_80330B08:
    // 0x80330B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330B10: jr          $ra
    // 0x80330B14: nop

    return;
    // 0x80330B14: nop

;}
RECOMP_FUNC void func_80332EB8_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332EB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332EC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332EC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332EC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332ECC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332ED0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332ED4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332ED8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332EDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332EE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332EE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332EE8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332EEC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332EF0: nop

    // 0x80332EF4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80332EF8: nop

    // 0x80332EFC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80332F00: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x80332F04: beq         $at, $zero, L_80332F88
    if (ctx->r1 == 0) {
        // 0x80332F08: nop
    
            goto L_80332F88;
    }
    // 0x80332F08: nop

    // 0x80332F0C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332F10: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332F14: addu        $at, $at, $t2
    gpr jr_addend_80332F20 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332F18: lw          $t2, 0x3058($at)
    ctx->r10 = ADD32(ctx->r1, 0X3058);
    // 0x80332F1C: nop

    // 0x80332F20: jr          $t2
    // 0x80332F24: nop

    switch (jr_addend_80332F20 >> 2) {
        case 0: goto L_80332F28; break;
        case 1: goto L_80332F38; break;
        case 2: goto L_80332F48; break;
        case 3: goto L_80332F58; break;
        case 4: goto L_80332F68; break;
        case 5: goto L_80332F78; break;
        default: switch_error(__func__, 0x80332F20, 0x80333058);
    }
    // 0x80332F24: nop

L_80332F28:
    // 0x80332F28: jal         0x803325A8
    // 0x80332F2C: nop

    func_803325A8_unk_bin_21(rdram, ctx);
        goto after_0;
    // 0x80332F2C: nop

    after_0:
    // 0x80332F30: b           L_80332F90
    // 0x80332F34: nop

        goto L_80332F90;
    // 0x80332F34: nop

L_80332F38:
    // 0x80332F38: jal         0x80332744
    // 0x80332F3C: nop

    func_80332744_unk_bin_21(rdram, ctx);
        goto after_1;
    // 0x80332F3C: nop

    after_1:
    // 0x80332F40: b           L_80332F90
    // 0x80332F44: nop

        goto L_80332F90;
    // 0x80332F44: nop

L_80332F48:
    // 0x80332F48: jal         0x80332904
    // 0x80332F4C: nop

    func_80332904_unk_bin_21(rdram, ctx);
        goto after_2;
    // 0x80332F4C: nop

    after_2:
    // 0x80332F50: b           L_80332F90
    // 0x80332F54: nop

        goto L_80332F90;
    // 0x80332F54: nop

L_80332F58:
    // 0x80332F58: jal         0x80332AD4
    // 0x80332F5C: nop

    func_80332AD4_unk_bin_21(rdram, ctx);
        goto after_3;
    // 0x80332F5C: nop

    after_3:
    // 0x80332F60: b           L_80332F90
    // 0x80332F64: nop

        goto L_80332F90;
    // 0x80332F64: nop

L_80332F68:
    // 0x80332F68: jal         0x80332C88
    // 0x80332F6C: nop

    func_80332C88_unk_bin_21(rdram, ctx);
        goto after_4;
    // 0x80332F6C: nop

    after_4:
    // 0x80332F70: b           L_80332F90
    // 0x80332F74: nop

        goto L_80332F90;
    // 0x80332F74: nop

L_80332F78:
    // 0x80332F78: jal         0x80332DCC
    // 0x80332F7C: nop

    func_80332DCC_unk_bin_21(rdram, ctx);
        goto after_5;
    // 0x80332F7C: nop

    after_5:
    // 0x80332F80: b           L_80332F90
    // 0x80332F84: nop

        goto L_80332F90;
    // 0x80332F84: nop

L_80332F88:
    // 0x80332F88: b           L_80332F90
    // 0x80332F8C: nop

        goto L_80332F90;
    // 0x80332F8C: nop

L_80332F90:
    // 0x80332F90: b           L_80332F98
    // 0x80332F94: nop

        goto L_80332F98;
    // 0x80332F94: nop

L_80332F98:
    // 0x80332F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332F9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332FA0: jr          $ra
    // 0x80332FA4: nop

    return;
    // 0x80332FA4: nop

;}
RECOMP_FUNC void func_80330410_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330410: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330418: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033041C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330420: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330424: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330428: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033042C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330430: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330434: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330438: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033043C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330440: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330444: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330448: nop

    // 0x8033044C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330450: nop

    // 0x80330454: bne         $t1, $zero, L_803304C8
    if (ctx->r9 != 0) {
        // 0x80330458: nop
    
            goto L_803304C8;
    }
    // 0x80330458: nop

    // 0x8033045C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330460: nop

    // 0x80330464: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330468: nop

    // 0x8033046C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330470: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330474: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330478: nop

    // 0x8033047C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330480: nop

    // 0x80330484: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033048C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330490: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330498: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033049C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803304A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803304A4: jal         0x8001C0EC
    // 0x803304A8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803304A8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x803304AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803304B8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x803304BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803304C0: jal         0x800175F0
    // 0x803304C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803304C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_803304C8:
    // 0x803304C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304D0: jal         0x8002A8B4
    // 0x803304D4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x803304D4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x803304D8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803304DC: nop

    // 0x803304E0: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803304E4: nop

    // 0x803304E8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803304EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304F4: jal         0x8001B4AC
    // 0x803304F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803304F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803304FC: beq         $v0, $zero, L_80330564
    if (ctx->r2 == 0) {
        // 0x80330500: nop
    
            goto L_80330564;
    }
    // 0x80330500: nop

    // 0x80330504: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330508: nop

    // 0x8033050C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80330510: nop

    // 0x80330514: bne         $t0, $zero, L_80330534
    if (ctx->r8 != 0) {
        // 0x80330518: nop
    
            goto L_80330534;
    }
    // 0x80330518: nop

    // 0x8033051C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330520: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80330524: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80330528: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033052C: b           L_80330564
    // 0x80330530: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_80330564;
    // 0x80330530: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80330534:
    // 0x80330534: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330538: nop

    // 0x8033053C: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80330540: nop

    // 0x80330544: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80330548: sh          $t5, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r13;
    // 0x8033054C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330550: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330554: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80330558: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033055C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80330560: sb          $t9, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r25;
L_80330564:
    // 0x80330564: b           L_8033056C
    // 0x80330568: nop

        goto L_8033056C;
    // 0x80330568: nop

L_8033056C:
    // 0x8033056C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330570: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330574: jr          $ra
    // 0x80330578: nop

    return;
    // 0x80330578: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330040: addiu       $a1, $a1, 0x2FBC
    ctx->r5 = ADD32(ctx->r5, 0X2FBC);
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
    // 0x80330068: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033006C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330070: jal         0x80019448
    // 0x80330074: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80330074: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80330078: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033007C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330080: addiu       $a3, $a3, -0x5F64
    ctx->r7 = ADD32(ctx->r7, -0X5F64);
    // 0x80330084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330088: jal         0x8001ABF4
    // 0x8033008C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033008C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330090: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330094: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330098: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033009C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803300A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803300A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803300A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803300AC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803300B0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803300B4: sh          $t1, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r9;
    // 0x803300B8: b           L_803300C0
    // 0x803300BC: nop

        goto L_803300C0;
    // 0x803300BC: nop

L_803300C0:
    // 0x803300C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803300C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803300C8: jr          $ra
    // 0x803300CC: nop

    return;
    // 0x803300CC: nop

;}
RECOMP_FUNC void func_8033231C_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033231C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332320: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332324: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80332328: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033232C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332330: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332334: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332338: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033233C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332340: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332344: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332348: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033234C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332350: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332354: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332358: nop

    // 0x8033235C: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80332360: nop

    // 0x80332364: bne         $t1, $zero, L_80332384
    if (ctx->r9 != 0) {
        // 0x80332368: nop
    
            goto L_80332384;
    }
    // 0x80332368: nop

    // 0x8033236C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332370: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332374: jal         0x8001BB34
    // 0x80332378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80332378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033237C: b           L_803323AC
    // 0x80332380: nop

        goto L_803323AC;
    // 0x80332380: nop

L_80332384:
    // 0x80332384: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332388: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033238C: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x80332390: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332394: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x80332398: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x8033239C: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803323A0: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x803323A4: jal         0x8001BB34
    // 0x803323A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x803323A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_803323AC:
    // 0x803323AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803323B0: nop

    // 0x803323B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803323B8: nop

    // 0x803323BC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803323C0: sltiu       $at, $t7, 0x1A
    ctx->r1 = ctx->r15 < 0X1A ? 1 : 0;
    // 0x803323C4: beq         $at, $zero, L_80332588
    if (ctx->r1 == 0) {
        // 0x803323C8: nop
    
            goto L_80332588;
    }
    // 0x803323C8: nop

    // 0x803323CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803323D0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803323D4: addu        $at, $at, $t7
    gpr jr_addend_803323E0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803323D8: lw          $t7, 0x2FF0($at)
    ctx->r15 = ADD32(ctx->r1, 0X2FF0);
    // 0x803323DC: nop

    // 0x803323E0: jr          $t7
    // 0x803323E4: nop

    switch (jr_addend_803323E0 >> 2) {
        case 0: goto L_803323E8; break;
        case 1: goto L_803323F8; break;
        case 2: goto L_80332408; break;
        case 3: goto L_80332418; break;
        case 4: goto L_80332428; break;
        case 5: goto L_80332438; break;
        case 6: goto L_80332448; break;
        case 7: goto L_80332458; break;
        case 8: goto L_80332468; break;
        case 9: goto L_80332478; break;
        case 10: goto L_80332488; break;
        case 11: goto L_80332498; break;
        case 12: goto L_803324A8; break;
        case 13: goto L_803324B8; break;
        case 14: goto L_803324C8; break;
        case 15: goto L_803324D8; break;
        case 16: goto L_803324E8; break;
        case 17: goto L_803324F8; break;
        case 18: goto L_80332508; break;
        case 19: goto L_80332518; break;
        case 20: goto L_80332528; break;
        case 21: goto L_80332538; break;
        case 22: goto L_80332548; break;
        case 23: goto L_80332558; break;
        case 24: goto L_80332568; break;
        case 25: goto L_80332578; break;
        default: switch_error(__func__, 0x803323E0, 0x80332FF0);
    }
    // 0x803323E4: nop

L_803323E8:
    // 0x803323E8: jal         0x803302A0
    // 0x803323EC: nop

    func_803302A0_unk_bin_21(rdram, ctx);
        goto after_2;
    // 0x803323EC: nop

    after_2:
    // 0x803323F0: b           L_80332590
    // 0x803323F4: nop

        goto L_80332590;
    // 0x803323F4: nop

L_803323F8:
    // 0x803323F8: jal         0x80330410
    // 0x803323FC: nop

    func_80330410_unk_bin_21(rdram, ctx);
        goto after_3;
    // 0x803323FC: nop

    after_3:
    // 0x80332400: b           L_80332590
    // 0x80332404: nop

        goto L_80332590;
    // 0x80332404: nop

L_80332408:
    // 0x80332408: jal         0x8033057C
    // 0x8033240C: nop

    func_8033057C_unk_bin_21(rdram, ctx);
        goto after_4;
    // 0x8033240C: nop

    after_4:
    // 0x80332410: b           L_80332590
    // 0x80332414: nop

        goto L_80332590;
    // 0x80332414: nop

L_80332418:
    // 0x80332418: jal         0x80330750
    // 0x8033241C: nop

    func_80330750_unk_bin_21(rdram, ctx);
        goto after_5;
    // 0x8033241C: nop

    after_5:
    // 0x80332420: b           L_80332590
    // 0x80332424: nop

        goto L_80332590;
    // 0x80332424: nop

L_80332428:
    // 0x80332428: jal         0x80330908
    // 0x8033242C: nop

    func_80330908_unk_bin_21(rdram, ctx);
        goto after_6;
    // 0x8033242C: nop

    after_6:
    // 0x80332430: b           L_80332590
    // 0x80332434: nop

        goto L_80332590;
    // 0x80332434: nop

L_80332438:
    // 0x80332438: jal         0x80330A10
    // 0x8033243C: nop

    func_80330A10_unk_bin_21(rdram, ctx);
        goto after_7;
    // 0x8033243C: nop

    after_7:
    // 0x80332440: b           L_80332590
    // 0x80332444: nop

        goto L_80332590;
    // 0x80332444: nop

L_80332448:
    // 0x80332448: jal         0x80330B18
    // 0x8033244C: nop

    func_80330B18_unk_bin_21(rdram, ctx);
        goto after_8;
    // 0x8033244C: nop

    after_8:
    // 0x80332450: b           L_80332590
    // 0x80332454: nop

        goto L_80332590;
    // 0x80332454: nop

L_80332458:
    // 0x80332458: jal         0x80330C20
    // 0x8033245C: nop

    func_80330C20_unk_bin_21(rdram, ctx);
        goto after_9;
    // 0x8033245C: nop

    after_9:
    // 0x80332460: b           L_80332590
    // 0x80332464: nop

        goto L_80332590;
    // 0x80332464: nop

L_80332468:
    // 0x80332468: jal         0x80330D28
    // 0x8033246C: nop

    func_80330D28_unk_bin_21(rdram, ctx);
        goto after_10;
    // 0x8033246C: nop

    after_10:
    // 0x80332470: b           L_80332590
    // 0x80332474: nop

        goto L_80332590;
    // 0x80332474: nop

L_80332478:
    // 0x80332478: jal         0x80330E30
    // 0x8033247C: nop

    func_80330E30_unk_bin_21(rdram, ctx);
        goto after_11;
    // 0x8033247C: nop

    after_11:
    // 0x80332480: b           L_80332590
    // 0x80332484: nop

        goto L_80332590;
    // 0x80332484: nop

L_80332488:
    // 0x80332488: jal         0x80330F68
    // 0x8033248C: nop

    func_80330F68_unk_bin_21(rdram, ctx);
        goto after_12;
    // 0x8033248C: nop

    after_12:
    // 0x80332490: b           L_80332590
    // 0x80332494: nop

        goto L_80332590;
    // 0x80332494: nop

L_80332498:
    // 0x80332498: jal         0x8033108C
    // 0x8033249C: nop

    func_8033108C_unk_bin_21(rdram, ctx);
        goto after_13;
    // 0x8033249C: nop

    after_13:
    // 0x803324A0: b           L_80332590
    // 0x803324A4: nop

        goto L_80332590;
    // 0x803324A4: nop

L_803324A8:
    // 0x803324A8: jal         0x803311D4
    // 0x803324AC: nop

    func_803311D4_unk_bin_21(rdram, ctx);
        goto after_14;
    // 0x803324AC: nop

    after_14:
    // 0x803324B0: b           L_80332590
    // 0x803324B4: nop

        goto L_80332590;
    // 0x803324B4: nop

L_803324B8:
    // 0x803324B8: jal         0x80331360
    // 0x803324BC: nop

    func_80331360_unk_bin_21(rdram, ctx);
        goto after_15;
    // 0x803324BC: nop

    after_15:
    // 0x803324C0: b           L_80332590
    // 0x803324C4: nop

        goto L_80332590;
    // 0x803324C4: nop

L_803324C8:
    // 0x803324C8: jal         0x80331468
    // 0x803324CC: nop

    func_80331468_unk_bin_21(rdram, ctx);
        goto after_16;
    // 0x803324CC: nop

    after_16:
    // 0x803324D0: b           L_80332590
    // 0x803324D4: nop

        goto L_80332590;
    // 0x803324D4: nop

L_803324D8:
    // 0x803324D8: jal         0x80331570
    // 0x803324DC: nop

    func_80331570_unk_bin_21(rdram, ctx);
        goto after_17;
    // 0x803324DC: nop

    after_17:
    // 0x803324E0: b           L_80332590
    // 0x803324E4: nop

        goto L_80332590;
    // 0x803324E4: nop

L_803324E8:
    // 0x803324E8: jal         0x80331678
    // 0x803324EC: nop

    func_80331678_unk_bin_21(rdram, ctx);
        goto after_18;
    // 0x803324EC: nop

    after_18:
    // 0x803324F0: b           L_80332590
    // 0x803324F4: nop

        goto L_80332590;
    // 0x803324F4: nop

L_803324F8:
    // 0x803324F8: jal         0x803317E0
    // 0x803324FC: nop

    func_803317E0_unk_bin_21(rdram, ctx);
        goto after_19;
    // 0x803324FC: nop

    after_19:
    // 0x80332500: b           L_80332590
    // 0x80332504: nop

        goto L_80332590;
    // 0x80332504: nop

L_80332508:
    // 0x80332508: jal         0x803319B8
    // 0x8033250C: nop

    func_803319B8_unk_bin_21(rdram, ctx);
        goto after_20;
    // 0x8033250C: nop

    after_20:
    // 0x80332510: b           L_80332590
    // 0x80332514: nop

        goto L_80332590;
    // 0x80332514: nop

L_80332518:
    // 0x80332518: jal         0x80331A9C
    // 0x8033251C: nop

    func_80331A9C_unk_bin_21(rdram, ctx);
        goto after_21;
    // 0x8033251C: nop

    after_21:
    // 0x80332520: b           L_80332590
    // 0x80332524: nop

        goto L_80332590;
    // 0x80332524: nop

L_80332528:
    // 0x80332528: jal         0x80331B80
    // 0x8033252C: nop

    func_80331B80_unk_bin_21(rdram, ctx);
        goto after_22;
    // 0x8033252C: nop

    after_22:
    // 0x80332530: b           L_80332590
    // 0x80332534: nop

        goto L_80332590;
    // 0x80332534: nop

L_80332538:
    // 0x80332538: jal         0x80331D44
    // 0x8033253C: nop

    func_80331D44_unk_bin_21(rdram, ctx);
        goto after_23;
    // 0x8033253C: nop

    after_23:
    // 0x80332540: b           L_80332590
    // 0x80332544: nop

        goto L_80332590;
    // 0x80332544: nop

L_80332548:
    // 0x80332548: jal         0x80331E4C
    // 0x8033254C: nop

    func_80331E4C_unk_bin_21(rdram, ctx);
        goto after_24;
    // 0x8033254C: nop

    after_24:
    // 0x80332550: b           L_80332590
    // 0x80332554: nop

        goto L_80332590;
    // 0x80332554: nop

L_80332558:
    // 0x80332558: jal         0x80331F54
    // 0x8033255C: nop

    func_80331F54_unk_bin_21(rdram, ctx);
        goto after_25;
    // 0x8033255C: nop

    after_25:
    // 0x80332560: b           L_80332590
    // 0x80332564: nop

        goto L_80332590;
    // 0x80332564: nop

L_80332568:
    // 0x80332568: jal         0x8033205C
    // 0x8033256C: nop

    func_8033205C_unk_bin_21(rdram, ctx);
        goto after_26;
    // 0x8033256C: nop

    after_26:
    // 0x80332570: b           L_80332590
    // 0x80332574: nop

        goto L_80332590;
    // 0x80332574: nop

L_80332578:
    // 0x80332578: jal         0x80332164
    // 0x8033257C: nop

    func_80332164_unk_bin_21(rdram, ctx);
        goto after_27;
    // 0x8033257C: nop

    after_27:
    // 0x80332580: b           L_80332590
    // 0x80332584: nop

        goto L_80332590;
    // 0x80332584: nop

L_80332588:
    // 0x80332588: b           L_80332590
    // 0x8033258C: nop

        goto L_80332590;
    // 0x8033258C: nop

L_80332590:
    // 0x80332590: b           L_80332598
    // 0x80332594: nop

        goto L_80332598;
    // 0x80332594: nop

L_80332598:
    // 0x80332598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033259C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803325A0: jr          $ra
    // 0x803325A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803325A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80332904_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332904: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033290C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332910: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332914: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332918: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033291C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332920: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332924: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332928: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033292C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332930: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332934: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332938: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033293C: nop

    // 0x80332940: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332944: nop

    // 0x80332948: bne         $t1, $zero, L_803329BC
    if (ctx->r9 != 0) {
        // 0x8033294C: nop
    
            goto L_803329BC;
    }
    // 0x8033294C: nop

    // 0x80332950: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332954: nop

    // 0x80332958: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033295C: nop

    // 0x80332960: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332964: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332968: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033296C: nop

    // 0x80332970: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332974: nop

    // 0x80332978: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033297C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332980: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332984: addiu       $t7, $t7, -0x5E88
    ctx->r15 = ADD32(ctx->r15, -0X5E88);
    // 0x80332988: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033298C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332994: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80332998: jal         0x8001C0EC
    // 0x8033299C: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033299C: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_0:
    // 0x803329A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803329AC: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x803329B0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803329B4: jal         0x800175F0
    // 0x803329B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803329B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_803329BC:
    // 0x803329BC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803329C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803329C4: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803329C8: nop

    // 0x803329CC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803329D0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803329D4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803329D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803329DC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803329E0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803329E4: lwc1        $f4, 0x4168($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x803329E8: nop

    // 0x803329EC: swc1        $f4, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f4.u32l;
    // 0x803329F0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803329F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803329F8: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803329FC: nop

    // 0x80332A00: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332A04: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332A08: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332A0C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332A10: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332A14: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332A18: lwc1        $f6, 0x4190($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x80332A1C: nop

    // 0x80332A20: swc1        $f6, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f6.u32l;
    // 0x80332A24: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332A28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A2C: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80332A30: nop

    // 0x80332A34: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80332A38: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332A3C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332A40: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332A44: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332A48: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332A4C: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80332A50: nop

    // 0x80332A54: swc1        $f8, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f8.u32l;
    // 0x80332A58: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332A5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A60: lh          $t9, 0xC2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XC2);
    // 0x80332A64: nop

    // 0x80332A68: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332A6C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332A70: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332A74: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332A78: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332A7C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332A80: lwc1        $f10, 0x418C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80332A84: nop

    // 0x80332A88: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
    // 0x80332A8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A94: jal         0x8001B4AC
    // 0x80332A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332A9C: beq         $v0, $zero, L_80332ABC
    if (ctx->r2 == 0) {
        // 0x80332AA0: nop
    
            goto L_80332ABC;
    }
    // 0x80332AA0: nop

    // 0x80332AA4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332AA8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80332AAC: sh          $t8, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r24;
    // 0x80332AB0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332AB4: nop

    // 0x80332AB8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80332ABC:
    // 0x80332ABC: b           L_80332AC4
    // 0x80332AC0: nop

        goto L_80332AC4;
    // 0x80332AC0: nop

L_80332AC4:
    // 0x80332AC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332ACC: jr          $ra
    // 0x80332AD0: nop

    return;
    // 0x80332AD0: nop

;}
RECOMP_FUNC void func_80332DCC_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332DCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332DD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332DD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332DD8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332DDC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332DE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332DE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332DE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332DEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332DF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332DF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332DF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332DFC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332E00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332E04: nop

    // 0x80332E08: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332E0C: nop

    // 0x80332E10: bne         $t1, $zero, L_80332E68
    if (ctx->r9 != 0) {
        // 0x80332E14: nop
    
            goto L_80332E68;
    }
    // 0x80332E14: nop

    // 0x80332E18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332E1C: nop

    // 0x80332E20: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332E24: nop

    // 0x80332E28: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332E2C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332E30: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332E34: nop

    // 0x80332E38: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332E3C: nop

    // 0x80332E40: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332E44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E48: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332E4C: addiu       $t7, $t7, -0x5E88
    ctx->r15 = ADD32(ctx->r15, -0X5E88);
    // 0x80332E50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E54: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332E58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332E5C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80332E60: jal         0x8001C0EC
    // 0x80332E64: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332E64: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_0:
L_80332E68:
    // 0x80332E68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E70: jal         0x80029D8C
    // 0x80332E74: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x80332E74: nop

    after_1:
    // 0x80332E78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E80: jal         0x8001B4AC
    // 0x80332E84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332E84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332E88: beq         $v0, $zero, L_80332EA0
    if (ctx->r2 == 0) {
        // 0x80332E8C: nop
    
            goto L_80332EA0;
    }
    // 0x80332E8C: nop

    // 0x80332E90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E98: jal         0x8002B114
    // 0x80332E9C: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80332E9C: nop

    after_3:
L_80332EA0:
    // 0x80332EA0: b           L_80332EA8
    // 0x80332EA4: nop

        goto L_80332EA8;
    // 0x80332EA4: nop

L_80332EA8:
    // 0x80332EA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332EAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332EB0: jr          $ra
    // 0x80332EB4: nop

    return;
    // 0x80332EB4: nop

;}
RECOMP_FUNC void func_80330F68_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330F68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330F6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330F70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330F74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330F78: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330F7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330F80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330F88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330F90: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330F94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330F98: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330F9C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330FA0: nop

    // 0x80330FA4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330FA8: nop

    // 0x80330FAC: bne         $t1, $zero, L_80331004
    if (ctx->r9 != 0) {
        // 0x80330FB0: nop
    
            goto L_80331004;
    }
    // 0x80330FB0: nop

    // 0x80330FB4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330FB8: nop

    // 0x80330FBC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330FC0: nop

    // 0x80330FC4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330FC8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330FCC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330FD0: nop

    // 0x80330FD4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330FD8: nop

    // 0x80330FDC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330FE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FE4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330FE8: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330FEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FF0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330FF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330FF8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80330FFC: jal         0x8001C0EC
    // 0x80331000: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331000: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331004:
    // 0x80331004: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331008: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033100C: jal         0x80029D8C
    // 0x80331010: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x80331010: nop

    after_1:
    // 0x80331014: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331018: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x8033101C: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80331020: lwc1        $f6, 0x28($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80331024: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331028: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033102C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80331030: nop

    // 0x80331034: bc1f        L_80331074
    if (!c1cs) {
        // 0x80331038: nop
    
            goto L_80331074;
    }
    // 0x80331038: nop

    // 0x8033103C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331040: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x80331044: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331048: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033104C: nop

    // 0x80331050: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80331054: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331058: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033105C: nop

    // 0x80331060: swc1        $f16, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f16.u32l;
    // 0x80331064: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331068: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033106C: nop

    // 0x80331070: swc1        $f18, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f18.u32l;
L_80331074:
    // 0x80331074: b           L_8033107C
    // 0x80331078: nop

        goto L_8033107C;
    // 0x80331078: nop

L_8033107C:
    // 0x8033107C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331084: jr          $ra
    // 0x80331088: nop

    return;
    // 0x80331088: nop

;}
RECOMP_FUNC void func_803302A0_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803302A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803302A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803302AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803302B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803302B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803302B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803302C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803302C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803302CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803302D0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803302D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803302D8: nop

    // 0x803302DC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803302E0: nop

    // 0x803302E4: bne         $t1, $zero, L_80330348
    if (ctx->r9 != 0) {
        // 0x803302E8: nop
    
            goto L_80330348;
    }
    // 0x803302E8: nop

    // 0x803302EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803302F0: nop

    // 0x803302F4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803302F8: nop

    // 0x803302FC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330300: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330304: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330308: nop

    // 0x8033030C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330310: nop

    // 0x80330314: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033031C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330320: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330324: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330328: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033032C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330334: jal         0x8001C0EC
    // 0x80330338: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330338: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x8033033C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330340: b           L_803303A4
    // 0x80330344: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
        goto L_803303A4;
    // 0x80330344: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_80330348:
    // 0x80330348: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033034C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330350: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80330354: nop

    // 0x80330358: bne         $t0, $at, L_803303A4
    if (ctx->r8 != ctx->r1) {
        // 0x8033035C: nop
    
            goto L_803303A4;
    }
    // 0x8033035C: nop

    // 0x80330360: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330364: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80330368: sb          $t1, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r9;
    // 0x8033036C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330370: nop

    // 0x80330374: lh          $t2, 0xA4($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA4);
    // 0x80330378: nop

    // 0x8033037C: sh          $t2, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = ctx->r10;
    // 0x80330380: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330384: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80330388: addiu       $t6, $t6, -0x6020
    ctx->r14 = ADD32(ctx->r14, -0X6020);
    // 0x8033038C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330390: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80330394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033039C: jal         0x8001C0EC
    // 0x803303A0: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803303A0: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_1:
L_803303A4:
    // 0x803303A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803303A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803303AC: jal         0x8002A8B4
    // 0x803303B0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x803303B0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x803303B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803303B8: nop

    // 0x803303BC: lwc1        $f4, 0x3C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x803303C0: nop

    // 0x803303C4: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
    // 0x803303C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803303CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803303D0: jal         0x8001B4AC
    // 0x803303D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803303D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803303D8: beq         $v0, $zero, L_803303F8
    if (ctx->r2 == 0) {
        // 0x803303DC: nop
    
            goto L_803303F8;
    }
    // 0x803303DC: nop

    // 0x803303E0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803303E4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803303E8: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803303EC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803303F0: nop

    // 0x803303F4: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803303F8:
    // 0x803303F8: b           L_80330400
    // 0x803303FC: nop

        goto L_80330400;
    // 0x803303FC: nop

L_80330400:
    // 0x80330400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330408: jr          $ra
    // 0x8033040C: nop

    return;
    // 0x8033040C: nop

;}
RECOMP_FUNC void func_80331678_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331678: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033167C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331680: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331684: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331688: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033168C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331690: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331694: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331698: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033169C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803316A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803316A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803316A8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803316AC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803316B0: nop

    // 0x803316B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803316B8: nop

    // 0x803316BC: bne         $t1, $zero, L_80331734
    if (ctx->r9 != 0) {
        // 0x803316C0: nop
    
            goto L_80331734;
    }
    // 0x803316C0: nop

    // 0x803316C4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803316C8: nop

    // 0x803316CC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803316D0: nop

    // 0x803316D4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803316D8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803316DC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803316E0: nop

    // 0x803316E4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803316E8: nop

    // 0x803316EC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803316F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316F4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803316F8: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x803316FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331700: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331708: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x8033170C: jal         0x8001C0EC
    // 0x80331710: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331710: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x80331714: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331718: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033171C: nop

    // 0x80331720: swc1        $f4, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f4.u32l;
    // 0x80331724: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331728: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033172C: nop

    // 0x80331730: swc1        $f6, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f6.u32l;
L_80331734:
    // 0x80331734: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331738: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033173C: jal         0x8002A8B4
    // 0x80331740: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331740: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    after_1:
    // 0x80331744: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331748: nop

    // 0x8033174C: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80331750: nop

    // 0x80331754: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x80331758: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033175C: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x80331760: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331764: lwc1        $f12, 0x40($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X40);
    // 0x80331768: jal         0x80015538
    // 0x8033176C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8033176C: nop

    after_2:
    // 0x80331770: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331774: nop

    // 0x80331778: swc1        $f0, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f0.u32l;
    // 0x8033177C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331780: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331784: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331788: lwc1        $f16, 0x40($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X40);
    // 0x8033178C: nop

    // 0x80331790: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331794: swc1        $f18, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f18.u32l;
    // 0x80331798: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033179C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317A0: jal         0x8001B4AC
    // 0x803317A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803317A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803317A8: beq         $v0, $zero, L_803317C8
    if (ctx->r2 == 0) {
        // 0x803317AC: nop
    
            goto L_803317C8;
    }
    // 0x803317AC: nop

    // 0x803317B0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803317B4: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x803317B8: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803317BC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803317C0: nop

    // 0x803317C4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803317C8:
    // 0x803317C8: b           L_803317D0
    // 0x803317CC: nop

        goto L_803317D0;
    // 0x803317CC: nop

L_803317D0:
    // 0x803317D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803317D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803317D8: jr          $ra
    // 0x803317DC: nop

    return;
    // 0x803317DC: nop

;}
RECOMP_FUNC void func_8033205C_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033205C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332060: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332064: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332068: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033206C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332070: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332074: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332078: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033207C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332080: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332084: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332088: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033208C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332090: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332094: nop

    // 0x80332098: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033209C: nop

    // 0x803320A0: bne         $t1, $zero, L_803320F8
    if (ctx->r9 != 0) {
        // 0x803320A4: nop
    
            goto L_803320F8;
    }
    // 0x803320A4: nop

    // 0x803320A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803320AC: nop

    // 0x803320B0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803320B4: nop

    // 0x803320B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803320BC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803320C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803320C4: nop

    // 0x803320C8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803320CC: nop

    // 0x803320D0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803320D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320D8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803320DC: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x803320E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320E4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803320E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803320EC: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x803320F0: jal         0x8001C0EC
    // 0x803320F4: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803320F4: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_803320F8:
    // 0x803320F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332100: jal         0x8002A8B4
    // 0x80332104: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80332104: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80332108: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033210C: nop

    // 0x80332110: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80332114: nop

    // 0x80332118: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033211C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332120: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332124: jal         0x8001B4AC
    // 0x80332128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033212C: beq         $v0, $zero, L_8033214C
    if (ctx->r2 == 0) {
        // 0x80332130: nop
    
            goto L_8033214C;
    }
    // 0x80332130: nop

    // 0x80332134: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332138: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033213C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80332140: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332144: nop

    // 0x80332148: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033214C:
    // 0x8033214C: b           L_80332154
    // 0x80332150: nop

        goto L_80332154;
    // 0x80332150: nop

L_80332154:
    // 0x80332154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332158: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033215C: jr          $ra
    // 0x80332160: nop

    return;
    // 0x80332160: nop

;}
RECOMP_FUNC void func_80330E30_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330E34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330E38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330E3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330E40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330E44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330E48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330E4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330E50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330E54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330E58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330E5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330E60: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330E64: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E68: nop

    // 0x80330E6C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330E70: nop

    // 0x80330E74: bne         $t1, $zero, L_80330F10
    if (ctx->r9 != 0) {
        // 0x80330E78: nop
    
            goto L_80330F10;
    }
    // 0x80330E78: nop

    // 0x80330E7C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E80: nop

    // 0x80330E84: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330E88: nop

    // 0x80330E8C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330E90: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330E94: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E98: nop

    // 0x80330E9C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330EA0: nop

    // 0x80330EA4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330EA8: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80330EAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330EB0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EB4: nop

    // 0x80330EB8: swc1        $f4, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f4.u32l;
    // 0x80330EBC: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x80330EC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330EC4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EC8: nop

    // 0x80330ECC: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x80330ED0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330ED4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80330ED8: addiu       $t9, $t9, -0x6020
    ctx->r25 = ADD32(ctx->r25, -0X6020);
    // 0x80330EDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330EE0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80330EE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330EE8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80330EEC: jal         0x8001C0EC
    // 0x80330EF0: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330EF0: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x80330EF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330EF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F00: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x80330F04: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330F08: jal         0x800175F0
    // 0x80330F0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80330F0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80330F10:
    // 0x80330F10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F18: jal         0x80029D8C
    // 0x80330F1C: nop

    func_80029D8C(rdram, ctx);
        goto after_2;
    // 0x80330F1C: nop

    after_2:
    // 0x80330F20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F28: jal         0x8001B4AC
    // 0x80330F2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80330F2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80330F30: beq         $v0, $zero, L_80330F50
    if (ctx->r2 == 0) {
        // 0x80330F34: nop
    
            goto L_80330F50;
    }
    // 0x80330F34: nop

    // 0x80330F38: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F3C: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x80330F40: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80330F44: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F48: nop

    // 0x80330F4C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80330F50:
    // 0x80330F50: b           L_80330F58
    // 0x80330F54: nop

        goto L_80330F58;
    // 0x80330F54: nop

L_80330F58:
    // 0x80330F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330F60: jr          $ra
    // 0x80330F64: nop

    return;
    // 0x80330F64: nop

;}
RECOMP_FUNC void func_8033057C_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033057C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330580: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330584: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330588: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033058C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330590: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330594: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330598: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033059C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803305A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803305A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803305AC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803305B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803305B4: nop

    // 0x803305B8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803305BC: nop

    // 0x803305C0: bne         $t1, $zero, L_8033063C
    if (ctx->r9 != 0) {
        // 0x803305C4: nop
    
            goto L_8033063C;
    }
    // 0x803305C4: nop

    // 0x803305C8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803305CC: nop

    // 0x803305D0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803305D4: nop

    // 0x803305D8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803305DC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803305E0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803305E4: nop

    // 0x803305E8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803305EC: nop

    // 0x803305F0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803305F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305F8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803305FC: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330600: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330604: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033060C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330610: jal         0x8001C0EC
    // 0x80330614: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330614: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x80330618: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033061C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330620: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330624: nop

    // 0x80330628: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x8033062C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330630: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80330634: b           L_80330698
    // 0x80330638: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
        goto L_80330698;
    // 0x80330638: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_8033063C:
    // 0x8033063C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330640: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330644: lbu         $t3, 0x132($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X132);
    // 0x80330648: nop

    // 0x8033064C: bne         $t3, $at, L_80330698
    if (ctx->r11 != ctx->r1) {
        // 0x80330650: nop
    
            goto L_80330698;
    }
    // 0x80330650: nop

    // 0x80330654: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330658: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033065C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330660: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330664: nop

    // 0x80330668: lh          $t5, 0xA4($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA4);
    // 0x8033066C: nop

    // 0x80330670: sh          $t5, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r13;
    // 0x80330674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330678: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033067C: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330680: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330684: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033068C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330690: jal         0x8001C0EC
    // 0x80330694: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80330694: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_1:
L_80330698:
    // 0x80330698: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033069C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803306A0: jal         0x8002A8B4
    // 0x803306A4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x803306A4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x803306A8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803306AC: nop

    // 0x803306B0: lwc1        $f6, 0x3C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803306B4: nop

    // 0x803306B8: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
    // 0x803306BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803306C0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x803306C4: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803306C8: lwc1        $f10, 0x28($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X28);
    // 0x803306CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803306D0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803306D4: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x803306D8: nop

    // 0x803306DC: bc1f        L_80330708
    if (!c1cs) {
        // 0x803306E0: nop
    
            goto L_80330708;
    }
    // 0x803306E0: nop

    // 0x803306E4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x803306E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803306EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803306F0: nop

    // 0x803306F4: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x803306F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803306FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330700: nop

    // 0x80330704: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
L_80330708:
    // 0x80330708: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033070C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330710: jal         0x8001B4AC
    // 0x80330714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80330714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80330718: beq         $v0, $zero, L_80330738
    if (ctx->r2 == 0) {
        // 0x8033071C: nop
    
            goto L_80330738;
    }
    // 0x8033071C: nop

    // 0x80330720: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330724: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80330728: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033072C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330730: nop

    // 0x80330734: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80330738:
    // 0x80330738: b           L_80330740
    // 0x8033073C: nop

        goto L_80330740;
    // 0x8033073C: nop

L_80330740:
    // 0x80330740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330748: jr          $ra
    // 0x8033074C: nop

    return;
    // 0x8033074C: nop

;}
RECOMP_FUNC void func_803325A8_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803325A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803325AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803325B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803325B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803325B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803325BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803325C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803325C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803325C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803325CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803325D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803325D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803325D8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803325DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803325E0: nop

    // 0x803325E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803325E8: nop

    // 0x803325EC: bne         $t1, $zero, L_8033262C
    if (ctx->r9 != 0) {
        // 0x803325F0: nop
    
            goto L_8033262C;
    }
    // 0x803325F0: nop

    // 0x803325F4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803325F8: nop

    // 0x803325FC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332600: nop

    // 0x80332604: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332608: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033260C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332610: nop

    // 0x80332614: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332618: nop

    // 0x8033261C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332620: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332624: nop

    // 0x80332628: sh          $zero, 0x108($t7)
    MEM_H(0X108, ctx->r15) = 0;
L_8033262C:
    // 0x8033262C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332630: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332634: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80332638: nop

    // 0x8033263C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332640: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332644: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332648: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033264C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332650: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332654: lwc1        $f4, 0x4168($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80332658: nop

    // 0x8033265C: swc1        $f4, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f4.u32l;
    // 0x80332660: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80332664: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332668: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033266C: nop

    // 0x80332670: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332674: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332678: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033267C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332680: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332684: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332688: lwc1        $f6, 0x4190($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x8033268C: nop

    // 0x80332690: swc1        $f6, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f6.u32l;
    // 0x80332694: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332698: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033269C: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x803326A0: nop

    // 0x803326A4: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803326A8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803326AC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803326B0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803326B4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803326B8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803326BC: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803326C0: nop

    // 0x803326C4: swc1        $f8, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f8.u32l;
    // 0x803326C8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803326CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803326D0: lh          $t9, 0xC2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XC2);
    // 0x803326D4: nop

    // 0x803326D8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803326DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803326E0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803326E4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803326E8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803326EC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803326F0: lwc1        $f10, 0x418C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803326F4: nop

    // 0x803326F8: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
    // 0x803326FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332700: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332704: jal         0x8001B4AC
    // 0x80332708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x80332708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033270C: beq         $v0, $zero, L_8033272C
    if (ctx->r2 == 0) {
        // 0x80332710: nop
    
            goto L_8033272C;
    }
    // 0x80332710: nop

    // 0x80332714: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332718: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8033271C: sh          $t8, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r24;
    // 0x80332720: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80332724: nop

    // 0x80332728: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033272C:
    // 0x8033272C: b           L_80332734
    // 0x80332730: nop

        goto L_80332734;
    // 0x80332730: nop

L_80332734:
    // 0x80332734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033273C: jr          $ra
    // 0x80332740: nop

    return;
    // 0x80332740: nop

;}
RECOMP_FUNC void func_803300D0_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803300D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803300D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803300D8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803300DC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803300E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803300E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803300E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803300EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803300F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330100: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330104: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330108: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033010C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330110: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80330114: nop

    // 0x80330118: bne         $t0, $zero, L_803301AC
    if (ctx->r8 != 0) {
        // 0x8033011C: nop
    
            goto L_803301AC;
    }
    // 0x8033011C: nop

    // 0x80330120: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330124: nop

    // 0x80330128: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x8033012C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80330130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330134: jal         0x80069E60
    // 0x80330138: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80330138: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x8033013C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330140: addiu       $t2, $zero, 0x1A
    ctx->r10 = ADD32(0, 0X1A);
    // 0x80330144: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80330148: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033014C: nop

    // 0x80330150: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80330154: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330158: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033015C: nop

    // 0x80330160: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80330164: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330168: nop

    // 0x8033016C: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80330170: nop

    // 0x80330174: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80330178: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033017C: nop

    // 0x80330180: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x80330184: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330188: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033018C: nop

    // 0x80330190: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x80330194: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330198: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033019C: jal         0x8001BBDC
    // 0x803301A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803301A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x803301A4: b           L_80330284
    // 0x803301A8: nop

        goto L_80330284;
    // 0x803301A8: nop

L_803301AC:
    // 0x803301AC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803301B0: lw          $t9, 0x7A64($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A64);
    // 0x803301B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803301B8: bne         $t9, $at, L_80330284
    if (ctx->r25 != ctx->r1) {
        // 0x803301BC: nop
    
            goto L_80330284;
    }
    // 0x803301BC: nop

    // 0x803301C0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803301C4: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x803301C8: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x803301CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803301D0: nop

    // 0x803301D4: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x803301D8: nop

    // 0x803301DC: addiu       $t4, $t3, -0x5
    ctx->r12 = ADD32(ctx->r11, -0X5);
    // 0x803301E0: sltiu       $at, $t4, 0x8
    ctx->r1 = ctx->r12 < 0X8 ? 1 : 0;
    // 0x803301E4: beq         $at, $zero, L_80330268
    if (ctx->r1 == 0) {
        // 0x803301E8: nop
    
            goto L_80330268;
    }
    // 0x803301E8: nop

    // 0x803301EC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803301F0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803301F4: addu        $at, $at, $t4
    gpr jr_addend_80330200 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803301F8: lw          $t4, 0x2FD0($at)
    ctx->r12 = ADD32(ctx->r1, 0X2FD0);
    // 0x803301FC: nop

    // 0x80330200: jr          $t4
    // 0x80330204: nop

    switch (jr_addend_80330200 >> 2) {
        case 0: goto L_80330208; break;
        case 1: goto L_80330208; break;
        case 2: goto L_80330208; break;
        case 3: goto L_80330208; break;
        case 4: goto L_80330208; break;
        case 5: goto L_80330208; break;
        case 6: goto L_80330208; break;
        case 7: goto L_80330208; break;
        default: switch_error(__func__, 0x80330200, 0x80332FD0);
    }
    // 0x80330204: nop

L_80330208:
    // 0x80330208: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033020C: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x80330210: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80330214: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330218: nop

    // 0x8033021C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80330220: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330224: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330228: nop

    // 0x8033022C: swc1        $f8, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f8.u32l;
    // 0x80330230: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330234: nop

    // 0x80330238: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x8033023C: nop

    // 0x80330240: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x80330244: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330248: nop

    // 0x8033024C: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x80330250: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330254: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330258: nop

    // 0x8033025C: swc1        $f10, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f10.u32l;
    // 0x80330260: b           L_80330284
    // 0x80330264: nop

        goto L_80330284;
    // 0x80330264: nop

L_80330268:
    // 0x80330268: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033026C: nop

    // 0x80330270: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x80330274: nop

    // 0x80330278: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
    // 0x8033027C: b           L_80330284
    // 0x80330280: nop

        goto L_80330284;
    // 0x80330280: nop

L_80330284:
    // 0x80330284: b           L_8033028C
    // 0x80330288: nop

        goto L_8033028C;
    // 0x80330288: nop

L_8033028C:
    // 0x8033028C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330290: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80330294: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80330298: jr          $ra
    // 0x8033029C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033029C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80330750_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330750: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330758: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033075C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330760: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330764: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330768: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033076C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330774: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330778: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033077C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330780: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330784: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330788: nop

    // 0x8033078C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330790: nop

    // 0x80330794: bne         $t1, $zero, L_80330808
    if (ctx->r9 != 0) {
        // 0x80330798: nop
    
            goto L_80330808;
    }
    // 0x80330798: nop

    // 0x8033079C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803307A0: nop

    // 0x803307A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803307A8: nop

    // 0x803307AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803307B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803307B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803307B8: nop

    // 0x803307BC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803307C0: nop

    // 0x803307C4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803307C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307CC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803307D0: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x803307D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307D8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803307DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803307E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803307E4: jal         0x8001C0EC
    // 0x803307E8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803307E8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x803307EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803307F8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x803307FC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330800: jal         0x800175F0
    // 0x80330804: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80330804: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80330808:
    // 0x80330808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033080C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330810: jal         0x8002A8B4
    // 0x80330814: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80330814: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x80330818: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033081C: nop

    // 0x80330820: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330824: nop

    // 0x80330828: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033082C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330830: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80330834: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80330838: lwc1        $f8, 0x28($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X28);
    // 0x8033083C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330840: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330844: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80330848: nop

    // 0x8033084C: bc1f        L_80330878
    if (!c1cs) {
        // 0x80330850: nop
    
            goto L_80330878;
    }
    // 0x80330850: nop

    // 0x80330854: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80330858: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033085C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330860: nop

    // 0x80330864: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
    // 0x80330868: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033086C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330870: nop

    // 0x80330874: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
L_80330878:
    // 0x80330878: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033087C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330880: jal         0x8001B4AC
    // 0x80330884: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80330884: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80330888: beq         $v0, $zero, L_803308F0
    if (ctx->r2 == 0) {
        // 0x8033088C: nop
    
            goto L_803308F0;
    }
    // 0x8033088C: nop

    // 0x80330890: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330894: nop

    // 0x80330898: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8033089C: nop

    // 0x803308A0: bne         $t4, $zero, L_803308C0
    if (ctx->r12 != 0) {
        // 0x803308A4: nop
    
            goto L_803308C0;
    }
    // 0x803308A4: nop

    // 0x803308A8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803308AC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x803308B0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803308B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803308B8: b           L_803308F0
    // 0x803308BC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_803308F0;
    // 0x803308BC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803308C0:
    // 0x803308C0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803308C4: nop

    // 0x803308C8: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803308CC: nop

    // 0x803308D0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803308D4: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x803308D8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803308DC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x803308E0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803308E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803308E8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803308EC: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
L_803308F0:
    // 0x803308F0: b           L_803308F8
    // 0x803308F4: nop

        goto L_803308F8;
    // 0x803308F4: nop

L_803308F8:
    // 0x803308F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803308FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330900: jr          $ra
    // 0x80330904: nop

    return;
    // 0x80330904: nop

;}
RECOMP_FUNC void func_803319B8_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803319B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803319BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803319C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803319C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803319C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803319CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803319D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803319D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803319D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803319DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803319E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803319E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803319E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803319EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803319F0: nop

    // 0x803319F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803319F8: nop

    // 0x803319FC: bne         $t1, $zero, L_80331A54
    if (ctx->r9 != 0) {
        // 0x80331A00: nop
    
            goto L_80331A54;
    }
    // 0x80331A00: nop

    // 0x80331A04: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331A08: nop

    // 0x80331A0C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331A10: nop

    // 0x80331A14: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331A18: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331A1C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331A20: nop

    // 0x80331A24: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331A28: nop

    // 0x80331A2C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331A30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A34: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331A38: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331A3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331A48: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x80331A4C: jal         0x8001C0EC
    // 0x80331A50: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331A50: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331A54:
    // 0x80331A54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A5C: jal         0x8001B4AC
    // 0x80331A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331A64: beq         $v0, $zero, L_80331A84
    if (ctx->r2 == 0) {
        // 0x80331A68: nop
    
            goto L_80331A84;
    }
    // 0x80331A68: nop

    // 0x80331A6C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331A70: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80331A74: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331A78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331A7C: nop

    // 0x80331A80: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331A84:
    // 0x80331A84: b           L_80331A8C
    // 0x80331A88: nop

        goto L_80331A8C;
    // 0x80331A88: nop

L_80331A8C:
    // 0x80331A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331A94: jr          $ra
    // 0x80331A98: nop

    return;
    // 0x80331A98: nop

;}
RECOMP_FUNC void func_80331468_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331468: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033146C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331470: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331474: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331478: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033147C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331480: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331484: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331488: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033148C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331490: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331494: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331498: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033149C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803314A0: nop

    // 0x803314A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803314A8: nop

    // 0x803314AC: bne         $t1, $zero, L_80331504
    if (ctx->r9 != 0) {
        // 0x803314B0: nop
    
            goto L_80331504;
    }
    // 0x803314B0: nop

    // 0x803314B4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803314B8: nop

    // 0x803314BC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803314C0: nop

    // 0x803314C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803314C8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803314CC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803314D0: nop

    // 0x803314D4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803314D8: nop

    // 0x803314DC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803314E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314E4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803314E8: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x803314EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803314F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803314F8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x803314FC: jal         0x8001C0EC
    // 0x80331500: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331500: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331504:
    // 0x80331504: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331508: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033150C: jal         0x8002A8B4
    // 0x80331510: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331510: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331514: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331518: nop

    // 0x8033151C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331520: nop

    // 0x80331524: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331528: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033152C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331530: jal         0x8001B4AC
    // 0x80331534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331538: beq         $v0, $zero, L_80331558
    if (ctx->r2 == 0) {
        // 0x8033153C: nop
    
            goto L_80331558;
    }
    // 0x8033153C: nop

    // 0x80331540: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331544: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80331548: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033154C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331550: nop

    // 0x80331554: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331558:
    // 0x80331558: b           L_80331560
    // 0x8033155C: nop

        goto L_80331560;
    // 0x8033155C: nop

L_80331560:
    // 0x80331560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331564: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331568: jr          $ra
    // 0x8033156C: nop

    return;
    // 0x8033156C: nop

;}
RECOMP_FUNC void func_80330D28_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330D28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330D2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330D30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330D34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330D38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330D3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330D40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330D48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330D50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330D54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330D58: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330D5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330D60: nop

    // 0x80330D64: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330D68: nop

    // 0x80330D6C: bne         $t1, $zero, L_80330DC4
    if (ctx->r9 != 0) {
        // 0x80330D70: nop
    
            goto L_80330DC4;
    }
    // 0x80330D70: nop

    // 0x80330D74: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330D78: nop

    // 0x80330D7C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330D80: nop

    // 0x80330D84: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330D88: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330D8C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330D90: nop

    // 0x80330D94: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330D98: nop

    // 0x80330D9C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330DA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DA4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330DA8: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330DAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DB0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330DB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80330DBC: jal         0x8001C0EC
    // 0x80330DC0: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330DC0: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80330DC4:
    // 0x80330DC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DCC: jal         0x8002A8B4
    // 0x80330DD0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330DD0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80330DD4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330DD8: nop

    // 0x80330DDC: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330DE0: nop

    // 0x80330DE4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330DE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DF0: jal         0x8001B4AC
    // 0x80330DF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330DF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330DF8: beq         $v0, $zero, L_80330E18
    if (ctx->r2 == 0) {
        // 0x80330DFC: nop
    
            goto L_80330E18;
    }
    // 0x80330DFC: nop

    // 0x80330E00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330E04: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80330E08: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330E0C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330E10: nop

    // 0x80330E14: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330E18:
    // 0x80330E18: b           L_80330E20
    // 0x80330E1C: nop

        goto L_80330E20;
    // 0x80330E1C: nop

L_80330E20:
    // 0x80330E20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330E28: jr          $ra
    // 0x80330E2C: nop

    return;
    // 0x80330E2C: nop

;}
RECOMP_FUNC void func_803317E0_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803317E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803317E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803317E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803317EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803317F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803317F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803317F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803317FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331800: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331804: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331808: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033180C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331810: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331814: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331818: nop

    // 0x8033181C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331820: nop

    // 0x80331824: bne         $t1, $zero, L_8033187C
    if (ctx->r9 != 0) {
        // 0x80331828: nop
    
            goto L_8033187C;
    }
    // 0x80331828: nop

    // 0x8033182C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331830: nop

    // 0x80331834: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331838: nop

    // 0x8033183C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331840: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331844: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331848: nop

    // 0x8033184C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331850: nop

    // 0x80331854: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331858: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033185C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331860: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331864: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331868: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033186C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331870: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80331874: jal         0x8001C0EC
    // 0x80331878: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331878: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_8033187C:
    // 0x8033187C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331880: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331884: jal         0x8002A8B4
    // 0x80331888: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331888: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    after_1:
    // 0x8033188C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331890: nop

    // 0x80331894: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331898: nop

    // 0x8033189C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803318A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803318A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803318A8: jal         0x8001B62C
    // 0x803318AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x803318AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803318B0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803318B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803318B8: nop

    // 0x803318BC: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x803318C0: nop

    // 0x803318C4: bc1f        L_80331970
    if (!c1cs) {
        // 0x803318C8: nop
    
            goto L_80331970;
    }
    // 0x803318C8: nop

    // 0x803318CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803318D0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803318D4: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803318D8: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x803318DC: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x803318E0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803318E4: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803318E8: addiu       $a1, $a1, 0x2FB0
    ctx->r5 = ADD32(ctx->r5, 0X2FB0);
    // 0x803318EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803318F0: jal         0x80027464
    // 0x803318F4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x803318F4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x803318F8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803318FC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80331900: addiu       $t0, $t0, -0x5E88
    ctx->r8 = ADD32(ctx->r8, -0X5E88);
    // 0x80331904: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80331908: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033190C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331914: jal         0x8001C0EC
    // 0x80331918: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80331918: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_4:
    // 0x8033191C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331920: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331924: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80331928: jal         0x80026F10
    // 0x8033192C: nop

    func_80026F10(rdram, ctx);
        goto after_5;
    // 0x8033192C: nop

    after_5:
    // 0x80331930: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80331934: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331938: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033193C: jal         0x80019448
    // 0x80331940: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_6;
    // 0x80331940: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x80331944: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80331948: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033194C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331950: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331954: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331958: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033195C: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80331960: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331964: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331968: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033196C: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
L_80331970:
    // 0x80331970: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331974: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331978: jal         0x8001B4AC
    // 0x8033197C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x8033197C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80331980: beq         $v0, $zero, L_803319A0
    if (ctx->r2 == 0) {
        // 0x80331984: nop
    
            goto L_803319A0;
    }
    // 0x80331984: nop

    // 0x80331988: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033198C: addiu       $t2, $zero, 0x13
    ctx->r10 = ADD32(0, 0X13);
    // 0x80331990: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80331994: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331998: nop

    // 0x8033199C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803319A0:
    // 0x803319A0: b           L_803319A8
    // 0x803319A4: nop

        goto L_803319A8;
    // 0x803319A4: nop

L_803319A8:
    // 0x803319A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803319AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803319B0: jr          $ra
    // 0x803319B4: nop

    return;
    // 0x803319B4: nop

;}
RECOMP_FUNC void func_80331570_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331570: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331574: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331578: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033157C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331580: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331584: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331588: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033158C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331590: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331594: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331598: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033159C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803315A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803315A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803315A8: nop

    // 0x803315AC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803315B0: nop

    // 0x803315B4: bne         $t1, $zero, L_8033160C
    if (ctx->r9 != 0) {
        // 0x803315B8: nop
    
            goto L_8033160C;
    }
    // 0x803315B8: nop

    // 0x803315BC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803315C0: nop

    // 0x803315C4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803315C8: nop

    // 0x803315CC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803315D0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803315D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803315D8: nop

    // 0x803315DC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803315E0: nop

    // 0x803315E4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803315E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315EC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803315F0: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x803315F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803315FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331600: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80331604: jal         0x8001C0EC
    // 0x80331608: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331608: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_8033160C:
    // 0x8033160C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331610: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331614: jal         0x8002A8B4
    // 0x80331618: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331618: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x8033161C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331620: nop

    // 0x80331624: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331628: nop

    // 0x8033162C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331630: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331634: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331638: jal         0x8001B4AC
    // 0x8033163C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033163C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331640: beq         $v0, $zero, L_80331660
    if (ctx->r2 == 0) {
        // 0x80331644: nop
    
            goto L_80331660;
    }
    // 0x80331644: nop

    // 0x80331648: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033164C: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80331650: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331654: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331658: nop

    // 0x8033165C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331660:
    // 0x80331660: b           L_80331668
    // 0x80331664: nop

        goto L_80331668;
    // 0x80331664: nop

L_80331668:
    // 0x80331668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033166C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331670: jr          $ra
    // 0x80331674: nop

    return;
    // 0x80331674: nop

;}
RECOMP_FUNC void func_80331A9C_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331AA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331AA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331AA8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331AAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331AB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331AB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331AB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331ABC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331AC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331AC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331AC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331ACC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331AD0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331AD4: nop

    // 0x80331AD8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331ADC: nop

    // 0x80331AE0: bne         $t1, $zero, L_80331B38
    if (ctx->r9 != 0) {
        // 0x80331AE4: nop
    
            goto L_80331B38;
    }
    // 0x80331AE4: nop

    // 0x80331AE8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331AEC: nop

    // 0x80331AF0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331AF4: nop

    // 0x80331AF8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331AFC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331B00: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331B04: nop

    // 0x80331B08: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331B0C: nop

    // 0x80331B10: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331B14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B18: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331B1C: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331B20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B24: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331B28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B2C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80331B30: jal         0x8001C0EC
    // 0x80331B34: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331B34: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331B38:
    // 0x80331B38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B40: jal         0x8001B4AC
    // 0x80331B44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331B44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331B48: beq         $v0, $zero, L_80331B68
    if (ctx->r2 == 0) {
        // 0x80331B4C: nop
    
            goto L_80331B68;
    }
    // 0x80331B4C: nop

    // 0x80331B50: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331B54: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x80331B58: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331B5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331B60: nop

    // 0x80331B64: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331B68:
    // 0x80331B68: b           L_80331B70
    // 0x80331B6C: nop

        goto L_80331B70;
    // 0x80331B6C: nop

L_80331B70:
    // 0x80331B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331B78: jr          $ra
    // 0x80331B7C: nop

    return;
    // 0x80331B7C: nop

;}
RECOMP_FUNC void func_80330B18_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330B18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330B1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330B20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330B24: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330B28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330B2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330B30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330B44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330B48: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330B4C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330B50: nop

    // 0x80330B54: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330B58: nop

    // 0x80330B5C: bne         $t1, $zero, L_80330BB4
    if (ctx->r9 != 0) {
        // 0x80330B60: nop
    
            goto L_80330BB4;
    }
    // 0x80330B60: nop

    // 0x80330B64: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330B68: nop

    // 0x80330B6C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330B70: nop

    // 0x80330B74: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330B78: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330B7C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330B80: nop

    // 0x80330B84: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330B88: nop

    // 0x80330B8C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330B90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B94: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330B98: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330B9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BA0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330BA8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80330BAC: jal         0x8001C0EC
    // 0x80330BB0: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330BB0: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80330BB4:
    // 0x80330BB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BBC: jal         0x8002A8B4
    // 0x80330BC0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330BC0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80330BC4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330BC8: nop

    // 0x80330BCC: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330BD0: nop

    // 0x80330BD4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330BD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BE0: jal         0x8001B4AC
    // 0x80330BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330BE8: beq         $v0, $zero, L_80330C08
    if (ctx->r2 == 0) {
        // 0x80330BEC: nop
    
            goto L_80330C08;
    }
    // 0x80330BEC: nop

    // 0x80330BF0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330BF4: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80330BF8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330BFC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330C00: nop

    // 0x80330C04: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330C08:
    // 0x80330C08: b           L_80330C10
    // 0x80330C0C: nop

        goto L_80330C10;
    // 0x80330C0C: nop

L_80330C10:
    // 0x80330C10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330C18: jr          $ra
    // 0x80330C1C: nop

    return;
    // 0x80330C1C: nop

;}
RECOMP_FUNC void func_8033108C_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033108C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331094: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331098: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033109C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803310A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803310A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803310A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803310AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803310B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803310B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803310B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803310BC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803310C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803310C4: nop

    // 0x803310C8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803310CC: nop

    // 0x803310D0: bne         $t1, $zero, L_80331110
    if (ctx->r9 != 0) {
        // 0x803310D4: nop
    
            goto L_80331110;
    }
    // 0x803310D4: nop

    // 0x803310D8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803310DC: nop

    // 0x803310E0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803310E4: nop

    // 0x803310E8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803310EC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803310F0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803310F4: nop

    // 0x803310F8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803310FC: nop

    // 0x80331100: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331104: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331108: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8033110C: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_80331110:
    // 0x80331110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331114: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331118: jal         0x80029C40
    // 0x8033111C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x8033111C: nop

    after_0:
    // 0x80331120: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80331124: nop

    // 0x80331128: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8033112C: nop

    // 0x80331130: bne         $t0, $zero, L_803311A4
    if (ctx->r8 != 0) {
        // 0x80331134: nop
    
            goto L_803311A4;
    }
    // 0x80331134: nop

    // 0x80331138: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033113C: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x80331140: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80331144: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331148: nop

    // 0x8033114C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80331150: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331154: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331158: nop

    // 0x8033115C: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x80331160: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331164: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80331168: nop

    // 0x8033116C: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x80331170: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331174: nop

    // 0x80331178: lwc1        $f8, 0x2C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8033117C: nop

    // 0x80331180: swc1        $f8, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f8.u32l;
    // 0x80331184: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331188: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033118C: nop

    // 0x80331190: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
    // 0x80331194: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331198: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033119C: b           L_803311BC
    // 0x803311A0: swc1        $f16, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f16.u32l;
        goto L_803311BC;
    // 0x803311A0: swc1        $f16, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f16.u32l;
L_803311A4:
    // 0x803311A4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803311A8: nop

    // 0x803311AC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803311B0: nop

    // 0x803311B4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x803311B8: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_803311BC:
    // 0x803311BC: b           L_803311C4
    // 0x803311C0: nop

        goto L_803311C4;
    // 0x803311C0: nop

L_803311C4:
    // 0x803311C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803311C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803311CC: jr          $ra
    // 0x803311D0: nop

    return;
    // 0x803311D0: nop

;}
RECOMP_FUNC void func_80331D44_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331D48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331D4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331D54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331D5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331D64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331D6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331D70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331D74: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331D78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331D7C: nop

    // 0x80331D80: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331D84: nop

    // 0x80331D88: bne         $t1, $zero, L_80331DE0
    if (ctx->r9 != 0) {
        // 0x80331D8C: nop
    
            goto L_80331DE0;
    }
    // 0x80331D8C: nop

    // 0x80331D90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331D94: nop

    // 0x80331D98: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331D9C: nop

    // 0x80331DA0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331DA4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331DA8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331DAC: nop

    // 0x80331DB0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331DB4: nop

    // 0x80331DB8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331DBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DC0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331DC4: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331DC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DCC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331DD4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80331DD8: jal         0x8001C0EC
    // 0x80331DDC: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331DDC: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331DE0:
    // 0x80331DE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DE8: jal         0x8002A8B4
    // 0x80331DEC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331DEC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331DF0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331DF4: nop

    // 0x80331DF8: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331DFC: nop

    // 0x80331E00: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331E04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E0C: jal         0x8001B4AC
    // 0x80331E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331E14: beq         $v0, $zero, L_80331E34
    if (ctx->r2 == 0) {
        // 0x80331E18: nop
    
            goto L_80331E34;
    }
    // 0x80331E18: nop

    // 0x80331E1C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331E20: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x80331E24: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331E28: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331E2C: nop

    // 0x80331E30: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
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
RECOMP_FUNC void func_80330908_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330908: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033090C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330910: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330914: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330918: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033091C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330920: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330924: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330928: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033092C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330930: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330934: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330938: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033093C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330940: nop

    // 0x80330944: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330948: nop

    // 0x8033094C: bne         $t1, $zero, L_803309A4
    if (ctx->r9 != 0) {
        // 0x80330950: nop
    
            goto L_803309A4;
    }
    // 0x80330950: nop

    // 0x80330954: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330958: nop

    // 0x8033095C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330960: nop

    // 0x80330964: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330968: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033096C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330970: nop

    // 0x80330974: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330978: nop

    // 0x8033097C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330980: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330984: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330988: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x8033098C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330990: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330998: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8033099C: jal         0x8001C0EC
    // 0x803309A0: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803309A0: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_803309A4:
    // 0x803309A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309AC: jal         0x8002A8B4
    // 0x803309B0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x803309B0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x803309B4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803309B8: nop

    // 0x803309BC: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803309C0: nop

    // 0x803309C4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803309C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309D0: jal         0x8001B4AC
    // 0x803309D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803309D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803309D8: beq         $v0, $zero, L_803309F8
    if (ctx->r2 == 0) {
        // 0x803309DC: nop
    
            goto L_803309F8;
    }
    // 0x803309DC: nop

    // 0x803309E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803309E4: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x803309E8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803309EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803309F0: nop

    // 0x803309F4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803309F8:
    // 0x803309F8: b           L_80330A00
    // 0x803309FC: nop

        goto L_80330A00;
    // 0x803309FC: nop

L_80330A00:
    // 0x80330A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330A08: jr          $ra
    // 0x80330A0C: nop

    return;
    // 0x80330A0C: nop

;}
RECOMP_FUNC void func_80331F54_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331F58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331F5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331F60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331F64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331F68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331F6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331F74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331F7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331F80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331F84: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331F88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331F8C: nop

    // 0x80331F90: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331F94: nop

    // 0x80331F98: bne         $t1, $zero, L_80331FF0
    if (ctx->r9 != 0) {
        // 0x80331F9C: nop
    
            goto L_80331FF0;
    }
    // 0x80331F9C: nop

    // 0x80331FA0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331FA4: nop

    // 0x80331FA8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331FAC: nop

    // 0x80331FB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331FB4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331FB8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331FBC: nop

    // 0x80331FC0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331FC4: nop

    // 0x80331FC8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331FCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FD0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331FD4: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331FD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FDC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331FE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331FE4: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80331FE8: jal         0x8001C0EC
    // 0x80331FEC: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331FEC: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331FF0:
    // 0x80331FF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FF8: jal         0x8002A8B4
    // 0x80331FFC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331FFC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80332000: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332004: nop

    // 0x80332008: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033200C: nop

    // 0x80332010: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80332014: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332018: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033201C: jal         0x8001B4AC
    // 0x80332020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332024: beq         $v0, $zero, L_80332044
    if (ctx->r2 == 0) {
        // 0x80332028: nop
    
            goto L_80332044;
    }
    // 0x80332028: nop

    // 0x8033202C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332030: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x80332034: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80332038: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033203C: nop

    // 0x80332040: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80332044:
    // 0x80332044: b           L_8033204C
    // 0x80332048: nop

        goto L_8033204C;
    // 0x80332048: nop

L_8033204C:
    // 0x8033204C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332050: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332054: jr          $ra
    // 0x80332058: nop

    return;
    // 0x80332058: nop

;}
RECOMP_FUNC void func_80331E4C_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331E50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
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
    // 0x80331E7C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331E80: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331E84: nop

    // 0x80331E88: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331E8C: nop

    // 0x80331E90: bne         $t1, $zero, L_80331EE8
    if (ctx->r9 != 0) {
        // 0x80331E94: nop
    
            goto L_80331EE8;
    }
    // 0x80331E94: nop

    // 0x80331E98: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331E9C: nop

    // 0x80331EA0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331EA4: nop

    // 0x80331EA8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331EAC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331EB0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331EB4: nop

    // 0x80331EB8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331EBC: nop

    // 0x80331EC0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331EC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EC8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331ECC: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331ED0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331ED4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331ED8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331EDC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80331EE0: jal         0x8001C0EC
    // 0x80331EE4: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331EE4: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331EE8:
    // 0x80331EE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EF0: jal         0x8002A8B4
    // 0x80331EF4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331EF4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331EF8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331EFC: nop

    // 0x80331F00: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331F04: nop

    // 0x80331F08: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331F0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F14: jal         0x8001B4AC
    // 0x80331F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331F1C: beq         $v0, $zero, L_80331F3C
    if (ctx->r2 == 0) {
        // 0x80331F20: nop
    
            goto L_80331F3C;
    }
    // 0x80331F20: nop

    // 0x80331F24: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331F28: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x80331F2C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331F30: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331F34: nop

    // 0x80331F38: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331F3C:
    // 0x80331F3C: b           L_80331F44
    // 0x80331F40: nop

        goto L_80331F44;
    // 0x80331F40: nop

L_80331F44:
    // 0x80331F44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331F4C: jr          $ra
    // 0x80331F50: nop

    return;
    // 0x80331F50: nop

;}
RECOMP_FUNC void func_80332AD4_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332AD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332AD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332ADC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332AE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332AE4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332AE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332AEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332AF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332AF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332AF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332AFC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B04: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332B08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332B0C: nop

    // 0x80332B10: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332B14: nop

    // 0x80332B18: bne         $t1, $zero, L_80332B70
    if (ctx->r9 != 0) {
        // 0x80332B1C: nop
    
            goto L_80332B70;
    }
    // 0x80332B1C: nop

    // 0x80332B20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332B24: nop

    // 0x80332B28: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332B2C: nop

    // 0x80332B30: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332B34: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332B38: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332B3C: nop

    // 0x80332B40: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332B44: nop

    // 0x80332B48: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332B4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B50: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332B54: addiu       $t7, $t7, -0x5E88
    ctx->r15 = ADD32(ctx->r15, -0X5E88);
    // 0x80332B58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B5C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332B60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332B64: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80332B68: jal         0x8001C0EC
    // 0x80332B6C: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332B6C: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_0:
L_80332B70:
    // 0x80332B70: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332B74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332B78: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80332B7C: nop

    // 0x80332B80: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332B84: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332B88: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332B8C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332B90: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332B94: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332B98: lwc1        $f4, 0x4168($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80332B9C: nop

    // 0x80332BA0: swc1        $f4, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f4.u32l;
    // 0x80332BA4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332BA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332BAC: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80332BB0: nop

    // 0x80332BB4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332BB8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332BBC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332BC0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332BC4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332BC8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332BCC: lwc1        $f6, 0x4190($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x80332BD0: nop

    // 0x80332BD4: swc1        $f6, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f6.u32l;
    // 0x80332BD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332BDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332BE0: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80332BE4: nop

    // 0x80332BE8: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80332BEC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332BF0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332BF4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332BF8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332BFC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332C00: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80332C04: nop

    // 0x80332C08: swc1        $f8, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f8.u32l;
    // 0x80332C0C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332C10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C14: lh          $t9, 0xC2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XC2);
    // 0x80332C18: nop

    // 0x80332C1C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332C20: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332C24: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332C28: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332C2C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332C30: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332C34: lwc1        $f10, 0x418C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80332C38: nop

    // 0x80332C3C: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
    // 0x80332C40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C48: jal         0x8001B4AC
    // 0x80332C4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80332C4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332C50: beq         $v0, $zero, L_80332C70
    if (ctx->r2 == 0) {
        // 0x80332C54: nop
    
            goto L_80332C70;
    }
    // 0x80332C54: nop

    // 0x80332C58: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332C5C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80332C60: sh          $t8, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r24;
    // 0x80332C64: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332C68: nop

    // 0x80332C6C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80332C70:
    // 0x80332C70: b           L_80332C78
    // 0x80332C74: nop

        goto L_80332C78;
    // 0x80332C74: nop

L_80332C78:
    // 0x80332C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332C7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332C80: jr          $ra
    // 0x80332C84: nop

    return;
    // 0x80332C84: nop

;}
RECOMP_FUNC void func_803311D4_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803311D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803311D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803311DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803311E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803311E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803311E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803311EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803311F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803311FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331200: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331204: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331208: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033120C: nop

    // 0x80331210: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331214: nop

    // 0x80331218: bne         $t1, $zero, L_80331270
    if (ctx->r9 != 0) {
        // 0x8033121C: nop
    
            goto L_80331270;
    }
    // 0x8033121C: nop

    // 0x80331220: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331224: nop

    // 0x80331228: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033122C: nop

    // 0x80331230: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331234: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331238: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033123C: nop

    // 0x80331240: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331244: nop

    // 0x80331248: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033124C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331250: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331254: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033125C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331264: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80331268: jal         0x8001C0EC
    // 0x8033126C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033126C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331270:
    // 0x80331270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331278: jal         0x8001B4AC
    // 0x8033127C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033127C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331280: beq         $v0, $zero, L_80331348
    if (ctx->r2 == 0) {
        // 0x80331284: nop
    
            goto L_80331348;
    }
    // 0x80331284: nop

    // 0x80331288: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033128C: nop

    // 0x80331290: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80331294: nop

    // 0x80331298: bne         $t9, $zero, L_80331308
    if (ctx->r25 != 0) {
        // 0x8033129C: nop
    
            goto L_80331308;
    }
    // 0x8033129C: nop

    // 0x803312A0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803312A4: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x803312A8: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803312AC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803312B0: nop

    // 0x803312B4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x803312B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803312BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803312C0: nop

    // 0x803312C4: swc1        $f4, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f4.u32l;
    // 0x803312C8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803312CC: nop

    // 0x803312D0: lh          $t6, 0x100($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X100);
    // 0x803312D4: nop

    // 0x803312D8: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x803312DC: bne         $at, $zero, L_803312F4
    if (ctx->r1 != 0) {
        // 0x803312E0: nop
    
            goto L_803312F4;
    }
    // 0x803312E0: nop

    // 0x803312E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803312E8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803312EC: b           L_80331300
    // 0x803312F0: sh          $t5, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r13;
        goto L_80331300;
    // 0x803312F0: sh          $t5, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r13;
L_803312F4:
    // 0x803312F4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803312F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803312FC: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
L_80331300:
    // 0x80331300: b           L_80331348
    // 0x80331304: nop

        goto L_80331348;
    // 0x80331304: nop

L_80331308:
    // 0x80331308: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033130C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80331310: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80331314: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331318: nop

    // 0x8033131C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80331320: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331324: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331328: nop

    // 0x8033132C: swc1        $f6, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f6.u32l;
    // 0x80331330: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331334: nop

    // 0x80331338: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x8033133C: nop

    // 0x80331340: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80331344: sh          $t5, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r13;
L_80331348:
    // 0x80331348: b           L_80331350
    // 0x8033134C: nop

        goto L_80331350;
    // 0x8033134C: nop

L_80331350:
    // 0x80331350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331354: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331358: jr          $ra
    // 0x8033135C: nop

    return;
    // 0x8033135C: nop

;}
RECOMP_FUNC void func_80331360_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331360: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331364: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331368: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033136C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331370: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331374: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331378: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033137C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331380: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331384: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331388: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033138C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331390: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331394: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331398: nop

    // 0x8033139C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803313A0: nop

    // 0x803313A4: bne         $t1, $zero, L_803313FC
    if (ctx->r9 != 0) {
        // 0x803313A8: nop
    
            goto L_803313FC;
    }
    // 0x803313A8: nop

    // 0x803313AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803313B0: nop

    // 0x803313B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803313B8: nop

    // 0x803313BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803313C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803313C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803313C8: nop

    // 0x803313CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803313D0: nop

    // 0x803313D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803313D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313DC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803313E0: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x803313E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313E8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803313EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803313F0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x803313F4: jal         0x8001C0EC
    // 0x803313F8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803313F8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_803313FC:
    // 0x803313FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331400: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331404: jal         0x8002A8B4
    // 0x80331408: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331408: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x8033140C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331410: nop

    // 0x80331414: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331418: nop

    // 0x8033141C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331420: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331424: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331428: jal         0x8001B4AC
    // 0x8033142C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033142C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331430: beq         $v0, $zero, L_80331450
    if (ctx->r2 == 0) {
        // 0x80331434: nop
    
            goto L_80331450;
    }
    // 0x80331434: nop

    // 0x80331438: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033143C: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80331440: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331444: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331448: nop

    // 0x8033144C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331450:
    // 0x80331450: b           L_80331458
    // 0x80331454: nop

        goto L_80331458;
    // 0x80331454: nop

L_80331458:
    // 0x80331458: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033145C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331460: jr          $ra
    // 0x80331464: nop

    return;
    // 0x80331464: nop

;}
RECOMP_FUNC void func_80331B80_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331B84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331B88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331B8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331B90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331B94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331B98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331BA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331BA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331BA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331BAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331BB0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331BB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331BB8: nop

    // 0x80331BBC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331BC0: nop

    // 0x80331BC4: bne         $t1, $zero, L_80331CC8
    if (ctx->r9 != 0) {
        // 0x80331BC8: nop
    
            goto L_80331CC8;
    }
    // 0x80331BC8: nop

    // 0x80331BCC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331BD0: nop

    // 0x80331BD4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331BD8: nop

    // 0x80331BDC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331BE0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331BE4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331BE8: nop

    // 0x80331BEC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331BF0: nop

    // 0x80331BF4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331BF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BFC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331C00: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331C04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C08: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331C10: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80331C14: jal         0x8001C0EC
    // 0x80331C18: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331C18: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x80331C1C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331C20: nop

    // 0x80331C24: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331C28: nop

    // 0x80331C2C: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
    // 0x80331C30: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331C34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331C38: lwc1        $f6, 0x18($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X18);
    // 0x80331C3C: nop

    // 0x80331C40: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80331C44: nop

    // 0x80331C48: bc1t        L_80331CC8
    if (c1cs) {
        // 0x80331C4C: nop
    
            goto L_80331CC8;
    }
    // 0x80331C4C: nop

    // 0x80331C50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331C54: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331C58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331C5C: lwc1        $f10, 0x18($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80331C60: nop

    // 0x80331C64: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80331C68: nop

    // 0x80331C6C: bc1f        L_80331CA0
    if (!c1cs) {
        // 0x80331C70: nop
    
            goto L_80331CA0;
    }
    // 0x80331C70: nop

    // 0x80331C74: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331C78: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80331C7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331C80: lwc1        $f18, 0x18($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X18);
    // 0x80331C84: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331C88: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80331C8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331C90: nop

    // 0x80331C94: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80331C98: b           L_80331CC8
    // 0x80331C9C: swc1        $f10, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f10.u32l;
        goto L_80331CC8;
    // 0x80331C9C: swc1        $f10, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f10.u32l;
L_80331CA0:
    // 0x80331CA0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331CA4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80331CA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331CAC: lwc1        $f16, 0x18($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X18);
    // 0x80331CB0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80331CB4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80331CB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331CBC: nop

    // 0x80331CC0: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80331CC4: swc1        $f6, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f6.u32l;
L_80331CC8:
    // 0x80331CC8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331CCC: nop

    // 0x80331CD0: lwc1        $f12, 0x18($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X18);
    // 0x80331CD4: lwc1        $f14, 0xD4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x80331CD8: jal         0x80015538
    // 0x80331CDC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80331CDC: nop

    after_1:
    // 0x80331CE0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331CE4: nop

    // 0x80331CE8: swc1        $f0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f0.u32l;
    // 0x80331CEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331CF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331CF4: jal         0x8001B4AC
    // 0x80331CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331CFC: beq         $v0, $zero, L_80331D2C
    if (ctx->r2 == 0) {
        // 0x80331D00: nop
    
            goto L_80331D2C;
    }
    // 0x80331D00: nop

    // 0x80331D04: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331D08: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331D0C: nop

    // 0x80331D10: swc1        $f10, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f10.u32l;
    // 0x80331D14: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331D18: addiu       $t5, $zero, 0x16
    ctx->r13 = ADD32(0, 0X16);
    // 0x80331D1C: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80331D20: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331D24: nop

    // 0x80331D28: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80331D2C:
    // 0x80331D2C: b           L_80331D34
    // 0x80331D30: nop

        goto L_80331D34;
    // 0x80331D30: nop

L_80331D34:
    // 0x80331D34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331D3C: jr          $ra
    // 0x80331D40: nop

    return;
    // 0x80331D40: nop

;}
RECOMP_FUNC void func_80332C88_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332C88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332C8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332C90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332C94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332C98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332C9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332CA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332CA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332CB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332CB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332CB8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332CBC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332CC0: nop

    // 0x80332CC4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332CC8: nop

    // 0x80332CCC: bne         $t1, $zero, L_80332D44
    if (ctx->r9 != 0) {
        // 0x80332CD0: nop
    
            goto L_80332D44;
    }
    // 0x80332CD0: nop

    // 0x80332CD4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332CD8: nop

    // 0x80332CDC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332CE0: nop

    // 0x80332CE4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332CE8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332CEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332CF0: nop

    // 0x80332CF4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332CF8: nop

    // 0x80332CFC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332D00: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332D04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332D08: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332D0C: nop

    // 0x80332D10: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80332D14: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332D18: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80332D1C: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x80332D20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D24: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80332D28: addiu       $t0, $t0, -0x5E88
    ctx->r8 = ADD32(ctx->r8, -0X5E88);
    // 0x80332D2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D30: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80332D34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D38: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80332D3C: jal         0x8001C0EC
    // 0x80332D40: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332D40: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_0:
L_80332D44:
    // 0x80332D44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D4C: jal         0x80029D8C
    // 0x80332D50: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x80332D50: nop

    after_1:
    // 0x80332D54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D5C: jal         0x8001B4AC
    // 0x80332D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332D64: beq         $v0, $zero, L_80332DB4
    if (ctx->r2 == 0) {
        // 0x80332D68: nop
    
            goto L_80332DB4;
    }
    // 0x80332D68: nop

    // 0x80332D6C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332D70: nop

    // 0x80332D74: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x80332D78: nop

    // 0x80332D7C: bne         $t3, $zero, L_80332D9C
    if (ctx->r11 != 0) {
        // 0x80332D80: nop
    
            goto L_80332D9C;
    }
    // 0x80332D80: nop

    // 0x80332D84: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332D88: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x80332D8C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80332D90: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332D94: b           L_80332DB4
    // 0x80332D98: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_80332DB4;
    // 0x80332D98: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80332D9C:
    // 0x80332D9C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332DA0: nop

    // 0x80332DA4: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x80332DA8: nop

    // 0x80332DAC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80332DB0: sh          $t8, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r24;
L_80332DB4:
    // 0x80332DB4: b           L_80332DBC
    // 0x80332DB8: nop

        goto L_80332DBC;
    // 0x80332DB8: nop

L_80332DBC:
    // 0x80332DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332DC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332DC4: jr          $ra
    // 0x80332DC8: nop

    return;
    // 0x80332DC8: nop

;}
RECOMP_FUNC void func_80330C20_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330C24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330C28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330C2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330C30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330C34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330C38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330C4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330C50: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330C54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330C58: nop

    // 0x80330C5C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330C60: nop

    // 0x80330C64: bne         $t1, $zero, L_80330CBC
    if (ctx->r9 != 0) {
        // 0x80330C68: nop
    
            goto L_80330CBC;
    }
    // 0x80330C68: nop

    // 0x80330C6C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330C70: nop

    // 0x80330C74: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330C78: nop

    // 0x80330C7C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330C80: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330C84: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330C88: nop

    // 0x80330C8C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330C90: nop

    // 0x80330C94: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330C98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C9C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330CA0: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330CA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CA8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330CAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330CB0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80330CB4: jal         0x8001C0EC
    // 0x80330CB8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330CB8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80330CBC:
    // 0x80330CBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CC4: jal         0x8002A8B4
    // 0x80330CC8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330CC8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80330CCC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330CD0: nop

    // 0x80330CD4: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330CD8: nop

    // 0x80330CDC: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330CE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CE8: jal         0x8001B4AC
    // 0x80330CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330CF0: beq         $v0, $zero, L_80330D10
    if (ctx->r2 == 0) {
        // 0x80330CF4: nop
    
            goto L_80330D10;
    }
    // 0x80330CF4: nop

    // 0x80330CF8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330CFC: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80330D00: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330D04: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330D08: nop

    // 0x80330D0C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330D10:
    // 0x80330D10: b           L_80330D18
    // 0x80330D14: nop

        goto L_80330D18;
    // 0x80330D14: nop

L_80330D18:
    // 0x80330D18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330D20: jr          $ra
    // 0x80330D24: nop

    return;
    // 0x80330D24: nop

;}
RECOMP_FUNC void func_80332164_unk_bin_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332164: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332168: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033216C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332170: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332174: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332178: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033217C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332180: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332184: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332188: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033218C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332190: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332194: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332198: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033219C: nop

    // 0x803321A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803321A4: nop

    // 0x803321A8: bne         $t1, $zero, L_803321F8
    if (ctx->r9 != 0) {
        // 0x803321AC: nop
    
            goto L_803321F8;
    }
    // 0x803321AC: nop

    // 0x803321B0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803321B4: nop

    // 0x803321B8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803321BC: nop

    // 0x803321C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803321C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803321C8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803321CC: nop

    // 0x803321D0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803321D4: nop

    // 0x803321D8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803321DC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803321E0: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x803321E4: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x803321E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803321EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803321F0: jal         0x80069E60
    // 0x803321F4: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x803321F4: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_0:
L_803321F8:
    // 0x803321F8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803321FC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80332200: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80332204: nop

    // 0x80332208: bne         $t0, $at, L_80332270
    if (ctx->r8 != ctx->r1) {
        // 0x8033220C: nop
    
            goto L_80332270;
    }
    // 0x8033220C: nop

    // 0x80332210: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332214: nop

    // 0x80332218: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x8033221C: nop

    // 0x80332220: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80332224: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
    // 0x80332228: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033222C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332234: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x80332238: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033223C: jal         0x800175F0
    // 0x80332240: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80332240: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80332244: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332248: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x8033224C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332250: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80332254: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80332258: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x8033225C: lui         $a3, 0x40E0
    ctx->r7 = S32(0X40E0 << 16);
    // 0x80332260: jal         0x8007F070
    // 0x80332264: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007F070(rdram, ctx);
        goto after_2;
    // 0x80332264: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x80332268: b           L_80332304
    // 0x8033226C: nop

        goto L_80332304;
    // 0x8033226C: nop

L_80332270:
    // 0x80332270: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332274: nop

    // 0x80332278: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x8033227C: nop

    // 0x80332280: bne         $t5, $zero, L_803322EC
    if (ctx->r13 != 0) {
        // 0x80332284: nop
    
            goto L_803322EC;
    }
    // 0x80332284: nop

    // 0x80332288: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033228C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332290: jal         0x8001BB34
    // 0x80332294: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80332294: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80332298: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033229C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803322A0: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x803322A4: nop

    // 0x803322A8: bne         $t8, $at, L_803322E4
    if (ctx->r24 != ctx->r1) {
        // 0x803322AC: nop
    
            goto L_803322E4;
    }
    // 0x803322AC: nop

    // 0x803322B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803322B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803322B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803322BC: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x803322C0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803322C4: jal         0x800175F0
    // 0x803322C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x803322C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x803322CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803322D0: nop

    // 0x803322D4: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x803322D8: nop

    // 0x803322DC: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x803322E0: sb          $t3, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r11;
L_803322E4:
    // 0x803322E4: b           L_80332304
    // 0x803322E8: nop

        goto L_80332304;
    // 0x803322E8: nop

L_803322EC:
    // 0x803322EC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803322F0: nop

    // 0x803322F4: lh          $t1, 0xA6($t4)
    ctx->r9 = MEM_H(ctx->r12, 0XA6);
    // 0x803322F8: nop

    // 0x803322FC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80332300: sh          $t2, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r10;
L_80332304:
    // 0x80332304: b           L_8033230C
    // 0x80332308: nop

        goto L_8033230C;
    // 0x80332308: nop

L_8033230C:
    // 0x8033230C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332310: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332314: jr          $ra
    // 0x80332318: nop

    return;
    // 0x80332318: nop

;}
RECOMP_FUNC void func_80333E90_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333E90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333E98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333E9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333EA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333EA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333EA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333EAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333EB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333EB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333EB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333EBC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333EC0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80333EC4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80333EC8: nop

    // 0x80333ECC: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80333ED0: nop

    // 0x80333ED4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80333ED8: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x80333EDC: beq         $at, $zero, L_80333F50
    if (ctx->r1 == 0) {
        // 0x80333EE0: nop
    
            goto L_80333F50;
    }
    // 0x80333EE0: nop

    // 0x80333EE4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333EE8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333EEC: addu        $at, $at, $t2
    gpr jr_addend_80333EF8 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333EF0: lw          $t2, 0x4C44($at)
    ctx->r10 = ADD32(ctx->r1, 0X4C44);
    // 0x80333EF4: nop

    // 0x80333EF8: jr          $t2
    // 0x80333EFC: nop

    switch (jr_addend_80333EF8 >> 2) {
        case 0: goto L_80333F00; break;
        case 1: goto L_80333F10; break;
        case 2: goto L_80333F20; break;
        case 3: goto L_80333F30; break;
        case 4: goto L_80333F40; break;
        default: switch_error(__func__, 0x80333EF8, 0x80334C44);
    }
    // 0x80333EFC: nop

L_80333F00:
    // 0x80333F00: jal         0x803337D4
    // 0x80333F04: nop

    func_803337D4_unk_bin_22(rdram, ctx);
        goto after_0;
    // 0x80333F04: nop

    after_0:
    // 0x80333F08: b           L_80333F58
    // 0x80333F0C: nop

        goto L_80333F58;
    // 0x80333F0C: nop

L_80333F10:
    // 0x80333F10: jal         0x8033396C
    // 0x80333F14: nop

    func_8033396C_unk_bin_22(rdram, ctx);
        goto after_1;
    // 0x80333F14: nop

    after_1:
    // 0x80333F18: b           L_80333F58
    // 0x80333F1C: nop

        goto L_80333F58;
    // 0x80333F1C: nop

L_80333F20:
    // 0x80333F20: jal         0x80333AF8
    // 0x80333F24: nop

    func_80333AF8_unk_bin_22(rdram, ctx);
        goto after_2;
    // 0x80333F24: nop

    after_2:
    // 0x80333F28: b           L_80333F58
    // 0x80333F2C: nop

        goto L_80333F58;
    // 0x80333F2C: nop

L_80333F30:
    // 0x80333F30: jal         0x80333C84
    // 0x80333F34: nop

    func_80333C84_unk_bin_22(rdram, ctx);
        goto after_3;
    // 0x80333F34: nop

    after_3:
    // 0x80333F38: b           L_80333F58
    // 0x80333F3C: nop

        goto L_80333F58;
    // 0x80333F3C: nop

L_80333F40:
    // 0x80333F40: jal         0x80333E08
    // 0x80333F44: nop

    func_80333E08_unk_bin_22(rdram, ctx);
        goto after_4;
    // 0x80333F44: nop

    after_4:
    // 0x80333F48: b           L_80333F58
    // 0x80333F4C: nop

        goto L_80333F58;
    // 0x80333F4C: nop

L_80333F50:
    // 0x80333F50: b           L_80333F58
    // 0x80333F54: nop

        goto L_80333F58;
    // 0x80333F54: nop

L_80333F58:
    // 0x80333F58: b           L_80333F60
    // 0x80333F5C: nop

        goto L_80333F60;
    // 0x80333F5C: nop

L_80333F60:
    // 0x80333F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333F64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80333F68: jr          $ra
    // 0x80333F6C: nop

    return;
    // 0x80333F6C: nop

;}
RECOMP_FUNC void func_80334204_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80334208: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033420C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334210: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334214: jal         0x8002B0E4
    // 0x80334218: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80334218: nop

    after_0:
    // 0x8033421C: b           L_80334224
    // 0x80334220: nop

        goto L_80334224;
    // 0x80334220: nop

L_80334224:
    // 0x80334224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033422C: jr          $ra
    // 0x80334230: nop

    return;
    // 0x80334230: nop

;}
RECOMP_FUNC void func_8033110C_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033110C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331110: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331114: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331118: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033111C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331120: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331124: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331128: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033112C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331130: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331134: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331138: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033113C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331140: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331144: nop

    // 0x80331148: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033114C: nop

    // 0x80331150: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80331154: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331158: nop

    // 0x8033115C: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80331160: nop

    // 0x80331164: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80331168: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033116C: nop

    // 0x80331170: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80331174: nop

    // 0x80331178: bne         $t5, $zero, L_80331280
    if (ctx->r13 != 0) {
        // 0x8033117C: nop
    
            goto L_80331280;
    }
    // 0x8033117C: nop

    // 0x80331180: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331184: nop

    // 0x80331188: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033118C: nop

    // 0x80331190: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331194: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80331198: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033119C: nop

    // 0x803311A0: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x803311A4: nop

    // 0x803311A8: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x803311AC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803311B0: nop

    // 0x803311B4: sh          $zero, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = 0;
    // 0x803311B8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803311BC: lwc1        $f4, 0x4B98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4B98);
    // 0x803311C0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803311C4: nop

    // 0x803311C8: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x803311CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803311D0: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x803311D4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803311D8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x803311DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803311E0: jal         0x8001ABF4
    // 0x803311E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x803311E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803311E8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803311EC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803311F0: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803311F4: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x803311F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803311FC: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80331200: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80331204: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331208: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8033120C: jal         0x80027464
    // 0x80331210: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80331210: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80331214: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331218: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033121C: nop

    // 0x80331220: lh          $t5, 0xC0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XC0);
    // 0x80331224: nop

    // 0x80331228: beq         $t5, $zero, L_8033125C
    if (ctx->r13 == 0) {
        // 0x8033122C: nop
    
            goto L_8033125C;
    }
    // 0x8033122C: nop

    // 0x80331230: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331234: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331238: lh          $t6, 0xC0($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XC0);
    // 0x8033123C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80331240: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80331244: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80331248: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033124C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80331250: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331254: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331258: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_8033125C:
    // 0x8033125C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331260: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331264: lh          $t1, 0x108($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X108);
    // 0x80331268: nop

    // 0x8033126C: bne         $t1, $at, L_80331280
    if (ctx->r9 != ctx->r1) {
        // 0x80331270: nop
    
            goto L_80331280;
    }
    // 0x80331270: nop

    // 0x80331274: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331278: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033127C: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
L_80331280:
    // 0x80331280: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331284: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80331288: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x8033128C: nop

    // 0x80331290: bne         $t5, $at, L_803312E4
    if (ctx->r13 != ctx->r1) {
        // 0x80331294: nop
    
            goto L_803312E4;
    }
    // 0x80331294: nop

    // 0x80331298: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033129C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803312A0: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803312A4: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x803312A8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803312AC: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803312B0: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x803312B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803312B8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x803312BC: jal         0x80027464
    // 0x803312C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x803312C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x803312C4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803312C8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803312CC: nop

    // 0x803312D0: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x803312D4: nop

    // 0x803312D8: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x803312DC: b           L_80331580
    // 0x803312E0: sh          $t0, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r8;
        goto L_80331580;
    // 0x803312E0: sh          $t0, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r8;
L_803312E4:
    // 0x803312E4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803312E8: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x803312EC: lh          $t1, 0xA8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA8);
    // 0x803312F0: nop

    // 0x803312F4: bne         $t1, $at, L_80331348
    if (ctx->r9 != ctx->r1) {
        // 0x803312F8: nop
    
            goto L_80331348;
    }
    // 0x803312F8: nop

    // 0x803312FC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331300: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331304: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80331308: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x8033130C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80331310: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80331314: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80331318: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033131C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80331320: jal         0x80027464
    // 0x80331324: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80331324: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80331328: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033132C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331330: nop

    // 0x80331334: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80331338: nop

    // 0x8033133C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80331340: b           L_80331580
    // 0x80331344: sh          $t5, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r13;
        goto L_80331580;
    // 0x80331344: sh          $t5, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r13;
L_80331348:
    // 0x80331348: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033134C: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80331350: lh          $t7, 0xA8($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XA8);
    // 0x80331354: nop

    // 0x80331358: bne         $t7, $at, L_803313AC
    if (ctx->r15 != ctx->r1) {
        // 0x8033135C: nop
    
            goto L_803313AC;
    }
    // 0x8033135C: nop

    // 0x80331360: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331364: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331368: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033136C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80331370: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331374: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80331378: addiu       $a1, $a1, 0x4B24
    ctx->r5 = ADD32(ctx->r5, 0X4B24);
    // 0x8033137C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331380: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80331384: jal         0x80027464
    // 0x80331388: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80331388: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x8033138C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331390: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331394: nop

    // 0x80331398: lh          $t9, 0xA8($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XA8);
    // 0x8033139C: nop

    // 0x803313A0: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x803313A4: b           L_80331580
    // 0x803313A8: sh          $t1, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r9;
        goto L_80331580;
    // 0x803313A8: sh          $t1, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r9;
L_803313AC:
    // 0x803313AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803313B0: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x803313B4: lh          $t4, 0xA8($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XA8);
    // 0x803313B8: nop

    // 0x803313BC: bne         $t4, $at, L_80331440
    if (ctx->r12 != ctx->r1) {
        // 0x803313C0: nop
    
            goto L_80331440;
    }
    // 0x803313C0: nop

    // 0x803313C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803313C8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803313CC: lwc1        $f10, 0x8($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803313D0: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x803313D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803313D8: lwc1        $f16, 0x1C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x803313DC: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x803313E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803313E4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x803313E8: jal         0x80027464
    // 0x803313EC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x803313EC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x803313F0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803313F4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803313F8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803313FC: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80331400: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80331404: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80331408: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8033140C: addiu       $a1, $a1, 0x4B3C
    ctx->r5 = ADD32(ctx->r5, 0X4B3C);
    // 0x80331410: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331414: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80331418: jal         0x80027464
    // 0x8033141C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x8033141C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80331420: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331424: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331428: nop

    // 0x8033142C: lh          $t7, 0xA8($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XA8);
    // 0x80331430: nop

    // 0x80331434: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x80331438: b           L_80331580
    // 0x8033143C: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
        goto L_80331580;
    // 0x8033143C: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
L_80331440:
    // 0x80331440: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331444: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x80331448: lh          $t1, 0xA8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA8);
    // 0x8033144C: nop

    // 0x80331450: bne         $t1, $at, L_803314D4
    if (ctx->r9 != ctx->r1) {
        // 0x80331454: nop
    
            goto L_803314D4;
    }
    // 0x80331454: nop

    // 0x80331458: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033145C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331460: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80331464: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80331468: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033146C: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80331470: addiu       $a1, $a1, 0x4B24
    ctx->r5 = ADD32(ctx->r5, 0X4B24);
    // 0x80331474: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331478: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8033147C: jal         0x80027464
    // 0x80331480: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80331480: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x80331484: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331488: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033148C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331490: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80331494: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x80331498: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033149C: lwc1        $f16, 0x1C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x803314A0: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x803314A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803314A8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x803314AC: jal         0x80027464
    // 0x803314B0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x803314B0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x803314B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803314B8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803314BC: nop

    // 0x803314C0: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x803314C4: nop

    // 0x803314C8: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x803314CC: b           L_80331580
    // 0x803314D0: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
        goto L_80331580;
    // 0x803314D0: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
L_803314D4:
    // 0x803314D4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803314D8: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x803314DC: lh          $t0, 0xA8($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XA8);
    // 0x803314E0: nop

    // 0x803314E4: bne         $t0, $at, L_80331568
    if (ctx->r8 != ctx->r1) {
        // 0x803314E8: nop
    
            goto L_80331568;
    }
    // 0x803314E8: nop

    // 0x803314EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803314F0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803314F4: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803314F8: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x803314FC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80331500: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331504: addiu       $a1, $a1, 0x4B24
    ctx->r5 = ADD32(ctx->r5, 0X4B24);
    // 0x80331508: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033150C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80331510: jal         0x80027464
    // 0x80331514: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x80331514: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x80331518: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033151C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331520: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331524: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331528: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x8033152C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331530: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80331534: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80331538: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033153C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80331540: jal         0x80027464
    // 0x80331544: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x80331544: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x80331548: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033154C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331550: nop

    // 0x80331554: lh          $t6, 0xA8($t1)
    ctx->r14 = MEM_H(ctx->r9, 0XA8);
    // 0x80331558: nop

    // 0x8033155C: addiu       $t2, $t6, 0x1
    ctx->r10 = ADD32(ctx->r14, 0X1);
    // 0x80331560: b           L_80331580
    // 0x80331564: sh          $t2, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r10;
        goto L_80331580;
    // 0x80331564: sh          $t2, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r10;
L_80331568:
    // 0x80331568: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033156C: nop

    // 0x80331570: lh          $t3, 0xA8($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XA8);
    // 0x80331574: nop

    // 0x80331578: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033157C: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
L_80331580:
    // 0x80331580: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331584: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x80331588: lh          $t0, 0xA8($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XA8);
    // 0x8033158C: nop

    // 0x80331590: bne         $t0, $at, L_80331604
    if (ctx->r8 != ctx->r1) {
        // 0x80331594: nop
    
            goto L_80331604;
    }
    // 0x80331594: nop

    // 0x80331598: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033159C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803315A0: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803315A4: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x803315A8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803315AC: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803315B0: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x803315B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803315B8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x803315BC: jal         0x80027464
    // 0x803315C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x803315C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x803315C4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803315C8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803315CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803315D0: nop

    // 0x803315D4: swc1        $f18, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f18.u32l;
    // 0x803315D8: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x803315DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803315E0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803315E4: nop

    // 0x803315E8: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x803315EC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803315F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803315F4: sh          $t2, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r10;
    // 0x803315F8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803315FC: nop

    // 0x80331600: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80331604:
    // 0x80331604: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331608: nop

    // 0x8033160C: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x80331610: nop

    // 0x80331614: slti        $at, $t5, 0x28
    ctx->r1 = SIGNED(ctx->r13) < 0X28 ? 1 : 0;
    // 0x80331618: bne         $at, $zero, L_80331644
    if (ctx->r1 != 0) {
        // 0x8033161C: nop
    
            goto L_80331644;
    }
    // 0x8033161C: nop

    // 0x80331620: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331624: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331628: lh          $t0, 0x108($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X108);
    // 0x8033162C: nop

    // 0x80331630: bne         $t0, $at, L_80331644
    if (ctx->r8 != ctx->r1) {
        // 0x80331634: nop
    
            goto L_80331644;
    }
    // 0x80331634: nop

    // 0x80331638: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033163C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80331640: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_80331644:
    // 0x80331644: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033164C: jal         0x803332F8
    // 0x80331650: nop

    func_803332F8_unk_bin_22(rdram, ctx);
        goto after_12;
    // 0x80331650: nop

    after_12:
    // 0x80331654: b           L_8033165C
    // 0x80331658: nop

        goto L_8033165C;
    // 0x80331658: nop

L_8033165C:
    // 0x8033165C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331660: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331664: jr          $ra
    // 0x80331668: nop

    return;
    // 0x80331668: nop

;}
RECOMP_FUNC void func_80333AF8_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333AF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333AFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333B00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333B04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333B08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333B0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333B10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333B14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333B18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333B1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333B20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333B24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333B28: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333B2C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333B30: nop

    // 0x80333B34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333B38: nop

    // 0x80333B3C: bne         $t1, $zero, L_80333B94
    if (ctx->r9 != 0) {
        // 0x80333B40: nop
    
            goto L_80333B94;
    }
    // 0x80333B40: nop

    // 0x80333B44: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333B48: nop

    // 0x80333B4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333B50: nop

    // 0x80333B54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333B58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333B5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333B60: nop

    // 0x80333B64: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333B68: nop

    // 0x80333B6C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333B70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B74: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333B78: addiu       $t7, $t7, -0x577C
    ctx->r15 = ADD32(ctx->r15, -0X577C);
    // 0x80333B7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333B84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80333B88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80333B8C: jal         0x8001C0EC
    // 0x80333B90: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333B90: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    after_0:
L_80333B94:
    // 0x80333B94: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333B98: nop

    // 0x80333B9C: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x80333BA0: nop

    // 0x80333BA4: bne         $t9, $zero, L_80333BDC
    if (ctx->r25 != 0) {
        // 0x80333BA8: nop
    
            goto L_80333BDC;
    }
    // 0x80333BA8: nop

    // 0x80333BAC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333BB0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80333BB4: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
    // 0x80333BB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333BBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333BC4: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x80333BC8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333BCC: jal         0x800175F0
    // 0x80333BD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80333BD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80333BD4: b           L_80333BF4
    // 0x80333BD8: nop

        goto L_80333BF4;
    // 0x80333BD8: nop

L_80333BDC:
    // 0x80333BDC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333BE0: nop

    // 0x80333BE4: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x80333BE8: nop

    // 0x80333BEC: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80333BF0: sh          $t2, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r10;
L_80333BF4:
    // 0x80333BF4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333BF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333BFC: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x80333C00: nop

    // 0x80333C04: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333C08: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333C0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333C10: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333C14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333C18: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333C1C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333C20: nop

    // 0x80333C24: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80333C28: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333C2C: nop

    // 0x80333C30: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80333C34: nop

    // 0x80333C38: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x80333C3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C44: jal         0x8001B4AC
    // 0x80333C48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80333C48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80333C4C: beq         $v0, $zero, L_80333C6C
    if (ctx->r2 == 0) {
        // 0x80333C50: nop
    
            goto L_80333C6C;
    }
    // 0x80333C50: nop

    // 0x80333C54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333C58: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80333C5C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80333C60: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333C64: nop

    // 0x80333C68: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80333C6C:
    // 0x80333C6C: b           L_80333C74
    // 0x80333C70: nop

        goto L_80333C74;
    // 0x80333C70: nop

L_80333C74:
    // 0x80333C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333C7C: jr          $ra
    // 0x80333C80: nop

    return;
    // 0x80333C80: nop

;}
RECOMP_FUNC void func_80334814_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334814: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033481C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334820: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334824: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334828: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033482C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334830: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334834: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334838: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033483C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334840: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334844: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334848: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033484C: nop

    // 0x80334850: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334854: nop

    // 0x80334858: bne         $t1, $zero, L_803348B0
    if (ctx->r9 != 0) {
        // 0x8033485C: nop
    
            goto L_803348B0;
    }
    // 0x8033485C: nop

    // 0x80334860: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334864: nop

    // 0x80334868: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033486C: nop

    // 0x80334870: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334874: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334878: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033487C: nop

    // 0x80334880: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334884: nop

    // 0x80334888: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033488C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334890: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334894: addiu       $t7, $t7, -0x52D0
    ctx->r15 = ADD32(ctx->r15, -0X52D0);
    // 0x80334898: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033489C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803348A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803348A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803348A8: jal         0x8001C0EC
    // 0x803348AC: addiu       $a3, $zero, 0x15E
    ctx->r7 = ADD32(0, 0X15E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803348AC: addiu       $a3, $zero, 0x15E
    ctx->r7 = ADD32(0, 0X15E);
    after_0:
L_803348B0:
    // 0x803348B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803348B4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803348B8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803348BC: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803348C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803348C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803348C8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803348CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803348D0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803348D4: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x803348D8: lwc1        $f4, 0x24($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X24);
    // 0x803348DC: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803348E0: nop

    // 0x803348E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803348E8: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x803348EC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803348F0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803348F4: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x803348F8: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x803348FC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80334900: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334904: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334908: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033490C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334910: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x80334914: lwc1        $f10, 0x28($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X28);
    // 0x80334918: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8033491C: nop

    // 0x80334920: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80334924: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
    // 0x80334928: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033492C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80334930: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80334934: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80334938: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033493C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334940: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334944: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334948: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033494C: addu        $t8, $t1, $t3
    ctx->r24 = ADD32(ctx->r9, ctx->r11);
    // 0x80334950: lwc1        $f4, 0x2C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80334954: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80334958: nop

    // 0x8033495C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334960: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
    // 0x80334964: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334968: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033496C: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80334970: nop

    // 0x80334974: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80334978: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033497C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334980: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80334984: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334988: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033498C: lwc1        $f10, 0x416C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80334990: nop

    // 0x80334994: swc1        $f10, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f10.u32l;
    // 0x80334998: b           L_803349A0
    // 0x8033499C: nop

        goto L_803349A0;
    // 0x8033499C: nop

L_803349A0:
    // 0x803349A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803349A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803349A8: jr          $ra
    // 0x803349AC: nop

    return;
    // 0x803349AC: nop

;}
RECOMP_FUNC void func_803340D8_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803340D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803340DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803340E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803340E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803340E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803340EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803340F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803340F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803340F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803340FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334100: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334104: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334108: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033410C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334110: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334114: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80334118: nop

    // 0x8033411C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80334120: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334124: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334128: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033412C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334130: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334134: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x80334138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033413C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334140: jal         0x8002B114
    // 0x80334144: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x80334144: nop

    after_0:
    // 0x80334148: b           L_80334150
    // 0x8033414C: nop

        goto L_80334150;
    // 0x8033414C: nop

L_80334150:
    // 0x80334150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334158: jr          $ra
    // 0x8033415C: nop

    return;
    // 0x8033415C: nop

;}
RECOMP_FUNC void func_80333F70_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333F70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333F74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333F78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333F7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333F80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333F84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333F88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333F8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333F90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333F94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333F98: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333F9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333FA0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333FA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333FA8: nop

    // 0x80333FAC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333FB0: nop

    // 0x80333FB4: bne         $t1, $zero, L_8033400C
    if (ctx->r9 != 0) {
        // 0x80333FB8: nop
    
            goto L_8033400C;
    }
    // 0x80333FB8: nop

    // 0x80333FBC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333FC0: nop

    // 0x80333FC4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333FC8: nop

    // 0x80333FCC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333FD0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333FD4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333FD8: nop

    // 0x80333FDC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333FE0: nop

    // 0x80333FE4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333FE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333FEC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333FF0: addiu       $t7, $t7, -0x5780
    ctx->r15 = ADD32(ctx->r15, -0X5780);
    // 0x80333FF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333FF8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333FFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80334000: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334004: jal         0x8001C0EC
    // 0x80334008: addiu       $a3, $zero, 0xE4
    ctx->r7 = ADD32(0, 0XE4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334008: addiu       $a3, $zero, 0xE4
    ctx->r7 = ADD32(0, 0XE4);
    after_0:
L_8033400C:
    // 0x8033400C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334010: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80334014: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80334018: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033401C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80334020: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334024: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334028: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033402C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334030: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80334034: lwc1        $f4, 0x24($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X24);
    // 0x80334038: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8033403C: nop

    // 0x80334040: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334044: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x80334048: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033404C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80334050: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x80334054: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80334058: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8033405C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334060: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334064: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334068: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033406C: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x80334070: lwc1        $f10, 0x28($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X28);
    // 0x80334074: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80334078: nop

    // 0x8033407C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80334080: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
    // 0x80334084: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334088: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033408C: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80334090: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80334094: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334098: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033409C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803340A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803340A4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803340A8: addu        $t8, $t1, $t3
    ctx->r24 = ADD32(ctx->r9, ctx->r11);
    // 0x803340AC: lwc1        $f4, 0x2C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x803340B0: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803340B4: nop

    // 0x803340B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803340BC: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
    // 0x803340C0: b           L_803340C8
    // 0x803340C4: nop

        goto L_803340C8;
    // 0x803340C4: nop

L_803340C8:
    // 0x803340C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803340CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803340D0: jr          $ra
    // 0x803340D4: nop

    return;
    // 0x803340D4: nop

;}
RECOMP_FUNC void func_80334658_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334658: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033465C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334660: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334664: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334668: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033466C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334670: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334674: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334678: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033467C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334680: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334684: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334688: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033468C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334690: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334694: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334698: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8033469C: nop

    // 0x803346A0: beq         $s0, $at, L_803346BC
    if (ctx->r16 == ctx->r1) {
        // 0x803346A4: nop
    
            goto L_803346BC;
    }
    // 0x803346A4: nop

    // 0x803346A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803346AC: beq         $s0, $at, L_803346CC
    if (ctx->r16 == ctx->r1) {
        // 0x803346B0: nop
    
            goto L_803346CC;
    }
    // 0x803346B0: nop

    // 0x803346B4: b           L_803346DC
    // 0x803346B8: nop

        goto L_803346DC;
    // 0x803346B8: nop

L_803346BC:
    // 0x803346BC: jal         0x80334234
    // 0x803346C0: nop

    func_80334234_unk_bin_22(rdram, ctx);
        goto after_0;
    // 0x803346C0: nop

    after_0:
    // 0x803346C4: b           L_803346E4
    // 0x803346C8: nop

        goto L_803346E4;
    // 0x803346C8: nop

L_803346CC:
    // 0x803346CC: jal         0x80334490
    // 0x803346D0: nop

    func_80334490_unk_bin_22(rdram, ctx);
        goto after_1;
    // 0x803346D0: nop

    after_1:
    // 0x803346D4: b           L_803346E4
    // 0x803346D8: nop

        goto L_803346E4;
    // 0x803346D8: nop

L_803346DC:
    // 0x803346DC: b           L_803346E4
    // 0x803346E0: nop

        goto L_803346E4;
    // 0x803346E0: nop

L_803346E4:
    // 0x803346E4: b           L_803346EC
    // 0x803346E8: nop

        goto L_803346EC;
    // 0x803346E8: nop

L_803346EC:
    // 0x803346EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803346F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803346F4: jr          $ra
    // 0x803346F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803346F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803337D4_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803337D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803337D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803337DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803337E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803337E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803337E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803337EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803337F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803337F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803337F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803337FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333800: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333804: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333808: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033380C: nop

    // 0x80333810: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333814: nop

    // 0x80333818: bne         $t1, $zero, L_8033387C
    if (ctx->r9 != 0) {
        // 0x8033381C: nop
    
            goto L_8033387C;
    }
    // 0x8033381C: nop

    // 0x80333820: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333824: nop

    // 0x80333828: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033382C: nop

    // 0x80333830: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333834: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333838: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033383C: nop

    // 0x80333840: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333844: nop

    // 0x80333848: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033384C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333850: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333854: addiu       $t7, $t7, -0x577C
    ctx->r15 = ADD32(ctx->r15, -0X577C);
    // 0x80333858: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033385C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333860: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80333864: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333868: jal         0x8001C0EC
    // 0x8033386C: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033386C: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    after_0:
    // 0x80333870: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333874: nop

    // 0x80333878: sh          $zero, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = 0;
L_8033387C:
    // 0x8033387C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333880: nop

    // 0x80333884: lh          $t0, 0xB6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB6);
    // 0x80333888: nop

    // 0x8033388C: bne         $t0, $zero, L_803338C4
    if (ctx->r8 != 0) {
        // 0x80333890: nop
    
            goto L_803338C4;
    }
    // 0x80333890: nop

    // 0x80333894: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333898: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8033389C: sh          $t1, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r9;
    // 0x803338A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803338A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803338A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803338AC: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x803338B0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803338B4: jal         0x800175F0
    // 0x803338B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803338B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803338BC: b           L_803338DC
    // 0x803338C0: nop

        goto L_803338DC;
    // 0x803338C0: nop

L_803338C4:
    // 0x803338C4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803338C8: nop

    // 0x803338CC: lh          $t2, 0xB6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB6);
    // 0x803338D0: nop

    // 0x803338D4: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x803338D8: sh          $t6, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r14;
L_803338DC:
    // 0x803338DC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803338E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803338E4: lh          $t7, 0xC2($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XC2);
    // 0x803338E8: nop

    // 0x803338EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803338F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803338F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803338F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803338FC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333900: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333904: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333908: nop

    // 0x8033390C: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
    // 0x80333910: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333914: nop

    // 0x80333918: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033391C: nop

    // 0x80333920: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
    // 0x80333924: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333928: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033392C: jal         0x8001B4AC
    // 0x80333930: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80333930: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80333934: beq         $v0, $zero, L_80333954
    if (ctx->r2 == 0) {
        // 0x80333938: nop
    
            goto L_80333954;
    }
    // 0x80333938: nop

    // 0x8033393C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333940: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80333944: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80333948: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033394C: nop

    // 0x80333950: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80333954:
    // 0x80333954: b           L_8033395C
    // 0x80333958: nop

        goto L_8033395C;
    // 0x80333958: nop

L_8033395C:
    // 0x8033395C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333960: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333964: jr          $ra
    // 0x80333968: nop

    return;
    // 0x80333968: nop

;}
RECOMP_FUNC void func_8033294C_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033294C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332950: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332954: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332958: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033295C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332960: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332964: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332968: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033296C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332970: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332974: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332978: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033297C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332980: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332984: nop

    // 0x80332988: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033298C: nop

    // 0x80332990: bne         $t1, $zero, L_803329E0
    if (ctx->r9 != 0) {
        // 0x80332994: nop
    
            goto L_803329E0;
    }
    // 0x80332994: nop

    // 0x80332998: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033299C: nop

    // 0x803329A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803329A4: nop

    // 0x803329A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803329AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803329B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803329B4: nop

    // 0x803329B8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803329BC: nop

    // 0x803329C0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803329C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803329C8: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x803329CC: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x803329D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803329D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803329D8: jal         0x80069E60
    // 0x803329DC: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x803329DC: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_0:
L_803329E0:
    // 0x803329E0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803329E4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x803329E8: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803329EC: nop

    // 0x803329F0: bne         $t0, $at, L_80332A34
    if (ctx->r8 != ctx->r1) {
        // 0x803329F4: nop
    
            goto L_80332A34;
    }
    // 0x803329F4: nop

    // 0x803329F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803329FC: nop

    // 0x80332A00: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x80332A04: nop

    // 0x80332A08: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80332A0C: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
    // 0x80332A10: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332A14: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x80332A18: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80332A1C: lwc1        $f14, 0x4($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80332A20: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x80332A24: jal         0x8007F070
    // 0x80332A28: nop

    func_8007F070(rdram, ctx);
        goto after_1;
    // 0x80332A28: nop

    after_1:
    // 0x80332A2C: b           L_80332AF0
    // 0x80332A30: nop

        goto L_80332AF0;
    // 0x80332A30: nop

L_80332A34:
    // 0x80332A34: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332A38: nop

    // 0x80332A3C: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80332A40: nop

    // 0x80332A44: bne         $t5, $zero, L_80332AD8
    if (ctx->r13 != 0) {
        // 0x80332A48: nop
    
            goto L_80332AD8;
    }
    // 0x80332A48: nop

    // 0x80332A4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A54: jal         0x8001BB34
    // 0x80332A58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80332A58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80332A5C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332A64: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80332A68: jal         0x8001BB34
    // 0x80332A6C: nop

    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80332A6C: nop

    after_3:
    // 0x80332A70: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332A74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332A78: lh          $a0, 0xEA($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XEA);
    // 0x80332A7C: jal         0x8001BB34
    // 0x80332A80: nop

    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80332A80: nop

    after_4:
    // 0x80332A84: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332A88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332A8C: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80332A90: nop

    // 0x80332A94: bne         $t0, $at, L_80332AD0
    if (ctx->r8 != ctx->r1) {
        // 0x80332A98: nop
    
            goto L_80332AD0;
    }
    // 0x80332A98: nop

    // 0x80332A9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332AA8: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x80332AAC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332AB0: jal         0x800175F0
    // 0x80332AB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x80332AB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80332AB8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332ABC: nop

    // 0x80332AC0: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80332AC4: nop

    // 0x80332AC8: addiu       $t1, $t4, 0x1
    ctx->r9 = ADD32(ctx->r12, 0X1);
    // 0x80332ACC: sb          $t1, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r9;
L_80332AD0:
    // 0x80332AD0: b           L_80332AF0
    // 0x80332AD4: nop

        goto L_80332AF0;
    // 0x80332AD4: nop

L_80332AD8:
    // 0x80332AD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332ADC: nop

    // 0x80332AE0: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80332AE4: nop

    // 0x80332AE8: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80332AEC: sh          $t5, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r13;
L_80332AF0:
    // 0x80332AF0: b           L_80332AF8
    // 0x80332AF4: nop

        goto L_80332AF8;
    // 0x80332AF4: nop

L_80332AF8:
    // 0x80332AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332B00: jr          $ra
    // 0x80332B04: nop

    return;
    // 0x80332B04: nop

;}
