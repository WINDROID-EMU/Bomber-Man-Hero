#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80338204_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338204: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80338208: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
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
    // 0x80338234: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80338238: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033823C: nop

    // 0x80338240: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80338244: nop

    // 0x80338248: addiu       $t2, $t1, -0x5
    ctx->r10 = ADD32(ctx->r9, -0X5);
    // 0x8033824C: sltiu       $at, $t2, 0xF
    ctx->r1 = ctx->r10 < 0XF ? 1 : 0;
    // 0x80338250: beq         $at, $zero, L_80338384
    if (ctx->r1 == 0) {
        // 0x80338254: nop
    
            goto L_80338384;
    }
    // 0x80338254: nop

    // 0x80338258: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033825C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338260: addu        $at, $at, $t2
    gpr jr_addend_8033826C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80338264: lw          $t2, -0x4AE0($at)
    ctx->r10 = ADD32(ctx->r1, -0X4AE0);
    // 0x80338268: nop

    // 0x8033826C: jr          $t2
    // 0x80338270: nop

    switch (jr_addend_8033826C >> 2) {
        case 0: goto L_80338274; break;
        case 1: goto L_80338384; break;
        case 2: goto L_80338358; break;
        case 3: goto L_80338384; break;
        case 4: goto L_80338318; break;
        case 5: goto L_80338318; break;
        case 6: goto L_80338384; break;
        case 7: goto L_80338384; break;
        case 8: goto L_803382F8; break;
        case 9: goto L_803382F8; break;
        case 10: goto L_80338384; break;
        case 11: goto L_80338358; break;
        case 12: goto L_803382F8; break;
        case 13: goto L_80338384; break;
        case 14: goto L_803382F8; break;
        default: switch_error(__func__, 0x8033826C, 0x8033B520);
    }
    // 0x80338270: nop

L_80338274:
    // 0x80338274: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80338278: nop

    // 0x8033827C: lwc1        $f14, 0x1C($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80338280: lwc1        $f12, 0x128($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X128);
    // 0x80338284: jal         0x80015538
    // 0x80338288: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80338288: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_0:
    // 0x8033828C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80338290: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80338294: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80338298: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8033829C: nop

    // 0x803382A0: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x803382A4: nop

    // 0x803382A8: bc1t        L_803382CC
    if (c1cs) {
        // 0x803382AC: nop
    
            goto L_803382CC;
    }
    // 0x803382AC: nop

    // 0x803382B0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803382B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803382B8: nop

    // 0x803382BC: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x803382C0: nop

    // 0x803382C4: bc1f        L_803382DC
    if (!c1cs) {
        // 0x803382C8: nop
    
            goto L_803382DC;
    }
    // 0x803382C8: nop

L_803382CC:
    // 0x803382CC: jal         0x80337D90
    // 0x803382D0: nop

    func_80337D90_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x803382D0: nop

    after_1:
    // 0x803382D4: b           L_803382E4
    // 0x803382D8: nop

        goto L_803382E4;
    // 0x803382D8: nop

L_803382DC:
    // 0x803382DC: jal         0x80337E7C
    // 0x803382E0: nop

    func_80337E7C_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x803382E0: nop

    after_2:
L_803382E4:
    // 0x803382E4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803382E8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803382EC: sh          $t4, -0x4D14($at)
    MEM_H(-0X4D14, ctx->r1) = ctx->r12;
    // 0x803382F0: b           L_8033838C
    // 0x803382F4: nop

        goto L_8033838C;
    // 0x803382F4: nop

L_803382F8:
    // 0x803382F8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803382FC: nop

    // 0x80338300: lwc1        $f10, 0x28($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X28);
    // 0x80338304: nop

    // 0x80338308: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x8033830C: swc1        $f16, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f16.u32l;
    // 0x80338310: b           L_8033838C
    // 0x80338314: nop

        goto L_8033838C;
    // 0x80338314: nop

L_80338318:
    // 0x80338318: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033831C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80338320: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338324: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80338328: jal         0x80015538
    // 0x8033832C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033832C: nop

    after_3:
    // 0x80338330: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80338334: nop

    // 0x80338338: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x8033833C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80338340: nop

    // 0x80338344: lwc1        $f18, 0x3C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80338348: nop

    // 0x8033834C: swc1        $f18, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f18.u32l;
    // 0x80338350: b           L_8033838C
    // 0x80338354: nop

        goto L_8033838C;
    // 0x80338354: nop

L_80338358:
    // 0x80338358: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033835C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80338360: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338364: lwc1        $f12, 0x3C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80338368: jal         0x80015538
    // 0x8033836C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8033836C: nop

    after_4:
    // 0x80338370: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80338374: nop

    // 0x80338378: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x8033837C: b           L_8033838C
    // 0x80338380: nop

        goto L_8033838C;
    // 0x80338380: nop

L_80338384:
    // 0x80338384: b           L_8033838C
    // 0x80338388: nop

        goto L_8033838C;
    // 0x80338388: nop

L_8033838C:
    // 0x8033838C: b           L_80338394
    // 0x80338390: nop

        goto L_80338394;
    // 0x80338390: nop

L_80338394:
    // 0x80338394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80338398: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033839C: jr          $ra
    // 0x803383A0: nop

    return;
    // 0x803383A0: nop

;}
RECOMP_FUNC void func_80332F00_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332F00: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80332F04: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332F08: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332F0C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332F10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332F14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332F1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F20: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332F24: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332F28: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332F2C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80332F30: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80332F34: nop

    // 0x80332F38: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332F3C: nop

    // 0x80332F40: bne         $t1, $zero, L_80332F94
    if (ctx->r9 != 0) {
        // 0x80332F44: nop
    
            goto L_80332F94;
    }
    // 0x80332F44: nop

    // 0x80332F48: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80332F4C: nop

    // 0x80332F50: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332F54: nop

    // 0x80332F58: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332F5C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332F60: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80332F64: nop

    // 0x80332F68: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332F6C: nop

    // 0x80332F70: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332F74: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80332F78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332F7C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80332F80: nop

    // 0x80332F84: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80332F88: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80332F8C: nop

    // 0x80332F90: sh          $zero, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = 0;
L_80332F94:
    // 0x80332F94: b           L_80332F9C
    // 0x80332F98: nop

        goto L_80332F9C;
    // 0x80332F98: nop

L_80332F9C:
    // 0x80332F9C: jr          $ra
    // 0x80332FA0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80332FA0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_803387BC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803387BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803387C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803387C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803387C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803387CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803387D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803387D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803387D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803387DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803387E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803387E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803387E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803387EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803387F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803387F4: nop

    // 0x803387F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803387FC: nop

    // 0x80338800: bne         $t1, $zero, L_8033889C
    if (ctx->r9 != 0) {
        // 0x80338804: nop
    
            goto L_8033889C;
    }
    // 0x80338804: nop

    // 0x80338808: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033880C: nop

    // 0x80338810: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338814: nop

    // 0x80338818: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033881C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338820: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338824: nop

    // 0x80338828: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033882C: nop

    // 0x80338830: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338834: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338838: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033883C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80338840: jal         0x80029EF8
    // 0x80338844: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80338844: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80338848: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033884C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338850: addiu       $t7, $t7, -0x5174
    ctx->r15 = ADD32(ctx->r15, -0X5174);
    // 0x80338854: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338858: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033885C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80338864: jal         0x8001C0EC
    // 0x80338868: addiu       $a3, $zero, 0x11F
    ctx->r7 = ADD32(0, 0X11F);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80338868: addiu       $a3, $zero, 0x11F
    ctx->r7 = ADD32(0, 0X11F);
    after_1:
    // 0x8033886C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338870: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338874: jal         0x8002A46C
    // 0x80338878: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_2;
    // 0x80338878: nop

    after_2:
    // 0x8033887C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338880: nop

    // 0x80338884: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80338888: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033888C: nop

    // 0x80338890: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80338894: nop

    // 0x80338898: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
L_8033889C:
    // 0x8033889C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803388A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803388A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803388A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803388AC: jal         0x8002A0D0
    // 0x803388B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_3;
    // 0x803388B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_3:
    // 0x803388B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803388B8: bne         $v0, $at, L_803388E8
    if (ctx->r2 != ctx->r1) {
        // 0x803388BC: nop
    
            goto L_803388E8;
    }
    // 0x803388BC: nop

    // 0x803388C0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803388C4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803388C8: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803388CC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803388D0: nop

    // 0x803388D4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x803388D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803388DC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803388E0: nop

    // 0x803388E4: swc1        $f6, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f6.u32l;
L_803388E8:
    // 0x803388E8: b           L_803388F0
    // 0x803388EC: nop

        goto L_803388F0;
    // 0x803388EC: nop

L_803388F0:
    // 0x803388F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803388F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803388F8: jr          $ra
    // 0x803388FC: nop

    return;
    // 0x803388FC: nop

;}
RECOMP_FUNC void func_80335C7C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335C7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80335C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335C84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335C88: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335C8C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335C90: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335C94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335C98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335C9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335CA0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335CA4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335CA8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335CAC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80335CB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335CB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335CB8: jal         0x8002A2EC
    // 0x80335CBC: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x80335CBC: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_0:
    // 0x80335CC0: beq         $v0, $zero, L_80335CD8
    if (ctx->r2 == 0) {
        // 0x80335CC4: nop
    
            goto L_80335CD8;
    }
    // 0x80335CC4: nop

    // 0x80335CC8: jal         0x80336978
    // 0x80335CCC: nop

    func_80336978_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80335CCC: nop

    after_1:
    // 0x80335CD0: b           L_80335CE0
    // 0x80335CD4: nop

        goto L_80335CE0;
    // 0x80335CD4: nop

L_80335CD8:
    // 0x80335CD8: jal         0x80336C50
    // 0x80335CDC: nop

    func_80336C50_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80335CDC: nop

    after_2:
L_80335CE0:
    // 0x80335CE0: b           L_80335CE8
    // 0x80335CE4: nop

        goto L_80335CE8;
    // 0x80335CE4: nop

L_80335CE8:
    // 0x80335CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80335CF0: jr          $ra
    // 0x80335CF4: nop

    return;
    // 0x80335CF4: nop

;}
RECOMP_FUNC void func_80337CF0_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337CF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80337CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337CF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80337CFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337D00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337D04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337D08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337D0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337D10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337D14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337D18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337D1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337D20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337D24: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80337D28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337D2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337D30: jal         0x8002A2EC
    // 0x80337D34: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x80337D34: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_0:
    // 0x80337D38: beq         $v0, $zero, L_80337D70
    if (ctx->r2 == 0) {
        // 0x80337D3C: nop
    
            goto L_80337D70;
    }
    // 0x80337D3C: nop

    // 0x80337D40: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80337D44: nop

    // 0x80337D48: bne         $t0, $zero, L_80337D60
    if (ctx->r8 != 0) {
        // 0x80337D4C: nop
    
            goto L_80337D60;
    }
    // 0x80337D4C: nop

    // 0x80337D50: jal         0x80336978
    // 0x80337D54: nop

    func_80336978_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80337D54: nop

    after_1:
    // 0x80337D58: b           L_80337D68
    // 0x80337D5C: nop

        goto L_80337D68;
    // 0x80337D5C: nop

L_80337D60:
    // 0x80337D60: jal         0x80336B9C
    // 0x80337D64: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80337D64: nop

    after_2:
L_80337D68:
    // 0x80337D68: b           L_80337D78
    // 0x80337D6C: nop

        goto L_80337D78;
    // 0x80337D6C: nop

L_80337D70:
    // 0x80337D70: jal         0x80336B9C
    // 0x80337D74: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80337D74: nop

    after_3:
L_80337D78:
    // 0x80337D78: b           L_80337D80
    // 0x80337D7C: nop

        goto L_80337D80;
    // 0x80337D7C: nop

L_80337D80:
    // 0x80337D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80337D84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80337D88: jr          $ra
    // 0x80337D8C: nop

    return;
    // 0x80337D8C: nop

;}
RECOMP_FUNC void func_803335C0_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803335C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803335C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803335C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803335CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803335D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803335D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803335D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803335DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803335E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803335E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803335E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803335EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803335F0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803335F4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803335F8: nop

    // 0x803335FC: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x80333600: nop

    // 0x80333604: bne         $t1, $zero, L_803336E8
    if (ctx->r9 != 0) {
        // 0x80333608: nop
    
            goto L_803336E8;
    }
    // 0x80333608: nop

    // 0x8033360C: jal         0x80336038
    // 0x80333610: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_80336038_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80333610: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x80333614: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333618: bne         $v0, $at, L_803336E0
    if (ctx->r2 != ctx->r1) {
        // 0x8033361C: nop
    
            goto L_803336E0;
    }
    // 0x8033361C: nop

    // 0x80333620: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333624: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80333628: sh          $t2, 0xB4($t3)
    MEM_H(0XB4, ctx->r11) = ctx->r10;
    // 0x8033362C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333630: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80333634: addiu       $t4, $t4, -0x52A0
    ctx->r12 = ADD32(ctx->r12, -0X52A0);
    // 0x80333638: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033363C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80333640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333644: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80333648: jal         0x8001C0EC
    // 0x8033364C: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033364C: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_1:
    // 0x80333650: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333654: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033365C: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x80333660: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333664: jal         0x800175F0
    // 0x80333668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x80333668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8033366C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333670: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333674: jal         0x8001BBDC
    // 0x80333678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80333678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033367C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333680: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333688: jal         0x8001B6BC
    // 0x8033368C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_4;
    // 0x8033368C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_4:
    // 0x80333690: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333694: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80333698: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033369C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803336A0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x803336A4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x803336A8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803336AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803336B0: jal         0x800295C0
    // 0x803336B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x803336B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x803336B8: beq         $v0, $zero, L_803336D0
    if (ctx->r2 == 0) {
        // 0x803336BC: nop
    
            goto L_803336D0;
    }
    // 0x803336BC: nop

    // 0x803336C0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803336C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803336C8: b           L_803336E0
    // 0x803336CC: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
        goto L_803336E0;
    // 0x803336CC: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
L_803336D0:
    // 0x803336D0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803336D4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803336D8: nop

    // 0x803336DC: swc1        $f10, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f10.u32l;
L_803336E0:
    // 0x803336E0: b           L_80333764
    // 0x803336E4: nop

        goto L_80333764;
    // 0x803336E4: nop

L_803336E8:
    // 0x803336E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803336EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803336F0: jal         0x8001B62C
    // 0x803336F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_6;
    // 0x803336F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x803336F8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803336FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333700: nop

    // 0x80333704: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80333708: nop

    // 0x8033370C: bc1f        L_80333734
    if (!c1cs) {
        // 0x80333710: nop
    
            goto L_80333734;
    }
    // 0x80333710: nop

    // 0x80333714: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333718: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033371C: addiu       $a3, $a3, -0x51E4
    ctx->r7 = ADD32(ctx->r7, -0X51E4);
    // 0x80333720: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333724: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80333728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033372C: jal         0x8001ABF4
    // 0x80333730: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x80333730: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_80333734:
    // 0x80333734: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333738: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033373C: jal         0x8001B4AC
    // 0x80333740: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x80333740: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80333744: beq         $v0, $zero, L_80333764
    if (ctx->r2 == 0) {
        // 0x80333748: nop
    
            goto L_80333764;
    }
    // 0x80333748: nop

    // 0x8033374C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333750: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80333754: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x80333758: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033375C: nop

    // 0x80333760: sh          $zero, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = 0;
L_80333764:
    // 0x80333764: b           L_8033376C
    // 0x80333768: nop

        goto L_8033376C;
    // 0x80333768: nop

L_8033376C:
    // 0x8033376C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333770: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80333774: jr          $ra
    // 0x80333778: nop

    return;
    // 0x80333778: nop

;}
RECOMP_FUNC void func_80337BCC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337BCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337BD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337BD4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80337BD8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80337BDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80337BE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337BE4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337BE8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337BEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337BF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337BF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337BF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337BFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337C00: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337C04: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337C08: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337C0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337C10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337C14: jal         0x8001B4AC
    // 0x80337C18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x80337C18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80337C1C: beq         $v0, $zero, L_80337CD8
    if (ctx->r2 == 0) {
        // 0x80337C20: nop
    
            goto L_80337CD8;
    }
    // 0x80337C20: nop

    // 0x80337C24: lbu         $s0, 0x2B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X2B);
    // 0x80337C28: addiu       $at, $zero, 0xDF
    ctx->r1 = ADD32(0, 0XDF);
    // 0x80337C2C: beq         $s0, $at, L_80337C60
    if (ctx->r16 == ctx->r1) {
        // 0x80337C30: nop
    
            goto L_80337C60;
    }
    // 0x80337C30: nop

    // 0x80337C34: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x80337C38: beq         $s0, $at, L_80337CB4
    if (ctx->r16 == ctx->r1) {
        // 0x80337C3C: nop
    
            goto L_80337CB4;
    }
    // 0x80337C3C: nop

    // 0x80337C40: addiu       $at, $zero, 0xE1
    ctx->r1 = ADD32(0, 0XE1);
    // 0x80337C44: beq         $s0, $at, L_80337CB4
    if (ctx->r16 == ctx->r1) {
        // 0x80337C48: nop
    
            goto L_80337CB4;
    }
    // 0x80337C48: nop

    // 0x80337C4C: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    // 0x80337C50: beq         $s0, $at, L_80337CB4
    if (ctx->r16 == ctx->r1) {
        // 0x80337C54: nop
    
            goto L_80337CB4;
    }
    // 0x80337C54: nop

    // 0x80337C58: b           L_80337CC4
    // 0x80337C5C: nop

        goto L_80337CC4;
    // 0x80337C5C: nop

L_80337C60:
    // 0x80337C60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337C64: nop

    // 0x80337C68: lh          $t1, 0xBA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBA);
    // 0x80337C6C: nop

    // 0x80337C70: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x80337C74: beq         $at, $zero, L_80337C8C
    if (ctx->r1 == 0) {
        // 0x80337C78: nop
    
            goto L_80337C8C;
    }
    // 0x80337C78: nop

    // 0x80337C7C: jal         0x80336284
    // 0x80337C80: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80337C80: nop

    after_1:
    // 0x80337C84: b           L_80337CAC
    // 0x80337C88: nop

        goto L_80337CAC;
    // 0x80337C88: nop

L_80337C8C:
    // 0x80337C8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337C90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337C94: jal         0x8001B4AC
    // 0x80337C98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80337C98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80337C9C: beq         $v0, $zero, L_80337CAC
    if (ctx->r2 == 0) {
        // 0x80337CA0: nop
    
            goto L_80337CAC;
    }
    // 0x80337CA0: nop

    // 0x80337CA4: jal         0x80336B9C
    // 0x80337CA8: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80337CA8: nop

    after_3:
L_80337CAC:
    // 0x80337CAC: b           L_80337CD8
    // 0x80337CB0: nop

        goto L_80337CD8;
    // 0x80337CB0: nop

L_80337CB4:
    // 0x80337CB4: jal         0x80336284
    // 0x80337CB8: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80337CB8: nop

    after_4:
    // 0x80337CBC: b           L_80337CD8
    // 0x80337CC0: nop

        goto L_80337CD8;
    // 0x80337CC0: nop

L_80337CC4:
    // 0x80337CC4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80337CC8: jal         0x80337CF0
    // 0x80337CCC: nop

    func_80337CF0_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x80337CCC: nop

    after_5:
    // 0x80337CD0: b           L_80337CD8
    // 0x80337CD4: nop

        goto L_80337CD8;
    // 0x80337CD4: nop

L_80337CD8:
    // 0x80337CD8: b           L_80337CE0
    // 0x80337CDC: nop

        goto L_80337CE0;
    // 0x80337CDC: nop

L_80337CE0:
    // 0x80337CE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337CE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80337CE8: jr          $ra
    // 0x80337CEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80337CEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033221C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033221C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332224: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332228: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033222C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332230: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332234: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332238: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033223C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332240: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332244: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332248: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033224C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332250: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332254: nop

    // 0x80332258: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033225C: nop

    // 0x80332260: bne         $t1, $zero, L_803322B4
    if (ctx->r9 != 0) {
        // 0x80332264: nop
    
            goto L_803322B4;
    }
    // 0x80332264: nop

    // 0x80332268: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033226C: nop

    // 0x80332270: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332274: nop

    // 0x80332278: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033227C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332280: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332284: nop

    // 0x80332288: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033228C: nop

    // 0x80332290: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332294: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80332298: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033229C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803322A0: nop

    // 0x803322A4: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x803322A8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803322AC: nop

    // 0x803322B0: sh          $zero, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = 0;
L_803322B4:
    // 0x803322B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803322B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803322BC: jal         0x8002A8B4
    // 0x803322C0: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x803322C0: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_0:
    // 0x803322C4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803322C8: nop

    // 0x803322CC: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x803322D0: nop

    // 0x803322D4: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x803322D8: b           L_803322E0
    // 0x803322DC: nop

        goto L_803322E0;
    // 0x803322DC: nop

L_803322E0:
    // 0x803322E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803322E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803322E8: jr          $ra
    // 0x803322EC: nop

    return;
    // 0x803322EC: nop

;}
RECOMP_FUNC void func_8033A394_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A394: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033A398: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A39C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A3A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A3A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A3A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A3AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A3B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A3B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A3B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A3BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A3C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A3C4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033A3C8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A3CC: nop

    // 0x8033A3D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A3D4: nop

    // 0x8033A3D8: bne         $t1, $zero, L_8033A45C
    if (ctx->r9 != 0) {
        // 0x8033A3DC: nop
    
            goto L_8033A45C;
    }
    // 0x8033A3DC: nop

    // 0x8033A3E0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A3E4: nop

    // 0x8033A3E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A3EC: nop

    // 0x8033A3F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A3F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A3F8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A3FC: nop

    // 0x8033A400: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A404: nop

    // 0x8033A408: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A40C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033A410: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033A414: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A418: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A41C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033A420: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8033A424: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033A428: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033A42C: jal         0x800295C0
    // 0x8033A430: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x8033A430: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8033A434: beq         $v0, $zero, L_8033A44C
    if (ctx->r2 == 0) {
        // 0x8033A438: nop
    
            goto L_8033A44C;
    }
    // 0x8033A438: nop

    // 0x8033A43C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033A440: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A444: b           L_8033A45C
    // 0x8033A448: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
        goto L_8033A45C;
    // 0x8033A448: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
L_8033A44C:
    // 0x8033A44C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033A450: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A454: nop

    // 0x8033A458: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_8033A45C:
    // 0x8033A45C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A460: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033A464: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x8033A468: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033A46C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033A470: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A474: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033A478: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A47C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033A480: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8033A484: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x8033A488: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033A48C: bne         $t2, $at, L_8033A520
    if (ctx->r10 != ctx->r1) {
        // 0x8033A490: nop
    
            goto L_8033A520;
    }
    // 0x8033A490: nop

    // 0x8033A494: lh          $t6, 0xB4($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XB4);
    // 0x8033A498: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033A49C: bne         $t6, $at, L_8033A520
    if (ctx->r14 != ctx->r1) {
        // 0x8033A4A0: nop
    
            goto L_8033A520;
    }
    // 0x8033A4A0: nop

    // 0x8033A4A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A4A8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8033A4AC: addiu       $t5, $t5, -0x505C
    ctx->r13 = ADD32(ctx->r13, -0X505C);
    // 0x8033A4B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A4B4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8033A4B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A4BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033A4C0: jal         0x8001C0EC
    // 0x8033A4C4: addiu       $a3, $zero, 0x128
    ctx->r7 = ADD32(0, 0X128);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033A4C4: addiu       $a3, $zero, 0x128
    ctx->r7 = ADD32(0, 0X128);
    after_1:
    // 0x8033A4C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A4CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A4D0: addiu       $a3, $a3, -0x4FF4
    ctx->r7 = ADD32(ctx->r7, -0X4FF4);
    // 0x8033A4D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A4D8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8033A4DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A4E0: jal         0x8001ABF4
    // 0x8033A4E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033A4E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033A4E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A4EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A4F0: addiu       $a3, $a3, -0x4FF4
    ctx->r7 = ADD32(ctx->r7, -0X4FF4);
    // 0x8033A4F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A4F8: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8033A4FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033A500: jal         0x8001ABF4
    // 0x8033A504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8033A504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8033A508: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A50C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8033A510: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8033A514: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A518: nop

    // 0x8033A51C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_8033A520:
    // 0x8033A520: b           L_8033A528
    // 0x8033A524: nop

        goto L_8033A528;
    // 0x8033A524: nop

L_8033A528:
    // 0x8033A528: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A52C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033A530: jr          $ra
    // 0x8033A534: nop

    return;
    // 0x8033A534: nop

;}
RECOMP_FUNC void func_80339A08_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339A08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80339A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80339A10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339A14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339A18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339A1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339A20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339A24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339A28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339A2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339A30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339A34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339A38: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80339A3C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339A40: nop

    // 0x80339A44: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339A48: nop

    // 0x80339A4C: bne         $t1, $zero, L_80339AE8
    if (ctx->r9 != 0) {
        // 0x80339A50: nop
    
            goto L_80339AE8;
    }
    // 0x80339A50: nop

    // 0x80339A54: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80339A58: nop

    // 0x80339A5C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339A60: nop

    // 0x80339A64: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339A68: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339A6C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80339A70: nop

    // 0x80339A74: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339A78: nop

    // 0x80339A7C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339A80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339A84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339A88: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339A8C: addiu       $a3, $a3, -0x50B0
    ctx->r7 = ADD32(ctx->r7, -0X50B0);
    // 0x80339A90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339A94: jal         0x8001ABF4
    // 0x80339A98: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80339A98: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x80339A9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339AA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339AA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80339AA8: jal         0x80029EF8
    // 0x80339AAC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x80339AAC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_1:
    // 0x80339AB0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80339AB4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80339AB8: sh          $t7, 0xC0($t8)
    MEM_H(0XC0, ctx->r24) = ctx->r15;
    // 0x80339ABC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339AC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339AC4: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80339AC8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80339ACC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80339AD0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80339AD4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80339AD8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80339ADC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80339AE0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80339AE4: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
L_80339AE8:
    // 0x80339AE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339AEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339AF0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80339AF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80339AF8: jal         0x8002A0D0
    // 0x80339AFC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_2;
    // 0x80339AFC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_2:
    // 0x80339B00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339B04: bne         $v0, $at, L_80339B34
    if (ctx->r2 != ctx->r1) {
        // 0x80339B08: nop
    
            goto L_80339B34;
    }
    // 0x80339B08: nop

    // 0x80339B0C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80339B10: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80339B14: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80339B18: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80339B1C: nop

    // 0x80339B20: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80339B24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80339B28: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80339B2C: nop

    // 0x80339B30: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
L_80339B34:
    // 0x80339B34: b           L_80339B3C
    // 0x80339B38: nop

        goto L_80339B3C;
    // 0x80339B38: nop

