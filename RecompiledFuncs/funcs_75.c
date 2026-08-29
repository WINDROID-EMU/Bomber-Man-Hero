#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_bagular3_803383C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803383C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803383C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803383C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803383CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803383D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803383D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803383D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803383DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803383E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803383E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803383E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803383EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803383F0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803383F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803383F8: nop

    // 0x803383FC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338400: nop

    // 0x80338404: bne         $t1, $zero, L_8033845C
    if (ctx->r9 != 0) {
        // 0x80338408: nop
    
            goto L_8033845C;
    }
    // 0x80338408: nop

    // 0x8033840C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338410: nop

    // 0x80338414: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338418: nop

    // 0x8033841C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338420: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338424: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338428: nop

    // 0x8033842C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338430: nop

    // 0x80338434: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033843C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338440: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80338444: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338448: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033844C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338450: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x80338454: jal         0x8001C0EC
    // 0x80338458: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338458: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_8033845C:
    // 0x8033845C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338460: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338464: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80338468: nop

    // 0x8033846C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80338470: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338474: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338478: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033847C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80338480: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80338484: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80338488: nop

    // 0x8033848C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80338490: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338494: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338498: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033849C: nop

    // 0x803384A0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803384A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803384A8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803384AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803384B0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803384B4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803384B8: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803384BC: nop

    // 0x803384C0: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803384C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803384C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803384CC: jal         0x8001B4AC
    // 0x803384D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803384D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803384D4: beq         $v0, $zero, L_803384F4
    if (ctx->r2 == 0) {
        // 0x803384D8: nop
    
            goto L_803384F4;
    }
    // 0x803384D8: nop

    // 0x803384DC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803384E0: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
    // 0x803384E4: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803384E8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803384EC: nop

    // 0x803384F0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803384F4:
    // 0x803384F4: b           L_803384FC
    // 0x803384F8: nop

        goto L_803384FC;
    // 0x803384F8: nop

L_803384FC:
    // 0x803384FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338500: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338504: jr          $ra
    // 0x80338508: nop

    return;
    // 0x80338508: nop

;}
RECOMP_FUNC void func_bagular3_8033AFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AFF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033AFF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033AFF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AFFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B000: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B004: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B008: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B00C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B010: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B014: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B018: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B01C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B020: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033B024: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B028: nop

    // 0x8033B02C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B030: nop

    // 0x8033B034: bne         $t1, $zero, L_8033B074
    if (ctx->r9 != 0) {
        // 0x8033B038: nop
    
            goto L_8033B074;
    }
    // 0x8033B038: nop

    // 0x8033B03C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B040: nop

    // 0x8033B044: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B048: nop

    // 0x8033B04C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B050: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B054: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B058: nop

    // 0x8033B05C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B060: nop

    // 0x8033B064: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B068: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B06C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8033B070: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_8033B074:
    // 0x8033B074: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B078: nop

    // 0x8033B07C: lh          $t0, 0xC0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC0);
    // 0x8033B080: nop

    // 0x8033B084: bne         $t0, $zero, L_8033B0C0
    if (ctx->r8 != 0) {
        // 0x8033B088: nop
    
            goto L_8033B0C0;
    }
    // 0x8033B088: nop

    // 0x8033B08C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B090: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B094: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033B098: nop

    // 0x8033B09C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033B0A0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033B0A4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033B0A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033B0AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033B0B0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033B0B4: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033B0B8: b           L_8033B108
    // 0x8033B0BC: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
        goto L_8033B108;
    // 0x8033B0BC: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
L_8033B0C0:
    // 0x8033B0C0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B0C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B0C8: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x8033B0CC: nop

    // 0x8033B0D0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8033B0D4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033B0D8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033B0DC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033B0E0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033B0E4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033B0E8: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033B0EC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033B0F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033B0F4: jal         0x80015538
    // 0x8033B0F8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8033B0F8: nop

    after_0:
    // 0x8033B0FC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B100: nop

    // 0x8033B104: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
L_8033B108:
    // 0x8033B108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B10C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B110: jal         0x8001B4AC
    // 0x8033B114: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033B114: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033B118: beq         $v0, $zero, L_8033B168
    if (ctx->r2 == 0) {
        // 0x8033B11C: nop
    
            goto L_8033B168;
    }
    // 0x8033B11C: nop

    // 0x8033B120: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B124: nop

    // 0x8033B128: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x8033B12C: nop

    // 0x8033B130: bne         $t9, $zero, L_8033B150
    if (ctx->r25 != 0) {
        // 0x8033B134: nop
    
            goto L_8033B150;
    }
    // 0x8033B134: nop

    // 0x8033B138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B13C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B140: jal         0x8002B114
    // 0x8033B144: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033B144: nop

    after_2:
    // 0x8033B148: b           L_8033B168
    // 0x8033B14C: nop

        goto L_8033B168;
    // 0x8033B14C: nop

L_8033B150:
    // 0x8033B150: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B154: nop

    // 0x8033B158: lh          $t3, 0xA6($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XA6);
    // 0x8033B15C: nop

    // 0x8033B160: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8033B164: sh          $t4, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r12;
L_8033B168:
    // 0x8033B168: b           L_8033B170
    // 0x8033B16C: nop

        goto L_8033B170;
    // 0x8033B16C: nop

L_8033B170:
    // 0x8033B170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033B174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033B178: jr          $ra
    // 0x8033B17C: nop

    return;
    // 0x8033B17C: nop

;}
RECOMP_FUNC void func_bagular3_803388F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803388F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803388F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803388F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803388FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338900: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338904: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338908: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033890C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338910: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338914: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338918: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033891C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338920: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338924: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338928: nop

    // 0x8033892C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338930: nop

    // 0x80338934: bne         $t1, $zero, L_8033898C
    if (ctx->r9 != 0) {
        // 0x80338938: nop
    
            goto L_8033898C;
    }
    // 0x80338938: nop

    // 0x8033893C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338940: nop

    // 0x80338944: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338948: nop

    // 0x8033894C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338950: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338954: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338958: nop

    // 0x8033895C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338960: nop

    // 0x80338964: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338968: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033896C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338970: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80338974: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338978: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033897C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338980: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x80338984: jal         0x8001C0EC
    // 0x80338988: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338988: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_8033898C:
    // 0x8033898C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338990: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338994: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80338998: nop

    // 0x8033899C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803389A0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803389A4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803389A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803389AC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803389B0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803389B4: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803389B8: nop

    // 0x803389BC: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803389C0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803389C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803389C8: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803389CC: nop

    // 0x803389D0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803389D4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803389D8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803389DC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803389E0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803389E4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803389E8: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803389EC: nop

    // 0x803389F0: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803389F4: b           L_803389FC
    // 0x803389F8: nop

        goto L_803389FC;
    // 0x803389F8: nop

L_803389FC:
    // 0x803389FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338A00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338A04: jr          $ra
    // 0x80338A08: nop

    return;
    // 0x80338A08: nop

;}
RECOMP_FUNC void func_bagular3_80335980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335980: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335984: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335988: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033598C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335990: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335994: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335998: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033599C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803359A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803359A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803359A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803359AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803359B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803359B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803359B8: nop

    // 0x803359BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803359C0: nop

    // 0x803359C4: bne         $t1, $zero, L_80335A38
    if (ctx->r9 != 0) {
        // 0x803359C8: nop
    
            goto L_80335A38;
    }
    // 0x803359C8: nop

    // 0x803359CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803359D0: nop

    // 0x803359D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803359D8: nop

    // 0x803359DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803359E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803359E4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803359E8: nop

    // 0x803359EC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803359F0: nop

    // 0x803359F4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803359F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803359FC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335A00: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x80335A04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335A08: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335A10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80335A14: jal         0x8001C0EC
    // 0x80335A18: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335A18: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
    // 0x80335A1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335A20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335A28: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x80335A2C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335A30: jal         0x800175F0
    // 0x80335A34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80335A34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80335A38:
    // 0x80335A38: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335A3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335A40: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335A44: nop

    // 0x80335A48: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335A4C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335A50: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335A54: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335A58: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335A5C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335A60: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80335A64: nop

    // 0x80335A68: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80335A6C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335A70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335A74: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80335A78: nop

    // 0x80335A7C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335A80: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335A84: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335A88: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335A8C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335A90: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335A94: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80335A98: nop

    // 0x80335A9C: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80335AA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335AA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335AA8: jal         0x8001B4AC
    // 0x80335AAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80335AAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80335AB0: beq         $v0, $zero, L_80335AD0
    if (ctx->r2 == 0) {
        // 0x80335AB4: nop
    
            goto L_80335AD0;
    }
    // 0x80335AB4: nop

    // 0x80335AB8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335ABC: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80335AC0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80335AC4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335AC8: nop

    // 0x80335ACC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80335AD0:
    // 0x80335AD0: b           L_80335AD8
    // 0x80335AD4: nop

        goto L_80335AD8;
    // 0x80335AD4: nop

L_80335AD8:
    // 0x80335AD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335ADC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335AE0: jr          $ra
    // 0x80335AE4: nop

    return;
    // 0x80335AE4: nop

;}
RECOMP_FUNC void func_bagular3_803370AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803370AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803370B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803370B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803370B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803370BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803370C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803370C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803370C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803370CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803370D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803370D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803370D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803370DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803370E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803370E4: nop

    // 0x803370E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803370EC: nop

    // 0x803370F0: bne         $t1, $zero, L_80337148
    if (ctx->r9 != 0) {
        // 0x803370F4: nop
    
            goto L_80337148;
    }
    // 0x803370F4: nop

    // 0x803370F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803370FC: nop

    // 0x80337100: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337104: nop

    // 0x80337108: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033710C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337110: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337114: nop

    // 0x80337118: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033711C: nop

    // 0x80337120: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337124: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337128: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033712C: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80337130: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337134: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033713C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80337140: jal         0x8001C0EC
    // 0x80337144: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337144: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80337148:
    // 0x80337148: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033714C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337150: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337154: nop

    // 0x80337158: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033715C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337160: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337164: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337168: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033716C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337170: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337174: nop

    // 0x80337178: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033717C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80337180: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337184: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80337188: nop

    // 0x8033718C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80337190: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337194: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337198: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033719C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803371A0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803371A4: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803371A8: nop

    // 0x803371AC: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803371B0: b           L_803371B8
    // 0x803371B4: nop

        goto L_803371B8;
    // 0x803371B4: nop

L_803371B8:
    // 0x803371B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803371BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803371C0: jr          $ra
    // 0x803371C4: nop

    return;
    // 0x803371C4: nop

;}
RECOMP_FUNC void func_bagular3_80335480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335480: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335484: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335488: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033548C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335490: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335494: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335498: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033549C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803354A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803354A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803354A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803354AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803354B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803354B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803354B8: nop

    // 0x803354BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803354C0: nop

    // 0x803354C4: bne         $t1, $zero, L_8033551C
    if (ctx->r9 != 0) {
        // 0x803354C8: nop
    
            goto L_8033551C;
    }
    // 0x803354C8: nop

    // 0x803354CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803354D0: nop

    // 0x803354D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803354D8: nop

    // 0x803354DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803354E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803354E4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803354E8: nop

    // 0x803354EC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803354F0: nop

    // 0x803354F4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803354F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803354FC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335500: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x80335504: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335508: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033550C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335510: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80335514: jal         0x8001C0EC
    // 0x80335518: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335518: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_8033551C:
    // 0x8033551C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335520: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335524: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335528: nop

    // 0x8033552C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335530: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335534: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335538: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033553C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335540: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335544: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80335548: nop

    // 0x8033554C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80335550: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335554: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335558: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033555C: nop

    // 0x80335560: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335564: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335568: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033556C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335570: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335574: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335578: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033557C: nop

    // 0x80335580: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80335584: b           L_8033558C
    // 0x80335588: nop

        goto L_8033558C;
    // 0x80335588: nop

L_8033558C:
    // 0x8033558C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335590: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335594: jr          $ra
    // 0x80335598: nop

    return;
    // 0x80335598: nop

;}
RECOMP_FUNC void func_bagular3_80338128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338128: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033812C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338130: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338134: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338138: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033813C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338140: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338144: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338148: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033814C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338150: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338154: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338158: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033815C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338160: nop

    // 0x80338164: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338168: nop

    // 0x8033816C: bne         $t1, $zero, L_803381C4
    if (ctx->r9 != 0) {
        // 0x80338170: nop
    
            goto L_803381C4;
    }
    // 0x80338170: nop

    // 0x80338174: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338178: nop

    // 0x8033817C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338180: nop

    // 0x80338184: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338188: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033818C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338190: nop

    // 0x80338194: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338198: nop

    // 0x8033819C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803381A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803381A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803381A8: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x803381AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803381B0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803381B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803381B8: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x803381BC: jal         0x8001C0EC
    // 0x803381C0: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803381C0: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_803381C4:
    // 0x803381C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803381C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803381CC: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803381D0: nop

    // 0x803381D4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803381D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803381DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803381E0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803381E4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803381E8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803381EC: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803381F0: nop

    // 0x803381F4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803381F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803381FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338200: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80338204: nop

    // 0x80338208: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033820C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338210: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338214: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338218: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033821C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80338220: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80338224: nop

    // 0x80338228: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033822C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338230: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338234: jal         0x8001B4AC
    // 0x80338238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80338238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033823C: beq         $v0, $zero, L_8033825C
    if (ctx->r2 == 0) {
        // 0x80338240: nop
    
            goto L_8033825C;
    }
    // 0x80338240: nop

    // 0x80338244: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80338248: addiu       $t2, $zero, 0x13
    ctx->r10 = ADD32(0, 0X13);
    // 0x8033824C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80338250: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338254: nop

    // 0x80338258: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033825C:
    // 0x8033825C: b           L_80338264
    // 0x80338260: nop

        goto L_80338264;
    // 0x80338260: nop

L_80338264:
    // 0x80338264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338268: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033826C: jr          $ra
    // 0x80338270: nop

    return;
    // 0x80338270: nop

;}
RECOMP_FUNC void func_bagular3_80339A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339A40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339A48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339A4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339A50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339A54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339A58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339A5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339A60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339A64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339A68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339A6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339A70: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339A74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339A78: nop

    // 0x80339A7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339A80: nop

    // 0x80339A84: bne         $t1, $zero, L_80339ADC
    if (ctx->r9 != 0) {
        // 0x80339A88: nop
    
            goto L_80339ADC;
    }
    // 0x80339A88: nop

    // 0x80339A8C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339A90: nop

    // 0x80339A94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339A98: nop

    // 0x80339A9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339AA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339AA4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339AA8: nop

    // 0x80339AAC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339AB0: nop

    // 0x80339AB4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339AB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339ABC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80339AC0: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x80339AC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339AC8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80339ACC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80339AD0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80339AD4: jal         0x8001C0EC
    // 0x80339AD8: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339AD8: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_80339ADC:
    // 0x80339ADC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339AE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339AE4: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80339AE8: nop

    // 0x80339AEC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339AF0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339AF4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80339AF8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339AFC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339B00: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80339B04: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80339B08: nop

    // 0x80339B0C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80339B10: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80339B14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339B18: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80339B1C: nop

    // 0x80339B20: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80339B24: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339B28: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339B2C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339B30: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339B34: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80339B38: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80339B3C: nop

    // 0x80339B40: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80339B44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339B48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339B4C: jal         0x8001B4AC
    // 0x80339B50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80339B50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80339B54: beq         $v0, $zero, L_80339B74
    if (ctx->r2 == 0) {
        // 0x80339B58: nop
    
            goto L_80339B74;
    }
    // 0x80339B58: nop

    // 0x80339B5C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80339B60: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80339B64: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80339B68: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339B6C: nop

    // 0x80339B70: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80339B74:
    // 0x80339B74: b           L_80339B7C
    // 0x80339B78: nop

        goto L_80339B7C;
    // 0x80339B78: nop

L_80339B7C:
    // 0x80339B7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339B84: jr          $ra
    // 0x80339B88: nop

    return;
    // 0x80339B88: nop

;}
RECOMP_FUNC void func_bagular3_80339CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339CF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339CF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339CFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339D00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339D04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339D08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339D0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339D10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339D14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339D18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339D1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339D20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339D24: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339D28: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339D2C: nop

    // 0x80339D30: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339D34: nop

    // 0x80339D38: bne         $t1, $zero, L_80339D90
    if (ctx->r9 != 0) {
        // 0x80339D3C: nop
    
            goto L_80339D90;
    }
    // 0x80339D3C: nop

    // 0x80339D40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339D44: nop

    // 0x80339D48: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339D4C: nop

    // 0x80339D50: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339D54: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339D58: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339D5C: nop

    // 0x80339D60: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339D64: nop

    // 0x80339D68: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339D6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339D70: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80339D74: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x80339D78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339D7C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80339D80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80339D84: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80339D88: jal         0x8001C0EC
    // 0x80339D8C: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339D8C: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_80339D90:
    // 0x80339D90: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339D94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339D98: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80339D9C: nop

    // 0x80339DA0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339DA4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339DA8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80339DAC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339DB0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339DB4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80339DB8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80339DBC: nop

    // 0x80339DC0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80339DC4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80339DC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339DCC: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80339DD0: nop

    // 0x80339DD4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80339DD8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339DDC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339DE0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339DE4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339DE8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80339DEC: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80339DF0: nop

    // 0x80339DF4: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80339DF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339DFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339E00: jal         0x8001B4AC
    // 0x80339E04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80339E04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80339E08: beq         $v0, $zero, L_80339E28
    if (ctx->r2 == 0) {
        // 0x80339E0C: nop
    
            goto L_80339E28;
    }
    // 0x80339E0C: nop

    // 0x80339E10: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80339E14: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x80339E18: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80339E1C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339E20: nop

    // 0x80339E24: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80339E28:
    // 0x80339E28: b           L_80339E30
    // 0x80339E2C: nop

        goto L_80339E30;
    // 0x80339E2C: nop

L_80339E30:
    // 0x80339E30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339E34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339E38: jr          $ra
    // 0x80339E3C: nop

    return;
    // 0x80339E3C: nop

;}
RECOMP_FUNC void func_bagular3_803363CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803363CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803363D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803363D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803363D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803363DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803363E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803363E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803363E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803363EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803363F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803363F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803363F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803363FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336400: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336404: nop

    // 0x80336408: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033640C: nop

    // 0x80336410: bne         $t1, $zero, L_80336468
    if (ctx->r9 != 0) {
        // 0x80336414: nop
    
            goto L_80336468;
    }
    // 0x80336414: nop

    // 0x80336418: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033641C: nop

    // 0x80336420: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336424: nop

    // 0x80336428: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033642C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336430: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336434: nop

    // 0x80336438: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033643C: nop

    // 0x80336440: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336444: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336448: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033644C: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x80336450: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336454: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033645C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80336460: jal         0x8001C0EC
    // 0x80336464: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336464: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_80336468:
    // 0x80336468: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033646C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336470: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80336474: nop

    // 0x80336478: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033647C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336480: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80336484: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336488: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033648C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80336490: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80336494: nop

    // 0x80336498: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033649C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803364A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803364A4: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803364A8: nop

    // 0x803364AC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803364B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803364B4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803364B8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803364BC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803364C0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803364C4: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803364C8: nop

    // 0x803364CC: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803364D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803364D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803364D8: jal         0x8001B4AC
    // 0x803364DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803364DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803364E0: beq         $v0, $zero, L_80336500
    if (ctx->r2 == 0) {
        // 0x803364E4: nop
    
            goto L_80336500;
    }
    // 0x803364E4: nop

    // 0x803364E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803364EC: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x803364F0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803364F4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803364F8: nop

    // 0x803364FC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80336500:
    // 0x80336500: b           L_80336508
    // 0x80336504: nop

        goto L_80336508;
    // 0x80336504: nop

L_80336508:
    // 0x80336508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033650C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336510: jr          $ra
    // 0x80336514: nop

    return;
    // 0x80336514: nop

