#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800E3DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3DD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E3DDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E3DE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E3DE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E3DE8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E3DEC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E3DF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3DF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3DF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E3DFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3E00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3E04: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E3E08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E3E0C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E3E10: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E3E14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E3E18: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x800E3E1C: nop

    // 0x800E3E20: beq         $s0, $at, L_800E3E3C
    if (ctx->r16 == ctx->r1) {
        // 0x800E3E24: nop
    
            goto L_800E3E3C;
    }
    // 0x800E3E24: nop

    // 0x800E3E28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E3E2C: beq         $s0, $at, L_800E3E4C
    if (ctx->r16 == ctx->r1) {
        // 0x800E3E30: nop
    
            goto L_800E3E4C;
    }
    // 0x800E3E30: nop

    // 0x800E3E34: b           L_800E3EC4
    // 0x800E3E38: nop

        goto L_800E3EC4;
    // 0x800E3E38: nop

L_800E3E3C:
    // 0x800E3E3C: jal         0x800E3930
    // 0x800E3E40: nop

    func_800E3930(rdram, ctx);
        goto after_0;
    // 0x800E3E40: nop

    after_0:
    // 0x800E3E44: b           L_800E3ECC
    // 0x800E3E48: nop

        goto L_800E3ECC;
    // 0x800E3E48: nop

L_800E3E4C:
    // 0x800E3E4C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E3E50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E3E54: lh          $s0, 0xB2($t1)
    ctx->r16 = MEM_H(ctx->r9, 0XB2);
    // 0x800E3E58: nop

    // 0x800E3E5C: beq         $s0, $at, L_800E3E84
    if (ctx->r16 == ctx->r1) {
        // 0x800E3E60: nop
    
            goto L_800E3E84;
    }
    // 0x800E3E60: nop

    // 0x800E3E64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E3E68: beq         $s0, $at, L_800E3E94
    if (ctx->r16 == ctx->r1) {
        // 0x800E3E6C: nop
    
            goto L_800E3E94;
    }
    // 0x800E3E6C: nop

    // 0x800E3E70: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800E3E74: beq         $s0, $at, L_800E3EA4
    if (ctx->r16 == ctx->r1) {
        // 0x800E3E78: nop
    
            goto L_800E3EA4;
    }
    // 0x800E3E78: nop

    // 0x800E3E7C: b           L_800E3EB4
    // 0x800E3E80: nop

        goto L_800E3EB4;
    // 0x800E3E80: nop

L_800E3E84:
    // 0x800E3E84: jal         0x800E39F4
    // 0x800E3E88: nop

    func_800E39F4(rdram, ctx);
        goto after_1;
    // 0x800E3E88: nop

    after_1:
    // 0x800E3E8C: b           L_800E3EBC
    // 0x800E3E90: nop

        goto L_800E3EBC;
    // 0x800E3E90: nop

L_800E3E94:
    // 0x800E3E94: jal         0x800E3B40
    // 0x800E3E98: nop

    func_800E3B40(rdram, ctx);
        goto after_2;
    // 0x800E3E98: nop

    after_2:
    // 0x800E3E9C: b           L_800E3EBC
    // 0x800E3EA0: nop

        goto L_800E3EBC;
    // 0x800E3EA0: nop

L_800E3EA4:
    // 0x800E3EA4: jal         0x800E3C8C
    // 0x800E3EA8: nop

    func_800E3C8C(rdram, ctx);
        goto after_3;
    // 0x800E3EA8: nop

    after_3:
    // 0x800E3EAC: b           L_800E3EBC
    // 0x800E3EB0: nop

        goto L_800E3EBC;
    // 0x800E3EB0: nop

L_800E3EB4:
    // 0x800E3EB4: b           L_800E3EBC
    // 0x800E3EB8: nop

        goto L_800E3EBC;
    // 0x800E3EB8: nop

L_800E3EBC:
    // 0x800E3EBC: b           L_800E3ECC
    // 0x800E3EC0: nop

        goto L_800E3ECC;
    // 0x800E3EC0: nop

L_800E3EC4:
    // 0x800E3EC4: b           L_800E3ECC
    // 0x800E3EC8: nop

        goto L_800E3ECC;
    // 0x800E3EC8: nop

L_800E3ECC:
    // 0x800E3ECC: b           L_800E3ED4
    // 0x800E3ED0: nop

        goto L_800E3ED4;
    // 0x800E3ED0: nop

L_800E3ED4:
    // 0x800E3ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E3ED8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E3EDC: jr          $ra
    // 0x800E3EE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E3EE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800EC91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC91C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800EC920: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC924: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EC928: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EC92C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EC930: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EC934: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC938: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EC93C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC940: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EC944: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EC948: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EC94C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800EC950: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EC954: nop

    // 0x800EC958: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EC95C: nop

    // 0x800EC960: bne         $t1, $zero, L_800EC9B8
    if (ctx->r9 != 0) {
        // 0x800EC964: nop
    
            goto L_800EC9B8;
    }
    // 0x800EC964: nop

    // 0x800EC968: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EC96C: nop

    // 0x800EC970: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EC974: nop

    // 0x800EC978: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EC97C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EC980: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800EC984: nop

    // 0x800EC988: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800EC98C: nop

    // 0x800EC990: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800EC994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC998: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800EC99C: addiu       $t7, $t7, -0x65A0
    ctx->r15 = ADD32(ctx->r15, -0X65A0);
    // 0x800EC9A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC9A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800EC9A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EC9AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EC9B0: jal         0x8001C0EC
    // 0x800EC9B4: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EC9B4: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    after_0:
L_800EC9B8:
    // 0x800EC9B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EC9BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EC9C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC9C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC9C8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800EC9CC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800EC9D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EC9D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800EC9D8: jal         0x800295C0
    // 0x800EC9DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x800EC9DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x800EC9E0: beq         $v0, $zero, L_800EC9F8
    if (ctx->r2 == 0) {
        // 0x800EC9E4: nop
    
            goto L_800EC9F8;
    }
    // 0x800EC9E4: nop

    // 0x800EC9E8: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EC9EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800EC9F0: b           L_800ECA08
    // 0x800EC9F4: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
        goto L_800ECA08;
    // 0x800EC9F4: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
L_800EC9F8:
    // 0x800EC9F8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EC9FC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECA00: nop

    // 0x800ECA04: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_800ECA08:
    // 0x800ECA08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECA0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECA10: jal         0x8002A2EC
    // 0x800ECA14: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x800ECA14: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_2:
    // 0x800ECA18: beq         $v0, $zero, L_800ECA38
    if (ctx->r2 == 0) {
        // 0x800ECA1C: nop
    
            goto L_800ECA38;
    }
    // 0x800ECA1C: nop

    // 0x800ECA20: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECA24: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800ECA28: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800ECA2C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECA30: nop

    // 0x800ECA34: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800ECA38:
    // 0x800ECA38: b           L_800ECA40
    // 0x800ECA3C: nop

        goto L_800ECA40;
    // 0x800ECA3C: nop

L_800ECA40:
    // 0x800ECA40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ECA44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800ECA48: jr          $ra
    // 0x800ECA4C: nop

    return;
    // 0x800ECA4C: nop

;}
RECOMP_FUNC void func_800AA4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA4CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AA4D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AA4D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800AA4D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AA4DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AA4E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AA4E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AA4E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AA4EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AA4F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AA4F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AA4F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AA4FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AA500: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AA504: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA508: nop

    // 0x800AA50C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AA510: nop

    // 0x800AA514: bne         $t1, $zero, L_800AA5CC
    if (ctx->r9 != 0) {
        // 0x800AA518: nop
    
            goto L_800AA5CC;
    }
    // 0x800AA518: nop

    // 0x800AA51C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA520: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AA524: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AA528: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA52C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800AA530: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800AA534: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800AA538: jal         0x80015538
    // 0x800AA53C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800AA53C: nop

    after_0:
    // 0x800AA540: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA544: nop

    // 0x800AA548: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x800AA54C: jal         0x80014E80
    // 0x800AA550: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x800AA550: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    after_1:
    // 0x800AA554: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA558: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800AA55C: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x800AA560: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800AA564: jal         0x80015538
    // 0x800AA568: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800AA568: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_2:
    // 0x800AA56C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA570: nop

    // 0x800AA574: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x800AA578: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800AA57C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800AA580: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA584: nop

    // 0x800AA588: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800AA58C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800AA590: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA594: nop

    // 0x800AA598: swc1        $f8, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f8.u32l;
    // 0x800AA59C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA5A0: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x800AA5A4: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x800AA5A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA5AC: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800AA5B0: addiu       $t2, $t2, 0x75D0
    ctx->r10 = ADD32(ctx->r10, 0X75D0);
    // 0x800AA5B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA5B8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800AA5BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AA5C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800AA5C4: jal         0x8001C0EC
    // 0x800AA5C8: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800AA5C8: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_3:
L_800AA5CC:
    // 0x800AA5CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA5D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA5D4: jal         0x80028FA0
    // 0x800AA5D8: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800AA5D8: nop

    after_4:
    // 0x800AA5DC: beq         $v0, $zero, L_800AA5F4
    if (ctx->r2 == 0) {
        // 0x800AA5E0: nop
    
            goto L_800AA5F4;
    }
    // 0x800AA5E0: nop

    // 0x800AA5E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA5E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA5EC: jal         0x80029B60
    // 0x800AA5F0: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800AA5F0: nop

    after_5:
L_800AA5F4:
    // 0x800AA5F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA5F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA5FC: jal         0x80029C40
    // 0x800AA600: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800AA600: nop

    after_6:
    // 0x800AA604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA60C: jal         0x80029D04
    // 0x800AA610: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x800AA610: nop

    after_7:
    // 0x800AA614: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800AA618: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800AA61C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA620: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA624: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800AA628: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800AA62C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800AA630: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800AA634: jal         0x80029018
    // 0x800AA638: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800AA638: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x800AA63C: beq         $v0, $zero, L_800AA680
    if (ctx->r2 == 0) {
        // 0x800AA640: nop
    
            goto L_800AA680;
    }
    // 0x800AA640: nop

    // 0x800AA644: jal         0x800297DC
    // 0x800AA648: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800AA648: nop

    after_9:
    // 0x800AA64C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA650: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA654: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800AA658: jal         0x80029824
    // 0x800AA65C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800AA65C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800AA660: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA664: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA668: jal         0x80029C40
    // 0x800AA66C: nop

    func_80029C40(rdram, ctx);
        goto after_11;
    // 0x800AA66C: nop

    after_11:
    // 0x800AA670: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA674: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA678: jal         0x80029D04
    // 0x800AA67C: nop

    func_80029D04(rdram, ctx);
        goto after_12;
    // 0x800AA67C: nop

    after_12:
L_800AA680:
    // 0x800AA680: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA684: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA688: jal         0x8002A1FC
    // 0x800AA68C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_13;
    // 0x800AA68C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_13:
    // 0x800AA690: beq         $v0, $zero, L_800AA6B0
    if (ctx->r2 == 0) {
        // 0x800AA694: nop
    
            goto L_800AA6B0;
    }
    // 0x800AA694: nop

    // 0x800AA698: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA69C: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x800AA6A0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800AA6A4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA6A8: nop

    // 0x800AA6AC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800AA6B0:
    // 0x800AA6B0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA6B4: nop

    // 0x800AA6B8: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800AA6BC: lwc1        $f6, 0x44($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X44);
    // 0x800AA6C0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x800AA6C4: nop

    // 0x800AA6C8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800AA6CC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800AA6D0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800AA6D4: nop

    // 0x800AA6D8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800AA6DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800AA6E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800AA6E4: nop

    // 0x800AA6E8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800AA6EC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800AA6F0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800AA6F4: sh          $t9, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r25;
    // 0x800AA6F8: nop

    // 0x800AA6FC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA700: nop

    // 0x800AA704: lwc1        $f16, 0x3C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800AA708: nop

    // 0x800AA70C: swc1        $f16, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f16.u32l;
    // 0x800AA710: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA714: nop

    // 0x800AA718: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800AA71C: nop

    // 0x800AA720: bgtz        $t2, L_800AA740
    if (SIGNED(ctx->r10) > 0) {
        // 0x800AA724: nop
    
            goto L_800AA740;
    }
    // 0x800AA724: nop

    // 0x800AA728: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA72C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800AA730: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800AA734: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA738: nop

    // 0x800AA73C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800AA740:
    // 0x800AA740: b           L_800AA748
    // 0x800AA744: nop

        goto L_800AA748;
    // 0x800AA744: nop

L_800AA748:
    // 0x800AA748: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AA74C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800AA750: jr          $ra
    // 0x800AA754: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AA754: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C29F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C29F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C29F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C29FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C2A00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C2A04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C2A08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C2A0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2A10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C2A14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2A18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C2A1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C2A20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C2A24: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C2A28: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C2A2C: nop

    // 0x800C2A30: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C2A34: nop

    // 0x800C2A38: bne         $t1, $zero, L_800C2AAC
    if (ctx->r9 != 0) {
        // 0x800C2A3C: nop
    
            goto L_800C2AAC;
    }
    // 0x800C2A3C: nop

    // 0x800C2A40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C2A44: nop

    // 0x800C2A48: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C2A4C: nop

    // 0x800C2A50: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C2A54: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C2A58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C2A5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C2A60: nop

    // 0x800C2A64: swc1        $f4, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f4.u32l;
    // 0x800C2A68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C2A6C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C2A70: nop

    // 0x800C2A74: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x800C2A78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C2A7C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C2A80: nop

    // 0x800C2A84: swc1        $f8, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f8.u32l;
    // 0x800C2A88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2A8C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800C2A90: addiu       $t8, $t8, 0x7FF0
    ctx->r24 = ADD32(ctx->r24, 0X7FF0);
    // 0x800C2A94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2A98: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C2A9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C2AA0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800C2AA4: jal         0x8001C0EC
    // 0x800C2AA8: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C2AA8: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_0:
L_800C2AAC:
    // 0x800C2AAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2AB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2AB4: jal         0x8001B44C
    // 0x800C2AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x800C2AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800C2ABC: beq         $v0, $zero, L_800C2AEC
    if (ctx->r2 == 0) {
        // 0x800C2AC0: nop
    
            goto L_800C2AEC;
    }
    // 0x800C2AC0: nop

    // 0x800C2AC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2AC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2ACC: jal         0x8001BBDC
    // 0x800C2AD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800C2AD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800C2AD4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C2AD8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x800C2ADC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800C2AE0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C2AE4: nop

    // 0x800C2AE8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800C2AEC:
    // 0x800C2AEC: b           L_800C2AF4
    // 0x800C2AF0: nop

        goto L_800C2AF4;
    // 0x800C2AF0: nop

L_800C2AF4:
    // 0x800C2AF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C2AF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C2AFC: jr          $ra
    // 0x800C2B00: nop

    return;
    // 0x800C2B00: nop

;}
RECOMP_FUNC void func_800E84D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E84D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E84D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E84DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E84E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E84E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E84E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E84EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E84F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E84F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E84F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E84FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E8500: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E8504: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E8508: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E850C: nop

    // 0x800E8510: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E8514: nop

    // 0x800E8518: bne         $t1, $zero, L_800E85A4
    if (ctx->r9 != 0) {
        // 0x800E851C: nop
    
            goto L_800E85A4;
    }
    // 0x800E851C: nop

    // 0x800E8520: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E8524: nop

    // 0x800E8528: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E852C: nop

    // 0x800E8530: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E8534: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E8538: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E853C: nop

    // 0x800E8540: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E8544: nop

    // 0x800E8548: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E854C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x800E8550: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E8554: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E8558: nop

    // 0x800E855C: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800E8560: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x800E8564: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E8568: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E856C: nop

    // 0x800E8570: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
    // 0x800E8574: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E8578: nop

    // 0x800E857C: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x800E8580: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8584: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800E8588: addiu       $t0, $t0, -0x6730
    ctx->r8 = ADD32(ctx->r8, -0X6730);
    // 0x800E858C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8590: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800E8594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E8598: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800E859C: jal         0x8001C0EC
    // 0x800E85A0: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E85A0: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    after_0:
L_800E85A4:
    // 0x800E85A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E85A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E85AC: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800E85B0: nop

    // 0x800E85B4: bne         $t3, $at, L_800E8650
    if (ctx->r11 != ctx->r1) {
        // 0x800E85B8: nop
    
            goto L_800E8650;
    }
    // 0x800E85B8: nop

    // 0x800E85BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E85C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800E85C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E85C8: lwc1        $f8, 0x44($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X44);
    // 0x800E85CC: nop

    // 0x800E85D0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800E85D4: swc1        $f16, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f16.u32l;
    // 0x800E85D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E85DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E85E0: lwc1        $f18, 0x44($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X44);
    // 0x800E85E4: nop

    // 0x800E85E8: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x800E85EC: nop

    // 0x800E85F0: bc1f        L_800E8650
    if (!c1cs) {
        // 0x800E85F4: nop
    
            goto L_800E8650;
    }
    // 0x800E85F4: nop

    // 0x800E85F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E85FC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E8600: nop

    // 0x800E8604: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
    // 0x800E8608: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E860C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E8610: nop

    // 0x800E8614: swc1        $f8, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f8.u32l;
    // 0x800E8618: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E861C: nop

    // 0x800E8620: lwc1        $f10, 0x2C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800E8624: nop

    // 0x800E8628: swc1        $f10, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f10.u32l;
    // 0x800E862C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E8630: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E8634: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800E8638: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E863C: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x800E8640: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800E8644: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E8648: nop

    // 0x800E864C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800E8650:
    // 0x800E8650: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8654: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8658: jal         0x80028FA0
    // 0x800E865C: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800E865C: nop

    after_1:
    // 0x800E8660: beq         $v0, $zero, L_800E86C0
    if (ctx->r2 == 0) {
        // 0x800E8664: nop
    
            goto L_800E86C0;
    }
    // 0x800E8664: nop

    // 0x800E8668: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E866C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E8670: nop

    // 0x800E8674: swc1        $f16, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f16.u32l;
    // 0x800E8678: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E867C: nop

    // 0x800E8680: lwc1        $f18, 0x2C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800E8684: nop

    // 0x800E8688: swc1        $f18, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f18.u32l;
    // 0x800E868C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E8690: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E8694: nop

    // 0x800E8698: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800E869C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E86A0: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800E86A4: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800E86A8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E86AC: nop

    // 0x800E86B0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800E86B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E86B8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800E86BC: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_800E86C0:
    // 0x800E86C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E86C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E86C8: jal         0x8002A8B4
    // 0x800E86CC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800E86CC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_2:
    // 0x800E86D0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E86D4: nop

    // 0x800E86D8: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800E86DC: nop

    // 0x800E86E0: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
    // 0x800E86E4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E86E8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800E86EC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800E86F0: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800E86F4: jal         0x80015538
    // 0x800E86F8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800E86F8: nop

    after_3:
    // 0x800E86FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E8700: nop

    // 0x800E8704: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x800E8708: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E870C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E8710: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x800E8714: nop

    // 0x800E8718: beq         $t6, $at, L_800E8730
    if (ctx->r14 == ctx->r1) {
        // 0x800E871C: nop
    
            goto L_800E8730;
    }
    // 0x800E871C: nop

    // 0x800E8720: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8724: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8728: jal         0x80029C40
    // 0x800E872C: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800E872C: nop

    after_4:
L_800E8730:
    // 0x800E8730: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E8734: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E8738: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E873C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8740: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E8744: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800E8748: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E874C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800E8750: jal         0x80029018
    // 0x800E8754: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800E8754: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800E8758: beq         $v0, $zero, L_800E87AC
    if (ctx->r2 == 0) {
        // 0x800E875C: nop
    
            goto L_800E87AC;
    }
    // 0x800E875C: nop

    // 0x800E8760: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E8764: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E8768: nop

    // 0x800E876C: swc1        $f16, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f16.u32l;
    // 0x800E8770: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E8774: nop

    // 0x800E8778: lwc1        $f18, 0x2C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800E877C: nop

    // 0x800E8780: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x800E8784: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E8788: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E878C: nop

    // 0x800E8790: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x800E8794: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E8798: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x800E879C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800E87A0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E87A4: nop

    // 0x800E87A8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800E87AC:
    // 0x800E87AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E87B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E87B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E87B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E87BC: jal         0x8002A0D0
    // 0x800E87C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_6;
    // 0x800E87C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_6:
    // 0x800E87C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E87C8: bne         $v0, $at, L_800E87EC
    if (ctx->r2 != ctx->r1) {
        // 0x800E87CC: nop
    
            goto L_800E87EC;
    }
    // 0x800E87CC: nop

    // 0x800E87D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E87D4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800E87D8: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x800E87DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E87E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E87E4: nop

    // 0x800E87E8: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
L_800E87EC:
    // 0x800E87EC: b           L_800E87F4
    // 0x800E87F0: nop

        goto L_800E87F4;
    // 0x800E87F0: nop

L_800E87F4:
    // 0x800E87F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E87F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E87FC: jr          $ra
    // 0x800E8800: nop

    return;
    // 0x800E8800: nop

;}
RECOMP_FUNC void func_8006B5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B5A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B5A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B5AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B5B0: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006B5B4: nop

    // 0x8006B5B8: bne         $t6, $zero, L_8006B5E0
    if (ctx->r14 != 0) {
        // 0x8006B5BC: nop
    
            goto L_8006B5E0;
    }
    // 0x8006B5BC: nop

    // 0x8006B5C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B5C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B5C8: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
    // 0x8006B5CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006B5D0: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x8006B5D4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006B5D8: jal         0x80017BEC
    // 0x8006B5DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80017BEC(rdram, ctx);
        goto after_0;
    // 0x8006B5DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
L_8006B5E0:
    // 0x8006B5E0: b           L_8006B5E8
    // 0x8006B5E4: nop

        goto L_8006B5E8;
    // 0x8006B5E4: nop

L_8006B5E8:
    // 0x8006B5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B5EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B5F0: jr          $ra
    // 0x8006B5F4: nop

    return;
    // 0x8006B5F4: nop

;}
RECOMP_FUNC void func_800BBA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BBA0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BBA10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BBA14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BBA18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BBA1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BBA20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BBA24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BBA28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BBA2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BBA30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BBA34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BBA38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BBA3C: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800BBA40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BBA44: bne         $t8, $at, L_800BBABC
    if (ctx->r24 != ctx->r1) {
        // 0x800BBA48: nop
    
            goto L_800BBABC;
    }
    // 0x800BBA48: nop

    // 0x800BBA4C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800BBA50: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800BBA54: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800BBA58: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800BBA5C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800BBA60: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800BBA64: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800BBA68: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800BBA6C: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800BBA70: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800BBA74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BBA78: beq         $s0, $at, L_800BBA94
    if (ctx->r16 == ctx->r1) {
        // 0x800BBA7C: nop
    
            goto L_800BBA94;
    }
    // 0x800BBA7C: nop

    // 0x800BBA80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800BBA84: beq         $s0, $at, L_800BBAA4
    if (ctx->r16 == ctx->r1) {
        // 0x800BBA88: nop
    
            goto L_800BBAA4;
    }
    // 0x800BBA88: nop

    // 0x800BBA8C: b           L_800BBAB4
    // 0x800BBA90: nop

        goto L_800BBAB4;
    // 0x800BBA90: nop