L_80339B3C:
    // 0x80339B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80339B40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80339B44: jr          $ra
    // 0x80339B48: nop

    return;
    // 0x80339B48: nop

;}
RECOMP_FUNC void func_80337770_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337770: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337774: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337778: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033777C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337780: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337784: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033778C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337790: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337794: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337798: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033779C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803377A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803377A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803377A8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803377AC: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x803377B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803377B4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803377B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803377BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803377C0: jal         0x8001C0EC
    // 0x803377C4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803377C4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x803377C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803377CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803377D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803377D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803377D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803377DC: jal         0x800175F0
    // 0x803377E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803377E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803377E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803377E8: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x803377EC: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x803377F0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803377F4: nop

    // 0x803377F8: sh          $zero, 0xB4($t3)
    MEM_H(0XB4, ctx->r11) = 0;
    // 0x803377FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337800: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x80337804: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80337808: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033780C: nop

    // 0x80337810: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80337814: b           L_8033781C
    // 0x80337818: nop

        goto L_8033781C;
    // 0x80337818: nop

L_8033781C:
    // 0x8033781C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337820: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337824: jr          $ra
    // 0x80337828: nop

    return;
    // 0x80337828: nop

;}
RECOMP_FUNC void func_80332AAC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332AAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332AB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332AB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332ABC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332AC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332AC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332ACC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332AD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332AD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332AD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332ADC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332AE0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AE4: nop

    // 0x80332AE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332AEC: nop

    // 0x80332AF0: bne         $t1, $zero, L_80332B48
    if (ctx->r9 != 0) {
        // 0x80332AF4: nop
    
            goto L_80332B48;
    }
    // 0x80332AF4: nop

    // 0x80332AF8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AFC: nop

    // 0x80332B00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332B04: nop

    // 0x80332B08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332B0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332B10: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B14: nop

    // 0x80332B18: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332B1C: nop

    // 0x80332B20: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332B24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332B28: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B2C: nop

    // 0x80332B30: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80332B34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B3C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x80332B40: jal         0x80029EF8
    // 0x80332B44: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80332B44: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
L_80332B48:
    // 0x80332B48: b           L_80332B50
    // 0x80332B4C: nop

        goto L_80332B50;
    // 0x80332B4C: nop

L_80332B50:
    // 0x80332B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332B54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332B58: jr          $ra
    // 0x80332B5C: nop

    return;
    // 0x80332B5C: nop

;}
RECOMP_FUNC void func_803343BC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803343BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803343C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803343C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803343C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803343CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803343D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803343D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803343D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803343DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803343E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803343E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803343E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803343EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803343F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803343F4: nop

    // 0x803343F8: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x803343FC: nop

    // 0x80334400: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x80334404: bne         $at, $zero, L_803344A8
    if (ctx->r1 != 0) {
        // 0x80334408: nop
    
            goto L_803344A8;
    }
    // 0x80334408: nop

    // 0x8033440C: jal         0x80336038
    // 0x80334410: addiu       $a0, $zero, -0x18
    ctx->r4 = ADD32(0, -0X18);
    func_80336038_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80334410: addiu       $a0, $zero, -0x18
    ctx->r4 = ADD32(0, -0X18);
    after_0:
    // 0x80334414: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334418: bne         $v0, $at, L_803344A0
    if (ctx->r2 != ctx->r1) {
        // 0x8033441C: nop
    
            goto L_803344A0;
    }
    // 0x8033441C: nop

    // 0x80334420: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334424: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80334428: addiu       $t2, $t2, -0x52A0
    ctx->r10 = ADD32(ctx->r10, -0X52A0);
    // 0x8033442C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334430: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80334434: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334438: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x8033443C: jal         0x8001C0EC
    // 0x80334440: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80334440: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_1:
    // 0x80334444: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334448: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033444C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334454: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80334458: jal         0x800175F0
    // 0x8033445C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x8033445C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80334460: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334464: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334468: jal         0x8001BBDC
    // 0x8033446C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x8033446C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80334470: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334474: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x80334478: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033447C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334480: nop

    // 0x80334484: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80334488: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033448C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80334490: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80334494: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334498: nop

    // 0x8033449C: sh          $zero, 0xB4($t8)
    MEM_H(0XB4, ctx->r24) = 0;
L_803344A0:
    // 0x803344A0: b           L_803344C0
    // 0x803344A4: nop

        goto L_803344C0;
    // 0x803344A4: nop

L_803344A8:
    // 0x803344A8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803344AC: nop

    // 0x803344B0: lh          $t0, 0xB4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB4);
    // 0x803344B4: nop

    // 0x803344B8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803344BC: sh          $t1, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r9;
L_803344C0:
    // 0x803344C0: b           L_803344C8
    // 0x803344C4: nop

        goto L_803344C8;
    // 0x803344C4: nop

L_803344C8:
    // 0x803344C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803344CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803344D0: jr          $ra
    // 0x803344D4: nop

    return;
    // 0x803344D4: nop

;}
RECOMP_FUNC void func_803315CC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803315CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803315D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803315D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803315D8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x803315DC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803315E0: sw          $t6, -0x4D30($at)
    MEM_W(-0X4D30, ctx->r1) = ctx->r14;
    // 0x803315E4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803315E8: sh          $zero, -0x4D20($at)
    MEM_H(-0X4D20, ctx->r1) = 0;
    // 0x803315EC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803315F0: sh          $zero, -0x4D1C($at)
    MEM_H(-0X4D1C, ctx->r1) = 0;
    // 0x803315F4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803315F8: sh          $zero, -0x4D18($at)
    MEM_H(-0X4D18, ctx->r1) = 0;
    // 0x803315FC: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_80331600:
    // 0x80331600: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x80331604: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331608: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033160C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331610: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80331614: sw          $t7, -0x4D2C($at)
    MEM_W(-0X4D2C, ctx->r1) = ctx->r15;
    // 0x80331618: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x8033161C: nop

    // 0x80331620: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80331624: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x80331628: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8033162C: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x80331630: bne         $at, $zero, L_80331600
    if (ctx->r1 != 0) {
        // 0x80331634: sh          $t1, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r9;
            goto L_80331600;
    }
    // 0x80331634: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
    // 0x80331638: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033163C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331640: swc1        $f4, -0x4D38($at)
    MEM_W(-0X4D38, ctx->r1) = ctx->f4.u32l;
    // 0x80331644: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331648: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033164C: swc1        $f6, -0x4D34($at)
    MEM_W(-0X4D34, ctx->r1) = ctx->f6.u32l;
    // 0x80331650: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331654: sh          $zero, -0x4D1C($at)
    MEM_H(-0X4D1C, ctx->r1) = 0;
    // 0x80331658: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033165C: sh          $zero, -0x4D18($at)
    MEM_H(-0X4D18, ctx->r1) = 0;
    // 0x80331660: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331664: sh          $zero, -0x4D14($at)
    MEM_H(-0X4D14, ctx->r1) = 0;
    // 0x80331668: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8033166C: lw          $t4, 0x5100($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5100);
    // 0x80331670: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331674: lh          $t8, 0x6($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X6);
    // 0x80331678: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x8033167C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80331680: lh          $t6, 0x4($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X4);
    // 0x80331684: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80331688: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8033168C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80331690: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80331694: lh          $t7, 0x8($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X8);
    // 0x80331698: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033169C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803316A0: addiu       $a1, $a1, -0x4D10
    ctx->r5 = ADD32(ctx->r5, -0X4D10);
    // 0x803316A4: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803316A8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803316AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803316B0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803316B4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x803316B8: jal         0x80027464
    // 0x803316BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803316BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x803316C0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803316C4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x803316C8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x803316CC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803316D0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803316D4: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x803316D8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803316DC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803316E0: lh          $t0, 0xA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA);
    // 0x803316E4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803316E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803316EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803316F0: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
    // 0x803316F4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x803316F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803316FC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331700: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331704: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331708: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033170C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331710: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331714: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80331718: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x8033171C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80331720: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331724: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80331728: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8033172C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331730: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80331734: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331738: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033173C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80331740: sh          $t8, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r24;
    // 0x80331744: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80331748: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x8033174C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331750: lh          $s0, 0xA($t9)
    ctx->r16 = MEM_H(ctx->r25, 0XA);
    // 0x80331754: nop

    // 0x80331758: beq         $s0, $at, L_8033178C
    if (ctx->r16 == ctx->r1) {
        // 0x8033175C: nop
    
            goto L_8033178C;
    }
    // 0x8033175C: nop

    // 0x80331760: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80331764: beq         $s0, $at, L_803317BC
    if (ctx->r16 == ctx->r1) {
        // 0x80331768: nop
    
            goto L_803317BC;
    }
    // 0x80331768: nop

    // 0x8033176C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80331770: beq         $s0, $at, L_803317EC
    if (ctx->r16 == ctx->r1) {
        // 0x80331774: nop
    
            goto L_803317EC;
    }
    // 0x80331774: nop

    // 0x80331778: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8033177C: beq         $s0, $at, L_8033181C
    if (ctx->r16 == ctx->r1) {
        // 0x80331780: nop
    
            goto L_8033181C;
    }
    // 0x80331780: nop

    // 0x80331784: b           L_8033184C
    // 0x80331788: nop

        goto L_8033184C;
    // 0x80331788: nop

L_8033178C:
    // 0x8033178C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80331790: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331794: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80331798: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8033179C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803317A0: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x803317A4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803317A8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803317AC: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x803317B0: sh          $t1, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r9;
    // 0x803317B4: b           L_8033184C
    // 0x803317B8: nop

        goto L_8033184C;
    // 0x803317B8: nop

L_803317BC:
    // 0x803317BC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x803317C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803317C4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x803317C8: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x803317CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803317D0: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x803317D4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803317D8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803317DC: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x803317E0: sh          $t5, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r13;
    // 0x803317E4: b           L_8033184C
    // 0x803317E8: nop

        goto L_8033184C;
    // 0x803317E8: nop

L_803317EC:
    // 0x803317EC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803317F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803317F4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x803317F8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x803317FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331800: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80331804: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331808: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033180C: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80331810: sh          $t4, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r12;
    // 0x80331814: b           L_8033184C
    // 0x80331818: nop

        goto L_8033184C;
    // 0x80331818: nop

L_8033181C:
    // 0x8033181C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80331820: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331824: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331828: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033182C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331830: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331834: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331838: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033183C: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x80331840: sh          $t9, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r25;
    // 0x80331844: b           L_8033184C
    // 0x80331848: nop

        goto L_8033184C;
    // 0x80331848: nop

L_8033184C:
    // 0x8033184C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80331850: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331854: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331858: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033185C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331860: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331864: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331868: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8033186C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80331870: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80331874: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80331878: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x8033187C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80331880: lwc1        $f10, 0x1C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80331884: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331888: addiu       $a1, $a1, -0x4D04
    ctx->r5 = ADD32(ctx->r5, -0X4D04);
    // 0x8033188C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331890: jal         0x80027464
    // 0x80331894: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80331894: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80331898: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8033189C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803318A0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803318A4: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x803318A8: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x803318AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803318B0: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x803318B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803318B8: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x803318BC: lh          $t7, 0x4212($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4212);
    // 0x803318C0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803318C4: beq         $t7, $at, L_803318D8
    if (ctx->r15 == ctx->r1) {
        // 0x803318C8: nop
    
            goto L_803318D8;
    }
    // 0x803318C8: nop

    // 0x803318CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803318D0: bne         $t7, $at, L_80331B30
    if (ctx->r15 != ctx->r1) {
        // 0x803318D4: nop
    
            goto L_80331B30;
    }
    // 0x803318D4: nop

L_803318D8:
    // 0x803318D8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x803318DC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803318E0: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x803318E4: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803318E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803318EC: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803318F0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803318F4: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803318F8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x803318FC: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80331900: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331904: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x80331908: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x8033190C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331910: addiu       $a1, $a1, -0x4D68
    ctx->r5 = ADD32(ctx->r5, -0X4D68);
    // 0x80331914: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331918: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033191C: jal         0x80027464
    // 0x80331920: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80331920: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80331924: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80331928: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033192C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331930: sw          $t3, -0x4D30($at)
    MEM_W(-0X4D30, ctx->r1) = ctx->r11;
    // 0x80331934: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331938: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8033193C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80331940: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80331944: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331948: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033194C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331950: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331954: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331958: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x8033195C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80331960: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80331964: jal         0x80026F10
    // 0x80331968: nop

    func_80026F10(rdram, ctx);
        goto after_3;
    // 0x80331968: nop

    after_3:
    // 0x8033196C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80331970: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331974: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80331978: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8033197C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331980: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80331984: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331988: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033198C: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80331990: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80331994: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331998: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033199C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803319A0: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x803319A4: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x803319A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803319AC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803319B0: addiu       $a1, $a1, -0x4D5C
    ctx->r5 = ADD32(ctx->r5, -0X4D5C);
    // 0x803319B4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803319B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803319BC: jal         0x80027464
    // 0x803319C0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x803319C0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x803319C4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x803319C8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803319CC: lui         $t2, 0x8034
    ctx->r10 = S32(0X8034 << 16);
    // 0x803319D0: addiu       $t2, $t2, -0x4D2C
    ctx->r10 = ADD32(ctx->r10, -0X4D2C);
    // 0x803319D4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x803319D8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803319DC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x803319E0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803319E4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803319E8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803319EC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803319F0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803319F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319F8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803319FC: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x80331A00: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80331A04: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331A08: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80331A0C: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x80331A10: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331A14: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x80331A18: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331A1C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80331A20: addu        $t0, $t4, $t7
    ctx->r8 = ADD32(ctx->r12, ctx->r15);
    // 0x80331A24: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80331A28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331A2C: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80331A30: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80331A34: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331A38: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331A3C: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x80331A40: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80331A44: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331A48: addiu       $a1, $a1, -0x4D5C
    ctx->r5 = ADD32(ctx->r5, -0X4D5C);
    // 0x80331A4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331A50: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331A54: jal         0x80027464
    // 0x80331A58: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80331A58: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80331A5C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80331A60: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331A64: lui         $t1, 0x8034
    ctx->r9 = S32(0X8034 << 16);
    // 0x80331A68: addiu       $t1, $t1, -0x4D2C
    ctx->r9 = ADD32(ctx->r9, -0X4D2C);
    // 0x80331A6C: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x80331A70: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331A74: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80331A78: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80331A7C: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80331A80: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331A84: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80331A88: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331A8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A90: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331A94: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x80331A98: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80331A9C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331AA0: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80331AA4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80331AA8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331AAC: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80331AB0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331AB4: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80331AB8: addu        $t7, $t8, $t4
    ctx->r15 = ADD32(ctx->r24, ctx->r12);
    // 0x80331ABC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80331AC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331AC4: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80331AC8: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80331ACC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331AD0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331AD4: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x80331AD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80331ADC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331AE0: addiu       $a1, $a1, -0x4D5C
    ctx->r5 = ADD32(ctx->r5, -0X4D5C);
    // 0x80331AE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331AE8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80331AEC: jal         0x80027464
    // 0x80331AF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80331AF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80331AF4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80331AF8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331AFC: lui         $t9, 0x8034
    ctx->r25 = S32(0X8034 << 16);
    // 0x80331B00: addiu       $t9, $t9, -0x4D2C
    ctx->r25 = ADD32(ctx->r25, -0X4D2C);
    // 0x80331B04: sw          $t0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r8;
    // 0x80331B08: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331B0C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80331B10: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80331B14: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80331B18: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331B1C: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80331B20: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331B24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331B28: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331B2C: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
L_80331B30:
    // 0x80331B30: b           L_80331B38
    // 0x80331B34: nop

        goto L_80331B38;
    // 0x80331B34: nop

L_80331B38:
    // 0x80331B38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331B3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80331B40: jr          $ra
    // 0x80331B44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80331B44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_bagular1_803316EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803316F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803316F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803316F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803316FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331700: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331704: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331708: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033170C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331710: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331714: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331718: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033171C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331720: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331724: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331728: nop

    // 0x8033172C: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80331730: nop

    // 0x80331734: bne         $t1, $zero, L_8033176C
    if (ctx->r9 != 0) {
        // 0x80331738: nop
    
            goto L_8033176C;
    }
    // 0x80331738: nop

    // 0x8033173C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331740: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331744: lh          $s0, 0xBC($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XBC);
    // 0x80331748: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033174C: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x80331750: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80331754: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331758: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x8033175C: jal         0x8001BB34
    // 0x80331760: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80331760: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80331764: b           L_803317C4
    // 0x80331768: nop

        goto L_803317C4;
    // 0x80331768: nop

L_8033176C:
    // 0x8033176C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331770: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331774: lh          $t6, 0x108($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X108);
    // 0x80331778: nop

    // 0x8033177C: beq         $t6, $at, L_803317C4
    if (ctx->r14 == ctx->r1) {
        // 0x80331780: nop
    
            goto L_803317C4;
    }
    // 0x80331780: nop

    // 0x80331784: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331788: nop

    // 0x8033178C: lh          $t8, 0xC0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC0);
    // 0x80331790: nop

    // 0x80331794: bne         $t8, $zero, L_803317C4
    if (ctx->r24 != 0) {
        // 0x80331798: nop
    
            goto L_803317C4;
    }
    // 0x80331798: nop

    // 0x8033179C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803317A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317A4: lh          $s0, 0x108($t9)
    ctx->r16 = MEM_H(ctx->r25, 0X108);
    // 0x803317A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317AC: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x803317B0: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x803317B4: sltiu       $t1, $s0, 0x1
    ctx->r9 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803317B8: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x803317BC: jal         0x8001BB34
    // 0x803317C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x803317C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_803317C4:
    // 0x803317C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803317C8: nop

    // 0x803317CC: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x803317D0: nop

    // 0x803317D4: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x803317D8: sltiu       $at, $t4, 0x6
    ctx->r1 = ctx->r12 < 0X6 ? 1 : 0;
    // 0x803317DC: beq         $at, $zero, L_80331860
    if (ctx->r1 == 0) {
        // 0x803317E0: nop
    
            goto L_80331860;
    }
    // 0x803317E0: nop

    // 0x803317E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803317E8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803317EC: addu        $at, $at, $t4
    gpr jr_addend_803317F8 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803317F0: lw          $t4, 0x31E0($at)
    ctx->r12 = ADD32(ctx->r1, 0X31E0);
    // 0x803317F4: nop

    // 0x803317F8: jr          $t4
    // 0x803317FC: nop

    switch (jr_addend_803317F8 >> 2) {
        case 0: goto L_80331800; break;
        case 1: goto L_80331810; break;
        case 2: goto L_80331820; break;
        case 3: goto L_80331830; break;
        case 4: goto L_80331840; break;
        case 5: goto L_80331850; break;
        default: switch_error(__func__, 0x803317F8, 0x803331E0);
    }
    // 0x803317FC: nop

L_80331800:
    // 0x80331800: jal         0x803301D4
    // 0x80331804: nop

    func_bagular1_803301D4(rdram, ctx);
        goto after_2;
    // 0x80331804: nop

    after_2:
    // 0x80331808: b           L_80331868
    // 0x8033180C: nop

        goto L_80331868;
    // 0x8033180C: nop

L_80331810:
    // 0x80331810: jal         0x803303D0
    // 0x80331814: nop

    func_bagular1_803303D0(rdram, ctx);
        goto after_3;
    // 0x80331814: nop

    after_3:
    // 0x80331818: b           L_80331868
    // 0x8033181C: nop

        goto L_80331868;
    // 0x8033181C: nop

L_80331820:
    // 0x80331820: jal         0x80330844
    // 0x80331824: nop

    func_bagular1_80330844(rdram, ctx);
        goto after_4;
    // 0x80331824: nop

    after_4:
    // 0x80331828: b           L_80331868
    // 0x8033182C: nop

        goto L_80331868;
    // 0x8033182C: nop

L_80331830:
    // 0x80331830: jal         0x80330EA4
    // 0x80331834: nop

    func_bagular1_80330EA4(rdram, ctx);
        goto after_5;
    // 0x80331834: nop

    after_5:
    // 0x80331838: b           L_80331868
    // 0x8033183C: nop

        goto L_80331868;
    // 0x8033183C: nop

L_80331840:
    // 0x80331840: jal         0x80331148
    // 0x80331844: nop

    func_bagular1_80331148(rdram, ctx);
        goto after_6;
    // 0x80331844: nop

    after_6:
    // 0x80331848: b           L_80331868
    // 0x8033184C: nop

        goto L_80331868;
    // 0x8033184C: nop

L_80331850:
    // 0x80331850: jal         0x803314BC
    // 0x80331854: nop

    func_bagular1_803314BC(rdram, ctx);
        goto after_7;
    // 0x80331854: nop

    after_7:
    // 0x80331858: b           L_80331868
    // 0x8033185C: nop

        goto L_80331868;
    // 0x8033185C: nop

L_80331860:
    // 0x80331860: b           L_80331868
    // 0x80331864: nop

        goto L_80331868;
    // 0x80331864: nop

L_80331868:
    // 0x80331868: b           L_80331870
    // 0x8033186C: nop

        goto L_80331870;
    // 0x8033186C: nop

L_80331870:
    // 0x80331870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331874: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80331878: jr          $ra
    // 0x8033187C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033187C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_bagular1_80330EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330EA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330EA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330EAC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330EB0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330EB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330EB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330EBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330EC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330EC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330EC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330ECC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330ED0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330ED4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330ED8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330EDC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80330EE0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330EE4: nop

    // 0x80330EE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330EEC: nop

    // 0x80330EF0: bne         $t1, $zero, L_80330FBC
    if (ctx->r9 != 0) {
        // 0x80330EF4: nop
    
            goto L_80330FBC;
    }
    // 0x80330EF4: nop

    // 0x80330EF8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330EFC: nop

    // 0x80330F00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330F04: nop

    // 0x80330F08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330F0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330F10: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330F14: nop

    // 0x80330F18: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330F1C: nop

    // 0x80330F20: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330F24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F28: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330F2C: addiu       $t7, $t7, -0x4F60
    ctx->r15 = ADD32(ctx->r15, -0X4F60);
    // 0x80330F30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F34: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F3C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80330F40: jal         0x8001C0EC
    // 0x80330F44: addiu       $a3, $zero, 0x135
    ctx->r7 = ADD32(0, 0X135);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330F44: addiu       $a3, $zero, 0x135
    ctx->r7 = ADD32(0, 0X135);
    after_0:
    // 0x80330F48: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330F4C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330F50: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80330F54: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x80330F58: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x80330F5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330F60: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80330F64: addiu       $a1, $a1, 0x3170
    ctx->r5 = ADD32(ctx->r5, 0X3170);
    // 0x80330F68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330F6C: jal         0x80027464
    // 0x80330F70: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80330F70: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80330F74: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330F78: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80330F7C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80330F80: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330F84: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330F88: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330F8C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330F90: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80330F94: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330F98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F9C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330FA0: sh          $t9, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r25;
    // 0x80330FA4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330FA8: nop

    // 0x80330FAC: lh          $t4, 0xAE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAE);
    // 0x80330FB0: nop

    // 0x80330FB4: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x80330FB8: sh          $t2, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = ctx->r10;
L_80330FBC:
    // 0x80330FBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FC4: jal         0x8001B62C
    // 0x80330FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80330FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330FCC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80330FD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330FD4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330FD8: nop

    // 0x80330FDC: div.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80330FE0: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80330FE4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80330FE8: nop

    // 0x80330FEC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80330FF0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330FF4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330FF8: nop

    // 0x80330FFC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80331000: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x80331004: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80331008: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x8033100C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80331010: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80331014: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80331018: lh          $a0, 0x3108($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X3108);
    // 0x8033101C: jal         0x80331880
    // 0x80331020: nop

    func_bagular1_80331880(rdram, ctx);
        goto after_3;
    // 0x80331020: nop

    after_3:
    // 0x80331024: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331028: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033102C: jal         0x8001B62C
    // 0x80331030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x80331030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80331034: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80331038: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033103C: nop

    // 0x80331040: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80331044: nop

    // 0x80331048: bc1f        L_80331074
    if (!c1cs) {
        // 0x8033104C: nop
    
            goto L_80331074;
    }
    // 0x8033104C: nop

    // 0x80331050: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331054: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331058: jal         0x8002A8B4
    // 0x8033105C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x8033105C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_5:
    // 0x80331060: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331064: nop

    // 0x80331068: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x8033106C: nop

    // 0x80331070: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
L_80331074:
    // 0x80331074: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331078: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033107C: jal         0x8001B4AC
    // 0x80331080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80331080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80331084: beq         $v0, $zero, L_8033112C
    if (ctx->r2 == 0) {
        // 0x80331088: nop
    
            goto L_8033112C;
    }
    // 0x80331088: nop

    // 0x8033108C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331090: nop

    // 0x80331094: lh          $t4, 0xAE($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XAE);
    // 0x80331098: nop

    // 0x8033109C: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x803310A0: bne         $at, $zero, L_803310D8
    if (ctx->r1 != 0) {
        // 0x803310A4: nop
    
            goto L_803310D8;
    }
    // 0x803310A4: nop

    // 0x803310A8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803310AC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803310B0: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x803310B4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803310B8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803310BC: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x803310C0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803310C4: nop

    // 0x803310C8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x803310CC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803310D0: b           L_8033112C
    // 0x803310D4: sh          $zero, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = 0;
        goto L_8033112C;
    // 0x803310D4: sh          $zero, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = 0;
L_803310D8:
    // 0x803310D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310E0: jal         0x8002A2EC
    // 0x803310E4: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x803310E4: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_7:
    // 0x803310E8: beq         $v0, $zero, L_80331114
    if (ctx->r2 == 0) {
        // 0x803310EC: nop
    
            goto L_80331114;
    }
    // 0x803310EC: nop

    // 0x803310F0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803310F4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803310F8: sh          $t0, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r8;
    // 0x803310FC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331100: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80331104: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x80331108: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033110C: b           L_8033112C
    // 0x80331110: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_8033112C;
    // 0x80331110: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80331114:
    // 0x80331114: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331118: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033111C: sh          $t3, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r11;
    // 0x80331120: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331124: nop

    // 0x80331128: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033112C:
    // 0x8033112C: b           L_80331134
    // 0x80331130: nop

        goto L_80331134;
    // 0x80331130: nop

