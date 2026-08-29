#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80330788_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330788: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033078C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330790: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330794: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330798: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033079C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803307A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803307A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803307B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803307B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803307B8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803307BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803307C0: nop

    // 0x803307C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803307C8: nop

    // 0x803307CC: bne         $t1, $zero, L_80330844
    if (ctx->r9 != 0) {
        // 0x803307D0: nop
    
            goto L_80330844;
    }
    // 0x803307D0: nop

    // 0x803307D4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803307D8: nop

    // 0x803307DC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803307E0: nop

    // 0x803307E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803307E8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803307EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803307F0: nop

    // 0x803307F4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803307F8: nop

    // 0x803307FC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330800: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80330804: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330808: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033080C: nop

    // 0x80330810: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80330814: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330818: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033081C: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x80330820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330824: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80330828: addiu       $t0, $t0, -0x5DF0
    ctx->r8 = ADD32(ctx->r8, -0X5DF0);
    // 0x8033082C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330830: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80330834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330838: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8033083C: jal         0x8001C0EC
    // 0x80330840: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330840: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_80330844:
    // 0x80330844: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330848: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033084C: jal         0x8002A8B4
    // 0x80330850: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330850: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_1:
    // 0x80330854: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330858: nop

    // 0x8033085C: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80330860: nop

    // 0x80330864: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
    // 0x80330868: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033086C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330870: jal         0x80029C40
    // 0x80330874: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80330874: nop

    after_2:
    // 0x80330878: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033087C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330880: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330884: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033088C: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x80330890: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330894: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80330898: jal         0x80029018
    // 0x8033089C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x8033089C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x803308A0: beq         $v0, $zero, L_803308E8
    if (ctx->r2 == 0) {
        // 0x803308A4: nop
    
            goto L_803308E8;
    }
    // 0x803308A4: nop

    // 0x803308A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803308AC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803308B0: nop

    // 0x803308B4: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
    // 0x803308B8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803308BC: nop

    // 0x803308C0: lwc1        $f18, 0x2C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x803308C4: nop

    // 0x803308C8: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
    // 0x803308CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803308D0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803308D4: nop

    // 0x803308D8: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x803308DC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803308E0: nop

    // 0x803308E4: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_803308E8:
    // 0x803308E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803308EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803308F0: jal         0x8001B4AC
    // 0x803308F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803308F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803308F8: beq         $v0, $zero, L_80330988
    if (ctx->r2 == 0) {
        // 0x803308FC: nop
    
            goto L_80330988;
    }
    // 0x803308FC: nop

    // 0x80330900: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330904: nop

    // 0x80330908: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x8033090C: nop

    // 0x80330910: bne         $t7, $zero, L_80330964
    if (ctx->r15 != 0) {
        // 0x80330914: nop
    
            goto L_80330964;
    }
    // 0x80330914: nop

    // 0x80330918: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033091C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80330920: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330924: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330928: nop

    // 0x8033092C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80330930: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330934: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330938: nop

    // 0x8033093C: swc1        $f6, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f6.u32l;
    // 0x80330940: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330944: nop

    // 0x80330948: lwc1        $f8, 0x2C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x8033094C: nop

    // 0x80330950: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
    // 0x80330954: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330958: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033095C: b           L_80330988
    // 0x80330960: swc1        $f10, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f10.u32l;
        goto L_80330988;
    // 0x80330960: swc1        $f10, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f10.u32l;
L_80330964:
    // 0x80330964: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330968: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8033096C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80330970: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330974: nop

    // 0x80330978: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x8033097C: nop

    // 0x80330980: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80330984: sh          $t8, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r24;
L_80330988:
    // 0x80330988: b           L_80330990
    // 0x8033098C: nop

        goto L_80330990;
    // 0x8033098C: nop

L_80330990:
    // 0x80330990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330994: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330998: jr          $ra
    // 0x8033099C: nop

    return;
    // 0x8033099C: nop

;}
RECOMP_FUNC void func_8033420C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033420C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334210: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334214: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334218: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033421C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334220: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334224: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334228: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033422C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334230: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334234: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334238: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033423C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334240: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334244: nop

    // 0x80334248: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033424C: nop

    // 0x80334250: bne         $t1, $zero, L_803342D4
    if (ctx->r9 != 0) {
        // 0x80334254: nop
    
            goto L_803342D4;
    }
    // 0x80334254: nop

    // 0x80334258: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033425C: nop

    // 0x80334260: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334264: nop

    // 0x80334268: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033426C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334270: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334274: nop

    // 0x80334278: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033427C: nop

    // 0x80334280: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334284: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334288: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033428C: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80334290: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334294: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033429C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x803342A0: jal         0x8001C0EC
    // 0x803342A4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803342A4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x803342A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803342B4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x803342B8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803342BC: jal         0x800175F0
    // 0x803342C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803342C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803342C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803342C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803342CC: jal         0x80069E60
    // 0x803342D0: addiu       $a2, $zero, 0x89
    ctx->r6 = ADD32(0, 0X89);
    func_80069E60(rdram, ctx);
        goto after_2;
    // 0x803342D0: addiu       $a2, $zero, 0x89
    ctx->r6 = ADD32(0, 0X89);
    after_2:
L_803342D4:
    // 0x803342D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342DC: jal         0x8001B62C
    // 0x803342E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x803342E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803342E4: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x803342E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803342EC: nop

    // 0x803342F0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x803342F4: nop

    // 0x803342F8: bc1f        L_80334408
    if (!c1cs) {
        // 0x803342FC: nop
    
            goto L_80334408;
    }
    // 0x803342FC: nop

    // 0x80334300: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334304: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334308: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8033430C: nop

    // 0x80334310: bne         $t9, $at, L_8033436C
    if (ctx->r25 != ctx->r1) {
        // 0x80334314: nop
    
            goto L_8033436C;
    }
    // 0x80334314: nop

    // 0x80334318: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033431C: nop

    // 0x80334320: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334324: nop

    // 0x80334328: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8033432C: sb          $t3, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r11;
    // 0x80334330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334338: jal         0x8001BBDC
    // 0x8033433C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x8033433C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80334340: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334344: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x80334348: lwc1        $f12, 0x0($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033434C: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80334350: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x80334354: jal         0x8007F070
    // 0x80334358: nop

    func_8007F070(rdram, ctx);
        goto after_5;
    // 0x80334358: nop

    after_5:
    // 0x8033435C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334360: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x80334364: b           L_80334408
    // 0x80334368: sh          $t2, 0xC0($t6)
    MEM_H(0XC0, ctx->r14) = ctx->r10;
        goto L_80334408;
    // 0x80334368: sh          $t2, 0xC0($t6)
    MEM_H(0XC0, ctx->r14) = ctx->r10;
L_8033436C:
    // 0x8033436C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334370: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334374: lbu         $t7, 0x132($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X132);
    // 0x80334378: nop

    // 0x8033437C: bne         $t7, $at, L_80334408
    if (ctx->r15 != ctx->r1) {
        // 0x80334380: nop
    
            goto L_80334408;
    }
    // 0x80334380: nop

    // 0x80334384: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334388: nop

    // 0x8033438C: lh          $t9, 0xC0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC0);
    // 0x80334390: nop

    // 0x80334394: bne         $t9, $zero, L_803343F0
    if (ctx->r25 != 0) {
        // 0x80334398: nop
    
            goto L_803343F0;
    }
    // 0x80334398: nop

    // 0x8033439C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803343A8: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x803343AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803343B0: jal         0x800175F0
    // 0x803343B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x803343B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x803343B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343C0: jal         0x8001BB34
    // 0x803343C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_7;
    // 0x803343C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x803343C8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803343CC: addiu       $t1, $zero, 0x6B
    ctx->r9 = ADD32(0, 0X6B);
    // 0x803343D0: sh          $t1, 0xC2($t3)
    MEM_H(0XC2, ctx->r11) = ctx->r9;
    // 0x803343D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803343D8: nop

    // 0x803343DC: lbu         $t4, 0x132($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X132);
    // 0x803343E0: nop

    // 0x803343E4: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x803343E8: b           L_80334408
    // 0x803343EC: sb          $t2, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r10;
        goto L_80334408;
    // 0x803343EC: sb          $t2, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r10;
L_803343F0:
    // 0x803343F0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803343F4: nop

    // 0x803343F8: lh          $t5, 0xC0($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC0);
    // 0x803343FC: nop

    // 0x80334400: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x80334404: sh          $t7, 0xC0($t6)
    MEM_H(0XC0, ctx->r14) = ctx->r15;
L_80334408:
    // 0x80334408: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033440C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80334410: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80334414: nop

    // 0x80334418: bne         $t9, $at, L_80334468
    if (ctx->r25 != ctx->r1) {
        // 0x8033441C: nop
    
            goto L_80334468;
    }
    // 0x8033441C: nop

    // 0x80334420: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334424: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334428: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033442C: nop

    // 0x80334430: bne         $t3, $at, L_80334450
    if (ctx->r11 != ctx->r1) {
        // 0x80334434: nop
    
            goto L_80334450;
    }
    // 0x80334434: nop

    // 0x80334438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033443C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334440: jal         0x8002B114
    // 0x80334444: nop

    func_8002B114(rdram, ctx);
        goto after_8;
    // 0x80334444: nop

    after_8:
    // 0x80334448: b           L_80334468
    // 0x8033444C: nop

        goto L_80334468;
    // 0x8033444C: nop

L_80334450:
    // 0x80334450: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334454: nop

    // 0x80334458: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x8033445C: nop

    // 0x80334460: addiu       $t0, $t2, -0x1
    ctx->r8 = ADD32(ctx->r10, -0X1);
    // 0x80334464: sh          $t0, 0xC2($t4)
    MEM_H(0XC2, ctx->r12) = ctx->r8;
L_80334468:
    // 0x80334468: b           L_80334470
    // 0x8033446C: nop

        goto L_80334470;
    // 0x8033446C: nop

L_80334470:
    // 0x80334470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334478: jr          $ra
    // 0x8033447C: nop

    return;
    // 0x8033447C: nop

;}
RECOMP_FUNC void func_8033482C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033482C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334830: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334834: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334838: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033483C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334840: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334844: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334848: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033484C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334850: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334854: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334858: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033485C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334860: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334864: nop

    // 0x80334868: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033486C: nop

    // 0x80334870: bne         $t1, $zero, L_803348C8
    if (ctx->r9 != 0) {
        // 0x80334874: nop
    
            goto L_803348C8;
    }
    // 0x80334874: nop

    // 0x80334878: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033487C: nop

    // 0x80334880: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334884: nop

    // 0x80334888: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033488C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334890: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334894: nop

    // 0x80334898: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033489C: nop

    // 0x803348A0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803348A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803348A8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803348AC: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x803348B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803348B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803348B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803348BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803348C0: jal         0x8001C0EC
    // 0x803348C4: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803348C4: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_803348C8:
    // 0x803348C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803348CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803348D0: jal         0x8001B4AC
    // 0x803348D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803348D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803348D8: beq         $v0, $zero, L_803348F8
    if (ctx->r2 == 0) {
        // 0x803348DC: nop
    
            goto L_803348F8;
    }
    // 0x803348DC: nop

    // 0x803348E0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803348E4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803348E8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803348EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803348F0: nop

    // 0x803348F4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803348F8:
    // 0x803348F8: b           L_80334900
    // 0x803348FC: nop

        goto L_80334900;
    // 0x803348FC: nop

L_80334900:
    // 0x80334900: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334904: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334908: jr          $ra
    // 0x8033490C: nop

    return;
    // 0x8033490C: nop

;}
RECOMP_FUNC void func_8033128C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033128C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331294: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331298: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033129C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803312A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803312A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803312AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803312B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803312B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803312BC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803312C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803312C4: nop

    // 0x803312C8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803312CC: nop

    // 0x803312D0: bne         $t1, $zero, L_80331430
    if (ctx->r9 != 0) {
        // 0x803312D4: nop
    
            goto L_80331430;
    }
    // 0x803312D4: nop

    // 0x803312D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803312DC: nop

    // 0x803312E0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803312E4: nop

    // 0x803312E8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803312EC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803312F0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803312F4: nop

    // 0x803312F8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803312FC: nop

    // 0x80331300: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331304: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331308: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8033130C: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x80331310: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331314: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80331318: sh          $t9, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = ctx->r25;
    // 0x8033131C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331320: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331324: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331328: nop

    // 0x8033132C: swc1        $f4, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f4.u32l;
    // 0x80331330: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331334: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80331338: sh          $t3, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = ctx->r11;
    // 0x8033133C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331340: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80331344: addiu       $t2, $t2, -0x5DF0
    ctx->r10 = ADD32(ctx->r10, -0X5DF0);
    // 0x80331348: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033134C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80331350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331354: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80331358: jal         0x8001C0EC
    // 0x8033135C: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033135C: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x80331360: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331364: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331368: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033136C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80331370: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80331374: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331378: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8033137C: addiu       $a1, $a1, 0x7BFC
    ctx->r5 = ADD32(ctx->r5, 0X7BFC);
    // 0x80331380: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331384: jal         0x80027464
    // 0x80331388: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80331388: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8033138C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80331394: jal         0x80026F10
    // 0x80331398: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_2;
    // 0x80331398: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_2:
    // 0x8033139C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803313A0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803313A4: lwc1        $f10, 0x8($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803313A8: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x803313AC: lw          $a3, 0x4($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X4);
    // 0x803313B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803313B4: lwc1        $f16, 0x1C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x803313B8: addiu       $a1, $a1, 0x7C08
    ctx->r5 = ADD32(ctx->r5, 0X7C08);
    // 0x803313BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803313C0: jal         0x80027464
    // 0x803313C4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x803313C4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x803313C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803313CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803313D0: jal         0x80026F10
    // 0x803313D4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_4;
    // 0x803313D4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_4:
    // 0x803313D8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803313DC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803313E0: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x803313E4: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x803313E8: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x803313EC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803313F0: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803313F4: addiu       $a1, $a1, 0x7C14
    ctx->r5 = ADD32(ctx->r5, 0X7C14);
    // 0x803313F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803313FC: jal         0x80027464
    // 0x80331400: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80331400: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80331404: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331408: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8033140C: jal         0x80026F10
    // 0x80331410: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x80331410: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_6:
    // 0x80331414: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331418: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033141C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331420: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x80331424: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331428: jal         0x800175F0
    // 0x8033142C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x8033142C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
L_80331430:
    // 0x80331430: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331434: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80331438: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x8033143C: nop

    // 0x80331440: beq         $t9, $at, L_80331480
    if (ctx->r25 == ctx->r1) {
        // 0x80331444: nop
    
            goto L_80331480;
    }
    // 0x80331444: nop

    // 0x80331448: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033144C: nop

    // 0x80331450: lwc1        $f12, 0x3C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80331454: lwc1        $f14, 0xD4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x80331458: jal         0x80015538
    // 0x8033145C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x8033145C: nop

    after_8:
    // 0x80331460: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331464: nop

    // 0x80331468: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x8033146C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331470: nop

    // 0x80331474: lwc1        $f6, 0x3C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80331478: nop

    // 0x8033147C: swc1        $f6, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f6.u32l;
L_80331480:
    // 0x80331480: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331488: jal         0x8001B4AC
    // 0x8033148C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_9;
    // 0x8033148C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80331490: beq         $v0, $zero, L_803315C8
    if (ctx->r2 == 0) {
        // 0x80331494: nop
    
            goto L_803315C8;
    }
    // 0x80331494: nop

    // 0x80331498: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033149C: nop

    // 0x803314A0: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x803314A4: nop

    // 0x803314A8: bne         $t2, $zero, L_803315B0
    if (ctx->r10 != 0) {
        // 0x803314AC: nop
    
            goto L_803315B0;
    }
    // 0x803314AC: nop

    // 0x803314B0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803314B4: nop

    // 0x803314B8: lh          $t5, 0xB6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XB6);
    // 0x803314BC: nop

    // 0x803314C0: bne         $t5, $zero, L_803314E0
    if (ctx->r13 != 0) {
        // 0x803314C4: nop
    
            goto L_803314E0;
    }
    // 0x803314C4: nop

    // 0x803314C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803314CC: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x803314D0: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803314D4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803314D8: b           L_803315A0
    // 0x803314DC: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_803315A0;
    // 0x803314DC: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803314E0:
    // 0x803314E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803314E4: nop

    // 0x803314E8: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x803314EC: nop

    // 0x803314F0: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x803314F4: sh          $t3, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = ctx->r11;
    // 0x803314F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803314FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331500: lh          $t2, 0xB4($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB4);
    // 0x80331504: nop

    // 0x80331508: bne         $t2, $at, L_80331548
    if (ctx->r10 != ctx->r1) {
        // 0x8033150C: nop
    
            goto L_80331548;
    }
    // 0x8033150C: nop

    // 0x80331510: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331514: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80331518: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033151C: lwc1        $f8, 0xD4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x80331520: nop

    // 0x80331524: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80331528: swc1        $f16, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f16.u32l;
    // 0x8033152C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331530: nop

    // 0x80331534: lh          $t7, 0xB4($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB4);
    // 0x80331538: nop

    // 0x8033153C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331540: b           L_803315A0
    // 0x80331544: sh          $t8, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = ctx->r24;
        goto L_803315A0;
    // 0x80331544: sh          $t8, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = ctx->r24;
L_80331548:
    // 0x80331548: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033154C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80331550: lh          $t1, 0xB4($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XB4);
    // 0x80331554: nop

    // 0x80331558: bne         $t1, $at, L_80331588
    if (ctx->r9 != ctx->r1) {
        // 0x8033155C: nop
    
            goto L_80331588;
    }
    // 0x8033155C: nop

    // 0x80331560: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331564: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80331568: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033156C: lwc1        $f18, 0xD4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x80331570: nop

    // 0x80331574: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80331578: swc1        $f6, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f6.u32l;
    // 0x8033157C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331580: b           L_803315A0
    // 0x80331584: sh          $zero, 0xB4($t0)
    MEM_H(0XB4, ctx->r8) = 0;
        goto L_803315A0;
    // 0x80331584: sh          $zero, 0xB4($t0)
    MEM_H(0XB4, ctx->r8) = 0;
L_80331588:
    // 0x80331588: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033158C: nop

    // 0x80331590: lh          $t2, 0xB4($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB4);
    // 0x80331594: nop

    // 0x80331598: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x8033159C: sh          $t6, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = ctx->r14;
L_803315A0:
    // 0x803315A0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803315A4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803315A8: b           L_803315C8
    // 0x803315AC: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
        goto L_803315C8;
    // 0x803315AC: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_803315B0:
    // 0x803315B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803315B4: nop

    // 0x803315B8: lh          $t9, 0xA6($t5)
    ctx->r25 = MEM_H(ctx->r13, 0XA6);
    // 0x803315BC: nop

    // 0x803315C0: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x803315C4: sh          $t1, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r9;
L_803315C8:
    // 0x803315C8: b           L_803315D0
    // 0x803315CC: nop

        goto L_803315D0;
    // 0x803315CC: nop

L_803315D0:
    // 0x803315D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803315D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803315D8: jr          $ra
    // 0x803315DC: nop

    return;
    // 0x803315DC: nop