;}
RECOMP_FUNC void func_bagular3_8033559C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033559C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803355A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803355A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803355A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803355AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803355B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803355B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803355B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803355BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803355C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803355C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803355C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803355CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803355D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803355D4: nop

    // 0x803355D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803355DC: nop

    // 0x803355E0: bne         $t1, $zero, L_80335638
    if (ctx->r9 != 0) {
        // 0x803355E4: nop
    
            goto L_80335638;
    }
    // 0x803355E4: nop

    // 0x803355E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803355EC: nop

    // 0x803355F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803355F4: nop

    // 0x803355F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803355FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335600: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335604: nop

    // 0x80335608: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033560C: nop

    // 0x80335610: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335614: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335618: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033561C: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x80335620: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335624: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033562C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80335630: jal         0x8001C0EC
    // 0x80335634: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335634: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_80335638:
    // 0x80335638: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033563C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335640: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335644: nop

    // 0x80335648: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033564C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335650: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335654: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335658: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033565C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335660: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80335664: nop

    // 0x80335668: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033566C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335670: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335674: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80335678: nop

    // 0x8033567C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335680: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335684: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335688: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033568C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335690: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335694: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80335698: nop

    // 0x8033569C: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803356A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803356A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803356A8: jal         0x8001B4AC
    // 0x803356AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803356AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803356B0: beq         $v0, $zero, L_803356D0
    if (ctx->r2 == 0) {
        // 0x803356B4: nop
    
            goto L_803356D0;
    }
    // 0x803356B4: nop

    // 0x803356B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803356BC: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x803356C0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803356C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803356C8: nop

    // 0x803356CC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803356D0:
    // 0x803356D0: b           L_803356D8
    // 0x803356D4: nop

        goto L_803356D8;
    // 0x803356D4: nop

L_803356D8:
    // 0x803356D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803356DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803356E0: jr          $ra
    // 0x803356E4: nop

    return;
    // 0x803356E4: nop

;}
RECOMP_FUNC void func_bagular3_80336F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336F60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336F64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336F68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336F6C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336F70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336F74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336F78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336F7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336F80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336F84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336F88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336F8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336F90: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336F94: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336F98: nop

    // 0x80336F9C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336FA0: nop

    // 0x80336FA4: bne         $t1, $zero, L_80336FFC
    if (ctx->r9 != 0) {
        // 0x80336FA8: nop
    
            goto L_80336FFC;
    }
    // 0x80336FA8: nop

    // 0x80336FAC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336FB0: nop

    // 0x80336FB4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336FB8: nop

    // 0x80336FBC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336FC0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336FC4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336FC8: nop

    // 0x80336FCC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336FD0: nop

    // 0x80336FD4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336FDC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336FE0: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80336FE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336FE8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336FF0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80336FF4: jal         0x8001C0EC
    // 0x80336FF8: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336FF8: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80336FFC:
    // 0x80336FFC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337000: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337004: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337008: nop

    // 0x8033700C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80337010: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337014: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337018: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033701C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80337020: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337024: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337028: nop

    // 0x8033702C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80337030: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80337034: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337038: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033703C: nop

    // 0x80337040: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80337044: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337048: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033704C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337050: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80337054: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80337058: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033705C: nop

    // 0x80337060: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80337064: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337068: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033706C: jal         0x8001B4AC
    // 0x80337070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337074: beq         $v0, $zero, L_80337094
    if (ctx->r2 == 0) {
        // 0x80337078: nop
    
            goto L_80337094;
    }
    // 0x80337078: nop

    // 0x8033707C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337080: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80337084: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80337088: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033708C: nop

    // 0x80337090: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80337094:
    // 0x80337094: b           L_8033709C
    // 0x80337098: nop

        goto L_8033709C;
    // 0x80337098: nop

L_8033709C:
    // 0x8033709C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803370A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803370A4: jr          $ra
    // 0x803370A8: nop

    return;
    // 0x803370A8: nop

;}
RECOMP_FUNC void func_bagular3_80337460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337460: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337468: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033746C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337470: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337474: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337478: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033747C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337480: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337484: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337488: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033748C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337490: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337494: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337498: nop

    // 0x8033749C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803374A0: nop

    // 0x803374A4: bne         $t1, $zero, L_803374FC
    if (ctx->r9 != 0) {
        // 0x803374A8: nop
    
            goto L_803374FC;
    }
    // 0x803374A8: nop

    // 0x803374AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803374B0: nop

    // 0x803374B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803374B8: nop

    // 0x803374BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803374C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803374C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803374C8: nop

    // 0x803374CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803374D0: nop

    // 0x803374D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803374D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374DC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803374E0: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x803374E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374E8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803374EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803374F0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x803374F4: jal         0x8001C0EC
    // 0x803374F8: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803374F8: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_803374FC:
    // 0x803374FC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337500: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337504: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337508: nop

    // 0x8033750C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80337510: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337514: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337518: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033751C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80337520: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337524: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337528: nop

    // 0x8033752C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80337530: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80337534: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337538: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033753C: nop

    // 0x80337540: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80337544: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337548: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033754C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337550: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80337554: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80337558: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033755C: nop

    // 0x80337560: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80337564: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337568: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033756C: jal         0x8001B4AC
    // 0x80337570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337574: beq         $v0, $zero, L_80337594
    if (ctx->r2 == 0) {
        // 0x80337578: nop
    
            goto L_80337594;
    }
    // 0x80337578: nop

    // 0x8033757C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337580: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x80337584: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80337588: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033758C: nop

    // 0x80337590: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80337594:
    // 0x80337594: b           L_8033759C
    // 0x80337598: nop

        goto L_8033759C;
    // 0x80337598: nop

L_8033759C:
    // 0x8033759C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803375A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803375A4: jr          $ra
    // 0x803375A8: nop

    return;
    // 0x803375A8: nop

;}
RECOMP_FUNC void func_bagular3_80335C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335C34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335C38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335C3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335C40: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335C44: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335C48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335C4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335C50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335C54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335C58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335C5C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335C60: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335C64: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335C68: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335C6C: nop

    // 0x80335C70: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335C74: nop

    // 0x80335C78: bne         $t1, $zero, L_80335CD0
    if (ctx->r9 != 0) {
        // 0x80335C7C: nop
    
            goto L_80335CD0;
    }
    // 0x80335C7C: nop

    // 0x80335C80: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335C84: nop

    // 0x80335C88: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335C8C: nop

    // 0x80335C90: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335C94: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335C98: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335C9C: nop

    // 0x80335CA0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335CA4: nop

    // 0x80335CA8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335CAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335CB0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335CB4: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x80335CB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335CBC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335CC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335CC4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80335CC8: jal         0x8001C0EC
    // 0x80335CCC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335CCC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_80335CD0:
    // 0x80335CD0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335CD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335CD8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335CDC: nop

    // 0x80335CE0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335CE4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335CE8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335CEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335CF0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335CF4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335CF8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80335CFC: nop

    // 0x80335D00: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80335D04: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335D08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335D0C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80335D10: nop

    // 0x80335D14: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335D18: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335D1C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335D20: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335D24: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335D28: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335D2C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80335D30: nop

    // 0x80335D34: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80335D38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D40: jal         0x8001B4AC
    // 0x80335D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80335D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335D48: beq         $v0, $zero, L_80335D68
    if (ctx->r2 == 0) {
        // 0x80335D4C: nop
    
            goto L_80335D68;
    }
    // 0x80335D4C: nop

    // 0x80335D50: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335D54: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x80335D58: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80335D5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335D60: nop

    // 0x80335D64: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80335D68:
    // 0x80335D68: b           L_80335D70
    // 0x80335D6C: nop

        goto L_80335D70;
    // 0x80335D6C: nop

L_80335D70:
    // 0x80335D70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335D74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335D78: jr          $ra
    // 0x80335D7C: nop

    return;
    // 0x80335D7C: nop

;}
RECOMP_FUNC void func_bagular3_8033BB6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BB6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033BB70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033BB74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BB78: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BB7C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BB80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BB84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BB88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BB8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BB90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BB94: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BB98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BB9C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033BBA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BBA4: nop

    // 0x8033BBA8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033BBAC: nop

    // 0x8033BBB0: bne         $t1, $zero, L_8033BC38
    if (ctx->r9 != 0) {
        // 0x8033BBB4: nop
    
            goto L_8033BC38;
    }
    // 0x8033BBB4: nop

    // 0x8033BBB8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033BBBC: nop

    // 0x8033BBC0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033BBC4: nop

    // 0x8033BBC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033BBCC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033BBD0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BBD4: nop

    // 0x8033BBD8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033BBDC: nop

    // 0x8033BBE0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033BBE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BBE8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033BBEC: addiu       $t7, $t7, -0x4730
    ctx->r15 = ADD32(ctx->r15, -0X4730);
    // 0x8033BBF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BBF4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033BBF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033BBFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033BC00: jal         0x8001C0EC
    // 0x8033BC04: addiu       $a3, $zero, 0x146
    ctx->r7 = ADD32(0, 0X146);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033BC04: addiu       $a3, $zero, 0x146
    ctx->r7 = ADD32(0, 0X146);
    after_0:
    // 0x8033BC08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BC0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BC10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033BC14: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    // 0x8033BC18: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033BC1C: jal         0x800175F0
    // 0x8033BC20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033BC20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8033BC24: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x8033BC28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033BC2C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033BC30: nop

    // 0x8033BC34: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
L_8033BC38:
    // 0x8033BC38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BC3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BC40: jal         0x8001B62C
    // 0x8033BC44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x8033BC44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8033BC48: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033BC4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033BC50: nop

    // 0x8033BC54: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8033BC58: nop

    // 0x8033BC5C: bc1f        L_8033BD10
    if (!c1cs) {
        // 0x8033BC60: nop
    
            goto L_8033BD10;
    }
    // 0x8033BC60: nop

    // 0x8033BC64: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033BC68: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033BC6C: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x8033BC70: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033BC74: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033BC78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033BC7C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033BC80: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033BC84: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033BC88: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8033BC8C: lwc1        $f8, 0x24($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X24);
    // 0x8033BC90: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033BC94: nop

    // 0x8033BC98: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8033BC9C: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
    // 0x8033BCA0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033BCA4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033BCA8: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x8033BCAC: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033BCB0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8033BCB4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033BCB8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033BCBC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033BCC0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033BCC4: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8033BCC8: lwc1        $f18, 0x2C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8033BCCC: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033BCD0: nop

    // 0x8033BCD4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8033BCD8: swc1        $f6, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f6.u32l;
    // 0x8033BCDC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BCE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BCE4: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x8033BCE8: nop

    // 0x8033BCEC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033BCF0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033BCF4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033BCF8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033BCFC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033BD00: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033BD04: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033BD08: b           L_8033BD34
    // 0x8033BD0C: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
        goto L_8033BD34;
    // 0x8033BD0C: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
L_8033BD10:
    // 0x8033BD10: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033BD14: nop

    // 0x8033BD18: lwc1        $f10, 0x1C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8033BD1C: nop

    // 0x8033BD20: swc1        $f10, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f10.u32l;
    // 0x8033BD24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BD28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BD2C: jal         0x80029C40
    // 0x8033BD30: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x8033BD30: nop

    after_3:
L_8033BD34:
    // 0x8033BD34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BD38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BD3C: jal         0x8001B4AC
    // 0x8033BD40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033BD40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x8033BD44: beq         $v0, $zero, L_8033BD5C
    if (ctx->r2 == 0) {
        // 0x8033BD48: nop
    
            goto L_8033BD5C;
    }
    // 0x8033BD48: nop

    // 0x8033BD4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BD50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BD54: jal         0x8002B114
    // 0x8033BD58: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x8033BD58: nop

    after_5:
L_8033BD5C:
    // 0x8033BD5C: b           L_8033BD64
    // 0x8033BD60: nop

        goto L_8033BD64;
    // 0x8033BD60: nop

L_8033BD64:
    // 0x8033BD64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BD68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033BD6C: jr          $ra
    // 0x8033BD70: nop

    return;
    // 0x8033BD70: nop

;}
RECOMP_FUNC void func_bagular3_80338E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338E1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80338E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80338E24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338E28: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338E2C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338E30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338E34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338E38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338E3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338E40: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338E44: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338E48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338E4C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80338E50: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80338E54: nop

    // 0x80338E58: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338E5C: nop

    // 0x80338E60: bne         $t1, $zero, L_80338E94
    if (ctx->r9 != 0) {
        // 0x80338E64: nop
    
            goto L_80338E94;
    }
    // 0x80338E64: nop

    // 0x80338E68: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80338E6C: nop

    // 0x80338E70: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338E74: nop

    // 0x80338E78: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338E7C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338E80: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80338E84: nop

    // 0x80338E88: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338E8C: nop

    // 0x80338E90: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_80338E94:
    // 0x80338E94: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80338E98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338E9C: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80338EA0: nop

    // 0x80338EA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80338EA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80338EAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80338EB0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80338EB4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80338EB8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80338EBC: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80338EC0: nop

    // 0x80338EC4: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x80338EC8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80338ECC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338ED0: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80338ED4: nop

    // 0x80338ED8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80338EDC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80338EE0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80338EE4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80338EE8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80338EEC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80338EF0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80338EF4: nop

    // 0x80338EF8: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x80338EFC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80338F00: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80338F04: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x80338F08: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80338F0C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80338F10: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80338F14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80338F18: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80338F1C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80338F20: addu        $t8, $t6, $t5
    ctx->r24 = ADD32(ctx->r14, ctx->r13);
    // 0x80338F24: lh          $t9, 0xBE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBE);
    // 0x80338F28: nop

    // 0x80338F2C: bne         $t9, $zero, L_80338F5C
    if (ctx->r25 != 0) {
        // 0x80338F30: nop
    
            goto L_80338F5C;
    }
    // 0x80338F30: nop

    // 0x80338F34: lh          $t7, 0xC0($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XC0);
    // 0x80338F38: nop

    // 0x80338F3C: bne         $t7, $zero, L_80338F5C
    if (ctx->r15 != 0) {
        // 0x80338F40: nop
    
            goto L_80338F5C;
    }
    // 0x80338F40: nop

    // 0x80338F44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338F48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338F4C: jal         0x8002B114
    // 0x80338F50: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x80338F50: nop

    after_0:
    // 0x80338F54: b           L_80338FFC
    // 0x80338F58: nop

        goto L_80338FFC;
    // 0x80338F58: nop

L_80338F5C:
    // 0x80338F5C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80338F60: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80338F64: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80338F68: nop

    // 0x80338F6C: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80338F70: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80338F74: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338F78: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80338F7C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80338F80: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80338F84: lh          $t4, 0x420E($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X420E);
    // 0x80338F88: nop

    // 0x80338F8C: bne         $t4, $zero, L_80338FAC
    if (ctx->r12 != 0) {
        // 0x80338F90: nop
    
            goto L_80338FAC;
    }
    // 0x80338F90: nop

    // 0x80338F94: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80338F98: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80338F9C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80338FA0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80338FA4: b           L_80338FFC
    // 0x80338FA8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80338FFC;
    // 0x80338FA8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80338FAC:
    // 0x80338FAC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80338FB0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80338FB4: lh          $t8, 0xC2($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XC2);
    // 0x80338FB8: nop

    // 0x80338FBC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80338FC0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80338FC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338FC8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80338FCC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338FD0: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80338FD4: lh          $t1, 0x4210($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4210);
    // 0x80338FD8: nop

    // 0x80338FDC: bne         $t1, $zero, L_80338FFC
    if (ctx->r9 != 0) {
        // 0x80338FE0: nop
    
            goto L_80338FFC;
    }
    // 0x80338FE0: nop

    // 0x80338FE4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80338FE8: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80338FEC: sh          $t3, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r11;
    // 0x80338FF0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80338FF4: nop

    // 0x80338FF8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80338FFC:
    // 0x80338FFC: b           L_80339004
    // 0x80339000: nop

        goto L_80339004;
    // 0x80339000: nop

L_80339004:
    // 0x80339004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80339008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033900C: jr          $ra
    // 0x80339010: nop

    return;
    // 0x80339010: nop

;}
RECOMP_FUNC void func_bagular3_80331F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331F48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331F4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331F50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331F54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331F58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331F60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331F68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331F6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331F70: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331F74: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F78: nop

    // 0x80331F7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331F80: nop

    // 0x80331F84: bne         $t1, $zero, L_80331FEC
    if (ctx->r9 != 0) {
        // 0x80331F88: nop
    
            goto L_80331FEC;
    }
    // 0x80331F88: nop

    // 0x80331F8C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F90: nop

    // 0x80331F94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331F98: nop

    // 0x80331F9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331FA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331FA4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331FA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331FAC: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x80331FB0: jal         0x8001BBDC
    // 0x80331FB4: nop

    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80331FB4: nop

    after_0:
    // 0x80331FB8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80331FBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331FC0: lh          $a0, 0xEA($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XEA);
    // 0x80331FC4: jal         0x8001BBDC
    // 0x80331FC8: nop

    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80331FC8: nop

    after_1:
    // 0x80331FCC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80331FD0: nop

    // 0x80331FD4: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80331FD8: nop

    // 0x80331FDC: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x80331FE0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331FE4: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x80331FE8: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_80331FEC:
    // 0x80331FEC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80331FF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331FF4: lh          $t3, 0xE8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE8);
    // 0x80331FF8: lwc1        $f4, 0x1C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80331FFC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332000: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332004: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332008: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033200C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332010: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332014: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80332018: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033201C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332020: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332024: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332028: jal         0x80015538
    // 0x8033202C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8033202C: nop

    after_2:
    // 0x80332030: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332034: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332038: lh          $t6, 0xEA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XEA);
    // 0x8033203C: nop

    // 0x80332040: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80332044: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80332048: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033204C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80332050: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332054: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332058: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x8033205C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332060: nop

    // 0x80332064: lh          $t9, 0xA8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA8);
    // 0x80332068: nop

    // 0x8033206C: bne         $t9, $zero, L_803321A8
    if (ctx->r25 != 0) {
        // 0x80332070: nop
    
            goto L_803321A8;
    }
    // 0x80332070: nop

    // 0x80332074: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332078: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033207C: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80332080: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80332084: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332088: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033208C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332090: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332094: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332098: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x8033209C: lh          $t5, 0xBE($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XBE);
    // 0x803320A0: nop

    // 0x803320A4: bne         $t5, $zero, L_803320D4
    if (ctx->r13 != 0) {
        // 0x803320A8: nop
    
            goto L_803320D4;
    }
    // 0x803320A8: nop

    // 0x803320AC: lh          $t6, 0xC0($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC0);
    // 0x803320B0: nop

    // 0x803320B4: bne         $t6, $zero, L_803320D4
    if (ctx->r14 != 0) {
        // 0x803320B8: nop
    
            goto L_803320D4;
    }
    // 0x803320B8: nop

    // 0x803320BC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803320C0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803320C4: sh          $t8, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r24;
    // 0x803320C8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803320CC: b           L_803321A0
    // 0x803320D0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_803321A0;
    // 0x803320D0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803320D4:
    // 0x803320D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320DC: jal         0x8002A46C
    // 0x803320E0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x803320E0: nop

    after_3:
    // 0x803320E4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x803320E8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803320EC: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x803320F0: lwc1        $f14, 0x1C($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803320F4: jal         0x80015538
    // 0x803320F8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803320F8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_4:
    // 0x803320FC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80332100: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80332104: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332108: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8033210C: nop

    // 0x80332110: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80332114: nop

    // 0x80332118: bc1f        L_80332194
    if (!c1cs) {
        // 0x8033211C: nop
    
            goto L_80332194;
    }
    // 0x8033211C: nop

    // 0x80332120: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332124: lwc1        $f10, -0x3D98($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3D98);
    // 0x80332128: nop

    // 0x8033212C: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80332130: nop

    // 0x80332134: bc1f        L_80332194
    if (!c1cs) {
        // 0x80332138: nop
    
            goto L_80332194;
    }
    // 0x80332138: nop

    // 0x8033213C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332140: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332144: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80332148: nop

    // 0x8033214C: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80332150: nop

    // 0x80332154: bc1f        L_80332174
    if (!c1cs) {
        // 0x80332158: nop
    
            goto L_80332174;
    }
    // 0x80332158: nop

    // 0x8033215C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332160: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80332164: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80332168: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033216C: b           L_8033218C
    // 0x80332170: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_8033218C;
    // 0x80332170: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80332174:
    // 0x80332174: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332178: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8033217C: sh          $t5, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r13;
    // 0x80332180: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80332184: nop

    // 0x80332188: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033218C:
    // 0x8033218C: b           L_803321A0
    // 0x80332190: nop

        goto L_803321A0;
    // 0x80332190: nop