L_80331134:
    // 0x80331134: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331138: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033113C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331140: jr          $ra
    // 0x80331144: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80331144: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_bagular1_803300C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803300C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803300CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803300D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803300D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803300D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803300DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803300E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803300F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803300F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803300F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803300FC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330100: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80330104: nop

    // 0x80330108: bne         $t0, $zero, L_8033019C
    if (ctx->r8 != 0) {
        // 0x8033010C: nop
    
            goto L_8033019C;
    }
    // 0x8033010C: nop

    // 0x80330110: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330114: nop

    // 0x80330118: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x8033011C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80330120: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330124: jal         0x80069E60
    // 0x80330128: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80330128: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x8033012C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330130: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330134: sh          $t2, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = ctx->r10;
    // 0x80330138: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033013C: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x80330140: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80330144: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330148: nop

    // 0x8033014C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80330150: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330154: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330158: nop

    // 0x8033015C: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80330160: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330164: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330168: nop

    // 0x8033016C: swc1        $f6, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f6.u32l;
    // 0x80330170: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330174: nop

    // 0x80330178: lwc1        $f8, 0x2C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x8033017C: nop

    // 0x80330180: swc1        $f8, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f8.u32l;
    // 0x80330184: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033018C: jal         0x8001BBDC
    // 0x80330190: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80330190: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80330194: b           L_803301BC
    // 0x80330198: nop

        goto L_803301BC;
    // 0x80330198: nop

L_8033019C:
    // 0x8033019C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803301A0: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x803301A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803301A8: bne         $t0, $at, L_803301BC
    if (ctx->r8 != ctx->r1) {
        // 0x803301AC: nop
    
            goto L_803301BC;
    }
    // 0x803301AC: nop

    // 0x803301B0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803301B4: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x803301B8: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
L_803301BC:
    // 0x803301BC: b           L_803301C4
    // 0x803301C0: nop

        goto L_803301C4;
    // 0x803301C0: nop

L_803301C4:
    // 0x803301C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803301C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803301CC: jr          $ra
    // 0x803301D0: nop

    return;
    // 0x803301D0: nop

;}
RECOMP_FUNC void func_bagular1_80332AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332AE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332AE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332AE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80332AEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332AF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332AF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332AF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332AFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332B04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332B0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B14: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332B18: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332B1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332B20: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80332B24: nop

    // 0x80332B28: beq         $s0, $at, L_80332B44
    if (ctx->r16 == ctx->r1) {
        // 0x80332B2C: nop
    
            goto L_80332B44;
    }
    // 0x80332B2C: nop

    // 0x80332B30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332B34: beq         $s0, $at, L_80332B54
    if (ctx->r16 == ctx->r1) {
        // 0x80332B38: nop
    
            goto L_80332B54;
    }
    // 0x80332B38: nop

    // 0x80332B3C: b           L_80332B64
    // 0x80332B40: nop

        goto L_80332B64;
    // 0x80332B40: nop

L_80332B44:
    // 0x80332B44: jal         0x80332694
    // 0x80332B48: nop

    func_bagular1_80332694(rdram, ctx);
        goto after_0;
    // 0x80332B48: nop

    after_0:
    // 0x80332B4C: b           L_80332B6C
    // 0x80332B50: nop

        goto L_80332B6C;
    // 0x80332B50: nop

L_80332B54:
    // 0x80332B54: jal         0x803328BC
    // 0x80332B58: nop

    func_bagular1_803328BC(rdram, ctx);
        goto after_1;
    // 0x80332B58: nop

    after_1:
    // 0x80332B5C: b           L_80332B6C
    // 0x80332B60: nop

        goto L_80332B6C;
    // 0x80332B60: nop

L_80332B64:
    // 0x80332B64: b           L_80332B6C
    // 0x80332B68: nop

        goto L_80332B6C;
    // 0x80332B68: nop

L_80332B6C:
    // 0x80332B6C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332B70: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80332B74: lh          $t2, 0xC2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC2);
    // 0x80332B78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332B7C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332B80: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332B84: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332B88: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332B8C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332B90: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332B94: lh          $t4, 0x420E($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X420E);
    // 0x80332B98: nop

    // 0x80332B9C: bne         $t4, $at, L_80332BB4
    if (ctx->r12 != ctx->r1) {
        // 0x80332BA0: nop
    
            goto L_80332BB4;
    }
    // 0x80332BA0: nop

    // 0x80332BA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332BA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332BAC: jal         0x8002B114
    // 0x80332BB0: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80332BB0: nop

    after_2:
L_80332BB4:
    // 0x80332BB4: b           L_80332BBC
    // 0x80332BB8: nop

        goto L_80332BBC;
    // 0x80332BB8: nop

L_80332BBC:
    // 0x80332BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332BC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80332BC4: jr          $ra
    // 0x80332BC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80332BC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_bagular1_803301D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803301D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803301D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803301DC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803301E0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803301E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803301E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803301EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803301F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803301F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803301F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803301FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330200: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330204: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330208: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033020C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330210: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330214: nop

    // 0x80330218: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033021C: nop

    // 0x80330220: bne         $t1, $zero, L_80330278
    if (ctx->r9 != 0) {
        // 0x80330224: nop
    
            goto L_80330278;
    }
    // 0x80330224: nop

    // 0x80330228: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033022C: nop

    // 0x80330230: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330234: nop

    // 0x80330238: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033023C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330240: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330244: nop

    // 0x80330248: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033024C: nop

    // 0x80330250: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330254: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330258: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033025C: addiu       $t7, $t7, -0x4F60
    ctx->r15 = ADD32(ctx->r15, -0X4F60);
    // 0x80330260: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330264: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033026C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80330270: jal         0x8001C0EC
    // 0x80330274: addiu       $a3, $zero, 0x135
    ctx->r7 = ADD32(0, 0X135);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330274: addiu       $a3, $zero, 0x135
    ctx->r7 = ADD32(0, 0X135);
    after_0:
L_80330278:
    // 0x80330278: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033027C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330280: jal         0x8001B62C
    // 0x80330284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80330284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330288: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033028C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330290: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330294: nop

    // 0x80330298: div.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f4.fl);
    // 0x8033029C: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x803302A0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803302A4: nop

    // 0x803302A8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803302AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803302B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803302B4: nop

    // 0x803302B8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803302BC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x803302C0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803302C4: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x803302C8: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x803302CC: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x803302D0: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x803302D4: lh          $a0, 0x2FE4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X2FE4);
    // 0x803302D8: jal         0x80331880
    // 0x803302DC: nop

    func_bagular1_80331880(rdram, ctx);
        goto after_2;
    // 0x803302DC: nop

    after_2:
    // 0x803302E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803302E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803302E8: jal         0x8001B4AC
    // 0x803302EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803302EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803302F0: beq         $v0, $zero, L_803303B4
    if (ctx->r2 == 0) {
        // 0x803302F4: nop
    
            goto L_803303B4;
    }
    // 0x803302F4: nop

    // 0x803302F8: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x803302FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330300: jal         0x80331A34
    // 0x80330304: nop

    func_bagular1_80331A34(rdram, ctx);
        goto after_4;
    // 0x80330304: nop

    after_4:
    // 0x80330308: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033030C: beq         $v0, $at, L_80330330
    if (ctx->r2 == ctx->r1) {
        // 0x80330310: nop
    
            goto L_80330330;
    }
    // 0x80330310: nop

    // 0x80330314: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80330318: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033031C: jal         0x80331B74
    // 0x80330320: nop

    func_bagular1_80331B74(rdram, ctx);
        goto after_5;
    // 0x80330320: nop

    after_5:
    // 0x80330324: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330328: bne         $v0, $at, L_80330340
    if (ctx->r2 != ctx->r1) {
        // 0x8033032C: nop
    
            goto L_80330340;
    }
    // 0x8033032C: nop

L_80330330:
    // 0x80330330: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330334: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80330338: b           L_8033039C
    // 0x8033033C: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
        goto L_8033039C;
    // 0x8033033C: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_80330340:
    // 0x80330340: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330344: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330348: jal         0x8002A2EC
    // 0x8033034C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_6;
    // 0x8033034C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_6:
    // 0x80330350: beq         $v0, $zero, L_80330368
    if (ctx->r2 == 0) {
        // 0x80330354: nop
    
            goto L_80330368;
    }
    // 0x80330354: nop

    // 0x80330358: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033035C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330360: b           L_8033039C
    // 0x80330364: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
        goto L_8033039C;
    // 0x80330364: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
L_80330368:
    // 0x80330368: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033036C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330370: jal         0x80331A34
    // 0x80330374: nop

    func_bagular1_80331A34(rdram, ctx);
        goto after_7;
    // 0x80330374: nop

    after_7:
    // 0x80330378: beq         $v0, $zero, L_80330390
    if (ctx->r2 == 0) {
        // 0x8033037C: nop
    
            goto L_80330390;
    }
    // 0x8033037C: nop

    // 0x80330380: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330384: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330388: b           L_8033039C
    // 0x8033038C: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
        goto L_8033039C;
    // 0x8033038C: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_80330390:
    // 0x80330390: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330394: nop

    // 0x80330398: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
L_8033039C:
    // 0x8033039C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803303A0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803303A4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803303A8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803303AC: nop

    // 0x803303B0: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_803303B4:
    // 0x803303B4: b           L_803303BC
    // 0x803303B8: nop

        goto L_803303BC;
    // 0x803303B8: nop

L_803303BC:
    // 0x803303BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803303C0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803303C4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803303C8: jr          $ra
    // 0x803303CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803303CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_bagular1_80332304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332304: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332308: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033230C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332310: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332314: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332318: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033231C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332320: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332324: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332328: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033232C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332330: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332334: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332338: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033233C: nop

    // 0x80332340: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332344: nop

    // 0x80332348: bne         $t1, $zero, L_803323A0
    if (ctx->r9 != 0) {
        // 0x8033234C: nop
    
            goto L_803323A0;
    }
    // 0x8033234C: nop

    // 0x80332350: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332354: nop

    // 0x80332358: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033235C: nop

    // 0x80332360: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332364: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332368: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033236C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80332370: addiu       $t5, $t5, -0x4F48
    ctx->r13 = ADD32(ctx->r13, -0X4F48);
    // 0x80332374: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332378: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8033237C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332380: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332384: jal         0x8001C0EC
    // 0x80332388: addiu       $a3, $zero, 0x138
    ctx->r7 = ADD32(0, 0X138);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332388: addiu       $a3, $zero, 0x138
    ctx->r7 = ADD32(0, 0X138);
    after_0:
    // 0x8033238C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80332390: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332394: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332398: nop

    // 0x8033239C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
L_803323A0:
    // 0x803323A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323A8: jal         0x80029C40
    // 0x803323AC: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x803323AC: nop

    after_1:
    // 0x803323B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803323B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803323B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803323C4: lui         $a2, 0x433E
    ctx->r6 = S32(0X433E << 16);
    // 0x803323C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803323CC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803323D0: jal         0x80029018
    // 0x803323D4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x803323D4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x803323D8: beq         $v0, $zero, L_80332414
    if (ctx->r2 == 0) {
        // 0x803323DC: nop
    
            goto L_80332414;
    }
    // 0x803323DC: nop

    // 0x803323E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803323E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803323E8: nop

    // 0x803323EC: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
    // 0x803323F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803323F4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803323F8: nop

    // 0x803323FC: swc1        $f16, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f16.u32l;
    // 0x80332400: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332404: nop

    // 0x80332408: lwc1        $f18, 0x2C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x8033240C: nop

    // 0x80332410: swc1        $f18, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f18.u32l;
L_80332414:
    // 0x80332414: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332418: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033241C: jal         0x8001B4AC
    // 0x80332420: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80332420: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x80332424: beq         $v0, $zero, L_8033243C
    if (ctx->r2 == 0) {
        // 0x80332428: nop
    
            goto L_8033243C;
    }
    // 0x80332428: nop

    // 0x8033242C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332430: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332434: jal         0x8002B114
    // 0x80332438: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x80332438: nop

    after_4:
L_8033243C:
    // 0x8033243C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332440: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80332444: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80332448: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033244C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332450: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332454: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332458: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033245C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332460: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332464: lh          $t4, 0x420E($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X420E);
    // 0x80332468: nop

    // 0x8033246C: bne         $t4, $at, L_80332484
    if (ctx->r12 != ctx->r1) {
        // 0x80332470: nop
    
            goto L_80332484;
    }
    // 0x80332470: nop

    // 0x80332474: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332478: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033247C: jal         0x8002B114
    // 0x80332480: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x80332480: nop

    after_5:
L_80332484:
    // 0x80332484: b           L_8033248C
    // 0x80332488: nop

        goto L_8033248C;
    // 0x80332488: nop

L_8033248C:
    // 0x8033248C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332490: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332494: jr          $ra
    // 0x80332498: nop

    return;
    // 0x80332498: nop

;}
RECOMP_FUNC void func_bagular1_80332D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332D5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332D60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332D64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332D68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332D6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332D70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332D74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332D78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332D7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332D80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332D84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332D88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332D8C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332D90: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332D94: nop

    // 0x80332D98: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332D9C: nop

    // 0x80332DA0: bne         $t1, $zero, L_80332E24
    if (ctx->r9 != 0) {
        // 0x80332DA4: nop
    
            goto L_80332E24;
    }
    // 0x80332DA4: nop

    // 0x80332DA8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332DAC: nop

    // 0x80332DB0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332DB4: nop

    // 0x80332DB8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332DBC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332DC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DC4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80332DC8: addiu       $t5, $t5, -0x4ED8
    ctx->r13 = ADD32(ctx->r13, -0X4ED8);
    // 0x80332DCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DD0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80332DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332DD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332DDC: jal         0x8001C0EC
    // 0x80332DE0: addiu       $a3, $zero, 0x13C
    ctx->r7 = ADD32(0, 0X13C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332DE0: addiu       $a3, $zero, 0x13C
    ctx->r7 = ADD32(0, 0X13C);
    after_0:
    // 0x80332DE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DEC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332DF0: addiu       $a3, $a3, -0x4E94
    ctx->r7 = ADD32(ctx->r7, -0X4E94);
    // 0x80332DF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332DF8: jal         0x8001ABF4
    // 0x80332DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332E00: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332E04: addiu       $t6, $zero, 0x4B
    ctx->r14 = ADD32(0, 0X4B);
    // 0x80332E08: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80332E0C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332E10: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x80332E14: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x80332E18: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332E1C: nop

    // 0x80332E20: sh          $zero, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = 0;
L_80332E24:
    // 0x80332E24: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332E28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E2C: lh          $a1, 0xA6($t1)
    ctx->r5 = MEM_H(ctx->r9, 0XA6);
    // 0x80332E30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E34: andi        $t3, $a1, 0x1
    ctx->r11 = ctx->r5 & 0X1;
    // 0x80332E38: jal         0x8001BB34
    // 0x80332E3C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80332E3C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_2:
    // 0x80332E40: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332E44: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80332E48: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x80332E4C: nop

    // 0x80332E50: bne         $t2, $at, L_80332E94
    if (ctx->r10 != ctx->r1) {
        // 0x80332E54: nop
    
            goto L_80332E94;
    }
    // 0x80332E54: nop

    // 0x80332E58: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332E5C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332E60: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80332E64: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x80332E68: lw          $a3, 0x4($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X4);
    // 0x80332E6C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332E70: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80332E74: addiu       $a1, $a1, 0x31A0
    ctx->r5 = ADD32(ctx->r5, 0X31A0);
    // 0x80332E78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332E7C: jal         0x80027464
    // 0x80332E80: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80332E80: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80332E84: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80332E88: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332E8C: b           L_80332EAC
    // 0x80332E90: sh          $zero, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = 0;
        goto L_80332EAC;
    // 0x80332E90: sh          $zero, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = 0;
L_80332E94:
    // 0x80332E94: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332E98: nop

    // 0x80332E9C: lh          $t8, 0xAC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAC);
    // 0x80332EA0: nop

    // 0x80332EA4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332EA8: sh          $t9, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r25;
L_80332EAC:
    // 0x80332EAC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332EB0: nop

    // 0x80332EB4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332EB8: nop

    // 0x80332EBC: beq         $t1, $zero, L_80332EE0
    if (ctx->r9 == 0) {
        // 0x80332EC0: nop
    
            goto L_80332EE0;
    }
    // 0x80332EC0: nop

    // 0x80332EC4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332EC8: nop

    // 0x80332ECC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80332ED0: nop

    // 0x80332ED4: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80332ED8: b           L_80332EEC
    // 0x80332EDC: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
        goto L_80332EEC;
    // 0x80332EDC: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_80332EE0:
    // 0x80332EE0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332EE4: nop

    // 0x80332EE8: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_80332EEC:
    // 0x80332EEC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332EF0: nop

    // 0x80332EF4: lh          $t8, 0xA8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XA8);
    // 0x80332EF8: nop

    // 0x80332EFC: bne         $t8, $zero, L_80332F0C
    if (ctx->r24 != 0) {
        // 0x80332F00: nop
    
            goto L_80332F0C;
    }
    // 0x80332F00: nop

    // 0x80332F04: b           L_80332F24
    // 0x80332F08: nop

        goto L_80332F24;
    // 0x80332F08: nop

L_80332F0C:
    // 0x80332F0C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332F10: nop

    // 0x80332F14: lh          $t7, 0xA8($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XA8);
    // 0x80332F18: nop

    // 0x80332F1C: addiu       $t0, $t7, -0x1
    ctx->r8 = ADD32(ctx->r15, -0X1);
    // 0x80332F20: sh          $t0, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r8;
L_80332F24:
    // 0x80332F24: b           L_80332F2C
    // 0x80332F28: nop

        goto L_80332F2C;
    // 0x80332F28: nop

L_80332F2C:
    // 0x80332F2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332F30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332F34: jr          $ra
    // 0x80332F38: nop

    return;
    // 0x80332F38: nop

;}
RECOMP_FUNC void func_bagular1_80332F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332F3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332F40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332F44: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80332F48: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80332F4C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332F50: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80332F54: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80332F58: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80332F5C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80332F60: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332F64: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80332F68: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80332F6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332F70: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80332F74: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332F78: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80332F7C: addiu       $a1, $a1, 0x31D0
    ctx->r5 = ADD32(ctx->r5, 0X31D0);
    // 0x80332F80: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332F84: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80332F88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332F8C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332F90: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80332F94: jal         0x80027464
    // 0x80332F98: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80332F98: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80332F9C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80332FA0: b           L_80332FA8
    // 0x80332FA4: nop

        goto L_80332FA8;
    // 0x80332FA4: nop

L_80332FA8:
    // 0x80332FA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332FAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332FB0: jr          $ra
    // 0x80332FB4: nop

    return;
    // 0x80332FB4: nop

;}
RECOMP_FUNC void func_bagular1_80332694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332694: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332698: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033269C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803326A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803326A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803326A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803326AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803326B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803326B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803326B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803326BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803326C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803326C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803326C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803326CC: nop

    // 0x803326D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803326D4: nop

    // 0x803326D8: bne         $t1, $zero, L_8033274C
    if (ctx->r9 != 0) {
        // 0x803326DC: nop
    
            goto L_8033274C;
    }
    // 0x803326DC: nop

    // 0x803326E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803326E4: nop

    // 0x803326E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803326EC: nop

    // 0x803326F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803326F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803326F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803326FC: nop

    // 0x80332700: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332704: nop

    // 0x80332708: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033270C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332710: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332714: addiu       $t7, $t7, -0x4F44
    ctx->r15 = ADD32(ctx->r15, -0X4F44);
    // 0x80332718: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033271C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332720: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332724: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332728: jal         0x8001C0EC
    // 0x8033272C: addiu       $a3, $zero, 0x139
    ctx->r7 = ADD32(0, 0X139);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033272C: addiu       $a3, $zero, 0x139
    ctx->r7 = ADD32(0, 0X139);
    after_0:
    // 0x80332730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332738: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033273C: addiu       $a3, $a3, -0x4EFC
    ctx->r7 = ADD32(ctx->r7, -0X4EFC);
    // 0x80332740: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332744: jal         0x8001ABF4
    // 0x80332748: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332748: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_8033274C:
    // 0x8033274C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332750: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332754: jal         0x8001B4AC
    // 0x80332758: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332758: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8033275C: beq         $v0, $zero, L_803328A4
    if (ctx->r2 == 0) {
        // 0x80332760: nop
    
            goto L_803328A4;
    }
    // 0x80332760: nop

    // 0x80332764: jal         0x80014E80
    // 0x80332768: addiu       $a0, $zero, -0x191
    ctx->r4 = ADD32(0, -0X191);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x80332768: addiu       $a0, $zero, -0x191
    ctx->r4 = ADD32(0, -0X191);
    after_3:
    // 0x8033276C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80332770: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80332774: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332778: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8033277C: nop

    // 0x80332780: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332784: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
    // 0x80332788: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033278C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332790: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80332794: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80332798: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033279C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803327A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803327A4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803327A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803327AC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803327B0: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x803327B4: jal         0x80014E80
    // 0x803327B8: addiu       $a0, $zero, -0x191
    ctx->r4 = ADD32(0, -0X191);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x803327B8: addiu       $a0, $zero, -0x191
    ctx->r4 = ADD32(0, -0X191);
    after_4:
    // 0x803327BC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803327C0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803327C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803327C8: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x803327CC: nop

    // 0x803327D0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803327D4: swc1        $f16, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f16.u32l;
    // 0x803327D8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803327DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803327E0: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x803327E4: lwc1        $f18, 0x8($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8);
    // 0x803327E8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803327EC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803327F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803327F4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803327F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803327FC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332800: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80332804: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332808: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033280C: jal         0x8002A46C
    // 0x80332810: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_5;
    // 0x80332810: nop

    after_5:
    // 0x80332814: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332818: nop

    // 0x8033281C: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x80332820: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332824: nop

    // 0x80332828: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x8033282C: nop

    // 0x80332830: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x80332834: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332838: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033283C: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80332840: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332844: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332848: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033284C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332850: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332854: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332858: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033285C: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80332860: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332864: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332868: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x8033286C: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80332870: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332874: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332878: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033287C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332880: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332884: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332888: swc1        $f8, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f8.u32l;
    // 0x8033288C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332890: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80332894: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80332898: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033289C: nop

    // 0x803328A0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_803328A4:
    // 0x803328A4: b           L_803328AC
    // 0x803328A8: nop

        goto L_803328AC;
    // 0x803328A8: nop

L_803328AC:
    // 0x803328AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803328B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803328B4: jr          $ra
    // 0x803328B8: nop

    return;
    // 0x803328B8: nop

;}
RECOMP_FUNC void func_bagular1_80331A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A34: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80331A38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331A3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331A40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A60: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80331A64: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80331A68: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
L_80331A6C:
    // 0x80331A6C: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80331A70: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331A74: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331A78: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331A7C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331A80: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331A84: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331A88: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331A8C: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x80331A90: nop

    // 0x80331A94: beq         $t3, $zero, L_80331B44
    if (ctx->r11 == 0) {
        // 0x80331A98: nop
    
            goto L_80331B44;
    }
    // 0x80331A98: nop

    // 0x80331A9C: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x80331AA0: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80331AA4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331AA8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331AAC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331AB0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331AB4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331AB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331ABC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331AC0: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80331AC4: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80331AC8: nop

    // 0x80331ACC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331AD0: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x80331AD4: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80331AD8: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80331ADC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331AE0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331AE4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331AE8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331AEC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331AF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331AF4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331AF8: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80331AFC: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331B00: nop

    // 0x80331B04: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331B08: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80331B0C: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80331B10: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80331B14: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80331B18: nop

    // 0x80331B1C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80331B20: nop

    // 0x80331B24: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80331B28: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80331B2C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80331B30: nop

    // 0x80331B34: bc1f        L_80331B44
    if (!c1cs) {
        // 0x80331B38: nop
    
            goto L_80331B44;
    }
    // 0x80331B38: nop

    // 0x80331B3C: b           L_80331B6C
    // 0x80331B40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80331B6C;
    // 0x80331B40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80331B44:
    // 0x80331B44: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x80331B48: nop

    // 0x80331B4C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80331B50: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x80331B54: bne         $at, $zero, L_80331A6C
    if (ctx->r1 != 0) {
        // 0x80331B58: sw          $t1, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r9;
            goto L_80331A6C;
    }
    // 0x80331B58: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x80331B5C: b           L_80331B6C
    // 0x80331B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80331B6C;
    // 0x80331B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80331B64: b           L_80331B6C
    // 0x80331B68: nop

        goto L_80331B6C;
    // 0x80331B68: nop

L_80331B6C:
    // 0x80331B6C: jr          $ra
    // 0x80331B70: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80331B70: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_bagular1_80330844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330844: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330848: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033084C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330850: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330854: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330858: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033085C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330860: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330864: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330868: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033086C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330870: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330874: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330878: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033087C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80330880: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330884: nop

    // 0x80330888: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033088C: nop

    // 0x80330890: bne         $t1, $zero, L_80330900
    if (ctx->r9 != 0) {
        // 0x80330894: nop
    
            goto L_80330900;
    }
    // 0x80330894: nop

    // 0x80330898: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033089C: nop

    // 0x803308A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803308A4: nop

    // 0x803308A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803308AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803308B0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803308B4: nop

    // 0x803308B8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803308BC: nop

    // 0x803308C0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803308C4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803308C8: nop

    // 0x803308CC: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
    // 0x803308D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803308D4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803308D8: addiu       $t8, $t8, -0x4F60
    ctx->r24 = ADD32(ctx->r24, -0X4F60);
    // 0x803308DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803308E0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803308E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803308E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803308EC: jal         0x8001C0EC
    // 0x803308F0: addiu       $a3, $zero, 0x135
    ctx->r7 = ADD32(0, 0X135);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803308F0: addiu       $a3, $zero, 0x135
    ctx->r7 = ADD32(0, 0X135);
    after_0:
    // 0x803308F4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803308F8: nop

    // 0x803308FC: sh          $zero, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = 0;
L_80330900:
    // 0x80330900: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330904: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330908: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033090C: nop

    // 0x80330910: bne         $t1, $at, L_80330A34
    if (ctx->r9 != ctx->r1) {
        // 0x80330914: nop
    
            goto L_80330A34;
    }
    // 0x80330914: nop

    // 0x80330918: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033091C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330920: jal         0x8001B62C
    // 0x80330924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80330924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330928: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033092C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330930: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330934: nop

    // 0x80330938: div.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f4.fl);
    // 0x8033093C: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80330940: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80330944: nop

    // 0x80330948: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8033094C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330950: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330954: nop

    // 0x80330958: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8033095C: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x80330960: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80330964: sll         $t2, $t4, 16
    ctx->r10 = S32(ctx->r12 << 16);
    // 0x80330968: sra         $t6, $t2, 16
    ctx->r14 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8033096C: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80330970: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x80330974: lh          $a0, 0x305C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X305C);
    // 0x80330978: jal         0x80331880
    // 0x8033097C: nop

    func_bagular1_80331880(rdram, ctx);
        goto after_2;
    // 0x8033097C: nop

    after_2:
    // 0x80330980: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330984: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330988: jal         0x8002A8B4
    // 0x8033098C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033098C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x80330990: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330994: nop

    // 0x80330998: lwc1        $f10, 0x3C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x8033099C: nop

    // 0x803309A0: swc1        $f10, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f10.u32l;
    // 0x803309A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309AC: jal         0x8001B62C
    // 0x803309B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x803309B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803309B4: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x803309B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803309BC: nop

    // 0x803309C0: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x803309C4: nop

    // 0x803309C8: bc1f        L_80330A34
    if (!c1cs) {
        // 0x803309CC: nop
    
            goto L_80330A34;
    }
    // 0x803309CC: nop

    // 0x803309D0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803309D4: nop

    // 0x803309D8: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x803309DC: nop

    // 0x803309E0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803309E4: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x803309E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309F0: jal         0x8001BBDC
    // 0x803309F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x803309F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x803309F8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803309FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330A00: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330A04: nop

    // 0x80330A08: swc1        $f18, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f18.u32l;
    // 0x80330A0C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330A10: nop

    // 0x80330A14: sh          $zero, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = 0;
    // 0x80330A18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330A24: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80330A28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330A2C: jal         0x800175F0
    // 0x80330A30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x80330A30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