;}
RECOMP_FUNC void func_80336C4C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336C4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336C50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336C54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80336C58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336C5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336C60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336C64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336C68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336C6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336C70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336C74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336C78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336C7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336C80: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336C84: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336C88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80336C8C: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80336C90: nop

    // 0x80336C94: beq         $s0, $at, L_80336CC8
    if (ctx->r16 == ctx->r1) {
        // 0x80336C98: nop
    
            goto L_80336CC8;
    }
    // 0x80336C98: nop

    // 0x80336C9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80336CA0: beq         $s0, $at, L_80336CD8
    if (ctx->r16 == ctx->r1) {
        // 0x80336CA4: nop
    
            goto L_80336CD8;
    }
    // 0x80336CA4: nop

    // 0x80336CA8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80336CAC: beq         $s0, $at, L_80336CE8
    if (ctx->r16 == ctx->r1) {
        // 0x80336CB0: nop
    
            goto L_80336CE8;
    }
    // 0x80336CB0: nop

    // 0x80336CB4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80336CB8: beq         $s0, $at, L_80336CF8
    if (ctx->r16 == ctx->r1) {
        // 0x80336CBC: nop
    
            goto L_80336CF8;
    }
    // 0x80336CBC: nop

    // 0x80336CC0: b           L_80336D08
    // 0x80336CC4: nop

        goto L_80336D08;
    // 0x80336CC4: nop

L_80336CC8:
    // 0x80336CC8: jal         0x8033682C
    // 0x80336CCC: nop

    func_8033682C_unk_bin_13(rdram, ctx);
        goto after_0;
    // 0x80336CCC: nop

    after_0:
    // 0x80336CD0: b           L_80336D10
    // 0x80336CD4: nop

        goto L_80336D10;
    // 0x80336CD4: nop

L_80336CD8:
    // 0x80336CD8: jal         0x8033691C
    // 0x80336CDC: nop

    func_8033691C_unk_bin_13(rdram, ctx);
        goto after_1;
    // 0x80336CDC: nop

    after_1:
    // 0x80336CE0: b           L_80336D10
    // 0x80336CE4: nop

        goto L_80336D10;
    // 0x80336CE4: nop

L_80336CE8:
    // 0x80336CE8: jal         0x80336A0C
    // 0x80336CEC: nop

    func_80336A0C_unk_bin_13(rdram, ctx);
        goto after_2;
    // 0x80336CEC: nop

    after_2:
    // 0x80336CF0: b           L_80336D10
    // 0x80336CF4: nop

        goto L_80336D10;
    // 0x80336CF4: nop

L_80336CF8:
    // 0x80336CF8: jal         0x80336B64
    // 0x80336CFC: nop

    func_80336B64_unk_bin_13(rdram, ctx);
        goto after_3;
    // 0x80336CFC: nop

    after_3:
    // 0x80336D00: b           L_80336D10
    // 0x80336D04: nop

        goto L_80336D10;
    // 0x80336D04: nop

L_80336D08:
    // 0x80336D08: b           L_80336D10
    // 0x80336D0C: nop

        goto L_80336D10;
    // 0x80336D0C: nop

L_80336D10:
    // 0x80336D10: b           L_80336D18
    // 0x80336D14: nop

        goto L_80336D18;
    // 0x80336D14: nop

L_80336D18:
    // 0x80336D18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336D1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80336D20: jr          $ra
    // 0x80336D24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80336D24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80335664_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335664: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80335668: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
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
    // 0x8033568C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335690: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335694: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80335698: addiu       $t0, $zero, -0x28
    ctx->r8 = ADD32(0, -0X28);
    // 0x8033569C: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x803356A0: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
L_803356A4:
    // 0x803356A4: lh          $t2, 0x2C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2C);
    // 0x803356A8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803356AC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x803356B0: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803356B4: jal         0x80015538
    // 0x803356B8: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803356B8: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x803356BC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x803356C0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803356C4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803356C8: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803356CC: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x803356D0: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x803356D4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803356D8: addiu       $a1, $a1, 0x7BE4
    ctx->r5 = ADD32(ctx->r5, 0X7BE4);
    // 0x803356DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803356E0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x803356E4: jal         0x80027464
    // 0x803356E8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x803356E8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x803356EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803356F0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803356F4: addiu       $t4, $t4, -0x5CE4
    ctx->r12 = ADD32(ctx->r12, -0X5CE4);
    // 0x803356F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803356FC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80335700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335708: jal         0x8001C0EC
    // 0x8033570C: addiu       $a3, $zero, 0xD6
    ctx->r7 = ADD32(0, 0XD6);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x8033570C: addiu       $a3, $zero, 0xD6
    ctx->r7 = ADD32(0, 0XD6);
    after_2:
    // 0x80335710: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x80335714: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335718: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8033571C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80335720: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80335724: addiu       $t7, $t7, -0x5C58
    ctx->r15 = ADD32(ctx->r15, -0X5C58);
    // 0x80335728: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033572C: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x80335730: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335734: jal         0x8001ABF4
    // 0x80335738: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80335738: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8033573C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80335740: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x80335744: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80335748: jal         0x80026F10
    // 0x8033574C: nop

    func_80026F10(rdram, ctx);
        goto after_4;
    // 0x8033574C: nop

    after_4:
    // 0x80335750: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335754: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335758: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033575C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335760: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335764: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335768: lwc1        $f10, 0x40($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X40);
    // 0x8033576C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335770: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335774: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335778: swc1        $f10, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f10.u32l;
    // 0x8033577C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335780: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80335784: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80335788: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033578C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80335790: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335794: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80335798: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033579C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803357A0: lwc1        $f16, 0x1C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803357A4: nop

    // 0x803357A8: swc1        $f16, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f16.u32l;
    // 0x803357AC: jal         0x80014E80
    // 0x803357B0: addiu       $a0, $zero, -0x6
    ctx->r4 = ADD32(0, -0X6);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x803357B0: addiu       $a0, $zero, -0x6
    ctx->r4 = ADD32(0, -0X6);
    after_5:
    // 0x803357B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803357B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803357BC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803357C0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803357C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803357C8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803357CC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803357D0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803357D4: sh          $v0, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r2;
    // 0x803357D8: lh          $t7, 0x2C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2C);
    // 0x803357DC: nop

    // 0x803357E0: addiu       $t8, $t7, 0x28
    ctx->r24 = ADD32(ctx->r15, 0X28);
    // 0x803357E4: sh          $t8, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r24;
    // 0x803357E8: lh          $t9, 0x32($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X32);
    // 0x803357EC: nop

    // 0x803357F0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803357F4: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x803357F8: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803357FC: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x80335800: bne         $at, $zero, L_803356A4
    if (ctx->r1 != 0) {
        // 0x80335804: sh          $t0, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r8;
            goto L_803356A4;
    }
    // 0x80335804: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
    // 0x80335808: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x8033580C: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x80335810: sh          $t3, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r11;
    // 0x80335814: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
L_80335818:
    // 0x80335818: addiu       $t4, $zero, -0x14
    ctx->r12 = ADD32(0, -0X14);
    // 0x8033581C: sh          $t4, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r12;
    // 0x80335820: sh          $zero, 0x30($sp)
    MEM_H(0X30, ctx->r29) = 0;
L_80335824:
    // 0x80335824: lh          $t6, 0x2C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2C);
    // 0x80335828: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033582C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80335830: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80335834: jal         0x80015538
    // 0x80335838: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80335838: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_6:
    // 0x8033583C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80335840: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80335844: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80335848: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8033584C: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x80335850: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x80335854: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80335858: addiu       $a1, $a1, 0x7BE4
    ctx->r5 = ADD32(ctx->r5, 0X7BE4);
    // 0x8033585C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335860: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80335864: jal         0x80027464
    // 0x80335868: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80335868: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x8033586C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80335870: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80335874: addiu       $t8, $t8, -0x5CE4
    ctx->r24 = ADD32(ctx->r24, -0X5CE4);
    // 0x80335878: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033587C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80335880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335884: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335888: jal         0x8001C0EC
    // 0x8033588C: addiu       $a3, $zero, 0xD6
    ctx->r7 = ADD32(0, 0XD6);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x8033588C: addiu       $a3, $zero, 0xD6
    ctx->r7 = ADD32(0, 0XD6);
    after_8:
    // 0x80335890: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x80335894: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80335898: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8033589C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803358A0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803358A4: addiu       $t1, $t1, -0x5C58
    ctx->r9 = ADD32(ctx->r9, -0X5C58);
    // 0x803358A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803358AC: addu        $a3, $t0, $t1
    ctx->r7 = ADD32(ctx->r8, ctx->r9);
    // 0x803358B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803358B4: jal         0x8001ABF4
    // 0x803358B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x803358B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x803358BC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x803358C0: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x803358C4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803358C8: jal         0x80026F10
    // 0x803358CC: nop

    func_80026F10(rdram, ctx);
        goto after_10;
    // 0x803358CC: nop

    after_10:
    // 0x803358D0: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x803358D4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803358D8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x803358DC: lwc1        $f12, 0x40($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X40);
    // 0x803358E0: jal         0x80015538
    // 0x803358E4: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x803358E4: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_11:
    // 0x803358E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803358EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803358F0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803358F4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803358F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803358FC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335900: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335904: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80335908: swc1        $f0, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f0.u32l;
    // 0x8033590C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335910: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335914: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335918: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033591C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335920: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335924: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335928: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033592C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335930: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80335934: nop

    // 0x80335938: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
    // 0x8033593C: jal         0x80014E80
    // 0x80335940: addiu       $a0, $zero, -0x6
    ctx->r4 = ADD32(0, -0X6);
    Math_Random(rdram, ctx);
        goto after_12;
    // 0x80335940: addiu       $a0, $zero, -0x6
    ctx->r4 = ADD32(0, -0X6);
    after_12:
    // 0x80335944: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335948: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033594C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80335950: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80335954: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80335958: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033595C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80335960: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80335964: sh          $v0, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r2;
    // 0x80335968: lh          $t2, 0x2C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2C);
    // 0x8033596C: nop

    // 0x80335970: addiu       $t3, $t2, 0x28
    ctx->r11 = ADD32(ctx->r10, 0X28);
    // 0x80335974: sh          $t3, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r11;
    // 0x80335978: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x8033597C: nop

    // 0x80335980: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80335984: sh          $t5, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r13;
    // 0x80335988: lh          $t6, 0x30($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X30);
    // 0x8033598C: nop

    // 0x80335990: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80335994: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80335998: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8033599C: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x803359A0: bne         $at, $zero, L_80335824
    if (ctx->r1 != 0) {
        // 0x803359A4: sh          $t7, 0x30($sp)
        MEM_H(0X30, ctx->r29) = ctx->r15;
            goto L_80335824;
    }
    // 0x803359A4: sh          $t7, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r15;
    // 0x803359A8: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x803359AC: nop

    // 0x803359B0: addiu       $t1, $t0, -0x3C
    ctx->r9 = ADD32(ctx->r8, -0X3C);
    // 0x803359B4: sh          $t1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r9;
    // 0x803359B8: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x803359BC: nop

    // 0x803359C0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x803359C4: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x803359C8: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x803359CC: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x803359D0: bne         $at, $zero, L_80335818
    if (ctx->r1 != 0) {
        // 0x803359D4: sh          $t3, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r11;
            goto L_80335818;
    }
    // 0x803359D4: sh          $t3, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r11;
    // 0x803359D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803359DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803359E0: jal         0x8002B0E4
    // 0x803359E4: nop

    func_8002B0E4(rdram, ctx);
        goto after_13;
    // 0x803359E4: nop

    after_13:
    // 0x803359E8: b           L_803359F0
    // 0x803359EC: nop

        goto L_803359F0;
    // 0x803359EC: nop

L_803359F0:
    // 0x803359F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803359F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803359F8: jr          $ra
    // 0x803359FC: nop

    return;
    // 0x803359FC: nop

;}
RECOMP_FUNC void func_80334CC4_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334CC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334CC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334CCC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334CD0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334CD4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334CD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334CDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334CE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334CE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334CE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334CEC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334CF0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334CF4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334CF8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334CFC: nop

    // 0x80334D00: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334D04: nop

    // 0x80334D08: bne         $t1, $zero, L_80334D60
    if (ctx->r9 != 0) {
        // 0x80334D0C: nop
    
            goto L_80334D60;
    }
    // 0x80334D0C: nop

    // 0x80334D10: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334D14: nop

    // 0x80334D18: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334D1C: nop

    // 0x80334D20: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334D24: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334D28: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334D2C: nop

    // 0x80334D30: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334D34: nop

    // 0x80334D38: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334D3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334D40: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334D44: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x80334D48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334D4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334D54: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80334D58: jal         0x8001C0EC
    // 0x80334D5C: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334D5C: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_80334D60:
    // 0x80334D60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334D64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334D68: jal         0x8001B4AC
    // 0x80334D6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80334D6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334D70: beq         $v0, $zero, L_80334D84
    if (ctx->r2 == 0) {
        // 0x80334D74: nop
    
            goto L_80334D84;
    }
    // 0x80334D74: nop

    // 0x80334D78: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334D7C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80334D80: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
L_80334D84:
    // 0x80334D84: b           L_80334D8C
    // 0x80334D88: nop

        goto L_80334D8C;
    // 0x80334D88: nop

L_80334D8C:
    // 0x80334D8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334D90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334D94: jr          $ra
    // 0x80334D98: nop

    return;
    // 0x80334D98: nop

;}
RECOMP_FUNC void func_80334F80_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334F80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334F84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334F88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334F8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334F90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334F94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334F98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334F9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334FA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334FA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334FA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334FAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334FB0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334FB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334FB8: nop

    // 0x80334FBC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334FC0: nop

    // 0x80334FC4: bne         $t1, $zero, L_8033501C
    if (ctx->r9 != 0) {
        // 0x80334FC8: nop
    
            goto L_8033501C;
    }
    // 0x80334FC8: nop

    // 0x80334FCC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334FD0: nop

    // 0x80334FD4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334FD8: nop

    // 0x80334FDC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334FE0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334FE4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334FE8: nop

    // 0x80334FEC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334FF0: nop

    // 0x80334FF4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334FF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334FFC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335000: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x80335004: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335008: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033500C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335010: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80335014: jal         0x8001C0EC
    // 0x80335018: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335018: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_8033501C:
    // 0x8033501C: b           L_80335024
    // 0x80335020: nop

        goto L_80335024;
    // 0x80335020: nop

L_80335024:
    // 0x80335024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033502C: jr          $ra
    // 0x80335030: nop

    return;
    // 0x80335030: nop

;}
RECOMP_FUNC void func_80335E88_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335E88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335E8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335E90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335E94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335E98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335E9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335EA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335EA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335EA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335EAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335EB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335EB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335EB8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335EBC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335EC0: nop

    // 0x80335EC4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335EC8: nop

    // 0x80335ECC: bne         $t1, $zero, L_80335F30
    if (ctx->r9 != 0) {
        // 0x80335ED0: nop
    
            goto L_80335F30;
    }
    // 0x80335ED0: nop

    // 0x80335ED4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335ED8: nop

    // 0x80335EDC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335EE0: nop

    // 0x80335EE4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335EE8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335EEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335EF0: nop

    // 0x80335EF4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335EF8: nop

    // 0x80335EFC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335F00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335F04: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335F08: addiu       $t7, $t7, -0x5BCC
    ctx->r15 = ADD32(ctx->r15, -0X5BCC);
    // 0x80335F0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335F10: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335F14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80335F18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335F1C: jal         0x8001C0EC
    // 0x80335F20: addiu       $a3, $zero, 0xD7
    ctx->r7 = ADD32(0, 0XD7);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335F20: addiu       $a3, $zero, 0xD7
    ctx->r7 = ADD32(0, 0XD7);
    after_0:
    // 0x80335F24: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335F28: nop

    // 0x80335F2C: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
L_80335F30:
    // 0x80335F30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335F34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335F38: jal         0x8001B4AC
    // 0x80335F3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80335F3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80335F40: beq         $v0, $zero, L_80335F60
    if (ctx->r2 == 0) {
        // 0x80335F44: nop
    
            goto L_80335F60;
    }
    // 0x80335F44: nop

    // 0x80335F48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335F4C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80335F50: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80335F54: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335F58: nop

    // 0x80335F5C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80335F60:
    // 0x80335F60: b           L_80335F68
    // 0x80335F64: nop

        goto L_80335F68;
    // 0x80335F64: nop

L_80335F68:
    // 0x80335F68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335F6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335F70: jr          $ra
    // 0x80335F74: nop

    return;
    // 0x80335F74: nop

;}
RECOMP_FUNC void func_80335D58_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335D58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80335D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335D60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D68: jal         0x8002B114
    // 0x80335D6C: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x80335D6C: nop

    after_0:
    // 0x80335D70: b           L_80335D78
    // 0x80335D74: nop

        goto L_80335D78;
    // 0x80335D74: nop

L_80335D78:
    // 0x80335D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80335D80: jr          $ra
    // 0x80335D84: nop

    return;
    // 0x80335D84: nop

;}
RECOMP_FUNC void func_80334748_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334748: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033474C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334750: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334754: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334758: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033475C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334760: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334764: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334768: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033476C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334770: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334774: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334778: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033477C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334780: nop

    // 0x80334784: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334788: nop

    // 0x8033478C: bne         $t1, $zero, L_803347E4
    if (ctx->r9 != 0) {
        // 0x80334790: nop
    
            goto L_803347E4;
    }
    // 0x80334790: nop

    // 0x80334794: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334798: nop

    // 0x8033479C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803347A0: nop

    // 0x803347A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803347A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803347AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803347B0: nop

    // 0x803347B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803347B8: nop

    // 0x803347BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803347C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347C4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803347C8: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x803347CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803347D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803347D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803347DC: jal         0x8001C0EC
    // 0x803347E0: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803347E0: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_803347E4:
    // 0x803347E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347EC: jal         0x8001B4AC
    // 0x803347F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803347F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803347F4: beq         $v0, $zero, L_80334814
    if (ctx->r2 == 0) {
        // 0x803347F8: nop
    
            goto L_80334814;
    }
    // 0x803347F8: nop

    // 0x803347FC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334800: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80334804: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80334808: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033480C: nop

    // 0x80334810: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80334814:
    // 0x80334814: b           L_8033481C
    // 0x80334818: nop

        goto L_8033481C;
    // 0x80334818: nop

L_8033481C:
    // 0x8033481C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334820: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334824: jr          $ra
    // 0x80334828: nop

    return;
    // 0x80334828: nop

;}
RECOMP_FUNC void func_803315E0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803315E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803315E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803315E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803315EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803315F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803315F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803315F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803315FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331600: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331604: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331608: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033160C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331610: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331614: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331618: nop

    // 0x8033161C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331620: nop

    // 0x80331624: bne         $t1, $zero, L_8033167C
    if (ctx->r9 != 0) {
        // 0x80331628: nop
    
            goto L_8033167C;
    }
    // 0x80331628: nop

    // 0x8033162C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331630: nop

    // 0x80331634: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331638: nop

    // 0x8033163C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331640: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331644: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331648: nop

    // 0x8033164C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331650: nop

    // 0x80331654: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331658: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033165C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331660: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80331664: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331668: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033166C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331670: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80331674: jal         0x8001C0EC
    // 0x80331678: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331678: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_8033167C:
    // 0x8033167C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331680: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331684: jal         0x8001B4AC
    // 0x80331688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033168C: beq         $v0, $zero, L_8033172C
    if (ctx->r2 == 0) {
        // 0x80331690: nop
    
            goto L_8033172C;
    }
    // 0x80331690: nop

    // 0x80331694: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331698: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033169C: lh          $t9, 0xB8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB8);
    // 0x803316A0: nop

    // 0x803316A4: bne         $t9, $at, L_80331714
    if (ctx->r25 != ctx->r1) {
        // 0x803316A8: nop
    
            goto L_80331714;
    }
    // 0x803316A8: nop

    // 0x803316AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803316B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803316B4: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x803316B8: nop

    // 0x803316BC: bne         $t1, $at, L_803316E8
    if (ctx->r9 != ctx->r1) {
        // 0x803316C0: nop
    
            goto L_803316E8;
    }
    // 0x803316C0: nop

    // 0x803316C4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803316C8: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x803316CC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803316D0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803316D4: nop

    // 0x803316D8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803316DC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803316E0: b           L_8033170C
    // 0x803316E4: sh          $zero, 0xB8($t6)
    MEM_H(0XB8, ctx->r14) = 0;
        goto L_8033170C;
    // 0x803316E4: sh          $zero, 0xB8($t6)
    MEM_H(0XB8, ctx->r14) = 0;