L_80332194:
    // 0x80332194: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332198: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8033219C: sh          $t8, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r24;
L_803321A0:
    // 0x803321A0: b           L_803321C0
    // 0x803321A4: nop

        goto L_803321C0;
    // 0x803321A4: nop

L_803321A8:
    // 0x803321A8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803321AC: nop

    // 0x803321B0: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x803321B4: nop

    // 0x803321B8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x803321BC: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
L_803321C0:
    // 0x803321C0: b           L_803321C8
    // 0x803321C4: nop

        goto L_803321C8;
    // 0x803321C4: nop

L_803321C8:
    // 0x803321C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803321CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803321D0: jr          $ra
    // 0x803321D4: nop

    return;
    // 0x803321D4: nop

;}
RECOMP_FUNC void func_bagular3_803391A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803391A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803391A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803391AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803391B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803391B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803391B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803391BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803391C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803391C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803391C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803391CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803391D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803391D4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803391D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803391DC: nop

    // 0x803391E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803391E4: nop

    // 0x803391E8: bne         $t1, $zero, L_80339240
    if (ctx->r9 != 0) {
        // 0x803391EC: nop
    
            goto L_80339240;
    }
    // 0x803391EC: nop

    // 0x803391F0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803391F4: nop

    // 0x803391F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803391FC: nop

    // 0x80339200: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339204: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339208: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033920C: nop

    // 0x80339210: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339214: nop

    // 0x80339218: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033921C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339220: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80339224: addiu       $t7, $t7, -0x4848
    ctx->r15 = ADD32(ctx->r15, -0X4848);
    // 0x80339228: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033922C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80339230: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80339234: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80339238: jal         0x8001C0EC
    // 0x8033923C: addiu       $a3, $zero, 0x147
    ctx->r7 = ADD32(0, 0X147);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033923C: addiu       $a3, $zero, 0x147
    ctx->r7 = ADD32(0, 0X147);
    after_0:
L_80339240:
    // 0x80339240: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339244: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339248: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033924C: nop

    // 0x80339250: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339254: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339258: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033925C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339260: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339264: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80339268: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033926C: nop

    // 0x80339270: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80339274: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80339278: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033927C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80339280: nop

    // 0x80339284: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80339288: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033928C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339290: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339294: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339298: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033929C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803392A0: nop

    // 0x803392A4: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803392A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803392AC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803392B0: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x803392B4: nop

    // 0x803392B8: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803392BC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803392C0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803392C4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803392C8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803392CC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803392D0: lh          $t7, 0x420E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X420E);
    // 0x803392D4: nop

    // 0x803392D8: bne         $t7, $zero, L_8033931C
    if (ctx->r15 != 0) {
        // 0x803392DC: nop
    
            goto L_8033931C;
    }
    // 0x803392DC: nop

    // 0x803392E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803392E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803392E8: lh          $t8, 0xC2($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XC2);
    // 0x803392EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803392F0: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x803392F4: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x803392F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803392FC: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x80339300: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80339304: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80339308: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
    // 0x8033930C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339310: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339314: jal         0x8002B114
    // 0x80339318: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80339318: nop

    after_1:
L_8033931C:
    // 0x8033931C: b           L_80339324
    // 0x80339320: nop

        goto L_80339324;
    // 0x80339320: nop

L_80339324:
    // 0x80339324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339328: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033932C: jr          $ra
    // 0x80339330: nop

    return;
    // 0x80339330: nop

;}
RECOMP_FUNC void func_bagular3_80337FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337FDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337FE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337FE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337FE8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337FEC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337FF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337FF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337FF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337FFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338000: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338004: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338008: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033800C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338010: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338014: nop

    // 0x80338018: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033801C: nop

    // 0x80338020: bne         $t1, $zero, L_80338078
    if (ctx->r9 != 0) {
        // 0x80338024: nop
    
            goto L_80338078;
    }
    // 0x80338024: nop

    // 0x80338028: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033802C: nop

    // 0x80338030: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338034: nop

    // 0x80338038: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033803C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338040: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338044: nop

    // 0x80338048: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033804C: nop

    // 0x80338050: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338054: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338058: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033805C: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80338060: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338064: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338068: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033806C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80338070: jal         0x8001C0EC
    // 0x80338074: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338074: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80338078:
    // 0x80338078: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033807C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338080: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80338084: nop

    // 0x80338088: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033808C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338090: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338094: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338098: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033809C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803380A0: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803380A4: nop

    // 0x803380A8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803380AC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803380B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803380B4: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803380B8: nop

    // 0x803380BC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803380C0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803380C4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803380C8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803380CC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803380D0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803380D4: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803380D8: nop

    // 0x803380DC: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803380E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803380E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803380E8: jal         0x8001B4AC
    // 0x803380EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803380EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803380F0: beq         $v0, $zero, L_80338110
    if (ctx->r2 == 0) {
        // 0x803380F4: nop
    
            goto L_80338110;
    }
    // 0x803380F4: nop

    // 0x803380F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803380FC: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x80338100: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80338104: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338108: nop

    // 0x8033810C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80338110:
    // 0x80338110: b           L_80338118
    // 0x80338114: nop

        goto L_80338118;
    // 0x80338114: nop

L_80338118:
    // 0x80338118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033811C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338120: jr          $ra
    // 0x80338124: nop

    return;
    // 0x80338124: nop

;}
RECOMP_FUNC void func_bagular3_80338274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338274: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338278: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033827C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338280: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338284: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338288: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033828C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338290: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338294: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338298: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033829C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803382A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803382A4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803382A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803382AC: nop

    // 0x803382B0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803382B4: nop

    // 0x803382B8: bne         $t1, $zero, L_80338310
    if (ctx->r9 != 0) {
        // 0x803382BC: nop
    
            goto L_80338310;
    }
    // 0x803382BC: nop

    // 0x803382C0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803382C4: nop

    // 0x803382C8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803382CC: nop

    // 0x803382D0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803382D4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803382D8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803382DC: nop

    // 0x803382E0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803382E4: nop

    // 0x803382E8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803382EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803382F0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803382F4: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x803382F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803382FC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338304: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80338308: jal         0x8001C0EC
    // 0x8033830C: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033830C: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80338310:
    // 0x80338310: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338314: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338318: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033831C: nop

    // 0x80338320: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80338324: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338328: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033832C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338330: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80338334: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80338338: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033833C: nop

    // 0x80338340: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80338344: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338348: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033834C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80338350: nop

    // 0x80338354: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80338358: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033835C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338360: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338364: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80338368: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033836C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80338370: nop

    // 0x80338374: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80338378: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033837C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338380: jal         0x8001B4AC
    // 0x80338384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80338384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80338388: beq         $v0, $zero, L_803383A8
    if (ctx->r2 == 0) {
        // 0x8033838C: nop
    
            goto L_803383A8;
    }
    // 0x8033838C: nop

    // 0x80338390: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80338394: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x80338398: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033839C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803383A0: nop

    // 0x803383A4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803383A8:
    // 0x803383A8: b           L_803383B0
    // 0x803383AC: nop

        goto L_803383B0;
    // 0x803383AC: nop

L_803383B0:
    // 0x803383B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803383B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803383B8: jr          $ra
    // 0x803383BC: nop

    return;
    // 0x803383BC: nop

;}
RECOMP_FUNC void func_bagular3_8033ACB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033ACB0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8033ACB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033ACB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033ACBC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033ACC0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033ACC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033ACC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ACCC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033ACD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ACD4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033ACD8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033ACDC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033ACE0: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8033ACE4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033ACE8: nop

    // 0x8033ACEC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033ACF0: nop

    // 0x8033ACF4: bne         $t1, $zero, L_8033AD64
    if (ctx->r9 != 0) {
        // 0x8033ACF8: nop
    
            goto L_8033AD64;
    }
    // 0x8033ACF8: nop

    // 0x8033ACFC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033AD00: nop

    // 0x8033AD04: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033AD08: nop

    // 0x8033AD0C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033AD10: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033AD14: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8033AD18: nop

    // 0x8033AD1C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033AD20: nop

    // 0x8033AD24: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033AD28: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8033AD2C: nop

    // 0x8033AD30: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8033AD34: nop

    // 0x8033AD38: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x8033AD3C: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x8033AD40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033AD44: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033AD48: nop

    // 0x8033AD4C: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x8033AD50: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033AD54: lwc1        $f8, -0x3C58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3C58);
    // 0x8033AD58: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8033AD5C: nop

    // 0x8033AD60: swc1        $f8, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f8.u32l;
L_8033AD64:
    // 0x8033AD64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AD68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AD6C: jal         0x80028FA0
    // 0x8033AD70: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x8033AD70: nop

    after_0:
    // 0x8033AD74: beq         $v0, $zero, L_8033AD94
    if (ctx->r2 == 0) {
        // 0x8033AD78: nop
    
            goto L_8033AD94;
    }
    // 0x8033AD78: nop

    // 0x8033AD7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AD80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AD84: jal         0x8002B0E4
    // 0x8033AD88: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x8033AD88: nop

    after_1:
    // 0x8033AD8C: b           L_8033AF3C
    // 0x8033AD90: nop

        goto L_8033AF3C;
    // 0x8033AD90: nop

L_8033AD94:
    // 0x8033AD94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AD98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AD9C: jal         0x8002A8B4
    // 0x8033ADA0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x8033ADA0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x8033ADA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ADA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ADAC: jal         0x80029D8C
    // 0x8033ADB0: nop

    func_80029D8C(rdram, ctx);
        goto after_3;
    // 0x8033ADB0: nop

    after_3:
    // 0x8033ADB4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033ADB8: nop

    // 0x8033ADBC: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x8033ADC0: nop

    // 0x8033ADC4: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x8033ADC8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033ADCC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033ADD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033ADD4: lwc1        $f18, 0x40($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X40);
    // 0x8033ADD8: nop

    // 0x8033ADDC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8033ADE0: swc1        $f4, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f4.u32l;
    // 0x8033ADE4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033ADE8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033ADEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033ADF0: lwc1        $f6, 0x18($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X18);
    // 0x8033ADF4: nop

    // 0x8033ADF8: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8033ADFC: nop

    // 0x8033AE00: bc1f        L_8033AE24
    if (!c1cs) {
        // 0x8033AE04: nop
    
            goto L_8033AE24;
    }
    // 0x8033AE04: nop

    // 0x8033AE08: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033AE0C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033AE10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033AE14: lwc1        $f10, 0x18($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X18);
    // 0x8033AE18: nop

    // 0x8033AE1C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8033AE20: swc1        $f18, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f18.u32l;
L_8033AE24:
    // 0x8033AE24: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033AE28: lui         $at, 0xC4AF
    ctx->r1 = S32(0XC4AF << 16);
    // 0x8033AE2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033AE30: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8033AE34: nop

    // 0x8033AE38: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8033AE3C: nop

    // 0x8033AE40: bc1t        L_8033AE98
    if (c1cs) {
        // 0x8033AE44: nop
    
            goto L_8033AE98;
    }
    // 0x8033AE44: nop

    // 0x8033AE48: lui         $at, 0x44AF
    ctx->r1 = S32(0X44AF << 16);
    // 0x8033AE4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033AE50: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x8033AE54: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x8033AE58: nop

    // 0x8033AE5C: bc1f        L_8033AE68
    if (!c1cs) {
        // 0x8033AE60: nop
    
            goto L_8033AE68;
    }
    // 0x8033AE60: nop

    // 0x8033AE64: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_8033AE68:
    // 0x8033AE68: bne         $t6, $zero, L_8033AE98
    if (ctx->r14 != 0) {
        // 0x8033AE6C: nop
    
            goto L_8033AE98;
    }
    // 0x8033AE6C: nop

    // 0x8033AE70: lui         $at, 0xC4AF
    ctx->r1 = S32(0XC4AF << 16);
    // 0x8033AE74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033AE78: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8033AE7C: nop

    // 0x8033AE80: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8033AE84: nop

    // 0x8033AE88: bc1t        L_8033AE98
    if (c1cs) {
        // 0x8033AE8C: nop
    
            goto L_8033AE98;
    }
    // 0x8033AE8C: nop

    // 0x8033AE90: beq         $t6, $zero, L_8033AEA0
    if (ctx->r14 == 0) {
        // 0x8033AE94: nop
    
            goto L_8033AEA0;
    }
    // 0x8033AE94: nop

L_8033AE98:
    // 0x8033AE98: b           L_8033AF34
    // 0x8033AE9C: nop

        goto L_8033AF34;
    // 0x8033AE9C: nop

L_8033AEA0:
    // 0x8033AEA0: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x8033AEA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033AEA8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033AEAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AEB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AEB4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033AEB8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8033AEBC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033AEC0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033AEC4: jal         0x800295C0
    // 0x8033AEC8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x8033AEC8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x8033AECC: beq         $v0, $zero, L_8033AEEC
    if (ctx->r2 == 0) {
        // 0x8033AED0: nop
    
            goto L_8033AEEC;
    }
    // 0x8033AED0: nop

    // 0x8033AED4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AED8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AEDC: jal         0x8002B0E4
    // 0x8033AEE0: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x8033AEE0: nop

    after_5:
    // 0x8033AEE4: b           L_8033AF3C
    // 0x8033AEE8: nop

        goto L_8033AF3C;
    // 0x8033AEE8: nop

L_8033AEEC:
    // 0x8033AEEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033AEF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033AEF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AEF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AEFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033AF00: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x8033AF04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033AF08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033AF0C: jal         0x80029018
    // 0x8033AF10: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x8033AF10: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x8033AF14: beq         $v0, $zero, L_8033AF34
    if (ctx->r2 == 0) {
        // 0x8033AF18: nop
    
            goto L_8033AF34;
    }
    // 0x8033AF18: nop

    // 0x8033AF1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AF20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AF24: jal         0x8002B0E4
    // 0x8033AF28: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x8033AF28: nop

    after_7:
    // 0x8033AF2C: b           L_8033AF3C
    // 0x8033AF30: nop

        goto L_8033AF3C;
    // 0x8033AF30: nop

L_8033AF34:
    // 0x8033AF34: b           L_8033AF3C
    // 0x8033AF38: nop

        goto L_8033AF3C;
    // 0x8033AF38: nop

L_8033AF3C:
    // 0x8033AF3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AF40: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8033AF44: jr          $ra
    // 0x8033AF48: nop

    return;
    // 0x8033AF48: nop

;}
RECOMP_FUNC void func_bagular3_80339B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339B8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339B90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339B94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339B98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339B9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339BA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339BA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339BA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339BAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339BB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339BB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339BB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339BBC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339BC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339BC4: nop

    // 0x80339BC8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339BCC: nop

    // 0x80339BD0: bne         $t1, $zero, L_80339C44
    if (ctx->r9 != 0) {
        // 0x80339BD4: nop
    
            goto L_80339C44;
    }
    // 0x80339BD4: nop

    // 0x80339BD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339BDC: nop

    // 0x80339BE0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339BE4: nop

    // 0x80339BE8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339BEC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339BF0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339BF4: nop

    // 0x80339BF8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339BFC: nop

    // 0x80339C00: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339C04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339C08: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80339C0C: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x80339C10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339C14: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80339C18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80339C1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80339C20: jal         0x8001C0EC
    // 0x80339C24: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339C24: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
    // 0x80339C28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339C2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339C30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339C34: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x80339C38: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80339C3C: jal         0x800175F0
    // 0x80339C40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80339C40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80339C44:
    // 0x80339C44: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339C48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339C4C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80339C50: nop

    // 0x80339C54: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339C58: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339C5C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80339C60: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339C64: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339C68: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80339C6C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80339C70: nop

    // 0x80339C74: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80339C78: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80339C7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339C80: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80339C84: nop

    // 0x80339C88: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80339C8C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339C90: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339C94: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339C98: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339C9C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80339CA0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80339CA4: nop

    // 0x80339CA8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80339CAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339CB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339CB4: jal         0x8001B4AC
    // 0x80339CB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80339CB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80339CBC: beq         $v0, $zero, L_80339CDC
    if (ctx->r2 == 0) {
        // 0x80339CC0: nop
    
            goto L_80339CDC;
    }
    // 0x80339CC0: nop

    // 0x80339CC4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80339CC8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80339CCC: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80339CD0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339CD4: nop

    // 0x80339CD8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80339CDC:
    // 0x80339CDC: b           L_80339CE4
    // 0x80339CE0: nop

        goto L_80339CE4;
    // 0x80339CE0: nop

L_80339CE4:
    // 0x80339CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339CE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339CEC: jr          $ra
    // 0x80339CF0: nop

    return;
    // 0x80339CF0: nop

;}
RECOMP_FUNC void func_bagular3_80338A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338A0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338A10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338A14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338A18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338A1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338A20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338A24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338A28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338A2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338A30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338A34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338A38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338A3C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338A40: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338A44: nop

    // 0x80338A48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338A4C: nop

    // 0x80338A50: bne         $t1, $zero, L_80338AA8
    if (ctx->r9 != 0) {
        // 0x80338A54: nop
    
            goto L_80338AA8;
    }
    // 0x80338A54: nop

    // 0x80338A58: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338A5C: nop

    // 0x80338A60: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338A64: nop

    // 0x80338A68: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338A6C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338A70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338A74: nop

    // 0x80338A78: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338A7C: nop

    // 0x80338A80: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338A84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338A88: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338A8C: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80338A90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338A94: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338A9C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80338AA0: jal         0x8001C0EC
    // 0x80338AA4: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338AA4: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80338AA8:
    // 0x80338AA8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338AAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338AB0: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80338AB4: nop

    // 0x80338AB8: bne         $t9, $at, L_80338B0C
    if (ctx->r25 != ctx->r1) {
        // 0x80338ABC: nop
    
            goto L_80338B0C;
    }
    // 0x80338ABC: nop

    // 0x80338AC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338AC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338AC8: jal         0x8001B4AC
    // 0x80338ACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80338ACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80338AD0: beq         $v0, $zero, L_80338B0C
    if (ctx->r2 == 0) {
        // 0x80338AD4: nop
    
            goto L_80338B0C;
    }
    // 0x80338AD4: nop

    // 0x80338AD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338ADC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338AE0: jal         0x8001BBDC
    // 0x80338AE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80338AE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80338AE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338AEC: nop

    // 0x80338AF0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338AF4: nop

    // 0x80338AF8: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80338AFC: sb          $t3, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r11;
    // 0x80338B00: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338B04: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x80338B08: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_80338B0C:
    // 0x80338B0C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80338B10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80338B14: lbu         $t5, 0x132($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X132);
    // 0x80338B18: nop

    // 0x80338B1C: bne         $t5, $at, L_80338B88
    if (ctx->r13 != ctx->r1) {
        // 0x80338B20: nop
    
            goto L_80338B88;
    }
    // 0x80338B20: nop

    // 0x80338B24: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80338B28: nop

    // 0x80338B2C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80338B30: nop

    // 0x80338B34: bne         $t8, $zero, L_80338B54
    if (ctx->r24 != 0) {
        // 0x80338B38: nop
    
            goto L_80338B54;
    }
    // 0x80338B38: nop

    // 0x80338B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338B44: jal         0x8002B114
    // 0x80338B48: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80338B48: nop

    after_3:
    // 0x80338B4C: b           L_80338B88
    // 0x80338B50: nop

        goto L_80338B88;
    // 0x80338B50: nop

L_80338B54:
    // 0x80338B54: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338B58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338B5C: lh          $a1, 0xA6($t9)
    ctx->r5 = MEM_H(ctx->r25, 0XA6);
    // 0x80338B60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338B64: andi        $t1, $a1, 0x1
    ctx->r9 = ctx->r5 & 0X1;
    // 0x80338B68: jal         0x8001BB34
    // 0x80338B6C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80338B6C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_4:
    // 0x80338B70: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80338B74: nop

    // 0x80338B78: lh          $t0, 0xA6($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XA6);
    // 0x80338B7C: nop

    // 0x80338B80: addiu       $t4, $t0, -0x1
    ctx->r12 = ADD32(ctx->r8, -0X1);
    // 0x80338B84: sh          $t4, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r12;