L_80330A34:
    // 0x80330A34: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330A38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330A3C: lbu         $t2, 0x132($t4)
    ctx->r10 = MEM_BU(ctx->r12, 0X132);
    // 0x80330A40: nop

    // 0x80330A44: bne         $t2, $at, L_80330A70
    if (ctx->r10 != ctx->r1) {
        // 0x80330A48: nop
    
            goto L_80330A70;
    }
    // 0x80330A48: nop

    // 0x80330A4C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330A50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330A54: lh          $t5, 0x108($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X108);
    // 0x80330A58: nop

    // 0x80330A5C: bne         $t5, $at, L_80330A70
    if (ctx->r13 != ctx->r1) {
        // 0x80330A60: nop
    
            goto L_80330A70;
    }
    // 0x80330A60: nop

    // 0x80330A64: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330A68: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80330A6C: sh          $t7, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r15;
L_80330A70:
    // 0x80330A70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A78: jal         0x80029C40
    // 0x80330A7C: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x80330A7C: nop

    after_7:
    // 0x80330A80: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330A84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330A88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330A94: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80330A98: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330A9C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330AA0: jal         0x80029018
    // 0x80330AA4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x80330AA4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80330AA8: beq         $v0, $zero, L_80330B00
    if (ctx->r2 == 0) {
        // 0x80330AAC: nop
    
            goto L_80330B00;
    }
    // 0x80330AAC: nop

    // 0x80330AB0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330AB4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330AB8: nop

    // 0x80330ABC: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
    // 0x80330AC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330AC4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330AC8: nop

    // 0x80330ACC: swc1        $f10, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f10.u32l;
    // 0x80330AD0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330AD4: nop

    // 0x80330AD8: lwc1        $f16, 0x2C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80330ADC: nop

    // 0x80330AE0: swc1        $f16, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f16.u32l;
    // 0x80330AE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330AE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330AEC: jal         0x8001BBDC
    // 0x80330AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x80330AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80330AF4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330AF8: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80330AFC: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
L_80330B00:
    // 0x80330B00: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330B04: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80330B08: lwc1        $f18, 0x0($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80330B0C: lwc1        $f4, 0x24($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X24);
    // 0x80330B10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330B14: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330B18: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80330B1C: nop

    // 0x80330B20: bc1t        L_80330B84
    if (c1cs) {
        // 0x80330B24: nop
    
            goto L_80330B84;
    }
    // 0x80330B24: nop

    // 0x80330B28: lui         $at, 0xC3F0
    ctx->r1 = S32(0XC3F0 << 16);
    // 0x80330B2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330B30: nop

    // 0x80330B34: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80330B38: nop

    // 0x80330B3C: bc1t        L_80330B84
    if (c1cs) {
        // 0x80330B40: nop
    
            goto L_80330B84;
    }
    // 0x80330B40: nop

    // 0x80330B44: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80330B48: lwc1        $f18, 0x2C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80330B4C: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80330B50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330B54: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330B58: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80330B5C: nop

    // 0x80330B60: bc1t        L_80330B84
    if (c1cs) {
        // 0x80330B64: nop
    
            goto L_80330B84;
    }
    // 0x80330B64: nop

    // 0x80330B68: lui         $at, 0xC3F0
    ctx->r1 = S32(0XC3F0 << 16);
    // 0x80330B6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330B70: nop

    // 0x80330B74: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80330B78: nop

    // 0x80330B7C: bc1f        L_80330BD4
    if (!c1cs) {
        // 0x80330B80: nop
    
            goto L_80330BD4;
    }
    // 0x80330B80: nop

L_80330B84:
    // 0x80330B84: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330B88: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330B8C: nop

    // 0x80330B90: swc1        $f10, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f10.u32l;
    // 0x80330B94: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330B98: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330B9C: nop

    // 0x80330BA0: swc1        $f16, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f16.u32l;
    // 0x80330BA4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330BA8: nop

    // 0x80330BAC: lwc1        $f18, 0x2C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80330BB0: nop

    // 0x80330BB4: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x80330BB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BC0: jal         0x8001BBDC
    // 0x80330BC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x80330BC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80330BC8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330BCC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80330BD0: sb          $t9, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r25;
L_80330BD4:
    // 0x80330BD4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330BD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330BDC: lbu         $t1, 0x132($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X132);
    // 0x80330BE0: nop

    // 0x80330BE4: bne         $t1, $at, L_80330D38
    if (ctx->r9 != ctx->r1) {
        // 0x80330BE8: nop
    
            goto L_80330D38;
    }
    // 0x80330BE8: nop

    // 0x80330BEC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330BF0: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80330BF4: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80330BF8: nop

    // 0x80330BFC: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x80330C00: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80330C04: lh          $a0, 0x30A8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X30A8);
    // 0x80330C08: jal         0x80331880
    // 0x80330C0C: nop

    func_bagular1_80331880(rdram, ctx);
        goto after_11;
    // 0x80330C0C: nop

    after_11:
    // 0x80330C10: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330C14: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80330C18: lh          $t5, 0xAC($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAC);
    // 0x80330C1C: nop

    // 0x80330C20: bne         $t5, $at, L_80330C78
    if (ctx->r13 != ctx->r1) {
        // 0x80330C24: nop
    
            goto L_80330C78;
    }
    // 0x80330C24: nop

    // 0x80330C28: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330C2C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330C30: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80330C34: lwc1        $f16, 0x2C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80330C38: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80330C3C: lwc1        $f4, 0x24($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80330C40: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330C44: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x80330C48: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80330C4C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80330C50: lwc1        $f8, 0x1C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80330C54: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80330C58: addiu       $a1, $a1, 0x31AC
    ctx->r5 = ADD32(ctx->r5, 0X31AC);
    // 0x80330C5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330C60: jal         0x80027464
    // 0x80330C64: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_12;
    // 0x80330C64: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x80330C68: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330C6C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330C70: b           L_80330C90
    // 0x80330C74: sh          $zero, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = 0;
        goto L_80330C90;
    // 0x80330C74: sh          $zero, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = 0;
L_80330C78:
    // 0x80330C78: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330C7C: nop

    // 0x80330C80: lh          $t8, 0xAC($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XAC);
    // 0x80330C84: nop

    // 0x80330C88: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x80330C8C: sh          $t1, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = ctx->r9;
L_80330C90:
    // 0x80330C90: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330C94: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x80330C98: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80330C9C: nop

    // 0x80330CA0: bne         $t4, $at, L_80330D20
    if (ctx->r12 != ctx->r1) {
        // 0x80330CA4: nop
    
            goto L_80330D20;
    }
    // 0x80330CA4: nop

    // 0x80330CA8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330CAC: nop

    // 0x80330CB0: lbu         $t6, 0x132($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X132);
    // 0x80330CB4: nop

    // 0x80330CB8: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x80330CBC: sb          $t5, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r13;
    // 0x80330CC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CC8: jal         0x8001BBDC
    // 0x80330CCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_13;
    // 0x80330CCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80330CD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330CD4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330CD8: nop

    // 0x80330CDC: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80330CE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330CE4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330CE8: nop

    // 0x80330CEC: swc1        $f6, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f6.u32l;
    // 0x80330CF0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330CF4: nop

    // 0x80330CF8: lwc1        $f10, 0x2C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80330CFC: nop

    // 0x80330D00: swc1        $f10, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f10.u32l;
    // 0x80330D04: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330D08: nop

    // 0x80330D0C: lh          $t0, 0xA8($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XA8);
    // 0x80330D10: nop

    // 0x80330D14: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x80330D18: b           L_80330D38
    // 0x80330D1C: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
        goto L_80330D38;
    // 0x80330D1C: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
L_80330D20:
    // 0x80330D20: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330D24: nop

    // 0x80330D28: lh          $t6, 0xA8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XA8);
    // 0x80330D2C: nop

    // 0x80330D30: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x80330D34: sh          $t5, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r13;
L_80330D38:
    // 0x80330D38: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330D3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80330D40: lbu         $t7, 0x132($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X132);
    // 0x80330D44: nop

    // 0x80330D48: bne         $t7, $at, L_80330E88
    if (ctx->r15 != ctx->r1) {
        // 0x80330D4C: nop
    
            goto L_80330E88;
    }
    // 0x80330D4C: nop

    // 0x80330D50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D58: jal         0x8001B62C
    // 0x80330D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_14;
    // 0x80330D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80330D60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80330D64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330D68: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330D6C: nop

    // 0x80330D70: div.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80330D74: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80330D78: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80330D7C: nop

    // 0x80330D80: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80330D84: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330D88: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330D8C: nop

    // 0x80330D90: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80330D94: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80330D98: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80330D9C: sll         $t0, $t8, 16
    ctx->r8 = S32(ctx->r24 << 16);
    // 0x80330DA0: sra         $t3, $t0, 16
    ctx->r11 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80330DA4: sll         $t1, $t3, 1
    ctx->r9 = S32(ctx->r11 << 1);
    // 0x80330DA8: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x80330DAC: lh          $a0, 0x305C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X305C);
    // 0x80330DB0: jal         0x80331880
    // 0x80330DB4: nop

    func_bagular1_80331880(rdram, ctx);
        goto after_15;
    // 0x80330DB4: nop

    after_15:
    // 0x80330DB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DC0: jal         0x8001B4AC
    // 0x80330DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_16;
    // 0x80330DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x80330DC8: beq         $v0, $zero, L_80330E88
    if (ctx->r2 == 0) {
        // 0x80330DCC: nop
    
            goto L_80330E88;
    }
    // 0x80330DCC: nop

    // 0x80330DD0: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80330DD4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330DD8: jal         0x80331A34
    // 0x80330DDC: nop

    func_bagular1_80331A34(rdram, ctx);
        goto after_17;
    // 0x80330DDC: nop

    after_17:
    // 0x80330DE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330DE4: beq         $v0, $at, L_80330E08
    if (ctx->r2 == ctx->r1) {
        // 0x80330DE8: nop
    
            goto L_80330E08;
    }
    // 0x80330DE8: nop

    // 0x80330DEC: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80330DF0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330DF4: jal         0x80331B74
    // 0x80330DF8: nop

    func_bagular1_80331B74(rdram, ctx);
        goto after_18;
    // 0x80330DF8: nop

    after_18:
    // 0x80330DFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330E00: bne         $v0, $at, L_80330E18
    if (ctx->r2 != ctx->r1) {
        // 0x80330E04: nop
    
            goto L_80330E18;
    }
    // 0x80330E04: nop

L_80330E08:
    // 0x80330E08: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330E0C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80330E10: b           L_80330E70
    // 0x80330E14: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
        goto L_80330E70;
    // 0x80330E14: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
L_80330E18:
    // 0x80330E18: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330E1C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330E20: lh          $t2, 0x108($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X108);
    // 0x80330E24: nop

    // 0x80330E28: bne         $t2, $at, L_80330E3C
    if (ctx->r10 != ctx->r1) {
        // 0x80330E2C: nop
    
            goto L_80330E3C;
    }
    // 0x80330E2C: nop

    // 0x80330E30: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330E34: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330E38: sh          $t7, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r15;
L_80330E3C:
    // 0x80330E3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E44: jal         0x8002A2EC
    // 0x80330E48: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_19;
    // 0x80330E48: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_19:
    // 0x80330E4C: beq         $v0, $zero, L_80330E64
    if (ctx->r2 == 0) {
        // 0x80330E50: nop
    
            goto L_80330E64;
    }
    // 0x80330E50: nop

    // 0x80330E54: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330E58: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80330E5C: b           L_80330E70
    // 0x80330E60: sh          $t8, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r24;
        goto L_80330E70;
    // 0x80330E60: sh          $t8, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r24;
L_80330E64:
    // 0x80330E64: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330E68: nop

    // 0x80330E6C: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
L_80330E70:
    // 0x80330E70: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330E74: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80330E78: sh          $t1, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r9;
    // 0x80330E7C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330E80: nop

    // 0x80330E84: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80330E88:
    // 0x80330E88: b           L_80330E90
    // 0x80330E8C: nop

        goto L_80330E90;
    // 0x80330E8C: nop

L_80330E90:
    // 0x80330E90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330E94: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330E98: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330E9C: jr          $ra
    // 0x80330EA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80330EA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_bagular1_8033249C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033249C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803324A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803324A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803324A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803324AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803324B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803324B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803324B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803324BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803324C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803324C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803324C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803324CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803324D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803324D4: nop

    // 0x803324D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803324DC: nop

    // 0x803324E0: bne         $t1, $zero, L_80332544
    if (ctx->r9 != 0) {
        // 0x803324E4: nop
    
            goto L_80332544;
    }
    // 0x803324E4: nop

    // 0x803324E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803324EC: nop

    // 0x803324F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803324F4: nop

    // 0x803324F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803324FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332500: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80332504: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332508: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033250C: nop

    // 0x80332510: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80332514: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80332518: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033251C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332520: nop

    // 0x80332524: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x80332528: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033252C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80332530: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x80332534: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332538: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033253C: jal         0x8001BB34
    // 0x80332540: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80332540: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_80332544:
    // 0x80332544: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332548: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033254C: jal         0x80029C40
    // 0x80332550: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80332550: nop

    after_1:
    // 0x80332554: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80332558: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033255C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332560: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332564: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033256C: lui         $a2, 0x433E
    ctx->r6 = S32(0X433E << 16);
    // 0x80332570: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332574: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80332578: jal         0x80029018
    // 0x8033257C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x8033257C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80332580: beq         $v0, $zero, L_803325BC
    if (ctx->r2 == 0) {
        // 0x80332584: nop
    
            goto L_803325BC;
    }
    // 0x80332584: nop

    // 0x80332588: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033258C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332590: nop

    // 0x80332594: swc1        $f16, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f16.u32l;
    // 0x80332598: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033259C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803325A0: nop

    // 0x803325A4: swc1        $f18, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f18.u32l;
    // 0x803325A8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803325AC: nop

    // 0x803325B0: lwc1        $f4, 0x2C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x803325B4: nop

    // 0x803325B8: swc1        $f4, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f4.u32l;
L_803325BC:
    // 0x803325BC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803325C0: nop

    // 0x803325C4: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x803325C8: nop

    // 0x803325CC: bne         $t4, $zero, L_803325E8
    if (ctx->r12 != 0) {
        // 0x803325D0: nop
    
            goto L_803325E8;
    }
    // 0x803325D0: nop

    // 0x803325D4: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x803325D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803325DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803325E0: b           L_80332634
    // 0x803325E4: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
        goto L_80332634;
    // 0x803325E4: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
L_803325E8:
    // 0x803325E8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803325EC: nop

    // 0x803325F0: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x803325F4: nop

    // 0x803325F8: slti        $at, $t6, -0xF
    ctx->r1 = SIGNED(ctx->r14) < -0XF ? 1 : 0;
    // 0x803325FC: beq         $at, $zero, L_8033261C
    if (ctx->r1 == 0) {
        // 0x80332600: nop
    
            goto L_8033261C;
    }
    // 0x80332600: nop

    // 0x80332604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033260C: jal         0x8002B114
    // 0x80332610: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80332610: nop

    after_3:
    // 0x80332614: b           L_80332634
    // 0x80332618: nop

        goto L_80332634;
    // 0x80332618: nop

L_8033261C:
    // 0x8033261C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332620: nop

    // 0x80332624: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80332628: nop

    // 0x8033262C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80332630: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_80332634:
    // 0x80332634: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332638: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033263C: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80332640: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332644: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332648: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033264C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332650: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332654: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332658: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033265C: lh          $t4, 0x420E($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X420E);
    // 0x80332660: nop

    // 0x80332664: bne         $t4, $at, L_8033267C
    if (ctx->r12 != ctx->r1) {
        // 0x80332668: nop
    
            goto L_8033267C;
    }
    // 0x80332668: nop

    // 0x8033266C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332670: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332674: jal         0x8002B114
    // 0x80332678: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x80332678: nop

    after_4:
L_8033267C:
    // 0x8033267C: b           L_80332684
    // 0x80332680: nop

        goto L_80332684;
    // 0x80332680: nop

L_80332684:
    // 0x80332684: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332688: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033268C: jr          $ra
    // 0x80332690: nop

    return;
    // 0x80332690: nop

;}
RECOMP_FUNC void func_bagular1_80332BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332BCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332BD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332BD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332BD8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332BDC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332BE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332BE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332BE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332BEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332BF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332BF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332BF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332BFC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332C00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332C04: nop

    // 0x80332C08: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332C0C: nop

    // 0x80332C10: bne         $t1, $zero, L_80332C54
    if (ctx->r9 != 0) {
        // 0x80332C14: nop
    
            goto L_80332C54;
    }
    // 0x80332C14: nop

    // 0x80332C18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332C1C: nop

    // 0x80332C20: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332C24: nop

    // 0x80332C28: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332C2C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332C30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C34: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80332C38: addiu       $t5, $t5, -0x4EDC
    ctx->r13 = ADD32(ctx->r13, -0X4EDC);
    // 0x80332C3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C40: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80332C44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332C48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332C4C: jal         0x8001C0EC
    // 0x80332C50: addiu       $a3, $zero, 0x13B
    ctx->r7 = ADD32(0, 0X13B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332C50: addiu       $a3, $zero, 0x13B
    ctx->r7 = ADD32(0, 0X13B);
    after_0:
L_80332C54:
    // 0x80332C54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C5C: jal         0x8001B4AC
    // 0x80332C60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80332C60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80332C64: beq         $v0, $zero, L_80332C7C
    if (ctx->r2 == 0) {
        // 0x80332C68: nop
    
            goto L_80332C7C;
    }
    // 0x80332C68: nop

    // 0x80332C6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C74: jal         0x8002B114
    // 0x80332C78: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80332C78: nop

    after_2:
L_80332C7C:
    // 0x80332C7C: b           L_80332C84
    // 0x80332C80: nop

        goto L_80332C84;
    // 0x80332C80: nop

L_80332C84:
    // 0x80332C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332C88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332C8C: jr          $ra
    // 0x80332C90: nop

    return;
    // 0x80332C90: nop

;}
RECOMP_FUNC void func_bagular1_803314BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803314BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803314C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803314C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803314C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803314CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803314D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803314D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803314D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803314DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803314E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803314E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803314E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803314EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803314F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803314F4: nop

    // 0x803314F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803314FC: nop

    // 0x80331500: bne         $t1, $zero, L_80331568
    if (ctx->r9 != 0) {
        // 0x80331504: nop
    
            goto L_80331568;
    }
    // 0x80331504: nop

    // 0x80331508: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033150C: nop

    // 0x80331510: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331514: nop

    // 0x80331518: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033151C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331520: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331524: nop

    // 0x80331528: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033152C: nop

    // 0x80331530: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331534: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331538: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x8033153C: sh          $t7, 0xBC($t8)
    MEM_H(0XBC, ctx->r24) = ctx->r15;
    // 0x80331540: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331544: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x80331548: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x8033154C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331550: nop

    // 0x80331554: sh          $zero, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = 0;
    // 0x80331558: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033155C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331560: jal         0x80069E60
    // 0x80331564: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80331564: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    after_0:
L_80331568:
    // 0x80331568: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033156C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331570: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x80331574: nop

    // 0x80331578: bne         $t4, $at, L_803315E0
    if (ctx->r12 != ctx->r1) {
        // 0x8033157C: nop
    
            goto L_803315E0;
    }
    // 0x8033157C: nop

    // 0x80331580: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331584: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331588: jal         0x8001BB34
    // 0x8033158C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033158C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80331590: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331594: nop

    // 0x80331598: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x8033159C: nop

    // 0x803315A0: bne         $t6, $zero, L_803315C0
    if (ctx->r14 != 0) {
        // 0x803315A4: nop
    
            goto L_803315C0;
    }
    // 0x803315A4: nop

    // 0x803315A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315B0: jal         0x8002B114
    // 0x803315B4: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x803315B4: nop

    after_2:
    // 0x803315B8: b           L_803315D8
    // 0x803315BC: nop

        goto L_803315D8;
    // 0x803315BC: nop

L_803315C0:
    // 0x803315C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803315C4: nop

    // 0x803315C8: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x803315CC: nop

    // 0x803315D0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x803315D4: sh          $t8, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r24;
L_803315D8:
    // 0x803315D8: b           L_803316D4
    // 0x803315DC: nop

        goto L_803316D4;
    // 0x803315DC: nop

L_803315E0:
    // 0x803315E0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803315E4: nop

    // 0x803315E8: lh          $t0, 0xBC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBC);
    // 0x803315EC: nop

    // 0x803315F0: bne         $t0, $zero, L_8033162C
    if (ctx->r8 != 0) {
        // 0x803315F4: nop
    
            goto L_8033162C;
    }
    // 0x803315F4: nop

    // 0x803315F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803315FC: nop

    // 0x80331600: lh          $a0, 0xC2($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XC2);
    // 0x80331604: jal         0x8002B114
    // 0x80331608: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80331608: nop

    after_3:
    // 0x8033160C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331610: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331614: jal         0x8001BB34
    // 0x80331618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80331618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8033161C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331620: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80331624: b           L_803316D4
    // 0x80331628: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
        goto L_803316D4;
    // 0x80331628: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
L_8033162C:
    // 0x8033162C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331630: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x80331634: lh          $t6, 0xBC($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XBC);
    // 0x80331638: nop

    // 0x8033163C: bne         $t6, $at, L_803316BC
    if (ctx->r14 != ctx->r1) {
        // 0x80331640: nop
    
            goto L_803316BC;
    }
    // 0x80331640: nop

    // 0x80331644: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331648: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033164C: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80331650: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x80331654: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x80331658: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033165C: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80331660: addiu       $a1, $a1, 0x31B8
    ctx->r5 = ADD32(ctx->r5, 0X31B8);
    // 0x80331664: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331668: jal         0x80027464
    // 0x8033166C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x8033166C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x80331670: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331674: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80331678: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033167C: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80331680: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80331684: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331688: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x8033168C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80331690: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331694: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331698: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033169C: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x803316A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803316A4: nop

    // 0x803316A8: lh          $t1, 0xBC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBC);
    // 0x803316AC: nop

    // 0x803316B0: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x803316B4: b           L_803316D4
    // 0x803316B8: sh          $t3, 0xBC($t0)
    MEM_H(0XBC, ctx->r8) = ctx->r11;
        goto L_803316D4;
    // 0x803316B8: sh          $t3, 0xBC($t0)
    MEM_H(0XBC, ctx->r8) = ctx->r11;
L_803316BC:
    // 0x803316BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803316C0: nop

    // 0x803316C4: lh          $t2, 0xBC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBC);
    // 0x803316C8: nop

    // 0x803316CC: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x803316D0: sh          $t6, 0xBC($t4)
    MEM_H(0XBC, ctx->r12) = ctx->r14;
L_803316D4:
    // 0x803316D4: b           L_803316DC
    // 0x803316D8: nop

        goto L_803316DC;
    // 0x803316D8: nop

L_803316DC:
    // 0x803316DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803316E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803316E4: jr          $ra
    // 0x803316E8: nop

    return;
    // 0x803316E8: nop

;}
RECOMP_FUNC void func_bagular1_803303D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803303D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803303D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803303D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x803303DC: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803303E0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x803303E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803303E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803303EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803303F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803303F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803303FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330400: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330404: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330408: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033040C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80330410: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330414: nop

    // 0x80330418: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033041C: nop

    // 0x80330420: bne         $t1, $zero, L_803304E8
    if (ctx->r9 != 0) {
        // 0x80330424: nop
    
            goto L_803304E8;
    }
    // 0x80330424: nop

    // 0x80330428: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033042C: nop

    // 0x80330430: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330434: nop

    // 0x80330438: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033043C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330440: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330444: nop

    // 0x80330448: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033044C: nop

    // 0x80330450: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330454: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330458: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033045C: addiu       $t7, $t7, -0x4F60
    ctx->r15 = ADD32(ctx->r15, -0X4F60);
    // 0x80330460: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330464: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033046C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330470: jal         0x8001C0EC
    // 0x80330474: addiu       $a3, $zero, 0x135
    ctx->r7 = ADD32(0, 0X135);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330474: addiu       $a3, $zero, 0x135
    ctx->r7 = ADD32(0, 0X135);
    after_0:
    // 0x80330478: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033047C: nop

    // 0x80330480: sh          $zero, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = 0;
    // 0x80330484: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330488: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033048C: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x80330490: nop

    // 0x80330494: beq         $t0, $at, L_803304A4
    if (ctx->r8 == ctx->r1) {
        // 0x80330498: nop
    
            goto L_803304A4;
    }
    // 0x80330498: nop

    // 0x8033049C: bne         $t0, $zero, L_803304B0
    if (ctx->r8 != 0) {
        // 0x803304A0: nop
    
            goto L_803304B0;
    }
    // 0x803304A0: nop

L_803304A4:
    // 0x803304A4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803304A8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803304AC: sh          $t1, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r9;
L_803304B0:
    // 0x803304B0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803304B4: nop

    // 0x803304B8: lh          $t2, 0xB8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB8);
    // 0x803304BC: nop

    // 0x803304C0: beq         $t2, $zero, L_803304E8
    if (ctx->r10 == 0) {
        // 0x803304C4: nop
    
            goto L_803304E8;
    }
    // 0x803304C4: nop

    // 0x803304C8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803304CC: nop

    // 0x803304D0: lh          $t5, 0xB8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XB8);
    // 0x803304D4: nop

    // 0x803304D8: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x803304DC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803304E0: nop

    // 0x803304E4: sh          $zero, 0xB8($t7)
    MEM_H(0XB8, ctx->r15) = 0;