L_803316E8:
    // 0x803316E8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803316EC: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x803316F0: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x803316F4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803316F8: nop

    // 0x803316FC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80331700: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331704: nop

    // 0x80331708: sh          $zero, 0xB8($t9)
    MEM_H(0XB8, ctx->r25) = 0;
L_8033170C:
    // 0x8033170C: b           L_8033172C
    // 0x80331710: nop

        goto L_8033172C;
    // 0x80331710: nop

L_80331714:
    // 0x80331714: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331718: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033171C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80331720: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331724: nop

    // 0x80331728: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033172C:
    // 0x8033172C: b           L_80331734
    // 0x80331730: nop

        goto L_80331734;
    // 0x80331730: nop

L_80331734:
    // 0x80331734: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033173C: jr          $ra
    // 0x80331740: nop

    return;
    // 0x80331740: nop

;}
RECOMP_FUNC void func_8033791C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033791C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337920: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337924: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337928: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033792C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337930: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337934: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337938: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033793C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337940: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337944: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337948: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033794C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337950: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337954: nop

    // 0x80337958: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033795C: nop

    // 0x80337960: bne         $t1, $zero, L_803379B8
    if (ctx->r9 != 0) {
        // 0x80337964: nop
    
            goto L_803379B8;
    }
    // 0x80337964: nop

    // 0x80337968: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033796C: nop

    // 0x80337970: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337974: nop

    // 0x80337978: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033797C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337980: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337984: nop

    // 0x80337988: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033798C: nop

    // 0x80337990: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337998: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033799C: addiu       $t7, $t7, -0x5ACC
    ctx->r15 = ADD32(ctx->r15, -0X5ACC);
    // 0x803379A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803379A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803379A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803379AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803379B0: jal         0x8001C0EC
    // 0x803379B4: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803379B4: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    after_0:
L_803379B8:
    // 0x803379B8: b           L_803379C0
    // 0x803379BC: nop

        goto L_803379C0;
    // 0x803379BC: nop

L_803379C0:
    // 0x803379C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803379C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803379C8: jr          $ra
    // 0x803379CC: nop

    return;
    // 0x803379CC: nop

;}
RECOMP_FUNC void func_80330A90_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330A90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
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
    // 0x80330AC0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330AC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330AC8: nop

    // 0x80330ACC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330AD0: nop

    // 0x80330AD4: bne         $t1, $zero, L_80330B2C
    if (ctx->r9 != 0) {
        // 0x80330AD8: nop
    
            goto L_80330B2C;
    }
    // 0x80330AD8: nop

    // 0x80330ADC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330AE0: nop

    // 0x80330AE4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330AE8: nop

    // 0x80330AEC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330AF0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330AF4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330AF8: nop

    // 0x80330AFC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330B00: nop

    // 0x80330B04: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330B08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B0C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330B10: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80330B14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330B1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330B20: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80330B24: jal         0x8001C0EC
    // 0x80330B28: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330B28: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_80330B2C:
    // 0x80330B2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B34: jal         0x8002A8B4
    // 0x80330B38: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330B38: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x80330B3C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330B40: nop

    // 0x80330B44: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330B48: nop

    // 0x80330B4C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330B50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B58: jal         0x8001B4AC
    // 0x80330B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330B60: beq         $v0, $zero, L_80330B80
    if (ctx->r2 == 0) {
        // 0x80330B64: nop
    
            goto L_80330B80;
    }
    // 0x80330B64: nop

    // 0x80330B68: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330B6C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80330B70: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330B74: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330B78: nop

    // 0x80330B7C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330B80:
    // 0x80330B80: b           L_80330B88
    // 0x80330B84: nop

        goto L_80330B88;
    // 0x80330B84: nop

L_80330B88:
    // 0x80330B88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330B90: jr          $ra
    // 0x80330B94: nop

    return;
    // 0x80330B94: nop

;}
RECOMP_FUNC void func_80331AC0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331AC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331AC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331AC8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331ACC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331AD0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331AD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331AD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331ADC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331AE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331AE4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331AE8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331AEC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331AF0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331AF4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331AF8: nop

    // 0x80331AFC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331B00: nop

    // 0x80331B04: bne         $t1, $zero, L_80331BB4
    if (ctx->r9 != 0) {
        // 0x80331B08: nop
    
            goto L_80331BB4;
    }
    // 0x80331B08: nop

    // 0x80331B0C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331B10: nop

    // 0x80331B14: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331B18: nop

    // 0x80331B1C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331B20: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331B24: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331B28: nop

    // 0x80331B2C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331B30: nop

    // 0x80331B34: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331B38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B3C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331B40: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80331B44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B48: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331B4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80331B54: jal         0x8001C0EC
    // 0x80331B58: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331B58: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x80331B5C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331B60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331B64: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x80331B68: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
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
    // 0x80331B80: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331B84: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80331B88: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331B8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331B90: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x80331B94: nop

    // 0x80331B98: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80331B9C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331BA0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331BA4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331BA8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331BAC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331BB0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331BB4:
    // 0x80331BB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331BBC: jal         0x8001B4AC
    // 0x80331BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331BC4: beq         $v0, $zero, L_80331C50
    if (ctx->r2 == 0) {
        // 0x80331BC8: nop
    
            goto L_80331C50;
    }
    // 0x80331BC8: nop

    // 0x80331BCC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331BD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331BD4: lh          $t5, 0xA8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA8);
    // 0x80331BD8: nop

    // 0x80331BDC: bne         $t5, $at, L_80331C38
    if (ctx->r13 != ctx->r1) {
        // 0x80331BE0: nop
    
            goto L_80331C38;
    }
    // 0x80331BE0: nop

    // 0x80331BE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331BEC: jal         0x8002A1FC
    // 0x80331BF0: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x80331BF0: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    after_2:
    // 0x80331BF4: beq         $v0, $zero, L_80331C14
    if (ctx->r2 == 0) {
        // 0x80331BF8: nop
    
            goto L_80331C14;
    }
    // 0x80331BF8: nop

    // 0x80331BFC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331C00: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80331C04: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x80331C08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331C0C: b           L_80331C2C
    // 0x80331C10: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_80331C2C;
    // 0x80331C10: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331C14:
    // 0x80331C14: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331C18: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x80331C1C: sh          $t8, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r24;
    // 0x80331C20: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331C24: nop

    // 0x80331C28: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80331C2C:
    // 0x80331C2C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331C30: b           L_80331C50
    // 0x80331C34: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
        goto L_80331C50;
    // 0x80331C34: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
L_80331C38:
    // 0x80331C38: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331C3C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80331C40: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80331C44: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331C48: nop

    // 0x80331C4C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80331C50:
    // 0x80331C50: b           L_80331C58
    // 0x80331C54: nop

        goto L_80331C58;
    // 0x80331C54: nop

L_80331C58:
    // 0x80331C58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331C60: jr          $ra
    // 0x80331C64: nop

    return;
    // 0x80331C64: nop

;}
RECOMP_FUNC void func_80335AF0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335AF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80335AF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80335AF8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80335AFC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80335B00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335B04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335B08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335B0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335B10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335B14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335B18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335B1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335B20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335B24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335B28: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80335B2C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335B30: nop

    // 0x80335B34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335B38: nop

    // 0x80335B3C: bne         $t1, $zero, L_80335B80
    if (ctx->r9 != 0) {
        // 0x80335B40: nop
    
            goto L_80335B80;
    }
    // 0x80335B40: nop

    // 0x80335B44: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335B48: nop

    // 0x80335B4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335B50: nop

    // 0x80335B54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335B58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335B5C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335B60: nop

    // 0x80335B64: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80335B68: nop

    // 0x80335B6C: addiu       $t7, $t6, 0xC
    ctx->r15 = ADD32(ctx->r14, 0XC);
    // 0x80335B70: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80335B74: nop

    // 0x80335B78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80335B7C: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
L_80335B80:
    // 0x80335B80: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335B84: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80335B88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335B8C: lwc1        $f8, 0x40($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X40);
    // 0x80335B90: nop

    // 0x80335B94: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80335B98: swc1        $f16, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f16.u32l;
    // 0x80335B9C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335BA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335BA4: lwc1        $f18, 0x40($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X40);
    // 0x80335BA8: nop

    // 0x80335BAC: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80335BB0: nop

    // 0x80335BB4: bc1f        L_80335BE0
    if (!c1cs) {
        // 0x80335BB8: nop
    
            goto L_80335BE0;
    }
    // 0x80335BB8: nop

    // 0x80335BBC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80335BC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335BC4: nop

    // 0x80335BC8: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x80335BCC: nop

    // 0x80335BD0: bc1f        L_80335BE0
    if (!c1cs) {
        // 0x80335BD4: nop
    
            goto L_80335BE0;
    }
    // 0x80335BD4: nop

    // 0x80335BD8: b           L_80335C18
    // 0x80335BDC: nop

        goto L_80335C18;
    // 0x80335BDC: nop

L_80335BE0:
    // 0x80335BE0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335BE4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335BE8: lwc1        $f10, 0x7DBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7DBC);
    // 0x80335BEC: lwc1        $f8, 0x40($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80335BF0: nop

    // 0x80335BF4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80335BF8: nop

    // 0x80335BFC: bc1f        L_80335C18
    if (!c1cs) {
        // 0x80335C00: nop
    
            goto L_80335C18;
    }
    // 0x80335C00: nop

    // 0x80335C04: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335C08: lwc1        $f16, 0x7DC0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7DC0);
    // 0x80335C0C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80335C10: nop

    // 0x80335C14: swc1        $f16, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f16.u32l;
L_80335C18:
    // 0x80335C18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335C1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335C20: jal         0x80029D8C
    // 0x80335C24: nop

    func_80029D8C(rdram, ctx);
        goto after_0;
    // 0x80335C24: nop

    after_0:
    // 0x80335C28: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80335C2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335C30: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80335C34: nop

    // 0x80335C38: bne         $t4, $at, L_80335CFC
    if (ctx->r12 != ctx->r1) {
        // 0x80335C3C: nop
    
            goto L_80335CFC;
    }
    // 0x80335C3C: nop

    // 0x80335C40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335C44: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335C48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335C4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335C50: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80335C54: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80335C58: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335C5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80335C60: jal         0x800295C0
    // 0x80335C64: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x80335C64: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x80335C68: beq         $v0, $zero, L_80335CF4
    if (ctx->r2 == 0) {
        // 0x80335C6C: nop
    
            goto L_80335CF4;
    }
    // 0x80335C6C: nop

    // 0x80335C70: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335C74: nop

    // 0x80335C78: lbu         $t6, 0x132($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X132);
    // 0x80335C7C: nop

    // 0x80335C80: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80335C84: sb          $t7, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r15;
    // 0x80335C88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335C8C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335C90: addiu       $a3, $a3, -0x5C58
    ctx->r7 = ADD32(ctx->r7, -0X5C58);
    // 0x80335C94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335C98: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80335C9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335CA0: jal         0x8001ABF4
    // 0x80335CA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80335CA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80335CA8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335CAC: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x80335CB0: sh          $t5, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r13;
    // 0x80335CB4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80335CB8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335CBC: nop

    // 0x80335CC0: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x80335CC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335CC8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335CCC: nop

    // 0x80335CD0: swc1        $f8, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f8.u32l;
    // 0x80335CD4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80335CD8: nop

    // 0x80335CDC: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80335CE0: nop

    // 0x80335CE4: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x80335CE8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80335CEC: nop

    // 0x80335CF0: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
L_80335CF4:
    // 0x80335CF4: b           L_80335D3C
    // 0x80335CF8: nop

        goto L_80335D3C;
    // 0x80335CF8: nop

L_80335CFC:
    // 0x80335CFC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80335D00: nop

    // 0x80335D04: lh          $t6, 0xA8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XA8);
    // 0x80335D08: nop

    // 0x80335D0C: bne         $t6, $zero, L_80335D24
    if (ctx->r14 != 0) {
        // 0x80335D10: nop
    
            goto L_80335D24;
    }
    // 0x80335D10: nop

    // 0x80335D14: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335D18: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80335D1C: b           L_80335D3C
    // 0x80335D20: sh          $t7, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r15;
        goto L_80335D3C;
    // 0x80335D20: sh          $t7, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r15;
L_80335D24:
    // 0x80335D24: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335D28: nop

    // 0x80335D2C: lh          $t8, 0xA8($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XA8);
    // 0x80335D30: nop

    // 0x80335D34: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80335D38: sh          $t9, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r25;
L_80335D3C:
    // 0x80335D3C: b           L_80335D44
    // 0x80335D40: nop

        goto L_80335D44;
    // 0x80335D40: nop

L_80335D44:
    // 0x80335D44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80335D48: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80335D4C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80335D50: jr          $ra
    // 0x80335D54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80335D54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80332038_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332038: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033203C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332040: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332044: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332048: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033204C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332050: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332054: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332058: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033205C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332060: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332064: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332068: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033206C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332070: nop

    // 0x80332074: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332078: nop

    // 0x8033207C: bne         $t1, $zero, L_8033214C
    if (ctx->r9 != 0) {
        // 0x80332080: nop
    
            goto L_8033214C;
    }
    // 0x80332080: nop

    // 0x80332084: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332088: nop

    // 0x8033208C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332090: nop

    // 0x80332094: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332098: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033209C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803320A0: nop

    // 0x803320A4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803320A8: nop

    // 0x803320AC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803320B0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803320B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803320B8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803320BC: nop

    // 0x803320C0: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x803320C4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803320C8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803320CC: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x803320D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320D4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803320D8: addiu       $t0, $t0, -0x5DF0
    ctx->r8 = ADD32(ctx->r8, -0X5DF0);
    // 0x803320DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320E0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803320E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803320E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803320EC: jal         0x8001C0EC
    // 0x803320F0: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803320F0: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x803320F4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803320F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803320FC: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x80332100: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80332104: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332108: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033210C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332110: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332114: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332118: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033211C: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x80332120: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332124: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332128: lh          $t5, 0xAC($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAC);
    // 0x8033212C: nop

    // 0x80332130: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332134: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332138: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033213C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332140: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332144: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332148: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8033214C:
    // 0x8033214C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332150: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332154: jal         0x8002A8B4
    // 0x80332158: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80332158: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x8033215C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332160: nop

    // 0x80332164: lwc1        $f6, 0x3C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80332168: nop

    // 0x8033216C: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
    // 0x80332170: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332174: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332178: jal         0x80029C40
    // 0x8033217C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x8033217C: nop

    after_2:
    // 0x80332180: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332184: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332188: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033218C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332194: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x80332198: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033219C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803321A0: jal         0x80029018
    // 0x803321A4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x803321A4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x803321A8: beq         $v0, $zero, L_803321F0
    if (ctx->r2 == 0) {
        // 0x803321AC: nop
    
            goto L_803321F0;
    }
    // 0x803321AC: nop

    // 0x803321B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803321B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803321B8: nop

    // 0x803321BC: swc1        $f16, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f16.u32l;
    // 0x803321C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803321C4: nop

    // 0x803321C8: lwc1        $f18, 0x2C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x803321CC: nop

    // 0x803321D0: swc1        $f18, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f18.u32l;
    // 0x803321D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803321D8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803321DC: nop

    // 0x803321E0: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
    // 0x803321E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803321E8: nop

    // 0x803321EC: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
L_803321F0:
    // 0x803321F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803321F8: jal         0x8001B4AC
    // 0x803321FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803321FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332200: beq         $v0, $zero, L_80332290
    if (ctx->r2 == 0) {
        // 0x80332204: nop
    
            goto L_80332290;
    }
    // 0x80332204: nop

    // 0x80332208: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033220C: nop

    // 0x80332210: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x80332214: nop

    // 0x80332218: bne         $t2, $zero, L_8033226C
    if (ctx->r10 != 0) {
        // 0x8033221C: nop
    
            goto L_8033226C;
    }
    // 0x8033221C: nop

    // 0x80332220: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332224: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x80332228: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x8033222C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332230: nop

    // 0x80332234: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80332238: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033223C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332240: nop

    // 0x80332244: swc1        $f6, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f6.u32l;
    // 0x80332248: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033224C: nop

    // 0x80332250: lwc1        $f8, 0x2C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80332254: nop

    // 0x80332258: swc1        $f8, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f8.u32l;
    // 0x8033225C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332260: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332264: b           L_80332290
    // 0x80332268: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
        goto L_80332290;
    // 0x80332268: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
L_8033226C:
    // 0x8033226C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332270: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x80332274: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332278: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033227C: nop

    // 0x80332280: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x80332284: nop

    // 0x80332288: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8033228C: sh          $t6, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r14;
L_80332290:
    // 0x80332290: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332294: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332298: lh          $t7, 0xAC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAC);
    // 0x8033229C: lwc1        $f16, 0x24($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X24);
    // 0x803322A0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803322A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803322A8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803322AC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803322B0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803322B4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803322B8: swc1        $f16, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f16.u32l;
    // 0x803322BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803322C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322C4: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x803322C8: lwc1        $f18, 0x2C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x803322CC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x803322D0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x803322D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803322D8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x803322DC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803322E0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803322E4: swc1        $f18, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f18.u32l;
    // 0x803322E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803322EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322F0: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x803322F4: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803322F8: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x803322FC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332300: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332304: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332308: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033230C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332310: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80332314: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332318: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033231C: lh          $t5, 0xAC($t1)
    ctx->r13 = MEM_H(ctx->r9, 0XAC);
    // 0x80332320: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80332324: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332328: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033232C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332330: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332334: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332338: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033233C: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x80332340: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332344: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332348: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x8033234C: lwc1        $f8, 0x44($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80332350: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332354: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332358: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033235C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332360: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332364: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332368: swc1        $f8, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f8.u32l;
    // 0x8033236C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332370: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332374: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x80332378: lwc1        $f10, 0x24($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X24);
    // 0x8033237C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332380: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332384: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332388: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033238C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332390: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332394: swc1        $f10, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f10.u32l;
    // 0x80332398: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033239C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803323A0: lh          $t1, 0xAA($t6)
    ctx->r9 = MEM_H(ctx->r14, 0XAA);
    // 0x803323A4: lwc1        $f16, 0x2C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803323A8: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x803323AC: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x803323B0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803323B4: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x803323B8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803323BC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803323C0: swc1        $f16, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f16.u32l;
    // 0x803323C4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803323C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803323CC: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x803323D0: lwc1        $f18, 0x1C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803323D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803323D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803323DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803323E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803323E4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803323E8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803323EC: swc1        $f18, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f18.u32l;
    // 0x803323F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803323F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803323F8: lh          $t3, 0xAA($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XAA);
    // 0x803323FC: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80332400: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332404: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332408: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033240C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332410: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332414: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332418: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x8033241C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332420: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332424: lh          $t6, 0xAA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAA);
    // 0x80332428: lwc1        $f6, 0x44($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8033242C: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80332430: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80332434: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332438: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8033243C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332440: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332444: swc1        $f6, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f6.u32l;
    // 0x80332448: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033244C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332450: lh          $t7, 0xBC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XBC);
    // 0x80332454: lwc1        $f8, 0x24($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X24);
    // 0x80332458: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033245C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332460: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332464: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332468: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033246C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332470: swc1        $f8, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f8.u32l;
    // 0x80332474: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332478: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033247C: lh          $t0, 0xBC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBC);
    // 0x80332480: lwc1        $f10, 0x2C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80332484: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80332488: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x8033248C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332490: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80332494: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332498: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033249C: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
    // 0x803324A0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803324A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803324A8: lh          $t2, 0xBC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBC);
    // 0x803324AC: lwc1        $f16, 0x1C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803324B0: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x803324B4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803324B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803324BC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803324C0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803324C4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803324C8: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x803324CC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803324D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803324D4: lh          $t5, 0xBC($t1)
    ctx->r13 = MEM_H(ctx->r9, 0XBC);
    // 0x803324D8: lwc1        $f18, 0x3C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803324DC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803324E0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803324E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803324E8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803324EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803324F0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803324F4: swc1        $f18, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f18.u32l;
    // 0x803324F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803324FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332500: lh          $t9, 0xBC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBC);
    // 0x80332504: lwc1        $f4, 0x44($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80332508: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033250C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332510: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332514: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332518: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033251C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332520: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x80332524: b           L_8033252C
    // 0x80332528: nop

        goto L_8033252C;
    // 0x80332528: nop