L_80338B88:
    // 0x80338B88: b           L_80338B90
    // 0x80338B8C: nop

        goto L_80338B90;
    // 0x80338B8C: nop

L_80338B90:
    // 0x80338B90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338B94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338B98: jr          $ra
    // 0x80338B9C: nop

    return;
    // 0x80338B9C: nop

;}
RECOMP_FUNC void func_bagular3_80330F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330F50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330F54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330F58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330F5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330F60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330F64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330F68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330F70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330F78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330F7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330F80: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330F84: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F88: nop

    // 0x80330F8C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330F90: nop

    // 0x80330F94: bne         $t1, $zero, L_80331134
    if (ctx->r9 != 0) {
        // 0x80330F98: nop
    
            goto L_80331134;
    }
    // 0x80330F98: nop

    // 0x80330F9C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FA0: nop

    // 0x80330FA4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330FA8: nop

    // 0x80330FAC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330FB0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330FB4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FB8: nop

    // 0x80330FBC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330FC0: nop

    // 0x80330FC4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330FC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FCC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330FD0: addiu       $t7, $t7, -0x4BE0
    ctx->r15 = ADD32(ctx->r15, -0X4BE0);
    // 0x80330FD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FD8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330FDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330FE0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330FE4: jal         0x8001C0EC
    // 0x80330FE8: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330FE8: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    after_0:
    // 0x80330FEC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FF0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80330FF4: addiu       $t9, $t9, -0x49F0
    ctx->r25 = ADD32(ctx->r25, -0X49F0);
    // 0x80330FF8: lh          $a0, 0xE8($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XE8);
    // 0x80330FFC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80331000: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331004: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80331008: jal         0x8001C0EC
    // 0x8033100C: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033100C: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    after_1:
    // 0x80331010: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331014: nop

    // 0x80331018: lh          $t1, 0xBE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBE);
    // 0x8033101C: nop

    // 0x80331020: beq         $t1, $zero, L_80331080
    if (ctx->r9 == 0) {
        // 0x80331024: nop
    
            goto L_80331080;
    }
    // 0x80331024: nop

    // 0x80331028: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033102C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331030: lh          $t2, 0xBE($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBE);
    // 0x80331034: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x80331038: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8033103C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80331040: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331044: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80331048: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033104C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331050: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80331054: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331058: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033105C: lh          $t7, 0xBE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XBE);
    // 0x80331060: nop

    // 0x80331064: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331068: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033106C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331070: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331074: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331078: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033107C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331080:
    // 0x80331080: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331084: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331088: lh          $t1, 0xC0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC0);
    // 0x8033108C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80331090: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80331094: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80331098: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033109C: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803310A0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803310A4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803310A8: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x803310AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803310B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310B4: lh          $t3, 0xC0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC0);
    // 0x803310B8: nop

    // 0x803310BC: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x803310C0: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x803310C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803310C8: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x803310CC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803310D0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803310D4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803310D8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803310DC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803310E0: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803310E4: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x803310E8: lw          $a3, 0x4($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X4);
    // 0x803310EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803310F0: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x803310F4: addiu       $a1, $a1, -0x3EC8
    ctx->r5 = ADD32(ctx->r5, -0X3EC8);
    // 0x803310F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803310FC: jal         0x80027464
    // 0x80331100: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80331100: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80331104: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80331108: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033110C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80331110: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80331114: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80331118: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033111C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80331120: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80331124: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331128: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033112C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331130: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
L_80331134:
    // 0x80331134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033113C: jal         0x8002A8B4
    // 0x80331140: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80331140: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_3:
    // 0x80331144: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331148: nop

    // 0x8033114C: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80331150: nop

    // 0x80331154: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
    // 0x80331158: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033115C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331160: jal         0x8001B4AC
    // 0x80331164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80331164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80331168: beq         $v0, $zero, L_80331250
    if (ctx->r2 == 0) {
        // 0x8033116C: nop
    
            goto L_80331250;
    }
    // 0x8033116C: nop

    // 0x80331170: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331174: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80331178: sh          $t9, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r25;
    // 0x8033117C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331180: nop

    // 0x80331184: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80331188: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033118C: nop

    // 0x80331190: lh          $t6, 0xBE($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XBE);
    // 0x80331194: nop

    // 0x80331198: beq         $t6, $zero, L_803311F8
    if (ctx->r14 == 0) {
        // 0x8033119C: nop
    
            goto L_803311F8;
    }
    // 0x8033119C: nop

    // 0x803311A0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803311A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803311A8: lh          $t7, 0xBE($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XBE);
    // 0x803311AC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803311B0: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x803311B4: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x803311B8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803311BC: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x803311C0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803311C4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803311C8: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x803311CC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803311D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803311D4: lh          $t9, 0xBE($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XBE);
    // 0x803311D8: nop

    // 0x803311DC: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x803311E0: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x803311E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803311E8: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x803311EC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803311F0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803311F4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803311F8:
    // 0x803311F8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803311FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331200: lh          $t6, 0xC0($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XC0);
    // 0x80331204: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331208: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8033120C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80331210: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331214: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80331218: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033121C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331220: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80331224: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331228: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033122C: lh          $t5, 0xC0($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XC0);
    // 0x80331230: nop

    // 0x80331234: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x80331238: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x8033123C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331240: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x80331244: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331248: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033124C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331250:
    // 0x80331250: jal         0x8033BD74
    // 0x80331254: nop

    func_bagular3_8033BD74(rdram, ctx);
        goto after_5;
    // 0x80331254: nop

    after_5:
    // 0x80331258: b           L_80331260
    // 0x8033125C: nop

        goto L_80331260;
    // 0x8033125C: nop

L_80331260:
    // 0x80331260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331264: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331268: jr          $ra
    // 0x8033126C: nop

    return;
    // 0x8033126C: nop

;}
RECOMP_FUNC void func_bagular3_8033B9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B9B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B9BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B9C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B9C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B9C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B9CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B9D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B9D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B9D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B9DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B9E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B9E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B9E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B9EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B9F0: nop

    // 0x8033B9F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B9F8: nop

    // 0x8033B9FC: bne         $t1, $zero, L_8033BA54
    if (ctx->r9 != 0) {
        // 0x8033BA00: nop
    
            goto L_8033BA54;
    }
    // 0x8033BA00: nop

    // 0x8033BA04: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA08: nop

    // 0x8033BA0C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033BA10: nop

    // 0x8033BA14: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033BA18: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033BA1C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA20: nop

    // 0x8033BA24: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033BA28: nop

    // 0x8033BA2C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033BA30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BA34: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033BA38: addiu       $t7, $t7, -0x4738
    ctx->r15 = ADD32(ctx->r15, -0X4738);
    // 0x8033BA3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BA40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033BA44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033BA48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033BA4C: jal         0x8001C0EC
    // 0x8033BA50: addiu       $a3, $zero, 0x145
    ctx->r7 = ADD32(0, 0X145);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033BA50: addiu       $a3, $zero, 0x145
    ctx->r7 = ADD32(0, 0X145);
    after_0:
L_8033BA54:
    // 0x8033BA54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BA58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BA5C: jal         0x8001B62C
    // 0x8033BA60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x8033BA60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033BA64: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033BA68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033BA6C: nop

    // 0x8033BA70: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8033BA74: nop

    // 0x8033BA78: bc1f        L_8033BB2C
    if (!c1cs) {
        // 0x8033BA7C: nop
    
            goto L_8033BB2C;
    }
    // 0x8033BA7C: nop

    // 0x8033BA80: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA84: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033BA88: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033BA8C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033BA90: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033BA94: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033BA98: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033BA9C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033BAA0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033BAA4: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x8033BAA8: lwc1        $f6, 0x24($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X24);
    // 0x8033BAAC: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8033BAB0: nop

    // 0x8033BAB4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033BAB8: swc1        $f10, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f10.u32l;
    // 0x8033BABC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033BAC0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033BAC4: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x8033BAC8: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8033BACC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8033BAD0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033BAD4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033BAD8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033BADC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033BAE0: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x8033BAE4: lwc1        $f16, 0x2C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8033BAE8: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8033BAEC: nop

    // 0x8033BAF0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033BAF4: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    // 0x8033BAF8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033BAFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BB00: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x8033BB04: nop

    // 0x8033BB08: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033BB0C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033BB10: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033BB14: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033BB18: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033BB1C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033BB20: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033BB24: nop

    // 0x8033BB28: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
L_8033BB2C:
    // 0x8033BB2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BB30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BB34: jal         0x8001B4AC
    // 0x8033BB38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033BB38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8033BB3C: beq         $v0, $zero, L_8033BB54
    if (ctx->r2 == 0) {
        // 0x8033BB40: nop
    
            goto L_8033BB54;
    }
    // 0x8033BB40: nop

    // 0x8033BB44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BB48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BB4C: jal         0x8002B114
    // 0x8033BB50: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x8033BB50: nop

    after_3:
L_8033BB54:
    // 0x8033BB54: b           L_8033BB5C
    // 0x8033BB58: nop

        goto L_8033BB5C;
    // 0x8033BB58: nop

L_8033BB5C:
    // 0x8033BB5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BB60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033BB64: jr          $ra
    // 0x8033BB68: nop

    return;
    // 0x8033BB68: nop

;}
RECOMP_FUNC void func_bagular3_80336CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336CC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336CCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336CD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336CD4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336CD8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336CDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336CE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336CE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336CE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336CEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336CF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336CF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336CF8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336CFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336D00: nop

    // 0x80336D04: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336D08: nop

    // 0x80336D0C: bne         $t1, $zero, L_80336D64
    if (ctx->r9 != 0) {
        // 0x80336D10: nop
    
            goto L_80336D64;
    }
    // 0x80336D10: nop

    // 0x80336D14: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336D18: nop

    // 0x80336D1C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336D20: nop

    // 0x80336D24: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336D28: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336D2C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336D30: nop

    // 0x80336D34: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336D38: nop

    // 0x80336D3C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336D40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336D44: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336D48: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80336D4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336D50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336D54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336D58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80336D5C: jal         0x8001C0EC
    // 0x80336D60: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336D60: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80336D64:
    // 0x80336D64: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336D68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336D6C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80336D70: nop

    // 0x80336D74: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80336D78: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336D7C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80336D80: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336D84: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80336D88: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80336D8C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80336D90: nop

    // 0x80336D94: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80336D98: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336D9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336DA0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80336DA4: nop

    // 0x80336DA8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80336DAC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336DB0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80336DB4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336DB8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80336DBC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80336DC0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80336DC4: nop

    // 0x80336DC8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80336DCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336DD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336DD4: jal         0x8001B4AC
    // 0x80336DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80336DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80336DDC: beq         $v0, $zero, L_80336DFC
    if (ctx->r2 == 0) {
        // 0x80336DE0: nop
    
            goto L_80336DFC;
    }
    // 0x80336DE0: nop

    // 0x80336DE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336DE8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80336DEC: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80336DF0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336DF4: nop

    // 0x80336DF8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80336DFC:
    // 0x80336DFC: b           L_80336E04
    // 0x80336E00: nop

        goto L_80336E04;
    // 0x80336E00: nop

L_80336E04:
    // 0x80336E04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336E08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336E0C: jr          $ra
    // 0x80336E10: nop

    return;
    // 0x80336E10: nop

;}
RECOMP_FUNC void func_bagular3_80337AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337AAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337AB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337AB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337AB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337ABC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337AC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337AC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337ACC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337AD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337AD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337AD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337ADC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337AE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337AE4: nop

    // 0x80337AE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337AEC: nop

    // 0x80337AF0: bne         $t1, $zero, L_80337B48
    if (ctx->r9 != 0) {
        // 0x80337AF4: nop
    
            goto L_80337B48;
    }
    // 0x80337AF4: nop

    // 0x80337AF8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337AFC: nop

    // 0x80337B00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337B04: nop

    // 0x80337B08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337B0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337B10: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337B14: nop

    // 0x80337B18: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337B1C: nop

    // 0x80337B20: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337B28: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337B2C: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80337B30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337B34: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337B3C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80337B40: jal         0x8001C0EC
    // 0x80337B44: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337B44: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80337B48:
    // 0x80337B48: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337B4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337B50: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337B54: nop

    // 0x80337B58: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80337B5C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337B60: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337B64: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337B68: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80337B6C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337B70: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337B74: nop

    // 0x80337B78: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80337B7C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80337B80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337B84: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80337B88: nop

    // 0x80337B8C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80337B90: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337B94: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337B98: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337B9C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80337BA0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80337BA4: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80337BA8: nop

    // 0x80337BAC: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80337BB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337BB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337BB8: jal         0x8001B4AC
    // 0x80337BBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337BBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337BC0: beq         $v0, $zero, L_80337BE0
    if (ctx->r2 == 0) {
        // 0x80337BC4: nop
    
            goto L_80337BE0;
    }
    // 0x80337BC4: nop

    // 0x80337BC8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337BCC: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x80337BD0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80337BD4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337BD8: nop

    // 0x80337BDC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80337BE0:
    // 0x80337BE0: b           L_80337BE8
    // 0x80337BE4: nop

        goto L_80337BE8;
    // 0x80337BE4: nop

L_80337BE8:
    // 0x80337BE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337BEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337BF0: jr          $ra
    // 0x80337BF4: nop

    return;
    // 0x80337BF4: nop

;}
RECOMP_FUNC void func_bagular3_8033A0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A0D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A0DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A0E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A0E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A0E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A0EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A0F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A0F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A0F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A0FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A100: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A104: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A108: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A10C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A110: nop

    // 0x8033A114: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A118: nop

    // 0x8033A11C: bne         $t1, $zero, L_8033A174
    if (ctx->r9 != 0) {
        // 0x8033A120: nop
    
            goto L_8033A174;
    }
    // 0x8033A120: nop

    // 0x8033A124: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A128: nop

    // 0x8033A12C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A130: nop

    // 0x8033A134: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A138: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A13C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A140: nop

    // 0x8033A144: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A148: nop

    // 0x8033A14C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A150: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A154: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A158: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x8033A15C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A160: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A164: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A168: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8033A16C: jal         0x8001C0EC
    // 0x8033A170: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A170: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_8033A174:
    // 0x8033A174: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A178: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A17C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033A180: nop

    // 0x8033A184: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A188: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A18C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A190: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A194: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A198: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A19C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033A1A0: nop

    // 0x8033A1A4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033A1A8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A1AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A1B0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033A1B4: nop

    // 0x8033A1B8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033A1BC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A1C0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A1C4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A1C8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A1CC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033A1D0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033A1D4: nop

    // 0x8033A1D8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033A1DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A1E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A1E4: jal         0x8001B4AC
    // 0x8033A1E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A1E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A1EC: beq         $v0, $zero, L_8033A20C
    if (ctx->r2 == 0) {
        // 0x8033A1F0: nop
    
            goto L_8033A20C;
    }
    // 0x8033A1F0: nop

    // 0x8033A1F4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033A1F8: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x8033A1FC: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033A200: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A204: nop

    // 0x8033A208: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033A20C:
    // 0x8033A20C: b           L_8033A214
    // 0x8033A210: nop

        goto L_8033A214;
    // 0x8033A210: nop

L_8033A214:
    // 0x8033A214: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A218: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A21C: jr          $ra
    // 0x8033A220: nop

    return;
    // 0x8033A220: nop

;}
RECOMP_FUNC void func_bagular3_80333708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333708: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033370C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333710: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333714: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333718: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033371C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333720: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333724: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333728: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033372C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333730: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333734: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333738: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033373C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333740: nop

    // 0x80333744: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333748: nop

    // 0x8033374C: bne         $t1, $zero, L_80333824
    if (ctx->r9 != 0) {
        // 0x80333750: nop
    
            goto L_80333824;
    }
    // 0x80333750: nop

    // 0x80333754: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333758: nop

    // 0x8033375C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333760: nop

    // 0x80333764: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333768: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033376C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333770: nop

    // 0x80333774: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333778: nop

    // 0x8033377C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333780: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333784: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80333788: addiu       $t8, $t8, -0x4908
    ctx->r24 = ADD32(ctx->r24, -0X4908);
    // 0x8033378C: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80333790: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80333794: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333798: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033379C: jal         0x8001C0EC
    // 0x803337A0: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803337A0: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_0:
    // 0x803337A4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803337A8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803337AC: addiu       $t0, $t0, -0x4908
    ctx->r8 = ADD32(ctx->r8, -0X4908);
    // 0x803337B0: lh          $a0, 0xEA($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XEA);
    // 0x803337B4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803337B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803337BC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803337C0: jal         0x8001C0EC
    // 0x803337C4: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803337C4: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_1:
    // 0x803337C8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803337CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803337D0: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x803337D4: jal         0x8001BBDC
    // 0x803337D8: nop

    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803337D8: nop

    after_2:
    // 0x803337DC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803337E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803337E4: lh          $a0, 0xEA($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XEA);
    // 0x803337E8: jal         0x8001BBDC
    // 0x803337EC: nop

    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x803337EC: nop

    after_3:
    // 0x803337F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803337F4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803337F8: nop

    // 0x803337FC: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x80333800: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333804: nop

    // 0x80333808: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8033380C: nop

    // 0x80333810: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
    // 0x80333814: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333818: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033381C: nop

    // 0x80333820: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
L_80333824:
    // 0x80333824: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333828: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033382C: jal         0x8002A8B4
    // 0x80333830: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x80333830: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_4:
    // 0x80333834: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333838: nop

    // 0x8033383C: lwc1        $f10, 0x3C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80333840: nop

    // 0x80333844: swc1        $f10, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f10.u32l;
    // 0x80333848: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033384C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333850: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x80333854: lwc1        $f16, 0x1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80333858: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033385C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333860: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333864: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333868: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033386C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333870: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x80333874: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333878: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033387C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80333880: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80333884: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80333888: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033388C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333890: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333894: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333898: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x8033389C: lwc1        $f18, 0x1C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x803338A0: nop

    // 0x803338A4: swc1        $f18, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f18.u32l;
    // 0x803338A8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803338AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803338B0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803338B4: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x803338B8: jal         0x80015538
    // 0x803338BC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803338BC: nop

    after_5:
    // 0x803338C0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803338C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803338C8: lh          $t7, 0xEA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEA);
    // 0x803338CC: nop

    // 0x803338D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803338D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803338D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803338DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803338E0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803338E4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803338E8: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x803338EC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803338F0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803338F4: lh          $t0, 0xEA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEA);
    // 0x803338F8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803338FC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333900: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333904: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333908: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033390C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333910: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80333914: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80333918: nop

    // 0x8033391C: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x80333920: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333924: nop

    // 0x80333928: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x8033392C: nop

    // 0x80333930: bne         $t6, $zero, L_80333A38
    if (ctx->r14 != 0) {
        // 0x80333934: nop
    
            goto L_80333A38;
    }
    // 0x80333934: nop

    // 0x80333938: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033393C: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x80333940: sh          $t5, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r13;
    // 0x80333944: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333948: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033394C: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80333950: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x80333954: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x80333958: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033395C: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80333960: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80333964: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333968: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033396C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333970: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333974: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333978: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033397C: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333980: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x80333984: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333988: jal         0x80027464
    // 0x8033398C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x8033398C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80333990: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80333994: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333998: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033399C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803339A0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803339A4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803339A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803339AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803339B0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803339B4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803339B8: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x803339BC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803339C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803339C4: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x803339C8: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x803339CC: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x803339D0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803339D4: lh          $t6, 0xEA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XEA);
    // 0x803339D8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803339DC: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803339E0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803339E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803339E8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803339EC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803339F0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803339F4: lwc1        $f16, 0x416C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803339F8: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x803339FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333A00: jal         0x80027464
    // 0x80333A04: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80333A04: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x80333A08: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80333A0C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333A10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A14: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333A18: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333A1C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333A20: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333A24: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333A28: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333A2C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80333A30: b           L_80333A50
    // 0x80333A34: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
        goto L_80333A50;
    // 0x80333A34: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
L_80333A38:
    // 0x80333A38: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A3C: nop

    // 0x80333A40: lh          $t3, 0xA6($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XA6);
    // 0x80333A44: nop

    // 0x80333A48: addiu       $t1, $t3, -0x1
    ctx->r9 = ADD32(ctx->r11, -0X1);
    // 0x80333A4C: sh          $t1, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r9;