L_803304E8:
    // 0x803304E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304F0: jal         0x8001B62C
    // 0x803304F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x803304F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803304F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803304FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330500: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330504: nop

    // 0x80330508: div.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f4.fl);
    // 0x8033050C: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80330510: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80330514: nop

    // 0x80330518: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8033051C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330520: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330524: nop

    // 0x80330528: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8033052C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80330530: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80330534: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x80330538: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8033053C: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x80330540: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x80330544: lh          $a0, 0x3018($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X3018);
    // 0x80330548: jal         0x80331880
    // 0x8033054C: nop

    func_bagular1_80331880(rdram, ctx);
        goto after_2;
    // 0x8033054C: nop

    after_2:
    // 0x80330550: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330554: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330558: jal         0x8002A8B4
    // 0x8033055C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033055C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x80330560: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80330564: nop

    // 0x80330568: lwc1        $f10, 0x3C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x8033056C: nop

    // 0x80330570: swc1        $f10, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f10.u32l;
    // 0x80330574: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80330578: nop

    // 0x8033057C: lh          $s0, 0xA6($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XA6);
    // 0x80330580: nop

    // 0x80330584: beq         $s0, $zero, L_803305AC
    if (ctx->r16 == 0) {
        // 0x80330588: nop
    
            goto L_803305AC;
    }
    // 0x80330588: nop

    // 0x8033058C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330590: beq         $s0, $at, L_803305F8
    if (ctx->r16 == ctx->r1) {
        // 0x80330594: nop
    
            goto L_803305F8;
    }
    // 0x80330594: nop

    // 0x80330598: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033059C: beq         $s0, $at, L_80330644
    if (ctx->r16 == ctx->r1) {
        // 0x803305A0: nop
    
            goto L_80330644;
    }
    // 0x803305A0: nop

    // 0x803305A4: b           L_8033081C
    // 0x803305A8: nop

        goto L_8033081C;
    // 0x803305A8: nop

L_803305AC:
    // 0x803305AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803305B4: jal         0x8001B62C
    // 0x803305B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x803305B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803305BC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803305C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803305C4: nop

    // 0x803305C8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x803305CC: nop

    // 0x803305D0: bc1f        L_803305F0
    if (!c1cs) {
        // 0x803305D4: nop
    
            goto L_803305F0;
    }
    // 0x803305D4: nop

    // 0x803305D8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803305DC: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x803305E0: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x803305E4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803305E8: nop

    // 0x803305EC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803305F0:
    // 0x803305F0: b           L_80330824
    // 0x803305F4: nop

        goto L_80330824;
    // 0x803305F4: nop

L_803305F8:
    // 0x803305F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330600: jal         0x8001B62C
    // 0x80330604: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x80330604: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80330608: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033060C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330610: nop

    // 0x80330614: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80330618: nop

    // 0x8033061C: bc1f        L_8033063C
    if (!c1cs) {
        // 0x80330620: nop
    
            goto L_8033063C;
    }
    // 0x80330620: nop

    // 0x80330624: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330628: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8033062C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330630: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330634: nop

    // 0x80330638: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033063C:
    // 0x8033063C: b           L_80330824
    // 0x80330640: nop

        goto L_80330824;
    // 0x80330640: nop

L_80330644:
    // 0x80330644: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033064C: jal         0x8001B62C
    // 0x80330650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_6;
    // 0x80330650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80330654: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80330658: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033065C: nop

    // 0x80330660: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80330664: nop

    // 0x80330668: bc1f        L_803306DC
    if (!c1cs) {
        // 0x8033066C: nop
    
            goto L_803306DC;
    }
    // 0x8033066C: nop

    // 0x80330670: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330674: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80330678: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x8033067C: nop

    // 0x80330680: bne         $t3, $at, L_803306C4
    if (ctx->r11 != ctx->r1) {
        // 0x80330684: nop
    
            goto L_803306C4;
    }
    // 0x80330684: nop

    // 0x80330688: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033068C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330690: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80330694: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x80330698: lw          $a3, 0x4($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X4);
    // 0x8033069C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803306A0: lwc1        $f8, 0x1C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803306A4: addiu       $a1, $a1, 0x31A0
    ctx->r5 = ADD32(ctx->r5, 0X31A0);
    // 0x803306A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803306AC: jal         0x80027464
    // 0x803306B0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x803306B0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x803306B4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x803306B8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803306BC: b           L_803306DC
    // 0x803306C0: sh          $zero, 0xAC($t2)
    MEM_H(0XAC, ctx->r10) = 0;
        goto L_803306DC;
    // 0x803306C0: sh          $zero, 0xAC($t2)
    MEM_H(0XAC, ctx->r10) = 0;
L_803306C4:
    // 0x803306C4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803306C8: nop

    // 0x803306CC: lh          $t6, 0xAC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAC);
    // 0x803306D0: nop

    // 0x803306D4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803306D8: sh          $t7, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r15;
L_803306DC:
    // 0x803306DC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803306E0: nop

    // 0x803306E4: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x803306E8: nop

    // 0x803306EC: sh          $t9, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r25;
    // 0x803306F0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803306F4: nop

    // 0x803306F8: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
    // 0x803306FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330700: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330704: jal         0x8001B62C
    // 0x80330708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_8;
    // 0x80330708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8033070C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330710: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330714: nop

    // 0x80330718: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8033071C: nop

    // 0x80330720: bc1f        L_8033073C
    if (!c1cs) {
        // 0x80330724: nop
    
            goto L_8033073C;
    }
    // 0x80330724: nop

    // 0x80330728: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8033072C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330730: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330734: nop

    // 0x80330738: swc1        $f16, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f16.u32l;
L_8033073C:
    // 0x8033073C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330740: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330744: jal         0x8001B4AC
    // 0x80330748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_9;
    // 0x80330748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8033074C: beq         $v0, $zero, L_80330814
    if (ctx->r2 == 0) {
        // 0x80330750: nop
    
            goto L_80330814;
    }
    // 0x80330750: nop

    // 0x80330754: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80330758: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033075C: sw          $t3, 0xC4($t4)
    MEM_W(0XC4, ctx->r12) = ctx->r11;
    // 0x80330760: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330764: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330768: jal         0x8001BB34
    // 0x8033076C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_10;
    // 0x8033076C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80330770: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80330774: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330778: lh          $a0, 0xC2($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XC2);
    // 0x8033077C: jal         0x8001BB34
    // 0x80330780: nop

    func_8001BB34(rdram, ctx);
        goto after_11;
    // 0x80330780: nop

    after_11:
    // 0x80330784: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80330788: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8033078C: sh          $t6, 0xC0($t7)
    MEM_H(0XC0, ctx->r15) = ctx->r14;
    // 0x80330790: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330794: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330798: nop

    // 0x8033079C: swc1        $f18, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f18.u32l;
    // 0x803307A0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803307A4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803307A8: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803307AC: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x803307B0: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x803307B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803307B8: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803307BC: addiu       $a1, $a1, 0x3194
    ctx->r5 = ADD32(ctx->r5, 0X3194);
    // 0x803307C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803307C4: jal         0x80027464
    // 0x803307C8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_12;
    // 0x803307C8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x803307CC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x803307D0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x803307D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803307D8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803307DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803307E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803307E4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803307E8: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x803307EC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803307F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307F4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803307F8: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x803307FC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80330800: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80330804: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80330808: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033080C: nop

    // 0x80330810: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80330814:
    // 0x80330814: b           L_80330824
    // 0x80330818: nop

        goto L_80330824;
    // 0x80330818: nop

L_8033081C:
    // 0x8033081C: b           L_80330824
    // 0x80330820: nop

        goto L_80330824;
    // 0x80330820: nop

L_80330824:
    // 0x80330824: b           L_8033082C
    // 0x80330828: nop

        goto L_8033082C;
    // 0x80330828: nop

L_8033082C:
    // 0x8033082C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80330830: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80330834: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330838: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8033083C: jr          $ra
    // 0x80330840: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80330840: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_bagular1_80331B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B74: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80331B78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331B7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331B80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331B84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331B88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331B90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331B98: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331B9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331BA0: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80331BA4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80331BA8: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
L_80331BAC:
    // 0x80331BAC: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80331BB0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331BB4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331BB8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331BBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331BC0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331BC4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331BC8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331BCC: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x80331BD0: nop

    // 0x80331BD4: beq         $t3, $zero, L_80331C84
    if (ctx->r11 == 0) {
        // 0x80331BD8: nop
    
            goto L_80331C84;
    }
    // 0x80331BD8: nop

    // 0x80331BDC: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x80331BE0: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80331BE4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331BE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331BEC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331BF0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331BF4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331BF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331BFC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331C00: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80331C04: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80331C08: nop

    // 0x80331C0C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331C10: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x80331C14: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80331C18: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80331C1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331C20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331C24: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331C28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331C2C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331C30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C34: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331C38: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80331C3C: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331C40: nop

    // 0x80331C44: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331C48: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80331C4C: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80331C50: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80331C54: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80331C58: nop

    // 0x80331C5C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80331C60: nop

    // 0x80331C64: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80331C68: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80331C6C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80331C70: nop

    // 0x80331C74: bc1f        L_80331C84
    if (!c1cs) {
        // 0x80331C78: nop
    
            goto L_80331C84;
    }
    // 0x80331C78: nop

    // 0x80331C7C: b           L_80331CAC
    // 0x80331C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80331CAC;
    // 0x80331C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80331C84:
    // 0x80331C84: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x80331C88: nop

    // 0x80331C8C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80331C90: slti        $at, $t1, 0xE
    ctx->r1 = SIGNED(ctx->r9) < 0XE ? 1 : 0;
    // 0x80331C94: bne         $at, $zero, L_80331BAC
    if (ctx->r1 != 0) {
        // 0x80331C98: sw          $t1, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r9;
            goto L_80331BAC;
    }
    // 0x80331C98: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x80331C9C: b           L_80331CAC
    // 0x80331CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80331CAC;
    // 0x80331CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80331CA4: b           L_80331CAC
    // 0x80331CA8: nop

        goto L_80331CAC;
    // 0x80331CA8: nop

L_80331CAC:
    // 0x80331CAC: jr          $ra
    // 0x80331CB0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80331CB0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_bagular1_80330000(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330040: addiu       $a1, $a1, 0x31C4
    ctx->r5 = ADD32(ctx->r5, 0X31C4);
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
    // 0x80330064: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330068: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033006C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330070: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330074: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330078: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033007C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330080: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330084: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
    // 0x80330088: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033008C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330090: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330094: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330098: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033009C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803300A0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803300A4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803300A8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803300AC: sh          $t3, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r11;
    // 0x803300B0: b           L_803300B8
    // 0x803300B4: nop

        goto L_803300B8;
    // 0x803300B4: nop

L_803300B8:
    // 0x803300B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803300BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803300C0: jr          $ra
    // 0x803300C4: nop

    return;
    // 0x803300C4: nop

;}
RECOMP_FUNC void func_bagular1_80332C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332C94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332C98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332C9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332CA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332CA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332CA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332CAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332CB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332CBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332CC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332CC4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332CC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332CCC: nop

    // 0x80332CD0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332CD4: nop

    // 0x80332CD8: bne         $t1, $zero, L_80332D1C
    if (ctx->r9 != 0) {
        // 0x80332CDC: nop
    
            goto L_80332D1C;
    }
    // 0x80332CDC: nop

    // 0x80332CE0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332CE4: nop

    // 0x80332CE8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332CEC: nop

    // 0x80332CF0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332CF4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332CF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CFC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80332D00: addiu       $t5, $t5, -0x4EE0
    ctx->r13 = ADD32(ctx->r13, -0X4EE0);
    // 0x80332D04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D08: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80332D0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332D10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332D14: jal         0x8001C0EC
    // 0x80332D18: addiu       $a3, $zero, 0x13A
    ctx->r7 = ADD32(0, 0X13A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332D18: addiu       $a3, $zero, 0x13A
    ctx->r7 = ADD32(0, 0X13A);
    after_0:
L_80332D1C:
    // 0x80332D1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D24: jal         0x8001B4AC
    // 0x80332D28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80332D28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80332D2C: beq         $v0, $zero, L_80332D44
    if (ctx->r2 == 0) {
        // 0x80332D30: nop
    
            goto L_80332D44;
    }
    // 0x80332D30: nop

    // 0x80332D34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D3C: jal         0x8002B114
    // 0x80332D40: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80332D40: nop

    after_2:
L_80332D44:
    // 0x80332D44: b           L_80332D4C
    // 0x80332D48: nop

        goto L_80332D4C;
    // 0x80332D48: nop

L_80332D4C:
    // 0x80332D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332D50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332D54: jr          $ra
    // 0x80332D58: nop

    return;
    // 0x80332D58: nop

;}
RECOMP_FUNC void func_bagular1_80331880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331880: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331884: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331888: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8033188C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80331890: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331894: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331898: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033189C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803318A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803318A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803318A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803318AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803318B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803318B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803318B8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803318BC: lh          $t0, 0x3A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3A);
    // 0x803318C0: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803318C4: addiu       $t1, $t1, 0x3164
    ctx->r9 = ADD32(ctx->r9, 0X3164);
    // 0x803318C8: sb          $t0, 0x6($t1)
    MEM_B(0X6, ctx->r9) = ctx->r8;
    // 0x803318CC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803318D0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803318D4: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x803318D8: lwc1        $f6, 0x24($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X24);
    // 0x803318DC: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x803318E0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803318E4: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x803318E8: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x803318EC: lwc1        $f16, 0x28($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X28);
    // 0x803318F0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803318F4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803318F8: addiu       $a1, $a1, 0x3164
    ctx->r5 = ADD32(ctx->r5, 0X3164);
    // 0x803318FC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80331900: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80331904: lwc1        $f10, 0x1C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80331908: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8033190C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331910: jal         0x80027464
    // 0x80331914: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80331914: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80331918: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8033191C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331920: nop

    // 0x80331924: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80331928: nop

    // 0x8033192C: beq         $t4, $zero, L_80331948
    if (ctx->r12 == 0) {
        // 0x80331930: nop
    
            goto L_80331948;
    }
    // 0x80331930: nop

    // 0x80331934: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331938: nop

    // 0x8033193C: lh          $a0, 0xC2($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XC2);
    // 0x80331940: jal         0x8002B114
    // 0x80331944: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80331944: nop

    after_1:
L_80331948:
    // 0x80331948: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8033194C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331950: nop

    // 0x80331954: sh          $t6, 0xC2($t7)
    MEM_H(0XC2, ctx->r15) = ctx->r14;
    // 0x80331958: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033195C: nop

    // 0x80331960: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x80331964: nop

    // 0x80331968: bne         $t9, $zero, L_803319DC
    if (ctx->r25 != 0) {
        // 0x8033196C: nop
    
            goto L_803319DC;
    }
    // 0x8033196C: nop

    // 0x80331970: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331974: nop

    // 0x80331978: lh          $t1, 0x100($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X100);
    // 0x8033197C: nop

    // 0x80331980: bne         $t1, $zero, L_8033199C
    if (ctx->r9 != 0) {
        // 0x80331984: nop
    
            goto L_8033199C;
    }
    // 0x80331984: nop

    // 0x80331988: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033198C: jal         0x8001BB34
    // 0x80331990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80331990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331994: b           L_803319D4
    // 0x80331998: nop

        goto L_803319D4;
    // 0x80331998: nop

L_8033199C:
    // 0x8033199C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803319A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803319A4: lw          $t3, 0xC4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC4);
    // 0x803319A8: nop

    // 0x803319AC: bne         $t3, $at, L_803319C8
    if (ctx->r11 != ctx->r1) {
        // 0x803319B0: nop
    
            goto L_803319C8;
    }
    // 0x803319B0: nop

    // 0x803319B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803319B8: jal         0x8001BB34
    // 0x803319BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x803319BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x803319C0: b           L_803319D4
    // 0x803319C4: nop

        goto L_803319D4;
    // 0x803319C4: nop

L_803319C8:
    // 0x803319C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803319CC: jal         0x8001BB34
    // 0x803319D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x803319D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_803319D4:
    // 0x803319D4: b           L_80331A1C
    // 0x803319D8: nop

        goto L_80331A1C;
    // 0x803319D8: nop

L_803319DC:
    // 0x803319DC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803319E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803319E4: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x803319E8: nop

    // 0x803319EC: beq         $t5, $at, L_80331A1C
    if (ctx->r13 == ctx->r1) {
        // 0x803319F0: nop
    
            goto L_80331A1C;
    }
    // 0x803319F0: nop

    // 0x803319F4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803319F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803319FC: lh          $s0, 0x108($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X108);
    // 0x80331A00: nop

    // 0x80331A04: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x80331A08: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80331A0C: sltiu       $t8, $s0, 0x1
    ctx->r24 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331A10: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80331A14: jal         0x8001BB34
    // 0x80331A18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x80331A18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_80331A1C:
    // 0x80331A1C: b           L_80331A24
    // 0x80331A20: nop

        goto L_80331A24;
    // 0x80331A20: nop

L_80331A24:
    // 0x80331A24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331A28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80331A2C: jr          $ra
    // 0x80331A30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80331A30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_bagular1_80331148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331148: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033114C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331150: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331154: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331158: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033115C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331160: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331164: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331168: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033116C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331170: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331174: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331178: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033117C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331180: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331184: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331188: nop

    // 0x8033118C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331190: nop

    // 0x80331194: bne         $t1, $zero, L_80331224
    if (ctx->r9 != 0) {
        // 0x80331198: nop
    
            goto L_80331224;
    }
    // 0x80331198: nop

    // 0x8033119C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803311A0: nop

    // 0x803311A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803311A8: nop

    // 0x803311AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803311B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803311B4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803311B8: nop

    // 0x803311BC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803311C0: nop

    // 0x803311C4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803311C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311CC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803311D0: addiu       $t7, $t7, -0x4F60
    ctx->r15 = ADD32(ctx->r15, -0X4F60);
    // 0x803311D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311D8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803311DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803311E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803311E4: jal         0x8001C0EC
    // 0x803311E8: addiu       $a3, $zero, 0x135
    ctx->r7 = ADD32(0, 0X135);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803311E8: addiu       $a3, $zero, 0x135
    ctx->r7 = ADD32(0, 0X135);
    after_0:
    // 0x803311EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311F4: jal         0x8001BBDC
    // 0x803311F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803311F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x803311FC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331200: nop

    // 0x80331204: sh          $zero, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = 0;
    // 0x80331208: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033120C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331214: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x80331218: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033121C: jal         0x800175F0
    // 0x80331220: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x80331220: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_80331224:
    // 0x80331224: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331228: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033122C: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x80331230: nop

    // 0x80331234: bne         $t0, $at, L_80331248
    if (ctx->r8 != ctx->r1) {
        // 0x80331238: nop
    
            goto L_80331248;
    }
    // 0x80331238: nop

    // 0x8033123C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331240: nop

    // 0x80331244: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
L_80331248:
    // 0x80331248: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033124C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331250: jal         0x8001B62C
    // 0x80331254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80331254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80331258: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033125C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331260: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80331264: nop

    // 0x80331268: div.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f4.fl);
    // 0x8033126C: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80331270: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80331274: nop

    // 0x80331278: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8033127C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80331280: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80331284: nop

    // 0x80331288: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8033128C: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x80331290: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80331294: sll         $t2, $t4, 16
    ctx->r10 = S32(ctx->r12 << 16);
    // 0x80331298: sra         $t6, $t2, 16
    ctx->r14 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8033129C: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x803312A0: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x803312A4: lh          $a0, 0x2FC0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X2FC0);
    // 0x803312A8: jal         0x80331880
    // 0x803312AC: nop

    func_bagular1_80331880(rdram, ctx);
        goto after_4;
    // 0x803312AC: nop

    after_4:
    // 0x803312B0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803312B4: nop

    // 0x803312B8: lh          $t8, 0xB6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB6);
    // 0x803312BC: nop

    // 0x803312C0: bne         $t8, $zero, L_803312EC
    if (ctx->r24 != 0) {
        // 0x803312C4: nop
    
            goto L_803312EC;
    }
    // 0x803312C4: nop

    // 0x803312C8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803312CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803312D0: lh          $a0, 0xC2($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XC2);
    // 0x803312D4: jal         0x8001BB34
    // 0x803312D8: nop

    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x803312D8: nop

    after_5:
    // 0x803312DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312E4: jal         0x8001BB34
    // 0x803312E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x803312E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_803312EC:
    // 0x803312EC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803312F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803312F4: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x803312F8: nop

    // 0x803312FC: bne         $t1, $at, L_80331384
    if (ctx->r9 != ctx->r1) {
        // 0x80331300: nop
    
            goto L_80331384;
    }
    // 0x80331300: nop

    // 0x80331304: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331308: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033130C: lh          $a0, 0xC2($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XC2);
    // 0x80331310: jal         0x8001BB34
    // 0x80331314: nop

    func_8001BB34(rdram, ctx);
        goto after_7;
    // 0x80331314: nop

    after_7:
    // 0x80331318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033131C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331320: jal         0x8001BBDC
    // 0x80331324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x80331324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80331328: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033132C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331330: jal         0x8001BB34
    // 0x80331334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_9;
    // 0x80331334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80331338: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033133C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331340: lh          $a0, 0xC2($t4)
    ctx->r4 = MEM_H(ctx->r12, 0XC2);
    // 0x80331344: jal         0x8001BB34
    // 0x80331348: nop

    func_8001BB34(rdram, ctx);
        goto after_10;
    // 0x80331348: nop

    after_10:
    // 0x8033134C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331350: nop

    // 0x80331354: sw          $zero, 0xC4($t2)
    MEM_W(0XC4, ctx->r10) = 0;
    // 0x80331358: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033135C: nop

    // 0x80331360: sh          $zero, 0xC0($t6)
    MEM_H(0XC0, ctx->r14) = 0;
    // 0x80331364: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x80331368: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033136C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331370: nop

    // 0x80331374: swc1        $f10, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f10.u32l;
    // 0x80331378: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033137C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80331380: sh          $t7, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r15;
L_80331384:
    // 0x80331384: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331388: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033138C: lh          $t0, 0xB6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB6);
    // 0x80331390: nop

    // 0x80331394: bne         $t0, $at, L_803314A0
    if (ctx->r8 != ctx->r1) {
        // 0x80331398: nop
    
            goto L_803314A0;
    }
    // 0x80331398: nop

    // 0x8033139C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313A4: jal         0x8001B4AC
    // 0x803313A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_11;
    // 0x803313A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x803313AC: beq         $v0, $zero, L_803314A0
    if (ctx->r2 == 0) {
        // 0x803313B0: nop
    
            goto L_803314A0;
    }
    // 0x803313B0: nop

    // 0x803313B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803313B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803313BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313C4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x803313C8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x803313CC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803313D0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803313D4: jal         0x800295C0
    // 0x803313D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_12;
    // 0x803313D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_12:
    // 0x803313DC: beq         $v0, $zero, L_803313F4
    if (ctx->r2 == 0) {
        // 0x803313E0: nop
    
            goto L_803313F4;
    }
    // 0x803313E0: nop

    // 0x803313E4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803313E8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803313EC: b           L_80331404
    // 0x803313F0: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
        goto L_80331404;
    // 0x803313F0: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
L_803313F4:
    // 0x803313F4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803313F8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803313FC: nop

    // 0x80331400: swc1        $f6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f6.u32l;
L_80331404:
    // 0x80331404: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331408: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033140C: nop

    // 0x80331410: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
    // 0x80331414: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331418: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033141C: jal         0x8002A2EC
    // 0x80331420: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_13;
    // 0x80331420: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_13:
    // 0x80331424: beq         $v0, $zero, L_8033143C
    if (ctx->r2 == 0) {
        // 0x80331428: nop
    
            goto L_8033143C;
    }
    // 0x80331428: nop

    // 0x8033142C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331430: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331434: b           L_80331470
    // 0x80331438: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
        goto L_80331470;
    // 0x80331438: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
L_8033143C:
    // 0x8033143C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80331440: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80331444: jal         0x80331A34
    // 0x80331448: nop

    func_bagular1_80331A34(rdram, ctx);
        goto after_14;
    // 0x80331448: nop

    after_14:
    // 0x8033144C: beq         $v0, $zero, L_80331464
    if (ctx->r2 == 0) {
        // 0x80331450: nop
    
            goto L_80331464;
    }
    // 0x80331450: nop

    // 0x80331454: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331458: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033145C: b           L_80331470
    // 0x80331460: sh          $t5, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r13;
        goto L_80331470;
    // 0x80331460: sh          $t5, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r13;
L_80331464:
    // 0x80331464: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331468: nop

    // 0x8033146C: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_80331470:
    // 0x80331470: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331474: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80331478: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033147C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331480: nop

    // 0x80331484: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80331488: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033148C: nop

    // 0x80331490: sh          $zero, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = 0;
    // 0x80331494: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331498: nop

    // 0x8033149C: sh          $zero, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = 0;
L_803314A0:
    // 0x803314A0: b           L_803314A8
    // 0x803314A4: nop

        goto L_803314A8;
    // 0x803314A4: nop

L_803314A8:
    // 0x803314A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803314AC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803314B0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803314B4: jr          $ra
    // 0x803314B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803314B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_bagular1_80331CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331CB4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331CB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331CBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331CC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331CC4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331CC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331CCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331CD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331CD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331CD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331CDC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331CE0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331CE4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331CE8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331CEC: nop

    // 0x80331CF0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331CF4: nop

    // 0x80331CF8: bne         $t1, $zero, L_80331D3C
    if (ctx->r9 != 0) {
        // 0x80331CFC: nop
    
            goto L_80331D3C;
    }
    // 0x80331CFC: nop

    // 0x80331D00: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331D04: nop

    // 0x80331D08: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331D0C: nop

    // 0x80331D10: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331D14: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331D18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D1C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80331D20: addiu       $t5, $t5, -0x4F4C
    ctx->r13 = ADD32(ctx->r13, -0X4F4C);
    // 0x80331D24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D28: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80331D2C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331D30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331D34: jal         0x8001C0EC
    // 0x80331D38: addiu       $a3, $zero, 0x137
    ctx->r7 = ADD32(0, 0X137);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331D38: addiu       $a3, $zero, 0x137
    ctx->r7 = ADD32(0, 0X137);
    after_0:
L_80331D3C:
    // 0x80331D3C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331D40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331D44: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80331D48: nop

    // 0x80331D4C: bne         $t7, $at, L_80331DBC
    if (ctx->r15 != ctx->r1) {
        // 0x80331D50: nop
    
            goto L_80331DBC;
    }
    // 0x80331D50: nop

    // 0x80331D54: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331D58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D5C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80331D60: nop

    // 0x80331D64: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331D68: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331D6C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331D70: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331D74: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331D78: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331D7C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80331D80: nop

    // 0x80331D84: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331D88: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331D8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D90: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80331D94: nop

    // 0x80331D98: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331D9C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331DA0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331DA4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331DA8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331DAC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331DB0: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80331DB4: nop

    // 0x80331DB8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