L_8033252C:
    // 0x8033252C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332534: jr          $ra
    // 0x80332538: nop

    return;
    // 0x80332538: nop

;}
RECOMP_FUNC void func_80336A0C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336A0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336A10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336A14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336A18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336A1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336A20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336A24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336A2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336A34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336A38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336A3C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336A40: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336A44: nop

    // 0x80336A48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336A4C: nop

    // 0x80336A50: bne         $t1, $zero, L_80336AC0
    if (ctx->r9 != 0) {
        // 0x80336A54: nop
    
            goto L_80336AC0;
    }
    // 0x80336A54: nop

    // 0x80336A58: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336A5C: nop

    // 0x80336A60: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336A64: nop

    // 0x80336A68: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336A6C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336A70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336A74: nop

    // 0x80336A78: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336A7C: nop

    // 0x80336A80: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336A84: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336A88: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80336A8C: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x80336A90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336A94: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80336A98: addiu       $t9, $t9, -0x5BB0
    ctx->r25 = ADD32(ctx->r25, -0X5BB0);
    // 0x80336A9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336AA0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80336AA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336AA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80336AAC: jal         0x8001C0EC
    // 0x80336AB0: addiu       $a3, $zero, 0xDB
    ctx->r7 = ADD32(0, 0XDB);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336AB0: addiu       $a3, $zero, 0xDB
    ctx->r7 = ADD32(0, 0XDB);
    after_0:
    // 0x80336AB4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336AB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80336ABC: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
L_80336AC0:
    // 0x80336AC0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80336AC4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80336AC8: lwc1        $f4, 0x129C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X129C);
    // 0x80336ACC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80336AD0: nop

    // 0x80336AD4: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x80336AD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336ADC: nop

    // 0x80336AE0: lwc1        $f6, 0x3C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80336AE4: nop

    // 0x80336AE8: swc1        $f6, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f6.u32l;
    // 0x80336AEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336AF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336AF4: jal         0x8001B4AC
    // 0x80336AF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80336AF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80336AFC: beq         $v0, $zero, L_80336B4C
    if (ctx->r2 == 0) {
        // 0x80336B00: nop
    
            goto L_80336B4C;
    }
    // 0x80336B00: nop

    // 0x80336B04: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336B08: nop

    // 0x80336B0C: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80336B10: nop

    // 0x80336B14: bne         $t5, $zero, L_80336B34
    if (ctx->r13 != 0) {
        // 0x80336B18: nop
    
            goto L_80336B34;
    }
    // 0x80336B18: nop

    // 0x80336B1C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336B20: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80336B24: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80336B28: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336B2C: b           L_80336B4C
    // 0x80336B30: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_80336B4C;
    // 0x80336B30: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80336B34:
    // 0x80336B34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336B38: nop

    // 0x80336B3C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80336B40: nop

    // 0x80336B44: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x80336B48: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_80336B4C:
    // 0x80336B4C: b           L_80336B54
    // 0x80336B50: nop

        goto L_80336B54;
    // 0x80336B50: nop

L_80336B54:
    // 0x80336B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336B58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336B5C: jr          $ra
    // 0x80336B60: nop

    return;
    // 0x80336B60: nop

;}
RECOMP_FUNC void func_803306A4_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803306A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803306A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803306AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803306B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803306B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803306B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803306BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803306C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803306C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803306C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803306CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803306D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803306D4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803306D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803306DC: nop

    // 0x803306E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803306E4: nop

    // 0x803306E8: bne         $t1, $zero, L_80330740
    if (ctx->r9 != 0) {
        // 0x803306EC: nop
    
            goto L_80330740;
    }
    // 0x803306EC: nop

    // 0x803306F0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803306F4: nop

    // 0x803306F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803306FC: nop

    // 0x80330700: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330704: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330708: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033070C: nop

    // 0x80330710: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330714: nop

    // 0x80330718: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033071C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330720: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330724: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80330728: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033072C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330730: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330734: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80330738: jal         0x8001C0EC
    // 0x8033073C: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033073C: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_80330740:
    // 0x80330740: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330744: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330748: jal         0x8001B4AC
    // 0x8033074C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033074C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330750: beq         $v0, $zero, L_80330770
    if (ctx->r2 == 0) {
        // 0x80330754: nop
    
            goto L_80330770;
    }
    // 0x80330754: nop

    // 0x80330758: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033075C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80330760: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330764: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330768: nop

    // 0x8033076C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330770:
    // 0x80330770: b           L_80330778
    // 0x80330774: nop

        goto L_80330778;
    // 0x80330774: nop

L_80330778:
    // 0x80330778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033077C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330780: jr          $ra
    // 0x80330784: nop

    return;
    // 0x80330784: nop

;}
RECOMP_FUNC void func_80336D28_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336D28: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80336D2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336D30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336D34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336D38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336D3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336D40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336D44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336D48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336D4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336D50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336D54: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80336D58: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80336D5C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80336D60: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80336D64: b           L_80336D6C
    // 0x80336D68: nop

        goto L_80336D6C;
    // 0x80336D68: nop

L_80336D6C:
    // 0x80336D6C: jr          $ra
    // 0x80336D70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80336D70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80330094_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330094: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033009C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803300A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803300A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803300A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803300AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803300B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803300C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803300C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803300C8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803300CC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803300D0: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x803300D4: nop

    // 0x803300D8: bne         $t0, $zero, L_803301B0
    if (ctx->r8 != 0) {
        // 0x803300DC: nop
    
            goto L_803301B0;
    }
    // 0x803300DC: nop

    // 0x803300E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803300E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803300E8: nop

    // 0x803300EC: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x803300F0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803300F4: nop

    // 0x803300F8: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x803300FC: nop

    // 0x80330100: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
    // 0x80330104: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330108: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033010C: nop

    // 0x80330110: swc1        $f8, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f8.u32l;
    // 0x80330114: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330118: nop

    // 0x8033011C: sh          $zero, 0x108($t4)
    MEM_H(0X108, ctx->r12) = 0;
    // 0x80330120: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80330124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330128: jal         0x80069E60
    // 0x8033012C: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x8033012C: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x80330130: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330134: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80330138: lh          $s0, 0xA4($t5)
    ctx->r16 = MEM_H(ctx->r13, 0XA4);
    // 0x8033013C: nop

    // 0x80330140: beq         $s0, $at, L_80330174
    if (ctx->r16 == ctx->r1) {
        // 0x80330144: nop
    
            goto L_80330174;
    }
    // 0x80330144: nop

    // 0x80330148: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8033014C: beq         $s0, $at, L_80330174
    if (ctx->r16 == ctx->r1) {
        // 0x80330150: nop
    
            goto L_80330174;
    }
    // 0x80330150: nop

    // 0x80330154: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80330158: beq         $s0, $at, L_80330174
    if (ctx->r16 == ctx->r1) {
        // 0x8033015C: nop
    
            goto L_80330174;
    }
    // 0x8033015C: nop

    // 0x80330160: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80330164: beq         $s0, $at, L_80330174
    if (ctx->r16 == ctx->r1) {
        // 0x80330168: nop
    
            goto L_80330174;
    }
    // 0x80330168: nop

    // 0x8033016C: b           L_80330188
    // 0x80330170: nop

        goto L_80330188;
    // 0x80330170: nop

L_80330174:
    // 0x80330174: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330178: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8033017C: sh          $t6, 0xB8($t7)
    MEM_H(0XB8, ctx->r15) = ctx->r14;
    // 0x80330180: b           L_803301A8
    // 0x80330184: nop

        goto L_803301A8;
    // 0x80330184: nop

L_80330188:
    // 0x80330188: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033018C: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x80330190: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330194: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330198: nop

    // 0x8033019C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x803301A0: b           L_803301A8
    // 0x803301A4: nop

        goto L_803301A8;
    // 0x803301A4: nop

L_803301A8:
    // 0x803301A8: b           L_803304C8
    // 0x803301AC: nop

        goto L_803304C8;
    // 0x803301AC: nop

L_803301B0:
    // 0x803301B0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x803301B4: lw          $t1, 0x7A64($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A64);
    // 0x803301B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803301BC: bne         $t1, $at, L_803304C8
    if (ctx->r9 != ctx->r1) {
        // 0x803301C0: nop
    
            goto L_803304C8;
    }
    // 0x803301C0: nop

    // 0x803301C4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803301C8: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x803301CC: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
    // 0x803301D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803301D4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803301D8: addiu       $a3, $a3, -0x5D68
    ctx->r7 = ADD32(ctx->r7, -0X5D68);
    // 0x803301DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803301E0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x803301E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803301E8: jal         0x8001ABF4
    // 0x803301EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803301EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803301F0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803301F4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x803301F8: lh          $t5, 0x100($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X100);
    // 0x803301FC: nop

    // 0x80330200: bne         $t5, $at, L_80330218
    if (ctx->r13 != ctx->r1) {
        // 0x80330204: nop
    
            goto L_80330218;
    }
    // 0x80330204: nop

    // 0x80330208: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033020C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330210: b           L_80330248
    // 0x80330214: sh          $t6, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r14;
        goto L_80330248;
    // 0x80330214: sh          $t6, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r14;
L_80330218:
    // 0x80330218: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033021C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80330220: lh          $t9, 0x100($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X100);
    // 0x80330224: nop

    // 0x80330228: bne         $t9, $at, L_80330248
    if (ctx->r25 != ctx->r1) {
        // 0x8033022C: nop
    
            goto L_80330248;
    }
    // 0x8033022C: nop

    // 0x80330230: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330234: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80330238: sh          $t0, 0xB0($t1)
    MEM_H(0XB0, ctx->r9) = ctx->r8;
    // 0x8033023C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330240: nop

    // 0x80330244: sh          $zero, 0xAE($t2)
    MEM_H(0XAE, ctx->r10) = 0;
L_80330248:
    // 0x80330248: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033024C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330250: lh          $s0, 0xB0($t3)
    ctx->r16 = MEM_H(ctx->r11, 0XB0);
    // 0x80330254: nop

    // 0x80330258: beq         $s0, $at, L_80330274
    if (ctx->r16 == ctx->r1) {
        // 0x8033025C: nop
    
            goto L_80330274;
    }
    // 0x8033025C: nop

    // 0x80330260: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330264: beq         $s0, $at, L_80330324
    if (ctx->r16 == ctx->r1) {
        // 0x80330268: nop
    
            goto L_80330324;
    }
    // 0x80330268: nop

    // 0x8033026C: b           L_80330414
    // 0x80330270: nop

        goto L_80330414;
    // 0x80330270: nop

L_80330274:
    // 0x80330274: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330278: nop

    // 0x8033027C: lh          $t5, 0xA4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA4);
    // 0x80330280: nop

    // 0x80330284: addiu       $t6, $t5, -0x5
    ctx->r14 = ADD32(ctx->r13, -0X5);
    // 0x80330288: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x8033028C: beq         $at, $zero, L_803302E4
    if (ctx->r1 == 0) {
        // 0x80330290: nop
    
            goto L_803302E4;
    }
    // 0x80330290: nop

    // 0x80330294: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330298: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033029C: addu        $at, $at, $t6
    gpr jr_addend_803302A8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803302A0: lw          $t6, 0x7C50($at)
    ctx->r14 = ADD32(ctx->r1, 0X7C50);
    // 0x803302A4: nop

    // 0x803302A8: jr          $t6
    // 0x803302AC: nop

    switch (jr_addend_803302A8 >> 2) {
        case 0: goto L_803302B0; break;
        case 1: goto L_803302B0; break;
        case 2: goto L_803302E4; break;
        case 3: goto L_803302E4; break;
        case 4: goto L_803302B0; break;
        case 5: goto L_803302B0; break;
        case 6: goto L_803302B0; break;
        case 7: goto L_803302E4; break;
        case 8: goto L_803302E4; break;
        case 9: goto L_803302E4; break;
        case 10: goto L_803302C4; break;
        case 11: goto L_803302C4; break;
        case 12: goto L_803302C4; break;
        case 13: goto L_803302C4; break;
        default: switch_error(__func__, 0x803302A8, 0x80337C50);
    }
    // 0x803302AC: nop

L_803302B0:
    // 0x803302B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803302B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803302B8: sh          $t7, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r15;
    // 0x803302BC: b           L_8033031C
    // 0x803302C0: nop

        goto L_8033031C;
    // 0x803302C0: nop

L_803302C4:
    // 0x803302C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803302C8: addiu       $t9, $zero, 0x15
    ctx->r25 = ADD32(0, 0X15);
    // 0x803302CC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803302D0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803302D4: nop

    // 0x803302D8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803302DC: b           L_8033031C
    // 0x803302E0: nop

        goto L_8033031C;
    // 0x803302E0: nop

L_803302E4:
    // 0x803302E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803302E8: nop

    // 0x803302EC: lh          $t3, 0xAE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAE);
    // 0x803302F0: nop

    // 0x803302F4: bne         $t3, $zero, L_80330314
    if (ctx->r11 != 0) {
        // 0x803302F8: nop
    
            goto L_80330314;
    }
    // 0x803302F8: nop

    // 0x803302FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330300: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x80330304: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80330308: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033030C: nop

    // 0x80330310: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80330314:
    // 0x80330314: b           L_8033031C
    // 0x80330318: nop

        goto L_8033031C;
    // 0x80330318: nop

L_8033031C:
    // 0x8033031C: b           L_803304C8
    // 0x80330320: nop

        goto L_803304C8;
    // 0x80330320: nop

L_80330324:
    // 0x80330324: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330328: nop

    // 0x8033032C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80330330: nop

    // 0x80330334: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80330338: sltiu       $at, $t9, 0x14
    ctx->r1 = ctx->r25 < 0X14 ? 1 : 0;
    // 0x8033033C: beq         $at, $zero, L_803303D4
    if (ctx->r1 == 0) {
        // 0x80330340: nop
    
            goto L_803303D4;
    }
    // 0x80330340: nop

    // 0x80330344: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330348: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033034C: addu        $at, $at, $t9
    gpr jr_addend_80330358 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330350: lw          $t9, 0x7C88($at)
    ctx->r25 = ADD32(ctx->r1, 0X7C88);
    // 0x80330354: nop

    // 0x80330358: jr          $t9
    // 0x8033035C: nop

    switch (jr_addend_80330358 >> 2) {
        case 0: goto L_80330360; break;
        case 1: goto L_80330360; break;
        case 2: goto L_80330360; break;
        case 3: goto L_80330360; break;
        case 4: goto L_803303D4; break;
        case 5: goto L_803303D4; break;
        case 6: goto L_803303D4; break;
        case 7: goto L_803303D4; break;
        case 8: goto L_803303D4; break;
        case 9: goto L_803303D4; break;
        case 10: goto L_803303D4; break;
        case 11: goto L_803303D4; break;
        case 12: goto L_803303D4; break;
        case 13: goto L_803303D4; break;
        case 14: goto L_803303D4; break;
        case 15: goto L_803303D4; break;
        case 16: goto L_803303D4; break;
        case 17: goto L_803303D4; break;
        case 18: goto L_803303C0; break;
        case 19: goto L_803303C0; break;
        default: switch_error(__func__, 0x80330358, 0x80337C88);
    }
    // 0x8033035C: nop

L_80330360:
    // 0x80330360: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330364: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80330368: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033036C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330370: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330374: nop

    // 0x80330378: swc1        $f10, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f10.u32l;
    // 0x8033037C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330380: nop

    // 0x80330384: lwc1        $f16, 0x2C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80330388: nop

    // 0x8033038C: swc1        $f16, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f16.u32l;
    // 0x80330390: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330394: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330398: nop

    // 0x8033039C: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
    // 0x803303A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803303A4: nop

    // 0x803303A8: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
    // 0x803303AC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803303B0: nop

    // 0x803303B4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x803303B8: b           L_8033040C
    // 0x803303BC: nop

        goto L_8033040C;
    // 0x803303BC: nop

L_803303C0:
    // 0x803303C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803303C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803303C8: sh          $t7, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r15;
    // 0x803303CC: b           L_8033040C
    // 0x803303D0: nop

        goto L_8033040C;
    // 0x803303D0: nop

L_803303D4:
    // 0x803303D4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803303D8: nop

    // 0x803303DC: lh          $t0, 0xAE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAE);
    // 0x803303E0: nop

    // 0x803303E4: bne         $t0, $zero, L_80330404
    if (ctx->r8 != 0) {
        // 0x803303E8: nop
    
            goto L_80330404;
    }
    // 0x803303E8: nop

    // 0x803303EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803303F0: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x803303F4: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x803303F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803303FC: nop

    // 0x80330400: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80330404:
    // 0x80330404: b           L_8033040C
    // 0x80330408: nop

        goto L_8033040C;
    // 0x80330408: nop

L_8033040C:
    // 0x8033040C: b           L_803304C8
    // 0x80330410: nop

        goto L_803304C8;
    // 0x80330410: nop

L_80330414:
    // 0x80330414: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330418: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033041C: lh          $s0, 0xA4($t4)
    ctx->r16 = MEM_H(ctx->r12, 0XA4);
    // 0x80330420: nop

    // 0x80330424: beq         $s0, $at, L_80330458
    if (ctx->r16 == ctx->r1) {
        // 0x80330428: nop
    
            goto L_80330458;
    }
    // 0x80330428: nop

    // 0x8033042C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330430: beq         $s0, $at, L_80330458
    if (ctx->r16 == ctx->r1) {
        // 0x80330434: nop
    
            goto L_80330458;
    }
    // 0x80330434: nop

    // 0x80330438: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033043C: beq         $s0, $at, L_80330458
    if (ctx->r16 == ctx->r1) {
        // 0x80330440: nop
    
            goto L_80330458;
    }
    // 0x80330440: nop

    // 0x80330444: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80330448: beq         $s0, $at, L_80330458
    if (ctx->r16 == ctx->r1) {
        // 0x8033044C: nop
    
            goto L_80330458;
    }
    // 0x8033044C: nop

    // 0x80330450: b           L_803304B8
    // 0x80330454: nop

        goto L_803304B8;
    // 0x80330454: nop