L_800BBA94:
    // 0x800BBA94: jal         0x800BB748
    // 0x800BBA98: nop

    func_800BB748(rdram, ctx);
        goto after_0;
    // 0x800BBA98: nop

    after_0:
    // 0x800BBA9C: b           L_800BBABC
    // 0x800BBAA0: nop

        goto L_800BBABC;
    // 0x800BBAA0: nop

L_800BBAA4:
    // 0x800BBAA4: jal         0x800BB91C
    // 0x800BBAA8: nop

    func_800BB91C(rdram, ctx);
        goto after_1;
    // 0x800BBAA8: nop

    after_1:
    // 0x800BBAAC: b           L_800BBABC
    // 0x800BBAB0: nop

        goto L_800BBABC;
    // 0x800BBAB0: nop

L_800BBAB4:
    // 0x800BBAB4: b           L_800BBABC
    // 0x800BBAB8: nop

        goto L_800BBABC;
    // 0x800BBAB8: nop

L_800BBABC:
    // 0x800BBABC: b           L_800BBAC4
    // 0x800BBAC0: nop

        goto L_800BBAC4;
    // 0x800BBAC0: nop

L_800BBAC4:
    // 0x800BBAC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BBAC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BBACC: jr          $ra
    // 0x800BBAD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BBAD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007DD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DD60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007DD64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DD68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007DD6C: lh          $t6, -0x1D08($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D08);
    // 0x8007DD70: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8007DD74: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8007DD78: mflo        $t7
    ctx->r15 = lo;
    // 0x8007DD7C: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x8007DD80: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8007DD84: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007DD88: nop

    // 0x8007DD8C: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8007DD90: bne         $at, $zero, L_8007DDA0
    if (ctx->r1 != 0) {
        // 0x8007DD94: nop
    
            goto L_8007DDA0;
    }
    // 0x8007DD94: nop

    // 0x8007DD98: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8007DD9C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8007DDA0:
    // 0x8007DDA0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007DDA4: lh          $t1, -0x1F00($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1F00);
    // 0x8007DDA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007DDAC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8007DDB0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8007DDB4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8007DDB8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8007DDBC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8007DDC0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8007DDC4: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x8007DDC8: nop

    // 0x8007DDCC: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8007DDD0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007DDD4: lh          $t3, -0x1F00($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F00);
    // 0x8007DDD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007DDDC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8007DDE0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007DDE4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8007DDE8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007DDEC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8007DDF0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8007DDF4: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x8007DDF8: nop

    // 0x8007DDFC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8007DE00: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007DE04: lh          $t5, -0x1F00($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1F00);
    // 0x8007DE08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007DE0C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8007DE10: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8007DE14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8007DE18: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8007DE1C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8007DE20: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8007DE24: lwc1        $f8, 0x4158($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x8007DE28: nop

    // 0x8007DE2C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8007DE30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007DE34: lh          $a0, -0x1F00($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1F00);
    // 0x8007DE38: jal         0x8001A928
    // 0x8007DE3C: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007DE3C: nop

    after_0:
    // 0x8007DE40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007DE44: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x8007DE48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007DE4C: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x8007DE50: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007DE54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007DE58: bne         $t7, $at, L_8007DE90
    if (ctx->r15 != ctx->r1) {
        // 0x8007DE5C: nop
    
            goto L_8007DE90;
    }
    // 0x8007DE5C: nop

    // 0x8007DE60: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007DE64: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DE68: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007DE6C: jal         0x8007DC0C
    // 0x8007DE70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8007DC0C(rdram, ctx);
        goto after_1;
    // 0x8007DE70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8007DE74: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007DE78: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DE7C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007DE80: jal         0x8007DC0C
    // 0x8007DE84: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8007DC0C(rdram, ctx);
        goto after_2;
    // 0x8007DE84: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x8007DE88: b           L_8007DF34
    // 0x8007DE8C: nop

        goto L_8007DF34;
    // 0x8007DE8C: nop

L_8007DE90:
    // 0x8007DE90: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007DE94: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007DE98: bne         $t8, $at, L_8007DEE4
    if (ctx->r24 != ctx->r1) {
        // 0x8007DE9C: nop
    
            goto L_8007DEE4;
    }
    // 0x8007DE9C: nop

    // 0x8007DEA0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007DEA4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DEA8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007DEAC: jal         0x8007DC0C
    // 0x8007DEB0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8007DC0C(rdram, ctx);
        goto after_3;
    // 0x8007DEB0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x8007DEB4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007DEB8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DEBC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007DEC0: jal         0x8007DC0C
    // 0x8007DEC4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8007DC0C(rdram, ctx);
        goto after_4;
    // 0x8007DEC4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x8007DEC8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007DECC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DED0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007DED4: jal         0x8007DC0C
    // 0x8007DED8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8007DC0C(rdram, ctx);
        goto after_5;
    // 0x8007DED8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x8007DEDC: b           L_8007DF34
    // 0x8007DEE0: nop

        goto L_8007DF34;
    // 0x8007DEE0: nop

L_8007DEE4:
    // 0x8007DEE4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007DEE8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DEEC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007DEF0: jal         0x8007DC0C
    // 0x8007DEF4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8007DC0C(rdram, ctx);
        goto after_6;
    // 0x8007DEF4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_6:
    // 0x8007DEF8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007DEFC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DF00: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007DF04: jal         0x8007DC0C
    // 0x8007DF08: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8007DC0C(rdram, ctx);
        goto after_7;
    // 0x8007DF08: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_7:
    // 0x8007DF0C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007DF10: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DF14: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007DF18: jal         0x8007DC0C
    // 0x8007DF1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8007DC0C(rdram, ctx);
        goto after_8;
    // 0x8007DF1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x8007DF20: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007DF24: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DF28: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007DF2C: jal         0x8007DC0C
    // 0x8007DF30: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8007DC0C(rdram, ctx);
        goto after_9;
    // 0x8007DF30: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_9:
L_8007DF34:
    // 0x8007DF34: b           L_8007DF3C
    // 0x8007DF38: nop

        goto L_8007DF3C;
    // 0x8007DF38: nop

L_8007DF3C:
    // 0x8007DF3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007DF40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007DF44: jr          $ra
    // 0x8007DF48: nop

    return;
    // 0x8007DF48: nop

;}
RECOMP_FUNC void func_800841E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800841E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800841EC: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x800841F0: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x800841F4: beq         $t6, $at, L_80084208
    if (ctx->r14 == ctx->r1) {
        // 0x800841F8: nop
    
            goto L_80084208;
    }
    // 0x800841F8: nop

    // 0x800841FC: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x80084200: bne         $t6, $at, L_80084224
    if (ctx->r14 != ctx->r1) {
        // 0x80084204: nop
    
            goto L_80084224;
    }
    // 0x80084204: nop

L_80084208:
    // 0x80084208: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8008420C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084210: sb          $t7, -0x1EF0($at)
    MEM_B(-0X1EF0, ctx->r1) = ctx->r15;
    // 0x80084214: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80084218: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008421C: b           L_80084234
    // 0x80084220: sh          $t8, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = ctx->r24;
        goto L_80084234;
    // 0x80084220: sh          $t8, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = ctx->r24;
L_80084224:
    // 0x80084224: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084228: sb          $zero, -0x1EF0($at)
    MEM_B(-0X1EF0, ctx->r1) = 0;
    // 0x8008422C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084230: sh          $zero, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = 0;
L_80084234:
    // 0x80084234: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084238: sb          $zero, -0x1EEB($at)
    MEM_B(-0X1EEB, ctx->r1) = 0;
    // 0x8008423C: jr          $ra
    // 0x80084240: nop

    return;
    // 0x80084240: nop

    // 0x80084244: jr          $ra
    // 0x80084248: nop

    return;
    // 0x80084248: nop

;}
RECOMP_FUNC void func_8009ADE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009ADE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009ADE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009ADEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009ADF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009ADF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009ADF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009ADFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009AE00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009AE04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009AE08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009AE0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009AE10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009AE14: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009AE18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AE1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AE20: jal         0x8002AA94
    // 0x8009AE24: nop

    func_8002AA94(rdram, ctx);
        goto after_0;
    // 0x8009AE24: nop

    after_0:
    // 0x8009AE28: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009AE2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009AE30: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8009AE34: nop

    // 0x8009AE38: bne         $t1, $at, L_8009AE64
    if (ctx->r9 != ctx->r1) {
        // 0x8009AE3C: nop
    
            goto L_8009AE64;
    }
    // 0x8009AE3C: nop

    // 0x8009AE40: b           L_8009AE48
    // 0x8009AE44: nop

        goto L_8009AE48;
    // 0x8009AE44: nop

L_8009AE48:
    // 0x8009AE48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AE4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AE50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009AE54: jal         0x80098864
    // 0x8009AE58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098864(rdram, ctx);
        goto after_1;
    // 0x8009AE58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009AE5C: b           L_8009AE64
    // 0x8009AE60: nop

        goto L_8009AE64;
    // 0x8009AE60: nop

L_8009AE64:
    // 0x8009AE64: b           L_8009AE6C
    // 0x8009AE68: nop

        goto L_8009AE6C;
    // 0x8009AE68: nop

L_8009AE6C:
    // 0x8009AE6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009AE70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009AE74: jr          $ra
    // 0x8009AE78: nop

    return;
    // 0x8009AE78: nop

;}
RECOMP_FUNC void func_800BA5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA5A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BA5AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA5B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BA5B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BA5B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BA5BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BA5C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA5C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BA5C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA5CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BA5D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BA5D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BA5D8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BA5DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BA5E0: nop

    // 0x800BA5E4: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
    // 0x800BA5E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA5EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA5F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BA5F4: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800BA5F8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800BA5FC: jal         0x800175F0
    // 0x800BA600: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800BA600: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800BA604: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BA608: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x800BA60C: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800BA610: lwc1        $f14, 0x4($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800BA614: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x800BA618: jal         0x8007EDF4
    // 0x800BA61C: nop

    func_8007EDF4(rdram, ctx);
        goto after_1;
    // 0x800BA61C: nop

    after_1:
    // 0x800BA620: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA624: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA628: jal         0x8002B114
    // 0x800BA62C: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x800BA62C: nop

    after_2:
    // 0x800BA630: b           L_800BA638
    // 0x800BA634: nop

        goto L_800BA638;
    // 0x800BA634: nop

L_800BA638:
    // 0x800BA638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA63C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BA640: jr          $ra
    // 0x800BA644: nop

    return;
    // 0x800BA644: nop

;}
RECOMP_FUNC void func_800E1F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1F20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E1F24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E1F28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E1F2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E1F30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E1F34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E1F38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1F3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E1F40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1F44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E1F48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E1F4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E1F50: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E1F54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E1F58: nop

    // 0x800E1F5C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E1F60: nop

    // 0x800E1F64: bne         $t1, $zero, L_800E1FFC
    if (ctx->r9 != 0) {
        // 0x800E1F68: nop
    
            goto L_800E1FFC;
    }
    // 0x800E1F68: nop

    // 0x800E1F6C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E1F70: nop

    // 0x800E1F74: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E1F78: nop

    // 0x800E1F7C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E1F80: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E1F84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1F88: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E1F8C: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800E1F90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1F94: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800E1F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E1F9C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800E1FA0: jal         0x8001C0EC
    // 0x800E1FA4: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E1FA4: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800E1FA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1FAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1FB0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E1FB4: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E1FB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E1FBC: jal         0x8001ABF4
    // 0x800E1FC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E1FC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E1FC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1FC8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E1FCC: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E1FD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1FD4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E1FD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E1FDC: jal         0x8001ABF4
    // 0x800E1FE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E1FE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E1FE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E1FE8: nop

    // 0x800E1FEC: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800E1FF0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E1FF4: nop

    // 0x800E1FF8: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
L_800E1FFC:
    // 0x800E1FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2004: jal         0x8002A8B4
    // 0x800E2008: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800E2008: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x800E200C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E2010: nop

    // 0x800E2014: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800E2018: nop

    // 0x800E201C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x800E2020: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2024: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2028: jal         0x8001B4AC
    // 0x800E202C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x800E202C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800E2030: beq         $v0, $zero, L_800E2050
    if (ctx->r2 == 0) {
        // 0x800E2034: nop
    
            goto L_800E2050;
    }
    // 0x800E2034: nop

    // 0x800E2038: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E203C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800E2040: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800E2044: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E2048: nop

    // 0x800E204C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800E2050:
    // 0x800E2050: b           L_800E2058
    // 0x800E2054: nop

        goto L_800E2058;
    // 0x800E2054: nop

L_800E2058:
    // 0x800E2058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E205C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E2060: jr          $ra
    // 0x800E2064: nop

    return;
    // 0x800E2064: nop

;}
RECOMP_FUNC void func_800F8878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8878: jr          $ra
    // 0x800F887C: nop

    return;
    // 0x800F887C: nop

    // 0x800F8880: jr          $ra
    // 0x800F8884: nop

    return;
    // 0x800F8884: nop

;}
RECOMP_FUNC void func_800F4378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F4378: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800F437C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F4380: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F4384: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F4388: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F438C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F4390: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4394: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F4398: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F439C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F43A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F43A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F43A8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800F43AC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F43B0: nop

    // 0x800F43B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F43B8: nop

    // 0x800F43BC: bne         $t1, $zero, L_800F445C
    if (ctx->r9 != 0) {
        // 0x800F43C0: nop
    
            goto L_800F445C;
    }
    // 0x800F43C0: nop

    // 0x800F43C4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F43C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F43CC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F43D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F43D4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F43D8: nop

    // 0x800F43DC: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x800F43E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F43E4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F43E8: nop

    // 0x800F43EC: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x800F43F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F43F4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F43F8: nop

    // 0x800F43FC: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800F4400: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F4404: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F4408: nop

    // 0x800F440C: swc1        $f10, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f10.u32l;
    // 0x800F4410: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4414: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800F4418: addiu       $t8, $t8, -0x4720
    ctx->r24 = ADD32(ctx->r24, -0X4720);
    // 0x800F441C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4420: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800F4424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F4428: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800F442C: jal         0x8001C0EC
    // 0x800F4430: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F4430: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    after_0:
    // 0x800F4434: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F4438: nop

    // 0x800F443C: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x800F4440: nop

    // 0x800F4444: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x800F4448: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F444C: nop

    // 0x800F4450: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800F4454: nop

    // 0x800F4458: sh          $t2, 0xB4($t1)
    MEM_H(0XB4, ctx->r9) = ctx->r10;
L_800F445C:
    // 0x800F445C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4460: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4464: jal         0x80029C40
    // 0x800F4468: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800F4468: nop

    after_1:
    // 0x800F446C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4470: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4474: jal         0x80029D04
    // 0x800F4478: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800F4478: nop

    after_2:
    // 0x800F447C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4480: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4484: jal         0x8002A640
    // 0x800F4488: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_8002A640(rdram, ctx);
        goto after_3;
    // 0x800F4488: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_3:
    // 0x800F448C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800F4490: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F4494: nop

    // 0x800F4498: bne         $t3, $zero, L_800F44BC
    if (ctx->r11 != 0) {
        // 0x800F449C: nop
    
            goto L_800F44BC;
    }
    // 0x800F449C: nop

    // 0x800F44A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F44A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F44A8: jal         0x8002A46C
    // 0x800F44AC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x800F44AC: nop

    after_4:
    // 0x800F44B0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F44B4: b           L_800F44EC
    // 0x800F44B8: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
        goto L_800F44EC;
    // 0x800F44B8: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
L_800F44BC:
    // 0x800F44BC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F44C0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F44C4: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800F44C8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800F44CC: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x800F44D0: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800F44D4: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800F44D8: jal         0x80015538
    // 0x800F44DC: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800F44DC: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_5:
    // 0x800F44E0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F44E4: nop

    // 0x800F44E8: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
L_800F44EC:
    // 0x800F44EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F44F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F44F4: jal         0x8001B44C
    // 0x800F44F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800F44F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800F44FC: beq         $v0, $zero, L_800F451C
    if (ctx->r2 == 0) {
        // 0x800F4500: nop
    
            goto L_800F451C;
    }
    // 0x800F4500: nop

    // 0x800F4504: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F4508: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800F450C: sh          $t0, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r8;
    // 0x800F4510: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F4514: nop

    // 0x800F4518: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800F451C:
    // 0x800F451C: b           L_800F4524
    // 0x800F4520: nop

        goto L_800F4524;
    // 0x800F4520: nop

L_800F4524:
    // 0x800F4524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4528: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800F452C: jr          $ra
    // 0x800F4530: nop

    return;
    // 0x800F4530: nop

;}
RECOMP_FUNC void func_80074318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074318: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007431C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80074320: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80074324: nop

    // 0x80074328: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8007432C: nop

    // 0x80074330: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80074334: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80074338: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8007433C: nop

    // 0x80074340: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80074344: nop

    // 0x80074348: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8007434C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80074350: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80074354: nop

    // 0x80074358: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8007435C: nop

    // 0x80074360: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80074364: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80074368: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007436C: lh          $t0, 0x77E8($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X77E8);
    // 0x80074370: lh          $t9, 0x7900($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7900);
    // 0x80074374: nop

    // 0x80074378: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8007437C: bgez        $t1, L_8007438C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80074380: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8007438C;
    }
    // 0x80074380: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x80074384: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x80074388: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_8007438C:
    // 0x8007438C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80074390: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80074394: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80074398: lh          $t4, 0x78F0($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X78F0);
    // 0x8007439C: lh          $t3, 0x7908($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7908);
    // 0x800743A0: nop

    // 0x800743A4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800743A8: bgez        $t5, L_800743B8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800743AC: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_800743B8;
    }
    // 0x800743AC: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x800743B0: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x800743B4: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_800743B8:
    // 0x800743B8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800743BC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800743C0: lwc1        $f10, 0x5644($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5644);
    // 0x800743C4: nop

    // 0x800743C8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800743CC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800743D0: lwc1        $f16, 0x5648($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5648);
    // 0x800743D4: nop

    // 0x800743D8: swc1        $f16, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f16.u32l;
    // 0x800743DC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800743E0: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800743E4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800743E8: nop

    // 0x800743EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800743F0: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x800743F4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800743F8: nop

    // 0x800743FC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80074400: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80074404: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80074408: nop

    // 0x8007440C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80074410: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80074414: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80074418: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x8007441C: nop

    // 0x80074420: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80074424: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80074428: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8007442C: nop

    // 0x80074430: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80074434: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80074438: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8007443C: nop

    // 0x80074440: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80074444: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80074448: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007444C: nop

    // 0x80074450: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80074454: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80074458: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8007445C: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x80074460: nop

    // 0x80074464: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x80074468: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007446C: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80074470: lwc1        $f16, 0x10($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80074474: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80074478: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8007447C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074480: mul.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80074484: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80074488: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8007448C: swc1        $f10, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f10.u32l;
    // 0x80074490: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80074494: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x80074498: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8007449C: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800744A0: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800744A4: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800744A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800744AC: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x800744B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800744B4: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x800744B8: swc1        $f4, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f4.u32l;
    // 0x800744BC: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800744C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800744C4: swc1        $f16, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f16.u32l;
    // 0x800744C8: b           L_800744D0
    // 0x800744CC: nop

        goto L_800744D0;
    // 0x800744CC: nop

L_800744D0:
    // 0x800744D0: jr          $ra
    // 0x800744D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800744D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800631A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800631A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800631AC: bne         $a0, $at, L_800631C4
    if (ctx->r4 != ctx->r1) {
        // 0x800631B0: nop
    
            goto L_800631C4;
    }
    // 0x800631B0: nop

    // 0x800631B4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800631B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800631BC: b           L_800631F0
    // 0x800631C0: sw          $t6, 0x489C($at)
    MEM_W(0X489C, ctx->r1) = ctx->r14;
        goto L_800631F0;
    // 0x800631C0: sw          $t6, 0x489C($at)
    MEM_W(0X489C, ctx->r1) = ctx->r14;
L_800631C4:
    // 0x800631C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800631C8: sw          $a0, 0x489C($at)
    MEM_W(0X489C, ctx->r1) = ctx->r4;
    // 0x800631CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800631D0: sw          $a1, 0x48A0($at)
    MEM_W(0X48A0, ctx->r1) = ctx->r5;
    // 0x800631D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800631D8: sw          $a2, 0x48A4($at)
    MEM_W(0X48A4, ctx->r1) = ctx->r6;
    // 0x800631DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800631E0: sw          $a3, 0x48A8($at)
    MEM_W(0X48A8, ctx->r1) = ctx->r7;
    // 0x800631E4: lbu         $t7, 0x13($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X13);
    // 0x800631E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800631EC: sb          $t7, 0x48AC($at)
    MEM_B(0X48AC, ctx->r1) = ctx->r15;
L_800631F0:
    // 0x800631F0: jr          $ra
    // 0x800631F4: nop

    return;
    // 0x800631F4: nop

    // 0x800631F8: jr          $ra
    // 0x800631FC: nop

    return;
    // 0x800631FC: nop

;}
RECOMP_FUNC void func_80085884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085884: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80085888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008588C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80085890: lw          $t6, -0x1DC8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DC8);
    // 0x80085894: nop

    // 0x80085898: bne         $t6, $zero, L_800859F8
    if (ctx->r14 != 0) {
        // 0x8008589C: nop
    
            goto L_800859F8;
    }
    // 0x8008589C: nop

    // 0x800858A0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800858A4: lh          $t7, 0x5270($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X5270);
    // 0x800858A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800858AC: beq         $t7, $at, L_80085928
    if (ctx->r15 == ctx->r1) {
        // 0x800858B0: nop
    
            goto L_80085928;
    }
    // 0x800858B0: nop

    // 0x800858B4: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800858B8: lh          $t8, 0x5270($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X5270);
    // 0x800858BC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800858C0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800858C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800858C8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800858CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800858D0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800858D4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800858D8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800858DC: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x800858E0: nop

    // 0x800858E4: beq         $t2, $zero, L_80085904
    if (ctx->r10 == 0) {
        // 0x800858E8: nop
    
            goto L_80085904;
    }
    // 0x800858E8: nop

    // 0x800858EC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x800858F0: lh          $t4, 0x5280($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X5280);
    // 0x800858F4: lh          $t3, 0xE4($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE4);
    // 0x800858F8: nop

    // 0x800858FC: beq         $t3, $t4, L_80085910
    if (ctx->r11 == ctx->r12) {
        // 0x80085900: nop
    
            goto L_80085910;
    }
    // 0x80085900: nop

L_80085904:
    // 0x80085904: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80085908: b           L_80085920
    // 0x8008590C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
        goto L_80085920;
    // 0x8008590C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_80085910:
    // 0x80085910: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80085914: lh          $t6, 0x5270($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X5270);
    // 0x80085918: nop

    // 0x8008591C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80085920:
    // 0x80085920: b           L_80085994
    // 0x80085924: nop

        goto L_80085994;
    // 0x80085924: nop