L_80331DBC:
    // 0x80331DBC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331DC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331DC4: lbu         $t5, 0x132($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X132);
    // 0x80331DC8: nop

    // 0x80331DCC: bne         $t5, $at, L_8033227C
    if (ctx->r13 != ctx->r1) {
        // 0x80331DD0: nop
    
            goto L_8033227C;
    }
    // 0x80331DD0: nop

    // 0x80331DD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DDC: jal         0x8001B62C
    // 0x80331DE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80331DE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80331DE4: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x80331DE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331DEC: nop

    // 0x80331DF0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80331DF4: nop

    // 0x80331DF8: bc1f        L_8033227C
    if (!c1cs) {
        // 0x80331DFC: nop
    
            goto L_8033227C;
    }
    // 0x80331DFC: nop

    // 0x80331E00: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331E04: nop

    // 0x80331E08: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80331E0C: nop

    // 0x80331E10: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80331E14: sb          $t9, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r25;
    // 0x80331E18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E24: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x80331E28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331E2C: jal         0x800175F0
    // 0x80331E30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x80331E30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80331E34: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331E38: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331E3C: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80331E40: lwc1        $f19, 0x31F8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X31F8);
    // 0x80331E44: lwc1        $f18, 0x31FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X31FC);
    // 0x80331E48: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80331E4C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80331E50: jal         0x80034970
    // 0x80331E54: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x80331E54: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_3:
    // 0x80331E58: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80331E5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331E60: nop

    // 0x80331E64: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80331E68: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80331E6C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331E70: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331E74: lwc1        $f10, 0x3C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331E78: lwc1        $f19, 0x3200($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X3200);
    // 0x80331E7C: lwc1        $f18, 0x3204($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3204);
    // 0x80331E80: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80331E84: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80331E88: jal         0x80036570
    // 0x80331E8C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x80331E8C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x80331E90: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80331E94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331E98: nop

    // 0x80331E9C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80331EA0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80331EA4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331EA8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80331EAC: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80331EB0: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80331EB4: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80331EB8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331EBC: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x80331EC0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80331EC4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80331EC8: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80331ECC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80331ED0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331ED4: addiu       $a1, $a1, 0x317C
    ctx->r5 = ADD32(ctx->r5, 0X317C);
    // 0x80331ED8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331EDC: jal         0x80027464
    // 0x80331EE0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80331EE0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x80331EE4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80331EE8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80331EEC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331EF0: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80331EF4: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80331EF8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331EFC: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80331F00: lh          $t1, 0xC2($t4)
    ctx->r9 = MEM_H(ctx->r12, 0XC2);
    // 0x80331F04: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331F08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331F0C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331F10: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x80331F14: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331F18: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80331F1C: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80331F20: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80331F24: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331F28: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80331F2C: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80331F30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331F34: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80331F38: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80331F3C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331F40: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331F44: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80331F48: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80331F4C: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80331F50: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80331F54: addiu       $a1, $a1, 0x3188
    ctx->r5 = ADD32(ctx->r5, 0X3188);
    // 0x80331F58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331F5C: jal         0x80027464
    // 0x80331F60: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80331F60: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80331F64: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80331F68: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80331F6C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331F70: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80331F74: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80331F78: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331F7C: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80331F80: lh          $t6, 0xC2($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XC2);
    // 0x80331F84: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331F88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331F8C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331F90: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80331F94: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331F98: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80331F9C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331FA0: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80331FA4: jal         0x80015538
    // 0x80331FA8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80331FA8: nop

    after_7:
    // 0x80331FAC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80331FB0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331FB4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331FB8: lwc1        $f17, 0x3208($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3208);
    // 0x80331FBC: lwc1        $f16, 0x320C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X320C);
    // 0x80331FC0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80331FC4: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80331FC8: jal         0x80034970
    // 0x80331FCC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x80331FCC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_8:
    // 0x80331FD0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80331FD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331FD8: nop

    // 0x80331FDC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80331FE0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80331FE4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331FE8: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331FEC: lwc1        $f17, 0x3210($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3210);
    // 0x80331FF0: lwc1        $f16, 0x3214($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3214);
    // 0x80331FF4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80331FF8: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80331FFC: jal         0x80036570
    // 0x80332000: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_9;
    // 0x80332000: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_9:
    // 0x80332004: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80332008: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033200C: nop

    // 0x80332010: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80332014: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80332018: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033201C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80332020: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80332024: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332028: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8033202C: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80332030: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332034: lw          $a3, 0x4($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X4);
    // 0x80332038: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8033203C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80332040: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332044: addiu       $a1, $a1, 0x317C
    ctx->r5 = ADD32(ctx->r5, 0X317C);
    // 0x80332048: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033204C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332050: jal         0x80027464
    // 0x80332054: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x80332054: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x80332058: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8033205C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80332060: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332064: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332068: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033206C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332070: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332074: lh          $t1, 0xC2($t2)
    ctx->r9 = MEM_H(ctx->r10, 0XC2);
    // 0x80332078: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033207C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332080: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332084: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x80332088: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033208C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80332090: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80332094: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80332098: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033209C: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803320A0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803320A4: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803320A8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803320AC: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803320B0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803320B4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803320B8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803320BC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803320C0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803320C4: addiu       $a1, $a1, 0x3188
    ctx->r5 = ADD32(ctx->r5, 0X3188);
    // 0x803320C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803320CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803320D0: jal         0x80027464
    // 0x803320D4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x803320D4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x803320D8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803320DC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803320E0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803320E4: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x803320E8: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x803320EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803320F0: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x803320F4: lh          $t6, 0xC2($t0)
    ctx->r14 = MEM_H(ctx->r8, 0XC2);
    // 0x803320F8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803320FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332100: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332104: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80332108: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033210C: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80332110: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332114: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80332118: jal         0x80015538
    // 0x8033211C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x8033211C: nop

    after_12:
    // 0x80332120: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80332124: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332128: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033212C: lwc1        $f11, 0x3218($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3218);
    // 0x80332130: lwc1        $f10, 0x321C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X321C);
    // 0x80332134: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80332138: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8033213C: jal         0x80034970
    // 0x80332140: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_13;
    // 0x80332140: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_13:
    // 0x80332144: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80332148: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033214C: nop

    // 0x80332150: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80332154: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80332158: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033215C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332160: lwc1        $f11, 0x3220($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3220);
    // 0x80332164: lwc1        $f10, 0x3224($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3224);
    // 0x80332168: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033216C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80332170: jal         0x80036570
    // 0x80332174: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_14;
    // 0x80332174: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_14:
    // 0x80332178: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8033217C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332180: nop

    // 0x80332184: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80332188: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8033218C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332190: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80332194: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80332198: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033219C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803321A0: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x803321A4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803321A8: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x803321AC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803321B0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803321B4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803321B8: addiu       $a1, $a1, 0x317C
    ctx->r5 = ADD32(ctx->r5, 0X317C);
    // 0x803321BC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803321C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803321C4: jal         0x80027464
    // 0x803321C8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_15;
    // 0x803321C8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x803321CC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803321D0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x803321D4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803321D8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x803321DC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803321E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803321E4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803321E8: lh          $t1, 0xC2($t5)
    ctx->r9 = MEM_H(ctx->r13, 0XC2);
    // 0x803321EC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803321F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803321F4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803321F8: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x803321FC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332200: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80332204: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80332208: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x8033220C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332210: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80332214: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80332218: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033221C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80332220: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80332224: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332228: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8033222C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80332230: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80332234: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332238: addiu       $a1, $a1, 0x3188
    ctx->r5 = ADD32(ctx->r5, 0X3188);
    // 0x8033223C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332240: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332244: jal         0x80027464
    // 0x80332248: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_16;
    // 0x80332248: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_16:
    // 0x8033224C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332250: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80332254: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332258: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033225C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332260: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332264: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332268: lh          $t6, 0xC2($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XC2);
    // 0x8033226C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332270: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332274: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332278: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
L_8033227C:
    // 0x8033227C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332284: jal         0x8001B4AC
    // 0x80332288: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_17;
    // 0x80332288: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_17:
    // 0x8033228C: beq         $v0, $zero, L_803322A4
    if (ctx->r2 == 0) {
        // 0x80332290: nop
    
            goto L_803322A4;
    }
    // 0x80332290: nop

    // 0x80332294: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332298: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033229C: jal         0x8002B114
    // 0x803322A0: nop

    func_8002B114(rdram, ctx);
        goto after_18;
    // 0x803322A0: nop

    after_18:
L_803322A4:
    // 0x803322A4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803322A8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803322AC: lh          $t5, 0xC2($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XC2);
    // 0x803322B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803322B4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803322B8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803322BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803322C0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803322C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803322C8: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x803322CC: lh          $t1, 0x420E($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X420E);
    // 0x803322D0: nop

    // 0x803322D4: bne         $t1, $at, L_803322EC
    if (ctx->r9 != ctx->r1) {
        // 0x803322D8: nop
    
            goto L_803322EC;
    }
    // 0x803322D8: nop

    // 0x803322DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803322E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803322E4: jal         0x8002B114
    // 0x803322E8: nop

    func_8002B114(rdram, ctx);
        goto after_19;
    // 0x803322E8: nop

    after_19:
L_803322EC:
    // 0x803322EC: b           L_803322F4
    // 0x803322F0: nop

        goto L_803322F4;
    // 0x803322F0: nop

L_803322F4:
    // 0x803322F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803322F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803322FC: jr          $ra
    // 0x80332300: nop

    return;
    // 0x80332300: nop

;}
RECOMP_FUNC void func_bagular1_803328BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803328BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803328C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803328C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803328C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803328CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803328D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803328D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803328D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803328DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803328E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803328E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803328E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803328EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803328F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803328F4: nop

    // 0x803328F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803328FC: nop

    // 0x80332900: bne         $t1, $zero, L_80332958
    if (ctx->r9 != 0) {
        // 0x80332904: nop
    
            goto L_80332958;
    }
    // 0x80332904: nop

    // 0x80332908: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033290C: nop

    // 0x80332910: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332914: nop

    // 0x80332918: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033291C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332920: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332924: nop

    // 0x80332928: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033292C: nop

    // 0x80332930: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332934: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332938: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033293C: addiu       $t7, $t7, -0x4F44
    ctx->r15 = ADD32(ctx->r15, -0X4F44);
    // 0x80332940: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332944: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332948: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033294C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80332950: jal         0x8001C0EC
    // 0x80332954: addiu       $a3, $zero, 0x139
    ctx->r7 = ADD32(0, 0X139);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332954: addiu       $a3, $zero, 0x139
    ctx->r7 = ADD32(0, 0X139);
    after_0:
L_80332958:
    // 0x80332958: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033295C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332960: jal         0x8001B4AC
    // 0x80332964: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80332964: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80332968: beq         $v0, $zero, L_80332AC8
    if (ctx->r2 == 0) {
        // 0x8033296C: nop
    
            goto L_80332AC8;
    }
    // 0x8033296C: nop

    // 0x80332970: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80332974: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80332978: jal         0x80331A34
    // 0x8033297C: nop

    func_bagular1_80331A34(rdram, ctx);
        goto after_2;
    // 0x8033297C: nop

    after_2:
    // 0x80332980: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332984: beq         $v0, $at, L_803329C4
    if (ctx->r2 == ctx->r1) {
        // 0x80332988: nop
    
            goto L_803329C4;
    }
    // 0x80332988: nop

    // 0x8033298C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80332990: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80332994: jal         0x80331B74
    // 0x80332998: nop

    func_bagular1_80331B74(rdram, ctx);
        goto after_3;
    // 0x80332998: nop

    after_3:
    // 0x8033299C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803329A0: beq         $v0, $at, L_803329C4
    if (ctx->r2 == ctx->r1) {
        // 0x803329A4: nop
    
            goto L_803329C4;
    }
    // 0x803329A4: nop

    // 0x803329A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329B0: jal         0x8002A1FC
    // 0x803329B4: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x803329B4: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_4:
    // 0x803329B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803329BC: bne         $v0, $at, L_803329DC
    if (ctx->r2 != ctx->r1) {
        // 0x803329C0: nop
    
            goto L_803329DC;
    }
    // 0x803329C0: nop

L_803329C4:
    // 0x803329C4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803329C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803329CC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803329D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803329D4: b           L_80332AC8
    // 0x803329D8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_80332AC8;
    // 0x803329D8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803329DC:
    // 0x803329DC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803329E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803329E4: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803329E8: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803329EC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803329F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803329F4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803329F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803329FC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332A00: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332A04: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80332A08: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332A0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A10: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80332A14: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80332A18: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80332A1C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332A20: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332A24: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332A28: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332A2C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332A30: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80332A34: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332A38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A3C: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80332A40: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80332A44: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332A48: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332A4C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332A50: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332A54: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332A58: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332A5C: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80332A60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332A64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A68: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80332A6C: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332A70: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332A74: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332A78: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332A7C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332A80: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332A84: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332A88: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x80332A8C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332A90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A94: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80332A98: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80332A9C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80332AA0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332AA4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332AA8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332AAC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332AB0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332AB4: sh          $t4, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = ctx->r12;
    // 0x80332AB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332ABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AC0: jal         0x8002B114
    // 0x80332AC4: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x80332AC4: nop

    after_5:
L_80332AC8:
    // 0x80332AC8: b           L_80332AD0
    // 0x80332ACC: nop

        goto L_80332AD0;
    // 0x80332ACC: nop

L_80332AD0:
    // 0x80332AD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332AD8: jr          $ra
    // 0x80332ADC: nop

    return;
    // 0x80332ADC: nop

;}
RECOMP_FUNC void func_bagular2_80330A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330A90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330A94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330A98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330A9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330AA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330AA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330AA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330AAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330AB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330AB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330AB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330ABC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330AC0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330AC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330ACC: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x80330AD0: nop

    // 0x80330AD4: beq         $t1, $at, L_80330CB8
    if (ctx->r9 == ctx->r1) {
        // 0x80330AD8: nop
    
            goto L_80330CB8;
    }
    // 0x80330AD8: nop

    // 0x80330ADC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AE0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330AE4: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80330AE8: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80330AEC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330AF0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330AF4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330AF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330AFC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330B00: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80330B04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330B08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330B0C: lwc1        $f4, 0xD4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x80330B10: nop

    // 0x80330B14: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330B18: swc1        $f8, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f8.u32l;
    // 0x80330B1C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330B20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B2C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80330B30: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80330B34: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330B38: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330B3C: jal         0x800295C0
    // 0x80330B40: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x80330B40: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80330B44: beq         $v0, $zero, L_80330B58
    if (ctx->r2 == 0) {
        // 0x80330B48: nop
    
            goto L_80330B58;
    }
    // 0x80330B48: nop

    // 0x80330B4C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330B50: b           L_80330B64
    // 0x80330B54: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
        goto L_80330B64;
    // 0x80330B54: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_80330B58:
    // 0x80330B58: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330B5C: nop

    // 0x80330B60: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
L_80330B64:
    // 0x80330B64: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B6C: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x80330B70: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80330B74: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330B78: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330B7C: lwc1        $f8, 0x24($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80330B80: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330B84: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330B88: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330B8C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330B90: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330B94: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80330B98: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BA0: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x80330BA4: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330BA8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330BAC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330BB0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330BB4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330BB8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330BBC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330BC0: lwc1        $f18, 0x4154($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80330BC4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330BC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330BCC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80330BD0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80330BD4: nop

    // 0x80330BD8: bc1f        L_80330C48
    if (!c1cs) {
        // 0x80330BDC: nop
    
            goto L_80330C48;
    }
    // 0x80330BDC: nop

    // 0x80330BE0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BE4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330BE8: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x80330BEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BF0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330BF4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330BF8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330BFC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330C00: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330C04: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330C08: swc1        $f8, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f8.u32l;
    // 0x80330C0C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C10: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330C14: lh          $t7, 0xEA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XEA);
    // 0x80330C18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330C1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330C20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330C24: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330C28: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330C2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330C30: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330C34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C38: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80330C3C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330C40: b           L_80330C84
    // 0x80330C44: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
        goto L_80330C84;
    // 0x80330C44: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
L_80330C48:
    // 0x80330C48: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C4C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330C50: lh          $t0, 0xEA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEA);
    // 0x80330C54: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330C58: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330C5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330C60: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330C64: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330C68: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330C6C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80330C70: lwc1        $f6, 0xD4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x80330C74: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330C78: nop

    // 0x80330C7C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330C80: swc1        $f8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f8.u32l;
L_80330C84:
    // 0x80330C84: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C8C: lh          $t5, 0xEA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XEA);
    // 0x80330C90: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80330C94: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330C98: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330C9C: lwc1        $f16, 0x2C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80330CA0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330CA4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330CA8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330CAC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330CB0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330CB4: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
L_80330CB8:
    // 0x80330CB8: b           L_80330CC0
    // 0x80330CBC: nop

        goto L_80330CC0;
    // 0x80330CBC: nop

L_80330CC0:
    // 0x80330CC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330CC8: jr          $ra
    // 0x80330CCC: nop

    return;
    // 0x80330CCC: nop

;}
RECOMP_FUNC void func_bagular2_80333B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333B20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333B24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333B28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80333B2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333B30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333B34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333B38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333B3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333B40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333B44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333B48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333B4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333B50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333B54: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333B58: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333B5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B60: lh          $s0, 0xA6($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA6);
    // 0x80333B64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B68: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x80333B6C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80333B70: sltiu       $t2, $s0, 0x1
    ctx->r10 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80333B74: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80333B78: jal         0x8001BB34
    // 0x80333B7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80333B7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80333B80: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333B84: nop

    // 0x80333B88: lh          $s0, 0xA6($t3)
    ctx->r16 = MEM_H(ctx->r11, 0XA6);
    // 0x80333B8C: lh          $a0, 0xE8($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XE8);
    // 0x80333B90: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x80333B94: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80333B98: sltiu       $t5, $s0, 0x1
    ctx->r13 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80333B9C: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80333BA0: jal         0x8001BB34
    // 0x80333BA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80333BA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80333BA8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333BAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333BB0: lh          $s0, 0xA4($t6)
    ctx->r16 = MEM_H(ctx->r14, 0XA4);
    // 0x80333BB4: nop

    // 0x80333BB8: beq         $s0, $at, L_80333BEC
    if (ctx->r16 == ctx->r1) {
        // 0x80333BBC: nop
    
            goto L_80333BEC;
    }
    // 0x80333BBC: nop

    // 0x80333BC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80333BC4: beq         $s0, $at, L_80333BFC
    if (ctx->r16 == ctx->r1) {
        // 0x80333BC8: nop
    
            goto L_80333BFC;
    }
    // 0x80333BC8: nop

    // 0x80333BCC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80333BD0: beq         $s0, $at, L_80333C0C
    if (ctx->r16 == ctx->r1) {
        // 0x80333BD4: nop
    
            goto L_80333C0C;
    }
    // 0x80333BD4: nop

    // 0x80333BD8: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x80333BDC: beq         $s0, $at, L_80333C1C
    if (ctx->r16 == ctx->r1) {
        // 0x80333BE0: nop
    
            goto L_80333C1C;
    }
    // 0x80333BE0: nop

    // 0x80333BE4: b           L_80333C2C
    // 0x80333BE8: nop

        goto L_80333C2C;
    // 0x80333BE8: nop

L_80333BEC:
    // 0x80333BEC: jal         0x80333248
    // 0x80333BF0: nop

    func_bagular2_80333248(rdram, ctx);
        goto after_2;
    // 0x80333BF0: nop

    after_2:
    // 0x80333BF4: b           L_80333C34
    // 0x80333BF8: nop

        goto L_80333C34;
    // 0x80333BF8: nop

L_80333BFC:
    // 0x80333BFC: jal         0x80333370
    // 0x80333C00: nop

    func_bagular2_80333370(rdram, ctx);
        goto after_3;
    // 0x80333C00: nop

    after_3:
    // 0x80333C04: b           L_80333C34
    // 0x80333C08: nop

        goto L_80333C34;
    // 0x80333C08: nop

L_80333C0C:
    // 0x80333C0C: jal         0x80333544
    // 0x80333C10: nop

    func_bagular2_80333544(rdram, ctx);
        goto after_4;
    // 0x80333C10: nop

    after_4:
    // 0x80333C14: b           L_80333C34
    // 0x80333C18: nop

        goto L_80333C34;
    // 0x80333C18: nop

L_80333C1C:
    // 0x80333C1C: jal         0x8033382C
    // 0x80333C20: nop

    func_bagular2_8033382C(rdram, ctx);
        goto after_5;
    // 0x80333C20: nop

    after_5:
    // 0x80333C24: b           L_80333C34
    // 0x80333C28: nop

        goto L_80333C34;
    // 0x80333C28: nop

L_80333C2C:
    // 0x80333C2C: b           L_80333C34
    // 0x80333C30: nop

        goto L_80333C34;
    // 0x80333C30: nop

L_80333C34:
    // 0x80333C34: b           L_80333C3C
    // 0x80333C38: nop

        goto L_80333C3C;
    // 0x80333C38: nop

L_80333C3C:
    // 0x80333C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80333C44: jr          $ra
    // 0x80333C48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80333C48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_bagular2_803302C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803302CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803302D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803302D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803302D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803302DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803302E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803302E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803302F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803302F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803302F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803302FC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330300: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330304: jal         0x80330000
    // 0x80330308: nop

    func_bagular2_80330000(rdram, ctx);
        goto after_0;
    // 0x80330308: nop

    after_0:
    // 0x8033030C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330310: beq         $v0, $at, L_80330334
    if (ctx->r2 == ctx->r1) {
        // 0x80330314: nop
    
            goto L_80330334;
    }
    // 0x80330314: nop

    // 0x80330318: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033031C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330320: jal         0x80330188
    // 0x80330324: nop

    func_bagular2_80330188(rdram, ctx);
        goto after_1;
    // 0x80330324: nop

    after_1:
    // 0x80330328: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033032C: bne         $v0, $at, L_80330394
    if (ctx->r2 != ctx->r1) {
        // 0x80330330: nop
    
            goto L_80330394;
    }
    // 0x80330330: nop

L_80330334:
    // 0x80330334: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330338: nop

    // 0x8033033C: lh          $t1, 0xAE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAE);
    // 0x80330340: nop

    // 0x80330344: bgtz        $t1, L_80330394
    if (SIGNED(ctx->r9) > 0) {
        // 0x80330348: nop
    
            goto L_80330394;
    }
    // 0x80330348: nop

    // 0x8033034C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330350: addiu       $t2, $zero, 0x3E
    ctx->r10 = ADD32(0, 0X3E);
    // 0x80330354: sh          $t2, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = ctx->r10;
    // 0x80330358: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033035C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330360: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80330364: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330368: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x8033036C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330370: jal         0x8001ABF4
    // 0x80330374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330378: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033037C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330384: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    // 0x80330388: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033038C: jal         0x800175F0
    // 0x80330390: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x80330390: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_80330394:
    // 0x80330394: b           L_8033039C
    // 0x80330398: nop

        goto L_8033039C;
    // 0x80330398: nop

L_8033039C:
    // 0x8033039C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803303A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803303A4: jr          $ra
    // 0x803303A8: nop

    return;
    // 0x803303A8: nop

;}
RECOMP_FUNC void func_bagular2_80333248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333248: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033324C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333250: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333254: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333258: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033325C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333260: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333264: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033326C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333270: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333274: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333278: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033327C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333280: nop

    // 0x80333284: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333288: nop

    // 0x8033328C: bne         $t1, $zero, L_803332FC
    if (ctx->r9 != 0) {
        // 0x80333290: nop
    
            goto L_803332FC;
    }
    // 0x80333290: nop

    // 0x80333294: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333298: nop

    // 0x8033329C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803332A0: nop

    // 0x803332A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803332A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803332AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803332B0: nop

    // 0x803332B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803332B8: nop

    // 0x803332BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803332C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803332C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803332C8: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x803332CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803332D0: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803332D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803332D8: jal         0x8001ABF4
    // 0x803332DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x803332DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803332E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803332E4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803332E8: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x803332EC: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x803332F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803332F4: jal         0x8001ABF4
    // 0x803332F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803332F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_803332FC:
    // 0x803332FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333300: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333304: jal         0x8002A8B4
    // 0x80333308: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80333308: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x8033330C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333310: nop

    // 0x80333314: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80333318: nop

    // 0x8033331C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80333320: jal         0x8033124C
    // 0x80333324: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_3;
    // 0x80333324: nop

    after_3:
    // 0x80333328: jal         0x803311B4
    // 0x8033332C: nop

    func_bagular2_803311B4(rdram, ctx);
        goto after_4;
    // 0x8033332C: nop

    after_4:
    // 0x80333330: jal         0x80330894
    // 0x80333334: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_5;
    // 0x80333334: nop

    after_5:
    // 0x80333338: jal         0x80330F08
    // 0x8033333C: nop

    func_bagular2_80330F08(rdram, ctx);
        goto after_6;
    // 0x8033333C: nop

    after_6:
    // 0x80333340: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333344: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80333348: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033334C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333350: nop

    // 0x80333354: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80333358: b           L_80333360
    // 0x8033335C: nop

        goto L_80333360;
    // 0x8033335C: nop

L_80333360:
    // 0x80333360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333364: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333368: jr          $ra
    // 0x8033336C: nop

    return;
    // 0x8033336C: nop

;}
RECOMP_FUNC void func_bagular2_803311B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803311B4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803311B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803311BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803311C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803311C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803311C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803311D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803311D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803311DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803311E0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803311E4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x803311E8: nop

    // 0x803311EC: lh          $t1, 0xBC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBC);
    // 0x803311F0: nop

    // 0x803311F4: bne         $t1, $zero, L_80331224
    if (ctx->r9 != 0) {
        // 0x803311F8: nop
    
            goto L_80331224;
    }
    // 0x803311F8: nop

    // 0x803311FC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80331200: nop

    // 0x80331204: lwc1        $f4, 0x28($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X28);
    // 0x80331208: nop

    // 0x8033120C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80331210: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
    // 0x80331214: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80331218: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x8033121C: b           L_8033123C
    // 0x80331220: sh          $t3, 0xBC($t4)
    MEM_H(0XBC, ctx->r12) = ctx->r11;
        goto L_8033123C;
    // 0x80331220: sh          $t3, 0xBC($t4)
    MEM_H(0XBC, ctx->r12) = ctx->r11;
L_80331224:
    // 0x80331224: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80331228: nop

    // 0x8033122C: lh          $t6, 0xBC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XBC);
    // 0x80331230: nop

    // 0x80331234: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80331238: sh          $t7, 0xBC($t5)
    MEM_H(0XBC, ctx->r13) = ctx->r15;
L_8033123C:
    // 0x8033123C: b           L_80331244
    // 0x80331240: nop

        goto L_80331244;
    // 0x80331240: nop