L_80330458:
    // 0x80330458: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033045C: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x80330460: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80330464: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330468: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033046C: nop

    // 0x80330470: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x80330474: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330478: nop

    // 0x8033047C: lwc1        $f6, 0x2C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80330480: nop

    // 0x80330484: swc1        $f6, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f6.u32l;
    // 0x80330488: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033048C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330490: nop

    // 0x80330494: swc1        $f8, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f8.u32l;
    // 0x80330498: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033049C: nop

    // 0x803304A0: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x803304A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803304A8: nop

    // 0x803304AC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803304B0: b           L_803304C0
    // 0x803304B4: nop

        goto L_803304C0;
    // 0x803304B4: nop

L_803304B8:
    // 0x803304B8: b           L_803304C0
    // 0x803304BC: nop

        goto L_803304C0;
    // 0x803304BC: nop

L_803304C0:
    // 0x803304C0: b           L_803304C8
    // 0x803304C4: nop

        goto L_803304C8;
    // 0x803304C4: nop

L_803304C8:
    // 0x803304C8: b           L_803304D0
    // 0x803304CC: nop

        goto L_803304D0;
    // 0x803304CC: nop

L_803304D0:
    // 0x803304D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803304D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803304D8: jr          $ra
    // 0x803304DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803304DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803374CC_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803374CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803374D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803374D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803374D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803374DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803374E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803374E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803374E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803374EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803374F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803374F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803374F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803374FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337500: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337504: nop

    // 0x80337508: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033750C: nop

    // 0x80337510: bne         $t1, $zero, L_80337568
    if (ctx->r9 != 0) {
        // 0x80337514: nop
    
            goto L_80337568;
    }
    // 0x80337514: nop

    // 0x80337518: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033751C: nop

    // 0x80337520: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337524: nop

    // 0x80337528: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033752C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337530: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337534: nop

    // 0x80337538: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033753C: nop

    // 0x80337540: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337544: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337548: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033754C: addiu       $t7, $t7, -0x5B9C
    ctx->r15 = ADD32(ctx->r15, -0X5B9C);
    // 0x80337550: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337554: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337558: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033755C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80337560: jal         0x8001C0EC
    // 0x80337564: addiu       $a3, $zero, 0xD9
    ctx->r7 = ADD32(0, 0XD9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337564: addiu       $a3, $zero, 0xD9
    ctx->r7 = ADD32(0, 0XD9);
    after_0:
L_80337568:
    // 0x80337568: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033756C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337570: jal         0x8001B4AC
    // 0x80337574: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337574: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80337578: beq         $v0, $zero, L_80337598
    if (ctx->r2 == 0) {
        // 0x8033757C: nop
    
            goto L_80337598;
    }
    // 0x8033757C: nop

    // 0x80337580: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80337584: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80337588: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033758C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337590: nop

    // 0x80337594: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80337598:
    // 0x80337598: b           L_803375A0
    // 0x8033759C: nop

        goto L_803375A0;
    // 0x8033759C: nop

L_803375A0:
    // 0x803375A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803375A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803375A8: jr          $ra
    // 0x803375AC: nop

    return;
    // 0x803375AC: nop

;}
RECOMP_FUNC void func_80336B64_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336B64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336B68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336B6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336B70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336B74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336B78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336B7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336B80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336B84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336B88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336B8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336B90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336B94: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336B98: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336B9C: nop

    // 0x80336BA0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336BA4: nop

    // 0x80336BA8: bne         $t1, $zero, L_80336C0C
    if (ctx->r9 != 0) {
        // 0x80336BAC: nop
    
            goto L_80336C0C;
    }
    // 0x80336BAC: nop

    // 0x80336BB0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336BB4: nop

    // 0x80336BB8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336BBC: nop

    // 0x80336BC0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336BC4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336BC8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336BCC: nop

    // 0x80336BD0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336BD4: nop

    // 0x80336BD8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336BDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336BE0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336BE4: addiu       $t7, $t7, -0x5BB0
    ctx->r15 = ADD32(ctx->r15, -0X5BB0);
    // 0x80336BE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336BEC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336BF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336BF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80336BF8: jal         0x8001C0EC
    // 0x80336BFC: addiu       $a3, $zero, 0xDB
    ctx->r7 = ADD32(0, 0XDB);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336BFC: addiu       $a3, $zero, 0xDB
    ctx->r7 = ADD32(0, 0XDB);
    after_0:
    // 0x80336C00: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336C04: nop

    // 0x80336C08: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
L_80336C0C:
    // 0x80336C0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336C10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336C14: jal         0x8001B4AC
    // 0x80336C18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80336C18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80336C1C: beq         $v0, $zero, L_80336C34
    if (ctx->r2 == 0) {
        // 0x80336C20: nop
    
            goto L_80336C34;
    }
    // 0x80336C20: nop

    // 0x80336C24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336C28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336C2C: jal         0x8002B114
    // 0x80336C30: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80336C30: nop

    after_2:
L_80336C34:
    // 0x80336C34: b           L_80336C3C
    // 0x80336C38: nop

        goto L_80336C3C;
    // 0x80336C38: nop

L_80336C3C:
    // 0x80336C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336C44: jr          $ra
    // 0x80336C48: nop

    return;
    // 0x80336C48: nop

;}
RECOMP_FUNC void func_8033768C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033768C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337694: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80337698: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033769C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803376A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803376A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803376A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803376AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803376B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803376B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803376B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803376BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803376C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803376C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803376C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803376CC: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x803376D0: nop

    // 0x803376D4: beq         $s0, $at, L_80337708
    if (ctx->r16 == ctx->r1) {
        // 0x803376D8: nop
    
            goto L_80337708;
    }
    // 0x803376D8: nop

    // 0x803376DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803376E0: beq         $s0, $at, L_80337718
    if (ctx->r16 == ctx->r1) {
        // 0x803376E4: nop
    
            goto L_80337718;
    }
    // 0x803376E4: nop

    // 0x803376E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803376EC: beq         $s0, $at, L_80337728
    if (ctx->r16 == ctx->r1) {
        // 0x803376F0: nop
    
            goto L_80337728;
    }
    // 0x803376F0: nop

    // 0x803376F4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803376F8: beq         $s0, $at, L_80337738
    if (ctx->r16 == ctx->r1) {
        // 0x803376FC: nop
    
            goto L_80337738;
    }
    // 0x803376FC: nop

    // 0x80337700: b           L_80337748
    // 0x80337704: nop

        goto L_80337748;
    // 0x80337704: nop

L_80337708:
    // 0x80337708: jal         0x803372E8
    // 0x8033770C: nop

    func_803372E8_unk_bin_13(rdram, ctx);
        goto after_0;
    // 0x8033770C: nop

    after_0:
    // 0x80337710: b           L_80337750
    // 0x80337714: nop

        goto L_80337750;
    // 0x80337714: nop

L_80337718:
    // 0x80337718: jal         0x803373E8
    // 0x8033771C: nop

    func_803373E8_unk_bin_13(rdram, ctx);
        goto after_1;
    // 0x8033771C: nop

    after_1:
    // 0x80337720: b           L_80337750
    // 0x80337724: nop

        goto L_80337750;
    // 0x80337724: nop

L_80337728:
    // 0x80337728: jal         0x803374CC
    // 0x8033772C: nop

    func_803374CC_unk_bin_13(rdram, ctx);
        goto after_2;
    // 0x8033772C: nop

    after_2:
    // 0x80337730: b           L_80337750
    // 0x80337734: nop

        goto L_80337750;
    // 0x80337734: nop

L_80337738:
    // 0x80337738: jal         0x803375B0
    // 0x8033773C: nop

    func_803375B0_unk_bin_13(rdram, ctx);
        goto after_3;
    // 0x8033773C: nop

    after_3:
    // 0x80337740: b           L_80337750
    // 0x80337744: nop

        goto L_80337750;
    // 0x80337744: nop

L_80337748:
    // 0x80337748: b           L_80337750
    // 0x8033774C: nop

        goto L_80337750;
    // 0x8033774C: nop

L_80337750:
    // 0x80337750: b           L_80337758
    // 0x80337754: nop

        goto L_80337758;
    // 0x80337754: nop

L_80337758:
    // 0x80337758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033775C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80337760: jr          $ra
    // 0x80337764: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80337764: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80336F90_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336F90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336F94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336F98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336F9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336FA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336FA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336FA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336FAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336FB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336FB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336FB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336FBC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336FC0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336FC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336FC8: nop

    // 0x80336FCC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336FD0: nop

    // 0x80336FD4: bne         $t1, $zero, L_80337028
    if (ctx->r9 != 0) {
        // 0x80336FD8: nop
    
            goto L_80337028;
    }
    // 0x80336FD8: nop

    // 0x80336FDC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336FE0: nop

    // 0x80336FE4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336FE8: nop

    // 0x80336FEC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336FF0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336FF4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336FF8: nop

    // 0x80336FFC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337000: nop

    // 0x80337004: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337008: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033700C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80337010: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x80337014: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337018: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033701C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80337020: jal         0x80029EF8
    // 0x80337024: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80337024: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
L_80337028:
    // 0x80337028: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033702C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337030: jal         0x80028FA0
    // 0x80337034: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80337034: nop

    after_1:
    // 0x80337038: beq         $v0, $zero, L_8033706C
    if (ctx->r2 == 0) {
        // 0x8033703C: nop
    
            goto L_8033706C;
    }
    // 0x8033703C: nop

    // 0x80337040: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80337044: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80337048: lh          $t0, 0x104($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X104);
    // 0x8033704C: nop

    // 0x80337050: bne         $t0, $at, L_8033706C
    if (ctx->r8 != ctx->r1) {
        // 0x80337054: nop
    
            goto L_8033706C;
    }
    // 0x80337054: nop

    // 0x80337058: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033705C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80337060: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80337064: b           L_80337150
    // 0x80337068: nop

        goto L_80337150;
    // 0x80337068: nop

L_8033706C:
    // 0x8033706C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80337070: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80337074: lh          $t2, 0x131A($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X131A);
    // 0x80337078: nop

    // 0x8033707C: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80337080: beq         $at, $zero, L_80337118
    if (ctx->r1 == 0) {
        // 0x80337084: nop
    
            goto L_80337118;
    }
    // 0x80337084: nop

    // 0x80337088: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033708C: nop

    // 0x80337090: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80337094: nop

    // 0x80337098: bne         $t5, $zero, L_80337100
    if (ctx->r13 != 0) {
        // 0x8033709C: nop
    
            goto L_80337100;
    }
    // 0x8033709C: nop

    // 0x803370A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803370A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803370A8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803370AC: addiu       $a1, $a1, 0x7C20
    ctx->r5 = ADD32(ctx->r5, 0X7C20);
    // 0x803370B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803370B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803370B8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803370BC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803370C0: jal         0x80027464
    // 0x803370C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x803370C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x803370C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803370CC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803370D0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803370D4: lh          $t8, 0x131A($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X131A);
    // 0x803370D8: nop

    // 0x803370DC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803370E0: sh          $t9, 0x131A($t7)
    MEM_H(0X131A, ctx->r15) = ctx->r25;
    // 0x803370E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803370E8: nop

    // 0x803370EC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803370F0: nop

    // 0x803370F4: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x803370F8: b           L_80337118
    // 0x803370FC: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
        goto L_80337118;
    // 0x803370FC: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_80337100:
    // 0x80337100: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80337104: nop

    // 0x80337108: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x8033710C: nop

    // 0x80337110: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x80337114: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_80337118:
    // 0x80337118: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033711C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337120: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80337124: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80337128: jal         0x8002A0D0
    // 0x8033712C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_3;
    // 0x8033712C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_3:
    // 0x80337130: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80337134: bne         $v0, $at, L_80337148
    if (ctx->r2 != ctx->r1) {
        // 0x80337138: nop
    
            goto L_80337148;
    }
    // 0x80337138: nop

    // 0x8033713C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337140: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80337144: sh          $t5, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r13;
L_80337148:
    // 0x80337148: b           L_80337150
    // 0x8033714C: nop

        goto L_80337150;
    // 0x8033714C: nop

L_80337150:
    // 0x80337150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337158: jr          $ra
    // 0x8033715C: nop

    return;
    // 0x8033715C: nop

;}
RECOMP_FUNC void func_803379D0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803379D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803379D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803379D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803379DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803379E0: jal         0x8002B114
    // 0x803379E4: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x803379E4: nop

    after_0:
    // 0x803379E8: b           L_803379F0
    // 0x803379EC: nop

        goto L_803379F0;
    // 0x803379EC: nop

L_803379F0:
    // 0x803379F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803379F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803379F8: jr          $ra
    // 0x803379FC: nop

    return;
    // 0x803379FC: nop

;}
RECOMP_FUNC void func_80335A00_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335A00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335A04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335A08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80335A0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335A10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335A14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335A18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335A1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335A20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335A24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335A28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335A2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335A30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335A34: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335A38: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335A3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335A40: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80335A44: nop

    // 0x80335A48: beq         $s0, $at, L_80335A64
    if (ctx->r16 == ctx->r1) {
        // 0x80335A4C: nop
    
            goto L_80335A64;
    }
    // 0x80335A4C: nop

    // 0x80335A50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335A54: beq         $s0, $at, L_80335A74
    if (ctx->r16 == ctx->r1) {
        // 0x80335A58: nop
    
            goto L_80335A74;
    }
    // 0x80335A58: nop

    // 0x80335A5C: b           L_80335A84
    // 0x80335A60: nop

        goto L_80335A84;
    // 0x80335A60: nop

L_80335A64:
    // 0x80335A64: jal         0x803354DC
    // 0x80335A68: nop

    func_803354DC_unk_bin_13(rdram, ctx);
        goto after_0;
    // 0x80335A68: nop

    after_0:
    // 0x80335A6C: b           L_80335A8C
    // 0x80335A70: nop

        goto L_80335A8C;
    // 0x80335A70: nop

L_80335A74:
    // 0x80335A74: jal         0x80335664
    // 0x80335A78: nop

    func_80335664_unk_bin_13(rdram, ctx);
        goto after_1;
    // 0x80335A78: nop

    after_1:
    // 0x80335A7C: b           L_80335A8C
    // 0x80335A80: nop

        goto L_80335A8C;
    // 0x80335A80: nop

L_80335A84:
    // 0x80335A84: b           L_80335A8C
    // 0x80335A88: nop

        goto L_80335A8C;
    // 0x80335A88: nop

L_80335A8C:
    // 0x80335A8C: b           L_80335A94
    // 0x80335A90: nop

        goto L_80335A94;
    // 0x80335A90: nop

L_80335A94:
    // 0x80335A94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335A98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80335A9C: jr          $ra
    // 0x80335AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80335AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80334ABC_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334ABC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334AC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334AC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334AC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334ACC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334AD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334AD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334AD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334ADC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334AE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334AE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334AE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334AEC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334AF0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334AF4: nop

    // 0x80334AF8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334AFC: nop

    // 0x80334B00: bne         $t1, $zero, L_80334B58
    if (ctx->r9 != 0) {
        // 0x80334B04: nop
    
            goto L_80334B58;
    }
    // 0x80334B04: nop

    // 0x80334B08: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334B0C: nop

    // 0x80334B10: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334B14: nop

    // 0x80334B18: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334B1C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334B20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334B24: nop

    // 0x80334B28: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334B2C: nop

    // 0x80334B30: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334B34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B38: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334B3C: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x80334B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334B4C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80334B50: jal         0x8001C0EC
    // 0x80334B54: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334B54: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_80334B58:
    // 0x80334B58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B60: jal         0x8001B4AC
    // 0x80334B64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80334B64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334B68: beq         $v0, $zero, L_80334B7C
    if (ctx->r2 == 0) {
        // 0x80334B6C: nop
    
            goto L_80334B7C;
    }
    // 0x80334B6C: nop

    // 0x80334B70: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334B74: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80334B78: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
L_80334B7C:
    // 0x80334B7C: b           L_80334B84
    // 0x80334B80: nop

        goto L_80334B84;
    // 0x80334B80: nop

L_80334B84:
    // 0x80334B84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334B88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334B8C: jr          $ra
    // 0x80334B90: nop

    return;
    // 0x80334B90: nop

;}
RECOMP_FUNC void func_80331744_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331744: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331748: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033174C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331750: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331754: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331758: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033175C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331760: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331764: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331768: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033176C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331770: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331774: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331778: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033177C: nop

    // 0x80331780: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331784: nop

    // 0x80331788: bne         $t1, $zero, L_803317E0
    if (ctx->r9 != 0) {
        // 0x8033178C: nop
    
            goto L_803317E0;
    }
    // 0x8033178C: nop

    // 0x80331790: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331794: nop

    // 0x80331798: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033179C: nop

    // 0x803317A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803317A4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803317A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803317AC: nop

    // 0x803317B0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803317B4: nop

    // 0x803317B8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803317BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317C0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803317C4: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x803317C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803317D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803317D4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x803317D8: jal         0x8001C0EC
    // 0x803317DC: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803317DC: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_803317E0:
    // 0x803317E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317E8: jal         0x8001B4AC
    // 0x803317EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803317EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803317F0: beq         $v0, $zero, L_80331810
    if (ctx->r2 == 0) {
        // 0x803317F4: nop
    
            goto L_80331810;
    }
    // 0x803317F4: nop

    // 0x803317F8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803317FC: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x80331800: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331804: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331808: nop

    // 0x8033180C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331810:
    // 0x80331810: b           L_80331818
    // 0x80331814: nop

        goto L_80331818;
    // 0x80331814: nop

L_80331818:
    // 0x80331818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033181C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331820: jr          $ra
    // 0x80331824: nop

    return;
    // 0x80331824: nop