L_80085928:
    // 0x80085928: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008592C: lh          $t7, -0x1D58($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D58);
    // 0x80085930: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80085934: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80085938: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008593C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80085940: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80085944: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80085948: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8008594C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80085950: lh          $t2, 0xA4($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA4);
    // 0x80085954: nop

    // 0x80085958: beq         $t2, $zero, L_80085978
    if (ctx->r10 == 0) {
        // 0x8008595C: nop
    
            goto L_80085978;
    }
    // 0x8008595C: nop

    // 0x80085960: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80085964: lh          $t3, -0x1D48($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1D48);
    // 0x80085968: lh          $t1, 0xE4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE4);
    // 0x8008596C: nop

    // 0x80085970: beq         $t1, $t3, L_80085984
    if (ctx->r9 == ctx->r11) {
        // 0x80085974: nop
    
            goto L_80085984;
    }
    // 0x80085974: nop

L_80085978:
    // 0x80085978: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8008597C: b           L_80085994
    // 0x80085980: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
        goto L_80085994;
    // 0x80085980: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_80085984:
    // 0x80085984: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80085988: lh          $t5, -0x1D58($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1D58);
    // 0x8008598C: nop

    // 0x80085990: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_80085994:
    // 0x80085994: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80085998: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008599C: beq         $t6, $at, L_800859F0
    if (ctx->r14 == ctx->r1) {
        // 0x800859A0: nop
    
            goto L_800859F0;
    }
    // 0x800859A0: nop

    // 0x800859A4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800859A8: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800859AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800859B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800859B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800859B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800859BC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800859C0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800859C4: lh          $t9, 0x4234($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4234);
    // 0x800859C8: nop

    // 0x800859CC: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x800859D0: subu        $t2, $t2, $t9
    ctx->r10 = SUB32(ctx->r10, ctx->r25);
    // 0x800859D4: sll         $t2, $t2, 5
    ctx->r10 = S32(ctx->r10 << 5);
    // 0x800859D8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800859DC: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x800859E0: lw          $t9, 0x4DBC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DBC);
    // 0x800859E4: nop

    // 0x800859E8: jalr        $t9
    // 0x800859EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800859EC: nop

    after_0:
L_800859F0:
    // 0x800859F0: b           L_80085B1C
    // 0x800859F4: nop

        goto L_80085B1C;
    // 0x800859F4: nop

L_800859F8:
    // 0x800859F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800859FC: lw          $t0, -0x1DC0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1DC0);
    // 0x80085A00: nop

    // 0x80085A04: addiu       $t1, $t0, -0x2
    ctx->r9 = ADD32(ctx->r8, -0X2);
    // 0x80085A08: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80085A0C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80085A10: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80085A14: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80085A18: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80085A1C: lh          $t5, 0x79B0($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X79B0);
    // 0x80085A20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80085A24: beq         $t5, $at, L_80085ABC
    if (ctx->r13 == ctx->r1) {
        // 0x80085A28: nop
    
            goto L_80085ABC;
    }
    // 0x80085A28: nop

    // 0x80085A2C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80085A30: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80085A34: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80085A38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80085A3C: lh          $t8, 0x79B0($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X79B0);
    // 0x80085A40: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80085A44: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80085A48: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80085A4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80085A50: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80085A54: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80085A58: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80085A5C: addu        $t0, $t2, $t9
    ctx->r8 = ADD32(ctx->r10, ctx->r25);
    // 0x80085A60: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80085A64: nop

    // 0x80085A68: beq         $t1, $zero, L_80085A8C
    if (ctx->r9 == 0) {
        // 0x80085A6C: nop
    
            goto L_80085A8C;
    }
    // 0x80085A6C: nop

    // 0x80085A70: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80085A74: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80085A78: lh          $t3, 0x79C0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X79C0);
    // 0x80085A7C: lh          $t4, 0xE4($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XE4);
    // 0x80085A80: nop

    // 0x80085A84: beq         $t3, $t4, L_80085A98
    if (ctx->r11 == ctx->r12) {
        // 0x80085A88: nop
    
            goto L_80085A98;
    }
    // 0x80085A88: nop

L_80085A8C:
    // 0x80085A8C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80085A90: b           L_80085AB4
    // 0x80085A94: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
        goto L_80085AB4;
    // 0x80085A94: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_80085A98:
    // 0x80085A98: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80085A9C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80085AA0: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80085AA4: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80085AA8: lh          $t2, 0x79B0($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X79B0);
    // 0x80085AAC: nop

    // 0x80085AB0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_80085AB4:
    // 0x80085AB4: b           L_80085AC4
    // 0x80085AB8: nop

        goto L_80085AC4;
    // 0x80085AB8: nop

L_80085ABC:
    // 0x80085ABC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80085AC0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_80085AC4:
    // 0x80085AC4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80085AC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80085ACC: beq         $t1, $at, L_80085B1C
    if (ctx->r9 == ctx->r1) {
        // 0x80085AD0: nop
    
            goto L_80085B1C;
    }
    // 0x80085AD0: nop

    // 0x80085AD4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80085AD8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80085ADC: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80085AE0: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80085AE4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80085AE8: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80085AEC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80085AF0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80085AF4: lh          $t3, 0x4234($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4234);
    // 0x80085AF8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80085AFC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80085B00: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80085B04: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x80085B08: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x80085B0C: lw          $t9, 0x4DBC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DBC);
    // 0x80085B10: nop

    // 0x80085B14: jalr        $t9
    // 0x80085B18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80085B18: nop

    after_1:
L_80085B1C:
    // 0x80085B1C: b           L_80085B24
    // 0x80085B20: nop

        goto L_80085B24;
    // 0x80085B20: nop

L_80085B24:
    // 0x80085B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085B28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80085B2C: jr          $ra
    // 0x80085B30: nop

    return;
    // 0x80085B30: nop

;}
RECOMP_FUNC void func_800E119C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E119C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800E11A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E11A4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E11A8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E11AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E11B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E11B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E11B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E11BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E11C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E11C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E11C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E11CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E11D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E11D4: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800E11D8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E11DC: nop

    // 0x800E11E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E11E4: nop

    // 0x800E11E8: bne         $t1, $zero, L_800E12E0
    if (ctx->r9 != 0) {
        // 0x800E11EC: nop
    
            goto L_800E12E0;
    }
    // 0x800E11EC: nop

    // 0x800E11F0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E11F4: nop

    // 0x800E11F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E11FC: nop

    // 0x800E1200: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E1204: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E1208: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E120C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800E1210: nop

    // 0x800E1214: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800E1218: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E121C: nop

    // 0x800E1220: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800E1224: nop

    // 0x800E1228: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800E122C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E1230: nop

    // 0x800E1234: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800E1238: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E123C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800E1240: addiu       $t8, $t8, -0x700C
    ctx->r24 = ADD32(ctx->r24, -0X700C);
    // 0x800E1244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1248: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800E124C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E1250: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x800E1254: jal         0x8001C0EC
    // 0x800E1258: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E1258: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800E125C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1260: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1264: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E1268: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E126C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E1270: jal         0x8001ABF4
    // 0x800E1274: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E1274: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E1278: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E127C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E1280: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E1284: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1288: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E128C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E1290: jal         0x8001ABF4
    // 0x800E1294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E1294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E1298: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E129C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E12A0: jal         0x8002A46C
    // 0x800E12A4: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800E12A4: nop

    after_3:
    // 0x800E12A8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E12AC: nop

    // 0x800E12B0: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800E12B4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E12B8: nop

    // 0x800E12BC: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800E12C0: nop

    // 0x800E12C4: swc1        $f6, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f6.u32l;
    // 0x800E12C8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800E12CC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800E12D0: sh          $t1, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r9;
    // 0x800E12D4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E12D8: nop

    // 0x800E12DC: sh          $zero, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = 0;
L_800E12E0:
    // 0x800E12E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E12E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E12E8: jal         0x8001B62C
    // 0x800E12EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x800E12EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800E12F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800E12F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E12F8: nop

    // 0x800E12FC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800E1300: nop

    // 0x800E1304: bc1f        L_800E1590
    if (!c1cs) {
        // 0x800E1308: nop
    
            goto L_800E1590;
    }
    // 0x800E1308: nop

    // 0x800E130C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1310: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1314: jal         0x8001B62C
    // 0x800E1318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x800E1318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800E131C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x800E1320: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E1324: nop

    // 0x800E1328: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x800E132C: nop

    // 0x800E1330: bc1f        L_800E1544
    if (!c1cs) {
        // 0x800E1334: nop
    
            goto L_800E1544;
    }
    // 0x800E1334: nop

    // 0x800E1338: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E133C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E1340: lh          $t5, 0xAA($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAA);
    // 0x800E1344: nop

    // 0x800E1348: bne         $t5, $at, L_800E1544
    if (ctx->r13 != ctx->r1) {
        // 0x800E134C: nop
    
            goto L_800E1544;
    }
    // 0x800E134C: nop

    // 0x800E1350: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
L_800E1354:
    // 0x800E1354: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E1358: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800E135C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800E1360: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800E1364: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800E1368: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x800E136C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800E1370: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800E1374: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800E1378: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800E137C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E1380: addiu       $a1, $a1, 0x4384
    ctx->r5 = ADD32(ctx->r5, 0X4384);
    // 0x800E1384: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E1388: jal         0x80027464
    // 0x800E138C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x800E138C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x800E1390: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x800E1394: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800E1398: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E139C: beq         $t7, $at, L_800E1508
    if (ctx->r15 == ctx->r1) {
        // 0x800E13A0: nop
    
            goto L_800E1508;
    }
    // 0x800E13A0: nop

    // 0x800E13A4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800E13A8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E13AC: addiu       $a3, $a3, -0x6C54
    ctx->r7 = ADD32(ctx->r7, -0X6C54);
    // 0x800E13B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E13B4: jal         0x8001ABF4
    // 0x800E13B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x800E13B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x800E13BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E13C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E13C4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800E13C8: jal         0x80026F10
    // 0x800E13CC: nop

    func_80026F10(rdram, ctx);
        goto after_8;
    // 0x800E13CC: nop

    after_8:
    // 0x800E13D0: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x800E13D4: nop

    // 0x800E13D8: bne         $t8, $zero, L_800E140C
    if (ctx->r24 != 0) {
        // 0x800E13DC: nop
    
            goto L_800E140C;
    }
    // 0x800E13DC: nop

    // 0x800E13E0: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800E13E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E13E8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800E13EC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800E13F0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800E13F4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800E13F8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800E13FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E1400: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800E1404: b           L_800E14B8
    // 0x800E1408: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
        goto L_800E14B8;
    // 0x800E1408: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
L_800E140C:
    // 0x800E140C: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x800E1410: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E1414: bne         $t1, $at, L_800E144C
    if (ctx->r9 != ctx->r1) {
        // 0x800E1418: nop
    
            goto L_800E144C;
    }
    // 0x800E1418: nop

    // 0x800E141C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x800E1420: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800E1424: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800E1428: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800E142C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800E1430: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800E1434: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800E1438: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800E143C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E1440: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800E1444: b           L_800E14B8
    // 0x800E1448: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
        goto L_800E14B8;
    // 0x800E1448: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
L_800E144C:
    // 0x800E144C: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x800E1450: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E1454: bne         $t2, $at, L_800E148C
    if (ctx->r10 != ctx->r1) {
        // 0x800E1458: nop
    
            goto L_800E148C;
    }
    // 0x800E1458: nop

    // 0x800E145C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800E1460: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800E1464: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800E1468: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800E146C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E1470: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800E1474: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800E1478: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800E147C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E1480: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800E1484: b           L_800E14B8
    // 0x800E1488: swc1        $f18, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f18.u32l;
        goto L_800E14B8;
    // 0x800E1488: swc1        $f18, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f18.u32l;
L_800E148C:
    // 0x800E148C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800E1490: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800E1494: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800E1498: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800E149C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E14A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E14A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800E14A8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800E14AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E14B0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800E14B4: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
L_800E14B8:
    // 0x800E14B8: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800E14BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E14C0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800E14C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800E14C8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800E14CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800E14D0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800E14D4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800E14D8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800E14DC: sh          $t9, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r25;
    // 0x800E14E0: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800E14E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E14E8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800E14EC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800E14F0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800E14F4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800E14F8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800E14FC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800E1500: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800E1504: sh          $t3, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r11;
L_800E1508:
    // 0x800E1508: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x800E150C: nop

    // 0x800E1510: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800E1514: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800E1518: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800E151C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x800E1520: bne         $at, $zero, L_800E1354
    if (ctx->r1 != 0) {
        // 0x800E1524: sh          $t6, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r14;
            goto L_800E1354;
    }
    // 0x800E1524: sh          $t6, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r14;
    // 0x800E1528: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E152C: nop

    // 0x800E1530: lh          $t9, 0xAA($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XAA);
    // 0x800E1534: nop

    // 0x800E1538: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x800E153C: b           L_800E1588
    // 0x800E1540: sh          $t1, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r9;
        goto L_800E1588;
    // 0x800E1540: sh          $t1, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r9;
L_800E1544:
    // 0x800E1544: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E1548: nop

    // 0x800E154C: lh          $t3, 0xAA($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XAA);
    // 0x800E1550: nop

    // 0x800E1554: bne         $t3, $zero, L_800E1588
    if (ctx->r11 != 0) {
        // 0x800E1558: nop
    
            goto L_800E1588;
    }
    // 0x800E1558: nop

    // 0x800E155C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1560: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1564: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    // 0x800E1568: jal         0x80029EF8
    // 0x800E156C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_9;
    // 0x800E156C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_9:
    // 0x800E1570: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E1574: nop

    // 0x800E1578: lh          $t5, 0xAA($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAA);
    // 0x800E157C: nop

    // 0x800E1580: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800E1584: sh          $t6, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r14;
L_800E1588:
    // 0x800E1588: b           L_800E15A0
    // 0x800E158C: nop

        goto L_800E15A0;
    // 0x800E158C: nop

L_800E1590:
    // 0x800E1590: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E1594: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E1598: nop

    // 0x800E159C: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
L_800E15A0:
    // 0x800E15A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E15A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E15A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E15AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E15B0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E15B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E15B8: jal         0x80029F58
    // 0x800E15BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_10;
    // 0x800E15BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x800E15C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E15C4: bne         $v0, $at, L_800E15DC
    if (ctx->r2 != ctx->r1) {
        // 0x800E15C8: nop
    
            goto L_800E15DC;
    }
    // 0x800E15C8: nop

    // 0x800E15CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E15D0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800E15D4: nop

    // 0x800E15D8: swc1        $f10, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f10.u32l;
L_800E15DC:
    // 0x800E15DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E15E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E15E4: jal         0x8001B4AC
    // 0x800E15E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_11;
    // 0x800E15E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800E15EC: beq         $v0, $zero, L_800E1624
    if (ctx->r2 == 0) {
        // 0x800E15F0: nop
    
            goto L_800E1624;
    }
    // 0x800E15F0: nop

    // 0x800E15F4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800E15F8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800E15FC: sh          $t9, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r25;
    // 0x800E1600: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E1604: nop

    // 0x800E1608: sh          $zero, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = 0;
    // 0x800E160C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E1610: nop

    // 0x800E1614: sh          $zero, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = 0;
    // 0x800E1618: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800E161C: nop

    // 0x800E1620: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800E1624:
    // 0x800E1624: b           L_800E162C
    // 0x800E1628: nop

        goto L_800E162C;
    // 0x800E1628: nop

L_800E162C:
    // 0x800E162C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E1630: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E1634: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E1638: jr          $ra
    // 0x800E163C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800E163C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800D9044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9044: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D9048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D904C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D9050: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D9054: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D9058: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D905C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D9060: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D9064: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D9068: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D906C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D9070: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D9074: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D9078: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D907C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D9080: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D9084: addiu       $a1, $a1, 0x427C
    ctx->r5 = ADD32(ctx->r5, 0X427C);
    // 0x800D9088: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D908C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D9090: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D9094: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D9098: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D909C: jal         0x80027464
    // 0x800D90A0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D90A0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D90A4: b           L_800D90AC
    // 0x800D90A8: nop

        goto L_800D90AC;
    // 0x800D90A8: nop

L_800D90AC:
    // 0x800D90AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D90B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D90B4: jr          $ra
    // 0x800D90B8: nop

    return;
    // 0x800D90B8: nop

;}
RECOMP_FUNC void func_800FBF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FBF10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FBF14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FBF18: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800FBF1C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800FBF20: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800FBF24: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800FBF28: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800FBF2C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800FBF30: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800FBF34: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800FBF38: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800FBF3C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800FBF40: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800FBF44: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800FBF48: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FBF4C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800FBF50: addiu       $a1, $a1, 0x3EBC
    ctx->r5 = ADD32(ctx->r5, 0X3EBC);
    // 0x800FBF54: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800FBF58: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800FBF5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FBF60: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FBF64: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800FBF68: jal         0x80027464
    // 0x800FBF6C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800FBF6C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800FBF70: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800FBF74: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800FBF78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FBF7C: beq         $t1, $at, L_800FC1C0
    if (ctx->r9 == ctx->r1) {
        // 0x800FBF80: nop
    
            goto L_800FC1C0;
    }
    // 0x800FBF80: nop

    // 0x800FBF84: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800FBF88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FBF8C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800FBF90: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800FBF94: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800FBF98: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800FBF9C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800FBFA0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800FBFA4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FBFA8: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800FBFAC: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x800FBFB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FBFB4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800FBFB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FBFBC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800FBFC0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FBFC4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800FBFC8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800FBFCC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800FBFD0: sh          $t5, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r13;
    // 0x800FBFD4: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x800FBFD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FBFDC: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x800FBFE0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800FBFE4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800FBFE8: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800FBFEC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800FBFF0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800FBFF4: addiu       $t9, $zero, 0x258
    ctx->r25 = ADD32(0, 0X258);
    // 0x800FBFF8: sh          $t9, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r25;
    // 0x800FBFFC: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800FC000: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FC004: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800FC008: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800FC00C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800FC010: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800FC014: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800FC018: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800FC01C: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x800FC020: sh          $t1, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r9;
    // 0x800FC024: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x800FC028: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FC02C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800FC030: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800FC034: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FC038: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800FC03C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FC040: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800FC044: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x800FC048: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800FC04C: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x800FC050: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FC054: lh          $t8, 0xA($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XA);
    // 0x800FC058: nop

    // 0x800FC05C: bne         $t8, $at, L_800FC074
    if (ctx->r24 != ctx->r1) {
        // 0x800FC060: nop
    
            goto L_800FC074;
    }
    // 0x800FC060: nop

    // 0x800FC064: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800FC068: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800FC06C: nop

    // 0x800FC070: sh          $zero, 0xA($t6)
    MEM_H(0XA, ctx->r14) = 0;
L_800FC074:
    // 0x800FC074: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800FC078: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x800FC07C: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800FC080: lh          $t0, 0xA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA);
    // 0x800FC084: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800FC088: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800FC08C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800FC090: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800FC094: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800FC098: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FC09C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800FC0A0: bgez        $t0, L_800FC0B4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800FC0A4: andi        $t3, $t0, 0x3
        ctx->r11 = ctx->r8 & 0X3;
            goto L_800FC0B4;
    }
    // 0x800FC0A4: andi        $t3, $t0, 0x3
    ctx->r11 = ctx->r8 & 0X3;
    // 0x800FC0A8: beq         $t3, $zero, L_800FC0B4
    if (ctx->r11 == 0) {
        // 0x800FC0AC: nop
    
            goto L_800FC0B4;
    }
    // 0x800FC0AC: nop

    // 0x800FC0B0: addiu       $t3, $t3, -0x4
    ctx->r11 = ADD32(ctx->r11, -0X4);
L_800FC0B4:
    // 0x800FC0B4: sh          $t3, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r11;
    // 0x800FC0B8: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x800FC0BC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800FC0C0: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800FC0C4: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800FC0C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FC0CC: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800FC0D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FC0D4: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800FC0D8: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x800FC0DC: lh          $t6, 0xA8($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XA8);
    // 0x800FC0E0: nop

    // 0x800FC0E4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800FC0E8: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x800FC0EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800FC0F0: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x800FC0F4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800FC0F8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800FC0FC: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x800FC100: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800FC104: nop

    // 0x800FC108: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FC10C: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
    // 0x800FC110: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x800FC114: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FC118: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800FC11C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800FC120: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800FC124: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800FC128: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800FC12C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800FC130: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800FC134: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x800FC138: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FC13C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800FC140: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800FC144: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800FC148: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800FC14C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800FC150: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800FC154: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800FC158: sh          $t3, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r11;
    // 0x800FC15C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800FC160: addiu       $t7, $t7, 0x7504
    ctx->r15 = ADD32(ctx->r15, 0X7504);
    // 0x800FC164: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800FC168: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800FC16C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FC170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FC174: jal         0x8001C0EC
    // 0x800FC178: addiu       $a3, $zero, 0x1A7
    ctx->r7 = ADD32(0, 0X1A7);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800FC178: addiu       $a3, $zero, 0x1A7
    ctx->r7 = ADD32(0, 0X1A7);
    after_1:
    // 0x800FC17C: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800FC180: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800FC184: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FC188: jal         0x80019448
    // 0x800FC18C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x800FC18C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x800FC190: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800FC194: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800FC198: addiu       $a3, $a3, 0x758C
    ctx->r7 = ADD32(ctx->r7, 0X758C);
    // 0x800FC19C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FC1A0: jal         0x8001ABF4
    // 0x800FC1A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800FC1A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800FC1A8: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800FC1AC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800FC1B0: addiu       $a3, $a3, 0x7554
    ctx->r7 = ADD32(ctx->r7, 0X7554);
    // 0x800FC1B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FC1B8: jal         0x8001ABF4
    // 0x800FC1BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x800FC1BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_800FC1C0:
    // 0x800FC1C0: b           L_800FC1C8
    // 0x800FC1C4: nop

        goto L_800FC1C8;
    // 0x800FC1C4: nop

L_800FC1C8:
    // 0x800FC1C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC1CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FC1D0: jr          $ra
    // 0x800FC1D4: nop

    return;
    // 0x800FC1D4: nop