L_80331244:
    // 0x80331244: jr          $ra
    // 0x80331248: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80331248: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_bagular2_803304B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803304B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803304BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803304C0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x803304C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803304C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803304CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803304D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803304D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803304D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803304DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803304E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803304E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803304E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803304EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803304F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304F8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x803304FC: jal         0x8002A2EC
    // 0x80330500: nop

    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x80330500: nop

    after_0:
    // 0x80330504: beq         $v0, $zero, L_803305A8
    if (ctx->r2 == 0) {
        // 0x80330508: nop
    
            goto L_803305A8;
    }
    // 0x80330508: nop

    // 0x8033050C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330510: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330514: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80330518: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8033051C: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x80330520: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330524: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80330528: addiu       $a1, $a1, 0x4434
    ctx->r5 = ADD32(ctx->r5, 0X4434);
    // 0x8033052C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330530: jal         0x80027464
    // 0x80330534: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80330534: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80330538: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033053C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330540: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80330544: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330548: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033054C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330550: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330554: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80330558: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033055C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330560: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330564: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x80330568: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8033056C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330570: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330574: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330578: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033057C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330580: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330584: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330588: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x8033058C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80330590: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330594: nop

    // 0x80330598: sh          $t6, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r14;
    // 0x8033059C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803305A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803305A4: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
L_803305A8:
    // 0x803305A8: b           L_803305B0
    // 0x803305AC: nop

        goto L_803305B0;
    // 0x803305AC: nop

L_803305B0:
    // 0x803305B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803305B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803305B8: jr          $ra
    // 0x803305BC: nop

    return;
    // 0x803305BC: nop

;}
RECOMP_FUNC void func_bagular2_8033382C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033382C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333830: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333834: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80333838: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8033383C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333840: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333844: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333848: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033384C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333850: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333854: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333858: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033385C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333860: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333864: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333868: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033386C: nop

    // 0x80333870: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333874: nop

    // 0x80333878: bne         $t1, $zero, L_80333964
    if (ctx->r9 != 0) {
        // 0x8033387C: nop
    
            goto L_80333964;
    }
    // 0x8033387C: nop

    // 0x80333880: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333884: nop

    // 0x80333888: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033388C: nop

    // 0x80333890: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333894: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333898: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033389C: addiu       $t5, $zero, 0x3D
    ctx->r13 = ADD32(0, 0X3D);
    // 0x803338A0: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x803338A4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803338A8: nop

    // 0x803338AC: lh          $t8, 0xAC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAC);
    // 0x803338B0: nop

    // 0x803338B4: beq         $t8, $zero, L_803338E8
    if (ctx->r24 == 0) {
        // 0x803338B8: nop
    
            goto L_803338E8;
    }
    // 0x803338B8: nop

    // 0x803338BC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803338C0: nop

    // 0x803338C4: sh          $zero, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = 0;
    // 0x803338C8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803338CC: nop

    // 0x803338D0: lh          $a0, 0xAC($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XAC);
    // 0x803338D4: jal         0x8002B114
    // 0x803338D8: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x803338D8: nop

    after_0:
    // 0x803338DC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803338E0: nop

    // 0x803338E4: sh          $zero, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = 0;
L_803338E8:
    // 0x803338E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803338EC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803338F0: nop

    // 0x803338F4: swc1        $f4, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f4.u32l;
    // 0x803338F8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803338FC: nop

    // 0x80333900: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80333904: nop

    // 0x80333908: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x8033390C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333910: nop

    // 0x80333914: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x80333918: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033391C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333920: nop

    // 0x80333924: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x80333928: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033392C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333930: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80333934: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333938: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8033393C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333940: jal         0x8001ABF4
    // 0x80333944: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80333944: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80333948: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033394C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333950: lh          $a0, 0xE8($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XE8);
    // 0x80333954: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x80333958: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033395C: jal         0x8001ABF4
    // 0x80333960: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80333960: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
L_80333964:
    // 0x80333964: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333968: nop

    // 0x8033396C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80333970: nop

    // 0x80333974: bne         $t8, $zero, L_80333ACC
    if (ctx->r24 != 0) {
        // 0x80333978: nop
    
            goto L_80333ACC;
    }
    // 0x80333978: nop

    // 0x8033397C: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_80333980:
    // 0x80333980: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x80333984: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333988: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8033398C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80333990: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x80333994: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333998: beq         $t4, $at, L_803339C4
    if (ctx->r12 == ctx->r1) {
        // 0x8033399C: nop
    
            goto L_803339C4;
    }
    // 0x8033399C: nop

    // 0x803339A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803339A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803339A8: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x803339AC: jal         0x800281A4
    // 0x803339B0: nop

    func_800281A4(rdram, ctx);
        goto after_3;
    // 0x803339B0: nop

    after_3:
    // 0x803339B4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x803339B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803339BC: jal         0x8002B114
    // 0x803339C0: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x803339C0: nop

    after_4:
L_803339C4:
    // 0x803339C4: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x803339C8: nop

    // 0x803339CC: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x803339D0: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x803339D4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803339D8: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x803339DC: bne         $at, $zero, L_80333980
    if (ctx->r1 != 0) {
        // 0x803339E0: sh          $t5, 0x26($sp)
        MEM_H(0X26, ctx->r29) = ctx->r13;
            goto L_80333980;
    }
    // 0x803339E0: sh          $t5, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r13;
    // 0x803339E4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803339E8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803339EC: lh          $t0, 0xC2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XC2);
    // 0x803339F0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803339F4: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x803339F8: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803339FC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333A00: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80333A04: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333A08: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80333A0C: lh          $t1, 0x4210($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4210);
    // 0x80333A10: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80333A14: nop

    // 0x80333A18: bne         $t1, $t3, L_80333A4C
    if (ctx->r9 != ctx->r11) {
        // 0x80333A1C: nop
    
            goto L_80333A4C;
    }
    // 0x80333A1C: nop

    // 0x80333A20: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A28: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x80333A2C: nop

    // 0x80333A30: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80333A34: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80333A38: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333A3C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80333A40: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333A44: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333A48: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
L_80333A4C:
    // 0x80333A4C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A50: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80333A54: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x80333A58: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80333A5C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333A60: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333A64: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333A68: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333A6C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333A70: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80333A74: lh          $t0, 0x4212($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4212);
    // 0x80333A78: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80333A7C: nop

    // 0x80333A80: bne         $t0, $t9, L_80333AB4
    if (ctx->r8 != ctx->r25) {
        // 0x80333A84: nop
    
            goto L_80333AB4;
    }
    // 0x80333A84: nop

    // 0x80333A88: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A90: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80333A94: nop

    // 0x80333A98: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80333A9C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333AA0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333AA4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333AA8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333AAC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333AB0: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
L_80333AB4:
    // 0x80333AB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333AB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333ABC: jal         0x8002B114
    // 0x80333AC0: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x80333AC0: nop

    after_5:
    // 0x80333AC4: b           L_80333B04
    // 0x80333AC8: nop

        goto L_80333B04;
    // 0x80333AC8: nop

L_80333ACC:
    // 0x80333ACC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333AD0: nop

    // 0x80333AD4: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x80333AD8: nop

    // 0x80333ADC: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80333AE0: sh          $t6, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r14;
    // 0x80333AE4: jal         0x8033124C
    // 0x80333AE8: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_6;
    // 0x80333AE8: nop

    after_6:
    // 0x80333AEC: jal         0x803311B4
    // 0x80333AF0: nop

    func_bagular2_803311B4(rdram, ctx);
        goto after_7;
    // 0x80333AF0: nop

    after_7:
    // 0x80333AF4: jal         0x80330894
    // 0x80333AF8: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_8;
    // 0x80333AF8: nop

    after_8:
    // 0x80333AFC: jal         0x80331064
    // 0x80333B00: nop

    func_bagular2_80331064(rdram, ctx);
        goto after_9;
    // 0x80333B00: nop

    after_9:
L_80333B04:
    // 0x80333B04: b           L_80333B0C
    // 0x80333B08: nop

        goto L_80333B0C;
    // 0x80333B08: nop

L_80333B0C:
    // 0x80333B0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B10: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80333B14: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80333B18: jr          $ra
    // 0x80333B1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80333B1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_bagular2_803317E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803317E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803317E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803317EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803317F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803317F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803317F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803317FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331800: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331804: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331808: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033180C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331810: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331814: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331818: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033181C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80331820: nop

    // 0x80331824: bne         $t0, $zero, L_80331A40
    if (ctx->r8 != 0) {
        // 0x80331828: nop
    
            goto L_80331A40;
    }
    // 0x80331828: nop

    // 0x8033182C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80331830: nop

    // 0x80331834: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x80331838: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033183C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331840: jal         0x80069E60
    // 0x80331844: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80331844: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x80331848: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033184C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331850: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x80331854: nop

    // 0x80331858: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033185C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331860: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331864: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331868: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033186C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331870: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80331874: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331878: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033187C: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80331880: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331884: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80331888: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033188C: jal         0x8001ABF4
    // 0x80331890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331894: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331898: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033189C: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x803318A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803318A4: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x803318A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803318AC: jal         0x8001ABF4
    // 0x803318B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803318B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803318B4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803318B8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803318BC: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x803318C0: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x803318C4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x803318C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803318CC: jal         0x8001ABF4
    // 0x803318D0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803318D0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x803318D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803318D8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803318DC: nop

    // 0x803318E0: swc1        $f4, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f4.u32l;
    // 0x803318E4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803318E8: nop

    // 0x803318EC: lwc1        $f6, 0x2C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x803318F0: nop

    // 0x803318F4: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
    // 0x803318F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803318FC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331900: nop

    // 0x80331904: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x80331908: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033190C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331910: lh          $t0, 0xC0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC0);
    // 0x80331914: nop

    // 0x80331918: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033191C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331920: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331924: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331928: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033192C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331930: lh          $t2, 0x41F4($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X41F4);
    // 0x80331934: nop

    // 0x80331938: beq         $t2, $zero, L_80331998
    if (ctx->r10 == 0) {
        // 0x8033193C: nop
    
            goto L_80331998;
    }
    // 0x8033193C: nop

    // 0x80331940: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331944: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331948: lh          $t5, 0xC0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XC0);
    // 0x8033194C: addiu       $t3, $zero, 0x63
    ctx->r11 = ADD32(0, 0X63);
    // 0x80331950: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331954: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331958: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033195C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331960: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331964: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331968: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x8033196C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80331970: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331974: lh          $t8, 0xC0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC0);
    // 0x80331978: nop

    // 0x8033197C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331980: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331984: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331988: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033198C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331990: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331994: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331998:
    // 0x80331998: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033199C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803319A0: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803319A4: nop

    // 0x803319A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803319AC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803319B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803319B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803319B8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803319BC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803319C0: lh          $t4, 0x41F4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F4);
    // 0x803319C4: nop

    // 0x803319C8: beq         $t4, $zero, L_80331A28
    if (ctx->r12 == 0) {
        // 0x803319CC: nop
    
            goto L_80331A28;
    }
    // 0x803319CC: nop

    // 0x803319D0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803319D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319D8: lh          $t6, 0xC2($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XC2);
    // 0x803319DC: addiu       $t5, $zero, 0x63
    ctx->r13 = ADD32(0, 0X63);
    // 0x803319E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803319E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803319E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803319EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803319F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803319F4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803319F8: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x803319FC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A04: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80331A08: nop

    // 0x80331A0C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331A10: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331A14: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331A18: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331A1C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331A20: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331A24: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331A28:
    // 0x80331A28: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A2C: addiu       $t1, $zero, 0x63
    ctx->r9 = ADD32(0, 0X63);
    // 0x80331A30: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80331A34: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A38: b           L_80331CD4
    // 0x80331A3C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_80331CD4;
    // 0x80331A3C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80331A40:
    // 0x80331A40: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80331A44: lw          $t3, 0x7A64($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A64);
    // 0x80331A48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331A4C: bne         $t3, $at, L_80331CD4
    if (ctx->r11 != ctx->r1) {
        // 0x80331A50: nop
    
            goto L_80331CD4;
    }
    // 0x80331A50: nop

    // 0x80331A54: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A58: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x80331A5C: sh          $t6, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r14;
    // 0x80331A60: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A68: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80331A6C: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x80331A70: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331A74: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331A78: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331A7C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331A80: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331A84: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331A88: sh          $t7, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r15;
    // 0x80331A8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A90: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331A94: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80331A98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A9C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80331AA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331AA4: jal         0x8001ABF4
    // 0x80331AA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80331AA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80331AAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AB0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331AB4: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80331AB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331ABC: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80331AC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331AC4: jal         0x8001ABF4
    // 0x80331AC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x80331AC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80331ACC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80331AD0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331AD4: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x80331AD8: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x80331ADC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80331AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331AE4: jal         0x8001ABF4
    // 0x80331AE8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x80331AE8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x80331AEC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331AF0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331AF4: nop

    // 0x80331AF8: swc1        $f10, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f10.u32l;
    // 0x80331AFC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B00: nop

    // 0x80331B04: lwc1        $f16, 0x2C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80331B08: nop

    // 0x80331B0C: swc1        $f16, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f16.u32l;
    // 0x80331B10: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331B14: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B18: nop

    // 0x80331B1C: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
    // 0x80331B20: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B24: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80331B28: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80331B2C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B30: nop

    // 0x80331B34: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80331B38: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B3C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331B40: lh          $t7, 0xC0($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XC0);
    // 0x80331B44: nop

    // 0x80331B48: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80331B4C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80331B50: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331B54: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80331B58: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331B5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331B60: lh          $t1, 0x41F4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F4);
    // 0x80331B64: nop

    // 0x80331B68: beq         $t1, $zero, L_80331BC8
    if (ctx->r9 == 0) {
        // 0x80331B6C: nop
    
            goto L_80331BC8;
    }
    // 0x80331B6C: nop

    // 0x80331B70: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331B78: lh          $t3, 0xC0($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XC0);
    // 0x80331B7C: addiu       $t2, $zero, 0x63
    ctx->r10 = ADD32(0, 0X63);
    // 0x80331B80: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80331B84: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x80331B88: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331B8C: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x80331B90: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331B94: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331B98: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80331B9C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331BA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331BA4: lh          $t8, 0xC0($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XC0);
    // 0x80331BA8: nop

    // 0x80331BAC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331BB0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331BB4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331BB8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331BBC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331BC0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331BC4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331BC8:
    // 0x80331BC8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80331BCC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331BD0: lh          $t0, 0xC2($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XC2);
    // 0x80331BD4: nop

    // 0x80331BD8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331BDC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331BE0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331BE4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331BE8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331BEC: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80331BF0: lh          $t4, 0x41F4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F4);
    // 0x80331BF4: nop

    // 0x80331BF8: beq         $t4, $zero, L_80331C58
    if (ctx->r12 == 0) {
        // 0x80331BFC: nop
    
            goto L_80331C58;
    }
    // 0x80331BFC: nop

    // 0x80331C00: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C08: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80331C0C: addiu       $t3, $zero, 0x63
    ctx->r11 = ADD32(0, 0X63);
    // 0x80331C10: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80331C14: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80331C18: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331C1C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80331C20: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331C24: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331C28: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80331C2C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C34: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80331C38: nop

    // 0x80331C3C: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80331C40: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80331C44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331C48: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80331C4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331C50: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331C54: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331C58:
    // 0x80331C58: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C5C: nop

    // 0x80331C60: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x80331C64: nop

    // 0x80331C68: beq         $t1, $zero, L_80331C9C
    if (ctx->r9 == 0) {
        // 0x80331C6C: nop
    
            goto L_80331C9C;
    }
    // 0x80331C6C: nop

    // 0x80331C70: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C74: nop

    // 0x80331C78: sh          $zero, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = 0;
    // 0x80331C7C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C80: nop

    // 0x80331C84: lh          $a0, 0xAC($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XAC);
    // 0x80331C88: jal         0x8002B114
    // 0x80331C8C: nop

    func_8002B114(rdram, ctx);
        goto after_7;
    // 0x80331C8C: nop

    after_7:
    // 0x80331C90: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C94: nop

    // 0x80331C98: sh          $zero, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = 0;
L_80331C9C:
    // 0x80331C9C: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
L_80331CA0:
    // 0x80331CA0: lh          $t3, 0x1A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1A);
    // 0x80331CA4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331CA8: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x80331CAC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331CB0: sh          $zero, 0x44D0($at)
    MEM_H(0X44D0, ctx->r1) = 0;
    // 0x80331CB4: lh          $t8, 0x1A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1A);
    // 0x80331CB8: nop

    // 0x80331CBC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80331CC0: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x80331CC4: sra         $t0, $t7, 16
    ctx->r8 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80331CC8: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x80331CCC: bne         $at, $zero, L_80331CA0
    if (ctx->r1 != 0) {
        // 0x80331CD0: sh          $t9, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r25;
            goto L_80331CA0;
    }
    // 0x80331CD0: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
L_80331CD4:
    // 0x80331CD4: jal         0x8033124C
    // 0x80331CD8: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_8;
    // 0x80331CD8: nop

    after_8:
    // 0x80331CDC: jal         0x803311B4
    // 0x80331CE0: nop

    func_bagular2_803311B4(rdram, ctx);
        goto after_9;
    // 0x80331CE0: nop

    after_9:
    // 0x80331CE4: jal         0x80330894
    // 0x80331CE8: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_10;
    // 0x80331CE8: nop

    after_10:
    // 0x80331CEC: jal         0x80331064
    // 0x80331CF0: nop

    func_bagular2_80331064(rdram, ctx);
        goto after_11;
    // 0x80331CF0: nop

    after_11:
    // 0x80331CF4: b           L_80331CFC
    // 0x80331CF8: nop

        goto L_80331CFC;
    // 0x80331CF8: nop

L_80331CFC:
    // 0x80331CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331D00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331D04: jr          $ra
    // 0x80331D08: nop

    return;
    // 0x80331D08: nop

;}
RECOMP_FUNC void func_bagular2_80330894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330894: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80330898: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033089C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803308A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803308A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803308A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803308AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803308B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803308B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803308B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803308BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803308C0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803308C4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x803308C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803308CC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803308D0: nop

    // 0x803308D4: beq         $t1, $at, L_80330A80
    if (ctx->r9 == ctx->r1) {
        // 0x803308D8: nop
    
            goto L_80330A80;
    }
    // 0x803308D8: nop

    // 0x803308DC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803308E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308E4: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x803308E8: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x803308EC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803308F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803308F4: lwc1        $f6, 0x24($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X24);
    // 0x803308F8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803308FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330900: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330904: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330908: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033090C: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80330910: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80330914: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330918: lh          $t6, 0xE8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE8);
    // 0x8033091C: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80330920: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330924: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330928: lwc1        $f16, 0x28($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X28);
    // 0x8033092C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330930: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330934: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330938: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033093C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330940: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80330944: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80330948: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033094C: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80330950: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80330954: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330958: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033095C: lwc1        $f6, 0x2C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80330960: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330964: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330968: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033096C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330970: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330974: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80330978: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8033097C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330980: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x80330984: lwc1        $f10, 0x18($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X18);
    // 0x80330988: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033098C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330990: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330994: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330998: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033099C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803309A0: swc1        $f10, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f10.u32l;
    // 0x803309A4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x803309A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309AC: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x803309B0: lwc1        $f16, 0x1C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803309B4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803309B8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803309BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803309C0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803309C4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803309C8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803309CC: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x803309D0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x803309D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309D8: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x803309DC: lwc1        $f18, 0x20($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X20);
    // 0x803309E0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803309E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803309E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803309EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803309F0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803309F4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803309F8: swc1        $f18, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f18.u32l;
    // 0x803309FC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80330A00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A04: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80330A08: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80330A0C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330A10: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330A14: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330A18: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330A1C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330A20: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330A24: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80330A28: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80330A2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A30: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x80330A34: lwc1        $f6, 0x10($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X10);
    // 0x80330A38: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330A3C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330A40: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330A44: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330A48: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330A4C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330A50: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x80330A54: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80330A58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A5C: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x80330A60: lwc1        $f8, 0x14($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X14);
    // 0x80330A64: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330A68: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330A6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330A70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330A74: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330A78: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330A7C: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_80330A80:
    // 0x80330A80: b           L_80330A88
    // 0x80330A84: nop

        goto L_80330A88;
    // 0x80330A84: nop

L_80330A88:
    // 0x80330A88: jr          $ra
    // 0x80330A8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80330A8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_bagular2_80330F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330F08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330F0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330F10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330F14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330F18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330F1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330F20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330F28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330F30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330F34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330F38: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330F3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330F40: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F44: nop

    // 0x80330F48: swc1        $f4, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f4.u32l;
    // 0x80330F4C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330F54: lh          $t2, 0xEA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XEA);
    // 0x80330F58: nop

    // 0x80330F5C: beq         $t2, $at, L_8033104C
    if (ctx->r10 == ctx->r1) {
        // 0x80330F60: nop
    
            goto L_8033104C;
    }
    // 0x80330F60: nop

    // 0x80330F64: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330F68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330F6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F74: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80330F78: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80330F7C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330F80: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330F84: jal         0x800295C0
    // 0x80330F88: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x80330F88: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80330F8C: beq         $v0, $zero, L_80330FA0
    if (ctx->r2 == 0) {
        // 0x80330F90: nop
    
            goto L_80330FA0;
    }
    // 0x80330F90: nop

    // 0x80330F94: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330F98: b           L_80330FAC
    // 0x80330F9C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
        goto L_80330FAC;
    // 0x80330F9C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
L_80330FA0:
    // 0x80330FA0: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330FA4: nop

    // 0x80330FA8: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
L_80330FAC:
    // 0x80330FAC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FB4: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x80330FB8: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80330FBC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330FC0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330FC4: lwc1        $f4, 0x24($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X24);
    // 0x80330FC8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330FCC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330FD0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330FD4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330FD8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330FDC: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330FE0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FE4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330FE8: lh          $t7, 0xEA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XEA);
    // 0x80330FEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330FF0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330FF4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330FF8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330FFC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331000: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331004: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80331008: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033100C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331010: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331014: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x80331018: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033101C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331020: lh          $t0, 0xEA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEA);
    // 0x80331024: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331028: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033102C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331030: lwc1        $f4, 0x2C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80331034: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331038: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033103C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80331040: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331044: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331048: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
L_8033104C:
    // 0x8033104C: b           L_80331054
    // 0x80331050: nop

        goto L_80331054;
    // 0x80331050: nop

L_80331054:
    // 0x80331054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331058: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033105C: jr          $ra
    // 0x80331060: nop

    return;
    // 0x80331060: nop

;}
RECOMP_FUNC void func_bagular2_80332718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332718: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033271C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332720: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332724: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332728: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033272C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332730: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332734: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332738: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033273C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332740: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332744: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332748: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033274C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332750: nop

    // 0x80332754: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332758: nop

    // 0x8033275C: bne         $t1, $zero, L_803327D8
    if (ctx->r9 != 0) {
        // 0x80332760: nop
    
            goto L_803327D8;
    }
    // 0x80332760: nop

    // 0x80332764: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332768: nop

    // 0x8033276C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332770: nop

    // 0x80332774: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332778: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033277C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332780: nop

    // 0x80332784: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332788: nop

    // 0x8033278C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332790: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332794: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80332798: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x8033279C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803327A0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803327A4: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x803327A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803327AC: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803327B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803327B4: jal         0x8001ABF4
    // 0x803327B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x803327B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803327BC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803327C0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803327C4: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x803327C8: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x803327CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803327D0: jal         0x8001ABF4
    // 0x803327D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803327D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_803327D8:
    // 0x803327D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803327DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803327E0: jal         0x8002A8B4
    // 0x803327E4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x803327E4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x803327E8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803327EC: nop

    // 0x803327F0: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x803327F4: nop

    // 0x803327F8: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x803327FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332800: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332804: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332808: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033280C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80332810: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x80332814: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332818: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033281C: jal         0x800295C0
    // 0x80332820: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x80332820: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80332824: beq         $v0, $zero, L_80332838
    if (ctx->r2 == 0) {
        // 0x80332828: nop
    
            goto L_80332838;
    }
    // 0x80332828: nop

    // 0x8033282C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332830: b           L_80332844
    // 0x80332834: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
        goto L_80332844;
    // 0x80332834: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_80332838:
    // 0x80332838: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033283C: nop

    // 0x80332840: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
L_80332844:
    // 0x80332844: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x80332848: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033284C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332850: nop

    // 0x80332854: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80332858: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8033285C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332860: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332864: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80332868: nop

    // 0x8033286C: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80332870: nop

    // 0x80332874: bc1f        L_803328B4
    if (!c1cs) {
        // 0x80332878: nop
    
            goto L_803328B4;
    }
    // 0x80332878: nop

    // 0x8033287C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332880: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332884: nop

    // 0x80332888: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
    // 0x8033288C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332890: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332894: nop

    // 0x80332898: swc1        $f18, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f18.u32l;
    // 0x8033289C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803328A0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x803328A4: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803328A8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803328AC: b           L_803328C8
    // 0x803328B0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_803328C8;
    // 0x803328B0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803328B4:
    // 0x803328B4: lui         $at, 0xC140
    ctx->r1 = S32(0XC140 << 16);
    // 0x803328B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803328BC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803328C0: nop

    // 0x803328C4: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
L_803328C8:
    // 0x803328C8: jal         0x8033124C
    // 0x803328CC: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_4;
    // 0x803328CC: nop

    after_4:
    // 0x803328D0: jal         0x80330894
    // 0x803328D4: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_5;
    // 0x803328D4: nop

    after_5:
    // 0x803328D8: jal         0x80330CD0
    // 0x803328DC: nop

    func_bagular2_80330CD0(rdram, ctx);
        goto after_6;
    // 0x803328DC: nop

    after_6:
    // 0x803328E0: b           L_803328E8
    // 0x803328E4: nop

        goto L_803328E8;
    // 0x803328E4: nop

L_803328E8:
    // 0x803328E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803328EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803328F0: jr          $ra
    // 0x803328F4: nop

    return;
    // 0x803328F4: nop

;}
RECOMP_FUNC void func_bagular2_80331E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E90: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331E94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331E98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331E9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331EA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331EA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331EA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331EAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331EB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331EB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331EB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331EBC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331EC0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331EC4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331EC8: nop

    // 0x80331ECC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331ED0: nop

    // 0x80331ED4: bne         $t1, $zero, L_80331FC0
    if (ctx->r9 != 0) {
        // 0x80331ED8: nop
    
            goto L_80331FC0;
    }
    // 0x80331ED8: nop

    // 0x80331EDC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331EE0: nop

    // 0x80331EE4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331EE8: nop

    // 0x80331EEC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331EF0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331EF4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331EF8: nop

    // 0x80331EFC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331F00: nop

    // 0x80331F04: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331F08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F0C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331F10: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80331F14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F18: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80331F1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F20: jal         0x8001ABF4
    // 0x80331F24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80331F24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80331F28: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331F2C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331F30: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80331F34: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x80331F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F3C: jal         0x8001ABF4
    // 0x80331F40: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331F40: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80331F44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331F48: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331F4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F54: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80331F58: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80331F5C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331F60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80331F64: jal         0x800295C0
    // 0x80331F68: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_2;
    // 0x80331F68: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80331F6C: beq         $v0, $zero, L_80331F84
    if (ctx->r2 == 0) {
        // 0x80331F70: nop
    
            goto L_80331F84;
    }
    // 0x80331F70: nop

    // 0x80331F74: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331F78: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331F7C: b           L_80331F94
    // 0x80331F80: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
        goto L_80331F94;
    // 0x80331F80: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