;}
RECOMP_FUNC void func_80330B98_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330B98: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330B9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330BA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330BA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330BA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330BAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330BB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330BB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330BB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330BBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330BC0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330BC4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330BC8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80330BCC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330BD0: nop

    // 0x80330BD4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330BD8: nop

    // 0x80330BDC: bne         $t1, $zero, L_80330E50
    if (ctx->r9 != 0) {
        // 0x80330BE0: nop
    
            goto L_80330E50;
    }
    // 0x80330BE0: nop

    // 0x80330BE4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330BE8: nop

    // 0x80330BEC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330BF0: nop

    // 0x80330BF4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330BF8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330BFC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330C00: nop

    // 0x80330C04: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330C08: nop

    // 0x80330C0C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330C10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C14: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330C18: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80330C1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C20: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330C28: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80330C2C: jal         0x8001C0EC
    // 0x80330C30: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330C30: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x80330C34: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330C38: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330C3C: lwc1        $f6, 0x7CD8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7CD8);
    // 0x80330C40: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80330C44: nop

    // 0x80330C48: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330C4C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80330C50: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330C54: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80330C58: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330C5C: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80330C60: jal         0x80015538
    // 0x80330C64: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80330C64: nop

    after_1:
    // 0x80330C68: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80330C6C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330C70: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330C74: lwc1        $f19, 0x7CE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7CE0);
    // 0x80330C78: lwc1        $f18, 0x7CE4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7CE4);
    // 0x80330C7C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80330C80: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80330C84: jal         0x80034970
    // 0x80330C88: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80330C88: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_2:
    // 0x80330C8C: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x80330C90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330C94: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330C98: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330C9C: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80330CA0: nop

    // 0x80330CA4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330CA8: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80330CAC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330CB0: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330CB4: lwc1        $f7, 0x7CE8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7CE8);
    // 0x80330CB8: lwc1        $f6, 0x7CEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7CEC);
    // 0x80330CBC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80330CC0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80330CC4: jal         0x80036570
    // 0x80330CC8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80330CC8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_3:
    // 0x80330CCC: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x80330CD0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330CD4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330CD8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80330CDC: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80330CE0: nop

    // 0x80330CE4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330CE8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80330CEC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330CF0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330CF4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330CF8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CFC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80330D00: addiu       $a1, $a1, 0x7BD8
    ctx->r5 = ADD32(ctx->r5, 0X7BD8);
    // 0x80330D04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330D08: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330D0C: jal         0x80027464
    // 0x80330D10: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80330D10: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80330D14: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330D18: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80330D1C: addiu       $t3, $t3, -0x5CE8
    ctx->r11 = ADD32(ctx->r11, -0X5CE8);
    // 0x80330D20: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330D24: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80330D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330D30: jal         0x8001C0EC
    // 0x80330D34: addiu       $a3, $zero, 0xD5
    ctx->r7 = ADD32(0, 0XD5);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80330D34: addiu       $a3, $zero, 0xD5
    ctx->r7 = ADD32(0, 0XD5);
    after_5:
    // 0x80330D38: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330D3C: jal         0x80026F10
    // 0x80330D40: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x80330D40: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_6:
    // 0x80330D44: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330D48: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x80330D4C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330D50: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80330D54: jal         0x80015538
    // 0x80330D58: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80330D58: nop

    after_7:
    // 0x80330D5C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80330D60: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330D64: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330D68: lwc1        $f19, 0x7CF0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7CF0);
    // 0x80330D6C: lwc1        $f18, 0x7CF4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7CF4);
    // 0x80330D70: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80330D74: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80330D78: jal         0x80034970
    // 0x80330D7C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x80330D7C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_8:
    // 0x80330D80: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x80330D84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330D88: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330D8C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330D90: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80330D94: nop

    // 0x80330D98: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330D9C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80330DA0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330DA4: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330DA8: lwc1        $f7, 0x7CF8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7CF8);
    // 0x80330DAC: lwc1        $f6, 0x7CFC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7CFC);
    // 0x80330DB0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80330DB4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80330DB8: jal         0x80036570
    // 0x80330DBC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_9;
    // 0x80330DBC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_9:
    // 0x80330DC0: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x80330DC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330DC8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330DCC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80330DD0: lwc1        $f18, 0x8($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80330DD4: nop

    // 0x80330DD8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330DDC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80330DE0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330DE4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330DE8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330DEC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DF0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80330DF4: addiu       $a1, $a1, 0x7BD8
    ctx->r5 = ADD32(ctx->r5, 0X7BD8);
    // 0x80330DF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330DFC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330E00: jal         0x80027464
    // 0x80330E04: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x80330E04: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x80330E08: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330E0C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80330E10: addiu       $t5, $t5, -0x5CE8
    ctx->r13 = ADD32(ctx->r13, -0X5CE8);
    // 0x80330E14: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330E18: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80330E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330E24: jal         0x8001C0EC
    // 0x80330E28: addiu       $a3, $zero, 0xD5
    ctx->r7 = ADD32(0, 0XD5);
    func_8001C0EC(rdram, ctx);
        goto after_11;
    // 0x80330E28: addiu       $a3, $zero, 0xD5
    ctx->r7 = ADD32(0, 0XD5);
    after_11:
    // 0x80330E2C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330E30: jal         0x80026F10
    // 0x80330E34: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_12;
    // 0x80330E34: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_12:
    // 0x80330E38: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330E3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E40: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x80330E44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330E48: jal         0x800175F0
    // 0x80330E4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_13;
    // 0x80330E4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
L_80330E50:
    // 0x80330E50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E58: jal         0x8001B4AC
    // 0x80330E5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_14;
    // 0x80330E5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80330E60: beq         $v0, $zero, L_80330EBC
    if (ctx->r2 == 0) {
        // 0x80330E64: nop
    
            goto L_80330EBC;
    }
    // 0x80330E64: nop

    // 0x80330E68: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330E6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330E70: lh          $t8, 0xB8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB8);
    // 0x80330E74: nop

    // 0x80330E78: bne         $t8, $at, L_80330EA4
    if (ctx->r24 != ctx->r1) {
        // 0x80330E7C: nop
    
            goto L_80330EA4;
    }
    // 0x80330E7C: nop

    // 0x80330E80: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330E84: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80330E88: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330E8C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330E90: nop

    // 0x80330E94: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80330E98: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330E9C: b           L_80330EBC
    // 0x80330EA0: sh          $zero, 0xB8($t3)
    MEM_H(0XB8, ctx->r11) = 0;
        goto L_80330EBC;
    // 0x80330EA0: sh          $zero, 0xB8($t3)
    MEM_H(0XB8, ctx->r11) = 0;
L_80330EA4:
    // 0x80330EA4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330EA8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80330EAC: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80330EB0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330EB4: nop

    // 0x80330EB8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80330EBC:
    // 0x80330EBC: b           L_80330EC4
    // 0x80330EC0: nop

        goto L_80330EC4;
    // 0x80330EC0: nop

L_80330EC4:
    // 0x80330EC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330EC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80330ECC: jr          $ra
    // 0x80330ED0: nop

    return;
    // 0x80330ED0: nop

;}
RECOMP_FUNC void func_80334D9C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334D9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334DA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334DA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334DA8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334DAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334DB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334DB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334DB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334DBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334DC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334DC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334DC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334DCC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334DD0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334DD4: nop

    // 0x80334DD8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334DDC: nop

    // 0x80334DE0: bne         $t1, $zero, L_80334E38
    if (ctx->r9 != 0) {
        // 0x80334DE4: nop
    
            goto L_80334E38;
    }
    // 0x80334DE4: nop

    // 0x80334DE8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334DEC: nop

    // 0x80334DF0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334DF4: nop

    // 0x80334DF8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334DFC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334E00: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334E04: nop

    // 0x80334E08: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334E0C: nop

    // 0x80334E10: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334E14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334E18: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334E1C: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x80334E20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334E24: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334E28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334E2C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80334E30: jal         0x8001C0EC
    // 0x80334E34: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334E34: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_80334E38:
    // 0x80334E38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334E3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334E40: jal         0x8001B4AC
    // 0x80334E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80334E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334E48: beq         $v0, $zero, L_80334EB4
    if (ctx->r2 == 0) {
        // 0x80334E4C: nop
    
            goto L_80334EB4;
    }
    // 0x80334E4C: nop

    // 0x80334E50: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80334E54: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80334E58: lh          $t0, 0x131C($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X131C);
    // 0x80334E5C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80334E60: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334E64: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334E68: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334E6C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334E70: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334E74: addu        $t3, $t1, $t9
    ctx->r11 = ADD32(ctx->r9, ctx->r25);
    // 0x80334E78: sh          $t8, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r24;
    // 0x80334E7C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80334E80: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80334E84: lh          $t2, 0x131C($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X131C);
    // 0x80334E88: nop

    // 0x80334E8C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80334E90: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334E94: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334E98: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334E9C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334EA0: addu        $t5, $t6, $t4
    ctx->r13 = ADD32(ctx->r14, ctx->r12);
    // 0x80334EA4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80334EA8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334EAC: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x80334EB0: sh          $t7, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r15;
L_80334EB4:
    // 0x80334EB4: b           L_80334EBC
    // 0x80334EB8: nop

        goto L_80334EBC;
    // 0x80334EB8: nop

L_80334EBC:
    // 0x80334EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334EC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334EC4: jr          $ra
    // 0x80334EC8: nop

    return;
    // 0x80334EC8: nop

;}
RECOMP_FUNC void func_80337838_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337838: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033783C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337840: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337844: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337848: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033784C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337850: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337854: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337858: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033785C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337860: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337864: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337868: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033786C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337870: nop

    // 0x80337874: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337878: nop

    // 0x8033787C: bne         $t1, $zero, L_803378D4
    if (ctx->r9 != 0) {
        // 0x80337880: nop
    
            goto L_803378D4;
    }
    // 0x80337880: nop

    // 0x80337884: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337888: nop

    // 0x8033788C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337890: nop

    // 0x80337894: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337898: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033789C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803378A0: nop

    // 0x803378A4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803378A8: nop

    // 0x803378AC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803378B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803378B4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803378B8: addiu       $t7, $t7, -0x5ACC
    ctx->r15 = ADD32(ctx->r15, -0X5ACC);
    // 0x803378BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803378C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803378C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803378C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803378CC: jal         0x8001C0EC
    // 0x803378D0: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803378D0: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    after_0:
L_803378D4:
    // 0x803378D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803378D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803378DC: jal         0x8001B4AC
    // 0x803378E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803378E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803378E4: beq         $v0, $zero, L_80337904
    if (ctx->r2 == 0) {
        // 0x803378E8: nop
    
            goto L_80337904;
    }
    // 0x803378E8: nop

    // 0x803378EC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803378F0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803378F4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803378F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803378FC: nop

    // 0x80337900: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80337904:
    // 0x80337904: b           L_8033790C
    // 0x80337908: nop

        goto L_8033790C;
    // 0x80337908: nop

L_8033790C:
    // 0x8033790C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337910: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337914: jr          $ra
    // 0x80337918: nop

    return;
    // 0x80337918: nop

;}
RECOMP_FUNC void func_803309A0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803309A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803309A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803309A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803309AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803309B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803309B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803309B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803309BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803309C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803309C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803309C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803309CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803309D0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803309D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803309D8: nop

    // 0x803309DC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803309E0: nop

    // 0x803309E4: bne         $t1, $zero, L_80330A3C
    if (ctx->r9 != 0) {
        // 0x803309E8: nop
    
            goto L_80330A3C;
    }
    // 0x803309E8: nop

    // 0x803309EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803309F0: nop

    // 0x803309F4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803309F8: nop

    // 0x803309FC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330A00: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330A04: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330A08: nop

    // 0x80330A0C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330A10: nop

    // 0x80330A14: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330A18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A1C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330A20: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80330A24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330A30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80330A34: jal         0x8001C0EC
    // 0x80330A38: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330A38: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_80330A3C:
    // 0x80330A3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A44: jal         0x8001B4AC
    // 0x80330A48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80330A48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330A4C: beq         $v0, $zero, L_80330A78
    if (ctx->r2 == 0) {
        // 0x80330A50: nop
    
            goto L_80330A78;
    }
    // 0x80330A50: nop

    // 0x80330A54: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330A58: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80330A5C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330A60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330A64: nop

    // 0x80330A68: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80330A6C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330A70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80330A74: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
L_80330A78:
    // 0x80330A78: b           L_80330A80
    // 0x80330A7C: nop

        goto L_80330A80;
    // 0x80330A7C: nop

L_80330A80:
    // 0x80330A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330A88: jr          $ra
    // 0x80330A8C: nop

    return;
    // 0x80330A8C: nop

;}
RECOMP_FUNC void func_803364D0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803364D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803364D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803364D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803364DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803364E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803364E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803364E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803364EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803364F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803364F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803364F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803364FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336500: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336504: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336508: nop

    // 0x8033650C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336510: nop

    // 0x80336514: bne         $t1, $zero, L_80336584
    if (ctx->r9 != 0) {
        // 0x80336518: nop
    
            goto L_80336584;
    }
    // 0x80336518: nop

    // 0x8033651C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336520: nop

    // 0x80336524: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336528: nop

    // 0x8033652C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336530: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336534: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336538: nop

    // 0x8033653C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336540: nop

    // 0x80336544: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336548: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033654C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80336550: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x80336554: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336558: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8033655C: addiu       $t9, $t9, -0x5BBC
    ctx->r25 = ADD32(ctx->r25, -0X5BBC);
    // 0x80336560: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336564: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80336568: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033656C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80336570: jal         0x8001C0EC
    // 0x80336574: addiu       $a3, $zero, 0xDA
    ctx->r7 = ADD32(0, 0XDA);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336574: addiu       $a3, $zero, 0xDA
    ctx->r7 = ADD32(0, 0XDA);
    after_0:
    // 0x80336578: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033657C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80336580: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
L_80336584:
    // 0x80336584: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80336588: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033658C: lwc1        $f4, 0x129C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X129C);
    // 0x80336590: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80336594: nop

    // 0x80336598: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x8033659C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803365A0: nop

    // 0x803365A4: lwc1        $f6, 0x3C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x803365A8: nop

    // 0x803365AC: swc1        $f6, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f6.u32l;
    // 0x803365B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803365B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803365B8: jal         0x8001B4AC
    // 0x803365BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803365BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x803365C0: beq         $v0, $zero, L_80336610
    if (ctx->r2 == 0) {
        // 0x803365C4: nop
    
            goto L_80336610;
    }
    // 0x803365C4: nop

    // 0x803365C8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803365CC: nop

    // 0x803365D0: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x803365D4: nop

    // 0x803365D8: bne         $t5, $zero, L_803365F8
    if (ctx->r13 != 0) {
        // 0x803365DC: nop
    
            goto L_803365F8;
    }
    // 0x803365DC: nop

    // 0x803365E0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803365E4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803365E8: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803365EC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803365F0: b           L_80336610
    // 0x803365F4: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_80336610;
    // 0x803365F4: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803365F8:
    // 0x803365F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803365FC: nop

    // 0x80336600: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80336604: nop

    // 0x80336608: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8033660C: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_80336610:
    // 0x80336610: b           L_80336618
    // 0x80336614: nop

        goto L_80336618;
    // 0x80336614: nop

L_80336618:
    // 0x80336618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033661C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336620: jr          $ra
    // 0x80336624: nop

    return;
    // 0x80336624: nop

;}
RECOMP_FUNC void func_803350E8_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803350E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803350EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803350F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803350F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803350F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803350FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335100: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335104: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335108: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033510C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335110: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335114: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335118: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033511C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335120: nop

    // 0x80335124: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335128: nop

    // 0x8033512C: bne         $t1, $zero, L_80335184
    if (ctx->r9 != 0) {
        // 0x80335130: nop
    
            goto L_80335184;
    }
    // 0x80335130: nop

    // 0x80335134: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335138: nop

    // 0x8033513C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335140: nop

    // 0x80335144: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335148: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033514C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335150: nop

    // 0x80335154: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335158: nop

    // 0x8033515C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335160: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335164: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335168: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x8033516C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335170: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335178: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8033517C: jal         0x8001C0EC
    // 0x80335180: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335180: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_80335184:
    // 0x80335184: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033518C: jal         0x8001B4AC
    // 0x80335190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80335190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335194: beq         $v0, $zero, L_803351AC
    if (ctx->r2 == 0) {
        // 0x80335198: nop
    
            goto L_803351AC;
    }
    // 0x80335198: nop

    // 0x8033519C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803351A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351A4: jal         0x8002B114
    // 0x803351A8: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x803351A8: nop

    after_2:
L_803351AC:
    // 0x803351AC: b           L_803351B4
    // 0x803351B0: nop

        goto L_803351B4;
    // 0x803351B0: nop

L_803351B4:
    // 0x803351B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803351B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803351BC: jr          $ra
    // 0x803351C0: nop

    return;
    // 0x803351C0: nop

;}
RECOMP_FUNC void func_80336384_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336384: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80336388: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033638C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336390: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336394: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336398: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033639C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803363A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803363A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803363A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803363AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803363B0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803363B4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803363B8: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x803363BC: nop

    // 0x803363C0: bne         $t0, $zero, L_803363D0
    if (ctx->r8 != 0) {
        // 0x803363C4: nop
    
            goto L_803363D0;
    }
    // 0x803363C4: nop

    // 0x803363C8: b           L_803363D0
    // 0x803363CC: nop

        goto L_803363D0;
    // 0x803363CC: nop

L_803363D0:
    // 0x803363D0: b           L_803363D8
    // 0x803363D4: nop

        goto L_803363D8;
    // 0x803363D4: nop

L_803363D8:
    // 0x803363D8: jr          $ra
    // 0x803363DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803363DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80336628_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336628: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033662C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336630: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336634: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336638: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033663C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336640: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336644: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336648: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033664C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336650: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336654: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336658: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033665C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336660: nop

    // 0x80336664: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336668: nop

    // 0x8033666C: bne         $t1, $zero, L_803366D0
    if (ctx->r9 != 0) {
        // 0x80336670: nop
    
            goto L_803366D0;
    }
    // 0x80336670: nop

    // 0x80336674: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336678: nop

    // 0x8033667C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336680: nop

    // 0x80336684: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336688: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033668C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336690: nop

    // 0x80336694: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336698: nop

    // 0x8033669C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803366A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803366A8: addiu       $t7, $t7, -0x5BBC
    ctx->r15 = ADD32(ctx->r15, -0X5BBC);
    // 0x803366AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366B0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803366B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803366B8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803366BC: jal         0x8001C0EC
    // 0x803366C0: addiu       $a3, $zero, 0xDA
    ctx->r7 = ADD32(0, 0XDA);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803366C0: addiu       $a3, $zero, 0xDA
    ctx->r7 = ADD32(0, 0XDA);
    after_0:
    // 0x803366C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803366C8: nop

    // 0x803366CC: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
L_803366D0:
    // 0x803366D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366D8: jal         0x8001B4AC
    // 0x803366DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803366DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x803366E0: beq         $v0, $zero, L_803366F8
    if (ctx->r2 == 0) {
        // 0x803366E4: nop
    
            goto L_803366F8;
    }
    // 0x803366E4: nop

    // 0x803366E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366F0: jal         0x8002B114
    // 0x803366F4: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x803366F4: nop

    after_2:
L_803366F8:
    // 0x803366F8: b           L_80336700
    // 0x803366FC: nop

        goto L_80336700;
    // 0x803366FC: nop

L_80336700:
    // 0x80336700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336704: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336708: jr          $ra
    // 0x8033670C: nop

    return;
    // 0x8033670C: nop

;}
RECOMP_FUNC void func_803354DC_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803354DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803354E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803354E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803354E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803354EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803354F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803354F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803354F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803354FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335500: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335504: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335508: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033550C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80335510: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80335514: nop

    // 0x80335518: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033551C: nop

    // 0x80335520: bne         $t1, $zero, L_803355B4
    if (ctx->r9 != 0) {
        // 0x80335524: nop
    
            goto L_803355B4;
    }
    // 0x80335524: nop

    // 0x80335528: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033552C: nop

    // 0x80335530: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335534: nop

    // 0x80335538: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033553C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335540: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80335544: nop

    // 0x80335548: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033554C: nop

    // 0x80335550: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335554: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80335558: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033555C: lwc1        $f4, 0x127C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X127C);
    // 0x80335560: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80335564: nop

    // 0x80335568: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033556C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80335570: nop

    // 0x80335574: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80335578: nop

    // 0x8033557C: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
    // 0x80335580: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80335584: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335588: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033558C: nop

    // 0x80335590: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
    // 0x80335594: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80335598: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033559C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803355A0: nop

    // 0x803355A4: swc1        $f10, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f10.u32l;
    // 0x803355A8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803355AC: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x803355B0: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_803355B4:
    // 0x803355B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803355B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803355BC: jal         0x80029D8C
    // 0x803355C0: nop

    func_80029D8C(rdram, ctx);
        goto after_0;
    // 0x803355C0: nop

    after_0:
    // 0x803355C4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803355C8: nop

    // 0x803355CC: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x803355D0: nop

    // 0x803355D4: bne         $t6, $zero, L_803355F4
    if (ctx->r14 != 0) {
        // 0x803355D8: nop
    
            goto L_803355F4;
    }
    // 0x803355D8: nop

    // 0x803355DC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803355E0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803355E4: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x803355E8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803355EC: b           L_8033564C
    // 0x803355F0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_8033564C;
    // 0x803355F0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_803355F4:
    // 0x803355F4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803355F8: nop

    // 0x803355FC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80335600: nop

    // 0x80335604: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80335608: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x8033560C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80335610: nop

    // 0x80335614: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80335618: nop

    // 0x8033561C: slti        $at, $t4, 0xA
    ctx->r1 = SIGNED(ctx->r12) < 0XA ? 1 : 0;
    // 0x80335620: beq         $at, $zero, L_8033564C
    if (ctx->r1 == 0) {
        // 0x80335624: nop
    
            goto L_8033564C;
    }
    // 0x80335624: nop

    // 0x80335628: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033562C: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80335630: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80335634: lwc1        $f12, 0x40($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X40);
    // 0x80335638: jal         0x80015538
    // 0x8033563C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8033563C: nop

    after_1:
    // 0x80335640: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80335644: nop

    // 0x80335648: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