;}
RECOMP_FUNC void func_800A0698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0698: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A069C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A06A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A06A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A06A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A06AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A06B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A06B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A06B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A06BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A06C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A06C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A06C8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A06CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A06D0: nop

    // 0x800A06D4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A06D8: nop

    // 0x800A06DC: bne         $t1, $zero, L_800A0724
    if (ctx->r9 != 0) {
        // 0x800A06E0: nop
    
            goto L_800A0724;
    }
    // 0x800A06E0: nop

    // 0x800A06E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A06E8: nop

    // 0x800A06EC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800A06F0: nop

    // 0x800A06F4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800A06F8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800A06FC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A0700: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x800A0704: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x800A0708: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A070C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A0710: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A0714: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x800A0718: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A071C: jal         0x800175F0
    // 0x800A0720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800A0720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_800A0724:
    // 0x800A0724: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A0728: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A072C: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x800A0730: nop

    // 0x800A0734: bne         $t8, $at, L_800A089C
    if (ctx->r24 != ctx->r1) {
        // 0x800A0738: nop
    
            goto L_800A089C;
    }
    // 0x800A0738: nop

    // 0x800A073C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A0740: nop

    // 0x800A0744: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800A0748: nop

    // 0x800A074C: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x800A0750: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x800A0754: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A0758: jal         0x800A0580
    // 0x800A075C: nop

    func_800A0580(rdram, ctx);
        goto after_1;
    // 0x800A075C: nop

    after_1:
    // 0x800A0760: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A0764: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800A0768: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800A076C: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x800A0770: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
L_800A0774:
    // 0x800A0774: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800A0778: jal         0x80026E58
    // 0x800A077C: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_2;
    // 0x800A077C: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    after_2:
    // 0x800A0780: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800A0784: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800A0788: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A078C: bne         $t5, $at, L_800A079C
    if (ctx->r13 != ctx->r1) {
        // 0x800A0790: nop
    
            goto L_800A079C;
    }
    // 0x800A0790: nop

    // 0x800A0794: b           L_800A089C
    // 0x800A0798: nop

        goto L_800A089C;
    // 0x800A0798: nop

L_800A079C:
    // 0x800A079C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800A07A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A07A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A07A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A07AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A07B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A07B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A07B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A07BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A07C0: lh          $t8, 0x41FE($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41FE);
    // 0x800A07C4: lh          $t1, 0xAE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAE);
    // 0x800A07C8: nop

    // 0x800A07CC: bne         $t8, $t1, L_800A0884
    if (ctx->r24 != ctx->r9) {
        // 0x800A07D0: nop
    
            goto L_800A0884;
    }
    // 0x800A07D0: nop

    // 0x800A07D4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800A07D8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800A07DC: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x800A07E0: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x800A07E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A07E8: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x800A07EC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A07F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A07F4: lh          $t4, 0x41F4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F4);
    // 0x800A07F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A07FC: bne         $t4, $at, L_800A0830
    if (ctx->r12 != ctx->r1) {
        // 0x800A0800: nop
    
            goto L_800A0830;
    }
    // 0x800A0800: nop

    // 0x800A0804: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800A0808: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A080C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800A0810: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800A0814: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A0818: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800A081C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A0820: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A0824: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800A0828: b           L_800A0858
    // 0x800A082C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
        goto L_800A0858;
    // 0x800A082C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
L_800A0830:
    // 0x800A0830: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800A0834: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0838: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800A083C: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800A0840: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A0844: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800A0848: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A084C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A0850: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800A0854: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800A0858:
    // 0x800A0858: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800A085C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0860: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x800A0864: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x800A0868: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A086C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x800A0870: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A0874: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A0878: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A087C: b           L_800A089C
    // 0x800A0880: nop

        goto L_800A089C;
    // 0x800A0880: nop

L_800A0884:
    // 0x800A0884: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800A0888: nop

    // 0x800A088C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800A0890: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800A0894: b           L_800A0774
    // 0x800A0898: nop

        goto L_800A0774;
    // 0x800A0898: nop

L_800A089C:
    // 0x800A089C: b           L_800A08A4
    // 0x800A08A0: nop

        goto L_800A08A4;
    // 0x800A08A0: nop

L_800A08A4:
    // 0x800A08A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A08A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A08AC: jr          $ra
    // 0x800A08B0: nop

    return;
    // 0x800A08B0: nop

;}
RECOMP_FUNC void func_800B85C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B85C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B85C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B85C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B85CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B85D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B85D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B85D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B85DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B85E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B85E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B85E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B85EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B85F0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800B85F4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B85F8: nop

    // 0x800B85FC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B8600: nop

    // 0x800B8604: bne         $t1, $zero, L_800B8654
    if (ctx->r9 != 0) {
        // 0x800B8608: nop
    
            goto L_800B8654;
    }
    // 0x800B8608: nop

    // 0x800B860C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B8610: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B8614: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B8618: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800B861C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B8620: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B8624: nop

    // 0x800B8628: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B862C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800B8630: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B8634: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B8638: nop

    // 0x800B863C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B8640: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800B8644: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B8648: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B864C: nop

    // 0x800B8650: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
L_800B8654:
    // 0x800B8654: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8658: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B865C: jal         0x80029C40
    // 0x800B8660: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800B8660: nop

    after_0:
    // 0x800B8664: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B866C: jal         0x80029D04
    // 0x800B8670: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800B8670: nop

    after_1:
    // 0x800B8674: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B8678: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800B867C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800B8680: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800B8684: jal         0x80015538
    // 0x800B8688: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800B8688: nop

    after_2:
    // 0x800B868C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B8690: nop

    // 0x800B8694: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800B8698: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x800B869C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B86A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B86A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B86A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B86AC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800B86B0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800B86B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B86B8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B86BC: jal         0x800295C0
    // 0x800B86C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x800B86C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x800B86C4: beq         $v0, $zero, L_800B86E4
    if (ctx->r2 == 0) {
        // 0x800B86C8: nop
    
            goto L_800B86E4;
    }
    // 0x800B86C8: nop

    // 0x800B86CC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B86D0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800B86D4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800B86D8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B86DC: nop

    // 0x800B86E0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800B86E4:
    // 0x800B86E4: b           L_800B86EC
    // 0x800B86E8: nop

        goto L_800B86EC;
    // 0x800B86E8: nop

L_800B86EC:
    // 0x800B86EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B86F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800B86F4: jr          $ra
    // 0x800B86F8: nop

    return;
    // 0x800B86F8: nop

;}
RECOMP_FUNC void func_80081D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081D78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80081D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80081D80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80081D84: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80081D88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081D8C: sh          $t6, -0x1BCC($at)
    MEM_H(-0X1BCC, ctx->r1) = ctx->r14;
    // 0x80081D90: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80081D94: lh          $t7, -0x1BCE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1BCE);
    // 0x80081D98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081D9C: sw          $t7, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r15;
    // 0x80081DA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081DA4: sb          $zero, 0x7638($at)
    MEM_B(0X7638, ctx->r1) = 0;
    // 0x80081DA8: jal         0x800819E0
    // 0x80081DAC: nop

    func_800819E0(rdram, ctx);
        goto after_0;
    // 0x80081DAC: nop

    after_0:
    // 0x80081DB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081DB4: sb          $zero, 0x6606($at)
    MEM_B(0X6606, ctx->r1) = 0;
    // 0x80081DB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081DBC: sb          $zero, 0x660A($at)
    MEM_B(0X660A, ctx->r1) = 0;
    // 0x80081DC0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80081DC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80081DC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081DCC: sw          $t8, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r24;
    // 0x80081DD0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80081DD4: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80081DD8: addiu       $t0, $t9, 0x150
    ctx->r8 = ADD32(ctx->r25, 0X150);
    // 0x80081DDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081DE0: sw          $t0, 0x7544($at)
    MEM_W(0X7544, ctx->r1) = ctx->r8;
    // 0x80081DE4: jal         0x80019C84
    // 0x80081DE8: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x80081DE8: nop

    after_1:
    // 0x80081DEC: jal         0x80019D2C
    // 0x80081DF0: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x80081DF0: nop

    after_2:
    // 0x80081DF4: jal         0x8001A258
    // 0x80081DF8: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x80081DF8: nop

    after_3:
    // 0x80081DFC: jal         0x80088B80
    // 0x80081E00: nop

    func_80088B80(rdram, ctx);
        goto after_4;
    // 0x80081E00: nop

    after_4:
    // 0x80081E04: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80081E08: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x80081E0C: nop

    // 0x80081E10: slti        $at, $t1, 0x80
    ctx->r1 = SIGNED(ctx->r9) < 0X80 ? 1 : 0;
    // 0x80081E14: bne         $at, $zero, L_80081E3C
    if (ctx->r1 != 0) {
        // 0x80081E18: nop
    
            goto L_80081E3C;
    }
    // 0x80081E18: nop

    // 0x80081E1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80081E20: lw          $a0, -0x1BD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1BD8);
    // 0x80081E24: jal         0x80000F8C
    // 0x80081E28: addiu       $a0, $a0, -0x80
    ctx->r4 = ADD32(ctx->r4, -0X80);
    func_80000F8C(rdram, ctx);
        goto after_5;
    // 0x80081E28: addiu       $a0, $a0, -0x80
    ctx->r4 = ADD32(ctx->r4, -0X80);
    after_5:
    // 0x80081E2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80081E30: lw          $a0, -0x1BD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1BD8);
    // 0x80081E34: jal         0x80088EAC
    // 0x80081E38: addiu       $a0, $a0, -0x80
    ctx->r4 = ADD32(ctx->r4, -0X80);
    func_80088EAC(rdram, ctx);
        goto after_6;
    // 0x80081E38: addiu       $a0, $a0, -0x80
    ctx->r4 = ADD32(ctx->r4, -0X80);
    after_6:
L_80081E3C:
    // 0x80081E3C: jal         0x8001E954
    // 0x80081E40: lui         $a0, 0x802D
    ctx->r4 = S32(0X802D << 16);
    Set_DecompressHeap(rdram, ctx);
        goto after_7;
    // 0x80081E40: lui         $a0, 0x802D
    ctx->r4 = S32(0X802D << 16);
    after_7:
    // 0x80081E44: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80081E48: lw          $t2, -0x1BD8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1BD8);
    // 0x80081E4C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80081E50: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80081E54: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80081E58: lw          $t4, -0x7DC8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X7DC8);
    // 0x80081E5C: nop

    // 0x80081E60: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80081E64: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80081E68: lb          $t5, -0x1C24($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1C24);
    // 0x80081E6C: nop

    // 0x80081E70: bne         $t5, $zero, L_80081E98
    if (ctx->r13 != 0) {
        // 0x80081E74: nop
    
            goto L_80081E98;
    }
    // 0x80081E74: nop

    // 0x80081E78: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80081E7C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x80081E80: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x80081E84: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x80081E88: jal         0x8001EA68
    // 0x80081E8C: nop

    DecompressFile(rdram, ctx);
        goto after_8;
    // 0x80081E8C: nop

    after_8:
    // 0x80081E90: b           L_80081EB0
    // 0x80081E94: nop

        goto L_80081EB0;
    // 0x80081E94: nop

L_80081E98:
    // 0x80081E98: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80081E9C: lui         $a2, 0x12
    ctx->r6 = S32(0X12 << 16);
    // 0x80081EA0: addiu       $a2, $a2, 0x7FF0
    ctx->r6 = ADD32(ctx->r6, 0X7FF0);
    // 0x80081EA4: addiu       $a1, $a1, 0x6CB0
    ctx->r5 = ADD32(ctx->r5, 0X6CB0);
    // 0x80081EA8: jal         0x8001E98C
    // 0x80081EAC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    LoadFile(rdram, ctx);
        goto after_9;
    // 0x80081EAC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_9:
L_80081EB0:
    // 0x80081EB0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80081EB4: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x80081EB8: lw          $a1, 0xC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XC);
    // 0x80081EBC: lw          $a2, 0x10($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X10);
    // 0x80081EC0: jal         0x8001EB68
    // 0x80081EC4: nop

    func_8001EB68(rdram, ctx);
        goto after_10;
    // 0x80081EC4: nop

    after_10:
    // 0x80081EC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80081ECC: lw          $a0, -0x1BD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1BD8);
    // 0x80081ED0: jal         0x80000FF4
    // 0x80081ED4: nop

    func_80000FF4(rdram, ctx);
        goto after_11;
    // 0x80081ED4: nop

    after_11:
    // 0x80081ED8: jal         0x8006707C
    // 0x80081EDC: nop

    func_8006707C(rdram, ctx);
        goto after_12;
    // 0x80081EDC: nop

    after_12:
    // 0x80081EE0: jal         0x800695A0
    // 0x80081EE4: nop

    func_800695A0(rdram, ctx);
        goto after_13;
    // 0x80081EE4: nop

    after_13:
    // 0x80081EE8: jal         0x8006E088
    // 0x80081EEC: nop

    Skybox_LoadFromID(rdram, ctx);
        goto after_14;
    // 0x80081EEC: nop

    after_14:
    // 0x80081EF0: jal         0x8002629C
    // 0x80081EF4: nop

    func_8002629C(rdram, ctx);
        goto after_15;
    // 0x80081EF4: nop

    after_15:
    // 0x80081EF8: jal         0x80069700
    // 0x80081EFC: nop

    func_80069700(rdram, ctx);
        goto after_16;
    // 0x80081EFC: nop

    after_16:
    // 0x80081F00: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80081F04: lw          $t8, -0x1BD8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1BD8);
    // 0x80081F08: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80081F0C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80081F10: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80081F14: lw          $t0, -0x4C04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4C04);
    // 0x80081F18: nop

    // 0x80081F1C: lw          $t9, 0x24($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X24);
    // 0x80081F20: nop

    // 0x80081F24: jalr        $t9
    // 0x80081F28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x80081F28: nop

    after_17:
    // 0x80081F2C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80081F30: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x80081F34: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80081F38: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80081F3C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80081F40: lw          $t3, -0x4C04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4C04);
    // 0x80081F44: nop

    // 0x80081F48: lw          $t9, 0x28($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X28);
    // 0x80081F4C: nop

    // 0x80081F50: jalr        $t9
    // 0x80081F54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x80081F54: nop

    after_18:
    // 0x80081F58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081F5C: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x80081F60: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80081F64: lw          $t4, 0x65EC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X65EC);
    // 0x80081F68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80081F6C: beq         $t4, $at, L_80081FA0
    if (ctx->r12 == ctx->r1) {
        // 0x80081F70: nop
    
            goto L_80081FA0;
    }
    // 0x80081F70: nop

    // 0x80081F74: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80081F78: lbu         $t5, 0x7921($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X7921);
    // 0x80081F7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081F80: sw          $t5, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = ctx->r13;
    // 0x80081F84: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80081F88: lh          $t6, 0x4BF2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4BF2);
    // 0x80081F8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80081F90: beq         $t6, $at, L_80081FA0
    if (ctx->r14 == ctx->r1) {
        // 0x80081F94: nop
    
            goto L_80081FA0;
    }
    // 0x80081F94: nop

    // 0x80081F98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081F9C: sw          $zero, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = 0;
L_80081FA0:
    // 0x80081FA0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80081FA4: lh          $t7, 0x4BF2($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4BF2);
    // 0x80081FA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80081FAC: bne         $t7, $at, L_8008205C
    if (ctx->r15 != ctx->r1) {
        // 0x80081FB0: nop
    
            goto L_8008205C;
    }
    // 0x80081FB0: nop

    // 0x80081FB4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80081FB8: lw          $t8, 0x7778($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7778);
    // 0x80081FBC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80081FC0: lbu         $t0, 0x29($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X29);
    // 0x80081FC4: nop

    // 0x80081FC8: sb          $t0, 0x523E($at)
    MEM_B(0X523E, ctx->r1) = ctx->r8;
    // 0x80081FCC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80081FD0: lb          $t1, -0x1BF4($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1BF4);
    // 0x80081FD4: nop

    // 0x80081FD8: beq         $t1, $zero, L_80082010
    if (ctx->r9 == 0) {
        // 0x80081FDC: nop
    
            goto L_80082010;
    }
    // 0x80081FDC: nop

    // 0x80081FE0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80081FE4: addiu       $t2, $t2, -0x1D70
    ctx->r10 = ADD32(ctx->r10, -0X1D70);
    // 0x80081FE8: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x80081FEC: nop

    // 0x80081FF0: andi        $t9, $t3, 0x2000
    ctx->r25 = ctx->r11 & 0X2000;
    // 0x80081FF4: beq         $t9, $zero, L_80082010
    if (ctx->r25 == 0) {
        // 0x80081FF8: nop
    
            goto L_80082010;
    }
    // 0x80081FF8: nop

    // 0x80081FFC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80082000: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082004: sb          $t4, 0x7638($at)
    MEM_B(0X7638, ctx->r1) = ctx->r12;
    // 0x80082008: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8008200C: sb          $zero, 0x523E($at)
    MEM_B(0X523E, ctx->r1) = 0;
L_80082010:
    // 0x80082010: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80082014: lb          $t5, 0x7630($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7630);
    // 0x80082018: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008201C: bne         $t5, $at, L_80082044
    if (ctx->r13 != ctx->r1) {
        // 0x80082020: nop
    
            goto L_80082044;
    }
    // 0x80082020: nop

    // 0x80082024: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80082028: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008202C: sb          $t6, 0x7638($at)
    MEM_B(0X7638, ctx->r1) = ctx->r14;
    // 0x80082030: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80082034: sb          $zero, 0x523E($at)
    MEM_B(0X523E, ctx->r1) = 0;
    // 0x80082038: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8008203C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082040: sw          $t7, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = ctx->r15;
L_80082044:
    // 0x80082044: jal         0x800883A8
    // 0x80082048: nop

    func_800883A8(rdram, ctx);
        goto after_19;
    // 0x80082048: nop

    after_19:
    // 0x8008204C: jal         0x80088694
    // 0x80082050: nop

    func_80088694(rdram, ctx);
        goto after_20;
    // 0x80082050: nop

    after_20:
    // 0x80082054: b           L_80082064
    // 0x80082058: nop

        goto L_80082064;
    // 0x80082058: nop

L_8008205C:
    // 0x8008205C: jal         0x800889A8
    // 0x80082060: nop

    func_800889A8(rdram, ctx);
        goto after_21;
    // 0x80082060: nop

    after_21:
L_80082064:
    // 0x80082064: jal         0x8007F580
    // 0x80082068: nop

    func_8007F580(rdram, ctx);
        goto after_22;
    // 0x80082068: nop

    after_22:
    // 0x8008206C: jal         0x8007957C
    // 0x80082070: nop

    func_8007957C(rdram, ctx);
        goto after_23;
    // 0x80082070: nop

    after_23:
    // 0x80082074: jal         0x8007E720
    // 0x80082078: nop

    func_8007E720(rdram, ctx);
        goto after_24;
    // 0x80082078: nop

    after_24:
    // 0x8008207C: jal         0x8006E160
    // 0x80082080: nop

    func_8006E160(rdram, ctx);
        goto after_25;
    // 0x80082080: nop

    after_25:
    // 0x80082084: jal         0x80076458
    // 0x80082088: nop

    func_80076458(rdram, ctx);
        goto after_26;
    // 0x80082088: nop

    after_26:
    // 0x8008208C: jal         0x80076640
    // 0x80082090: nop

    func_80076640(rdram, ctx);
        goto after_27;
    // 0x80082090: nop

    after_27:
    // 0x80082094: jal         0x80063EE0
    // 0x80082098: nop

    func_80063EE0(rdram, ctx);
        goto after_28;
    // 0x80082098: nop

    after_28:
    // 0x8008209C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800820A0: sw          $zero, 0x75F0($at)
    MEM_W(0X75F0, ctx->r1) = 0;
    // 0x800820A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800820A8: sb          $zero, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = 0;
    // 0x800820AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800820B0: sb          $zero, 0x7620($at)
    MEM_B(0X7620, ctx->r1) = 0;
    // 0x800820B4: jal         0x8006AB14
    // 0x800820B8: nop

    func_8006AB14(rdram, ctx);
        goto after_29;
    // 0x800820B8: nop

    after_29:
    // 0x800820BC: jal         0x80069E38
    // 0x800820C0: nop

    func_80069E38(rdram, ctx);
        goto after_30;
    // 0x800820C0: nop

    after_30:
    // 0x800820C4: jal         0x80070A6C
    // 0x800820C8: nop

    func_80070A6C(rdram, ctx);
        goto after_31;
    // 0x800820C8: nop

    after_31:
    // 0x800820CC: jal         0x800711B4
    // 0x800820D0: nop

    func_800711B4(rdram, ctx);
        goto after_32;
    // 0x800820D0: nop

    after_32:
    // 0x800820D4: jal         0x80070644
    // 0x800820D8: nop

    func_80070644(rdram, ctx);
        goto after_33;
    // 0x800820D8: nop

    after_33:
    // 0x800820DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800820E0: lb          $t8, 0x7630($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7630);
    // 0x800820E4: nop

    // 0x800820E8: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x800820EC: beq         $at, $zero, L_80082118
    if (ctx->r1 == 0) {
        // 0x800820F0: nop
    
            goto L_80082118;
    }
    // 0x800820F0: nop

    // 0x800820F4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800820F8: lb          $t0, 0x7628($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X7628);
    // 0x800820FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80082100: bne         $t0, $at, L_80082110
    if (ctx->r8 != ctx->r1) {
        // 0x80082104: nop
    
            goto L_80082110;
    }
    // 0x80082104: nop

    // 0x80082108: jal         0x80070664
    // 0x8008210C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80070664(rdram, ctx);
        goto after_34;
    // 0x8008210C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_34:
L_80082110:
    // 0x80082110: b           L_80082134
    // 0x80082114: nop

        goto L_80082134;
    // 0x80082114: nop

L_80082118:
    // 0x80082118: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008211C: lb          $t1, 0x7630($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X7630);
    // 0x80082120: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80082124: bne         $t1, $at, L_80082134
    if (ctx->r9 != ctx->r1) {
        // 0x80082128: nop
    
            goto L_80082134;
    }
    // 0x80082128: nop

    // 0x8008212C: jal         0x80070664
    // 0x80082130: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80070664(rdram, ctx);
        goto after_35;
    // 0x80082130: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_35:
L_80082134:
    // 0x80082134: jal         0x8006AA0C
    // 0x80082138: nop

    func_8006AA0C(rdram, ctx);
        goto after_36;
    // 0x80082138: nop

    after_36:
    // 0x8008213C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082140: sb          $zero, -0x1C34($at)
    MEM_B(-0X1C34, ctx->r1) = 0;
    // 0x80082144: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082148: sb          $zero, -0x1C33($at)
    MEM_B(-0X1C33, ctx->r1) = 0;
    // 0x8008214C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80082150: lw          $t2, -0x1BD8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1BD8);
    // 0x80082154: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80082158: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008215C: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80082160: lw          $t9, -0x4C04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4C04);
    // 0x80082164: nop

    // 0x80082168: lbu         $t4, 0x7($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X7);
    // 0x8008216C: nop

    // 0x80082170: sb          $t4, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r12;
    // 0x80082174: lbu         $t5, 0x1F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1F);
    // 0x80082178: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8008217C: beq         $t5, $at, L_8008219C
    if (ctx->r13 == ctx->r1) {
        // 0x80082180: nop
    
            goto L_8008219C;
    }
    // 0x80082180: nop

    // 0x80082184: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x80082188: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8008218C: jal         0x80016F38
    // 0x80082190: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_37;
    // 0x80082190: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_37:
    // 0x80082194: b           L_800821AC
    // 0x80082198: nop

        goto L_800821AC;
    // 0x80082198: nop