L_80333A50:
    // 0x80333A50: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A54: nop

    // 0x80333A58: lh          $t2, 0xAE($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAE);
    // 0x80333A5C: nop

    // 0x80333A60: bne         $t2, $zero, L_80333B64
    if (ctx->r10 != 0) {
        // 0x80333A64: nop
    
            goto L_80333B64;
    }
    // 0x80333A64: nop

    // 0x80333A68: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A6C: nop

    // 0x80333A70: lh          $t5, 0xAC($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAC);
    // 0x80333A74: nop

    // 0x80333A78: bne         $t5, $zero, L_80333B5C
    if (ctx->r13 != 0) {
        // 0x80333A7C: nop
    
            goto L_80333B5C;
    }
    // 0x80333A7C: nop

    // 0x80333A80: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A84: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80333A88: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80333A8C: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x80333A90: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x80333A94: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80333A98: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80333A9C: addiu       $a1, $a1, -0x3E98
    ctx->r5 = ADD32(ctx->r5, -0X3E98);
    // 0x80333AA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333AA4: jal         0x80027464
    // 0x80333AA8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x80333AA8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80333AAC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80333AB0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333AB4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80333AB8: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80333ABC: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x80333AC0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333AC4: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x80333AC8: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80333ACC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333AD0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333AD4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333AD8: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x80333ADC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333AE0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333AE4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80333AE8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333AEC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333AF0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333AF4: lh          $t0, 0xC2($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XC2);
    // 0x80333AF8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333AFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B00: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333B04: sh          $t0, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r8;
    // 0x80333B08: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B0C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333B10: lh          $t8, 0xC2($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XC2);
    // 0x80333B14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B18: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333B1C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333B20: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333B24: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333B28: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333B2C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333B30: sh          $t6, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r14;
    // 0x80333B34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B3C: jal         0x8001BBDC
    // 0x80333B40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x80333B40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80333B44: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B48: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80333B4C: sh          $t7, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r15;
    // 0x80333B50: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B54: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80333B58: sh          $t1, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r9;
L_80333B5C:
    // 0x80333B5C: b           L_80333B7C
    // 0x80333B60: nop

        goto L_80333B7C;
    // 0x80333B60: nop

L_80333B64:
    // 0x80333B64: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B68: nop

    // 0x80333B6C: lh          $t2, 0xAE($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XAE);
    // 0x80333B70: nop

    // 0x80333B74: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x80333B78: sh          $t5, 0xAE($t0)
    MEM_H(0XAE, ctx->r8) = ctx->r13;
L_80333B7C:
    // 0x80333B7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B84: jal         0x8002A46C
    // 0x80333B88: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_10;
    // 0x80333B88: nop

    after_10:
    // 0x80333B8C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80333B90: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B94: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333B98: lwc1        $f14, 0x1C($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80333B9C: jal         0x80015538
    // 0x80333BA0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80333BA0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_11:
    // 0x80333BA4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80333BA8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80333BAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333BB0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333BB4: nop

    // 0x80333BB8: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80333BBC: nop

    // 0x80333BC0: bc1f        L_80333C24
    if (!c1cs) {
        // 0x80333BC4: nop
    
            goto L_80333C24;
    }
    // 0x80333BC4: nop

    // 0x80333BC8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333BCC: lwc1        $f10, -0x3D88($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3D88);
    // 0x80333BD0: nop

    // 0x80333BD4: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80333BD8: nop

    // 0x80333BDC: bc1f        L_80333C24
    if (!c1cs) {
        // 0x80333BE0: nop
    
            goto L_80333C24;
    }
    // 0x80333BE0: nop

    // 0x80333BE4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333BE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333BEC: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333BF0: nop

    // 0x80333BF4: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80333BF8: nop

    // 0x80333BFC: bc1f        L_80333C1C
    if (!c1cs) {
        // 0x80333C00: nop
    
            goto L_80333C1C;
    }
    // 0x80333C00: nop

    // 0x80333C04: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C08: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80333C0C: sh          $t6, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r14;
    // 0x80333C10: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C14: nop

    // 0x80333C18: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80333C1C:
    // 0x80333C1C: b           L_80333C3C
    // 0x80333C20: nop

        goto L_80333C3C;
    // 0x80333C20: nop

L_80333C24:
    // 0x80333C24: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C28: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x80333C2C: sh          $t3, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r11;
    // 0x80333C30: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C34: nop

    // 0x80333C38: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80333C3C:
    // 0x80333C3C: b           L_80333C44
    // 0x80333C40: nop

        goto L_80333C44;
    // 0x80333C40: nop

L_80333C44:
    // 0x80333C44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80333C4C: jr          $ra
    // 0x80333C50: nop

    return;
    // 0x80333C50: nop

;}
RECOMP_FUNC void func_bagular3_80339E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339E40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339E44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339E48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339E4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339E50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339E54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339E58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339E5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339E60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339E64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339E68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339E6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339E70: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339E74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339E78: nop

    // 0x80339E7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339E80: nop

    // 0x80339E84: bne         $t1, $zero, L_80339EDC
    if (ctx->r9 != 0) {
        // 0x80339E88: nop
    
            goto L_80339EDC;
    }
    // 0x80339E88: nop

    // 0x80339E8C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339E90: nop

    // 0x80339E94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339E98: nop

    // 0x80339E9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339EA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339EA4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339EA8: nop

    // 0x80339EAC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339EB0: nop

    // 0x80339EB4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339EB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339EBC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80339EC0: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x80339EC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339EC8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80339ECC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80339ED0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80339ED4: jal         0x8001C0EC
    // 0x80339ED8: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339ED8: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_80339EDC:
    // 0x80339EDC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339EE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339EE4: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80339EE8: nop

    // 0x80339EEC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339EF0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339EF4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80339EF8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339EFC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339F00: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80339F04: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80339F08: nop

    // 0x80339F0C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80339F10: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80339F14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339F18: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80339F1C: nop

    // 0x80339F20: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80339F24: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339F28: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339F2C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339F30: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339F34: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80339F38: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80339F3C: nop

    // 0x80339F40: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80339F44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339F48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339F4C: jal         0x8001B4AC
    // 0x80339F50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80339F50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80339F54: beq         $v0, $zero, L_80339F74
    if (ctx->r2 == 0) {
        // 0x80339F58: nop
    
            goto L_80339F74;
    }
    // 0x80339F58: nop

    // 0x80339F5C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80339F60: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80339F64: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80339F68: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339F6C: nop

    // 0x80339F70: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80339F74:
    // 0x80339F74: b           L_80339F7C
    // 0x80339F78: nop

        goto L_80339F7C;
    // 0x80339F78: nop

L_80339F7C:
    // 0x80339F7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339F80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339F84: jr          $ra
    // 0x80339F88: nop

    return;
    // 0x80339F88: nop

;}
RECOMP_FUNC void func_bagular3_80339514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339514: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339518: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033951C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339520: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339524: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339528: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033952C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339530: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339534: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339538: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033953C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339540: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339544: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339548: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033954C: nop

    // 0x80339550: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339554: nop

    // 0x80339558: bne         $t1, $zero, L_803395B0
    if (ctx->r9 != 0) {
        // 0x8033955C: nop
    
            goto L_803395B0;
    }
    // 0x8033955C: nop

    // 0x80339560: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339564: nop

    // 0x80339568: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033956C: nop

    // 0x80339570: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339574: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339578: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033957C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80339580: addiu       $t5, $t5, -0x47F4
    ctx->r13 = ADD32(ctx->r13, -0X47F4);
    // 0x80339584: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339588: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8033958C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80339590: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80339594: jal         0x8001C0EC
    // 0x80339598: addiu       $a3, $zero, 0x149
    ctx->r7 = ADD32(0, 0X149);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339598: addiu       $a3, $zero, 0x149
    ctx->r7 = ADD32(0, 0X149);
    after_0:
    // 0x8033959C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803395A0: nop

    // 0x803395A4: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x803395A8: nop

    // 0x803395AC: sh          $t7, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r15;
L_803395B0:
    // 0x803395B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803395B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803395B8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803395BC: nop

    // 0x803395C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803395C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803395C8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803395CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803395D0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803395D4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803395D8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803395DC: nop

    // 0x803395E0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803395E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803395E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803395EC: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803395F0: nop

    // 0x803395F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803395F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803395FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339600: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339604: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339608: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033960C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80339610: nop

    // 0x80339614: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80339618: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033961C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339620: jal         0x8001B4AC
    // 0x80339624: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80339624: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80339628: beq         $v0, $zero, L_80339640
    if (ctx->r2 == 0) {
        // 0x8033962C: nop
    
            goto L_80339640;
    }
    // 0x8033962C: nop

    // 0x80339630: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339634: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339638: jal         0x8002B114
    // 0x8033963C: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033963C: nop

    after_2:
L_80339640:
    // 0x80339640: b           L_80339648
    // 0x80339644: nop

        goto L_80339648;
    // 0x80339644: nop

L_80339648:
    // 0x80339648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033964C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339650: jr          $ra
    // 0x80339654: nop

    return;
    // 0x80339654: nop

;}
RECOMP_FUNC void func_bagular3_8033B914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B914: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B918: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B91C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033B920: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B924: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B928: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B92C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B930: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B934: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B938: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B93C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B940: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B944: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B948: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B94C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B950: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033B954: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8033B958: nop

    // 0x8033B95C: beq         $s0, $at, L_8033B978
    if (ctx->r16 == ctx->r1) {
        // 0x8033B960: nop
    
            goto L_8033B978;
    }
    // 0x8033B960: nop

    // 0x8033B964: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033B968: beq         $s0, $at, L_8033B988
    if (ctx->r16 == ctx->r1) {
        // 0x8033B96C: nop
    
            goto L_8033B988;
    }
    // 0x8033B96C: nop

    // 0x8033B970: b           L_8033B998
    // 0x8033B974: nop

        goto L_8033B998;
    // 0x8033B974: nop

L_8033B978:
    // 0x8033B978: jal         0x8033B180
    // 0x8033B97C: nop

    func_bagular3_8033B180(rdram, ctx);
        goto after_0;
    // 0x8033B97C: nop

    after_0:
    // 0x8033B980: b           L_8033B9A0
    // 0x8033B984: nop

        goto L_8033B9A0;
    // 0x8033B984: nop

L_8033B988:
    // 0x8033B988: jal         0x8033B2E8
    // 0x8033B98C: nop

    func_bagular3_8033B2E8(rdram, ctx);
        goto after_1;
    // 0x8033B98C: nop

    after_1:
    // 0x8033B990: b           L_8033B9A0
    // 0x8033B994: nop

        goto L_8033B9A0;
    // 0x8033B994: nop

L_8033B998:
    // 0x8033B998: b           L_8033B9A0
    // 0x8033B99C: nop

        goto L_8033B9A0;
    // 0x8033B99C: nop

L_8033B9A0:
    // 0x8033B9A0: b           L_8033B9A8
    // 0x8033B9A4: nop

        goto L_8033B9A8;
    // 0x8033B9A4: nop

L_8033B9A8:
    // 0x8033B9A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B9AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033B9B0: jr          $ra
    // 0x8033B9B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033B9B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_bagular3_8033A370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A370: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A374: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A378: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A37C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A380: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A384: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A388: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A38C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A390: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A394: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A398: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A39C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A3A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A3A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A3A8: nop

    // 0x8033A3AC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A3B0: nop

    // 0x8033A3B4: bne         $t1, $zero, L_8033A40C
    if (ctx->r9 != 0) {
        // 0x8033A3B8: nop
    
            goto L_8033A40C;
    }
    // 0x8033A3B8: nop

    // 0x8033A3BC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A3C0: nop

    // 0x8033A3C4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A3C8: nop

    // 0x8033A3CC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A3D0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A3D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A3D8: nop

    // 0x8033A3DC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A3E0: nop

    // 0x8033A3E4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A3E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A3EC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A3F0: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x8033A3F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A3F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A3FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A400: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8033A404: jal         0x8001C0EC
    // 0x8033A408: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A408: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_8033A40C:
    // 0x8033A40C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A410: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A414: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033A418: nop

    // 0x8033A41C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A420: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A424: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A428: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A42C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A430: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A434: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033A438: nop

    // 0x8033A43C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033A440: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A444: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A448: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033A44C: nop

    // 0x8033A450: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033A454: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A458: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A45C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A460: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A464: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033A468: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033A46C: nop

    // 0x8033A470: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033A474: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A478: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A47C: jal         0x8001B4AC
    // 0x8033A480: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A480: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A484: beq         $v0, $zero, L_8033A4A4
    if (ctx->r2 == 0) {
        // 0x8033A488: nop
    
            goto L_8033A4A4;
    }
    // 0x8033A488: nop

    // 0x8033A48C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033A490: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x8033A494: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033A498: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A49C: nop

    // 0x8033A4A0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033A4A4:
    // 0x8033A4A4: b           L_8033A4AC
    // 0x8033A4A8: nop

        goto L_8033A4AC;
    // 0x8033A4A8: nop

L_8033A4AC:
    // 0x8033A4AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A4B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A4B4: jr          $ra
    // 0x8033A4B8: nop

    return;
    // 0x8033A4B8: nop

;}
RECOMP_FUNC void func_bagular3_8033850C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033850C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338510: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338514: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338518: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033851C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338520: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338524: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338528: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033852C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338530: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338534: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338538: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033853C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338540: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338544: nop

    // 0x80338548: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033854C: nop

    // 0x80338550: bne         $t1, $zero, L_803385A8
    if (ctx->r9 != 0) {
        // 0x80338554: nop
    
            goto L_803385A8;
    }
    // 0x80338554: nop

    // 0x80338558: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033855C: nop

    // 0x80338560: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338564: nop

    // 0x80338568: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033856C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338570: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338574: nop

    // 0x80338578: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033857C: nop

    // 0x80338580: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338584: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338588: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033858C: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80338590: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338594: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033859C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x803385A0: jal         0x8001C0EC
    // 0x803385A4: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803385A4: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_803385A8:
    // 0x803385A8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803385AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803385B0: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803385B4: nop

    // 0x803385B8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803385BC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803385C0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803385C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803385C8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803385CC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803385D0: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803385D4: nop

    // 0x803385D8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803385DC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803385E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803385E4: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803385E8: nop

    // 0x803385EC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803385F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803385F4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803385F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803385FC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80338600: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80338604: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80338608: nop

    // 0x8033860C: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80338610: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338614: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338618: jal         0x8001B4AC
    // 0x8033861C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033861C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80338620: beq         $v0, $zero, L_80338640
    if (ctx->r2 == 0) {
        // 0x80338624: nop
    
            goto L_80338640;
    }
    // 0x80338624: nop

    // 0x80338628: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033862C: addiu       $t2, $zero, 0x16
    ctx->r10 = ADD32(0, 0X16);
    // 0x80338630: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80338634: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338638: nop

    // 0x8033863C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80338640:
    // 0x80338640: b           L_80338648
    // 0x80338644: nop

        goto L_80338648;
    // 0x80338644: nop

L_80338648:
    // 0x80338648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033864C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338650: jr          $ra
    // 0x80338654: nop

    return;
    // 0x80338654: nop

;}
RECOMP_FUNC void func_bagular3_80337960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337960: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337964: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337968: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033796C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337970: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337974: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337978: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033797C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337980: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337984: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337988: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033798C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337990: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337994: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337998: nop

    // 0x8033799C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803379A0: nop

    // 0x803379A4: bne         $t1, $zero, L_803379FC
    if (ctx->r9 != 0) {
        // 0x803379A8: nop
    
            goto L_803379FC;
    }
    // 0x803379A8: nop

    // 0x803379AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803379B0: nop

    // 0x803379B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803379B8: nop

    // 0x803379BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803379C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803379C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803379C8: nop

    // 0x803379CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803379D0: nop

    // 0x803379D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803379D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803379DC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803379E0: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x803379E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803379E8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803379EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803379F0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x803379F4: jal         0x8001C0EC
    // 0x803379F8: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803379F8: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_803379FC:
    // 0x803379FC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337A00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337A04: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337A08: nop

    // 0x80337A0C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80337A10: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337A14: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337A18: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337A1C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80337A20: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337A24: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337A28: nop

    // 0x80337A2C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80337A30: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80337A34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337A38: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80337A3C: nop

    // 0x80337A40: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80337A44: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337A48: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337A4C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337A50: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80337A54: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80337A58: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80337A5C: nop

    // 0x80337A60: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80337A64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337A68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337A6C: jal         0x8001B4AC
    // 0x80337A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337A74: beq         $v0, $zero, L_80337A94
    if (ctx->r2 == 0) {
        // 0x80337A78: nop
    
            goto L_80337A94;
    }
    // 0x80337A78: nop

    // 0x80337A7C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337A80: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x80337A84: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80337A88: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337A8C: nop

    // 0x80337A90: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80337A94:
    // 0x80337A94: b           L_80337A9C
    // 0x80337A98: nop

        goto L_80337A9C;
    // 0x80337A98: nop

L_80337A9C:
    // 0x80337A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337AA4: jr          $ra
    // 0x80337AA8: nop

    return;
    // 0x80337AA8: nop

;}
RECOMP_FUNC void func_bagular3_80336634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336634: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336638: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033663C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336640: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336644: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336648: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033664C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336650: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336654: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336658: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033665C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336660: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336664: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336668: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033666C: nop

    // 0x80336670: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336674: nop

    // 0x80336678: bne         $t1, $zero, L_803366D0
    if (ctx->r9 != 0) {
        // 0x8033667C: nop
    
            goto L_803366D0;
    }
    // 0x8033667C: nop

    // 0x80336680: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336684: nop

    // 0x80336688: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033668C: nop

    // 0x80336690: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336694: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336698: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033669C: nop

    // 0x803366A0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803366A4: nop

    // 0x803366A8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803366AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366B0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803366B4: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x803366B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803366C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803366C4: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x803366C8: jal         0x8001C0EC
    // 0x803366CC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803366CC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_803366D0:
    // 0x803366D0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803366D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803366D8: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x803366DC: nop

    // 0x803366E0: bne         $t9, $at, L_80336734
    if (ctx->r25 != ctx->r1) {
        // 0x803366E4: nop
    
            goto L_80336734;
    }
    // 0x803366E4: nop

    // 0x803366E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366F0: jal         0x8001B4AC
    // 0x803366F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803366F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803366F8: beq         $v0, $zero, L_80336734
    if (ctx->r2 == 0) {
        // 0x803366FC: nop
    
            goto L_80336734;
    }
    // 0x803366FC: nop

    // 0x80336700: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336704: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336708: jal         0x8001BBDC
    // 0x8033670C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x8033670C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80336710: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336714: nop

    // 0x80336718: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033671C: nop

    // 0x80336720: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80336724: sb          $t3, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r11;
    // 0x80336728: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033672C: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x80336730: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_80336734:
    // 0x80336734: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336738: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033673C: lbu         $t5, 0x132($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X132);
    // 0x80336740: nop

    // 0x80336744: bne         $t5, $at, L_803367B0
    if (ctx->r13 != ctx->r1) {
        // 0x80336748: nop
    
            goto L_803367B0;
    }
    // 0x80336748: nop

    // 0x8033674C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336750: nop

    // 0x80336754: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80336758: nop

    // 0x8033675C: bne         $t8, $zero, L_8033677C
    if (ctx->r24 != 0) {
        // 0x80336760: nop
    
            goto L_8033677C;
    }
    // 0x80336760: nop

    // 0x80336764: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336768: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033676C: jal         0x8002B114
    // 0x80336770: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80336770: nop

    after_3:
    // 0x80336774: b           L_803367B0
    // 0x80336778: nop

        goto L_803367B0;
    // 0x80336778: nop

L_8033677C:
    // 0x8033677C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336780: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336784: lh          $a1, 0xA6($t9)
    ctx->r5 = MEM_H(ctx->r25, 0XA6);
    // 0x80336788: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033678C: andi        $t1, $a1, 0x1
    ctx->r9 = ctx->r5 & 0X1;
    // 0x80336790: jal         0x8001BB34
    // 0x80336794: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80336794: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_4:
    // 0x80336798: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033679C: nop

    // 0x803367A0: lh          $t0, 0xA6($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XA6);
    // 0x803367A4: nop

    // 0x803367A8: addiu       $t4, $t0, -0x1
    ctx->r12 = ADD32(ctx->r8, -0X1);
    // 0x803367AC: sh          $t4, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r12;