L_8033564C:
    // 0x8033564C: b           L_80335654
    // 0x80335650: nop

        goto L_80335654;
    // 0x80335650: nop

L_80335654:
    // 0x80335654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335658: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033565C: jr          $ra
    // 0x80335660: nop

    return;
    // 0x80335660: nop

;}
RECOMP_FUNC void func_803351C4_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803351C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803351C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803351CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803351D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803351D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803351D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803351DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803351E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803351E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803351E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803351EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803351F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803351F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803351F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803351FC: nop

    // 0x80335200: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335204: nop

    // 0x80335208: bne         $t1, $zero, L_80335260
    if (ctx->r9 != 0) {
        // 0x8033520C: nop
    
            goto L_80335260;
    }
    // 0x8033520C: nop

    // 0x80335210: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335214: nop

    // 0x80335218: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033521C: nop

    // 0x80335220: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335224: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335228: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033522C: nop

    // 0x80335230: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335234: nop

    // 0x80335238: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033523C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335240: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335244: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x80335248: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033524C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335254: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80335258: jal         0x8001C0EC
    // 0x8033525C: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033525C: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_80335260:
    // 0x80335260: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335264: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335268: jal         0x8001B4AC
    // 0x8033526C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033526C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335270: beq         $v0, $zero, L_80335288
    if (ctx->r2 == 0) {
        // 0x80335274: nop
    
            goto L_80335288;
    }
    // 0x80335274: nop

    // 0x80335278: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033527C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335280: jal         0x8002B114
    // 0x80335284: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80335284: nop

    after_2:
L_80335288:
    // 0x80335288: b           L_80335290
    // 0x8033528C: nop

        goto L_80335290;
    // 0x8033528C: nop

L_80335290:
    // 0x80335290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335294: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335298: jr          $ra
    // 0x8033529C: nop

    return;
    // 0x8033529C: nop

;}
RECOMP_FUNC void func_80336710_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336710: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336714: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336718: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033671C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336720: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336724: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336728: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033672C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336730: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336734: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336738: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033673C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336740: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336744: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336748: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033674C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80336750: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80336754: nop

    // 0x80336758: beq         $s0, $at, L_80336780
    if (ctx->r16 == ctx->r1) {
        // 0x8033675C: nop
    
            goto L_80336780;
    }
    // 0x8033675C: nop

    // 0x80336760: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80336764: beq         $s0, $at, L_80336790
    if (ctx->r16 == ctx->r1) {
        // 0x80336768: nop
    
            goto L_80336790;
    }
    // 0x80336768: nop

    // 0x8033676C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80336770: beq         $s0, $at, L_803367A0
    if (ctx->r16 == ctx->r1) {
        // 0x80336774: nop
    
            goto L_803367A0;
    }
    // 0x80336774: nop

    // 0x80336778: b           L_803367B0
    // 0x8033677C: nop

        goto L_803367B0;
    // 0x8033677C: nop

L_80336780:
    // 0x80336780: jal         0x803363E0
    // 0x80336784: nop

    func_803363E0_unk_bin_13(rdram, ctx);
        goto after_0;
    // 0x80336784: nop

    after_0:
    // 0x80336788: b           L_803367B8
    // 0x8033678C: nop

        goto L_803367B8;
    // 0x8033678C: nop

L_80336790:
    // 0x80336790: jal         0x803364D0
    // 0x80336794: nop

    func_803364D0_unk_bin_13(rdram, ctx);
        goto after_1;
    // 0x80336794: nop

    after_1:
    // 0x80336798: b           L_803367B8
    // 0x8033679C: nop

        goto L_803367B8;
    // 0x8033679C: nop

L_803367A0:
    // 0x803367A0: jal         0x80336628
    // 0x803367A4: nop

    func_80336628_unk_bin_13(rdram, ctx);
        goto after_2;
    // 0x803367A4: nop

    after_2:
    // 0x803367A8: b           L_803367B8
    // 0x803367AC: nop

        goto L_803367B8;
    // 0x803367AC: nop

L_803367B0:
    // 0x803367B0: b           L_803367B8
    // 0x803367B4: nop

        goto L_803367B8;
    // 0x803367B4: nop

L_803367B8:
    // 0x803367B8: b           L_803367C0
    // 0x803367BC: nop

        goto L_803367C0;
    // 0x803367BC: nop

L_803367C0:
    // 0x803367C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803367C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803367C8: jr          $ra
    // 0x803367CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803367CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80337160_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337160: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337164: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337168: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033716C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337170: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337174: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033717C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337180: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337184: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337188: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033718C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337190: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337194: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337198: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033719C: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803371A0: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x803371A4: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x803371A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803371AC: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803371B0: addiu       $a1, $a1, 0x7C2C
    ctx->r5 = ADD32(ctx->r5, 0X7C2C);
    // 0x803371B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803371B8: jal         0x80027464
    // 0x803371BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803371BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x803371C0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803371C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803371C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803371CC: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    // 0x803371D0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803371D4: jal         0x800175F0
    // 0x803371D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803371D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803371DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803371E0: jal         0x80026F10
    // 0x803371E4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_2;
    // 0x803371E4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_2:
    // 0x803371E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803371EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803371F0: addiu       $a3, $a3, -0x5AE8
    ctx->r7 = ADD32(ctx->r7, -0X5AE8);
    // 0x803371F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803371F8: jal         0x8001ABF4
    // 0x803371FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803371FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80337200: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337208: jal         0x8002B114
    // 0x8033720C: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x8033720C: nop

    after_4:
    // 0x80337210: b           L_80337218
    // 0x80337214: nop

        goto L_80337218;
    // 0x80337214: nop

L_80337218:
    // 0x80337218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033721C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337220: jr          $ra
    // 0x80337224: nop

    return;
    // 0x80337224: nop

;}
RECOMP_FUNC void func_80337768_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337768: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033776C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337770: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337774: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337778: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033777C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337780: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337784: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033778C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337790: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337794: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337798: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033779C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803377A0: nop

    // 0x803377A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803377A8: nop

    // 0x803377AC: bne         $t1, $zero, L_803377D8
    if (ctx->r9 != 0) {
        // 0x803377B0: nop
    
            goto L_803377D8;
    }
    // 0x803377B0: nop

    // 0x803377B4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803377B8: nop

    // 0x803377BC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803377C0: nop

    // 0x803377C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803377C8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803377CC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803377D0: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x803377D4: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_803377D8:
    // 0x803377D8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803377DC: nop

    // 0x803377E0: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803377E4: nop

    // 0x803377E8: bne         $t8, $zero, L_80337808
    if (ctx->r24 != 0) {
        // 0x803377EC: nop
    
            goto L_80337808;
    }
    // 0x803377EC: nop

    // 0x803377F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803377F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803377F8: jal         0x8002B114
    // 0x803377FC: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x803377FC: nop

    after_0:
    // 0x80337800: b           L_80337820
    // 0x80337804: nop

        goto L_80337820;
    // 0x80337804: nop

L_80337808:
    // 0x80337808: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033780C: nop

    // 0x80337810: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80337814: nop

    // 0x80337818: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8033781C: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_80337820:
    // 0x80337820: b           L_80337828
    // 0x80337824: nop

        goto L_80337828;
    // 0x80337824: nop

L_80337828:
    // 0x80337828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033782C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80337830: jr          $ra
    // 0x80337834: nop

    return;
    // 0x80337834: nop

;}
RECOMP_FUNC void func_80333BF4_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333BF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333BF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333BFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333C00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333C04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333C08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333C0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333C14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333C1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333C20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333C24: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333C28: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333C2C: nop

    // 0x80333C30: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333C34: nop

    // 0x80333C38: bne         $t1, $zero, L_8033400C
    if (ctx->r9 != 0) {
        // 0x80333C3C: nop
    
            goto L_8033400C;
    }
    // 0x80333C3C: nop

    // 0x80333C40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333C44: nop

    // 0x80333C48: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333C4C: nop

    // 0x80333C50: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333C54: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333C58: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333C5C: nop

    // 0x80333C60: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333C64: nop

    // 0x80333C68: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333C6C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333C70: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80333C74: sh          $t7, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = ctx->r15;
    // 0x80333C78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C7C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80333C80: addiu       $t9, $t9, -0x5DF0
    ctx->r25 = ADD32(ctx->r25, -0X5DF0);
    // 0x80333C84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C88: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80333C8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333C90: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80333C94: jal         0x8001C0EC
    // 0x80333C98: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333C98: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x80333C9C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333CA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333CA4: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80333CA8: lwc1        $f4, 0x24($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80333CAC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80333CB0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333CB4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333CB8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333CBC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333CC0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333CC4: swc1        $f4, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f4.u32l;
    // 0x80333CC8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333CCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333CD0: lh          $t2, 0xAA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAA);
    // 0x80333CD4: lwc1        $f6, 0x2C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80333CD8: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80333CDC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80333CE0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333CE4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80333CE8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333CEC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333CF0: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80333CF4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333CF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333CFC: lh          $t7, 0xAA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAA);
    // 0x80333D00: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80333D04: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333D08: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333D0C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333D10: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333D14: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333D18: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333D1C: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x80333D20: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333D24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333D28: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x80333D2C: lwc1        $f10, 0x3C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80333D30: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333D34: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333D38: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333D3C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333D40: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333D44: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333D48: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80333D4C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333D50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333D54: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x80333D58: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80333D5C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80333D60: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333D64: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333D68: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333D6C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333D70: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333D74: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x80333D78: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333D7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333D80: lh          $t7, 0xAA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAA);
    // 0x80333D84: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80333D88: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333D8C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333D90: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333D94: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333D98: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333D9C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333DA0: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x80333DA4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333DA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333DAC: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x80333DB0: nop

    // 0x80333DB4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333DB8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333DBC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333DC0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333DC4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333DC8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333DCC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80333DD0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333DD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333DD8: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x80333DDC: lwc1        $f18, 0x24($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X24);
    // 0x80333DE0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80333DE4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333DE8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333DEC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333DF0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333DF4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333DF8: swc1        $f18, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f18.u32l;
    // 0x80333DFC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333E00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E04: lh          $t7, 0xAC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAC);
    // 0x80333E08: lwc1        $f4, 0x2C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80333E0C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80333E10: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80333E14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333E18: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80333E1C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333E20: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333E24: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x80333E28: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333E2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E30: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x80333E34: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80333E38: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333E3C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333E40: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333E44: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333E48: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333E4C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333E50: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80333E54: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333E58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E5C: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x80333E60: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80333E64: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80333E68: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333E6C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333E70: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333E74: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333E78: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333E7C: swc1        $f8, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f8.u32l;
    // 0x80333E80: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333E84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E88: lh          $t5, 0xAC($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAC);
    // 0x80333E8C: lwc1        $f10, 0x44($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80333E90: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333E94: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333E98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333E9C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333EA0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333EA4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333EA8: swc1        $f10, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f10.u32l;
    // 0x80333EAC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333EB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333EB4: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x80333EB8: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80333EBC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333EC0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333EC4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333EC8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333ECC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333ED0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333ED4: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x80333ED8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333EDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333EE0: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x80333EE4: nop

    // 0x80333EE8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80333EEC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333EF0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333EF4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333EF8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333EFC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333F00: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80333F04: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333F08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F0C: lh          $t5, 0xBC($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XBC);
    // 0x80333F10: lwc1        $f16, 0x24($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X24);
    // 0x80333F14: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333F18: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333F1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333F20: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333F24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333F28: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333F2C: swc1        $f16, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f16.u32l;
    // 0x80333F30: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333F34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F38: lh          $t9, 0xBC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBC);
    // 0x80333F3C: lwc1        $f18, 0x2C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80333F40: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80333F44: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80333F48: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333F4C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80333F50: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333F54: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333F58: swc1        $f18, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f18.u32l;
    // 0x80333F5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333F60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F64: lh          $t1, 0xBC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBC);
    // 0x80333F68: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80333F6C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80333F70: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333F74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333F78: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333F7C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333F80: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333F84: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80333F88: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333F8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F90: lh          $t2, 0xBC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBC);
    // 0x80333F94: lwc1        $f6, 0x3C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80333F98: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80333F9C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80333FA0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333FA4: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80333FA8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333FAC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333FB0: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x80333FB4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333FB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333FBC: lh          $t8, 0xBC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XBC);
    // 0x80333FC0: lwc1        $f8, 0x44($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80333FC4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333FC8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333FCC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333FD0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333FD4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333FD8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333FDC: swc1        $f8, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f8.u32l;
    // 0x80333FE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333FE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333FE8: lh          $t1, 0xBC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBC);
    // 0x80333FEC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80333FF0: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80333FF4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333FF8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333FFC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80334000: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334004: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334008: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
L_8033400C:
    // 0x8033400C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334010: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334014: jal         0x8001B4AC
    // 0x80334018: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80334018: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033401C: beq         $v0, $zero, L_80334048
    if (ctx->r2 == 0) {
        // 0x80334020: nop
    
            goto L_80334048;
    }
    // 0x80334020: nop

    // 0x80334024: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334028: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033402C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80334030: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334034: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80334038: sh          $t5, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r13;
    // 0x8033403C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334040: nop

    // 0x80334044: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80334048:
    // 0x80334048: b           L_80334050
    // 0x8033404C: nop

        goto L_80334050;
    // 0x8033404C: nop

L_80334050:
    // 0x80334050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334054: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334058: jr          $ra
    // 0x8033405C: nop

    return;
    // 0x8033405C: nop

;}
RECOMP_FUNC void func_80335F78_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335F78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335F7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335F80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335F84: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335F88: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335F8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335F90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335F94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335F98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335F9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335FA0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335FA4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335FA8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335FAC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335FB0: nop

    // 0x80335FB4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335FB8: nop

    // 0x80335FBC: bne         $t1, $zero, L_80336020
    if (ctx->r9 != 0) {
        // 0x80335FC0: nop
    
            goto L_80336020;
    }
    // 0x80335FC0: nop

    // 0x80335FC4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335FC8: nop

    // 0x80335FCC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335FD0: nop

    // 0x80335FD4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335FD8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335FDC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335FE0: nop

    // 0x80335FE4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335FE8: nop

    // 0x80335FEC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335FF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335FF4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335FF8: addiu       $t7, $t7, -0x5BCC
    ctx->r15 = ADD32(ctx->r15, -0X5BCC);
    // 0x80335FFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336000: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336004: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336008: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033600C: jal         0x8001C0EC
    // 0x80336010: addiu       $a3, $zero, 0xD7
    ctx->r7 = ADD32(0, 0XD7);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336010: addiu       $a3, $zero, 0xD7
    ctx->r7 = ADD32(0, 0XD7);
    after_0:
    // 0x80336014: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336018: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033601C: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_80336020:
    // 0x80336020: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336024: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336028: jal         0x8001B4AC
    // 0x8033602C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033602C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80336030: beq         $v0, $zero, L_80336050
    if (ctx->r2 == 0) {
        // 0x80336034: nop
    
            goto L_80336050;
    }
    // 0x80336034: nop

    // 0x80336038: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033603C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80336040: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80336044: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80336048: nop

    // 0x8033604C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80336050:
    // 0x80336050: b           L_80336058
    // 0x80336054: nop

        goto L_80336058;
    // 0x80336054: nop

L_80336058:
    // 0x80336058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033605C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336060: jr          $ra
    // 0x80336064: nop

    return;
    // 0x80336064: nop

;}
RECOMP_FUNC void func_80331C68_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331C68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331C6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331C70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331C74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331C78: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331C7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331C80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331C88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331C90: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331C94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331C98: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331C9C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331CA0: nop

    // 0x80331CA4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331CA8: nop

    // 0x80331CAC: bne         $t1, $zero, L_80331D5C
    if (ctx->r9 != 0) {
        // 0x80331CB0: nop
    
            goto L_80331D5C;
    }
    // 0x80331CB0: nop

    // 0x80331CB4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331CB8: nop

    // 0x80331CBC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331CC0: nop

    // 0x80331CC4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331CC8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331CCC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331CD0: nop

    // 0x80331CD4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331CD8: nop

    // 0x80331CDC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331CE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331CE4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331CE8: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80331CEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331CF0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331CF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331CF8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80331CFC: jal         0x8001C0EC
    // 0x80331D00: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331D00: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x80331D04: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331D08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D0C: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x80331D10: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80331D14: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331D18: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331D1C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331D20: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331D24: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331D28: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331D2C: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80331D30: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331D34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D38: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x80331D3C: nop

    // 0x80331D40: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80331D44: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331D48: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331D4C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331D50: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331D54: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331D58: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331D5C:
    // 0x80331D5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D64: jal         0x8001B4AC
    // 0x80331D68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331D68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331D6C: beq         $v0, $zero, L_80331D8C
    if (ctx->r2 == 0) {
        // 0x80331D70: nop
    
            goto L_80331D8C;
    }
    // 0x80331D70: nop

    // 0x80331D74: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331D78: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80331D7C: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80331D80: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331D84: nop

    // 0x80331D88: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80331D8C:
    // 0x80331D8C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331D90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D94: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x80331D98: lwc1        $f4, 0x24($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X24);
    // 0x80331D9C: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80331DA0: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80331DA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331DA8: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80331DAC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331DB0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331DB4: swc1        $f4, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f4.u32l;
    // 0x80331DB8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331DBC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331DC0: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x80331DC4: lwc1        $f6, 0x2C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80331DC8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331DCC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331DD0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331DD4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331DD8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331DDC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331DE0: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80331DE4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331DE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331DEC: lh          $t6, 0xAC($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAC);
    // 0x80331DF0: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80331DF4: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80331DF8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80331DFC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331E00: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80331E04: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331E08: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331E0C: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x80331E10: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331E14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E18: lh          $t9, 0xAC($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAC);
    // 0x80331E1C: lwc1        $f10, 0x3C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80331E20: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331E24: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331E28: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331E2C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331E30: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331E34: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331E38: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80331E3C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331E40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E44: lh          $t1, 0xAC($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAC);
    // 0x80331E48: lwc1        $f16, 0x44($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80331E4C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80331E50: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331E54: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331E58: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331E5C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331E60: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331E64: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x80331E68: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331E6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E70: lh          $t2, 0xAA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAA);
    // 0x80331E74: lwc1        $f18, 0x24($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X24);
    // 0x80331E78: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80331E7C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80331E80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331E84: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80331E88: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331E8C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331E90: swc1        $f18, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f18.u32l;
    // 0x80331E94: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331E98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E9C: lh          $t7, 0xAA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAA);
    // 0x80331EA0: lwc1        $f4, 0x2C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80331EA4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80331EA8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331EAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331EB0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331EB4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331EB8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331EBC: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x80331EC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331EC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331EC8: lh          $t8, 0xAA($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XAA);
    // 0x80331ECC: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80331ED0: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80331ED4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80331ED8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331EDC: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80331EE0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331EE4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331EE8: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80331EEC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331EF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331EF4: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x80331EF8: lwc1        $f8, 0x3C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80331EFC: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80331F00: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331F04: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331F08: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331F0C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331F10: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331F14: swc1        $f8, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f8.u32l;
    // 0x80331F18: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331F1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331F20: lh          $t5, 0xAA($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAA);
    // 0x80331F24: lwc1        $f10, 0x44($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80331F28: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80331F2C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331F30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331F34: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331F38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331F3C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331F40: swc1        $f10, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f10.u32l;
    // 0x80331F44: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331F48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331F4C: lh          $t0, 0xBC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBC);
    // 0x80331F50: lwc1        $f16, 0x24($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X24);
    // 0x80331F54: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80331F58: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80331F5C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331F60: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80331F64: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331F68: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331F6C: swc1        $f16, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f16.u32l;
    // 0x80331F70: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331F74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331F78: lh          $t3, 0xBC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XBC);
    // 0x80331F7C: lwc1        $f18, 0x2C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80331F80: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331F84: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331F88: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331F8C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331F90: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331F94: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331F98: swc1        $f18, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f18.u32l;
    // 0x80331F9C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331FA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331FA4: lh          $t6, 0xBC($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XBC);
    // 0x80331FA8: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80331FAC: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80331FB0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80331FB4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331FB8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80331FBC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331FC0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331FC4: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80331FC8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331FCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331FD0: lh          $t9, 0xBC($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XBC);
    // 0x80331FD4: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80331FD8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331FDC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331FE0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331FE4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331FE8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331FEC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331FF0: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x80331FF4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331FF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331FFC: lh          $t1, 0xBC($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XBC);
    // 0x80332000: lwc1        $f8, 0x44($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80332004: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332008: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033200C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332010: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332014: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332018: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033201C: swc1        $f8, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f8.u32l;
    // 0x80332020: b           L_80332028
    // 0x80332024: nop

        goto L_80332028;
    // 0x80332024: nop