L_8008219C:
    // 0x8008219C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800821A0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800821A4: jal         0x80016F38
    // 0x800821A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_38;
    // 0x800821A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_38:
L_800821AC:
    // 0x800821AC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x800821B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x800821B4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x800821B8: jal         0x8001D244
    // 0x800821BC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_39;
    // 0x800821BC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_39:
    // 0x800821C0: jal         0x8001D284
    // 0x800821C4: nop

    func_8001D284(rdram, ctx);
        goto after_40;
    // 0x800821C4: nop

    after_40:
    // 0x800821C8: b           L_800821D0
    // 0x800821CC: nop

        goto L_800821D0;
    // 0x800821CC: nop

L_800821D0:
    // 0x800821D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800821D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800821D8: jr          $ra
    // 0x800821DC: nop

    return;
    // 0x800821DC: nop

;}
RECOMP_FUNC void func_8005DA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005DA00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005DA04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005DA08: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005DA0C: lb          $t6, 0x4790($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4790);
    // 0x8005DA10: nop

    // 0x8005DA14: bne         $t6, $zero, L_8005DA2C
    if (ctx->r14 != 0) {
        // 0x8005DA18: nop
    
            goto L_8005DA2C;
    }
    // 0x8005DA18: nop

    // 0x8005DA1C: b           L_8005DD70
    // 0x8005DA20: nop

        goto L_8005DD70;
    // 0x8005DA20: nop

    // 0x8005DA24: b           L_8005DA70
    // 0x8005DA28: nop

        goto L_8005DA70;
    // 0x8005DA28: nop

L_8005DA2C:
    // 0x8005DA2C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8005DA30: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8005DA34: lb          $t8, 0x4791($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4791);
    // 0x8005DA38: lb          $t7, 0x4790($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4790);
    // 0x8005DA3C: nop

    // 0x8005DA40: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8005DA44: beq         $at, $zero, L_8005DA70
    if (ctx->r1 == 0) {
        // 0x8005DA48: nop
    
            goto L_8005DA70;
    }
    // 0x8005DA48: nop

    // 0x8005DA4C: jal         0x8001EC04
    // 0x8005DA50: nop

    func_8001EC04(rdram, ctx);
        goto after_0;
    // 0x8005DA50: nop

    after_0:
    // 0x8005DA54: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005DA58: lb          $t9, 0x4790($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X4790);
    // 0x8005DA5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DA60: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8005DA64: sb          $t0, 0x4790($at)
    MEM_B(0X4790, ctx->r1) = ctx->r8;
    // 0x8005DA68: b           L_8005DD70
    // 0x8005DA6C: nop

        goto L_8005DD70;
    // 0x8005DA6C: nop

L_8005DA70:
    // 0x8005DA70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DA74: sb          $zero, 0x4790($at)
    MEM_B(0X4790, ctx->r1) = 0;
    // 0x8005DA78: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8005DA7C: lw          $t1, 0x4794($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4794);
    // 0x8005DA80: nop

    // 0x8005DA84: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8005DA88: nop

    // 0x8005DA8C: bne         $t2, $zero, L_8005DAD8
    if (ctx->r10 != 0) {
        // 0x8005DA90: nop
    
            goto L_8005DAD8;
    }
    // 0x8005DA90: nop

    // 0x8005DA94: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8005DA98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DA9C: sb          $t3, 0x47E5($at)
    MEM_B(0X47E5, ctx->r1) = ctx->r11;
    // 0x8005DAA0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8005DAA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DAA8: sb          $t4, 0x47E6($at)
    MEM_B(0X47E6, ctx->r1) = ctx->r12;
    // 0x8005DAAC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8005DAB0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8005DAB4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8005DAB8: jal         0x8001D244
    // 0x8005DABC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_1;
    // 0x8005DABC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x8005DAC0: jal         0x8001D2C0
    // 0x8005DAC4: nop

    func_8001D2C0(rdram, ctx);
        goto after_2;
    // 0x8005DAC4: nop

    after_2:
    // 0x8005DAC8: jal         0x8001EBE8
    // 0x8005DACC: nop

    func_8001EBE8(rdram, ctx);
        goto after_3;
    // 0x8005DACC: nop

    after_3:
    // 0x8005DAD0: b           L_8005DD70
    // 0x8005DAD4: nop

        goto L_8005DD70;
    // 0x8005DAD4: nop

L_8005DAD8:
    // 0x8005DAD8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8005DADC:
    // 0x8005DADC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8005DAE0: jal         0x8001A928
    // 0x8005DAE4: nop

    func_8001A928(rdram, ctx);
        goto after_4;
    // 0x8005DAE4: nop

    after_4:
    // 0x8005DAE8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8005DAEC: nop

    // 0x8005DAF0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8005DAF4: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x8005DAF8: bne         $at, $zero, L_8005DADC
    if (ctx->r1 != 0) {
        // 0x8005DAFC: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_8005DADC;
    }
    // 0x8005DAFC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8005DB00: jal         0x8001E954
    // 0x8005DB04: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    Set_DecompressHeap(rdram, ctx);
        goto after_5;
    // 0x8005DB04: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    after_5:
    // 0x8005DB08: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8005DB0C: lw          $t7, 0x4794($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4794);
    // 0x8005DB10: nop

    // 0x8005DB14: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8005DB18: nop

    // 0x8005DB1C: beq         $t8, $zero, L_8005DB40
    if (ctx->r24 == 0) {
        // 0x8005DB20: nop
    
            goto L_8005DB40;
    }
    // 0x8005DB20: nop

    // 0x8005DB24: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005DB28: lw          $t9, 0x4794($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4794);
    // 0x8005DB2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005DB30: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x8005DB34: lw          $a2, 0x4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X4);
    // 0x8005DB38: jal         0x8001EA68
    // 0x8005DB3C: nop

    DecompressFile(rdram, ctx);
        goto after_6;
    // 0x8005DB3C: nop

    after_6:
L_8005DB40:
    // 0x8005DB40: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8005DB44: lw          $t0, 0x4794($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4794);
    // 0x8005DB48: nop

    // 0x8005DB4C: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x8005DB50: nop

    // 0x8005DB54: beq         $t1, $zero, L_8005DB78
    if (ctx->r9 == 0) {
        // 0x8005DB58: nop
    
            goto L_8005DB78;
    }
    // 0x8005DB58: nop

    // 0x8005DB5C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8005DB60: lw          $t2, 0x4794($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4794);
    // 0x8005DB64: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8005DB68: lw          $a1, 0x8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X8);
    // 0x8005DB6C: lw          $a2, 0xC($t2)
    ctx->r6 = MEM_W(ctx->r10, 0XC);
    // 0x8005DB70: jal         0x8001EA68
    // 0x8005DB74: nop

    DecompressFile(rdram, ctx);
        goto after_7;
    // 0x8005DB74: nop

    after_7:
L_8005DB78:
    // 0x8005DB78: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8005DB7C: lw          $t3, 0x4794($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4794);
    // 0x8005DB80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005DB84: lw          $t4, 0x10($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X10);
    // 0x8005DB88: nop

    // 0x8005DB8C: bne         $t4, $at, L_8005DBA0
    if (ctx->r12 != ctx->r1) {
        // 0x8005DB90: nop
    
            goto L_8005DBA0;
    }
    // 0x8005DB90: nop

    // 0x8005DB94: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DB98: b           L_8005DC18
    // 0x8005DB9C: sw          $zero, 0x479C($at)
    MEM_W(0X479C, ctx->r1) = 0;
        goto L_8005DC18;
    // 0x8005DB9C: sw          $zero, 0x479C($at)
    MEM_W(0X479C, ctx->r1) = 0;
L_8005DBA0:
    // 0x8005DBA0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8005DBA4: lw          $t7, 0x4794($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4794);
    // 0x8005DBA8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8005DBAC: addiu       $t5, $t5, -0x3560
    ctx->r13 = ADD32(ctx->r13, -0X3560);
    // 0x8005DBB0: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8005DBB4: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8005DBB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DBBC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8005DBC0: sw          $t9, 0x479C($at)
    MEM_W(0X479C, ctx->r1) = ctx->r25;
    // 0x8005DBC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8005DBC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DBCC: swc1        $f4, 0x47A8($at)
    MEM_W(0X47A8, ctx->r1) = ctx->f4.u32l;
    // 0x8005DBD0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DBD4: sw          $zero, 0x47AC($at)
    MEM_W(0X47AC, ctx->r1) = 0;
    // 0x8005DBD8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DBDC: sw          $zero, 0x47B0($at)
    MEM_W(0X47B0, ctx->r1) = 0;
    // 0x8005DBE0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8005DBE4: lw          $t0, 0x479C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X479C);
    // 0x8005DBE8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DBEC: lw          $t1, 0x20($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X20);
    // 0x8005DBF0: nop

    // 0x8005DBF4: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x8005DBF8: sw          $t2, 0x47A4($at)
    MEM_W(0X47A4, ctx->r1) = ctx->r10;
    // 0x8005DBFC: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8005DC00: lw          $t3, 0x479C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X479C);
    // 0x8005DC04: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DC08: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x8005DC0C: nop

    // 0x8005DC10: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x8005DC14: sw          $t5, 0x47A0($at)
    MEM_W(0X47A0, ctx->r1) = ctx->r13;
L_8005DC18:
    // 0x8005DC18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8005DC1C:
    // 0x8005DC1C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8005DC20: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8005DC24: lw          $t7, 0x4794($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4794);
    // 0x8005DC28: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8005DC2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8005DC30: lw          $t1, 0x14($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X14);
    // 0x8005DC34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005DC38: beq         $t1, $at, L_8005DCD0
    if (ctx->r9 == ctx->r1) {
        // 0x8005DC3C: nop
    
            goto L_8005DCD0;
    }
    // 0x8005DC3C: nop

    // 0x8005DC40: lw          $t0, 0x34($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X34);
    // 0x8005DC44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005DC48: beq         $t0, $at, L_8005DCD0
    if (ctx->r8 == ctx->r1) {
        // 0x8005DC4C: nop
    
            goto L_8005DCD0;
    }
    // 0x8005DC4C: nop

    // 0x8005DC50: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8005DC54: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8005DC58: lw          $t4, 0x4794($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4794);
    // 0x8005DC5C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005DC60: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8005DC64: addiu       $t7, $t7, -0x3560
    ctx->r15 = ADD32(ctx->r15, -0X3560);
    // 0x8005DC68: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x8005DC6C: lw          $t6, 0x14($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X14);
    // 0x8005DC70: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8005DC74: lw          $a2, 0x34($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X34);
    // 0x8005DC78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005DC7C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8005DC80: jal         0x8001BD44
    // 0x8005DC84: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    func_8001BD44(rdram, ctx);
        goto after_8;
    // 0x8005DC84: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    after_8:
    // 0x8005DC88: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8005DC8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005DC90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005DC94: jal         0x8001BE6C
    // 0x8005DC98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8001BE6C(rdram, ctx);
        goto after_9;
    // 0x8005DC98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x8005DC9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005DCA0: jal         0x8001B754
    // 0x8005DCA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_10;
    // 0x8005DCA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8005DCA8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8005DCAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8005DCB0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8005DCB4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005DCB8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8005DCBC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005DCC0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8005DCC4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8005DCC8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8005DCCC: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_8005DCD0:
    // 0x8005DCD0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8005DCD4: nop

    // 0x8005DCD8: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x8005DCDC: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x8005DCE0: bne         $at, $zero, L_8005DC1C
    if (ctx->r1 != 0) {
        // 0x8005DCE4: sw          $t4, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r12;
            goto L_8005DC1C;
    }
    // 0x8005DCE4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8005DCE8: jal         0x8005C950
    // 0x8005DCEC: nop

    Demo_HandleSetAnimTextures(rdram, ctx);
        goto after_11;
    // 0x8005DCEC: nop

    after_11:
    // 0x8005DCF0: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8005DCF4: lb          $t3, 0x47E4($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X47E4);
    // 0x8005DCF8: nop

    // 0x8005DCFC: beq         $t3, $zero, L_8005DD20
    if (ctx->r11 == 0) {
        // 0x8005DD00: nop
    
            goto L_8005DD20;
    }
    // 0x8005DD00: nop

    // 0x8005DD04: jal         0x8001D1D4
    // 0x8005DD08: nop

    func_8001D1D4(rdram, ctx);
        goto after_12;
    // 0x8005DD08: nop

    after_12:
    // 0x8005DD0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005DD10: bne         $v0, $at, L_8005DD20
    if (ctx->r2 != ctx->r1) {
        // 0x8005DD14: nop
    
            goto L_8005DD20;
    }
    // 0x8005DD14: nop

    // 0x8005DD18: jal         0x8001D284
    // 0x8005DD1C: nop

    func_8001D284(rdram, ctx);
        goto after_13;
    // 0x8005DD1C: nop

    after_13:
L_8005DD20:
    // 0x8005DD20: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8005DD24: lw          $t5, 0x4794($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4794);
    // 0x8005DD28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DD2C: lb          $t7, 0x54($t5)
    ctx->r15 = MEM_B(ctx->r13, 0X54);
    // 0x8005DD30: nop

    // 0x8005DD34: sb          $t7, 0x47E4($at)
    MEM_B(0X47E4, ctx->r1) = ctx->r15;
    // 0x8005DD38: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005DD3C: lb          $t6, 0x4798($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4798);
    // 0x8005DD40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DD44: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x8005DD48: sb          $t8, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = ctx->r24;
    // 0x8005DD4C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005DD50: lw          $t9, 0x4794($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4794);
    // 0x8005DD54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DD58: addiu       $t1, $t9, 0x58
    ctx->r9 = ADD32(ctx->r25, 0X58);
    // 0x8005DD5C: sw          $t1, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r9;
    // 0x8005DD60: jal         0x8001EBE8
    // 0x8005DD64: nop

    func_8001EBE8(rdram, ctx);
        goto after_14;
    // 0x8005DD64: nop

    after_14:
    // 0x8005DD68: b           L_8005DD70
    // 0x8005DD6C: nop

        goto L_8005DD70;
    // 0x8005DD6C: nop

L_8005DD70:
    // 0x8005DD70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005DD74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005DD78: jr          $ra
    // 0x8005DD7C: nop

    return;
    // 0x8005DD7C: nop

;}
RECOMP_FUNC void func_800AC3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC3D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AC3D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AC3D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800AC3DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AC3E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AC3E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AC3E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AC3EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AC3F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AC3F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AC3F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AC3FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AC400: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AC404: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AC408: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC40C: nop

    // 0x800AC410: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AC414: nop

    // 0x800AC418: bne         $t1, $zero, L_800AC47C
    if (ctx->r9 != 0) {
        // 0x800AC41C: nop
    
            goto L_800AC47C;
    }
    // 0x800AC41C: nop

    // 0x800AC420: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC424: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AC428: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AC42C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AC430: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC434: nop

    // 0x800AC438: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AC43C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AC440: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC444: nop

    // 0x800AC448: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AC44C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC450: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x800AC454: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800AC458: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC45C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800AC460: addiu       $t8, $t8, 0x75D0
    ctx->r24 = ADD32(ctx->r24, 0X75D0);
    // 0x800AC464: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC468: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800AC46C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AC470: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800AC474: jal         0x8001C0EC
    // 0x800AC478: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800AC478: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
L_800AC47C:
    // 0x800AC47C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC480: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC484: lh          $s0, 0x108($t9)
    ctx->r16 = MEM_H(ctx->r25, 0X108);
    // 0x800AC488: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC48C: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x800AC490: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800AC494: sltiu       $t1, $s0, 0x1
    ctx->r9 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800AC498: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800AC49C: jal         0x8001BB34
    // 0x800AC4A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800AC4A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800AC4A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC4A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC4AC: jal         0x80029C40
    // 0x800AC4B0: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800AC4B0: nop

    after_2:
    // 0x800AC4B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC4B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC4BC: jal         0x80029D04
    // 0x800AC4C0: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800AC4C0: nop

    after_3:
    // 0x800AC4C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC4C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC4CC: jal         0x8001B44C
    // 0x800AC4D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800AC4D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800AC4D4: beq         $v0, $zero, L_800AC524
    if (ctx->r2 == 0) {
        // 0x800AC4D8: nop
    
            goto L_800AC524;
    }
    // 0x800AC4D8: nop

    // 0x800AC4DC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC4E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800AC4E4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800AC4E8: nop

    // 0x800AC4EC: beq         $t3, $at, L_800AC524
    if (ctx->r11 == ctx->r1) {
        // 0x800AC4F0: nop
    
            goto L_800AC524;
    }
    // 0x800AC4F0: nop

    // 0x800AC4F4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC4F8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800AC4FC: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800AC500: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC504: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800AC508: addiu       $t6, $t6, 0x75D0
    ctx->r14 = ADD32(ctx->r14, 0X75D0);
    // 0x800AC50C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC510: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800AC514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AC518: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800AC51C: jal         0x8001C0EC
    // 0x800AC520: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800AC520: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_5:
L_800AC524:
    // 0x800AC524: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC528: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AC52C: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x800AC530: nop

    // 0x800AC534: bne         $t8, $at, L_800AC564
    if (ctx->r24 != ctx->r1) {
        // 0x800AC538: nop
    
            goto L_800AC564;
    }
    // 0x800AC538: nop

    // 0x800AC53C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC540: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800AC544: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800AC548: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC54C: nop

    // 0x800AC550: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800AC554: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC558: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC55C: jal         0x8001BB34
    // 0x800AC560: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x800AC560: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_800AC564:
    // 0x800AC564: b           L_800AC56C
    // 0x800AC568: nop

        goto L_800AC56C;
    // 0x800AC568: nop

L_800AC56C:
    // 0x800AC56C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AC570: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800AC574: jr          $ra
    // 0x800AC578: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AC578: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007F688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F688: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007F68C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007F690: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8007F694: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8007F698: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007F69C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007F6A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007F6A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8007F6A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007F6AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007F6B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007F6B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007F6B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007F6BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007F6C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007F6C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007F6C8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007F6CC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007F6D0: nop

    // 0x8007F6D4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8007F6D8: nop

    // 0x8007F6DC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8007F6E0: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x8007F6E4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8007F6E8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8007F6EC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8007F6F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007F6F4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8007F6F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007F6FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007F700: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007F704: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007F708: add.s       $f22, $f10, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8007F70C: swc1        $f22, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f22.u32l;
    // 0x8007F710: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8007F714: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x8007F718: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x8007F71C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8007F720: nop

    // 0x8007F724: swc1        $f20, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f20.u32l;
    // 0x8007F728: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007F72C: nop

    // 0x8007F730: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8007F734: nop

    // 0x8007F738: slti        $at, $t8, 0x15
    ctx->r1 = SIGNED(ctx->r24) < 0X15 ? 1 : 0;
    // 0x8007F73C: bne         $at, $zero, L_8007F754
    if (ctx->r1 != 0) {
        // 0x8007F740: nop
    
            goto L_8007F754;
    }
    // 0x8007F740: nop

    // 0x8007F744: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007F748: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8007F74C: jal         0x8001A928
    // 0x8007F750: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007F750: nop

    after_0:
L_8007F754:
    // 0x8007F754: b           L_8007F75C
    // 0x8007F758: nop

        goto L_8007F75C;
    // 0x8007F758: nop

L_8007F75C:
    // 0x8007F75C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007F760: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007F764: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007F768: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007F76C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007F770: jr          $ra
    // 0x8007F774: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007F774: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800E7D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7D5C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E7D60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E7D64: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E7D68: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E7D6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E7D70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E7D74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E7D78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E7D7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7D80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E7D84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7D88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E7D8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E7D90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E7D94: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E7D98: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7D9C: nop

    // 0x800E7DA0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E7DA4: nop

    // 0x800E7DA8: bne         $t1, $zero, L_800E7E9C
    if (ctx->r9 != 0) {
        // 0x800E7DAC: nop
    
            goto L_800E7E9C;
    }
    // 0x800E7DAC: nop

    // 0x800E7DB0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7DB4: nop

    // 0x800E7DB8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E7DBC: nop

    // 0x800E7DC0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E7DC4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E7DC8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7DCC: nop

    // 0x800E7DD0: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x800E7DD4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7DD8: nop

    // 0x800E7DDC: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x800E7DE0: nop

    // 0x800E7DE4: sh          $t7, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r15;
    // 0x800E7DE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E7DEC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7DF0: nop

    // 0x800E7DF4: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
    // 0x800E7DF8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7DFC: nop

    // 0x800E7E00: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800E7E04: nop

    // 0x800E7E08: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x800E7E0C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7E10: nop

    // 0x800E7E14: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x800E7E18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7E1C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800E7E20: addiu       $t1, $t1, -0x6878
    ctx->r9 = ADD32(ctx->r9, -0X6878);
    // 0x800E7E24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7E28: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800E7E2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7E30: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x800E7E34: jal         0x8001C0EC
    // 0x800E7E38: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E7E38: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
    // 0x800E7E3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7E40: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E7E44: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E7E48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7E4C: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800E7E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7E54: jal         0x8001ABF4
    // 0x800E7E58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E7E58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E7E5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7E60: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E7E64: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E7E68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7E6C: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x800E7E70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E7E74: jal         0x8001ABF4
    // 0x800E7E78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E7E78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E7E7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7E80: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E7E84: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E7E88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7E8C: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x800E7E90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800E7E94: jal         0x8001ABF4
    // 0x800E7E98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800E7E98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800E7E9C:
    // 0x800E7E9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7EA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7EA4: jal         0x8001B4AC
    // 0x800E7EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x800E7EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800E7EAC: beq         $v0, $zero, L_800E7EC4
    if (ctx->r2 == 0) {
        // 0x800E7EB0: nop
    
            goto L_800E7EC4;
    }
    // 0x800E7EB0: nop

    // 0x800E7EB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7EB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7EBC: jal         0x8002B0E4
    // 0x800E7EC0: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x800E7EC0: nop

    after_5:
L_800E7EC4:
    // 0x800E7EC4: b           L_800E7ECC
    // 0x800E7EC8: nop

        goto L_800E7ECC;
    // 0x800E7EC8: nop

L_800E7ECC:
    // 0x800E7ECC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E7ED0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E7ED4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E7ED8: jr          $ra
    // 0x800E7EDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E7EDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CF570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF570: jr          $ra
    // 0x800CF574: nop

    return;
    // 0x800CF574: nop

    // 0x800CF578: jr          $ra
    // 0x800CF57C: nop

    return;
    // 0x800CF57C: nop