L_803367B0:
    // 0x803367B0: b           L_803367B8
    // 0x803367B4: nop

        goto L_803367B8;
    // 0x803367B4: nop

L_803367B8:
    // 0x803367B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803367BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803367C0: jr          $ra
    // 0x803367C4: nop

    return;
    // 0x803367C4: nop

;}
RECOMP_FUNC void func_bagular3_8033AAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AAD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033AAD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AAD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AADC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AAE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AAE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AAE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AAEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AAF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AAF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AAF8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AAFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AB00: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033AB04: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AB08: nop

    // 0x8033AB0C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033AB10: nop

    // 0x8033AB14: bne         $t1, $zero, L_8033ABC8
    if (ctx->r9 != 0) {
        // 0x8033AB18: nop
    
            goto L_8033ABC8;
    }
    // 0x8033AB18: nop

    // 0x8033AB1C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AB20: nop

    // 0x8033AB24: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033AB28: nop

    // 0x8033AB2C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033AB30: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033AB34: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AB38: nop

    // 0x8033AB3C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033AB40: nop

    // 0x8033AB44: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033AB48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AB4C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033AB50: addiu       $t7, $t7, -0x47B0
    ctx->r15 = ADD32(ctx->r15, -0X47B0);
    // 0x8033AB54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AB58: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033AB5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AB60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033AB64: jal         0x8001C0EC
    // 0x8033AB68: addiu       $a3, $zero, 0x14D
    ctx->r7 = ADD32(0, 0X14D);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033AB68: addiu       $a3, $zero, 0x14D
    ctx->r7 = ADD32(0, 0X14D);
    after_0:
    // 0x8033AB6C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x8033AB70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033AB74: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AB78: nop

    // 0x8033AB7C: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x8033AB80: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AB84: nop

    // 0x8033AB88: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033AB8C: nop

    // 0x8033AB90: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
    // 0x8033AB94: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033AB98: lwc1        $f8, -0x3C5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3C5C);
    // 0x8033AB9C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033ABA0: nop

    // 0x8033ABA4: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x8033ABA8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8033ABAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033ABB0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033ABB4: nop

    // 0x8033ABB8: swc1        $f10, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f10.u32l;
    // 0x8033ABBC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033ABC0: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x8033ABC4: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_8033ABC8:
    // 0x8033ABC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ABCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ABD0: jal         0x80028FA0
    // 0x8033ABD4: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x8033ABD4: nop

    after_1:
    // 0x8033ABD8: beq         $v0, $zero, L_8033ABF8
    if (ctx->r2 == 0) {
        // 0x8033ABDC: nop
    
            goto L_8033ABF8;
    }
    // 0x8033ABDC: nop

    // 0x8033ABE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ABE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ABE8: jal         0x8002B0E4
    // 0x8033ABEC: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x8033ABEC: nop

    after_2:
    // 0x8033ABF0: b           L_8033ACA0
    // 0x8033ABF4: nop

        goto L_8033ACA0;
    // 0x8033ABF4: nop

L_8033ABF8:
    // 0x8033ABF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ABFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AC00: jal         0x80029D8C
    // 0x8033AC04: nop

    func_80029D8C(rdram, ctx);
        goto after_3;
    // 0x8033AC04: nop

    after_3:
    // 0x8033AC08: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033AC0C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033AC10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AC14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AC18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033AC1C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8033AC20: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033AC24: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033AC28: jal         0x80029018
    // 0x8033AC2C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x8033AC2C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x8033AC30: beq         $v0, $zero, L_8033AC50
    if (ctx->r2 == 0) {
        // 0x8033AC34: nop
    
            goto L_8033AC50;
    }
    // 0x8033AC34: nop

    // 0x8033AC38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AC3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AC40: jal         0x8002B0E4
    // 0x8033AC44: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x8033AC44: nop

    after_5:
    // 0x8033AC48: b           L_8033ACA0
    // 0x8033AC4C: nop

        goto L_8033ACA0;
    // 0x8033AC4C: nop

L_8033AC50:
    // 0x8033AC50: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AC54: nop

    // 0x8033AC58: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x8033AC5C: nop

    // 0x8033AC60: bne         $t6, $zero, L_8033AC80
    if (ctx->r14 != 0) {
        // 0x8033AC64: nop
    
            goto L_8033AC80;
    }
    // 0x8033AC64: nop

    // 0x8033AC68: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AC6C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8033AC70: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x8033AC74: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AC78: b           L_8033AC98
    // 0x8033AC7C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_8033AC98;
    // 0x8033AC7C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_8033AC80:
    // 0x8033AC80: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AC84: nop

    // 0x8033AC88: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8033AC8C: nop

    // 0x8033AC90: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8033AC94: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_8033AC98:
    // 0x8033AC98: b           L_8033ACA0
    // 0x8033AC9C: nop

        goto L_8033ACA0;
    // 0x8033AC9C: nop

L_8033ACA0:
    // 0x8033ACA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033ACA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033ACA8: jr          $ra
    // 0x8033ACAC: nop

    return;
    // 0x8033ACAC: nop

;}
RECOMP_FUNC void func_bagular3_80332FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332FF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332FFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333000: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333004: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333008: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033300C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333010: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333014: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333018: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033301C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333020: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333024: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333028: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033302C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333030: nop

    // 0x80333034: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333038: nop

    // 0x8033303C: bne         $t1, $zero, L_80333114
    if (ctx->r9 != 0) {
        // 0x80333040: nop
    
            goto L_80333114;
    }
    // 0x80333040: nop

    // 0x80333044: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333048: nop

    // 0x8033304C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333050: nop

    // 0x80333054: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333058: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033305C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333060: nop

    // 0x80333064: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333068: nop

    // 0x8033306C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333070: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333074: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80333078: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033307C: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80333080: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80333084: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333088: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033308C: nop

    // 0x80333090: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80333094: swc1        $f16, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f16.u32l;
    // 0x80333098: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033309C: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x803330A0: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x803330A4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803330A8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803330AC: addiu       $t1, $t1, -0x4908
    ctx->r9 = ADD32(ctx->r9, -0X4908);
    // 0x803330B0: lh          $a0, 0xE8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XE8);
    // 0x803330B4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803330B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803330BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803330C0: jal         0x8001C0EC
    // 0x803330C4: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803330C4: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_0:
    // 0x803330C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803330CC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803330D0: addiu       $t4, $t4, -0x4908
    ctx->r12 = ADD32(ctx->r12, -0X4908);
    // 0x803330D4: lh          $a0, 0xEA($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XEA);
    // 0x803330D8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803330DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803330E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803330E4: jal         0x8001C0EC
    // 0x803330E8: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803330E8: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_1:
    // 0x803330EC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803330F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803330F4: lh          $a0, 0xE8($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XE8);
    // 0x803330F8: jal         0x8001BBDC
    // 0x803330FC: nop

    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803330FC: nop

    after_2:
    // 0x80333100: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333108: lh          $a0, 0xEA($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XEA);
    // 0x8033310C: jal         0x8001BBDC
    // 0x80333110: nop

    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80333110: nop

    after_3:
L_80333114:
    // 0x80333114: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333118: nop

    // 0x8033311C: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x80333120: nop

    // 0x80333124: bne         $t7, $zero, L_80333168
    if (ctx->r15 != 0) {
        // 0x80333128: nop
    
            goto L_80333168;
    }
    // 0x80333128: nop

    // 0x8033312C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333130: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333134: nop

    // 0x80333138: swc1        $f18, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f18.u32l;
    // 0x8033313C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333140: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333144: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333148: nop

    // 0x8033314C: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x80333150: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333154: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80333158: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033315C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333160: b           L_803332A0
    // 0x80333164: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_803332A0;
    // 0x80333164: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80333168:
    // 0x80333168: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033316C: nop

    // 0x80333170: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80333174: lwc1        $f14, 0xD4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x80333178: jal         0x80015538
    // 0x8033317C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8033317C: nop

    after_4:
    // 0x80333180: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333184: nop

    // 0x80333188: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
    // 0x8033318C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333190: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333194: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80333198: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8033319C: jal         0x80015538
    // 0x803331A0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803331A0: nop

    after_5:
    // 0x803331A4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803331A8: nop

    // 0x803331AC: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x803331B0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803331B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803331B8: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x803331BC: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803331C0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803331C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803331C8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803331CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803331D0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803331D4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803331D8: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x803331DC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803331E0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803331E4: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803331E8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803331EC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803331F0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803331F4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803331F8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803331FC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333200: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x80333204: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80333208: nop

    // 0x8033320C: swc1        $f8, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f8.u32l;
    // 0x80333210: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333214: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333218: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033321C: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80333220: jal         0x80015538
    // 0x80333224: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80333224: nop

    after_6:
    // 0x80333228: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033322C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333230: lh          $t7, 0xEA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEA);
    // 0x80333234: nop

    // 0x80333238: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033323C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333240: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333244: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333248: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033324C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333250: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80333254: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333258: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033325C: lh          $t0, 0xEA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEA);
    // 0x80333260: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80333264: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333268: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033326C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333270: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333274: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333278: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8033327C: lwc1        $f10, 0x1C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80333280: nop

    // 0x80333284: swc1        $f10, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f10.u32l;
    // 0x80333288: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033328C: nop

    // 0x80333290: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x80333294: nop

    // 0x80333298: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x8033329C: sh          $t5, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r13;
L_803332A0:
    // 0x803332A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803332A4: nop

    // 0x803332A8: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803332AC: nop

    // 0x803332B0: bne         $t8, $zero, L_803333B0
    if (ctx->r24 != 0) {
        // 0x803332B4: nop
    
            goto L_803333B0;
    }
    // 0x803332B4: nop

    // 0x803332B8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803332BC: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x803332C0: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x803332C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803332C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803332CC: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803332D0: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x803332D4: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x803332D8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803332DC: lh          $t3, 0xE8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE8);
    // 0x803332E0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803332E4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803332E8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803332EC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803332F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803332F4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803332F8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803332FC: lwc1        $f18, 0x416C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333300: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x80333304: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333308: jal         0x80027464
    // 0x8033330C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x8033330C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x80333310: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80333314: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333318: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033331C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80333320: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80333324: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333328: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033332C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333330: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333334: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
    // 0x80333338: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033333C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333340: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80333344: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x80333348: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x8033334C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80333350: lh          $t7, 0xEA($t2)
    ctx->r15 = MEM_H(ctx->r10, 0XEA);
    // 0x80333354: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80333358: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033335C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333360: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333364: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333368: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033336C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333370: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333374: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x80333378: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033337C: jal         0x80027464
    // 0x80333380: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x80333380: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80333384: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80333388: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033338C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333390: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333394: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333398: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033339C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803333A0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803333A4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803333A8: b           L_803333C8
    // 0x803333AC: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
        goto L_803333C8;
    // 0x803333AC: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
L_803333B0:
    // 0x803333B0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803333B4: nop

    // 0x803333B8: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x803333BC: nop

    // 0x803333C0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x803333C4: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_803333C8:
    // 0x803333C8: b           L_803333D0
    // 0x803333CC: nop

        goto L_803333D0;
    // 0x803333CC: nop

L_803333D0:
    // 0x803333D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803333D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803333D8: jr          $ra
    // 0x803333DC: nop

    return;
    // 0x803333DC: nop

;}
RECOMP_FUNC void func_bagular3_80337314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337314: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337318: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033731C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337320: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337324: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337328: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033732C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337330: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337334: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337338: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033733C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337340: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337344: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337348: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033734C: nop

    // 0x80337350: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337354: nop

    // 0x80337358: bne         $t1, $zero, L_803373B0
    if (ctx->r9 != 0) {
        // 0x8033735C: nop
    
            goto L_803373B0;
    }
    // 0x8033735C: nop

    // 0x80337360: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337364: nop

    // 0x80337368: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033736C: nop

    // 0x80337370: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337374: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337378: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033737C: nop

    // 0x80337380: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337384: nop

    // 0x80337388: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033738C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337390: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337394: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80337398: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033739C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803373A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803373A4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x803373A8: jal         0x8001C0EC
    // 0x803373AC: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803373AC: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_803373B0:
    // 0x803373B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803373B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803373B8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803373BC: nop

    // 0x803373C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803373C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803373C8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803373CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803373D0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803373D4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803373D8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803373DC: nop

    // 0x803373E0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803373E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803373E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803373EC: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803373F0: nop

    // 0x803373F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803373F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803373FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337400: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337404: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80337408: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033740C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80337410: nop

    // 0x80337414: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80337418: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033741C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337420: jal         0x8001B4AC
    // 0x80337424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337428: beq         $v0, $zero, L_80337448
    if (ctx->r2 == 0) {
        // 0x8033742C: nop
    
            goto L_80337448;
    }
    // 0x8033742C: nop

    // 0x80337430: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337434: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80337438: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033743C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337440: nop

    // 0x80337444: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80337448:
    // 0x80337448: b           L_80337450
    // 0x8033744C: nop

        goto L_80337450;
    // 0x8033744C: nop

L_80337450:
    // 0x80337450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337454: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337458: jr          $ra
    // 0x8033745C: nop

    return;
    // 0x8033745C: nop

;}
RECOMP_FUNC void func_bagular3_8033A4BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A4BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A4C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A4C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A4C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A4CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A4D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A4D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A4D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A4DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A4E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A4E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A4E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A4EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A4F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A4F4: nop

    // 0x8033A4F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A4FC: nop

    // 0x8033A500: bne         $t1, $zero, L_8033A558
    if (ctx->r9 != 0) {
        // 0x8033A504: nop
    
            goto L_8033A558;
    }
    // 0x8033A504: nop

    // 0x8033A508: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A50C: nop

    // 0x8033A510: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A514: nop

    // 0x8033A518: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A51C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A520: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A524: nop

    // 0x8033A528: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A52C: nop

    // 0x8033A530: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A534: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A538: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A53C: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x8033A540: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A544: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A548: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A54C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x8033A550: jal         0x8001C0EC
    // 0x8033A554: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A554: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_8033A558:
    // 0x8033A558: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A55C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A560: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033A564: nop

    // 0x8033A568: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A56C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A570: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A574: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A578: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A57C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A580: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033A584: nop

    // 0x8033A588: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033A58C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A590: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A594: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033A598: nop

    // 0x8033A59C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033A5A0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A5A4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A5A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A5AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A5B0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033A5B4: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033A5B8: nop

    // 0x8033A5BC: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033A5C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A5C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A5C8: jal         0x8001B4AC
    // 0x8033A5CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A5CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A5D0: beq         $v0, $zero, L_8033A5F0
    if (ctx->r2 == 0) {
        // 0x8033A5D4: nop
    
            goto L_8033A5F0;
    }
    // 0x8033A5D4: nop

    // 0x8033A5D8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033A5DC: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x8033A5E0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033A5E4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A5E8: nop

    // 0x8033A5EC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033A5F0:
    // 0x8033A5F0: b           L_8033A5F8
    // 0x8033A5F4: nop

        goto L_8033A5F8;
    // 0x8033A5F4: nop

L_8033A5F8:
    // 0x8033A5F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A5FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A600: jr          $ra
    // 0x8033A604: nop

    return;
    // 0x8033A604: nop

;}
RECOMP_FUNC void func_bagular3_80330448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033044C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330450: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330454: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330458: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033045C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330460: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330464: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330468: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033046C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330470: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330474: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330478: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033047C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330480: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80330484: nop

    // 0x80330488: bne         $t0, $zero, L_803304F0
    if (ctx->r8 != 0) {
        // 0x8033048C: nop
    
            goto L_803304F0;
    }
    // 0x8033048C: nop

    // 0x80330490: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330494: nop

    // 0x80330498: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x8033049C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803304A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803304A4: jal         0x80069E60
    // 0x803304A8: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x803304A8: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x803304AC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803304B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803304B4: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x803304B8: nop

    // 0x803304BC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803304C0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803304C4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803304C8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803304CC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803304D0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803304D4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803304D8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803304DC: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x803304E0: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x803304E4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803304E8: b           L_8033053C
    // 0x803304EC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_8033053C;
    // 0x803304EC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803304F0:
    // 0x803304F0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803304F4: lw          $t8, 0x7A64($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A64);
    // 0x803304F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803304FC: bne         $t8, $at, L_8033053C
    if (ctx->r24 != ctx->r1) {
        // 0x80330500: nop
    
            goto L_8033053C;
    }
    // 0x80330500: nop

    // 0x80330504: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330508: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x8033050C: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x80330510: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330514: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330518: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x8033051C: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x80330520: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330524: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330528: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033052C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330530: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330534: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330538: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
L_8033053C:
    // 0x8033053C: b           L_80330544
    // 0x80330540: nop

        goto L_80330544;
    // 0x80330540: nop

L_80330544:
    // 0x80330544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330548: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033054C: jr          $ra
    // 0x80330550: nop

    return;
    // 0x80330550: nop

;}
RECOMP_FUNC void func_bagular3_80336BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336BDC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80336BE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336BE4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336BE8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336BEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336BF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336BF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336BF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336BFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336C00: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336C04: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336C08: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80336C0C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80336C10: nop

    // 0x80336C14: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336C18: nop

    // 0x80336C1C: bne         $t1, $zero, L_80336C50
    if (ctx->r9 != 0) {
        // 0x80336C20: nop
    
            goto L_80336C50;
    }
    // 0x80336C20: nop

    // 0x80336C24: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80336C28: nop

    // 0x80336C2C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336C30: nop

    // 0x80336C34: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336C38: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336C3C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80336C40: nop

    // 0x80336C44: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336C48: nop

    // 0x80336C4C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_80336C50:
    // 0x80336C50: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80336C54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336C58: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80336C5C: nop

    // 0x80336C60: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80336C64: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336C68: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80336C6C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336C70: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80336C74: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80336C78: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80336C7C: nop

    // 0x80336C80: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x80336C84: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80336C88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336C8C: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80336C90: nop

    // 0x80336C94: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80336C98: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80336C9C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80336CA0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80336CA4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80336CA8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80336CAC: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80336CB0: nop

    // 0x80336CB4: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x80336CB8: b           L_80336CC0
    // 0x80336CBC: nop

        goto L_80336CC0;
    // 0x80336CBC: nop