L_80332028:
    // 0x80332028: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033202C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332030: jr          $ra
    // 0x80332034: nop

    return;
    // 0x80332034: nop

;}
RECOMP_FUNC void func_80332D0C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332D0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332D10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332D14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332D18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332D1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332D20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332D24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332D28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332D2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332D30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332D34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332D38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332D3C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80332D40: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332D44: nop

    // 0x80332D48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332D4C: nop

    // 0x80332D50: bne         $t1, $zero, L_80333020
    if (ctx->r9 != 0) {
        // 0x80332D54: nop
    
            goto L_80333020;
    }
    // 0x80332D54: nop

    // 0x80332D58: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332D5C: nop

    // 0x80332D60: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332D64: nop

    // 0x80332D68: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332D6C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332D70: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332D74: nop

    // 0x80332D78: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332D7C: nop

    // 0x80332D80: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332D84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D88: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332D8C: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80332D90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D94: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332D98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80332DA0: jal         0x8001C0EC
    // 0x80332DA4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332DA4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x80332DA8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332DAC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332DB0: lwc1        $f6, 0x7D00($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D00);
    // 0x80332DB4: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80332DB8: nop

    // 0x80332DBC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80332DC0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80332DC4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332DC8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80332DCC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332DD0: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332DD4: jal         0x80015538
    // 0x80332DD8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80332DD8: nop

    after_1:
    // 0x80332DDC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80332DE0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332DE4: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332DE8: lwc1        $f19, 0x7D08($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D08);
    // 0x80332DEC: lwc1        $f18, 0x7D0C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D0C);
    // 0x80332DF0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80332DF4: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80332DF8: jal         0x80034970
    // 0x80332DFC: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80332DFC: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_2:
    // 0x80332E00: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x80332E04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332E08: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332E0C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80332E10: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80332E14: nop

    // 0x80332E18: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80332E1C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80332E20: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332E24: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332E28: lwc1        $f7, 0x7D10($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7D10);
    // 0x80332E2C: lwc1        $f6, 0x7D14($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D14);
    // 0x80332E30: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80332E34: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80332E38: jal         0x80036570
    // 0x80332E3C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80332E3C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_3:
    // 0x80332E40: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x80332E44: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332E48: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332E4C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80332E50: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80332E54: nop

    // 0x80332E58: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80332E5C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80332E60: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332E64: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332E68: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332E6C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E70: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80332E74: addiu       $a1, $a1, 0x7BD8
    ctx->r5 = ADD32(ctx->r5, 0X7BD8);
    // 0x80332E78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332E7C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332E80: jal         0x80027464
    // 0x80332E84: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80332E84: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80332E88: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332E8C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80332E90: addiu       $t3, $t3, -0x5CE8
    ctx->r11 = ADD32(ctx->r11, -0X5CE8);
    // 0x80332E94: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80332E98: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80332E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332EA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332EA4: jal         0x8001C0EC
    // 0x80332EA8: addiu       $a3, $zero, 0xD5
    ctx->r7 = ADD32(0, 0XD5);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80332EA8: addiu       $a3, $zero, 0xD5
    ctx->r7 = ADD32(0, 0XD5);
    after_5:
    // 0x80332EAC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80332EB0: jal         0x80026F10
    // 0x80332EB4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x80332EB4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_6:
    // 0x80332EB8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332EBC: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x80332EC0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332EC4: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80332EC8: jal         0x80015538
    // 0x80332ECC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80332ECC: nop

    after_7:
    // 0x80332ED0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80332ED4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332ED8: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332EDC: lwc1        $f19, 0x7D18($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7D18);
    // 0x80332EE0: lwc1        $f18, 0x7D1C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7D1C);
    // 0x80332EE4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80332EE8: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80332EEC: jal         0x80034970
    // 0x80332EF0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x80332EF0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_8:
    // 0x80332EF4: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x80332EF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332EFC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332F00: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80332F04: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80332F08: nop

    // 0x80332F0C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80332F10: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80332F14: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332F18: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332F1C: lwc1        $f7, 0x7D20($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7D20);
    // 0x80332F20: lwc1        $f6, 0x7D24($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D24);
    // 0x80332F24: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80332F28: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80332F2C: jal         0x80036570
    // 0x80332F30: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_9;
    // 0x80332F30: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_9:
    // 0x80332F34: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x80332F38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332F3C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332F40: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80332F44: lwc1        $f18, 0x8($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80332F48: nop

    // 0x80332F4C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80332F50: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80332F54: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332F58: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332F5C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332F60: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F64: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80332F68: addiu       $a1, $a1, 0x7BD8
    ctx->r5 = ADD32(ctx->r5, 0X7BD8);
    // 0x80332F6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332F70: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332F74: jal         0x80027464
    // 0x80332F78: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x80332F78: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x80332F7C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332F80: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80332F84: addiu       $t5, $t5, -0x5CE8
    ctx->r13 = ADD32(ctx->r13, -0X5CE8);
    // 0x80332F88: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80332F8C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80332F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332F94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332F98: jal         0x8001C0EC
    // 0x80332F9C: addiu       $a3, $zero, 0xD5
    ctx->r7 = ADD32(0, 0XD5);
    func_8001C0EC(rdram, ctx);
        goto after_11;
    // 0x80332F9C: addiu       $a3, $zero, 0xD5
    ctx->r7 = ADD32(0, 0XD5);
    after_11:
    // 0x80332FA0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80332FA4: jal         0x80026F10
    // 0x80332FA8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_12;
    // 0x80332FA8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_12:
    // 0x80332FAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332FB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332FB8: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x80332FBC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332FC0: jal         0x800175F0
    // 0x80332FC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_13;
    // 0x80332FC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x80332FC8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332FCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332FD0: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x80332FD4: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80332FD8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332FDC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332FE0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332FE4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332FE8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332FEC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332FF0: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80332FF4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332FF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332FFC: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x80333000: nop

    // 0x80333004: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80333008: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033300C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333010: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333014: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333018: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033301C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80333020:
    // 0x80333020: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333024: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333028: jal         0x8001B4AC
    // 0x8033302C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_14;
    // 0x8033302C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80333030: beq         $v0, $zero, L_8033308C
    if (ctx->r2 == 0) {
        // 0x80333034: nop
    
            goto L_8033308C;
    }
    // 0x80333034: nop

    // 0x80333038: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033303C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333040: lh          $t6, 0xB8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XB8);
    // 0x80333044: nop

    // 0x80333048: bne         $t6, $at, L_80333074
    if (ctx->r14 != ctx->r1) {
        // 0x8033304C: nop
    
            goto L_80333074;
    }
    // 0x8033304C: nop

    // 0x80333050: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80333054: addiu       $t5, $zero, 0x17
    ctx->r13 = ADD32(0, 0X17);
    // 0x80333058: sh          $t5, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r13;
    // 0x8033305C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80333060: nop

    // 0x80333064: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x80333068: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033306C: b           L_8033308C
    // 0x80333070: sh          $zero, 0xB8($t7)
    MEM_H(0XB8, ctx->r15) = 0;
        goto L_8033308C;
    // 0x80333070: sh          $zero, 0xB8($t7)
    MEM_H(0XB8, ctx->r15) = 0;
L_80333074:
    // 0x80333074: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333078: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x8033307C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80333080: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333084: nop

    // 0x80333088: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033308C:
    // 0x8033308C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80333090: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333094: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x80333098: lwc1        $f10, 0x24($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X24);
    // 0x8033309C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x803330A0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803330A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803330A8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803330AC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803330B0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803330B4: swc1        $f10, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f10.u32l;
    // 0x803330B8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803330BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803330C0: lh          $t8, 0xAC($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XAC);
    // 0x803330C4: lwc1        $f16, 0x2C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x803330C8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803330CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803330D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803330D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803330D8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803330DC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803330E0: swc1        $f16, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f16.u32l;
    // 0x803330E4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803330E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803330EC: lh          $t0, 0xAC($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XAC);
    // 0x803330F0: lwc1        $f18, 0x1C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803330F4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803330F8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803330FC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333100: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333104: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333108: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033310C: swc1        $f18, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f18.u32l;
    // 0x80333110: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333114: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333118: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x8033311C: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80333120: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80333124: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333128: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033312C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333130: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333134: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333138: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x8033313C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333140: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333144: lh          $t5, 0xAC($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAC);
    // 0x80333148: lwc1        $f6, 0x44($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X44);
    // 0x8033314C: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80333150: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80333154: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333158: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033315C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333160: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333164: swc1        $f6, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f6.u32l;
    // 0x80333168: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033316C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333170: lh          $t7, 0xAA($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XAA);
    // 0x80333174: lwc1        $f8, 0x24($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X24);
    // 0x80333178: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8033317C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80333180: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333184: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80333188: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033318C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333190: swc1        $f8, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f8.u32l;
    // 0x80333194: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333198: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033319C: lh          $t3, 0xAA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAA);
    // 0x803331A0: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x803331A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803331A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803331AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803331B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803331B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803331B8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803331BC: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
    // 0x803331C0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803331C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803331C8: lh          $t6, 0xAA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAA);
    // 0x803331CC: lwc1        $f16, 0x1C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x803331D0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803331D4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803331D8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803331DC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803331E0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803331E4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803331E8: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x803331EC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803331F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803331F4: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x803331F8: lwc1        $f18, 0x3C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803331FC: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80333200: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80333204: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333208: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8033320C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333210: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333214: swc1        $f18, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f18.u32l;
    // 0x80333218: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033321C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333220: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80333224: lwc1        $f4, 0x44($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80333228: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033322C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333230: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333234: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333238: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033323C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333240: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x80333244: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80333248: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033324C: lh          $t2, 0xBC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBC);
    // 0x80333250: lwc1        $f6, 0x24($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X24);
    // 0x80333254: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80333258: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033325C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333260: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80333264: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333268: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033326C: swc1        $f6, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f6.u32l;
    // 0x80333270: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80333274: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333278: lh          $t8, 0xBC($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XBC);
    // 0x8033327C: lwc1        $f8, 0x2C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80333280: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333284: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333288: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033328C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333290: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333294: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333298: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x8033329C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803332A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803332A4: lh          $t0, 0xBC($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XBC);
    // 0x803332A8: lwc1        $f10, 0x1C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803332AC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803332B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803332B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803332B8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803332BC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803332C0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803332C4: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x803332C8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803332CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803332D0: lh          $t4, 0xBC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBC);
    // 0x803332D4: lwc1        $f16, 0x3C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x803332D8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803332DC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803332E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803332E4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803332E8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803332EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803332F0: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
    // 0x803332F4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803332F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803332FC: lh          $t5, 0xBC($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XBC);
    // 0x80333300: lwc1        $f18, 0x44($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80333304: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80333308: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033330C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333310: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80333314: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333318: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033331C: swc1        $f18, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f18.u32l;
    // 0x80333320: b           L_80333328
    // 0x80333324: nop

        goto L_80333328;
    // 0x80333324: nop

L_80333328:
    // 0x80333328: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033332C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80333330: jr          $ra
    // 0x80333334: nop

    return;
    // 0x80333334: nop

;}
RECOMP_FUNC void func_8033691C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033691C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336920: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336924: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336928: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033692C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336930: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336934: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336938: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033693C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336940: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336944: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336948: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033694C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336950: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336954: nop

    // 0x80336958: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033695C: nop

    // 0x80336960: bne         $t1, $zero, L_803369C4
    if (ctx->r9 != 0) {
        // 0x80336964: nop
    
            goto L_803369C4;
    }
    // 0x80336964: nop

    // 0x80336968: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033696C: nop

    // 0x80336970: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336974: nop

    // 0x80336978: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033697C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336980: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336984: nop

    // 0x80336988: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033698C: nop

    // 0x80336990: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336998: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033699C: addiu       $t7, $t7, -0x5BB0
    ctx->r15 = ADD32(ctx->r15, -0X5BB0);
    // 0x803369A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803369A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803369A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803369AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803369B0: jal         0x8001C0EC
    // 0x803369B4: addiu       $a3, $zero, 0xDB
    ctx->r7 = ADD32(0, 0XDB);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803369B4: addiu       $a3, $zero, 0xDB
    ctx->r7 = ADD32(0, 0XDB);
    after_0:
    // 0x803369B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803369BC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803369C0: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_803369C4:
    // 0x803369C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803369C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803369CC: jal         0x8001B4AC
    // 0x803369D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803369D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x803369D4: beq         $v0, $zero, L_803369F4
    if (ctx->r2 == 0) {
        // 0x803369D8: nop
    
            goto L_803369F4;
    }
    // 0x803369D8: nop

    // 0x803369DC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803369E0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x803369E4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803369E8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803369EC: nop

    // 0x803369F0: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_803369F4:
    // 0x803369F4: b           L_803369FC
    // 0x803369F8: nop

        goto L_803369FC;
    // 0x803369F8: nop

L_803369FC:
    // 0x803369FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336A00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336A04: jr          $ra
    // 0x80336A08: nop

    return;
    // 0x80336A08: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330040: addiu       $a1, $a1, 0x7C38
    ctx->r5 = ADD32(ctx->r5, 0X7C38);
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
    // 0x8033006C: addiu       $a3, $a3, -0x5D68
    ctx->r7 = ADD32(ctx->r7, -0X5D68);
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
    // 0x8033007C: b           L_80330084
    // 0x80330080: nop

        goto L_80330084;
    // 0x80330080: nop

L_80330084:
    // 0x80330084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330088: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033008C: jr          $ra
    // 0x80330090: nop

    return;
    // 0x80330090: nop

;}
RECOMP_FUNC void func_8033682C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033682C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336830: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336834: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336838: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033683C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336840: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336844: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336848: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033684C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336850: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336854: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336858: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033685C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336860: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336864: nop

    // 0x80336868: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033686C: nop

    // 0x80336870: bne         $t1, $zero, L_803368D4
    if (ctx->r9 != 0) {
        // 0x80336874: nop
    
            goto L_803368D4;
    }
    // 0x80336874: nop

    // 0x80336878: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033687C: nop

    // 0x80336880: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336884: nop

    // 0x80336888: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033688C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336890: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336894: nop

    // 0x80336898: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033689C: nop

    // 0x803368A0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803368A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803368A8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803368AC: addiu       $t7, $t7, -0x5BB0
    ctx->r15 = ADD32(ctx->r15, -0X5BB0);
    // 0x803368B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803368B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803368B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803368BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803368C0: jal         0x8001C0EC
    // 0x803368C4: addiu       $a3, $zero, 0xDB
    ctx->r7 = ADD32(0, 0XDB);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803368C4: addiu       $a3, $zero, 0xDB
    ctx->r7 = ADD32(0, 0XDB);
    after_0:
    // 0x803368C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803368CC: nop

    // 0x803368D0: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
L_803368D4:
    // 0x803368D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803368D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803368DC: jal         0x8001B4AC
    // 0x803368E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803368E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x803368E4: beq         $v0, $zero, L_80336904
    if (ctx->r2 == 0) {
        // 0x803368E8: nop
    
            goto L_80336904;
    }
    // 0x803368E8: nop

    // 0x803368EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803368F0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803368F4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803368F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803368FC: nop

    // 0x80336900: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80336904:
    // 0x80336904: b           L_8033690C
    // 0x80336908: nop

        goto L_8033690C;
    // 0x80336908: nop

L_8033690C:
    // 0x8033690C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336910: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336914: jr          $ra
    // 0x80336918: nop

    return;
    // 0x80336918: nop

;}
RECOMP_FUNC void func_803373E8_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803373E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803373EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803373F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803373F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803373F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803373FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337404: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033740C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337410: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337414: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337418: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033741C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337420: nop

    // 0x80337424: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337428: nop

    // 0x8033742C: bne         $t1, $zero, L_80337484
    if (ctx->r9 != 0) {
        // 0x80337430: nop
    
            goto L_80337484;
    }
    // 0x80337430: nop

    // 0x80337434: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337438: nop

    // 0x8033743C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337440: nop

    // 0x80337444: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337448: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033744C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337450: nop

    // 0x80337454: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337458: nop

    // 0x8033745C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337460: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337464: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337468: addiu       $t7, $t7, -0x5B9C
    ctx->r15 = ADD32(ctx->r15, -0X5B9C);
    // 0x8033746C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337470: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337474: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80337478: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033747C: jal         0x8001C0EC
    // 0x80337480: addiu       $a3, $zero, 0xD9
    ctx->r7 = ADD32(0, 0XD9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337480: addiu       $a3, $zero, 0xD9
    ctx->r7 = ADD32(0, 0XD9);
    after_0:
L_80337484:
    // 0x80337484: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337488: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033748C: jal         0x8001B4AC
    // 0x80337490: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337490: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80337494: beq         $v0, $zero, L_803374B4
    if (ctx->r2 == 0) {
        // 0x80337498: nop
    
            goto L_803374B4;
    }
    // 0x80337498: nop

    // 0x8033749C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803374A0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803374A4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803374A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803374AC: nop

    // 0x803374B0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803374B4:
    // 0x803374B4: b           L_803374BC
    // 0x803374B8: nop

        goto L_803374BC;
    // 0x803374B8: nop

L_803374BC:
    // 0x803374BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803374C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803374C4: jr          $ra
    // 0x803374C8: nop

    return;
    // 0x803374C8: nop

;}