;}
RECOMP_FUNC void func_800B2250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B2250: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B2254: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B2258: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B225C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B2260: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B2264: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B2268: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B226C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B2270: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B2274: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B2278: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B227C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B2280: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B2284: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800B2288: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B228C: nop

    // 0x800B2290: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B2294: nop

    // 0x800B2298: bne         $t1, $zero, L_800B23EC
    if (ctx->r9 != 0) {
        // 0x800B229C: nop
    
            goto L_800B23EC;
    }
    // 0x800B229C: nop

    // 0x800B22A0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B22A4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B22A8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B22AC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800B22B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B22B4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B22B8: nop

    // 0x800B22BC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B22C0: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x800B22C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B22C8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B22CC: nop

    // 0x800B22D0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B22D4: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x800B22D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B22DC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B22E0: nop

    // 0x800B22E4: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800B22E8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B22EC: nop

    // 0x800B22F0: sh          $zero, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = 0;
    // 0x800B22F4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B22F8: nop

    // 0x800B22FC: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x800B2300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2308: jal         0x8001BB34
    // 0x800B230C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800B230C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B2310: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2314: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2318: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B231C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B2320: jal         0x80019448
    // 0x800B2324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x800B2324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x800B2328: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B232C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B2330: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x800B2334: nop

    // 0x800B2338: bne         $t0, $at, L_800B2390
    if (ctx->r8 != ctx->r1) {
        // 0x800B233C: nop
    
            goto L_800B2390;
    }
    // 0x800B233C: nop

    // 0x800B2340: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2344: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800B2348: sh          $t1, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r9;
    // 0x800B234C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2354: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800B2358: addiu       $t4, $t4, 0x7884
    ctx->r12 = ADD32(ctx->r12, 0X7884);
    // 0x800B235C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2360: lh          $a2, 0xAA($t3)
    ctx->r6 = MEM_H(ctx->r11, 0XAA);
    // 0x800B2364: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800B2368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B236C: jal         0x8001C0EC
    // 0x800B2370: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800B2370: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_2:
    // 0x800B2374: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2378: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B237C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B2380: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x800B2384: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B2388: jal         0x800175F0
    // 0x800B238C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x800B238C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_800B2390:
    // 0x800B2390: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2394: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2398: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800B239C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B23A0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800B23A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B23A8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800B23AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800B23B0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800B23B4: jal         0x800296AC
    // 0x800B23B8: nop

    func_800296AC(rdram, ctx);
        goto after_4;
    // 0x800B23B8: nop

    after_4:
    // 0x800B23BC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800B23C0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B23C4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800B23C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B23CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B23D0: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800B23D4: nop

    // 0x800B23D8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800B23DC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x800B23E0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800B23E4: sh          $t9, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = ctx->r25;
    // 0x800B23E8: nop

L_800B23EC:
    // 0x800B23EC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B23F0: nop

    // 0x800B23F4: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x800B23F8: nop

    // 0x800B23FC: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x800B2400: beq         $at, $zero, L_800B24AC
    if (ctx->r1 == 0) {
        // 0x800B2404: nop
    
            goto L_800B24AC;
    }
    // 0x800B2404: nop

    // 0x800B2408: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B240C: nop

    // 0x800B2410: lh          $t3, 0xAE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAE);
    // 0x800B2414: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800B2418: addiu       $t4, $t3, 0x28
    ctx->r12 = ADD32(ctx->r11, 0X28);
    // 0x800B241C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x800B2420: nop

    // 0x800B2424: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B2428: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x800B242C: nop

    // 0x800B2430: bc1f        L_800B24AC
    if (!c1cs) {
        // 0x800B2434: nop
    
            goto L_800B24AC;
    }
    // 0x800B2434: nop

    // 0x800B2438: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B243C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x800B2440: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B2444: lwc1        $f10, 0x18($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X18);
    // 0x800B2448: nop

    // 0x800B244C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800B2450: swc1        $f18, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f18.u32l;
    // 0x800B2454: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2458: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800B245C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B2460: lwc1        $f6, 0x18($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X18);
    // 0x800B2464: nop

    // 0x800B2468: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x800B246C: nop

    // 0x800B2470: bc1f        L_800B24AC
    if (!c1cs) {
        // 0x800B2474: nop
    
            goto L_800B24AC;
    }
    // 0x800B2474: nop

    // 0x800B2478: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B247C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800B2480: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B2484: lwc1        $f8, 0x18($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X18);
    // 0x800B2488: nop

    // 0x800B248C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800B2490: swc1        $f16, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f16.u32l;
    // 0x800B2494: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2498: nop

    // 0x800B249C: lh          $t7, 0xAC($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XAC);
    // 0x800B24A0: nop

    // 0x800B24A4: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x800B24A8: sh          $t0, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = ctx->r8;
L_800B24AC:
    // 0x800B24AC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B24B0: nop

    // 0x800B24B4: lh          $t2, 0xAE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAE);
    // 0x800B24B8: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800B24BC: addiu       $t3, $t2, 0xF0
    ctx->r11 = ADD32(ctx->r10, 0XF0);
    // 0x800B24C0: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800B24C4: nop

    // 0x800B24C8: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B24CC: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x800B24D0: nop

    // 0x800B24D4: bc1f        L_800B250C
    if (!c1cs) {
        // 0x800B24D8: nop
    
            goto L_800B250C;
    }
    // 0x800B24D8: nop

    // 0x800B24DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B24E0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B24E4: nop

    // 0x800B24E8: swc1        $f8, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f8.u32l;
    // 0x800B24EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B24F0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B24F4: nop

    // 0x800B24F8: swc1        $f10, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f10.u32l;
    // 0x800B24FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B2500: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2504: nop

    // 0x800B2508: swc1        $f16, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f16.u32l;
L_800B250C:
    // 0x800B250C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2510: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2514: jal         0x80029C40
    // 0x800B2518: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800B2518: nop

    after_5:
    // 0x800B251C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2520: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2524: jal         0x80029D04
    // 0x800B2528: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800B2528: nop

    after_6:
    // 0x800B252C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B2530: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B2534: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2538: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B253C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B2540: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B2544: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B2548: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800B254C: jal         0x80029018
    // 0x800B2550: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800B2550: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x800B2554: beq         $v0, $zero, L_800B2578
    if (ctx->r2 == 0) {
        // 0x800B2558: nop
    
            goto L_800B2578;
    }
    // 0x800B2558: nop

    // 0x800B255C: jal         0x800297DC
    // 0x800B2560: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800B2560: nop

    after_8:
    // 0x800B2564: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2568: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B256C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B2570: jal         0x80029824
    // 0x800B2574: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800B2574: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_800B2578:
    // 0x800B2578: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B257C: nop

    // 0x800B2580: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800B2584: nop

    // 0x800B2588: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x800B258C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2590: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B2594: lh          $t0, 0xB4($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XB4);
    // 0x800B2598: nop

    // 0x800B259C: bne         $t0, $at, L_800B2608
    if (ctx->r8 != ctx->r1) {
        // 0x800B25A0: nop
    
            goto L_800B2608;
    }
    // 0x800B25A0: nop

    // 0x800B25A4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B25A8: lui         $at, 0xC470
    ctx->r1 = S32(0XC470 << 16);
    // 0x800B25AC: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800B25B0: lwc1        $f10, 0x2C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800B25B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B25B8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800B25BC: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x800B25C0: nop

    // 0x800B25C4: bc1f        L_800B2608
    if (!c1cs) {
        // 0x800B25C8: nop
    
            goto L_800B2608;
    }
    // 0x800B25C8: nop

    // 0x800B25CC: jal         0x800297DC
    // 0x800B25D0: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800B25D0: nop

    after_10:
    // 0x800B25D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B25D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B25DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B25E0: jal         0x80029824
    // 0x800B25E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800B25E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x800B25E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B25EC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B25F0: nop

    // 0x800B25F4: swc1        $f18, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f18.u32l;
    // 0x800B25F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B25FC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2600: nop

    // 0x800B2604: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
L_800B2608:
    // 0x800B2608: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B260C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B2610: lh          $t4, 0xB4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB4);
    // 0x800B2614: nop

    // 0x800B2618: bne         $t4, $at, L_800B2684
    if (ctx->r12 != ctx->r1) {
        // 0x800B261C: nop
    
            goto L_800B2684;
    }
    // 0x800B261C: nop

    // 0x800B2620: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2624: lui         $at, 0xC516
    ctx->r1 = S32(0XC516 << 16);
    // 0x800B2628: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x800B262C: lwc1        $f10, 0x2C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800B2630: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B2634: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800B2638: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x800B263C: nop

    // 0x800B2640: bc1f        L_800B2684
    if (!c1cs) {
        // 0x800B2644: nop
    
            goto L_800B2684;
    }
    // 0x800B2644: nop

    // 0x800B2648: jal         0x800297DC
    // 0x800B264C: nop

    func_800297DC(rdram, ctx);
        goto after_12;
    // 0x800B264C: nop

    after_12:
    // 0x800B2650: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2654: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2658: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B265C: jal         0x80029824
    // 0x800B2660: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_13;
    // 0x800B2660: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x800B2664: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B2668: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B266C: nop

    // 0x800B2670: swc1        $f18, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f18.u32l;
    // 0x800B2674: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B2678: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B267C: nop

    // 0x800B2680: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
L_800B2684:
    // 0x800B2684: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2688: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B268C: lh          $t0, 0xAC($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XAC);
    // 0x800B2690: nop

    // 0x800B2694: bne         $t0, $at, L_800B2704
    if (ctx->r8 != ctx->r1) {
        // 0x800B2698: nop
    
            goto L_800B2704;
    }
    // 0x800B2698: nop

    // 0x800B269C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B26A0: nop

    // 0x800B26A4: lh          $t1, 0xAA($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XAA);
    // 0x800B26A8: nop

    // 0x800B26AC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800B26B0: sh          $t2, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r10;
    // 0x800B26B4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B26B8: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x800B26BC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800B26C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B26C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B26C8: nop

    // 0x800B26CC: swc1        $f8, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f8.u32l;
    // 0x800B26D0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B26D4: nop

    // 0x800B26D8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800B26DC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B26E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B26E4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800B26E8: addiu       $t7, $t7, 0x7884
    ctx->r15 = ADD32(ctx->r15, 0X7884);
    // 0x800B26EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B26F0: lh          $a2, 0xAA($t8)
    ctx->r6 = MEM_H(ctx->r24, 0XAA);
    // 0x800B26F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800B26F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B26FC: jal         0x8001C0EC
    // 0x800B2700: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_14;
    // 0x800B2700: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_14:
L_800B2704:
    // 0x800B2704: b           L_800B270C
    // 0x800B2708: nop

        goto L_800B270C;
    // 0x800B2708: nop

L_800B270C:
    // 0x800B270C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B2710: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B2714: jr          $ra
    // 0x800B2718: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800B2718: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80096BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096BC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80096BCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80096BD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80096BD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80096BD8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80096BDC: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80096BE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80096BE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096BE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80096BEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096BF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80096BF4: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80096BF8: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80096BFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80096C00: beq         $s0, $at, L_80096C1C
    if (ctx->r16 == ctx->r1) {
        // 0x80096C04: nop
    
            goto L_80096C1C;
    }
    // 0x80096C04: nop

    // 0x80096C08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80096C0C: beq         $s0, $at, L_80096C2C
    if (ctx->r16 == ctx->r1) {
        // 0x80096C10: nop
    
            goto L_80096C2C;
    }
    // 0x80096C10: nop

    // 0x80096C14: b           L_80096C3C
    // 0x80096C18: nop

        goto L_80096C3C;
    // 0x80096C18: nop

L_80096C1C:
    // 0x80096C1C: jal         0x80096900
    // 0x80096C20: nop

    func_80096900(rdram, ctx);
        goto after_0;
    // 0x80096C20: nop

    after_0:
    // 0x80096C24: b           L_80096C3C
    // 0x80096C28: nop

        goto L_80096C3C;
    // 0x80096C28: nop

L_80096C2C:
    // 0x80096C2C: jal         0x800969AC
    // 0x80096C30: nop

    func_800969AC(rdram, ctx);
        goto after_1;
    // 0x80096C30: nop

    after_1:
    // 0x80096C34: b           L_80096C3C
    // 0x80096C38: nop

        goto L_80096C3C;
    // 0x80096C38: nop

L_80096C3C:
    // 0x80096C3C: b           L_80096C44
    // 0x80096C40: nop

        goto L_80096C44;
    // 0x80096C40: nop

L_80096C44:
    // 0x80096C44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80096C48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80096C4C: jr          $ra
    // 0x80096C50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80096C50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D577C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D577C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D5780: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D5784: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D5788: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D578C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D5790: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D5794: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D5798: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D579C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D57A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D57A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D57A8: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D57AC: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D57B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D57B4: beq         $s0, $at, L_800D57E8
    if (ctx->r16 == ctx->r1) {
        // 0x800D57B8: nop
    
            goto L_800D57E8;
    }
    // 0x800D57B8: nop

    // 0x800D57BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D57C0: beq         $s0, $at, L_800D57F8
    if (ctx->r16 == ctx->r1) {
        // 0x800D57C4: nop
    
            goto L_800D57F8;
    }
    // 0x800D57C4: nop

    // 0x800D57C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D57CC: beq         $s0, $at, L_800D5808
    if (ctx->r16 == ctx->r1) {
        // 0x800D57D0: nop
    
            goto L_800D5808;
    }
    // 0x800D57D0: nop

    // 0x800D57D4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800D57D8: beq         $s0, $at, L_800D5818
    if (ctx->r16 == ctx->r1) {
        // 0x800D57DC: nop
    
            goto L_800D5818;
    }
    // 0x800D57DC: nop

    // 0x800D57E0: b           L_800D5828
    // 0x800D57E4: nop

        goto L_800D5828;
    // 0x800D57E4: nop

L_800D57E8:
    // 0x800D57E8: jal         0x800D4AB4
    // 0x800D57EC: nop

    func_800D4AB4(rdram, ctx);
        goto after_0;
    // 0x800D57EC: nop

    after_0:
    // 0x800D57F0: b           L_800D5830
    // 0x800D57F4: nop

        goto L_800D5830;
    // 0x800D57F4: nop

L_800D57F8:
    // 0x800D57F8: jal         0x800D4C8C
    // 0x800D57FC: nop

    func_800D4C8C(rdram, ctx);
        goto after_1;
    // 0x800D57FC: nop

    after_1:
    // 0x800D5800: b           L_800D5830
    // 0x800D5804: nop

        goto L_800D5830;
    // 0x800D5804: nop

L_800D5808:
    // 0x800D5808: jal         0x800D4D74
    // 0x800D580C: nop

    func_800D4D74(rdram, ctx);
        goto after_2;
    // 0x800D580C: nop

    after_2:
    // 0x800D5810: b           L_800D5830
    // 0x800D5814: nop

        goto L_800D5830;
    // 0x800D5814: nop

L_800D5818:
    // 0x800D5818: jal         0x800D5610
    // 0x800D581C: nop

    func_800D5610(rdram, ctx);
        goto after_3;
    // 0x800D581C: nop

    after_3:
    // 0x800D5820: b           L_800D5830
    // 0x800D5824: nop

        goto L_800D5830;
    // 0x800D5824: nop

L_800D5828:
    // 0x800D5828: b           L_800D5830
    // 0x800D582C: nop

        goto L_800D5830;
    // 0x800D582C: nop

L_800D5830:
    // 0x800D5830: b           L_800D5838
    // 0x800D5834: nop

        goto L_800D5838;
    // 0x800D5834: nop

L_800D5838:
    // 0x800D5838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D583C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D5840: jr          $ra
    // 0x800D5844: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D5844: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A7DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7DF0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A7DF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A7DF8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A7DFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A7E00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A7E04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A7E08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A7E0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A7E10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A7E14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A7E18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A7E1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A7E20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A7E24: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800A7E28: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7E2C: nop

    // 0x800A7E30: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A7E34: nop

    // 0x800A7E38: bne         $t1, $zero, L_800A7E88
    if (ctx->r9 != 0) {
        // 0x800A7E3C: nop
    
            goto L_800A7E88;
    }
    // 0x800A7E3C: nop

    // 0x800A7E40: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7E44: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A7E48: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A7E4C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7E50: nop

    // 0x800A7E54: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x800A7E58: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A7E5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A7E60: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7E64: nop

    // 0x800A7E68: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x800A7E6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7E70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A7E78: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    // 0x800A7E7C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A7E80: jal         0x800175F0
    // 0x800A7E84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800A7E84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_800A7E88:
    // 0x800A7E88: jal         0x80014E80
    // 0x800A7E8C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x800A7E8C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x800A7E90: addiu       $t6, $v0, 0x2
    ctx->r14 = ADD32(ctx->r2, 0X2);
    // 0x800A7E94: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800A7E98: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7E9C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A7EA0: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
    // 0x800A7EA4: jal         0x80014E80
    // 0x800A7EA8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x800A7EA8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_2:
    // 0x800A7EAC: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800A7EB0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A7EB4: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x800A7EB8: lwc1        $f19, 0x4A00($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4A00);
    // 0x800A7EBC: lwc1        $f18, 0x4A04($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4A04);
    // 0x800A7EC0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7EC4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800A7EC8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800A7ECC: swc1        $f6, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f6.u32l;
    // 0x800A7ED0: jal         0x80014E80
    // 0x800A7ED4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x800A7ED4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_3:
    // 0x800A7ED8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800A7EDC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A7EE0: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x800A7EE4: lwc1        $f17, 0x4A08($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4A08);
    // 0x800A7EE8: lwc1        $f16, 0x4A0C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4A0C);
    // 0x800A7EEC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7EF0: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800A7EF4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800A7EF8: swc1        $f4, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f4.u32l;
    // 0x800A7EFC: jal         0x80014E80
    // 0x800A7F00: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x800A7F00: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_4:
    // 0x800A7F04: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800A7F08: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A7F0C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x800A7F10: lwc1        $f11, 0x4A10($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4A10);
    // 0x800A7F14: lwc1        $f10, 0x4A14($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4A14);
    // 0x800A7F18: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7F1C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x800A7F20: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800A7F24: swc1        $f18, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f18.u32l;
    // 0x800A7F28: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7F2C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800A7F30: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800A7F34: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A7F38: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800A7F3C: jal         0x80015538
    // 0x800A7F40: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800A7F40: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_5:
    // 0x800A7F44: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800A7F48: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7F4C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800A7F50: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A7F54: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A7F58: nop

    // 0x800A7F5C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A7F60: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x800A7F64: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800A7F68: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
    // 0x800A7F6C: nop

    // 0x800A7F70: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7F74: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A7F78: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800A7F7C: lwc1        $f17, 0x4A18($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4A18);
    // 0x800A7F80: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800A7F84: lwc1        $f16, 0x4A1C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4A1C);
    // 0x800A7F88: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x800A7F8C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800A7F90: jal         0x80034970
    // 0x800A7F94: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x800A7F94: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_6:
    // 0x800A7F98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800A7F9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A7FA0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7FA4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800A7FA8: swc1        $f6, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f6.u32l;
    // 0x800A7FAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7FB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7FB4: jal         0x80028FA0
    // 0x800A7FB8: nop

    func_80028FA0(rdram, ctx);
        goto after_7;
    // 0x800A7FB8: nop

    after_7:
    // 0x800A7FBC: beq         $v0, $zero, L_800A7FD4
    if (ctx->r2 == 0) {
        // 0x800A7FC0: nop
    
            goto L_800A7FD4;
    }
    // 0x800A7FC0: nop

    // 0x800A7FC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7FC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7FCC: jal         0x80029B60
    // 0x800A7FD0: nop

    func_80029B60(rdram, ctx);
        goto after_8;
    // 0x800A7FD0: nop

    after_8:
L_800A7FD4:
    // 0x800A7FD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7FD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7FDC: jal         0x80029C40
    // 0x800A7FE0: nop

    func_80029C40(rdram, ctx);
        goto after_9;
    // 0x800A7FE0: nop

    after_9:
    // 0x800A7FE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7FE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7FEC: jal         0x80029D04
    // 0x800A7FF0: nop

    func_80029D04(rdram, ctx);
        goto after_10;
    // 0x800A7FF0: nop

    after_10:
    // 0x800A7FF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A7FF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A7FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8004: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A8008: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x800A800C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A8010: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800A8014: jal         0x80029018
    // 0x800A8018: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_11;
    // 0x800A8018: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x800A801C: beq         $v0, $zero, L_800A8040
    if (ctx->r2 == 0) {
        // 0x800A8020: nop
    
            goto L_800A8040;
    }
    // 0x800A8020: nop

    // 0x800A8024: jal         0x800297DC
    // 0x800A8028: nop

    func_800297DC(rdram, ctx);
        goto after_12;
    // 0x800A8028: nop

    after_12:
    // 0x800A802C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8030: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8034: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A8038: jal         0x80029824
    // 0x800A803C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_13;
    // 0x800A803C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
L_800A8040:
    // 0x800A8040: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800A8044: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8048: lwc1        $f16, 0x28($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800A804C: lw          $a3, 0x24($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X24);
    // 0x800A8050: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800A8054: lwc1        $f18, 0x2C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800A8058: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A805C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800A8060: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800A8064: jal         0x800295C0
    // 0x800A8068: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_14;
    // 0x800A8068: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x800A806C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800A8070: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x800A8074: nop

    // 0x800A8078: beq         $t0, $zero, L_800A808C
    if (ctx->r8 == 0) {
        // 0x800A807C: nop
    
            goto L_800A808C;
    }
    // 0x800A807C: nop

    // 0x800A8080: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800A8084: nop

    // 0x800A8088: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
L_800A808C:
    // 0x800A808C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800A8090: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A8094: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800A8098: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800A809C: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800A80A0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A80A4: c.le.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl <= ctx->f16.fl;
    // 0x800A80A8: nop

    // 0x800A80AC: bc1f        L_800A80CC
    if (!c1cs) {
        // 0x800A80B0: nop
    
            goto L_800A80CC;
    }
    // 0x800A80B0: nop

    // 0x800A80B4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800A80B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A80BC: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800A80C0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800A80C4: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800A80C8: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
L_800A80CC:
    // 0x800A80CC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800A80D0: nop

    // 0x800A80D4: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800A80D8: nop

    // 0x800A80DC: addiu       $t5, $t4, -0x4
    ctx->r13 = ADD32(ctx->r12, -0X4);
    // 0x800A80E0: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
    // 0x800A80E4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800A80E8: nop

    // 0x800A80EC: lwc1        $f10, 0x3C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800A80F0: nop

    // 0x800A80F4: swc1        $f10, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f10.u32l;
    // 0x800A80F8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800A80FC: nop

    // 0x800A8100: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800A8104: nop

    // 0x800A8108: slti        $at, $t8, 0x3C
    ctx->r1 = SIGNED(ctx->r24) < 0X3C ? 1 : 0;
    // 0x800A810C: bne         $at, $zero, L_800A812C
    if (ctx->r1 != 0) {
        // 0x800A8110: nop
    
            goto L_800A812C;
    }
    // 0x800A8110: nop

    // 0x800A8114: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800A8118: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800A811C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800A8120: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800A8124: nop

    // 0x800A8128: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800A812C:
    // 0x800A812C: b           L_800A8134
    // 0x800A8130: nop

        goto L_800A8134;
    // 0x800A8130: nop

L_800A8134:
    // 0x800A8134: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A8138: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A813C: jr          $ra
    // 0x800A8140: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800A8140: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800C39F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C39F0: jr          $ra
    // 0x800C39F4: nop

    return;
    // 0x800C39F4: nop

    // 0x800C39F8: jr          $ra
    // 0x800C39FC: nop

    return;
    // 0x800C39FC: nop