L_80336CC0:
    // 0x80336CC0: jr          $ra
    // 0x80336CC4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80336CC4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_bagular3_8033BE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BE7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033BE80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033BE84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BE88: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BE8C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BE90: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BE94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BE98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BE9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BEA0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BEA4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BEA8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BEAC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033BEB0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BEB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BEB8: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x8033BEBC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033BEC0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033BEC4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033BEC8: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8033BECC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033BED0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033BED4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033BED8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033BEDC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033BEE0: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x8033BEE4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BEE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BEEC: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x8033BEF0: lwc1        $f10, 0x8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8033BEF4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033BEF8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033BEFC: lwc1        $f16, 0x2C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x8033BF00: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033BF04: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033BF08: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033BF0C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033BF10: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033BF14: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x8033BF18: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BF1C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033BF20: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x8033BF24: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8033BF28: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033BF2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033BF30: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033BF34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033BF38: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033BF3C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8033BF40: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033BF44: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8033BF48: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033BF4C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033BF50: lwc1        $f6, 0x24($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X24);
    // 0x8033BF54: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033BF58: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033BF5C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033BF60: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033BF64: addu        $t3, $t2, $t9
    ctx->r11 = ADD32(ctx->r10, ctx->r25);
    // 0x8033BF68: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
    // 0x8033BF6C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BF70: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033BF74: lh          $t5, 0xC2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XC2);
    // 0x8033BF78: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033BF7C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033BF80: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033BF84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033BF88: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033BF8C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033BF90: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8033BF94: lh          $t0, 0xE8($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XE8);
    // 0x8033BF98: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8033BF9C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033BFA0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033BFA4: lwc1        $f16, 0x2C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x8033BFA8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033BFAC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033BFB0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033BFB4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033BFB8: addu        $t2, $t1, $t7
    ctx->r10 = ADD32(ctx->r9, ctx->r15);
    // 0x8033BFBC: swc1        $f18, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f18.u32l;
    // 0x8033BFC0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BFC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BFC8: lh          $t3, 0xE8($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XE8);
    // 0x8033BFCC: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033BFD0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033BFD4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033BFD8: lwc1        $f6, 0x24($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X24);
    // 0x8033BFDC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033BFE0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033BFE4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033BFE8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033BFEC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033BFF0: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x8033BFF4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BFF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BFFC: lh          $t6, 0xE8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE8);
    // 0x8033C000: lwc1        $f10, 0x8($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033C004: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8033C008: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033C00C: lwc1        $f16, 0x2C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8033C010: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033C014: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033C018: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033C01C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033C020: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033C024: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x8033C028: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C02C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C030: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033C034: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033C038: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8033C03C: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8033C040: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C044: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8033C048: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C04C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033C050: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x8033C054: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C058: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C05C: lh          $t9, 0xEA($t2)
    ctx->r25 = MEM_H(ctx->r10, 0XEA);
    // 0x8033C060: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8033C064: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x8033C068: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x8033C06C: lwc1        $f8, 0x24($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X24);
    // 0x8033C070: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033C074: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x8033C078: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033C07C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033C080: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033C084: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x8033C088: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C08C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C090: lh          $t5, 0xEA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XEA);
    // 0x8033C094: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8033C098: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033C09C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033C0A0: lwc1        $f18, 0x2C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x8033C0A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033C0A8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033C0AC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033C0B0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033C0B4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033C0B8: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x8033C0BC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C0C0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033C0C4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033C0C8: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033C0CC: jal         0x80015538
    // 0x8033C0D0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8033C0D0: nop

    after_0:
    // 0x8033C0D4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C0D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C0DC: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x8033C0E0: nop

    // 0x8033C0E4: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8033C0E8: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8033C0EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C0F0: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8033C0F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C0F8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033C0FC: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x8033C100: b           L_8033C108
    // 0x8033C104: nop

        goto L_8033C108;
    // 0x8033C104: nop

L_8033C108:
    // 0x8033C108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033C10C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033C110: jr          $ra
    // 0x8033C114: nop

    return;
    // 0x8033C114: nop

;}
RECOMP_FUNC void func_bagular3_80331A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A40: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331A48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331A4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331A50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A70: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331A74: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331A78: nop

    // 0x80331A7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331A80: nop

    // 0x80331A84: bne         $t1, $zero, L_80331CA4
    if (ctx->r9 != 0) {
        // 0x80331A88: nop
    
            goto L_80331CA4;
    }
    // 0x80331A88: nop

    // 0x80331A8C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331A90: nop

    // 0x80331A94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331A98: nop

    // 0x80331A9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331AA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331AA4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331AA8: nop

    // 0x80331AAC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331AB0: nop

    // 0x80331AB4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331AB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331ABC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331AC0: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x80331AC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AC8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80331ACC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331AD0: jal         0x8001ABF4
    // 0x80331AD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80331AD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80331AD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331ADC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331AE0: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x80331AE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AE8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80331AEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331AF0: jal         0x8001ABF4
    // 0x80331AF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331AF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331AF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AFC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331B00: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x80331B04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B08: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x80331B0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B10: jal         0x8001ABF4
    // 0x80331B14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80331B14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80331B18: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331B1C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331B20: addiu       $a3, $a3, -0x4948
    ctx->r7 = ADD32(ctx->r7, -0X4948);
    // 0x80331B24: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80331B28: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80331B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B30: jal         0x8001ABF4
    // 0x80331B34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80331B34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80331B38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B3C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80331B40: addiu       $t8, $t8, -0x4BE0
    ctx->r24 = ADD32(ctx->r24, -0X4BE0);
    // 0x80331B44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B48: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80331B4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331B54: jal         0x8001C0EC
    // 0x80331B58: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80331B58: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    after_4:
    // 0x80331B5C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331B60: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80331B64: addiu       $t0, $t0, -0x49F0
    ctx->r8 = ADD32(ctx->r8, -0X49F0);
    // 0x80331B68: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x80331B6C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80331B70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331B74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331B78: jal         0x8001C0EC
    // 0x80331B7C: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80331B7C: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    after_5:
    // 0x80331B80: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331B84: nop

    // 0x80331B88: lh          $t3, 0xBC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XBC);
    // 0x80331B8C: nop

    // 0x80331B90: beq         $t3, $zero, L_80331BAC
    if (ctx->r11 == 0) {
        // 0x80331B94: nop
    
            goto L_80331BAC;
    }
    // 0x80331B94: nop

    // 0x80331B98: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331B9C: nop

    // 0x80331BA0: lh          $a0, 0xBC($t4)
    ctx->r4 = MEM_H(ctx->r12, 0XBC);
    // 0x80331BA4: jal         0x8002B114
    // 0x80331BA8: nop

    func_8002B114(rdram, ctx);
        goto after_6;
    // 0x80331BA8: nop

    after_6:
L_80331BAC:
    // 0x80331BAC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331BB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331BB4: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x80331BB8: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x80331BBC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80331BC0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331BC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331BC8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331BCC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331BD0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331BD4: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80331BD8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331BDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331BE0: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80331BE4: nop

    // 0x80331BE8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331BEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331BF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331BF4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331BF8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331BFC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331C00: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80331C04: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331C08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331C0C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80331C10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C14: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331C18: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C1C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331C20: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C24: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331C28: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331C2C: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x80331C30: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331C34: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331C38: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x80331C3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C40: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x80331C44: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80331C48: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331C4C: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80331C50: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331C54: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331C58: swc1        $f6, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f6.u32l;
    // 0x80331C5C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331C60: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331C64: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80331C68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C6C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331C70: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331C74: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331C78: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331C7C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331C80: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331C84: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x80331C88: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331C8C: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x80331C90: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x80331C94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80331C98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331C9C: jal         0x80069E60
    // 0x80331CA0: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_80069E60(rdram, ctx);
        goto after_7;
    // 0x80331CA0: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_7:
L_80331CA4:
    // 0x80331CA4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331CA8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80331CAC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80331CB0: nop

    // 0x80331CB4: bne         $t4, $at, L_80331CF8
    if (ctx->r12 != ctx->r1) {
        // 0x80331CB8: nop
    
            goto L_80331CF8;
    }
    // 0x80331CB8: nop

    // 0x80331CBC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331CC0: nop

    // 0x80331CC4: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80331CC8: nop

    // 0x80331CCC: addiu       $t2, $t5, -0x1
    ctx->r10 = ADD32(ctx->r13, -0X1);
    // 0x80331CD0: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
    // 0x80331CD4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331CD8: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x80331CDC: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80331CE0: lwc1        $f14, 0x4($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80331CE4: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x80331CE8: jal         0x8007F070
    // 0x80331CEC: nop

    func_8007F070(rdram, ctx);
        goto after_8;
    // 0x80331CEC: nop

    after_8:
    // 0x80331CF0: b           L_80331DA0
    // 0x80331CF4: nop

        goto L_80331DA0;
    // 0x80331CF4: nop

L_80331CF8:
    // 0x80331CF8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331CFC: nop

    // 0x80331D00: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80331D04: nop

    // 0x80331D08: bne         $t9, $zero, L_80331D88
    if (ctx->r25 != 0) {
        // 0x80331D0C: nop
    
            goto L_80331D88;
    }
    // 0x80331D0C: nop

    // 0x80331D10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D18: jal         0x8001BB34
    // 0x80331D1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_9;
    // 0x80331D1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80331D20: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331D24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331D28: lh          $a0, 0xE8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XE8);
    // 0x80331D2C: jal         0x8001BB34
    // 0x80331D30: nop

    func_8001BB34(rdram, ctx);
        goto after_10;
    // 0x80331D30: nop

    after_10:
    // 0x80331D34: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331D38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331D3C: lbu         $t3, 0x132($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X132);
    // 0x80331D40: nop

    // 0x80331D44: bne         $t3, $at, L_80331D80
    if (ctx->r11 != ctx->r1) {
        // 0x80331D48: nop
    
            goto L_80331D80;
    }
    // 0x80331D48: nop

    // 0x80331D4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331D58: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x80331D5C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331D60: jal         0x800175F0
    // 0x80331D64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_11;
    // 0x80331D64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80331D68: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331D6C: nop

    // 0x80331D70: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80331D74: nop

    // 0x80331D78: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x80331D7C: sb          $t2, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r10;
L_80331D80:
    // 0x80331D80: b           L_80331DA0
    // 0x80331D84: nop

        goto L_80331DA0;
    // 0x80331D84: nop

L_80331D88:
    // 0x80331D88: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331D8C: nop

    // 0x80331D90: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80331D94: nop

    // 0x80331D98: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80331D9C: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
L_80331DA0:
    // 0x80331DA0: b           L_80331DA8
    // 0x80331DA4: nop

        goto L_80331DA8;
    // 0x80331DA4: nop

L_80331DA8:
    // 0x80331DA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331DAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80331DB0: jr          $ra
    // 0x80331DB4: nop

    return;
    // 0x80331DB4: nop

;}
RECOMP_FUNC void func_bagular3_803398F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803398F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803398F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803398FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339900: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339904: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339908: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033990C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339910: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339914: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339918: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033991C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339920: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339924: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339928: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033992C: nop

    // 0x80339930: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339934: nop

    // 0x80339938: bne         $t1, $zero, L_80339990
    if (ctx->r9 != 0) {
        // 0x8033993C: nop
    
            goto L_80339990;
    }
    // 0x8033993C: nop

    // 0x80339940: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339944: nop

    // 0x80339948: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033994C: nop

    // 0x80339950: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339954: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339958: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033995C: nop

    // 0x80339960: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339964: nop

    // 0x80339968: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033996C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339970: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80339974: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x80339978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033997C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80339980: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80339984: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80339988: jal         0x8001C0EC
    // 0x8033998C: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033998C: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_80339990:
    // 0x80339990: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339994: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339998: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033999C: nop

    // 0x803399A0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803399A4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803399A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803399AC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803399B0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803399B4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803399B8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803399BC: nop

    // 0x803399C0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803399C4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803399C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803399CC: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803399D0: nop

    // 0x803399D4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803399D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803399DC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803399E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803399E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803399E8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803399EC: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803399F0: nop

    // 0x803399F4: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803399F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803399FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339A00: jal         0x8001B4AC
    // 0x80339A04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80339A04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80339A08: beq         $v0, $zero, L_80339A28
    if (ctx->r2 == 0) {
        // 0x80339A0C: nop
    
            goto L_80339A28;
    }
    // 0x80339A0C: nop

    // 0x80339A10: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80339A14: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80339A18: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80339A1C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339A20: nop

    // 0x80339A24: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80339A28:
    // 0x80339A28: b           L_80339A30
    // 0x80339A2C: nop

        goto L_80339A30;
    // 0x80339A2C: nop

L_80339A30:
    // 0x80339A30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339A34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339A38: jr          $ra
    // 0x80339A3C: nop

    return;
    // 0x80339A3C: nop

;}
RECOMP_FUNC void func_bagular3_80330554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330554: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80330558: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033055C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330560: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330564: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330568: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033056C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330570: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330574: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330578: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033057C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330580: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330584: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330588: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033058C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80330590: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80330594: nop

    // 0x80330598: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033059C: nop

    // 0x803305A0: bne         $t1, $zero, L_80330718
    if (ctx->r9 != 0) {
        // 0x803305A4: nop
    
            goto L_80330718;
    }
    // 0x803305A4: nop

    // 0x803305A8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x803305AC: nop

    // 0x803305B0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803305B4: nop

    // 0x803305B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803305BC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803305C0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803305C4: nop

    // 0x803305C8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803305CC: nop

    // 0x803305D0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803305D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803305DC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803305E0: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x803305E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803305E8: jal         0x8001ABF4
    // 0x803305EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x803305EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803305F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305F4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803305F8: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x803305FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330600: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80330604: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80330608: jal         0x8001ABF4
    // 0x8033060C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033060C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80330610: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330614: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330618: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x8033061C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330620: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80330624: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330628: jal         0x8001ABF4
    // 0x8033062C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033062C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330630: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80330634: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330638: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x8033063C: addiu       $a3, $a3, -0x4948
    ctx->r7 = ADD32(ctx->r7, -0X4948);
    // 0x80330640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330644: jal         0x8001ABF4
    // 0x80330648: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80330648: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x8033064C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330650: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80330654: addiu       $t8, $t8, -0x4BE0
    ctx->r24 = ADD32(ctx->r24, -0X4BE0);
    // 0x80330658: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033065C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80330660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330664: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330668: jal         0x8001C0EC
    // 0x8033066C: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x8033066C: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    after_4:
    // 0x80330670: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80330674: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80330678: addiu       $t0, $t0, -0x49F0
    ctx->r8 = ADD32(ctx->r8, -0X49F0);
    // 0x8033067C: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x80330680: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80330684: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330688: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033068C: jal         0x8001C0EC
    // 0x80330690: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80330690: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    after_5:
    // 0x80330694: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80330698: nop

    // 0x8033069C: lh          $t3, 0xC0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC0);
    // 0x803306A0: nop

    // 0x803306A4: beq         $t3, $zero, L_803306D0
    if (ctx->r11 == 0) {
        // 0x803306A8: nop
    
            goto L_803306D0;
    }
    // 0x803306A8: nop

    // 0x803306AC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x803306B0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803306B4: addiu       $t2, $t2, -0x48F8
    ctx->r10 = ADD32(ctx->r10, -0X48F8);
    // 0x803306B8: lh          $a0, 0xC0($t4)
    ctx->r4 = MEM_H(ctx->r12, 0XC0);
    // 0x803306BC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803306C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803306C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803306C8: jal         0x8001C0EC
    // 0x803306CC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x803306CC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_6:
L_803306D0:
    // 0x803306D0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803306D4: nop

    // 0x803306D8: lh          $t5, 0xBE($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XBE);
    // 0x803306DC: nop

    // 0x803306E0: beq         $t5, $zero, L_8033070C
    if (ctx->r13 == 0) {
        // 0x803306E4: nop
    
            goto L_8033070C;
    }
    // 0x803306E4: nop

    // 0x803306E8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803306EC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803306F0: addiu       $t8, $t8, -0x48AC
    ctx->r24 = ADD32(ctx->r24, -0X48AC);
    // 0x803306F4: lh          $a0, 0xBE($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XBE);
    // 0x803306F8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803306FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330700: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330704: jal         0x8001C0EC
    // 0x80330708: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x80330708: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_7:
L_8033070C:
    // 0x8033070C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80330710: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80330714: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_80330718:
    // 0x80330718: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033071C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330720: jal         0x8002A8B4
    // 0x80330724: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_8;
    // 0x80330724: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_8:
    // 0x80330728: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033072C: nop

    // 0x80330730: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80330734: nop

    // 0x80330738: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
    // 0x8033073C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80330740: nop

    // 0x80330744: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80330748: nop

    // 0x8033074C: bne         $t4, $zero, L_8033077C
    if (ctx->r12 != 0) {
        // 0x80330750: nop
    
            goto L_8033077C;
    }
    // 0x80330750: nop

    // 0x80330754: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330758: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033075C: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x80330760: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330764: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80330768: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033076C: jal         0x8001ABF4
    // 0x80330770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x80330770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80330774: b           L_80330794
    // 0x80330778: nop

        goto L_80330794;
    // 0x80330778: nop

L_8033077C:
    // 0x8033077C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80330780: nop

    // 0x80330784: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x80330788: nop

    // 0x8033078C: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80330790: sh          $t5, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r13;
L_80330794:
    // 0x80330794: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330798: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033079C: jal         0x8001B4AC
    // 0x803307A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_10;
    // 0x803307A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x803307A4: beq         $v0, $zero, L_80330B38
    if (ctx->r2 == 0) {
        // 0x803307A8: nop
    
            goto L_80330B38;
    }
    // 0x803307A8: nop

    // 0x803307AC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803307B0: nop

    // 0x803307B4: lh          $t8, 0xBE($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XBE);
    // 0x803307B8: nop

    // 0x803307BC: bne         $t8, $zero, L_803307F8
    if (ctx->r24 != 0) {
        // 0x803307C0: nop
    
            goto L_803307F8;
    }
    // 0x803307C0: nop

    // 0x803307C4: lh          $t9, 0xC0($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XC0);
    // 0x803307C8: nop

    // 0x803307CC: bne         $t9, $zero, L_803307F8
    if (ctx->r25 != 0) {
        // 0x803307D0: nop
    
            goto L_803307F8;
    }
    // 0x803307D0: nop

    // 0x803307D4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x803307D8: addiu       $t0, $zero, 0x384
    ctx->r8 = ADD32(0, 0X384);
    // 0x803307DC: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
    // 0x803307E0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x803307E4: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x803307E8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803307EC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803307F0: b           L_80330B38
    // 0x803307F4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_80330B38;
    // 0x803307F4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803307F8:
    // 0x803307F8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803307FC: nop

    // 0x80330800: lh          $t2, 0xA6($t5)
    ctx->r10 = MEM_H(ctx->r13, 0XA6);
    // 0x80330804: nop

    // 0x80330808: bne         $t2, $zero, L_80330898
    if (ctx->r10 != 0) {
        // 0x8033080C: nop
    
            goto L_80330898;
    }
    // 0x8033080C: nop

    // 0x80330810: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330814: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330818: jal         0x8002A46C
    // 0x8033081C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_11;
    // 0x8033081C: nop

    after_11:
    // 0x80330820: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80330824: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80330828: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8033082C: lwc1        $f14, 0x1C($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80330830: jal         0x80015538
    // 0x80330834: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x80330834: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_12:
    // 0x80330838: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8033083C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80330840: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330844: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330848: nop

    // 0x8033084C: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80330850: nop

    // 0x80330854: bc1t        L_80330878
    if (c1cs) {
        // 0x80330858: nop
    
            goto L_80330878;
    }
    // 0x80330858: nop

    // 0x8033085C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80330860: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330864: nop

    // 0x80330868: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x8033086C: nop

    // 0x80330870: bc1f        L_80330890
    if (!c1cs) {
        // 0x80330874: nop
    
            goto L_80330890;
    }
    // 0x80330874: nop

L_80330878:
    // 0x80330878: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033087C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80330880: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x80330884: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80330888: nop

    // 0x8033088C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330890:
    // 0x80330890: b           L_80330B38
    // 0x80330894: nop

        goto L_80330B38;
    // 0x80330894: nop