L_80331F84:
    // 0x80331F84: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80331F88: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331F8C: nop

    // 0x80331F90: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_80331F94:
    // 0x80331F94: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331F98: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80331F9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331FA0: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80331FA4: nop

    // 0x80331FA8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331FAC: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x80331FB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FB8: jal         0x803305C0
    // 0x80331FBC: nop

    func_bagular2_803305C0(rdram, ctx);
        goto after_3;
    // 0x80331FBC: nop

    after_3:
L_80331FC0:
    // 0x80331FC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FC8: jal         0x8002A8B4
    // 0x80331FCC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x80331FCC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_4:
    // 0x80331FD0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331FD4: nop

    // 0x80331FD8: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80331FDC: nop

    // 0x80331FE0: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
    // 0x80331FE4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331FE8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331FEC: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80331FF0: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80331FF4: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x80331FF8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80331FFC: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332000: addiu       $a1, $a1, 0x4410
    ctx->r5 = ADD32(ctx->r5, 0X4410);
    // 0x80332004: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80332008: jal         0x80027464
    // 0x8033200C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x8033200C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x80332010: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332014: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80332018: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033201C: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80332020: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332024: jal         0x8001ABF4
    // 0x80332028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x80332028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8033202C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332030: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80332034: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80332038: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8033203C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332040: jal         0x8001ABF4
    // 0x80332044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x80332044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80332048: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8033204C: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80332050: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332054: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332058: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033205C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332060: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332064: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80332068: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x8033206C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332070: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x80332074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332078: jal         0x8001ABF4
    // 0x8033207C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x8033207C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x80332080: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80332084: addiu       $t6, $t6, -0x4E70
    ctx->r14 = ADD32(ctx->r14, -0X4E70);
    // 0x80332088: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033208C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80332090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332098: jal         0x8001C0EC
    // 0x8033209C: addiu       $a3, $zero, 0x13D
    ctx->r7 = ADD32(0, 0X13D);
    func_8001C0EC(rdram, ctx);
        goto after_9;
    // 0x8033209C: addiu       $a3, $zero, 0x13D
    ctx->r7 = ADD32(0, 0X13D);
    after_9:
    // 0x803320A0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x803320A4: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x803320A8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803320AC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803320B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803320B4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803320B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803320BC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x803320C0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803320C4: addiu       $t8, $t8, -0x4CC8
    ctx->r24 = ADD32(ctx->r24, -0X4CC8);
    // 0x803320C8: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x803320CC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803320D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803320D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803320D8: jal         0x8001C0EC
    // 0x803320DC: addiu       $a3, $zero, 0x13E
    ctx->r7 = ADD32(0, 0X13E);
    func_8001C0EC(rdram, ctx);
        goto after_10;
    // 0x803320DC: addiu       $a3, $zero, 0x13E
    ctx->r7 = ADD32(0, 0X13E);
    after_10:
    // 0x803320E0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x803320E4: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x803320E8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803320EC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803320F0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803320F4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803320F8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803320FC: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80332100: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80332104: addiu       $t1, $t1, -0x4BF4
    ctx->r9 = ADD32(ctx->r9, -0X4BF4);
    // 0x80332108: lh          $a0, 0x423A($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423A);
    // 0x8033210C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80332110: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332118: jal         0x8001C0EC
    // 0x8033211C: addiu       $a3, $zero, 0x13F
    ctx->r7 = ADD32(0, 0X13F);
    func_8001C0EC(rdram, ctx);
        goto after_11;
    // 0x8033211C: addiu       $a3, $zero, 0x13F
    ctx->r7 = ADD32(0, 0X13F);
    after_11:
    // 0x80332120: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332124: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332128: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033212C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80332130: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80332134: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332138: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033213C: jal         0x800295C0
    // 0x80332140: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_12;
    // 0x80332140: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_12:
    // 0x80332144: beq         $v0, $zero, L_80332178
    if (ctx->r2 == 0) {
        // 0x80332148: nop
    
            goto L_80332178;
    }
    // 0x80332148: nop

    // 0x8033214C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80332150: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332154: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332158: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033215C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332160: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332164: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332168: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033216C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332170: b           L_803321A0
    // 0x80332174: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
        goto L_803321A0;
    // 0x80332174: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
L_80332178:
    // 0x80332178: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8033217C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332180: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332184: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332188: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033218C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332190: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332194: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332198: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033219C: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
L_803321A0:
    // 0x803321A0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x803321A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803321A8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803321AC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803321B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803321B4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803321B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803321BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803321C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803321C4: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x803321C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803321CC: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803321D0: nop

    // 0x803321D4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803321D8: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
    // 0x803321DC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x803321E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803321E4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803321E8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803321EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803321F0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803321F4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803321F8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803321FC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80332200: sh          $t0, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r8;
    // 0x80332204: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80332208: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033220C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332210: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332214: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332218: lwc1        $f18, 0x448C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X448C);
    // 0x8033221C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332220: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332224: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332228: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033222C: swc1        $f18, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f18.u32l;
    // 0x80332230: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80332234: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332238: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033223C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332240: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332244: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332248: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033224C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332250: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x80332254: sh          $t6, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r14;
    // 0x80332258: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8033225C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332260: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332264: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332268: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033226C: lwc1        $f4, 0x4490($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4490);
    // 0x80332270: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332274: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332278: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033227C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332280: swc1        $f4, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f4.u32l;
    // 0x80332284: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80332288: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033228C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80332290: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80332294: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332298: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x8033229C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803322A0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803322A4: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x803322A8: sh          $t1, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r9;
    // 0x803322AC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x803322B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803322B4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803322B8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803322BC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803322C0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803322C4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803322C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322CC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803322D0: swc1        $f6, 0x422C($at)
    MEM_W(0X422C, ctx->r1) = ctx->f6.u32l;
    // 0x803322D4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x803322D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803322E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803322E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803322E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803322EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803322F0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803322F4: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x803322F8: sh          $t5, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = ctx->r13;
    // 0x803322FC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80332300: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80332304: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332308: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033230C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332310: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332314: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80332318: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033231C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332320: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332324: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x80332328: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8033232C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332330: nop

    // 0x80332334: sh          $t1, 0xC0($t3)
    MEM_H(0XC0, ctx->r11) = ctx->r9;
    // 0x80332338: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033233C: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80332340: sw          $t4, 0xC4($t2)
    MEM_W(0XC4, ctx->r10) = ctx->r12;
    // 0x80332344: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80332348: jal         0x803305C0
    // 0x8033234C: nop

    func_bagular2_803305C0(rdram, ctx);
        goto after_13;
    // 0x8033234C: nop

    after_13:
    // 0x80332350: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332354: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332358: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033235C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80332360: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80332364: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80332368: lwc1        $f10, 0x1C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8033236C: addiu       $a1, $a1, 0x4410
    ctx->r5 = ADD32(ctx->r5, 0X4410);
    // 0x80332370: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80332374: jal         0x80027464
    // 0x80332378: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_14;
    // 0x80332378: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x8033237C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332380: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80332384: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332388: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x8033238C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332390: jal         0x8001ABF4
    // 0x80332394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_15;
    // 0x80332394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x80332398: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033239C: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x803323A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803323A4: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803323A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803323AC: jal         0x8001ABF4
    // 0x803323B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_16;
    // 0x803323B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x803323B4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x803323B8: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x803323BC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803323C0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803323C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803323C8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803323CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803323D0: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x803323D4: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x803323D8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803323DC: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x803323E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803323E4: jal         0x8001ABF4
    // 0x803323E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_17;
    // 0x803323E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_17:
    // 0x803323EC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803323F0: addiu       $t9, $t9, -0x4E70
    ctx->r25 = ADD32(ctx->r25, -0X4E70);
    // 0x803323F4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803323F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803323FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332400: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332404: jal         0x8001C0EC
    // 0x80332408: addiu       $a3, $zero, 0x13D
    ctx->r7 = ADD32(0, 0X13D);
    func_8001C0EC(rdram, ctx);
        goto after_18;
    // 0x80332408: addiu       $a3, $zero, 0x13D
    ctx->r7 = ADD32(0, 0X13D);
    after_18:
    // 0x8033240C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80332410: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80332414: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80332418: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8033241C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332420: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80332424: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332428: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x8033242C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80332430: addiu       $t1, $t1, -0x4CC8
    ctx->r9 = ADD32(ctx->r9, -0X4CC8);
    // 0x80332434: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x80332438: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8033243C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332440: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332444: jal         0x8001C0EC
    // 0x80332448: addiu       $a3, $zero, 0x13E
    ctx->r7 = ADD32(0, 0X13E);
    func_8001C0EC(rdram, ctx);
        goto after_19;
    // 0x80332448: addiu       $a3, $zero, 0x13E
    ctx->r7 = ADD32(0, 0X13E);
    after_19:
    // 0x8033244C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80332450: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80332454: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332458: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033245C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332460: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332464: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332468: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x8033246C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80332470: addiu       $t2, $t2, -0x4BF4
    ctx->r10 = ADD32(ctx->r10, -0X4BF4);
    // 0x80332474: lh          $a0, 0x423A($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423A);
    // 0x80332478: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033247C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332484: jal         0x8001C0EC
    // 0x80332488: addiu       $a3, $zero, 0x13F
    ctx->r7 = ADD32(0, 0X13F);
    func_8001C0EC(rdram, ctx);
        goto after_20;
    // 0x80332488: addiu       $a3, $zero, 0x13F
    ctx->r7 = ADD32(0, 0X13F);
    after_20:
    // 0x8033248C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332490: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332494: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80332498: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033249C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x803324A0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803324A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803324A8: jal         0x800295C0
    // 0x803324AC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_21;
    // 0x803324AC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_21:
    // 0x803324B0: beq         $v0, $zero, L_803324E4
    if (ctx->r2 == 0) {
        // 0x803324B4: nop
    
            goto L_803324E4;
    }
    // 0x803324B4: nop

    // 0x803324B8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x803324BC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803324C0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803324C4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803324C8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803324CC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803324D0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803324D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803324D8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803324DC: b           L_8033250C
    // 0x803324E0: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
        goto L_8033250C;
    // 0x803324E0: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
L_803324E4:
    // 0x803324E4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x803324E8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803324EC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x803324F0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803324F4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803324F8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803324FC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332500: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332504: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332508: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
L_8033250C:
    // 0x8033250C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80332510: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80332514: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80332518: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8033251C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332520: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80332524: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332528: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033252C: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80332530: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80332534: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332538: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033253C: nop

    // 0x80332540: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80332544: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
    // 0x80332548: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8033254C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332550: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332554: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332558: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033255C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332560: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332564: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332568: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8033256C: sh          $t4, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r12;
    // 0x80332570: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80332574: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332578: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033257C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332580: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332584: lwc1        $f18, 0x4494($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4494);
    // 0x80332588: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033258C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332590: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332594: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332598: swc1        $f18, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f18.u32l;
    // 0x8033259C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803325A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803325A4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x803325A8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x803325AC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803325B0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x803325B4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803325B8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803325BC: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x803325C0: sh          $t9, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r25;
    // 0x803325C4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x803325C8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803325CC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803325D0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803325D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803325D8: lwc1        $f4, 0x4498($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4498);
    // 0x803325DC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803325E0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803325E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803325E8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803325EC: swc1        $f4, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f4.u32l;
    // 0x803325F0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x803325F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803325F8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x803325FC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80332600: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332604: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80332608: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033260C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332610: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80332614: sh          $t2, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r10;
    // 0x80332618: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8033261C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332620: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332624: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332628: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033262C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332630: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332634: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332638: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033263C: swc1        $f6, 0x422C($at)
    MEM_W(0X422C, ctx->r1) = ctx->f6.u32l;
    // 0x80332640: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80332644: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332648: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033264C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332650: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332654: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332658: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033265C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332660: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x80332664: sh          $t8, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = ctx->r24;
    // 0x80332668: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8033266C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80332670: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332674: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332678: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033267C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332680: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80332684: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332688: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033268C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332690: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x80332694: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80332698: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033269C: nop

    // 0x803326A0: sh          $t2, 0xC2($t6)
    MEM_H(0XC2, ctx->r14) = ctx->r10;
    // 0x803326A4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803326A8: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x803326AC: sh          $t5, 0xB4($t7)
    MEM_H(0XB4, ctx->r15) = ctx->r13;
    // 0x803326B0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803326B4: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x803326B8: sw          $t9, 0xC4($t8)
    MEM_W(0XC4, ctx->r24) = ctx->r25;
    // 0x803326BC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803326C0: jal         0x803305C0
    // 0x803326C4: nop

    func_bagular2_803305C0(rdram, ctx);
        goto after_22;
    // 0x803326C4: nop

    after_22:
    // 0x803326C8: jal         0x8033124C
    // 0x803326CC: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_23;
    // 0x803326CC: nop

    after_23:
    // 0x803326D0: jal         0x803311B4
    // 0x803326D4: nop

    func_bagular2_803311B4(rdram, ctx);
        goto after_24;
    // 0x803326D4: nop

    after_24:
    // 0x803326D8: jal         0x80330894
    // 0x803326DC: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_25;
    // 0x803326DC: nop

    after_25:
    // 0x803326E0: jal         0x80330F08
    // 0x803326E4: nop

    func_bagular2_80330F08(rdram, ctx);
        goto after_26;
    // 0x803326E4: nop

    after_26:
    // 0x803326E8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803326EC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x803326F0: sh          $t0, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r8;
    // 0x803326F4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803326F8: nop

    // 0x803326FC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80332700: b           L_80332708
    // 0x80332704: nop

        goto L_80332708;
    // 0x80332704: nop

L_80332708:
    // 0x80332708: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033270C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80332710: jr          $ra
    // 0x80332714: nop

    return;
    // 0x80332714: nop

;}
RECOMP_FUNC void func_bagular2_80331D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331D14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331D1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331D24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331D2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331D34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331D38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331D3C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331D40: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D44: nop

    // 0x80331D48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331D4C: nop

    // 0x80331D50: bne         $t1, $zero, L_80331D84
    if (ctx->r9 != 0) {
        // 0x80331D54: nop
    
            goto L_80331D84;
    }
    // 0x80331D54: nop

    // 0x80331D58: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D5C: nop

    // 0x80331D60: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331D64: nop

    // 0x80331D68: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331D6C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331D70: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D74: nop

    // 0x80331D78: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331D7C: nop

    // 0x80331D80: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_80331D84:
    // 0x80331D84: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331D8C: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x80331D90: nop

    // 0x80331D94: bne         $t8, $at, L_80331DA8
    if (ctx->r24 != ctx->r1) {
        // 0x80331D98: nop
    
            goto L_80331DA8;
    }
    // 0x80331D98: nop

    // 0x80331D9C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331DA0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80331DA4: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
L_80331DA8:
    // 0x80331DA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DB0: jal         0x8002A8B4
    // 0x80331DB4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x80331DB4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_0:
    // 0x80331DB8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80331DBC: nop

    // 0x80331DC0: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80331DC4: nop

    // 0x80331DC8: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
    // 0x80331DCC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80331DD0: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80331DD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331DD8: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80331DDC: nop

    // 0x80331DE0: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80331DE4: nop

    // 0x80331DE8: bc1f        L_80331E4C
    if (!c1cs) {
        // 0x80331DEC: nop
    
            goto L_80331E4C;
    }
    // 0x80331DEC: nop

    // 0x80331DF0: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80331DF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331DF8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331DFC: nop

    // 0x80331E00: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
    // 0x80331E04: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331E08: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331E0C: nop

    // 0x80331E10: swc1        $f16, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f16.u32l;
    // 0x80331E14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E18: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331E1C: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80331E20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E24: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80331E28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E2C: jal         0x8001ABF4
    // 0x80331E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331E34: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331E38: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80331E3C: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80331E40: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80331E44: b           L_80331E60
    // 0x80331E48: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_80331E60;
    // 0x80331E48: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80331E4C:
    // 0x80331E4C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80331E50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331E54: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331E58: nop

    // 0x80331E5C: swc1        $f18, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f18.u32l;
L_80331E60:
    // 0x80331E60: jal         0x8033124C
    // 0x80331E64: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_2;
    // 0x80331E64: nop

    after_2:
    // 0x80331E68: jal         0x80330894
    // 0x80331E6C: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_3;
    // 0x80331E6C: nop

    after_3:
    // 0x80331E70: jal         0x80330A90
    // 0x80331E74: nop

    func_bagular2_80330A90(rdram, ctx);
        goto after_4;
    // 0x80331E74: nop

    after_4:
    // 0x80331E78: b           L_80331E80
    // 0x80331E7C: nop

        goto L_80331E80;
    // 0x80331E7C: nop

L_80331E80:
    // 0x80331E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331E84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331E88: jr          $ra
    // 0x80331E8C: nop

    return;
    // 0x80331E8C: nop

;}
RECOMP_FUNC void func_bagular2_80332C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332C58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332C5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332C60: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332C64: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80332C68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332C6C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332C70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332C74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332C78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332C7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332C80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332C84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332C88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332C8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332C90: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332C94: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C98: nop

    // 0x80332C9C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332CA0: nop

    // 0x80332CA4: bne         $t1, $zero, L_80332E84
    if (ctx->r9 != 0) {
        // 0x80332CA8: nop
    
            goto L_80332E84;
    }
    // 0x80332CA8: nop

    // 0x80332CAC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CB0: nop

    // 0x80332CB4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332CB8: nop

    // 0x80332CBC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332CC0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332CC4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CC8: nop

    // 0x80332CCC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332CD0: nop

    // 0x80332CD4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332CD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332CDC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CE0: nop

    // 0x80332CE4: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80332CE8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332CEC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CF0: nop

    // 0x80332CF4: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
    // 0x80332CF8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CFC: nop

    // 0x80332D00: lwc1        $f20, 0x28($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80332D04: nop

    // 0x80332D08: swc1        $f20, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f20.u32l;
    // 0x80332D0C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D10: nop

    // 0x80332D14: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x80332D18: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D1C: addiu       $t1, $zero, 0xB4
    ctx->r9 = ADD32(0, 0XB4);
    // 0x80332D20: sh          $t1, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r9;
    // 0x80332D24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D28: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332D2C: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80332D30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D34: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80332D38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332D3C: jal         0x8001ABF4
    // 0x80332D40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80332D40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80332D44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D48: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332D4C: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x80332D50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D54: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80332D58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D5C: jal         0x8001ABF4
    // 0x80332D60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332D60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332D64: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D68: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332D6C: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x80332D70: lh          $a0, 0xE8($t4)
    ctx->r4 = MEM_H(ctx->r12, 0XE8);
    // 0x80332D74: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80332D78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D7C: jal         0x8001ABF4
    // 0x80332D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80332D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80332D84: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D88: nop

    // 0x80332D8C: lh          $t6, 0xAC($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAC);
    // 0x80332D90: nop

    // 0x80332D94: beq         $t6, $zero, L_80332DC8
    if (ctx->r14 == 0) {
        // 0x80332D98: nop
    
            goto L_80332DC8;
    }
    // 0x80332D98: nop

    // 0x80332D9C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DA0: nop

    // 0x80332DA4: sh          $zero, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = 0;
    // 0x80332DA8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DAC: nop

    // 0x80332DB0: lh          $a0, 0xAC($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XAC);
    // 0x80332DB4: jal         0x8002B114
    // 0x80332DB8: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80332DB8: nop

    after_3:
    // 0x80332DBC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DC0: nop

    // 0x80332DC4: sh          $zero, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = 0;
L_80332DC8:
    // 0x80332DC8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DCC: lui         $at, 0xC4E1
    ctx->r1 = S32(0XC4E1 << 16);
    // 0x80332DD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332DD4: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80332DD8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332DDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332DE0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80332DE4: nop

    // 0x80332DE8: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80332DEC: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x80332DF0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DF4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332DF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332DFC: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332E00: nop

    // 0x80332E04: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80332E08: nop

    // 0x80332E0C: bc1f        L_80332E28
    if (!c1cs) {
        // 0x80332E10: nop
    
            goto L_80332E28;
    }
    // 0x80332E10: nop

    // 0x80332E14: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x80332E18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332E1C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E20: b           L_80332E3C
    // 0x80332E24: swc1        $f10, 0xE0($t1)
    MEM_W(0XE0, ctx->r9) = ctx->f10.u32l;
        goto L_80332E3C;
    // 0x80332E24: swc1        $f10, 0xE0($t1)
    MEM_W(0XE0, ctx->r9) = ctx->f10.u32l;
L_80332E28:
    // 0x80332E28: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80332E2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332E30: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E34: nop

    // 0x80332E38: swc1        $f16, 0xE0($t3)
    MEM_W(0XE0, ctx->r11) = ctx->f16.u32l;
L_80332E3C:
    // 0x80332E3C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332E44: lh          $t2, 0xEA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XEA);
    // 0x80332E48: nop

    // 0x80332E4C: beq         $t2, $at, L_80332E74
    if (ctx->r10 == ctx->r1) {
        // 0x80332E50: nop
    
            goto L_80332E74;
    }
    // 0x80332E50: nop

    // 0x80332E54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E5C: jal         0x800281A4
    // 0x80332E60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_4;
    // 0x80332E60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80332E64: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80332E68: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80332E6C: jal         0x8002B114
    // 0x80332E70: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x80332E70: nop

    after_5:
L_80332E74:
    // 0x80332E74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80332E78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332E7C: jal         0x80069E60
    // 0x80332E80: addiu       $a2, $zero, 0xB3
    ctx->r6 = ADD32(0, 0XB3);
    func_80069E60(rdram, ctx);
        goto after_6;
    // 0x80332E80: addiu       $a2, $zero, 0xB3
    ctx->r6 = ADD32(0, 0XB3);
    after_6:
L_80332E84:
    // 0x80332E84: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E88: nop

    // 0x80332E8C: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80332E90: nop

    // 0x80332E94: bne         $t5, $zero, L_80332EEC
    if (ctx->r13 != 0) {
        // 0x80332E98: nop
    
            goto L_80332EEC;
    }
    // 0x80332E98: nop

    // 0x80332E9C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332EA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332EA4: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x80332EA8: nop

    // 0x80332EAC: beq         $t8, $at, L_80332ED4
    if (ctx->r24 == ctx->r1) {
        // 0x80332EB0: nop
    
            goto L_80332ED4;
    }
    // 0x80332EB0: nop

    // 0x80332EB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EBC: jal         0x800281A4
    // 0x80332EC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_7;
    // 0x80332EC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80332EC4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80332EC8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80332ECC: jal         0x8002B114
    // 0x80332ED0: nop

    func_8002B114(rdram, ctx);
        goto after_8;
    // 0x80332ED0: nop

    after_8:
L_80332ED4:
    // 0x80332ED4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332ED8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EDC: jal         0x8002B114
    // 0x80332EE0: nop

    func_8002B114(rdram, ctx);
        goto after_9;
    // 0x80332EE0: nop

    after_9:
    // 0x80332EE4: b           L_80333058
    // 0x80332EE8: nop

        goto L_80333058;
    // 0x80332EE8: nop

L_80332EEC:
    // 0x80332EEC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332EF0: nop

    // 0x80332EF4: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332EF8: lwc1        $f14, 0xE0($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0XE0);
    // 0x80332EFC: jal         0x80015538
    // 0x80332F00: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x80332F00: nop

    after_10:
    // 0x80332F04: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F08: nop

    // 0x80332F0C: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x80332F10: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332F18: lwc1        $f18, 0xE0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0XE0);
    // 0x80332F1C: nop

    // 0x80332F20: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80332F24: nop

    // 0x80332F28: bc1f        L_80332F70
    if (!c1cs) {
        // 0x80332F2C: nop
    
            goto L_80332F70;
    }
    // 0x80332F2C: nop

    // 0x80332F30: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F34: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332F38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332F3C: lwc1        $f6, 0x1C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332F40: nop

    // 0x80332F44: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80332F48: nop

    // 0x80332F4C: bc1f        L_80332F68
    if (!c1cs) {
        // 0x80332F50: nop
    
            goto L_80332F68;
    }
    // 0x80332F50: nop

    // 0x80332F54: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332F58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332F5C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F60: nop

    // 0x80332F64: swc1        $f10, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f10.u32l;
L_80332F68:
    // 0x80332F68: b           L_80332FA8
    // 0x80332F6C: nop

        goto L_80332FA8;
    // 0x80332F6C: nop

L_80332F70:
    // 0x80332F70: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F74: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332F78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332F7C: lwc1        $f16, 0x1C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332F80: nop

    // 0x80332F84: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80332F88: nop

    // 0x80332F8C: bc1f        L_80332FA8
    if (!c1cs) {
        // 0x80332F90: nop
    
            goto L_80332FA8;
    }
    // 0x80332F90: nop

    // 0x80332F94: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332F98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332F9C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FA0: nop

    // 0x80332FA4: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
L_80332FA8:
    // 0x80332FA8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FAC: nop

    // 0x80332FB0: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80332FB4: nop

    // 0x80332FB8: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80332FBC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FC0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332FC4: lwc1        $f8, 0xC($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80332FC8: lwc1        $f17, 0x44A0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X44A0);
    // 0x80332FCC: lwc1        $f16, 0x44A4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X44A4);
    // 0x80332FD0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80332FD4: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80332FD8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80332FDC: swc1        $f4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f4.u32l;
    // 0x80332FE0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FE4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332FE8: lwc1        $f6, 0x10($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X10);
    // 0x80332FEC: lwc1        $f11, 0x44A8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X44A8);
    // 0x80332FF0: lwc1        $f10, 0x44AC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X44AC);
    // 0x80332FF4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80332FF8: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80332FFC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80333000: swc1        $f18, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f18.u32l;
    // 0x80333004: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333008: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033300C: lwc1        $f4, 0x14($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X14);
    // 0x80333010: lwc1        $f9, 0x44B0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X44B0);
    // 0x80333014: lwc1        $f8, 0x44B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X44B4);
    // 0x80333018: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033301C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80333020: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80333024: swc1        $f16, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f16.u32l;
    // 0x80333028: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033302C: nop

    // 0x80333030: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80333034: nop

    // 0x80333038: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8033303C: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
    // 0x80333040: jal         0x8033124C
    // 0x80333044: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_11;
    // 0x80333044: nop

    after_11:
    // 0x80333048: jal         0x803311B4
    // 0x8033304C: nop

    func_bagular2_803311B4(rdram, ctx);
        goto after_12;
    // 0x8033304C: nop

    after_12:
    // 0x80333050: jal         0x80330894
    // 0x80333054: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_13;
    // 0x80333054: nop

    after_13:
L_80333058:
    // 0x80333058: b           L_80333060
    // 0x8033305C: nop

        goto L_80333060;
    // 0x8033305C: nop

L_80333060:
    // 0x80333060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333064: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80333068: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8033306C: jr          $ra
    // 0x80333070: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80333070: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