;}
RECOMP_FUNC void func_800CAA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAA94: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800CAA98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CAA9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CAAA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CAAA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CAAA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CAAAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CAAB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CAAB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CAAB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CAABC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CAAC0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800CAAC4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CAAC8: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800CAACC: nop

    // 0x800CAAD0: bne         $t0, $zero, L_800CAAF0
    if (ctx->r8 != 0) {
        // 0x800CAAD4: nop
    
            goto L_800CAAF0;
    }
    // 0x800CAAD4: nop

    // 0x800CAAD8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800CAADC: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800CAAE0: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800CAAE4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800CAAE8: nop

    // 0x800CAAEC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800CAAF0:
    // 0x800CAAF0: b           L_800CAAF8
    // 0x800CAAF4: nop

        goto L_800CAAF8;
    // 0x800CAAF4: nop

L_800CAAF8:
    // 0x800CAAF8: jr          $ra
    // 0x800CAAFC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800CAAFC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800DCFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DCFAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DCFB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DCFB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DCFB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DCFBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DCFC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DCFC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DCFC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DCFCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DCFD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DCFD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DCFD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DCFDC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DCFE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DCFE4: nop

    // 0x800DCFE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DCFEC: nop

    // 0x800DCFF0: bne         $t1, $zero, L_800DD0A8
    if (ctx->r9 != 0) {
        // 0x800DCFF4: nop
    
            goto L_800DD0A8;
    }
    // 0x800DCFF4: nop

    // 0x800DCFF8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DCFFC: nop

    // 0x800DD000: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DD004: nop

    // 0x800DD008: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DD00C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DD010: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800DD014: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800DD018: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DD01C: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800DD020: nop

    // 0x800DD024: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800DD028: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
    // 0x800DD02C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD030: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800DD034: addiu       $t6, $t6, -0x700C
    ctx->r14 = ADD32(ctx->r14, -0X700C);
    // 0x800DD038: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD03C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800DD040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DD044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800DD048: jal         0x8001C0EC
    // 0x800DD04C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DD04C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DD050: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD054: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD058: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DD05C: addiu       $a3, $a3, -0x6F34
    ctx->r7 = ADD32(ctx->r7, -0X6F34);
    // 0x800DD060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DD064: jal         0x8001ABF4
    // 0x800DD068: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DD068: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DD06C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD070: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DD074: addiu       $a3, $a3, -0x6F34
    ctx->r7 = ADD32(ctx->r7, -0X6F34);
    // 0x800DD078: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD07C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DD080: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DD084: jal         0x8001ABF4
    // 0x800DD088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DD088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DD08C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD090: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD094: jal         0x8001B754
    // 0x800DD098: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x800DD098: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800DD09C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DD0A0: nop

    // 0x800DD0A4: sb          $zero, 0x13A($t7)
    MEM_B(0X13A, ctx->r15) = 0;
L_800DD0A8:
    // 0x800DD0A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD0AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD0B0: jal         0x80028FA0
    // 0x800DD0B4: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800DD0B4: nop

    after_4:
    // 0x800DD0B8: beq         $v0, $zero, L_800DD0F4
    if (ctx->r2 == 0) {
        // 0x800DD0BC: nop
    
            goto L_800DD0F4;
    }
    // 0x800DD0BC: nop

    // 0x800DD0C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DD0C4: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800DD0C8: lh          $t9, 0x106($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X106);
    // 0x800DD0CC: nop

    // 0x800DD0D0: beq         $t9, $at, L_800DD0E4
    if (ctx->r25 == ctx->r1) {
        // 0x800DD0D4: nop
    
            goto L_800DD0E4;
    }
    // 0x800DD0D4: nop

    // 0x800DD0D8: addiu       $at, $zero, 0xA3
    ctx->r1 = ADD32(0, 0XA3);
    // 0x800DD0DC: bne         $t9, $at, L_800DD0F4
    if (ctx->r25 != ctx->r1) {
        // 0x800DD0E0: nop
    
            goto L_800DD0F4;
    }
    // 0x800DD0E0: nop

L_800DD0E4:
    // 0x800DD0E4: jal         0x800E3EE4
    // 0x800DD0E8: nop

    func_800E3EE4(rdram, ctx);
        goto after_5;
    // 0x800DD0E8: nop

    after_5:
    // 0x800DD0EC: b           L_800DD150
    // 0x800DD0F0: nop

        goto L_800DD150;
    // 0x800DD0F0: nop

L_800DD0F4:
    // 0x800DD0F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD0F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD0FC: jal         0x8002A8B4
    // 0x800DD100: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x800DD100: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_6:
    // 0x800DD104: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DD108: nop

    // 0x800DD10C: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800DD110: nop

    // 0x800DD114: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x800DD118: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD11C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD120: jal         0x8001B4AC
    // 0x800DD124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x800DD124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800DD128: beq         $v0, $zero, L_800DD148
    if (ctx->r2 == 0) {
        // 0x800DD12C: nop
    
            goto L_800DD148;
    }
    // 0x800DD12C: nop

    // 0x800DD130: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800DD134: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800DD138: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800DD13C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800DD140: nop

    // 0x800DD144: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800DD148:
    // 0x800DD148: b           L_800DD150
    // 0x800DD14C: nop

        goto L_800DD150;
    // 0x800DD14C: nop

L_800DD150:
    // 0x800DD150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DD154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DD158: jr          $ra
    // 0x800DD15C: nop

    return;
    // 0x800DD15C: nop

;}
RECOMP_FUNC void Debug_PrintChar(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F4D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005F4D8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8005F4DC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8005F4E0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8005F4E4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8005F4E8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8005F4EC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8005F4F0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8005F4F4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8005F4F8:
    // 0x8005F4F8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F4FC: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8005F500: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8005F504: lbu         $t7, 0x3948($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3948);
    // 0x8005F508: nop

    // 0x8005F50C: bne         $t7, $a0, L_8005F51C
    if (ctx->r15 != ctx->r4) {
        // 0x8005F510: nop
    
            goto L_8005F51C;
    }
    // 0x8005F510: nop

    // 0x8005F514: b           L_8005F534
    // 0x8005F518: nop

        goto L_8005F534;
    // 0x8005F518: nop

L_8005F51C:
    // 0x8005F51C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F520: nop

    // 0x8005F524: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8005F528: slti        $at, $t9, 0x50
    ctx->r1 = SIGNED(ctx->r25) < 0X50 ? 1 : 0;
    // 0x8005F52C: bne         $at, $zero, L_8005F4F8
    if (ctx->r1 != 0) {
        // 0x8005F530: sw          $t9, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r25;
            goto L_8005F4F8;
    }
    // 0x8005F530: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_8005F534:
    // 0x8005F534: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F538: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x8005F53C: bne         $t0, $at, L_8005F54C
    if (ctx->r8 != ctx->r1) {
        // 0x8005F540: nop
    
            goto L_8005F54C;
    }
    // 0x8005F540: nop

    // 0x8005F544: b           L_8005F964
    // 0x8005F548: nop

        goto L_8005F964;
    // 0x8005F548: nop

L_8005F54C:
    // 0x8005F54C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F550: nop

    // 0x8005F554: andi        $t2, $t1, 0x7
    ctx->r10 = ctx->r9 & 0X7;
    // 0x8005F558: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8005F55C: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8005F560: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F564: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8005F568: bgez        $t4, L_8005F578
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8005F56C: sra         $t5, $t4, 3
        ctx->r13 = S32(SIGNED(ctx->r12) >> 3);
            goto L_8005F578;
    }
    // 0x8005F56C: sra         $t5, $t4, 3
    ctx->r13 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8005F570: addiu       $at, $t4, 0x7
    ctx->r1 = ADD32(ctx->r12, 0X7);
    // 0x8005F574: sra         $t5, $at, 3
    ctx->r13 = S32(SIGNED(ctx->r1) >> 3);
L_8005F578:
    // 0x8005F578: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8005F57C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8005F580: lb          $t7, 0x399C($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X399C);
    // 0x8005F584: nop

    // 0x8005F588: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8005F58C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005F590: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8005F594: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F598: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005F59C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8005F5A0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8005F5A4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8005F5A8: lui         $t0, 0xFD48
    ctx->r8 = S32(0XFD48 << 16);
    // 0x8005F5AC: ori         $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 | 0X1F;
    // 0x8005F5B0: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005F5B4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8005F5B8: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x8005F5BC: addiu       $t2, $t2, 0x2928
    ctx->r10 = ADD32(ctx->r10, 0X2928);
    // 0x8005F5C0: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8005F5C4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8005F5C8: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8005F5CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F5D0: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005F5D4: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8005F5D8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8005F5DC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8005F5E0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8005F5E4: subu        $t7, $t6, $t6
    ctx->r15 = SUB32(ctx->r14, ctx->r14);
    // 0x8005F5E8: addiu       $t8, $t7, 0x9
    ctx->r24 = ADD32(ctx->r15, 0X9);
    // 0x8005F5EC: srl         $t9, $t8, 1
    ctx->r25 = S32(U32(ctx->r24) >> 1);
    // 0x8005F5F0: addiu       $t0, $t9, 0x7
    ctx->r8 = ADD32(ctx->r25, 0X7);
    // 0x8005F5F4: srl         $t1, $t0, 3
    ctx->r9 = S32(U32(ctx->r8) >> 3);
    // 0x8005F5F8: andi        $t2, $t1, 0x1FF
    ctx->r10 = ctx->r9 & 0X1FF;
    // 0x8005F5FC: sll         $t3, $t2, 9
    ctx->r11 = S32(ctx->r10 << 9);
    // 0x8005F600: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005F604: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8005F608: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005F60C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8005F610: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x8005F614: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005F618: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005F61C: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8005F620: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F624: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005F628: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8005F62C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8005F630: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8005F634: lui         $t0, 0xE600
    ctx->r8 = S32(0XE600 << 16);
    // 0x8005F638: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005F63C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8005F640: nop

    // 0x8005F644: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8005F648: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8005F64C: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8005F650: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F654: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005F658: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8005F65C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8005F660: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8005F664: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8005F668: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8005F66C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8005F670: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x8005F674: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005F678: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8005F67C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F680: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x8005F684: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8005F688: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x8005F68C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005F690: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F694: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8005F698: bgez        $t5, L_8005F6A8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8005F69C: sra         $t6, $t5, 3
        ctx->r14 = S32(SIGNED(ctx->r13) >> 3);
            goto L_8005F6A8;
    }
    // 0x8005F69C: sra         $t6, $t5, 3
    ctx->r14 = S32(SIGNED(ctx->r13) >> 3);
    // 0x8005F6A0: addiu       $at, $t5, 0x7
    ctx->r1 = ADD32(ctx->r13, 0X7);
    // 0x8005F6A4: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8005F6A8:
    // 0x8005F6A8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8005F6AC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8005F6B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8005F6B4: lb          $t8, 0x399D($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X399D);
    // 0x8005F6B8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8005F6BC: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005F6C0: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8005F6C4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8005F6C8: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8005F6CC: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8005F6D0: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8005F6D4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005F6D8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F6DC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8005F6E0: andi        $t2, $t9, 0xFFF
    ctx->r10 = ctx->r25 & 0XFFF;
    // 0x8005F6E4: or          $t0, $t2, $t8
    ctx->r8 = ctx->r10 | ctx->r24;
    // 0x8005F6E8: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8005F6EC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8005F6F0: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8005F6F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F6F8: addiu       $t3, $t9, 0x8
    ctx->r11 = ADD32(ctx->r25, 0X8);
    // 0x8005F6FC: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8005F700: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8005F704: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8005F708: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8005F70C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005F710: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8005F714: nop

    // 0x8005F718: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8005F71C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005F720: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8005F724: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F728: addiu       $t2, $t7, 0x8
    ctx->r10 = ADD32(ctx->r15, 0X8);
    // 0x8005F72C: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8005F730: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8005F734: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8005F738: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x8005F73C: subu        $t0, $t8, $t8
    ctx->r8 = SUB32(ctx->r24, ctx->r24);
    // 0x8005F740: addiu       $t1, $t0, 0x9
    ctx->r9 = ADD32(ctx->r8, 0X9);
    // 0x8005F744: srl         $t9, $t1, 1
    ctx->r25 = S32(U32(ctx->r9) >> 1);
    // 0x8005F748: addiu       $t3, $t9, 0x7
    ctx->r11 = ADD32(ctx->r25, 0X7);
    // 0x8005F74C: srl         $t4, $t3, 3
    ctx->r12 = S32(U32(ctx->r11) >> 3);
    // 0x8005F750: andi        $t5, $t4, 0x1FF
    ctx->r13 = ctx->r12 & 0X1FF;
    // 0x8005F754: sll         $t6, $t5, 9
    ctx->r14 = S32(ctx->r13 << 9);
    // 0x8005F758: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x8005F75C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8005F760: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x8005F764: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x8005F768: nop

    // 0x8005F76C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005F770: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005F774: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8005F778: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F77C: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8005F780: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8005F784: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8005F788: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8005F78C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8005F790: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x8005F794: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x8005F798: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x8005F79C: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005F7A0: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8005F7A4: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x8005F7A8: andi        $t8, $t2, 0xFFF
    ctx->r24 = ctx->r10 & 0XFFF;
    // 0x8005F7AC: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8005F7B0: or          $t0, $t6, $t8
    ctx->r8 = ctx->r14 | ctx->r24;
    // 0x8005F7B4: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005F7B8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F7BC: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x8005F7C0: bgez        $t9, L_8005F7D0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8005F7C4: sra         $t3, $t9, 3
        ctx->r11 = S32(SIGNED(ctx->r25) >> 3);
            goto L_8005F7D0;
    }
    // 0x8005F7C4: sra         $t3, $t9, 3
    ctx->r11 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8005F7C8: addiu       $at, $t9, 0x7
    ctx->r1 = ADD32(ctx->r25, 0X7);
    // 0x8005F7CC: sra         $t3, $at, 3
    ctx->r11 = S32(SIGNED(ctx->r1) >> 3);
L_8005F7D0:
    // 0x8005F7D0: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8005F7D4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8005F7D8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8005F7DC: lb          $t5, 0x399D($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X399D);
    // 0x8005F7E0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8005F7E4: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8005F7E8: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8005F7EC: addu        $t2, $t5, $t7
    ctx->r10 = ADD32(ctx->r13, ctx->r15);
    // 0x8005F7F0: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8005F7F4: andi        $t3, $t9, 0xFFF
    ctx->r11 = ctx->r25 & 0XFFF;
    // 0x8005F7F8: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x8005F7FC: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x8005F800: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8005F804: or          $t5, $t8, $t4
    ctx->r13 = ctx->r24 | ctx->r12;
    // 0x8005F808: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x8005F80C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005F810: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005F814: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F818: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x8005F81C: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8005F820: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x8005F824: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8005F828: lui         $t0, 0xF200
    ctx->r8 = S32(0XF200 << 16);
    // 0x8005F82C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005F830: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F834: lui         $t4, 0x8010
    ctx->r12 = S32(0X8010 << 16);
    // 0x8005F838: bgez        $t9, L_8005F848
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8005F83C: sra         $t3, $t9, 3
        ctx->r11 = S32(SIGNED(ctx->r25) >> 3);
            goto L_8005F848;
    }
    // 0x8005F83C: sra         $t3, $t9, 3
    ctx->r11 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8005F840: addiu       $at, $t9, 0x7
    ctx->r1 = ADD32(ctx->r25, 0X7);
    // 0x8005F844: sra         $t3, $at, 3
    ctx->r11 = S32(SIGNED(ctx->r1) >> 3);
L_8005F848:
    // 0x8005F848: sll         $t8, $t3, 1
    ctx->r24 = S32(ctx->r11 << 1);
    // 0x8005F84C: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x8005F850: lb          $t4, 0x399D($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X399D);
    // 0x8005F854: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8005F858: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8005F85C: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x8005F860: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005F864: or          $t2, $t7, $at
    ctx->r10 = ctx->r15 | ctx->r1;
    // 0x8005F868: sw          $t2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r10;
    // 0x8005F86C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005F870: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8005F874: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F878: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8005F87C: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8005F880: sw          $t0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r8;
    // 0x8005F884: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F888: lui         $t4, 0x8010
    ctx->r12 = S32(0X8010 << 16);
    // 0x8005F88C: bgez        $t9, L_8005F89C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8005F890: sra         $t3, $t9, 3
        ctx->r11 = S32(SIGNED(ctx->r25) >> 3);
            goto L_8005F89C;
    }
    // 0x8005F890: sra         $t3, $t9, 3
    ctx->r11 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8005F894: addiu       $at, $t9, 0x7
    ctx->r1 = ADD32(ctx->r25, 0X7);
    // 0x8005F898: sra         $t3, $at, 3
    ctx->r11 = S32(SIGNED(ctx->r1) >> 3);
L_8005F89C:
    // 0x8005F89C: sll         $t8, $t3, 1
    ctx->r24 = S32(ctx->r11 << 1);
    // 0x8005F8A0: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x8005F8A4: lb          $t4, 0x399D($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X399D);
    // 0x8005F8A8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8005F8AC: addiu       $t0, $t6, 0x20
    ctx->r8 = ADD32(ctx->r14, 0X20);
    // 0x8005F8B0: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x8005F8B4: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x8005F8B8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8005F8BC: sll         $t9, $t1, 12
    ctx->r25 = S32(ctx->r9 << 12);
    // 0x8005F8C0: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8005F8C4: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8005F8C8: or          $t3, $t9, $at
    ctx->r11 = ctx->r25 | ctx->r1;
    // 0x8005F8CC: andi        $t2, $t7, 0xFFF
    ctx->r10 = ctx->r15 & 0XFFF;
    // 0x8005F8D0: or          $t8, $t2, $t3
    ctx->r24 = ctx->r10 | ctx->r11;
    // 0x8005F8D4: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8005F8D8: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x8005F8DC: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x8005F8E0: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x8005F8E4: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8005F8E8: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x8005F8EC: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8005F8F0: or          $t9, $t6, $t1
    ctx->r25 = ctx->r14 | ctx->r9;
    // 0x8005F8F4: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x8005F8F8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8005F8FC: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8005F900: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F904: addiu       $t8, $t3, 0x8
    ctx->r24 = ADD32(ctx->r11, 0X8);
    // 0x8005F908: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005F90C: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x8005F910: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8005F914: lui         $t4, 0xB400
    ctx->r12 = S32(0XB400 << 16);
    // 0x8005F918: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005F91C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8005F920: nop

    // 0x8005F924: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005F928: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005F92C: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8005F930: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F934: addiu       $t6, $t0, 0x8
    ctx->r14 = ADD32(ctx->r8, 0X8);
    // 0x8005F938: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8005F93C: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
    // 0x8005F940: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8005F944: lui         $t1, 0xB300
    ctx->r9 = S32(0XB300 << 16);
    // 0x8005F948: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x8005F94C: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8005F950: lui         $t2, 0x400
    ctx->r10 = S32(0X400 << 16);
    // 0x8005F954: ori         $t2, $t2, 0x400
    ctx->r10 = ctx->r10 | 0X400;
    // 0x8005F958: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8005F95C: b           L_8005F964
    // 0x8005F960: nop

        goto L_8005F964;
    // 0x8005F960: nop

L_8005F964:
    // 0x8005F964: jr          $ra
    // 0x8005F968: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005F968: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007EBEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007EBEC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007EBF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007EBF4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8007EBF8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8007EBFC: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8007EC00: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x8007EC04: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007EC08: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8007EC0C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8007EC10: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_8007EC14:
    // 0x8007EC14: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007EC18: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007EC1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007EC20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007EC24: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007EC28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007EC2C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007EC30: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8007EC34: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8007EC38: nop

    // 0x8007EC3C: bne         $t9, $zero, L_8007EDC0
    if (ctx->r25 != 0) {
        // 0x8007EC40: nop
    
            goto L_8007EDC0;
    }
    // 0x8007EC40: nop

    // 0x8007EC44: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007EC48: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8007EC4C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007EC50: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007EC54: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007EC58: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007EC5C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007EC60: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8007EC64: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8007EC68: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8007EC6C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EC70: jal         0x8001A928
    // 0x8007EC74: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007EC74: nop

    after_0:
    // 0x8007EC78: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007EC7C: addiu       $t4, $t4, -0x3560
    ctx->r12 = ADD32(ctx->r12, -0X3560);
    // 0x8007EC80: lw          $a3, 0x80($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X80);
    // 0x8007EC84: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EC88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007EC8C: jal         0x8001BD44
    // 0x8007EC90: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x8007EC90: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8007EC94: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8007EC98: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007EC9C: addiu       $t7, $t7, -0x3560
    ctx->r15 = ADD32(ctx->r15, -0X3560);
    // 0x8007ECA0: addiu       $t5, $t5, 0x665C
    ctx->r13 = ADD32(ctx->r13, 0X665C);
    // 0x8007ECA4: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8007ECA8: lw          $t8, 0x80($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X80);
    // 0x8007ECAC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007ECB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007ECB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8007ECB8: jal         0x8001BD44
    // 0x8007ECBC: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    func_8001BD44(rdram, ctx);
        goto after_2;
    // 0x8007ECBC: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    after_2:
    // 0x8007ECC0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8007ECC4: addiu       $t9, $t9, 0x6660
    ctx->r25 = ADD32(ctx->r25, 0X6660);
    // 0x8007ECC8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007ECCC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8007ECD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007ECD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007ECD8: jal         0x8001C0EC
    // 0x8007ECDC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x8007ECDC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_3:
    // 0x8007ECE0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8007ECE4: addiu       $t0, $t0, 0x6664
    ctx->r8 = ADD32(ctx->r8, 0X6664);
    // 0x8007ECE8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007ECEC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8007ECF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007ECF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007ECF8: jal         0x8001C0EC
    // 0x8007ECFC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x8007ECFC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_4:
    // 0x8007ED00: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007ED04: addiu       $t1, $zero, 0x12
    ctx->r9 = ADD32(0, 0X12);
    // 0x8007ED08: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x8007ED0C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007ED10: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007ED14: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8007ED18: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8007ED1C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8007ED20: nop

    // 0x8007ED24: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
    // 0x8007ED28: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007ED2C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007ED30: nop

    // 0x8007ED34: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x8007ED38: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007ED3C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007ED40: nop

    // 0x8007ED44: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x8007ED48: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007ED4C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007ED50: nop

    // 0x8007ED54: swc1        $f10, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f10.u32l;
    // 0x8007ED58: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8007ED5C: nop

    // 0x8007ED60: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x8007ED64: nop

    // 0x8007ED68: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x8007ED6C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007ED70: nop

    // 0x8007ED74: swc1        $f20, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f20.u32l;
    // 0x8007ED78: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007ED7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007ED80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007ED84: jal         0x80019448
    // 0x8007ED88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_5;
    // 0x8007ED88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x8007ED8C: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8007ED90: nop

    // 0x8007ED94: beq         $t1, $zero, L_8007EDAC
    if (ctx->r9 == 0) {
        // 0x8007ED98: nop
    
            goto L_8007EDAC;
    }
    // 0x8007ED98: nop

    // 0x8007ED9C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8007EDA0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8007EDA4: b           L_8007EDB8
    // 0x8007EDA8: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
        goto L_8007EDB8;
    // 0x8007EDA8: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