L_80330898:
    // 0x80330898: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033089C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803308A0: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x803308A4: nop

    // 0x803308A8: bne         $t3, $at, L_80330B20
    if (ctx->r11 != ctx->r1) {
        // 0x803308AC: nop
    
            goto L_80330B20;
    }
    // 0x803308AC: nop

    // 0x803308B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803308B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803308B8: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x803308BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803308C0: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803308C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803308C8: jal         0x8001ABF4
    // 0x803308CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_13;
    // 0x803308CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x803308D0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803308D4: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x803308D8: sh          $t4, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r12;
    // 0x803308DC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803308E0: lwc1        $f12, -0x3E00($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3E00);
    // 0x803308E4: jal         0x800366E0
    // 0x803308E8: nop

    sqrtf_recomp(rdram, ctx);
        goto after_14;
    // 0x803308E8: nop

    after_14:
    // 0x803308EC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x803308F0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803308F4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803308F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803308FC: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80330900: jal         0x80015538
    // 0x80330904: nop

    Math_WrapAngle(rdram, ctx);
        goto after_15;
    // 0x80330904: nop

    after_15:
    // 0x80330908: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8033090C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330910: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330914: lwc1        $f5, -0x3DF8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X3DF8);
    // 0x80330918: lwc1        $f4, -0x3DF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3DF4);
    // 0x8033091C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80330920: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80330924: jal         0x80034970
    // 0x80330928: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_16;
    // 0x80330928: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_16:
    // 0x8033092C: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80330930: nop

    // 0x80330934: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330938: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x8033093C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330940: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330944: lwc1        $f5, -0x3DF0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X3DF0);
    // 0x80330948: lwc1        $f4, -0x3DEC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3DEC);
    // 0x8033094C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80330950: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80330954: jal         0x80036570
    // 0x80330958: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_17;
    // 0x80330958: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_17:
    // 0x8033095C: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80330960: nop

    // 0x80330964: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330968: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x8033096C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80330970: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x80330974: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330978: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8033097C: jal         0x80015538
    // 0x80330980: nop

    Math_WrapAngle(rdram, ctx);
        goto after_18;
    // 0x80330980: nop

    after_18:
    // 0x80330984: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80330988: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8033098C: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80330990: lui         $at, 0x43B5
    ctx->r1 = S32(0X43B5 << 16);
    // 0x80330994: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330998: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033099C: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x803309A0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803309A4: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803309A8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x803309AC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803309B0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803309B4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x803309B8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803309BC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803309C0: addiu       $a1, $a1, -0x3EB0
    ctx->r5 = ADD32(ctx->r5, -0X3EB0);
    // 0x803309C4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803309C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803309CC: jal         0x80027464
    // 0x803309D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80027464(rdram, ctx);
        goto after_19;
    // 0x803309D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_19:
    // 0x803309D4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803309D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803309DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803309E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803309E4: jal         0x80019448
    // 0x803309E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_20;
    // 0x803309E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_20:
    // 0x803309EC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803309F0: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x803309F4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803309F8: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803309FC: jal         0x80015538
    // 0x80330A00: nop

    Math_WrapAngle(rdram, ctx);
        goto after_21;
    // 0x80330A00: nop

    after_21:
    // 0x80330A04: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80330A08: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330A0C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330A10: lwc1        $f11, -0x3DE8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X3DE8);
    // 0x80330A14: lwc1        $f10, -0x3DE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3DE4);
    // 0x80330A18: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80330A1C: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80330A20: jal         0x80034970
    // 0x80330A24: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_22;
    // 0x80330A24: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_22:
    // 0x80330A28: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80330A2C: nop

    // 0x80330A30: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80330A34: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80330A38: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330A3C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330A40: lwc1        $f11, -0x3DE0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X3DE0);
    // 0x80330A44: lwc1        $f10, -0x3DDC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3DDC);
    // 0x80330A48: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80330A4C: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80330A50: jal         0x80036570
    // 0x80330A54: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_23;
    // 0x80330A54: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_23:
    // 0x80330A58: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80330A5C: nop

    // 0x80330A60: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80330A64: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80330A68: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80330A6C: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80330A70: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330A74: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80330A78: jal         0x80015538
    // 0x80330A7C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_24;
    // 0x80330A7C: nop

    after_24:
    // 0x80330A80: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80330A84: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330A88: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80330A8C: lui         $at, 0x43B5
    ctx->r1 = S32(0X43B5 << 16);
    // 0x80330A90: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80330A94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330A98: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80330A9C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330AA0: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80330AA4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330AA8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80330AAC: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80330AB0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80330AB4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330AB8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330ABC: addiu       $a1, $a1, -0x3EB0
    ctx->r5 = ADD32(ctx->r5, -0X3EB0);
    // 0x80330AC0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80330AC4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330AC8: jal         0x80027464
    // 0x80330ACC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80027464(rdram, ctx);
        goto after_25;
    // 0x80330ACC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_25:
    // 0x80330AD0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330AD4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330AD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80330ADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330AE0: jal         0x80019448
    // 0x80330AE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_26;
    // 0x80330AE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_26:
    // 0x80330AE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330AEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330AF4: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x80330AF8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330AFC: jal         0x800175F0
    // 0x80330B00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_27;
    // 0x80330B00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_27:
    // 0x80330B04: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80330B08: nop

    // 0x80330B0C: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x80330B10: nop

    // 0x80330B14: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80330B18: b           L_80330B38
    // 0x80330B1C: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
        goto L_80330B38;
    // 0x80330B1C: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_80330B20:
    // 0x80330B20: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80330B24: nop

    // 0x80330B28: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80330B2C: nop

    // 0x80330B30: addiu       $t2, $t5, -0x1
    ctx->r10 = ADD32(ctx->r13, -0X1);
    // 0x80330B34: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
L_80330B38:
    // 0x80330B38: jal         0x8033BD74
    // 0x80330B3C: nop

    func_bagular3_8033BD74(rdram, ctx);
        goto after_28;
    // 0x80330B3C: nop

    after_28:
    // 0x80330B40: b           L_80330B48
    // 0x80330B44: nop

        goto L_80330B48;
    // 0x80330B44: nop

L_80330B48:
    // 0x80330B48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330B4C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330B50: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330B54: jr          $ra
    // 0x80330B58: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80330B58: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_bagular3_8033BD74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BD74: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033BD78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BD7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BD80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BD84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BD88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BD8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BD90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BD94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BD98: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BD9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BDA0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033BDA4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033BDA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BDAC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033BDB0: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033BDB4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033BDB8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033BDBC: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8033BDC0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033BDC4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033BDC8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033BDCC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033BDD0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033BDD4: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x8033BDD8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033BDDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BDE0: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x8033BDE4: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033BDE8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033BDEC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033BDF0: lwc1        $f16, 0x28($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X28);
    // 0x8033BDF4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033BDF8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033BDFC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033BE00: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033BE04: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033BE08: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x8033BE0C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8033BE10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BE14: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x8033BE18: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033BE1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033BE20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033BE24: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033BE28: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033BE2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033BE30: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033BE34: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033BE38: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033BE3C: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x8033BE40: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8033BE44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BE48: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x8033BE4C: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033BE50: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033BE54: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033BE58: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033BE5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033BE60: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033BE64: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033BE68: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x8033BE6C: b           L_8033BE74
    // 0x8033BE70: nop

        goto L_8033BE74;
    // 0x8033BE70: nop

L_8033BE74:
    // 0x8033BE74: jr          $ra
    // 0x8033BE78: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033BE78: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_bagular3_8033AAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AAA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033AAA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033AAA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AAAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AAB0: jal         0x8002B0E4
    // 0x8033AAB4: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x8033AAB4: nop

    after_0:
    // 0x8033AAB8: b           L_8033AAC0
    // 0x8033AABC: nop

        goto L_8033AAC0;
    // 0x8033AABC: nop

L_8033AAC0:
    // 0x8033AAC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033AAC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033AAC8: jr          $ra
    // 0x8033AACC: nop

    return;
    // 0x8033AACC: nop

;}
RECOMP_FUNC void func_bagular3_803348BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803348BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803348C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803348C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803348C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803348CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803348D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803348D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803348D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803348DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803348E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803348E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803348E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803348EC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803348F0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803348F4: nop

    // 0x803348F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803348FC: nop

    // 0x80334900: bne         $t1, $zero, L_80334990
    if (ctx->r9 != 0) {
        // 0x80334904: nop
    
            goto L_80334990;
    }
    // 0x80334904: nop

    // 0x80334908: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033490C: nop

    // 0x80334910: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334914: nop

    // 0x80334918: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033491C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334920: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334924: nop

    // 0x80334928: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033492C: nop

    // 0x80334930: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334934: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334938: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033493C: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80334940: jal         0x8001BBDC
    // 0x80334944: nop

    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80334944: nop

    after_0:
    // 0x80334948: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033494C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334950: lh          $a0, 0xEA($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XEA);
    // 0x80334954: jal         0x8001BBDC
    // 0x80334958: nop

    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80334958: nop

    after_1:
    // 0x8033495C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334960: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334964: nop

    // 0x80334968: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x8033496C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334970: nop

    // 0x80334974: lwc1        $f6, 0x2C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80334978: nop

    // 0x8033497C: swc1        $f6, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f6.u32l;
    // 0x80334980: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334984: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334988: nop

    // 0x8033498C: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
L_80334990:
    // 0x80334990: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334994: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334998: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x8033499C: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803349A0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803349A4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803349A8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803349AC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803349B0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803349B4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803349B8: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x803349BC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803349C0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803349C4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803349C8: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x803349CC: jal         0x80015538
    // 0x803349D0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x803349D0: nop

    after_2:
    // 0x803349D4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803349D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803349DC: lh          $t7, 0xEA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEA);
    // 0x803349E0: nop

    // 0x803349E4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803349E8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803349EC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803349F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803349F4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803349F8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803349FC: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80334A00: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334A04: nop

    // 0x80334A08: lh          $t0, 0xAE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAE);
    // 0x80334A0C: nop

    // 0x80334A10: bne         $t0, $zero, L_80334B14
    if (ctx->r8 != 0) {
        // 0x80334A14: nop
    
            goto L_80334B14;
    }
    // 0x80334A14: nop

    // 0x80334A18: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334A1C: nop

    // 0x80334A20: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x80334A24: nop

    // 0x80334A28: bne         $t3, $zero, L_80334B0C
    if (ctx->r11 != 0) {
        // 0x80334A2C: nop
    
            goto L_80334B0C;
    }
    // 0x80334A2C: nop

    // 0x80334A30: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334A34: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334A38: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80334A3C: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x80334A40: lw          $a3, 0x4($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X4);
    // 0x80334A44: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80334A48: lwc1        $f18, 0x1C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80334A4C: addiu       $a1, $a1, -0x3E98
    ctx->r5 = ADD32(ctx->r5, -0X3E98);
    // 0x80334A50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334A54: jal         0x80027464
    // 0x80334A58: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80334A58: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80334A5C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80334A60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334A64: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80334A68: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80334A6C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80334A70: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334A74: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80334A78: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80334A7C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334A80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334A84: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334A88: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x80334A8C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334A90: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334A94: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80334A98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334A9C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334AA0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334AA4: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80334AA8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334AAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334AB0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80334AB4: sh          $t8, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r24;
    // 0x80334AB8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334ABC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334AC0: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80334AC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334AC8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80334ACC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80334AD0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334AD4: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80334AD8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334ADC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80334AE0: sh          $t1, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r9;
    // 0x80334AE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334AE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334AEC: jal         0x8001BBDC
    // 0x80334AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80334AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80334AF4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334AF8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80334AFC: sh          $t2, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r10;
    // 0x80334B00: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334B04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80334B08: sh          $t7, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = ctx->r15;
L_80334B0C:
    // 0x80334B0C: b           L_80334B2C
    // 0x80334B10: nop

        goto L_80334B2C;
    // 0x80334B10: nop

L_80334B14:
    // 0x80334B14: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334B18: nop

    // 0x80334B1C: lh          $t0, 0xAE($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XAE);
    // 0x80334B20: nop

    // 0x80334B24: addiu       $t3, $t0, -0x1
    ctx->r11 = ADD32(ctx->r8, -0X1);
    // 0x80334B28: sh          $t3, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = ctx->r11;
L_80334B2C:
    // 0x80334B2C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334B30: nop

    // 0x80334B34: lh          $t1, 0xB0($t4)
    ctx->r9 = MEM_H(ctx->r12, 0XB0);
    // 0x80334B38: nop

    // 0x80334B3C: bne         $t1, $zero, L_80334C50
    if (ctx->r9 != 0) {
        // 0x80334B40: nop
    
            goto L_80334C50;
    }
    // 0x80334B40: nop

    // 0x80334B44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B4C: jal         0x8002A1FC
    // 0x80334B50: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x80334B50: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_5:
    // 0x80334B54: beq         $v0, $zero, L_80334C30
    if (ctx->r2 == 0) {
        // 0x80334B58: nop
    
            goto L_80334C30;
    }
    // 0x80334B58: nop

    // 0x80334B5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B64: jal         0x8002A46C
    // 0x80334B68: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_6;
    // 0x80334B68: nop

    after_6:
    // 0x80334B6C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80334B70: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80334B74: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80334B78: lwc1        $f14, 0x1C($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80334B7C: jal         0x80015538
    // 0x80334B80: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80334B80: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_7:
    // 0x80334B84: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80334B88: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80334B8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334B90: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80334B94: nop

    // 0x80334B98: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80334B9C: nop

    // 0x80334BA0: bc1f        L_80334C1C
    if (!c1cs) {
        // 0x80334BA4: nop
    
            goto L_80334C1C;
    }
    // 0x80334BA4: nop

    // 0x80334BA8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80334BAC: lwc1        $f8, -0x3D80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D80);
    // 0x80334BB0: nop

    // 0x80334BB4: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80334BB8: nop

    // 0x80334BBC: bc1f        L_80334C1C
    if (!c1cs) {
        // 0x80334BC0: nop
    
            goto L_80334C1C;
    }
    // 0x80334BC0: nop

    // 0x80334BC4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80334BC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334BCC: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80334BD0: nop

    // 0x80334BD4: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80334BD8: nop

    // 0x80334BDC: bc1f        L_80334BFC
    if (!c1cs) {
        // 0x80334BE0: nop
    
            goto L_80334BFC;
    }
    // 0x80334BE0: nop

    // 0x80334BE4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334BE8: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x80334BEC: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x80334BF0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334BF4: b           L_80334C14
    // 0x80334BF8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_80334C14;
    // 0x80334BF8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80334BFC:
    // 0x80334BFC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C00: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80334C04: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80334C08: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C0C: nop

    // 0x80334C10: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80334C14:
    // 0x80334C14: b           L_80334C28
    // 0x80334C18: nop

        goto L_80334C28;
    // 0x80334C18: nop

L_80334C1C:
    // 0x80334C1C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C20: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80334C24: sh          $t8, 0xB0($t4)
    MEM_H(0XB0, ctx->r12) = ctx->r24;
L_80334C28:
    // 0x80334C28: b           L_80334C48
    // 0x80334C2C: nop

        goto L_80334C48;
    // 0x80334C2C: nop

L_80334C30:
    // 0x80334C30: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C34: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x80334C38: sh          $t1, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r9;
    // 0x80334C3C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C40: nop

    // 0x80334C44: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80334C48:
    // 0x80334C48: b           L_80334C68
    // 0x80334C4C: nop

        goto L_80334C68;
    // 0x80334C4C: nop

L_80334C50:
    // 0x80334C50: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334C54: nop

    // 0x80334C58: lh          $t7, 0xB0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB0);
    // 0x80334C5C: nop

    // 0x80334C60: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x80334C64: sh          $t9, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = ctx->r25;
L_80334C68:
    // 0x80334C68: jal         0x8033BE7C
    // 0x80334C6C: nop

    func_bagular3_8033BE7C(rdram, ctx);
        goto after_8;
    // 0x80334C6C: nop

    after_8:
    // 0x80334C70: b           L_80334C78
    // 0x80334C74: nop

        goto L_80334C78;
    // 0x80334C74: nop

L_80334C78:
    // 0x80334C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334C7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80334C80: jr          $ra
    // 0x80334C84: nop

    return;
    // 0x80334C84: nop

;}
RECOMP_FUNC void func_bagular3_80331DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331DB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331DBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331DC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331DC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331DC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331DCC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331DD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331DD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331DD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331DDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331DE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331DE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331DE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331DEC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331DF0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331DF4: nop

    // 0x80331DF8: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80331DFC: nop

    // 0x80331E00: bne         $t1, $zero, L_80331E34
    if (ctx->r9 != 0) {
        // 0x80331E04: nop
    
            goto L_80331E34;
    }
    // 0x80331E04: nop

    // 0x80331E08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E10: jal         0x8001BB34
    // 0x80331E14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80331E14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80331E18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E20: lh          $a0, 0xE8($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XE8);
    // 0x80331E24: jal         0x8001BB34
    // 0x80331E28: nop

    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80331E28: nop

    after_1:
    // 0x80331E2C: b           L_80331E84
    // 0x80331E30: nop

        goto L_80331E84;
    // 0x80331E30: nop

L_80331E34:
    // 0x80331E34: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331E38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E3C: lh          $s0, 0x108($t3)
    ctx->r16 = MEM_H(ctx->r11, 0X108);
    // 0x80331E40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E44: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x80331E48: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80331E4C: sltiu       $t5, $s0, 0x1
    ctx->r13 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331E50: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80331E54: jal         0x8001BB34
    // 0x80331E58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80331E58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80331E5C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331E60: nop

    // 0x80331E64: lh          $s0, 0x108($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X108);
    // 0x80331E68: lh          $a0, 0xE8($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XE8);
    // 0x80331E6C: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x80331E70: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80331E74: sltiu       $t8, $s0, 0x1
    ctx->r24 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331E78: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80331E7C: jal         0x8001BB34
    // 0x80331E80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80331E80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
L_80331E84:
    // 0x80331E84: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331E88: nop

    // 0x80331E8C: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80331E90: nop

    // 0x80331E94: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80331E98: sltiu       $at, $t1, 0x6
    ctx->r1 = ctx->r9 < 0X6 ? 1 : 0;
    // 0x80331E9C: beq         $at, $zero, L_80331F20
    if (ctx->r1 == 0) {
        // 0x80331EA0: nop
    
            goto L_80331F20;
    }
    // 0x80331EA0: nop

    // 0x80331EA4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331EA8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331EAC: addu        $at, $at, $t1
    gpr jr_addend_80331EB8 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331EB0: lw          $t1, -0x3DB0($at)
    ctx->r9 = ADD32(ctx->r1, -0X3DB0);
    // 0x80331EB4: nop

    // 0x80331EB8: jr          $t1
    // 0x80331EBC: nop

    switch (jr_addend_80331EB8 >> 2) {
        case 0: goto L_80331EC0; break;
        case 1: goto L_80331ED0; break;
        case 2: goto L_80331EE0; break;
        case 3: goto L_80331EF0; break;
        case 4: goto L_80331F00; break;
        case 5: goto L_80331F10; break;
        default: switch_error(__func__, 0x80331EB8, 0x8033C250);
    }
    // 0x80331EBC: nop

L_80331EC0:
    // 0x80331EC0: jal         0x80330554
    // 0x80331EC4: nop

    func_bagular3_80330554(rdram, ctx);
        goto after_4;
    // 0x80331EC4: nop

    after_4:
    // 0x80331EC8: b           L_80331F28
    // 0x80331ECC: nop

        goto L_80331F28;
    // 0x80331ECC: nop

L_80331ED0:
    // 0x80331ED0: jal         0x80330B5C
    // 0x80331ED4: nop

    func_bagular3_80330B5C(rdram, ctx);
        goto after_5;
    // 0x80331ED4: nop

    after_5:
    // 0x80331ED8: b           L_80331F28
    // 0x80331EDC: nop

        goto L_80331F28;
    // 0x80331EDC: nop

L_80331EE0:
    // 0x80331EE0: jal         0x80330F50
    // 0x80331EE4: nop

    func_bagular3_80330F50(rdram, ctx);
        goto after_6;
    // 0x80331EE4: nop

    after_6:
    // 0x80331EE8: b           L_80331F28
    // 0x80331EEC: nop

        goto L_80331F28;
    // 0x80331EEC: nop

L_80331EF0:
    // 0x80331EF0: jal         0x80331270
    // 0x80331EF4: nop

    func_bagular3_80331270(rdram, ctx);
        goto after_7;
    // 0x80331EF4: nop

    after_7:
    // 0x80331EF8: b           L_80331F28
    // 0x80331EFC: nop

        goto L_80331F28;
    // 0x80331EFC: nop

L_80331F00:
    // 0x80331F00: jal         0x803315C4
    // 0x80331F04: nop

    func_bagular3_803315C4(rdram, ctx);
        goto after_8;
    // 0x80331F04: nop

    after_8:
    // 0x80331F08: b           L_80331F28
    // 0x80331F0C: nop

        goto L_80331F28;
    // 0x80331F0C: nop

L_80331F10:
    // 0x80331F10: jal         0x80331A40
    // 0x80331F14: nop

    func_bagular3_80331A40(rdram, ctx);
        goto after_9;
    // 0x80331F14: nop

    after_9:
    // 0x80331F18: b           L_80331F28
    // 0x80331F1C: nop

        goto L_80331F28;
    // 0x80331F1C: nop

L_80331F20:
    // 0x80331F20: b           L_80331F28
    // 0x80331F24: nop

        goto L_80331F28;
    // 0x80331F24: nop

L_80331F28:
    // 0x80331F28: b           L_80331F30
    // 0x80331F2C: nop

        goto L_80331F30;
    // 0x80331F2C: nop

L_80331F30:
    // 0x80331F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80331F38: jr          $ra
    // 0x80331F3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80331F3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