L_8007EDAC:
    // 0x8007EDAC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007EDB0: nop

    // 0x8007EDB4: sh          $zero, 0x108($t4)
    MEM_H(0X108, ctx->r12) = 0;
L_8007EDB8:
    // 0x8007EDB8: b           L_8007EDD8
    // 0x8007EDBC: nop

        goto L_8007EDD8;
    // 0x8007EDBC: nop

L_8007EDC0:
    // 0x8007EDC0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8007EDC4: nop

    // 0x8007EDC8: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x8007EDCC: slti        $at, $t7, 0xE
    ctx->r1 = SIGNED(ctx->r15) < 0XE ? 1 : 0;
    // 0x8007EDD0: bne         $at, $zero, L_8007EC14
    if (ctx->r1 != 0) {
        // 0x8007EDD4: sw          $t7, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r15;
            goto L_8007EC14;
    }
    // 0x8007EDD4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_8007EDD8:
    // 0x8007EDD8: b           L_8007EDE0
    // 0x8007EDDC: nop

        goto L_8007EDE0;
    // 0x8007EDDC: nop

L_8007EDE0:
    // 0x8007EDE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007EDE4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007EDE8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007EDEC: jr          $ra
    // 0x8007EDF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007EDF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void _stub1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA724: jr          $ra
    // 0x800BA728: nop

    return;
    // 0x800BA728: nop

    // 0x800BA72C: jr          $ra
    // 0x800BA730: nop

    return;
    // 0x800BA730: nop

;}
RECOMP_FUNC void func_800CFB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFB34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CFB38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CFB3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFB40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFB44: jal         0x8002B0E4
    // 0x800CFB48: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800CFB48: nop

    after_0:
    // 0x800CFB4C: b           L_800CFB54
    // 0x800CFB50: nop

        goto L_800CFB54;
    // 0x800CFB50: nop

L_800CFB54:
    // 0x800CFB54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CFB58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CFB5C: jr          $ra
    // 0x800CFB60: nop

    return;
    // 0x800CFB60: nop

;}
RECOMP_FUNC void func_800AAF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AAF08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AAF0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AAF10: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800AAF14: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800AAF18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AAF1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AAF20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AAF24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AAF28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AAF2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AAF30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AAF34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AAF38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AAF3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AAF40: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AAF44: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAF48: nop

    // 0x800AAF4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AAF50: nop

    // 0x800AAF54: bne         $t1, $zero, L_800AAFE4
    if (ctx->r9 != 0) {
        // 0x800AAF58: nop
    
            goto L_800AAFE4;
    }
    // 0x800AAF58: nop

    // 0x800AAF5C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAF60: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AAF64: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AAF68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AAF6C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAF70: nop

    // 0x800AAF74: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AAF78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AAF7C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAF80: nop

    // 0x800AAF84: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AAF88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAF8C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800AAF90: addiu       $t6, $t6, 0x75D0
    ctx->r14 = ADD32(ctx->r14, 0X75D0);
    // 0x800AAF94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAF98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800AAF9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AAFA0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800AAFA4: jal         0x8001C0EC
    // 0x800AAFA8: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800AAFA8: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
    // 0x800AAFAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAFB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAFB4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AAFB8: addiu       $a3, $a3, 0x763C
    ctx->r7 = ADD32(ctx->r7, 0X763C);
    // 0x800AAFBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AAFC0: jal         0x8001ABF4
    // 0x800AAFC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800AAFC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800AAFC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAFCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAFD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AAFD4: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x800AAFD8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AAFDC: jal         0x800175F0
    // 0x800AAFE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800AAFE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800AAFE4:
    // 0x800AAFE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAFE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAFEC: jal         0x8002A8B4
    // 0x800AAFF0: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800AAFF0: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_3:
    // 0x800AAFF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAFF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAFFC: jal         0x80029C40
    // 0x800AB000: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800AB000: nop

    after_4:
    // 0x800AB004: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB008: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB00C: jal         0x80029D04
    // 0x800AB010: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800AB010: nop

    after_5:
    // 0x800AB014: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AB018: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800AB01C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800AB020: lwc1        $f8, 0xC($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0XC);
    // 0x800AB024: nop

    // 0x800AB028: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x800AB02C: nop

    // 0x800AB030: bc1f        L_800AB098
    if (!c1cs) {
        // 0x800AB034: nop
    
            goto L_800AB098;
    }
    // 0x800AB034: nop

    // 0x800AB038: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AB03C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AB040: lwc1        $f18, 0x4A4C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4A4C);
    // 0x800AB044: lwc1        $f16, 0xC($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800AB048: nop

    // 0x800AB04C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800AB050: swc1        $f4, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f4.u32l;
    // 0x800AB054: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AB058: nop

    // 0x800AB05C: lwc1        $f20, 0xC($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800AB060: nop

    // 0x800AB064: swc1        $f20, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f20.u32l;
    // 0x800AB068: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AB06C: nop

    // 0x800AB070: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
    // 0x800AB074: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB078: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB07C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800AB080: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x800AB084: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AB088: jal         0x800175F0
    // 0x800AB08C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x800AB08C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x800AB090: b           L_800AB0B0
    // 0x800AB094: nop

        goto L_800AB0B0;
    // 0x800AB094: nop

L_800AB098:
    // 0x800AB098: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800AB09C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800AB0A0: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800AB0A4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AB0A8: nop

    // 0x800AB0AC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800AB0B0:
    // 0x800AB0B0: b           L_800AB0B8
    // 0x800AB0B4: nop

        goto L_800AB0B8;
    // 0x800AB0B4: nop

L_800AB0B8:
    // 0x800AB0B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AB0BC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800AB0C0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800AB0C4: jr          $ra
    // 0x800AB0C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AB0C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80092E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092E04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092E08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092E0C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092E10: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092E14: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092E18: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092E1C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092E20: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092E24: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092E28: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092E2C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092E30: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092E34: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092E38: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092E3C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092E40: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092E44: addiu       $a1, $a1, 0x1780
    ctx->r5 = ADD32(ctx->r5, 0X1780);
    // 0x80092E48: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092E4C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092E50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092E54: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092E58: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092E5C: jal         0x80027464
    // 0x80092E60: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092E60: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092E64: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092E68: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80092E6C: addiu       $t1, $t1, 0x31A0
    ctx->r9 = ADD32(ctx->r9, 0X31A0);
    // 0x80092E70: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092E74: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80092E78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092E7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80092E80: jal         0x8001C0EC
    // 0x80092E84: addiu       $a3, $zero, 0x280
    ctx->r7 = ADD32(0, 0X280);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80092E84: addiu       $a3, $zero, 0x280
    ctx->r7 = ADD32(0, 0X280);
    after_1:
    // 0x80092E88: b           L_80092E90
    // 0x80092E8C: nop

        goto L_80092E90;
    // 0x80092E8C: nop

L_80092E90:
    // 0x80092E90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092E94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092E98: jr          $ra
    // 0x80092E9C: nop

    return;
    // 0x80092E9C: nop

;}
RECOMP_FUNC void func_800F3248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F3248: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F324C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F3250: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F3254: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F3258: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F325C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F3260: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F3264: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F3268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F326C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F3270: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F3274: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F3278: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F327C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800F3280: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800F3284: nop

    // 0x800F3288: bne         $t0, $zero, L_800F32AC
    if (ctx->r8 != 0) {
        // 0x800F328C: nop
    
            goto L_800F32AC;
    }
    // 0x800F328C: nop

    // 0x800F3290: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800F3294: nop

    // 0x800F3298: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800F329C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F32A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F32A4: jal         0x8002B0E4
    // 0x800F32A8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800F32A8: nop

    after_0:
L_800F32AC:
    // 0x800F32AC: b           L_800F32B4
    // 0x800F32B0: nop

        goto L_800F32B4;
    // 0x800F32B0: nop

L_800F32B4:
    // 0x800F32B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F32B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F32BC: jr          $ra
    // 0x800F32C0: nop

    return;
    // 0x800F32C0: nop

;}
RECOMP_FUNC void func_800AD648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AD648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AD64C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AD650: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AD654: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800AD658: nop

    // 0x800AD65C: beq         $t6, $zero, L_800AD678
    if (ctx->r14 == 0) {
        // 0x800AD660: nop
    
            goto L_800AD678;
    }
    // 0x800AD660: nop

    // 0x800AD664: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AD668: beq         $t6, $at, L_800AD678
    if (ctx->r14 == ctx->r1) {
        // 0x800AD66C: nop
    
            goto L_800AD678;
    }
    // 0x800AD66C: nop

    // 0x800AD670: b           L_800AD690
    // 0x800AD674: nop

        goto L_800AD690;
    // 0x800AD674: nop

L_800AD678:
    // 0x800AD678: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD67C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD680: jal         0x8002B0E4
    // 0x800AD684: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800AD684: nop

    after_0:
    // 0x800AD688: b           L_800AD690
    // 0x800AD68C: nop

        goto L_800AD690;
    // 0x800AD68C: nop

L_800AD690:
    // 0x800AD690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AD694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AD698: jr          $ra
    // 0x800AD69C: nop

    return;
    // 0x800AD69C: nop

;}
RECOMP_FUNC void func_800A6D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6D0C: jr          $ra
    // 0x800A6D10: nop

    return;
    // 0x800A6D10: nop

    // 0x800A6D14: jr          $ra
    // 0x800A6D18: nop

    return;
    // 0x800A6D18: nop

;}
RECOMP_FUNC void func_8009195C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009195C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091960: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091964: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091968: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009196C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091970: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091974: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091978: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009197C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091980: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091984: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091988: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009198C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091990: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091994: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091998: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009199C: addiu       $a1, $a1, 0x15D0
    ctx->r5 = ADD32(ctx->r5, 0X15D0);
    // 0x800919A0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800919A4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800919A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800919AC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800919B0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800919B4: jal         0x80027464
    // 0x800919B8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800919B8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800919BC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800919C0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800919C4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800919C8: addiu       $a3, $a3, 0x259C
    ctx->r7 = ADD32(ctx->r7, 0X259C);
    // 0x800919CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800919D0: jal         0x8001ABF4
    // 0x800919D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800919D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x800919D8: b           L_800919E0
    // 0x800919DC: nop

        goto L_800919E0;
    // 0x800919DC: nop

L_800919E0:
    // 0x800919E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800919E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800919E8: jr          $ra
    // 0x800919EC: nop

    return;
    // 0x800919EC: nop

;}
RECOMP_FUNC void func_8009E5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E5F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009E5F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009E5FC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009E600: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009E604: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009E608: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009E60C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009E610: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009E614: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009E618: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009E61C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009E620: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009E624: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009E628: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009E62C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009E630: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009E634: addiu       $a1, $a1, 0x3610
    ctx->r5 = ADD32(ctx->r5, 0X3610);
    // 0x8009E638: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009E63C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009E640: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009E644: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009E648: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009E64C: jal         0x80027464
    // 0x8009E650: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009E650: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009E654: b           L_8009E65C
    // 0x8009E658: nop

        goto L_8009E65C;
    // 0x8009E658: nop

L_8009E65C:
    // 0x8009E65C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009E664: jr          $ra
    // 0x8009E668: nop

    return;
    // 0x8009E668: nop

;}
RECOMP_FUNC void func_800A9AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9AEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A9AF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A9AF4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A9AF8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800A9AFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A9B00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A9B04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A9B08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A9B0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A9B10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A9B14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A9B18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A9B1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A9B20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A9B24: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800A9B28: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9B2C: nop

    // 0x800A9B30: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A9B34: nop

    // 0x800A9B38: bne         $t1, $zero, L_800A9BB8
    if (ctx->r9 != 0) {
        // 0x800A9B3C: nop
    
            goto L_800A9BB8;
    }
    // 0x800A9B3C: nop

    // 0x800A9B40: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9B44: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A9B48: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A9B4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A9B50: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9B54: nop

    // 0x800A9B58: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A9B5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A9B60: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9B64: nop

    // 0x800A9B68: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A9B6C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9B70: nop

    // 0x800A9B74: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800A9B78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9B7C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800A9B80: addiu       $t7, $t7, 0x75D0
    ctx->r15 = ADD32(ctx->r15, 0X75D0);
    // 0x800A9B84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9B88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800A9B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9B90: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x800A9B94: jal         0x8001C0EC
    // 0x800A9B98: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A9B98: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
    // 0x800A9B9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9BA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9BA4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A9BA8: addiu       $a3, $a3, 0x763C
    ctx->r7 = ADD32(ctx->r7, 0X763C);
    // 0x800A9BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9BB0: jal         0x8001ABF4
    // 0x800A9BB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800A9BB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800A9BB8:
    // 0x800A9BB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9BBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9BC0: jal         0x8002A8B4
    // 0x800A9BC4: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800A9BC4: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_2:
    // 0x800A9BC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9BCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9BD0: jal         0x80029C40
    // 0x800A9BD4: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800A9BD4: nop

    after_3:
    // 0x800A9BD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9BDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9BE0: jal         0x80029D04
    // 0x800A9BE4: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800A9BE4: nop

    after_4:
    // 0x800A9BE8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9BEC: nop

    // 0x800A9BF0: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800A9BF4: nop

    // 0x800A9BF8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800A9BFC: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x800A9C00: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9C04: nop

    // 0x800A9C08: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800A9C0C: nop

    // 0x800A9C10: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x800A9C14: beq         $t3, $zero, L_800A9C5C
    if (ctx->r11 == 0) {
        // 0x800A9C18: nop
    
            goto L_800A9C5C;
    }
    // 0x800A9C18: nop

    // 0x800A9C1C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9C20: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800A9C24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A9C28: lwc1        $f8, 0x20($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X20);
    // 0x800A9C2C: nop

    // 0x800A9C30: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A9C34: swc1        $f16, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f16.u32l;
    // 0x800A9C38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9C3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9C40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9C44: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x800A9C48: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A9C4C: jal         0x800175F0
    // 0x800A9C50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x800A9C50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x800A9C54: b           L_800A9C78
    // 0x800A9C58: nop

        goto L_800A9C78;
    // 0x800A9C58: nop

L_800A9C5C:
    // 0x800A9C5C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9C60: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800A9C64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A9C68: lwc1        $f18, 0x20($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X20);
    // 0x800A9C6C: nop

    // 0x800A9C70: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800A9C74: swc1        $f6, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f6.u32l;
L_800A9C78:
    // 0x800A9C78: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9C7C: nop

    // 0x800A9C80: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800A9C84: nop

    // 0x800A9C88: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x800A9C8C: bne         $at, $zero, L_800A9D20
    if (ctx->r1 != 0) {
        // 0x800A9C90: nop
    
            goto L_800A9D20;
    }
    // 0x800A9C90: nop

    // 0x800A9C94: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9C98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800A9C9C: lwc1        $f8, 0xC($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800A9CA0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800A9CA4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A9CA8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800A9CAC: c.le.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d <= ctx->f16.d;
    // 0x800A9CB0: nop

    // 0x800A9CB4: bc1f        L_800A9D00
    if (!c1cs) {
        // 0x800A9CB8: nop
    
            goto L_800A9D00;
    }
    // 0x800A9CB8: nop

    // 0x800A9CBC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9CC0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A9CC4: lwc1        $f18, 0xC($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800A9CC8: lwc1        $f7, 0x4A20($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4A20);
    // 0x800A9CCC: lwc1        $f6, 0x4A24($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4A24);
    // 0x800A9CD0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800A9CD4: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800A9CD8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800A9CDC: swc1        $f10, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f10.u32l;
    // 0x800A9CE0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9CE4: nop

    // 0x800A9CE8: lwc1        $f20, 0xC($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800A9CEC: nop

    // 0x800A9CF0: swc1        $f20, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f20.u32l;
    // 0x800A9CF4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9CF8: b           L_800A9D20
    // 0x800A9CFC: swc1        $f20, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f20.u32l;
        goto L_800A9D20;
    // 0x800A9CFC: swc1        $f20, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f20.u32l;
L_800A9D00:
    // 0x800A9D00: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9D04: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800A9D08: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800A9D0C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9D10: nop

    // 0x800A9D14: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800A9D18: b           L_800A9D60
    // 0x800A9D1C: nop

        goto L_800A9D60;
    // 0x800A9D1C: nop

L_800A9D20:
    // 0x800A9D20: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9D24: nop

    // 0x800A9D28: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800A9D2C: nop

    // 0x800A9D30: slti        $at, $t6, 0xD
    ctx->r1 = SIGNED(ctx->r14) < 0XD ? 1 : 0;
    // 0x800A9D34: bne         $at, $zero, L_800A9D58
    if (ctx->r1 != 0) {
        // 0x800A9D38: nop
    
            goto L_800A9D58;
    }
    // 0x800A9D38: nop

    // 0x800A9D3C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9D40: nop

    // 0x800A9D44: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x800A9D48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A9D4C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9D50: nop

    // 0x800A9D54: swc1        $f16, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f16.u32l;
L_800A9D58:
    // 0x800A9D58: b           L_800A9D60
    // 0x800A9D5C: nop

        goto L_800A9D60;
    // 0x800A9D5C: nop

L_800A9D60:
    // 0x800A9D60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A9D64: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800A9D68: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A9D6C: jr          $ra
    // 0x800A9D70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A9D70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CB24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB24C: jr          $ra
    // 0x800CB250: nop

    return;
    // 0x800CB250: nop

    // 0x800CB254: jr          $ra
    // 0x800CB258: nop

    return;
    // 0x800CB258: nop

;}
RECOMP_FUNC void func_800FC6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC6BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FC6C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FC6C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FC6C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FC6CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FC6D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FC6D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FC6D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FC6DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FC6E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FC6E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FC6E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FC6EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800FC6F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FC6F4: nop

    // 0x800FC6F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FC6FC: nop

    // 0x800FC700: bne         $t1, $zero, L_800FC788
    if (ctx->r9 != 0) {
        // 0x800FC704: nop
    
            goto L_800FC788;
    }
    // 0x800FC704: nop

    // 0x800FC708: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800FC70C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FC710: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800FC714: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FC718: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800FC71C: nop

    // 0x800FC720: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800FC724: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800FC728: nop

    // 0x800FC72C: lh          $t6, 0xAA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAA);
    // 0x800FC730: nop

    // 0x800FC734: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800FC738: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800FC73C: nop

    // 0x800FC740: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800FC744: swc1        $f8, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f8.u32l;
    // 0x800FC748: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800FC74C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FC750: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800FC754: nop

    // 0x800FC758: swc1        $f10, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f10.u32l;
    // 0x800FC75C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC760: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC764: jal         0x8001BBDC
    // 0x800FC768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800FC768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800FC76C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC770: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FC778: addiu       $a2, $zero, 0x36
    ctx->r6 = ADD32(0, 0X36);
    // 0x800FC77C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800FC780: jal         0x800175F0
    // 0x800FC784: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800FC784: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800FC788:
    // 0x800FC788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC78C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC790: jal         0x80029C40
    // 0x800FC794: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800FC794: nop

    after_2:
    // 0x800FC798: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC79C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC7A0: jal         0x80029D04
    // 0x800FC7A4: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800FC7A4: nop

    after_3:
    // 0x800FC7A8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800FC7AC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800FC7B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FC7B4: lwc1        $f16, 0x54($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X54);
    // 0x800FC7B8: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800FC7BC: lwc1        $f8, 0x28($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800FC7C0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800FC7C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800FC7C8: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x800FC7CC: nop

    // 0x800FC7D0: bc1f        L_800FC810
    if (!c1cs) {
        // 0x800FC7D4: nop
    
            goto L_800FC810;
    }
    // 0x800FC7D4: nop

    // 0x800FC7D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FC7DC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800FC7E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FC7E4: lwc1        $f16, 0x54($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X54);
    // 0x800FC7E8: nop

    // 0x800FC7EC: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800FC7F0: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x800FC7F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800FC7F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800FC7FC: nop

    // 0x800FC800: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
    // 0x800FC804: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800FC808: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800FC80C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800FC810:
    // 0x800FC810: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800FC814: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800FC818: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FC81C: lwc1        $f4, 0x54($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X54);
    // 0x800FC820: lwc1        $f18, 0x4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800FC824: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800FC828: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x800FC82C: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800FC830: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x800FC834: nop

    // 0x800FC838: bc1f        L_800FC878
    if (!c1cs) {
        // 0x800FC83C: nop
    
            goto L_800FC878;
    }
    // 0x800FC83C: nop

    // 0x800FC840: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800FC844: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800FC848: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FC84C: lwc1        $f4, 0x54($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X54);
    // 0x800FC850: nop

    // 0x800FC854: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x800FC858: swc1        $f18, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f18.u32l;
    // 0x800FC85C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FC860: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800FC864: nop

    // 0x800FC868: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
    // 0x800FC86C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800FC870: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800FC874: sb          $t5, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r13;
L_800FC878:
    // 0x800FC878: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800FC87C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FC880: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x800FC884: nop

    // 0x800FC888: bne         $t0, $at, L_800FC8B8
    if (ctx->r8 != ctx->r1) {
        // 0x800FC88C: nop
    
            goto L_800FC8B8;
    }
    // 0x800FC88C: nop

    // 0x800FC890: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800FC894: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800FC898: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800FC89C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800FC8A0: nop

    // 0x800FC8A4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800FC8A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC8AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC8B0: jal         0x8001BBDC
    // 0x800FC8B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x800FC8B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_800FC8B8:
    // 0x800FC8B8: b           L_800FC8C0
    // 0x800FC8BC: nop

        goto L_800FC8C0;
    // 0x800FC8BC: nop

L_800FC8C0:
    // 0x800FC8C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC8C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FC8C8: jr          $ra
    // 0x800FC8CC: nop

    return;
    // 0x800FC8CC: nop

;}
RECOMP_FUNC void func_8009C74C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C74C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009C750: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8009C754: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009C758: bne         $t6, $at, L_8009C7B4
    if (ctx->r14 != ctx->r1) {
        // 0x8009C75C: nop
    
            goto L_8009C7B4;
    }
    // 0x8009C75C: nop

    // 0x8009C760: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8009C764: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x8009C768: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009C76C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8009C770: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009C774: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009C778: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009C77C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009C780: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8009C784: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8009C788: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8009C78C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8009C790: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8009C794: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009C798: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009C79C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009C7A0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009C7A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009C7A8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009C7AC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009C7B0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8009C7B4:
    // 0x8009C7B4: jr          $ra
    // 0x8009C7B8: nop

    return;
    // 0x8009C7B8: nop

    // 0x8009C7BC: jr          $ra
    // 0x8009C7C0: nop

    return;
    // 0x8009C7C0: nop

;}
