#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80330B3C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330B3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330B40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330B44: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x80330B48: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x80330B4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330B50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330B54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330B58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330B5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330B70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330B74: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330B78: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330B7C: jal         0x8033079C
    // 0x80330B80: nop

    func_8033079C_unk_bin_25(rdram, ctx);
        goto after_0;
    // 0x80330B80: nop

    after_0:
    // 0x80330B84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330B88: beq         $v0, $at, L_80330BA8
    if (ctx->r2 == ctx->r1) {
        // 0x80330B8C: nop
    
            goto L_80330BA8;
    }
    // 0x80330B8C: nop

    // 0x80330B90: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330B94: jal         0x8033096C
    // 0x80330B98: nop

    func_8033096C_unk_bin_25(rdram, ctx);
        goto after_1;
    // 0x80330B98: nop

    after_1:
    // 0x80330B9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330BA0: bne         $v0, $at, L_80330BE4
    if (ctx->r2 != ctx->r1) {
        // 0x80330BA4: nop
    
            goto L_80330BE4;
    }
    // 0x80330BA4: nop

L_80330BA8:
    // 0x80330BA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330BAC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BB0: nop

    // 0x80330BB4: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x80330BB8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BBC: nop

    // 0x80330BC0: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
    // 0x80330BC4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BC8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80330BCC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80330BD0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BD4: nop

    // 0x80330BD8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80330BDC: b           L_80330BF4
    // 0x80330BE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80330BF4;
    // 0x80330BE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80330BE4:
    // 0x80330BE4: b           L_80330BF4
    // 0x80330BE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80330BF4;
    // 0x80330BE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80330BEC: b           L_80330BF4
    // 0x80330BF0: nop

        goto L_80330BF4;
    // 0x80330BF0: nop

L_80330BF4:
    // 0x80330BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330BFC: jr          $ra
    // 0x80330C00: nop

    return;
    // 0x80330C00: nop

;}
RECOMP_FUNC void func_803321E8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803321E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803321EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803321F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803321F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803321F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803321FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332200: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332204: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332208: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033220C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332210: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332214: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332218: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033221C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332220: nop

    // 0x80332224: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332228: nop

    // 0x8033222C: bne         $t1, $zero, L_803322DC
    if (ctx->r9 != 0) {
        // 0x80332230: nop
    
            goto L_803322DC;
    }
    // 0x80332230: nop

    // 0x80332234: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332238: nop

    // 0x8033223C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332240: nop

    // 0x80332244: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332248: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033224C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332250: nop

    // 0x80332254: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332258: nop

    // 0x8033225C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332260: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332264: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332268: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x8033226C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332270: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332278: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033227C: jal         0x8001C0EC
    // 0x80332280: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332280: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80332284: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332288: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033228C: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80332290: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x80332294: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332298: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033229C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803322A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803322A4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803322A8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803322AC: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x803322B0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803322B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322B8: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x803322BC: nop

    // 0x803322C0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803322C4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803322C8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803322CC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803322D0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803322D4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803322D8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803322DC:
    // 0x803322DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803322E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803322E4: jal         0x8002A8B4
    // 0x803322E8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x803322E8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x803322EC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803322F0: nop

    // 0x803322F4: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803322F8: nop

    // 0x803322FC: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80332300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332308: jal         0x8001B4AC
    // 0x8033230C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033230C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332310: beq         $v0, $zero, L_80332330
    if (ctx->r2 == 0) {
        // 0x80332314: nop
    
            goto L_80332330;
    }
    // 0x80332314: nop

    // 0x80332318: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033231C: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80332320: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80332324: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332328: nop

    // 0x8033232C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80332330:
    // 0x80332330: b           L_80332338
    // 0x80332334: nop

        goto L_80332338;
    // 0x80332334: nop

L_80332338:
    // 0x80332338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033233C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332340: jr          $ra
    // 0x80332344: nop

    return;
    // 0x80332344: nop

;}
RECOMP_FUNC void func_803358DC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803358DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803358E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803358E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803358E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803358EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803358F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803358F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803358F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803358FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335900: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335904: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335908: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033590C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335910: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335914: nop

    // 0x80335918: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033591C: nop

    // 0x80335920: bne         $t1, $zero, L_80335988
    if (ctx->r9 != 0) {
        // 0x80335924: nop
    
            goto L_80335988;
    }
    // 0x80335924: nop

    // 0x80335928: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033592C: nop

    // 0x80335930: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335934: nop

    // 0x80335938: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033593C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335940: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335944: nop

    // 0x80335948: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033594C: nop

    // 0x80335950: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335954: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335958: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033595C: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335960: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335964: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033596C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80335970: jal         0x8001C0EC
    // 0x80335974: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335974: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80335978: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033597C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335980: jal         0x8001BBDC
    // 0x80335984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80335984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80335988:
    // 0x80335988: jal         0x80334D5C
    // 0x8033598C: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x8033598C: nop

    after_2:
    // 0x80335990: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335994: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335998: jal         0x8001B4AC
    // 0x8033599C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x8033599C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803359A0: beq         $v0, $zero, L_803359C0
    if (ctx->r2 == 0) {
        // 0x803359A4: nop
    
            goto L_803359C0;
    }
    // 0x803359A4: nop

    // 0x803359A8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803359AC: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x803359B0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803359B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803359B8: nop

    // 0x803359BC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803359C0:
    // 0x803359C0: b           L_803359C8
    // 0x803359C4: nop

        goto L_803359C8;
    // 0x803359C4: nop

L_803359C8:
    // 0x803359C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803359CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803359D0: jr          $ra
    // 0x803359D4: nop

    return;
    // 0x803359D4: nop

;}
RECOMP_FUNC void func_803349DC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803349DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803349E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803349E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803349E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803349EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803349F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803349F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803349F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803349FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334A04: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334A08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334A0C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334A10: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A14: nop

    // 0x80334A18: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334A1C: nop

    // 0x80334A20: bne         $t1, $zero, L_80334A94
    if (ctx->r9 != 0) {
        // 0x80334A24: nop
    
            goto L_80334A94;
    }
    // 0x80334A24: nop

    // 0x80334A28: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A2C: nop

    // 0x80334A30: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334A34: nop

    // 0x80334A38: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334A3C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334A40: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A44: nop

    // 0x80334A48: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334A4C: nop

    // 0x80334A50: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334A54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A5C: jal         0x8001BBDC
    // 0x80334A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80334A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80334A64: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334A6C: lh          $a0, 0xC2($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XC2);
    // 0x80334A70: jal         0x8001BBDC
    // 0x80334A74: nop

    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80334A74: nop

    after_1:
    // 0x80334A78: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A7C: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x80334A80: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x80334A84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80334A88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334A8C: jal         0x80069E60
    // 0x80334A90: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    func_80069E60(rdram, ctx);
        goto after_2;
    // 0x80334A90: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    after_2:
L_80334A94:
    // 0x80334A94: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A98: nop

    // 0x80334A9C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80334AA0: nop

    // 0x80334AA4: bne         $t1, $zero, L_80334AD8
    if (ctx->r9 != 0) {
        // 0x80334AA8: nop
    
            goto L_80334AD8;
    }
    // 0x80334AA8: nop

    // 0x80334AAC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AB0: nop

    // 0x80334AB4: lh          $a0, 0xC2($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XC2);
    // 0x80334AB8: jal         0x8002B114
    // 0x80334ABC: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80334ABC: nop

    after_3:
    // 0x80334AC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334AC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334AC8: jal         0x8002B114
    // 0x80334ACC: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x80334ACC: nop

    after_4:
    // 0x80334AD0: b           L_80334B28
    // 0x80334AD4: nop

        goto L_80334B28;
    // 0x80334AD4: nop

L_80334AD8:
    // 0x80334AD8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80334ADC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334AE0: lh          $a1, 0xA6($t4)
    ctx->r5 = MEM_H(ctx->r12, 0XA6);
    // 0x80334AE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334AE8: andi        $t2, $a1, 0x1
    ctx->r10 = ctx->r5 & 0X1;
    // 0x80334AEC: jal         0x8001BB34
    // 0x80334AF0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x80334AF0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_5:
    // 0x80334AF4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AF8: nop

    // 0x80334AFC: lh          $a1, 0xA6($t6)
    ctx->r5 = MEM_H(ctx->r14, 0XA6);
    // 0x80334B00: lh          $a0, 0xC2($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XC2);
    // 0x80334B04: andi        $t5, $a1, 0x1
    ctx->r13 = ctx->r5 & 0X1;
    // 0x80334B08: jal         0x8001BB34
    // 0x80334B0C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x80334B0C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_6:
    // 0x80334B10: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80334B14: nop

    // 0x80334B18: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80334B1C: nop

    // 0x80334B20: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80334B24: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_80334B28:
    // 0x80334B28: b           L_80334B30
    // 0x80334B2C: nop

        goto L_80334B30;
    // 0x80334B2C: nop

L_80334B30:
    // 0x80334B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334B34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334B38: jr          $ra
    // 0x80334B3C: nop

    return;
    // 0x80334B3C: nop

;}
RECOMP_FUNC void func_803399E4_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803399E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803399E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803399EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803399F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803399F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803399F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803399FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339A00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339A04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339A08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339A0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339A10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339A14: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339A18: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339A1C: nop

    // 0x80339A20: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339A24: nop

    // 0x80339A28: bne         $t1, $zero, L_80339A68
    if (ctx->r9 != 0) {
        // 0x80339A2C: nop
    
            goto L_80339A68;
    }
    // 0x80339A2C: nop

    // 0x80339A30: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339A34: nop

    // 0x80339A38: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339A3C: nop

    // 0x80339A40: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339A44: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339A48: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339A4C: nop

    // 0x80339A50: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339A54: nop

    // 0x80339A58: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339A5C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339A60: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x80339A64: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_80339A68:
    // 0x80339A68: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80339A6C: lui         $at, 0xC1C0
    ctx->r1 = S32(0XC1C0 << 16);
    // 0x80339A70: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80339A74: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80339A78: jal         0x80015538
    // 0x80339A7C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80339A7C: nop

    after_0:
    // 0x80339A80: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339A84: nop

    // 0x80339A88: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x80339A8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339A90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339A94: jal         0x80028FA0
    // 0x80339A98: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80339A98: nop

    after_1:
    // 0x80339A9C: beq         $v0, $zero, L_80339AB4
    if (ctx->r2 == 0) {
        // 0x80339AA0: nop
    
            goto L_80339AB4;
    }
    // 0x80339AA0: nop

    // 0x80339AA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339AA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339AAC: jal         0x80029B60
    // 0x80339AB0: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x80339AB0: nop

    after_2:
L_80339AB4:
    // 0x80339AB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339AB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339ABC: jal         0x8002A8B4
    // 0x80339AC0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80339AC0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80339AC4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80339AC8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80339ACC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80339AD0: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80339AD4: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80339AD8: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80339ADC: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80339AE0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80339AE4: jal         0x800156C4
    // 0x80339AE8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_4;
    // 0x80339AE8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_4:
    // 0x80339AEC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80339AF0: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80339AF4: jal         0x80015744
    // 0x80339AF8: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_5;
    // 0x80339AF8: nop

    after_5:
    // 0x80339AFC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80339B00: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80339B04: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80339B08: lwc1        $f12, 0x40($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80339B0C: jal         0x8002A800
    // 0x80339B10: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8002A800(rdram, ctx);
        goto after_6;
    // 0x80339B10: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_6:
    // 0x80339B14: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80339B18: nop

    // 0x80339B1C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80339B20: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80339B24: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80339B28: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80339B2C: nop

    // 0x80339B30: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80339B34: nop

    // 0x80339B38: bc1t        L_80339B6C
    if (c1cs) {
        // 0x80339B3C: nop
    
            goto L_80339B6C;
    }
    // 0x80339B3C: nop

    // 0x80339B40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80339B44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80339B48: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339B4C: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80339B50: lwc1        $f12, 0x40($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X40);
    // 0x80339B54: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80339B58: jal         0x80015538
    // 0x80339B5C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80339B5C: nop

    after_7:
    // 0x80339B60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80339B64: nop

    // 0x80339B68: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
L_80339B6C:
    // 0x80339B6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339B70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339B74: jal         0x80029D8C
    // 0x80339B78: nop

    func_80029D8C(rdram, ctx);
        goto after_8;
    // 0x80339B78: nop

    after_8:
    // 0x80339B7C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339B80: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x80339B84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80339B88: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80339B8C: nop

    // 0x80339B90: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80339B94: nop

    // 0x80339B98: bc1f        L_80339BB8
    if (!c1cs) {
        // 0x80339B9C: nop
    
            goto L_80339BB8;
    }
    // 0x80339B9C: nop

    // 0x80339BA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339BA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339BA8: jal         0x8002B0E4
    // 0x80339BAC: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x80339BAC: nop

    after_9:
    // 0x80339BB0: b           L_80339C08
    // 0x80339BB4: nop

        goto L_80339C08;
    // 0x80339BB4: nop

L_80339BB8:
    // 0x80339BB8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80339BBC: nop

    // 0x80339BC0: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80339BC4: nop

    // 0x80339BC8: bne         $t8, $zero, L_80339BE8
    if (ctx->r24 != 0) {
        // 0x80339BCC: nop
    
            goto L_80339BE8;
    }
    // 0x80339BCC: nop

    // 0x80339BD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339BD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339BD8: jal         0x8002B0E4
    // 0x80339BDC: nop

    func_8002B0E4(rdram, ctx);
        goto after_10;
    // 0x80339BDC: nop

    after_10:
    // 0x80339BE0: b           L_80339C00
    // 0x80339BE4: nop

        goto L_80339C00;
    // 0x80339BE4: nop

L_80339BE8:
    // 0x80339BE8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80339BEC: nop

    // 0x80339BF0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80339BF4: nop

    // 0x80339BF8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80339BFC: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_80339C00:
    // 0x80339C00: b           L_80339C08
    // 0x80339C04: nop

        goto L_80339C08;
    // 0x80339C04: nop

L_80339C08:
    // 0x80339C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80339C0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339C10: jr          $ra
    // 0x80339C14: nop

    return;
    // 0x80339C14: nop

;}
RECOMP_FUNC void func_803357E0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803357E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803357E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803357E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803357EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803357F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803357F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803357F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803357FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335800: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335804: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335808: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033580C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335810: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335814: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335818: nop

    // 0x8033581C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335820: nop

    // 0x80335824: bne         $t1, $zero, L_8033588C
    if (ctx->r9 != 0) {
        // 0x80335828: nop
    
            goto L_8033588C;
    }
    // 0x80335828: nop

    // 0x8033582C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335830: nop

    // 0x80335834: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335838: nop

    // 0x8033583C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335840: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335844: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335848: nop

    // 0x8033584C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335850: nop

    // 0x80335854: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335858: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033585C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335860: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335864: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335868: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033586C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335870: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80335874: jal         0x8001C0EC
    // 0x80335878: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335878: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x8033587C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335880: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335884: jal         0x8001BBDC
    // 0x80335888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80335888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8033588C:
    // 0x8033588C: jal         0x80334D5C
    // 0x80335890: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80335890: nop

    after_2:
    // 0x80335894: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335898: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033589C: jal         0x8001B4AC
    // 0x803358A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803358A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803358A4: beq         $v0, $zero, L_803358C4
    if (ctx->r2 == 0) {
        // 0x803358A8: nop
    
            goto L_803358C4;
    }
    // 0x803358A8: nop

    // 0x803358AC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803358B0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803358B4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803358B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803358BC: nop

    // 0x803358C0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803358C4:
    // 0x803358C4: b           L_803358CC
    // 0x803358C8: nop

        goto L_803358CC;
    // 0x803358C8: nop

L_803358CC:
    // 0x803358CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803358D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803358D4: jr          $ra
    // 0x803358D8: nop

    return;
    // 0x803358D8: nop

;}
RECOMP_FUNC void func_80330C04_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C04: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80330C08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330C0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80330C10: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330C14: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330C18: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330C1C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80330C20: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330C24: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330C28: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80330C2C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330C30: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330C34: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80330C38: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330C3C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80330C40: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330C44: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330C48: addiu       $a1, $a1, -0x52F4
    ctx->r5 = ADD32(ctx->r5, -0X52F4);
    // 0x80330C4C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330C50: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80330C54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330C58: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330C5C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330C60: jal         0x80027464
    // 0x80330C64: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80330C64: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80330C68: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80330C6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330C70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330C74: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C78: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80330C7C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80330C80: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330C84: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330C88: jal         0x800295C0
    // 0x80330C8C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x80330C8C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80330C90: beq         $v0, $zero, L_80330CC4
    if (ctx->r2 == 0) {
        // 0x80330C94: nop
    
            goto L_80330CC4;
    }
    // 0x80330C94: nop

    // 0x80330C98: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C9C: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80330CA0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330CA4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330CA8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330CAC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330CB0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330CB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CB8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330CBC: b           L_80330CEC
    // 0x80330CC0: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_80330CEC;
    // 0x80330CC0: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_80330CC4:
    // 0x80330CC4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80330CC8: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80330CCC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330CD0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330CD4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330CD8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330CDC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330CE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CE4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330CE8: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
L_80330CEC:
    // 0x80330CEC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330CF0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330CF4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330CF8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330CFC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330D00: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330D04: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330D08: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330D0C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330D10: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330D14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330D18: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80330D1C: nop

    // 0x80330D20: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330D24: swc1        $f4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f4.u32l;
    // 0x80330D28: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330D2C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80330D30: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80330D34: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330D38: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330D3C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330D40: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330D44: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80330D48: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80330D4C: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80330D50: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x80330D54: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x80330D58: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330D5C: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80330D60: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330D64: addiu       $a1, $a1, -0x52E8
    ctx->r5 = ADD32(ctx->r5, -0X52E8);
    // 0x80330D68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330D6C: jal         0x80027464
    // 0x80330D70: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80330D70: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80330D74: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80330D78: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80330D7C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80330D80: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330D84: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330D88: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330D8C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330D90: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330D94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D98: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330D9C: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x80330DA0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80330DA4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80330DA8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330DAC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330DB0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330DB4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330DB8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330DBC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DC0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330DC4: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x80330DC8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330DCC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330DD0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330DD4: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x80330DD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330DDC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330DE0: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x80330DE4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330DE8: jal         0x80027464
    // 0x80330DEC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80330DEC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80330DF0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80330DF4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80330DF8: addiu       $t6, $t6, -0x3E14
    ctx->r14 = ADD32(ctx->r14, -0X3E14);
    // 0x80330DFC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80330E00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80330E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330E0C: jal         0x8001C0EC
    // 0x80330E10: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80330E10: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_4:
    // 0x80330E14: jal         0x80014E80
    // 0x80330E18: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x80330E18: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_5:
    // 0x80330E1C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80330E20: sll         $t0, $s0, 1
    ctx->r8 = S32(ctx->r16 << 1);
    // 0x80330E24: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80330E28: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80330E2C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80330E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E34: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80330E38: jal         0x8001B6BC
    // 0x80330E3C: nop

    func_8001B6BC(rdram, ctx);
        goto after_6;
    // 0x80330E3C: nop

    after_6:
    // 0x80330E40: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80330E44: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330E48: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80330E4C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330E50: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330E54: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330E58: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330E5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E60: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330E64: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x80330E68: jal         0x80014E80
    // 0x80330E6C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    Math_Random(rdram, ctx);
        goto after_7;
    // 0x80330E6C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_7:
    // 0x80330E70: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80330E74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E78: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80330E7C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330E80: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330E84: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330E88: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330E8C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330E90: addiu       $t3, $v0, 0x1E
    ctx->r11 = ADD32(ctx->r2, 0X1E);
    // 0x80330E94: sb          $t3, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r11;
    // 0x80330E98: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80330E9C: jal         0x8001BB34
    // 0x80330EA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_8;
    // 0x80330EA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80330EA4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330EA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330EAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330EB0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330EB4: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x80330EB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330EBC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330EC0: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x80330EC4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80330EC8: jal         0x80027464
    // 0x80330ECC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x80330ECC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x80330ED0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80330ED4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330ED8: addiu       $t7, $t7, -0x3E14
    ctx->r15 = ADD32(ctx->r15, -0X3E14);
    // 0x80330EDC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80330EE0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330EE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330EE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330EEC: jal         0x8001C0EC
    // 0x80330EF0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_10;
    // 0x80330EF0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_10:
    // 0x80330EF4: jal         0x80014E80
    // 0x80330EF8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_11;
    // 0x80330EF8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_11:
    // 0x80330EFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80330F00: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x80330F04: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330F08: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80330F0C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F14: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80330F18: jal         0x8001B6BC
    // 0x80330F1C: nop

    func_8001B6BC(rdram, ctx);
        goto after_12;
    // 0x80330F1C: nop

    after_12:
    // 0x80330F20: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80330F24: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330F28: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80330F2C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80330F30: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330F34: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80330F38: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330F3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F40: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330F44: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80330F48: jal         0x80014E80
    // 0x80330F4C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_13;
    // 0x80330F4C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_13:
    // 0x80330F50: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80330F54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F58: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330F5C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330F60: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330F64: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330F68: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330F6C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330F70: addiu       $t1, $v0, 0x1E
    ctx->r9 = ADD32(ctx->r2, 0X1E);
    // 0x80330F74: sb          $t1, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r9;
    // 0x80330F78: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80330F7C: jal         0x8001BB34
    // 0x80330F80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_14;
    // 0x80330F80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x80330F84: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330F88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330F8C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330F90: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330F94: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x80330F98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330F9C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330FA0: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x80330FA4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80330FA8: jal         0x80027464
    // 0x80330FAC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_15;
    // 0x80330FAC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x80330FB0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80330FB4: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80330FB8: addiu       $t3, $t3, -0x3E14
    ctx->r11 = ADD32(ctx->r11, -0X3E14);
    // 0x80330FBC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80330FC0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80330FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330FC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330FCC: jal         0x8001C0EC
    // 0x80330FD0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_16;
    // 0x80330FD0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_16:
    // 0x80330FD4: jal         0x80014E80
    // 0x80330FD8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_17;
    // 0x80330FD8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_17:
    // 0x80330FDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80330FE0: sll         $t8, $s0, 1
    ctx->r24 = S32(ctx->r16 << 1);
    // 0x80330FE4: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80330FE8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80330FEC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80330FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330FF4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80330FF8: jal         0x8001B6BC
    // 0x80330FFC: nop

    func_8001B6BC(rdram, ctx);
        goto after_18;
    // 0x80330FFC: nop

    after_18:
    // 0x80331000: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80331004: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80331008: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033100C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331010: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331014: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331018: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033101C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331020: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331024: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x80331028: jal         0x80014E80
    // 0x8033102C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_19;
    // 0x8033102C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_19:
    // 0x80331030: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80331034: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331038: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8033103C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80331040: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331044: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80331048: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033104C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331050: addiu       $t6, $v0, 0x1E
    ctx->r14 = ADD32(ctx->r2, 0X1E);
    // 0x80331054: sb          $t6, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r14;
    // 0x80331058: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033105C: jal         0x8001BB34
    // 0x80331060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_20;
    // 0x80331060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x80331064: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80331068: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033106C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331070: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331074: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x80331078: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033107C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80331080: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x80331084: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80331088: jal         0x80027464
    // 0x8033108C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_21;
    // 0x8033108C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_21:
    // 0x80331090: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80331094: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331098: addiu       $t1, $t1, -0x3E14
    ctx->r9 = ADD32(ctx->r9, -0X3E14);
    // 0x8033109C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803310A0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803310A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803310A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803310AC: jal         0x8001C0EC
    // 0x803310B0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_22;
    // 0x803310B0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_22:
    // 0x803310B4: jal         0x80014E80
    // 0x803310B8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_23;
    // 0x803310B8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_23:
    // 0x803310BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803310C0: sll         $t5, $s0, 1
    ctx->r13 = S32(ctx->r16 << 1);
    // 0x803310C4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x803310C8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803310CC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803310D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803310D4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803310D8: jal         0x8001B6BC
    // 0x803310DC: nop

    func_8001B6BC(rdram, ctx);
        goto after_24;
    // 0x803310DC: nop

    after_24:
    // 0x803310E0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x803310E4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803310E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803310EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803310F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803310F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803310F8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803310FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331100: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331104: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x80331108: jal         0x80014E80
    // 0x8033110C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_25;
    // 0x8033110C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_25:
    // 0x80331110: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80331114: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331118: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8033111C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331120: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331124: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331128: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033112C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331130: addiu       $t7, $v0, 0x1E
    ctx->r15 = ADD32(ctx->r2, 0X1E);
    // 0x80331134: sb          $t7, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r15;
    // 0x80331138: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033113C: jal         0x8001BB34
    // 0x80331140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_26;
    // 0x80331140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x80331144: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80331148: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033114C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331150: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331154: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x80331158: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033115C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80331160: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x80331164: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80331168: jal         0x80027464
    // 0x8033116C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_27;
    // 0x8033116C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_27:
    // 0x80331170: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80331174: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80331178: addiu       $t6, $t6, -0x3E14
    ctx->r14 = ADD32(ctx->r14, -0X3E14);
    // 0x8033117C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80331180: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80331184: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331188: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033118C: jal         0x8001C0EC
    // 0x80331190: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_28;
    // 0x80331190: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_28:
    // 0x80331194: jal         0x80014E80
    // 0x80331198: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_29;
    // 0x80331198: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_29:
    // 0x8033119C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803311A0: sll         $t4, $s0, 1
    ctx->r12 = S32(ctx->r16 << 1);
    // 0x803311A4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x803311A8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803311AC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803311B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803311B4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803311B8: jal         0x8001B6BC
    // 0x803311BC: nop

    func_8001B6BC(rdram, ctx);
        goto after_30;
    // 0x803311BC: nop

    after_30:
    // 0x803311C0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x803311C4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803311C8: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x803311CC: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803311D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803311D4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803311D8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803311DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803311E0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803311E4: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x803311E8: jal         0x80014E80
    // 0x803311EC: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_31;
    // 0x803311EC: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_31:
    // 0x803311F0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x803311F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803311F8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803311FC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331200: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331204: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331208: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033120C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331210: addiu       $t3, $v0, 0x1E
    ctx->r11 = ADD32(ctx->r2, 0X1E);
    // 0x80331214: sb          $t3, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r11;
    // 0x80331218: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033121C: jal         0x8001BB34
    // 0x80331220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_32;
    // 0x80331220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_32:
    // 0x80331224: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80331228: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033122C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331230: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331234: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x80331238: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033123C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80331240: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x80331244: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80331248: jal         0x80027464
    // 0x8033124C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_33;
    // 0x8033124C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_33:
    // 0x80331250: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80331254: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331258: addiu       $t7, $t7, -0x3E14
    ctx->r15 = ADD32(ctx->r15, -0X3E14);
    // 0x8033125C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80331260: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033126C: jal         0x8001C0EC
    // 0x80331270: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_34;
    // 0x80331270: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_34:
    // 0x80331274: jal         0x80014E80
    // 0x80331278: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_35;
    // 0x80331278: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_35:
    // 0x8033127C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80331280: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    // 0x80331284: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80331288: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033128C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331294: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80331298: jal         0x8001B6BC
    // 0x8033129C: nop

    func_8001B6BC(rdram, ctx);
        goto after_36;
    // 0x8033129C: nop

    after_36:
    // 0x803312A0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x803312A4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803312A8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803312AC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803312B0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803312B4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803312B8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803312BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803312C0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803312C4: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x803312C8: jal         0x80014E80
    // 0x803312CC: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_37;
    // 0x803312CC: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_37:
    // 0x803312D0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x803312D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803312D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803312DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803312E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803312E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803312E8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803312EC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803312F0: addiu       $t1, $v0, 0x1E
    ctx->r9 = ADD32(ctx->r2, 0X1E);
    // 0x803312F4: sb          $t1, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r9;
    // 0x803312F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803312FC: jal         0x8001BB34
    // 0x80331300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_38;
    // 0x80331300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_38:
    // 0x80331304: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331308: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033130C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331310: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331314: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x80331318: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033131C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80331320: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x80331324: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80331328: jal         0x80027464
    // 0x8033132C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_39;
    // 0x8033132C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_39:
    // 0x80331330: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80331334: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80331338: addiu       $t3, $t3, -0x3E14
    ctx->r11 = ADD32(ctx->r11, -0X3E14);
    // 0x8033133C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80331340: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80331344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033134C: jal         0x8001C0EC
    // 0x80331350: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_40;
    // 0x80331350: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_40:
    // 0x80331354: jal         0x80014E80
    // 0x80331358: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_41;
    // 0x80331358: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_41:
    // 0x8033135C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80331360: sll         $t0, $s0, 1
    ctx->r8 = S32(ctx->r16 << 1);
    // 0x80331364: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80331368: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033136C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80331370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331374: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80331378: jal         0x8001B6BC
    // 0x8033137C: nop

    func_8001B6BC(rdram, ctx);
        goto after_42;
    // 0x8033137C: nop

    after_42:
    // 0x80331380: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80331384: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80331388: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8033138C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80331390: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331394: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80331398: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033139C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803313A0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803313A4: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x803313A8: jal         0x80014E80
    // 0x803313AC: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_43;
    // 0x803313AC: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_43:
    // 0x803313B0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x803313B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803313B8: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x803313BC: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803313C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803313C4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803313C8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803313CC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803313D0: addiu       $t6, $v0, 0x1E
    ctx->r14 = ADD32(ctx->r2, 0X1E);
    // 0x803313D4: sb          $t6, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r14;
    // 0x803313D8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803313DC: jal         0x8001BB34
    // 0x803313E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_44;
    // 0x803313E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_44:
    // 0x803313E4: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x803313E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803313EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803313F0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803313F4: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x803313F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803313FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80331400: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x80331404: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80331408: jal         0x80027464
    // 0x8033140C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_45;
    // 0x8033140C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_45:
    // 0x80331410: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80331414: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331418: addiu       $t1, $t1, -0x3E14
    ctx->r9 = ADD32(ctx->r9, -0X3E14);
    // 0x8033141C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80331420: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331428: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033142C: jal         0x8001C0EC
    // 0x80331430: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_46;
    // 0x80331430: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_46:
    // 0x80331434: jal         0x80014E80
    // 0x80331438: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_47;
    // 0x80331438: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_47:
    // 0x8033143C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80331440: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x80331444: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80331448: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033144C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331454: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80331458: jal         0x8001B6BC
    // 0x8033145C: nop

    func_8001B6BC(rdram, ctx);
        goto after_48;
    // 0x8033145C: nop

    after_48:
    // 0x80331460: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80331464: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331468: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8033146C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331470: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331474: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331478: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033147C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331480: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331484: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x80331488: jal         0x80014E80
    // 0x8033148C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_49;
    // 0x8033148C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_49:
    // 0x80331490: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80331494: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331498: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033149C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803314A0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803314A4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803314A8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803314AC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803314B0: addiu       $t7, $v0, 0x1E
    ctx->r15 = ADD32(ctx->r2, 0X1E);
    // 0x803314B4: sb          $t7, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r15;
    // 0x803314B8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803314BC: jal         0x8001BB34
    // 0x803314C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_50;
    // 0x803314C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_50:
    // 0x803314C4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x803314C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803314CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803314D0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803314D4: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x803314D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803314DC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803314E0: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x803314E4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x803314E8: jal         0x80027464
    // 0x803314EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_51;
    // 0x803314EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_51:
    // 0x803314F0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x803314F4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803314F8: addiu       $t6, $t6, -0x3E14
    ctx->r14 = ADD32(ctx->r14, -0X3E14);
    // 0x803314FC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80331500: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80331504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033150C: jal         0x8001C0EC
    // 0x80331510: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_52;
    // 0x80331510: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_52:
    // 0x80331514: jal         0x80014E80
    // 0x80331518: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_53;
    // 0x80331518: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_53:
    // 0x8033151C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80331520: sll         $t8, $s0, 1
    ctx->r24 = S32(ctx->r16 << 1);
    // 0x80331524: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80331528: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033152C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80331530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331534: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80331538: jal         0x8001B6BC
    // 0x8033153C: nop

    func_8001B6BC(rdram, ctx);
        goto after_54;
    // 0x8033153C: nop

    after_54:
    // 0x80331540: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80331544: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80331548: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033154C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331550: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331554: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331558: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033155C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331560: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331564: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x80331568: jal         0x80014E80
    // 0x8033156C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_55;
    // 0x8033156C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_55:
    // 0x80331570: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80331574: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331578: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8033157C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80331580: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331584: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80331588: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033158C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331590: addiu       $t3, $v0, 0x1E
    ctx->r11 = ADD32(ctx->r2, 0X1E);
    // 0x80331594: sb          $t3, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r11;
    // 0x80331598: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033159C: jal         0x8001BB34
    // 0x803315A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_56;
    // 0x803315A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_56:
    // 0x803315A4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803315A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803315AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803315B0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803315B4: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x803315B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803315BC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803315C0: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x803315C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x803315C8: jal         0x80027464
    // 0x803315CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_57;
    // 0x803315CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_57:
    // 0x803315D0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x803315D4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803315D8: addiu       $t7, $t7, -0x3E14
    ctx->r15 = ADD32(ctx->r15, -0X3E14);
    // 0x803315DC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803315E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803315E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803315E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803315EC: jal         0x8001C0EC
    // 0x803315F0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_58;
    // 0x803315F0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_58:
    // 0x803315F4: jal         0x80014E80
    // 0x803315F8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_59;
    // 0x803315F8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_59:
    // 0x803315FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80331600: sll         $t5, $s0, 1
    ctx->r13 = S32(ctx->r16 << 1);
    // 0x80331604: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80331608: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033160C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331614: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80331618: jal         0x8001B6BC
    // 0x8033161C: nop

    func_8001B6BC(rdram, ctx);
        goto after_60;
    // 0x8033161C: nop

    after_60:
    // 0x80331620: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80331624: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331628: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033162C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331630: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331634: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331638: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033163C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331640: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331644: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80331648: jal         0x80014E80
    // 0x8033164C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_61;
    // 0x8033164C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_61:
    // 0x80331650: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80331654: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331658: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8033165C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331660: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331664: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331668: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033166C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331670: addiu       $t1, $v0, 0x1E
    ctx->r9 = ADD32(ctx->r2, 0X1E);
    // 0x80331674: sb          $t1, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r9;
    // 0x80331678: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033167C: jal         0x8001BB34
    // 0x80331680: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_62;
    // 0x80331680: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_62:
    // 0x80331684: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80331688: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033168C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331690: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331694: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x80331698: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033169C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803316A0: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x803316A4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x803316A8: jal         0x80027464
    // 0x803316AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_63;
    // 0x803316AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_63:
    // 0x803316B0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x803316B4: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x803316B8: addiu       $t3, $t3, -0x3E14
    ctx->r11 = ADD32(ctx->r11, -0X3E14);
    // 0x803316BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803316C0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803316C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803316C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803316CC: jal         0x8001C0EC
    // 0x803316D0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_64;
    // 0x803316D0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_64:
    // 0x803316D4: jal         0x80014E80
    // 0x803316D8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_65;
    // 0x803316D8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_65:
    // 0x803316DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803316E0: sll         $t4, $s0, 1
    ctx->r12 = S32(ctx->r16 << 1);
    // 0x803316E4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x803316E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803316EC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803316F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803316F4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803316F8: jal         0x8001B6BC
    // 0x803316FC: nop

    func_8001B6BC(rdram, ctx);
        goto after_66;
    // 0x803316FC: nop

    after_66:
    // 0x80331700: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80331704: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80331708: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8033170C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80331710: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331714: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80331718: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033171C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331720: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331724: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x80331728: jal         0x80014E80
    // 0x8033172C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_67;
    // 0x8033172C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_67:
    // 0x80331730: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80331734: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331738: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033173C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331740: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331744: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331748: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033174C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331750: addiu       $t6, $v0, 0x1E
    ctx->r14 = ADD32(ctx->r2, 0X1E);
    // 0x80331754: sb          $t6, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r14;
    // 0x80331758: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033175C: jal         0x8001BB34
    // 0x80331760: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_68;
    // 0x80331760: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_68:
    // 0x80331764: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x80331768: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033176C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331770: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331774: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x80331778: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033177C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80331780: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x80331784: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80331788: jal         0x80027464
    // 0x8033178C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_69;
    // 0x8033178C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_69:
    // 0x80331790: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80331794: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331798: addiu       $t1, $t1, -0x3E14
    ctx->r9 = ADD32(ctx->r9, -0X3E14);
    // 0x8033179C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803317A0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803317A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803317A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803317AC: jal         0x8001C0EC
    // 0x803317B0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    func_8001C0EC(rdram, ctx);
        goto after_70;
    // 0x803317B0: addiu       $a3, $zero, 0x1AE
    ctx->r7 = ADD32(0, 0X1AE);
    after_70:
    // 0x803317B4: jal         0x80014E80
    // 0x803317B8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_71;
    // 0x803317B8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_71:
    // 0x803317BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803317C0: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    // 0x803317C4: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x803317C8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803317CC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803317D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803317D4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803317D8: jal         0x8001B6BC
    // 0x803317DC: nop

    func_8001B6BC(rdram, ctx);
        goto after_72;
    // 0x803317DC: nop

    after_72:
    // 0x803317E0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x803317E4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803317E8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803317EC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803317F0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803317F4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803317F8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803317FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331800: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331804: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x80331808: jal         0x80014E80
    // 0x8033180C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_73;
    // 0x8033180C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_73:
    // 0x80331810: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80331814: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331818: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033181C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331820: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331824: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331828: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033182C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331830: addiu       $t7, $v0, 0x1E
    ctx->r15 = ADD32(ctx->r2, 0X1E);
    // 0x80331834: sb          $t7, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r15;
    // 0x80331838: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033183C: jal         0x8001BB34
    // 0x80331840: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_74;
    // 0x80331840: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_74:
    // 0x80331844: b           L_8033184C
    // 0x80331848: nop

        goto L_8033184C;
    // 0x80331848: nop

L_8033184C:
    // 0x8033184C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331850: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80331854: jr          $ra
    // 0x80331858: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80331858: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80332460_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332460: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332468: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033246C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332470: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332474: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332478: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033247C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332480: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332484: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332488: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033248C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332490: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332494: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332498: nop

    // 0x8033249C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803324A0: nop

    // 0x803324A4: bne         $t1, $zero, L_8033251C
    if (ctx->r9 != 0) {
        // 0x803324A8: nop
    
            goto L_8033251C;
    }
    // 0x803324A8: nop

    // 0x803324AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803324B0: nop

    // 0x803324B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803324B8: nop

    // 0x803324BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803324C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803324C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803324C8: nop

    // 0x803324CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803324D0: nop

    // 0x803324D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803324D8: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x803324DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803324E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803324E4: nop

    // 0x803324E8: swc1        $f4, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f4.u32l;
    // 0x803324EC: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x803324F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803324F4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803324F8: nop

    // 0x803324FC: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x80332500: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332504: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332508: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033250C: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x80332510: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332514: jal         0x800175F0
    // 0x80332518: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80332518: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_8033251C:
    // 0x8033251C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332520: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332524: jal         0x80029D8C
    // 0x80332528: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x80332528: nop

    after_1:
    // 0x8033252C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332530: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x80332534: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332538: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8033253C: nop

    // 0x80332540: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80332544: nop

    // 0x80332548: bc1f        L_80332568
    if (!c1cs) {
        // 0x8033254C: nop
    
            goto L_80332568;
    }
    // 0x8033254C: nop

    // 0x80332550: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332554: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80332558: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033255C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332560: nop

    // 0x80332564: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80332568:
    // 0x80332568: b           L_80332570
    // 0x8033256C: nop

        goto L_80332570;
    // 0x8033256C: nop

L_80332570:
    // 0x80332570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332574: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332578: jr          $ra
    // 0x8033257C: nop

    return;
    // 0x8033257C: nop

;}
RECOMP_FUNC void func_80336848_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336848: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033684C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336850: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336854: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336858: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033685C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336860: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336864: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336868: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033686C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336870: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336874: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336878: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033687C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336880: nop

    // 0x80336884: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336888: nop

    // 0x8033688C: bne         $t1, $zero, L_803368F4
    if (ctx->r9 != 0) {
        // 0x80336890: nop
    
            goto L_803368F4;
    }
    // 0x80336890: nop

    // 0x80336894: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336898: nop

    // 0x8033689C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803368A0: nop

    // 0x803368A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803368A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803368AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803368B0: nop

    // 0x803368B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803368B8: nop

    // 0x803368BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803368C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803368C4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803368C8: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x803368CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803368D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803368D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803368D8: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x803368DC: jal         0x8001C0EC
    // 0x803368E0: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803368E0: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x803368E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803368E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803368EC: jal         0x8001BBDC
    // 0x803368F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803368F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803368F4:
    // 0x803368F4: jal         0x80334D5C
    // 0x803368F8: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803368F8: nop

    after_2:
    // 0x803368FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336900: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336904: jal         0x8001B4AC
    // 0x80336908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80336908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033690C: beq         $v0, $zero, L_8033692C
    if (ctx->r2 == 0) {
        // 0x80336910: nop
    
            goto L_8033692C;
    }
    // 0x80336910: nop

    // 0x80336914: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336918: addiu       $t8, $zero, 0x1A
    ctx->r24 = ADD32(0, 0X1A);
    // 0x8033691C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80336920: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336924: nop

    // 0x80336928: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033692C:
    // 0x8033692C: b           L_80336934
    // 0x80336930: nop

        goto L_80336934;
    // 0x80336930: nop

L_80336934:
    // 0x80336934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336938: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033693C: jr          $ra
    // 0x80336940: nop

    return;
    // 0x80336940: nop

;}
RECOMP_FUNC void func_80339DBC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339DBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80339DC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339DC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339DC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339DCC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339DD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339DD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339DD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339DDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339DE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339DE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339DE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339DEC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80339DF0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80339DF4: nop

    // 0x80339DF8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339DFC: nop

    // 0x80339E00: bne         $t1, $zero, L_80339EF0
    if (ctx->r9 != 0) {
        // 0x80339E04: nop
    
            goto L_80339EF0;
    }
    // 0x80339E04: nop

    // 0x80339E08: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80339E0C: nop

    // 0x80339E10: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339E14: nop

    // 0x80339E18: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339E1C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339E20: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80339E24: nop

    // 0x80339E28: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339E2C: nop

    // 0x80339E30: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339E34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339E38: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80339E3C: addiu       $t7, $t7, -0x3E34
    ctx->r15 = ADD32(ctx->r15, -0X3E34);
    // 0x80339E40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339E44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80339E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339E4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80339E50: jal         0x8001C0EC
    // 0x80339E54: addiu       $a3, $zero, 0x180
    ctx->r7 = ADD32(0, 0X180);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339E54: addiu       $a3, $zero, 0x180
    ctx->r7 = ADD32(0, 0X180);
    after_0:
    // 0x80339E58: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80339E5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339E60: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80339E64: nop

    // 0x80339E68: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x80339E6C: jal         0x80014E80
    // 0x80339E70: addiu       $a0, $zero, -0x10
    ctx->r4 = ADD32(0, -0X10);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80339E70: addiu       $a0, $zero, -0x10
    ctx->r4 = ADD32(0, -0X10);
    after_1:
    // 0x80339E74: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80339E78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339E7C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80339E80: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80339E84: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80339E88: jal         0x80015538
    // 0x80339E8C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80339E8C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_2:
    // 0x80339E90: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80339E94: nop

    // 0x80339E98: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80339E9C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80339EA0: nop

    // 0x80339EA4: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80339EA8: nop

    // 0x80339EAC: swc1        $f8, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f8.u32l;
    // 0x80339EB0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80339EB4: nop

    // 0x80339EB8: lh          $t2, 0xC0($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC0);
    // 0x80339EBC: nop

    // 0x80339EC0: bne         $t2, $zero, L_80339EDC
    if (ctx->r10 != 0) {
        // 0x80339EC4: nop
    
            goto L_80339EDC;
    }
    // 0x80339EC4: nop

    // 0x80339EC8: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x80339ECC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80339ED0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80339ED4: b           L_80339EF0
    // 0x80339ED8: swc1        $f10, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f10.u32l;
        goto L_80339EF0;
    // 0x80339ED8: swc1        $f10, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f10.u32l;
L_80339EDC:
    // 0x80339EDC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80339EE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80339EE4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80339EE8: nop

    // 0x80339EEC: swc1        $f16, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f16.u32l;
L_80339EF0:
    // 0x80339EF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339EF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339EF8: jal         0x80029D8C
    // 0x80339EFC: nop

    func_80029D8C(rdram, ctx);
        goto after_3;
    // 0x80339EFC: nop

    after_3:
    // 0x80339F00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339F04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339F08: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80339F0C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80339F10: jal         0x8002A0D0
    // 0x80339F14: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_4;
    // 0x80339F14: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    after_4:
    // 0x80339F18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339F1C: bne         $v0, $at, L_80339FB8
    if (ctx->r2 != ctx->r1) {
        // 0x80339F20: nop
    
            goto L_80339FB8;
    }
    // 0x80339F20: nop

    // 0x80339F24: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80339F28: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80339F2C: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80339F30: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x80339F34: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x80339F38: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80339F3C: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80339F40: addiu       $a1, $a1, -0x5508
    ctx->r5 = ADD32(ctx->r5, -0X5508);
    // 0x80339F44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80339F48: jal         0x80027464
    // 0x80339F4C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80339F4C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80339F50: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80339F54: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80339F58: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80339F5C: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80339F60: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x80339F64: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x80339F68: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80339F6C: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80339F70: addiu       $a1, $a1, -0x54FC
    ctx->r5 = ADD32(ctx->r5, -0X54FC);
    // 0x80339F74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80339F78: jal         0x80027464
    // 0x80339F7C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80339F7C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80339F80: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80339F84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339F88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339F8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339F90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80339F94: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80339F98: jal         0x800175F0
    // 0x80339F9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x80339F9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80339FA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339FA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339FA8: jal         0x8002B114
    // 0x80339FAC: nop

    func_8002B114(rdram, ctx);
        goto after_8;
    // 0x80339FAC: nop

    after_8:
    // 0x80339FB0: b           L_80339FFC
    // 0x80339FB4: nop

        goto L_80339FFC;
    // 0x80339FB4: nop

L_80339FB8:
    // 0x80339FB8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80339FBC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80339FC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80339FC4: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80339FC8: nop

    // 0x80339FCC: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80339FD0: nop

    // 0x80339FD4: bc1f        L_80339FF4
    if (!c1cs) {
        // 0x80339FD8: nop
    
            goto L_80339FF4;
    }
    // 0x80339FD8: nop

    // 0x80339FDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339FE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339FE4: jal         0x8002B114
    // 0x80339FE8: nop

    func_8002B114(rdram, ctx);
        goto after_9;
    // 0x80339FE8: nop

    after_9:
    // 0x80339FEC: b           L_80339FFC
    // 0x80339FF0: nop

        goto L_80339FFC;
    // 0x80339FF0: nop

L_80339FF4:
    // 0x80339FF4: b           L_80339FFC
    // 0x80339FF8: nop

        goto L_80339FFC;
    // 0x80339FF8: nop

L_80339FFC:
    // 0x80339FFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A000: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033A004: jr          $ra
    // 0x8033A008: nop

    return;
    // 0x8033A008: nop

;}
RECOMP_FUNC void func_8033096C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033096C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330970: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330974: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330978: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033097C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330980: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330984: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330988: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033098C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330990: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330994: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330998: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8033099C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x803309A0: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
L_803309A4:
    // 0x803309A4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803309A8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803309AC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803309B0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803309B4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803309B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803309BC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803309C0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803309C4: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x803309C8: nop

    // 0x803309CC: beq         $t3, $zero, L_80330B0C
    if (ctx->r11 == 0) {
        // 0x803309D0: nop
    
            goto L_80330B0C;
    }
    // 0x803309D0: nop

    // 0x803309D4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x803309D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309DC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803309E0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803309E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803309E8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803309EC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803309F0: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x803309F4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803309F8: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x803309FC: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330A00: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330A04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330A08: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330A0C: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80330A10: nop

    // 0x80330A14: bc1f        L_80330A24
    if (!c1cs) {
        // 0x80330A18: nop
    
            goto L_80330A24;
    }
    // 0x80330A18: nop

    // 0x80330A1C: b           L_80330B34
    // 0x80330A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80330B34;
    // 0x80330A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80330A24:
    // 0x80330A24: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80330A28: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80330A2C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330A30: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330A34: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330A38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330A3C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330A40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A44: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330A48: lwc1        $f16, 0x4150($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80330A4C: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80330A50: nop

    // 0x80330A54: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80330A58: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330A5C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80330A60: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x80330A64: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330A68: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330A6C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330A70: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330A74: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330A78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A7C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330A80: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80330A84: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80330A88: nop

    // 0x80330A8C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80330A90: swc1        $f10, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f10.u32l;
    // 0x80330A94: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80330A98: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x80330A9C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330AA0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330AA4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330AA8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330AAC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330AB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330AB4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330AB8: lwc1        $f16, 0x4158($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80330ABC: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80330AC0: nop

    // 0x80330AC4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80330AC8: swc1        $f4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f4.u32l;
    // 0x80330ACC: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80330AD0: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80330AD4: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80330AD8: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80330ADC: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80330AE0: nop

    // 0x80330AE4: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80330AE8: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80330AEC: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80330AF0: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80330AF4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80330AF8: nop

    // 0x80330AFC: bc1f        L_80330B0C
    if (!c1cs) {
        // 0x80330B00: nop
    
            goto L_80330B0C;
    }
    // 0x80330B00: nop

    // 0x80330B04: b           L_80330B34
    // 0x80330B08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80330B34;
    // 0x80330B08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80330B0C:
    // 0x80330B0C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80330B10: nop

    // 0x80330B14: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80330B18: slti        $at, $t7, 0xE
    ctx->r1 = SIGNED(ctx->r15) < 0XE ? 1 : 0;
    // 0x80330B1C: bne         $at, $zero, L_803309A4
    if (ctx->r1 != 0) {
        // 0x80330B20: sw          $t7, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r15;
            goto L_803309A4;
    }
    // 0x80330B20: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80330B24: b           L_80330B34
    // 0x80330B28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80330B34;
    // 0x80330B28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80330B2C: b           L_80330B34
    // 0x80330B30: nop

        goto L_80330B34;
    // 0x80330B30: nop

L_80330B34:
    // 0x80330B34: jr          $ra
    // 0x80330B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80330B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80339850_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339850: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80339854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80339858: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033985C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339860: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339864: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339868: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033986C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339870: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339874: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339878: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033987C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339880: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80339884: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339888: nop

    // 0x8033988C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339890: nop

    // 0x80339894: bne         $t1, $zero, L_80339950
    if (ctx->r9 != 0) {
        // 0x80339898: nop
    
            goto L_80339950;
    }
    // 0x80339898: nop

    // 0x8033989C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803398A0: nop

    // 0x803398A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803398A8: nop

    // 0x803398AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803398B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803398B4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803398B8: nop

    // 0x803398BC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803398C0: nop

    // 0x803398C4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803398C8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x803398CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803398D0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803398D4: nop

    // 0x803398D8: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x803398DC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803398E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803398E4: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803398E8: nop

    // 0x803398EC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803398F0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803398F4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803398F8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803398FC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339900: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80339904: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80339908: lui         $at, 0x42E6
    ctx->r1 = S32(0X42E6 << 16);
    // 0x8033990C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80339910: jal         0x80015538
    // 0x80339914: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80339914: nop

    after_0:
    // 0x80339918: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033991C: nop

    // 0x80339920: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x80339924: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80339928: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033992C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80339930: nop

    // 0x80339934: swc1        $f6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f6.u32l;
    // 0x80339938: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033993C: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x80339940: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x80339944: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80339948: nop

    // 0x8033994C: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
L_80339950:
    // 0x80339950: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80339954: lui         $at, 0xC1C0
    ctx->r1 = S32(0XC1C0 << 16);
    // 0x80339958: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033995C: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80339960: jal         0x80015538
    // 0x80339964: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80339964: nop

    after_1:
    // 0x80339968: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033996C: nop

    // 0x80339970: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80339974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033997C: jal         0x80029D8C
    // 0x80339980: nop

    func_80029D8C(rdram, ctx);
        goto after_2;
    // 0x80339980: nop

    after_2:
    // 0x80339984: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80339988: nop

    // 0x8033998C: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80339990: nop

    // 0x80339994: bne         $t9, $zero, L_803399B4
    if (ctx->r25 != 0) {
        // 0x80339998: nop
    
            goto L_803399B4;
    }
    // 0x80339998: nop

    // 0x8033999C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803399A0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803399A4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803399A8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803399AC: b           L_803399CC
    // 0x803399B0: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_803399CC;
    // 0x803399B0: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_803399B4:
    // 0x803399B4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803399B8: nop

    // 0x803399BC: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x803399C0: nop

    // 0x803399C4: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x803399C8: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_803399CC:
    // 0x803399CC: b           L_803399D4
    // 0x803399D0: nop

        goto L_803399D4;
    // 0x803399D0: nop

L_803399D4:
    // 0x803399D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803399D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803399DC: jr          $ra
    // 0x803399E0: nop

    return;
    // 0x803399E0: nop

;}
RECOMP_FUNC void func_80334B40_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334B40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334B44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334B48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334B4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334B50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334B54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334B58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334B5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334B60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334B64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334B68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334B6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334B70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334B74: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334B78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334B7C: nop

    // 0x80334B80: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80334B84: nop

    // 0x80334B88: bne         $t1, $zero, L_80334BA8
    if (ctx->r9 != 0) {
        // 0x80334B8C: nop
    
            goto L_80334BA8;
    }
    // 0x80334B8C: nop

    // 0x80334B90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B98: jal         0x8001BB34
    // 0x80334B9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80334B9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80334BA0: b           L_80334BD0
    // 0x80334BA4: nop

        goto L_80334BD0;
    // 0x80334BA4: nop

L_80334BA8:
    // 0x80334BA8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334BAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334BB0: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x80334BB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334BB8: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x80334BBC: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80334BC0: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80334BC4: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80334BC8: jal         0x8001BB34
    // 0x80334BCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80334BCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_80334BD0:
    // 0x80334BD0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334BD4: nop

    // 0x80334BD8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334BDC: nop

    // 0x80334BE0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80334BE4: sltiu       $at, $t7, 0x13
    ctx->r1 = ctx->r15 < 0X13 ? 1 : 0;
    // 0x80334BE8: beq         $at, $zero, L_80334D3C
    if (ctx->r1 == 0) {
        // 0x80334BEC: nop
    
            goto L_80334D3C;
    }
    // 0x80334BEC: nop

    // 0x80334BF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334BF4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80334BF8: addu        $at, $at, $t7
    gpr jr_addend_80334C04 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334BFC: lw          $t7, -0x5280($at)
    ctx->r15 = ADD32(ctx->r1, -0X5280);
    // 0x80334C00: nop

    // 0x80334C04: jr          $t7
    // 0x80334C08: nop

    switch (jr_addend_80334C04 >> 2) {
        case 0: goto L_80334C0C; break;
        case 1: goto L_80334C1C; break;
        case 2: goto L_80334C2C; break;
        case 3: goto L_80334C3C; break;
        case 4: goto L_80334C4C; break;
        case 5: goto L_80334C5C; break;
        case 6: goto L_80334C6C; break;
        case 7: goto L_80334C7C; break;
        case 8: goto L_80334C8C; break;
        case 9: goto L_80334C9C; break;
        case 10: goto L_80334CAC; break;
        case 11: goto L_80334CBC; break;
        case 12: goto L_80334CCC; break;
        case 13: goto L_80334CDC; break;
        case 14: goto L_80334CEC; break;
        case 15: goto L_80334CFC; break;
        case 16: goto L_80334D0C; break;
        case 17: goto L_80334D1C; break;
        case 18: goto L_80334D2C; break;
        default: switch_error(__func__, 0x80334C04, 0x8033AD80);
    }
    // 0x80334C08: nop

L_80334C0C:
    // 0x80334C0C: jal         0x803319F8
    // 0x80334C10: nop

    func_803319F8_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80334C10: nop

    after_2:
    // 0x80334C14: b           L_80334D44
    // 0x80334C18: nop

        goto L_80334D44;
    // 0x80334C18: nop

L_80334C1C:
    // 0x80334C1C: jal         0x80331CB0
    // 0x80334C20: nop

    func_80331CB0_unk_bin_25(rdram, ctx);
        goto after_3;
    // 0x80334C20: nop

    after_3:
    // 0x80334C24: b           L_80334D44
    // 0x80334C28: nop

        goto L_80334D44;
    // 0x80334C28: nop

L_80334C2C:
    // 0x80334C2C: jal         0x80331EC0
    // 0x80334C30: nop

    func_80331EC0_unk_bin_25(rdram, ctx);
        goto after_4;
    // 0x80334C30: nop

    after_4:
    // 0x80334C34: b           L_80334D44
    // 0x80334C38: nop

        goto L_80334D44;
    // 0x80334C38: nop

L_80334C3C:
    // 0x80334C3C: jal         0x803321E8
    // 0x80334C40: nop

    func_803321E8_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80334C40: nop

    after_5:
    // 0x80334C44: b           L_80334D44
    // 0x80334C48: nop

        goto L_80334D44;
    // 0x80334C48: nop

L_80334C4C:
    // 0x80334C4C: jal         0x80332348
    // 0x80334C50: nop

    func_80332348_unk_bin_25(rdram, ctx);
        goto after_6;
    // 0x80334C50: nop

    after_6:
    // 0x80334C54: b           L_80334D44
    // 0x80334C58: nop

        goto L_80334D44;
    // 0x80334C58: nop

L_80334C5C:
    // 0x80334C5C: jal         0x80332460
    // 0x80334C60: nop

    func_80332460_unk_bin_25(rdram, ctx);
        goto after_7;
    // 0x80334C60: nop

    after_7:
    // 0x80334C64: b           L_80334D44
    // 0x80334C68: nop

        goto L_80334D44;
    // 0x80334C68: nop

L_80334C6C:
    // 0x80334C6C: jal         0x80332580
    // 0x80334C70: nop

    func_80332580_unk_bin_25(rdram, ctx);
        goto after_8;
    // 0x80334C70: nop

    after_8:
    // 0x80334C74: b           L_80334D44
    // 0x80334C78: nop

        goto L_80334D44;
    // 0x80334C78: nop

L_80334C7C:
    // 0x80334C7C: jal         0x803329C0
    // 0x80334C80: nop

    func_803329C0_unk_bin_25(rdram, ctx);
        goto after_9;
    // 0x80334C80: nop

    after_9:
    // 0x80334C84: b           L_80334D44
    // 0x80334C88: nop

        goto L_80334D44;
    // 0x80334C88: nop

L_80334C8C:
    // 0x80334C8C: jal         0x803330C4
    // 0x80334C90: nop

    func_803330C4_unk_bin_25(rdram, ctx);
        goto after_10;
    // 0x80334C90: nop

    after_10:
    // 0x80334C94: b           L_80334D44
    // 0x80334C98: nop

        goto L_80334D44;
    // 0x80334C98: nop

L_80334C9C:
    // 0x80334C9C: jal         0x80333248
    // 0x80334CA0: nop

    func_80333248_unk_bin_25(rdram, ctx);
        goto after_11;
    // 0x80334CA0: nop

    after_11:
    // 0x80334CA4: b           L_80334D44
    // 0x80334CA8: nop

        goto L_80334D44;
    // 0x80334CA8: nop

L_80334CAC:
    // 0x80334CAC: jal         0x80333664
    // 0x80334CB0: nop

    func_80333664_unk_bin_25(rdram, ctx);
        goto after_12;
    // 0x80334CB0: nop

    after_12:
    // 0x80334CB4: b           L_80334D44
    // 0x80334CB8: nop

        goto L_80334D44;
    // 0x80334CB8: nop

L_80334CBC:
    // 0x80334CBC: jal         0x803338D4
    // 0x80334CC0: nop

    func_803338D4_unk_bin_25(rdram, ctx);
        goto after_13;
    // 0x80334CC0: nop

    after_13:
    // 0x80334CC4: b           L_80334D44
    // 0x80334CC8: nop

        goto L_80334D44;
    // 0x80334CC8: nop

L_80334CCC:
    // 0x80334CCC: jal         0x80333D1C
    // 0x80334CD0: nop

    func_80333D1C_unk_bin_25(rdram, ctx);
        goto after_14;
    // 0x80334CD0: nop

    after_14:
    // 0x80334CD4: b           L_80334D44
    // 0x80334CD8: nop

        goto L_80334D44;
    // 0x80334CD8: nop

L_80334CDC:
    // 0x80334CDC: jal         0x80333FF0
    // 0x80334CE0: nop

    func_80333FF0_unk_bin_25(rdram, ctx);
        goto after_15;
    // 0x80334CE0: nop

    after_15:
    // 0x80334CE4: b           L_80334D44
    // 0x80334CE8: nop

        goto L_80334D44;
    // 0x80334CE8: nop

L_80334CEC:
    // 0x80334CEC: jal         0x80334248
    // 0x80334CF0: nop

    func_80334248_unk_bin_25(rdram, ctx);
        goto after_16;
    // 0x80334CF0: nop

    after_16:
    // 0x80334CF4: b           L_80334D44
    // 0x80334CF8: nop

        goto L_80334D44;
    // 0x80334CF8: nop

L_80334CFC:
    // 0x80334CFC: jal         0x803343FC
    // 0x80334D00: nop

    func_803343FC_unk_bin_25(rdram, ctx);
        goto after_17;
    // 0x80334D00: nop

    after_17:
    // 0x80334D04: b           L_80334D44
    // 0x80334D08: nop

        goto L_80334D44;
    // 0x80334D08: nop

L_80334D0C:
    // 0x80334D0C: jal         0x803345AC
    // 0x80334D10: nop

    func_803345AC_unk_bin_25(rdram, ctx);
        goto after_18;
    // 0x80334D10: nop

    after_18:
    // 0x80334D14: b           L_80334D44
    // 0x80334D18: nop

        goto L_80334D44;
    // 0x80334D18: nop

L_80334D1C:
    // 0x80334D1C: jal         0x80334750
    // 0x80334D20: nop

    func_80334750_unk_bin_25(rdram, ctx);
        goto after_19;
    // 0x80334D20: nop

    after_19:
    // 0x80334D24: b           L_80334D44
    // 0x80334D28: nop

        goto L_80334D44;
    // 0x80334D28: nop

L_80334D2C:
    // 0x80334D2C: jal         0x803349DC
    // 0x80334D30: nop

    func_803349DC_unk_bin_25(rdram, ctx);
        goto after_20;
    // 0x80334D30: nop

    after_20:
    // 0x80334D34: b           L_80334D44
    // 0x80334D38: nop

        goto L_80334D44;
    // 0x80334D38: nop

L_80334D3C:
    // 0x80334D3C: b           L_80334D44
    // 0x80334D40: nop

        goto L_80334D44;
    // 0x80334D40: nop

L_80334D44:
    // 0x80334D44: b           L_80334D4C
    // 0x80334D48: nop

        goto L_80334D4C;
    // 0x80334D48: nop

L_80334D4C:
    // 0x80334D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334D50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334D54: jr          $ra
    // 0x80334D58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334D58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80332DE8_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332DE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332DEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332DF0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80332DF4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332DF8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332DFC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80332E00: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80332E04: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80332E08: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80332E0C: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80332E10: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332E14: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80332E18: addiu       $a1, $a1, 0x4570
    ctx->r5 = ADD32(ctx->r5, 0X4570);
    // 0x80332E1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332E20: jal         0x80027464
    // 0x80332E24: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80332E24: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80332E28: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x80332E2C: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x80332E30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332E34: beq         $t7, $at, L_80332FA4
    if (ctx->r15 == ctx->r1) {
        // 0x80332E38: nop
    
            goto L_80332FA4;
    }
    // 0x80332E38: nop

    // 0x80332E3C: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x80332E40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E44: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332E48: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332E4C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332E50: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332E54: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332E58: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332E5C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80332E60: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80332E64: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x80332E68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E6C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332E70: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332E74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332E78: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332E7C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332E80: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332E84: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x80332E88: sh          $t1, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r9;
    // 0x80332E8C: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80332E90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E94: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332E98: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332E9C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332EA0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332EA4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332EA8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332EAC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80332EB0: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80332EB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332EB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332EBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332EC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332EC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332EC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332ECC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332ED0: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x80332ED4: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x80332ED8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332EDC: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80332EE0: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80332EE4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332EE8: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80332EEC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332EF0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332EF4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80332EF8: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x80332EFC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332F00: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80332F04: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80332F08: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332F0C: lwc1        $f8, 0x34DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X34DC);
    // 0x80332F10: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80332F14: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332F18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F1C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332F20: swc1        $f8, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f8.u32l;
    // 0x80332F24: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80332F28: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80332F2C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332F30: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332F34: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332F38: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332F3C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332F40: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80332F44: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80332F48: lwc1        $f20, 0xC($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0XC);
    // 0x80332F4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F50: swc1        $f20, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f20.u32l;
    // 0x80332F54: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80332F58: nop

    // 0x80332F5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332F60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332F68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332F70: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332F74: swc1        $f20, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f20.u32l;
    // 0x80332F78: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x80332F7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80332F80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332F84: jal         0x80019448
    // 0x80332F88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80332F88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80332F8C: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x80332F90: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80332F94: addiu       $a3, $a3, 0x7C94
    ctx->r7 = ADD32(ctx->r7, 0X7C94);
    // 0x80332F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332F9C: jal         0x8001ABF4
    // 0x80332FA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80332FA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80332FA4:
    // 0x80332FA4: b           L_80332FAC
    // 0x80332FA8: nop

        goto L_80332FAC;
    // 0x80332FA8: nop

L_80332FAC:
    // 0x80332FAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332FB0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80332FB4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332FB8: jr          $ra
    // 0x80332FBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80332FBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330928_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033092C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330930: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80330934: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330938: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033093C: jal         0x8002B0E4
    // 0x80330940: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80330940: nop

    after_0:
    // 0x80330944: b           L_8033094C
    // 0x80330948: nop

        goto L_8033094C;
    // 0x80330948: nop

L_8033094C:
    // 0x8033094C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80330954: jr          $ra
    // 0x80330958: nop

    return;
    // 0x80330958: nop

;}
RECOMP_FUNC void func_80332308_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332308: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033230C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332310: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332314: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80332318: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033231C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332320: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332324: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332328: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033232C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332330: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332334: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332338: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033233C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332340: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332344: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332348: nop

    // 0x8033234C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332350: nop

    // 0x80332354: bne         $t1, $zero, L_803323A8
    if (ctx->r9 != 0) {
        // 0x80332358: nop
    
            goto L_803323A8;
    }
    // 0x80332358: nop

    // 0x8033235C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332360: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80332364: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80332368: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033236C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332370: nop

    // 0x80332374: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x80332378: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033237C: nop

    // 0x80332380: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80332384: nop

    // 0x80332388: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x8033238C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332390: nop

    // 0x80332394: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x80332398: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033239C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323A0: jal         0x8001BBDC
    // 0x803323A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x803323A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_803323A8:
    // 0x803323A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323B0: jal         0x8002A1FC
    // 0x803323B4: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x803323B4: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_1:
    // 0x803323B8: beq         $v0, $zero, L_803323D8
    if (ctx->r2 == 0) {
        // 0x803323BC: nop
    
            goto L_803323D8;
    }
    // 0x803323BC: nop

    // 0x803323C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803323C4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803323C8: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803323CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803323D0: nop

    // 0x803323D4: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803323D8:
    // 0x803323D8: b           L_803323E0
    // 0x803323DC: nop

        goto L_803323E0;
    // 0x803323DC: nop

L_803323E0:
    // 0x803323E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803323E4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803323E8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803323EC: jr          $ra
    // 0x803323F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803323F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803322B8_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803322B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803322BC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x803322C0: nop

    // 0x803322C4: bne         $t6, $zero, L_803322F8
    if (ctx->r14 != 0) {
        // 0x803322C8: nop
    
            goto L_803322F8;
    }
    // 0x803322C8: nop

    // 0x803322CC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803322D0: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x803322D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803322DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803322E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803322E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803322E8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803322EC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803322F0: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x803322F4: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_803322F8:
    // 0x803322F8: jr          $ra
    // 0x803322FC: nop

    return;
    // 0x803322FC: nop

    // 0x80332300: jr          $ra
    // 0x80332304: nop

    return;
    // 0x80332304: nop

;}
RECOMP_FUNC void func_803303A4_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803303A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803303A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803303AC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803303B0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x803303B4: nop

    // 0x803303B8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803303BC: nop

    // 0x803303C0: bne         $t7, $zero, L_80330450
    if (ctx->r15 != 0) {
        // 0x803303C4: nop
    
            goto L_80330450;
    }
    // 0x803303C4: nop

    // 0x803303C8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x803303CC: nop

    // 0x803303D0: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x803303D4: nop

    // 0x803303D8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803303DC: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x803303E0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x803303E4: nop

    // 0x803303E8: sh          $zero, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = 0;
    // 0x803303EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803303F0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x803303F4: nop

    // 0x803303F8: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x803303FC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80330400: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330404: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80330408: nop

    // 0x8033040C: swc1        $f6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f6.u32l;
    // 0x80330410: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80330414: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330418: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8033041C: nop

    // 0x80330420: swc1        $f8, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f8.u32l;
    // 0x80330424: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330428: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033042C: jal         0x8001BB04
    // 0x80330430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_0;
    // 0x80330430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80330434: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330438: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033043C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330440: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x80330444: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330448: jal         0x800175F0
    // 0x8033044C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033044C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80330450:
    // 0x80330450: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330454: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330458: jal         0x80029C40
    // 0x8033045C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x8033045C: nop

    after_2:
    // 0x80330460: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330464: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330468: jal         0x80029D04
    // 0x8033046C: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x8033046C: nop

    after_3:
    // 0x80330470: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330474: jal         0x80330118
    // 0x80330478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80330118_unk_bin_35(rdram, ctx);
        goto after_4;
    // 0x80330478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033047C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330480: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330484: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330488: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033048C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80330490: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80330494: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330498: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033049C: jal         0x800295C0
    // 0x803304A0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x803304A0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x803304A4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803304A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803304AC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x803304B0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803304B4: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803304B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803304BC: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x803304C0: nop

    // 0x803304C4: bc1f        L_803304F4
    if (!c1cs) {
        // 0x803304C8: nop
    
            goto L_803304F4;
    }
    // 0x803304C8: nop

    // 0x803304CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803304D0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x803304D4: nop

    // 0x803304D8: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
    // 0x803304DC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x803304E0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803304E4: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x803304E8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x803304EC: nop

    // 0x803304F0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803304F4:
    // 0x803304F4: b           L_803304FC
    // 0x803304F8: nop

        goto L_803304FC;
    // 0x803304F8: nop

L_803304FC:
    // 0x803304FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330500: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330504: jr          $ra
    // 0x80330508: nop

    return;
    // 0x80330508: nop

;}
RECOMP_FUNC void func_80331CEC_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331CEC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80331CF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331CF4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331CF8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331CFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331D04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331D0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331D14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331D1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331D20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331D24: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80331D28: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331D2C: nop

    // 0x80331D30: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331D34: nop

    // 0x80331D38: bne         $t1, $zero, L_80331DE4
    if (ctx->r9 != 0) {
        // 0x80331D3C: nop
    
            goto L_80331DE4;
    }
    // 0x80331D3C: nop

    // 0x80331D40: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80331D44: nop

    // 0x80331D48: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331D4C: nop

    // 0x80331D50: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331D54: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331D58: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80331D5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331D60: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331D64: nop

    // 0x80331D68: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80331D6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D74: jal         0x8002A46C
    // 0x80331D78: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x80331D78: nop

    after_0:
    // 0x80331D7C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80331D80: nop

    // 0x80331D84: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80331D88: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80331D8C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80331D90: nop

    // 0x80331D94: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80331D98: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80331D9C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80331DA0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80331DA4: nop

    // 0x80331DA8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80331DAC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80331DB0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80331DB4: nop

    // 0x80331DB8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331DBC: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
    // 0x80331DC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DC4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80331DC8: addiu       $t0, $t0, -0x751C
    ctx->r8 = ADD32(ctx->r8, -0X751C);
    // 0x80331DCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DD0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80331DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331DD8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80331DDC: jal         0x8001C0EC
    // 0x80331DE0: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80331DE0: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_1:
L_80331DE4:
    // 0x80331DE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DEC: jal         0x80028FA0
    // 0x80331DF0: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x80331DF0: nop

    after_2:
    // 0x80331DF4: beq         $v0, $zero, L_80331E0C
    if (ctx->r2 == 0) {
        // 0x80331DF8: nop
    
            goto L_80331E0C;
    }
    // 0x80331DF8: nop

    // 0x80331DFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E04: jal         0x80029B60
    // 0x80331E08: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x80331E08: nop

    after_3:
L_80331E0C:
    // 0x80331E0C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331E10: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80331E14: nop

    // 0x80331E18: swc1        $f16, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f16.u32l;
    // 0x80331E1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E24: jal         0x80029C40
    // 0x80331E28: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80331E28: nop

    after_4:
    // 0x80331E2C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331E30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331E34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331E40: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80331E44: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331E48: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80331E4C: jal         0x80029018
    // 0x80331E50: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80331E50: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80331E54: beq         $v0, $zero, L_80331EB8
    if (ctx->r2 == 0) {
        // 0x80331E58: nop
    
            goto L_80331EB8;
    }
    // 0x80331E58: nop

    // 0x80331E5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331E60: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331E64: nop

    // 0x80331E68: swc1        $f6, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f6.u32l;
    // 0x80331E6C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80331E70: nop

    // 0x80331E74: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80331E78: nop

    // 0x80331E7C: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x80331E80: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80331E84: nop

    // 0x80331E88: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x80331E8C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331E90: nop

    // 0x80331E94: lwc1        $f8, 0x3C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80331E98: nop

    // 0x80331E9C: swc1        $f8, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f8.u32l;
    // 0x80331EA0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80331EA4: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80331EA8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80331EAC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80331EB0: nop

    // 0x80331EB4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80331EB8:
    // 0x80331EB8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331EBC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331EC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EC8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80331ECC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80331ED0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331ED4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331ED8: jal         0x800295C0
    // 0x80331EDC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x80331EDC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x80331EE0: beq         $v0, $zero, L_80331EF8
    if (ctx->r2 == 0) {
        // 0x80331EE4: nop
    
            goto L_80331EF8;
    }
    // 0x80331EE4: nop

    // 0x80331EE8: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80331EEC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80331EF0: b           L_80331F08
    // 0x80331EF4: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
        goto L_80331F08;
    // 0x80331EF4: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
L_80331EF8:
    // 0x80331EF8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80331EFC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331F00: nop

    // 0x80331F04: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
L_80331F08:
    // 0x80331F08: b           L_80331F10
    // 0x80331F0C: nop

        goto L_80331F10;
    // 0x80331F0C: nop

L_80331F10:
    // 0x80331F10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331F14: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331F18: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331F1C: jr          $ra
    // 0x80331F20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80331F20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803305F0_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803305F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803305F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803305F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803305FC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80330600: nop

    // 0x80330604: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80330608: nop

    // 0x8033060C: bne         $t7, $zero, L_8033064C
    if (ctx->r15 != 0) {
        // 0x80330610: nop
    
            goto L_8033064C;
    }
    // 0x80330610: nop

    // 0x80330614: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80330618: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033061C: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x80330620: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330624: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80330628: nop

    // 0x8033062C: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x80330630: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330634: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330638: jal         0x8002A46C
    // 0x8033063C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x8033063C: nop

    after_0:
    // 0x80330640: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330644: nop

    // 0x80330648: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
L_8033064C:
    // 0x8033064C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330650: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330654: jal         0x80028FA0
    // 0x80330658: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80330658: nop

    after_1:
    // 0x8033065C: beq         $v0, $zero, L_80330674
    if (ctx->r2 == 0) {
        // 0x80330660: nop
    
            goto L_80330674;
    }
    // 0x80330660: nop

    // 0x80330664: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033066C: jal         0x80029B60
    // 0x80330670: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x80330670: nop

    after_2:
L_80330674:
    // 0x80330674: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80330678: jal         0x80330118
    // 0x8033067C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80330118_unk_bin_35(rdram, ctx);
        goto after_3;
    // 0x8033067C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80330680: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330684: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330688: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033068C: lwc1        $f6, 0x44($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80330690: nop

    // 0x80330694: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80330698: nop

    // 0x8033069C: bc1f        L_803306C8
    if (!c1cs) {
        // 0x803306A0: nop
    
            goto L_803306C8;
    }
    // 0x803306A0: nop

    // 0x803306A4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x803306A8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x803306AC: lwc1        $f10, 0x44($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X44);
    // 0x803306B0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x803306B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803306B8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803306BC: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x803306C0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x803306C4: swc1        $f6, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f6.u32l;
L_803306C8:
    // 0x803306C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803306CC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803306D0: nop

    // 0x803306D4: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
    // 0x803306D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803306DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803306E0: jal         0x80029C40
    // 0x803306E4: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x803306E4: nop

    after_4:
    // 0x803306E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803306EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803306F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803306F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803306F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803306FC: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80330700: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330704: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330708: jal         0x80029018
    // 0x8033070C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x8033070C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80330710: beq         $v0, $zero, L_80330734
    if (ctx->r2 == 0) {
        // 0x80330714: nop
    
            goto L_80330734;
    }
    // 0x80330714: nop

    // 0x80330718: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033071C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330720: jal         0x8002A46C
    // 0x80330724: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_6;
    // 0x80330724: nop

    after_6:
    // 0x80330728: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8033072C: nop

    // 0x80330730: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
L_80330734:
    // 0x80330734: b           L_8033073C
    // 0x80330738: nop

        goto L_8033073C;
    // 0x80330738: nop

L_8033073C:
    // 0x8033073C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330740: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330744: jr          $ra
    // 0x80330748: nop

    return;
    // 0x80330748: nop

;}
RECOMP_FUNC void func_803320F4_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803320F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803320F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803320FC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332100: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332104: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80332108: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033210C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80332110: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80332114: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80332118: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033211C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80332120: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332124: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80332128: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033212C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332130: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80332134: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332138: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033213C: addiu       $a1, $a1, 0x4558
    ctx->r5 = ADD32(ctx->r5, 0X4558);
    // 0x80332140: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332144: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80332148: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8033214C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332150: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80332154: jal         0x80027464
    // 0x80332158: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80332158: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033215C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80332160: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332164: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332168: beq         $t1, $at, L_8033229C
    if (ctx->r9 == ctx->r1) {
        // 0x8033216C: nop
    
            goto L_8033229C;
    }
    // 0x8033216C: nop

    // 0x80332170: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332174: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332178: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033217C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332180: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332184: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332188: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033218C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332190: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332194: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332198: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033219C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803321A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803321A4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803321A8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803321AC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803321B0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803321B4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803321B8: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x803321BC: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x803321C0: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x803321C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803321C8: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x803321CC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803321D0: nop

    // 0x803321D4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803321D8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803321DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803321E0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803321E4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803321E8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803321EC: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x803321F0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803321F4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803321F8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803321FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332200: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332204: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332208: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033220C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332210: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80332214: nop

    // 0x80332218: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x8033221C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80332220: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80332224: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332228: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033222C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332230: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332234: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80332238: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033223C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332240: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332244: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332248: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033224C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332250: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332254: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332258: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033225C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332260: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332264: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332268: swc1        $f6, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f6.u32l;
    // 0x8033226C: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x80332270: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332274: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x80332278: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8033227C: nop

    // 0x80332280: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80332284: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80332288: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033228C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80332290: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332294: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332298: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_8033229C:
    // 0x8033229C: b           L_803322A4
    // 0x803322A0: nop

        goto L_803322A4;
    // 0x803322A0: nop

L_803322A4:
    // 0x803322A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803322A8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803322AC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803322B0: jr          $ra
    // 0x803322B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803322B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803302BC_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803302C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803302C4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803302C8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803302CC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803302D0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x803302D4: nop

    // 0x803302D8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803302DC: nop

    // 0x803302E0: bne         $t7, $zero, L_80330358
    if (ctx->r15 != 0) {
        // 0x803302E4: nop
    
            goto L_80330358;
    }
    // 0x803302E4: nop

    // 0x803302E8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x803302EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803302F0: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x803302F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803302F8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x803302FC: nop

    // 0x80330300: swc1        $f4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f4.u32l;
    // 0x80330304: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80330308: nop

    // 0x8033030C: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80330310: nop

    // 0x80330314: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x80330318: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8033031C: nop

    // 0x80330320: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x80330324: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330328: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8033032C: addiu       $t3, $t3, -0x7534
    ctx->r11 = ADD32(ctx->r11, -0X7534);
    // 0x80330330: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330334: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80330338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033033C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330340: jal         0x8001C0EC
    // 0x80330344: addiu       $a3, $zero, 0x6F
    ctx->r7 = ADD32(0, 0X6F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330344: addiu       $a3, $zero, 0x6F
    ctx->r7 = ADD32(0, 0X6F);
    after_0:
    // 0x80330348: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033034C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330350: jal         0x8001BB04
    // 0x80330354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x80330354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_80330358:
    // 0x80330358: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033035C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330360: jal         0x8002A1FC
    // 0x80330364: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x80330364: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    after_2:
    // 0x80330368: beq         $v0, $zero, L_80330388
    if (ctx->r2 == 0) {
        // 0x8033036C: nop
    
            goto L_80330388;
    }
    // 0x8033036C: nop

    // 0x80330370: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80330374: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80330378: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8033037C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80330380: nop

    // 0x80330384: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80330388:
    // 0x80330388: b           L_80330390
    // 0x8033038C: nop

        goto L_80330390;
    // 0x8033038C: nop

L_80330390:
    // 0x80330390: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330394: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330398: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033039C: jr          $ra
    // 0x803303A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803303A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033115C_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033115C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331160: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331164: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331168: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033116C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331170: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331174: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331178: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033117C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331180: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331184: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331188: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033118C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331190: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331194: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331198: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033119C: nop

    // 0x803311A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803311A4: nop

    // 0x803311A8: bne         $t1, $zero, L_803311FC
    if (ctx->r9 != 0) {
        // 0x803311AC: nop
    
            goto L_803311FC;
    }
    // 0x803311AC: nop

    // 0x803311B0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803311B4: nop

    // 0x803311B8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803311BC: nop

    // 0x803311C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803311C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803311C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311CC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x803311D0: addiu       $t5, $t5, -0x7530
    ctx->r13 = ADD32(ctx->r13, -0X7530);
    // 0x803311D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311D8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803311DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803311E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803311E4: jal         0x8001C0EC
    // 0x803311E8: addiu       $a3, $zero, 0x8B
    ctx->r7 = ADD32(0, 0X8B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803311E8: addiu       $a3, $zero, 0x8B
    ctx->r7 = ADD32(0, 0X8B);
    after_0:
    // 0x803311EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311F4: jal         0x8001B754
    // 0x803311F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x803311F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803311FC:
    // 0x803311FC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331200: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331204: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x80331208: lwc1        $f9, 0x3480($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3480);
    // 0x8033120C: lwc1        $f8, 0x3484($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3484);
    // 0x80331210: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331214: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80331218: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8033121C: swc1        $f16, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f16.u32l;
    // 0x80331220: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331224: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331228: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033122C: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80331230: nop

    // 0x80331234: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80331238: nop

    // 0x8033123C: bc1f        L_80331258
    if (!c1cs) {
        // 0x80331240: nop
    
            goto L_80331258;
    }
    // 0x80331240: nop

    // 0x80331244: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331248: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033124C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331250: nop

    // 0x80331254: swc1        $f6, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f6.u32l;
L_80331258:
    // 0x80331258: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033125C: nop

    // 0x80331260: lwc1        $f20, 0xC($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80331264: nop

    // 0x80331268: swc1        $f20, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f20.u32l;
    // 0x8033126C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331270: nop

    // 0x80331274: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
    // 0x80331278: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033127C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331280: jal         0x8001B44C
    // 0x80331284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80331284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331288: beq         $v0, $zero, L_803312CC
    if (ctx->r2 == 0) {
        // 0x8033128C: nop
    
            goto L_803312CC;
    }
    // 0x8033128C: nop

    // 0x80331290: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331294: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331298: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033129C: lwc1        $f8, 0xC($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0XC);
    // 0x803312A0: nop

    // 0x803312A4: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x803312A8: nop

    // 0x803312AC: bc1f        L_803312CC
    if (!c1cs) {
        // 0x803312B0: nop
    
            goto L_803312CC;
    }
    // 0x803312B0: nop

    // 0x803312B4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803312B8: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x803312BC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803312C0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803312C4: nop

    // 0x803312C8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803312CC:
    // 0x803312CC: b           L_803312D4
    // 0x803312D0: nop

        goto L_803312D4;
    // 0x803312D0: nop

L_803312D4:
    // 0x803312D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803312D8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803312DC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803312E0: jr          $ra
    // 0x803312E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803312E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033339C_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033339C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803333A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803333A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803333A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803333AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803333B0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x803333B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803333B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803333BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803333C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803333C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803333C8: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x803333CC: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x803333D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803333D4: beq         $s0, $at, L_803333FC
    if (ctx->r16 == ctx->r1) {
        // 0x803333D8: nop
    
            goto L_803333FC;
    }
    // 0x803333D8: nop

    // 0x803333DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803333E0: beq         $s0, $at, L_8033340C
    if (ctx->r16 == ctx->r1) {
        // 0x803333E4: nop
    
            goto L_8033340C;
    }
    // 0x803333E4: nop

    // 0x803333E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803333EC: beq         $s0, $at, L_8033341C
    if (ctx->r16 == ctx->r1) {
        // 0x803333F0: nop
    
            goto L_8033341C;
    }
    // 0x803333F0: nop

    // 0x803333F4: b           L_8033342C
    // 0x803333F8: nop

        goto L_8033342C;
    // 0x803333F8: nop

L_803333FC:
    // 0x803333FC: jal         0x8033304C
    // 0x80333400: nop

    func_8033304C_unk_bin_35(rdram, ctx);
        goto after_0;
    // 0x80333400: nop

    after_0:
    // 0x80333404: b           L_8033342C
    // 0x80333408: nop

        goto L_8033342C;
    // 0x80333408: nop

L_8033340C:
    // 0x8033340C: jal         0x80333140
    // 0x80333410: nop

    func_80333140_unk_bin_35(rdram, ctx);
        goto after_1;
    // 0x80333410: nop

    after_1:
    // 0x80333414: b           L_8033342C
    // 0x80333418: nop

        goto L_8033342C;
    // 0x80333418: nop

L_8033341C:
    // 0x8033341C: jal         0x80333318
    // 0x80333420: nop

    func_80333318_unk_bin_35(rdram, ctx);
        goto after_2;
    // 0x80333420: nop

    after_2:
    // 0x80333424: b           L_8033342C
    // 0x80333428: nop

        goto L_8033342C;
    // 0x80333428: nop

L_8033342C:
    // 0x8033342C: b           L_80333434
    // 0x80333430: nop

        goto L_80333434;
    // 0x80333430: nop

L_80333434:
    // 0x80333434: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333438: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033343C: jr          $ra
    // 0x80333440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80333440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80333140_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333144: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333148: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033314C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80333150: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333154: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333158: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033315C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333160: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333164: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333168: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033316C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333170: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333174: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333178: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033317C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333180: nop

    // 0x80333184: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333188: nop

    // 0x8033318C: bne         $t1, $zero, L_80333204
    if (ctx->r9 != 0) {
        // 0x80333190: nop
    
            goto L_80333204;
    }
    // 0x80333190: nop

    // 0x80333194: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333198: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033319C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803331A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803331A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803331A8: nop

    // 0x803331AC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803331B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803331B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803331B8: nop

    // 0x803331BC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803331C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803331C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803331C8: jal         0x8001BB34
    // 0x803331CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803331CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803331D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803331D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803331D8: jal         0x8001BB04
    // 0x803331DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x803331DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803331E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803331E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803331E8: lh          $t8, 0xE4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE4);
    // 0x803331EC: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x803331F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803331F4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803331F8: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x803331FC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333200: sb          $t6, 0x4D90($at)
    MEM_B(0X4D90, ctx->r1) = ctx->r14;
L_80333204:
    // 0x80333204: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333208: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033320C: jal         0x80029C40
    // 0x80333210: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80333210: nop

    after_2:
    // 0x80333214: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033321C: jal         0x80029D04
    // 0x80333220: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80333220: nop

    after_3:
    // 0x80333224: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333228: nop

    // 0x8033322C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80333230: nop

    // 0x80333234: bgtz        $t1, L_803332E4
    if (SIGNED(ctx->r9) > 0) {
        // 0x80333238: nop
    
            goto L_803332E4;
    }
    // 0x80333238: nop

    // 0x8033323C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333240: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333244: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333248: nop

    // 0x8033324C: bne         $t3, $at, L_8033327C
    if (ctx->r11 != ctx->r1) {
        // 0x80333250: nop
    
            goto L_8033327C;
    }
    // 0x80333250: nop

    // 0x80333254: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333258: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8033325C: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x80333260: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333264: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80333268: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x8033326C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333270: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333274: jal         0x8001BB34
    // 0x80333278: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80333278: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_8033327C:
    // 0x8033327C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333280: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80333284: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333288: lwc1        $f8, 0xC($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XC);
    // 0x8033328C: nop

    // 0x80333290: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80333294: nop

    // 0x80333298: bc1f        L_803332DC
    if (!c1cs) {
        // 0x8033329C: nop
    
            goto L_803332DC;
    }
    // 0x8033329C: nop

    // 0x803332A0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803332A4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803332A8: lwc1        $f18, 0x34E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X34E0);
    // 0x803332AC: lwc1        $f16, 0xC($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0XC);
    // 0x803332B0: nop

    // 0x803332B4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803332B8: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
    // 0x803332BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803332C0: nop

    // 0x803332C4: lwc1        $f20, 0xC($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0XC);
    // 0x803332C8: nop

    // 0x803332CC: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
    // 0x803332D0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803332D4: nop

    // 0x803332D8: swc1        $f20, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f20.u32l;
L_803332DC:
    // 0x803332DC: b           L_803332FC
    // 0x803332E0: nop

        goto L_803332FC;
    // 0x803332E0: nop

L_803332E4:
    // 0x803332E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803332E8: nop

    // 0x803332EC: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x803332F0: nop

    // 0x803332F4: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x803332F8: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_803332FC:
    // 0x803332FC: b           L_80333304
    // 0x80333300: nop

        goto L_80333304;
    // 0x80333300: nop

L_80333304:
    // 0x80333304: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333308: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8033330C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80333310: jr          $ra
    // 0x80333314: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80333314: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80331BE0_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331BE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331BE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331BE8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331BEC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331BF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331BF4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331BF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331BFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331C00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331C08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331C10: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331C14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331C18: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331C1C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C20: nop

    // 0x80331C24: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331C28: nop

    // 0x80331C2C: bne         $t1, $zero, L_80331CA0
    if (ctx->r9 != 0) {
        // 0x80331C30: nop
    
            goto L_80331CA0;
    }
    // 0x80331C30: nop

    // 0x80331C34: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C38: nop

    // 0x80331C3C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331C40: nop

    // 0x80331C44: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331C48: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331C4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331C50: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C54: nop

    // 0x80331C58: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80331C5C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C60: nop

    // 0x80331C64: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80331C68: nop

    // 0x80331C6C: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80331C70: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C74: nop

    // 0x80331C78: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x80331C7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C80: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80331C84: addiu       $t8, $t8, -0x751C
    ctx->r24 = ADD32(ctx->r24, -0X751C);
    // 0x80331C88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C8C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80331C90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331C94: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80331C98: jal         0x8001C0EC
    // 0x80331C9C: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331C9C: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_0:
L_80331CA0:
    // 0x80331CA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331CA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331CA8: jal         0x8001B4AC
    // 0x80331CAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331CAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331CB0: beq         $v0, $zero, L_80331CD0
    if (ctx->r2 == 0) {
        // 0x80331CB4: nop
    
            goto L_80331CD0;
    }
    // 0x80331CB4: nop

    // 0x80331CB8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331CBC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80331CC0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331CC4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331CC8: nop

    // 0x80331CCC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331CD0:
    // 0x80331CD0: b           L_80331CD8
    // 0x80331CD4: nop

        goto L_80331CD8;
    // 0x80331CD4: nop

L_80331CD8:
    // 0x80331CD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331CDC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331CE0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331CE4: jr          $ra
    // 0x80331CE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80331CE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330A64_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330A64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330A68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330A6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330A70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330A74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330A78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330A7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330A84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330A8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330A90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330A94: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330A98: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80330A9C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330AA0: nop

    // 0x80330AA4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330AA8: nop

    // 0x80330AAC: bne         $t1, $zero, L_80330B10
    if (ctx->r9 != 0) {
        // 0x80330AB0: nop
    
            goto L_80330B10;
    }
    // 0x80330AB0: nop

    // 0x80330AB4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330AB8: nop

    // 0x80330ABC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330AC0: nop

    // 0x80330AC4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330AC8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330ACC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330AD0: nop

    // 0x80330AD4: lwc1        $f4, 0x1C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80330AD8: nop

    // 0x80330ADC: swc1        $f4, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f4.u32l;
    // 0x80330AE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330AE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330AE8: nop

    // 0x80330AEC: swc1        $f6, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f6.u32l;
    // 0x80330AF0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80330AF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330AF8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330AFC: nop

    // 0x80330B00: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
    // 0x80330B04: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330B08: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x80330B0C: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_80330B10:
    // 0x80330B10: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330B14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80330B18: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330B1C: lwc1        $f12, 0x20($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X20);
    // 0x80330B20: jal         0x80015538
    // 0x80330B24: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80330B24: nop

    after_0:
    // 0x80330B28: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330B2C: nop

    // 0x80330B30: swc1        $f0, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f0.u32l;
    // 0x80330B34: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330B38: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330B3C: lwc1        $f10, 0xC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XC);
    // 0x80330B40: lwc1        $f19, 0x3468($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X3468);
    // 0x80330B44: lwc1        $f18, 0x346C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X346C);
    // 0x80330B48: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80330B4C: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80330B50: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80330B54: swc1        $f6, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f6.u32l;
    // 0x80330B58: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330B5C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330B60: lwc1        $f8, 0x10($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X10);
    // 0x80330B64: lwc1        $f17, 0x3470($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3470);
    // 0x80330B68: lwc1        $f16, 0x3474($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3474);
    // 0x80330B6C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80330B70: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80330B74: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80330B78: swc1        $f4, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f4.u32l;
    // 0x80330B7C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330B80: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330B84: lwc1        $f6, 0x14($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X14);
    // 0x80330B88: lwc1        $f11, 0x3478($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3478);
    // 0x80330B8C: lwc1        $f10, 0x347C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X347C);
    // 0x80330B90: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80330B94: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80330B98: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80330B9C: swc1        $f18, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f18.u32l;
    // 0x80330BA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BA8: jal         0x80029D8C
    // 0x80330BAC: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x80330BAC: nop

    after_1:
    // 0x80330BB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330BB4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330BB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330BC4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80330BC8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330BCC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330BD0: jal         0x80029018
    // 0x80330BD4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x80330BD4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80330BD8: beq         $v0, $zero, L_80330BE8
    if (ctx->r2 == 0) {
        // 0x80330BDC: nop
    
            goto L_80330BE8;
    }
    // 0x80330BDC: nop

    // 0x80330BE0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80330BE4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
L_80330BE8:
    // 0x80330BE8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330BEC: nop

    // 0x80330BF0: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80330BF4: nop

    // 0x80330BF8: bne         $t7, $zero, L_80330C0C
    if (ctx->r15 != 0) {
        // 0x80330BFC: nop
    
            goto L_80330C0C;
    }
    // 0x80330BFC: nop

    // 0x80330C00: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80330C04: b           L_80330C24
    // 0x80330C08: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
        goto L_80330C24;
    // 0x80330C08: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
L_80330C0C:
    // 0x80330C0C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330C10: nop

    // 0x80330C14: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80330C18: nop

    // 0x80330C1C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80330C20: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_80330C24:
    // 0x80330C24: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80330C28: nop

    // 0x80330C2C: beq         $t3, $zero, L_80330C4C
    if (ctx->r11 == 0) {
        // 0x80330C30: nop
    
            goto L_80330C4C;
    }
    // 0x80330C30: nop

    // 0x80330C34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C3C: jal         0x8002B0E4
    // 0x80330C40: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x80330C40: nop

    after_3:
    // 0x80330C44: b           L_80330C54
    // 0x80330C48: nop

        goto L_80330C54;
    // 0x80330C48: nop

L_80330C4C:
    // 0x80330C4C: b           L_80330C54
    // 0x80330C50: nop

        goto L_80330C54;
    // 0x80330C50: nop

L_80330C54:
    // 0x80330C54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330C5C: jr          $ra
    // 0x80330C60: nop

    return;
    // 0x80330C60: nop

;}
RECOMP_FUNC void func_8033095C_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033095C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330964: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330968: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033096C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330970: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330974: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330978: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033097C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330980: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330984: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330988: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033098C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330990: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330994: nop

    // 0x80330998: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033099C: nop

    // 0x803309A0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803309A4: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x803309A8: beq         $at, $zero, L_80330A44
    if (ctx->r1 == 0) {
        // 0x803309AC: nop
    
            goto L_80330A44;
    }
    // 0x803309AC: nop

    // 0x803309B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803309B4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803309B8: addu        $at, $at, $t2
    gpr jr_addend_803309C4 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803309BC: lw          $t2, 0x3450($at)
    ctx->r10 = ADD32(ctx->r1, 0X3450);
    // 0x803309C0: nop

    // 0x803309C4: jr          $t2
    // 0x803309C8: nop

    switch (jr_addend_803309C4 >> 2) {
        case 0: goto L_803309CC; break;
        case 1: goto L_803309E0; break;
        case 2: goto L_803309F4; break;
        case 3: goto L_80330A08; break;
        case 4: goto L_80330A1C; break;
        case 5: goto L_80330A30; break;
        default: switch_error(__func__, 0x803309C4, 0x80333450);
    }
    // 0x803309C8: nop

L_803309CC:
    // 0x803309CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803309D0: jal         0x803302BC
    // 0x803309D4: nop

    func_803302BC_unk_bin_35(rdram, ctx);
        goto after_0;
    // 0x803309D4: nop

    after_0:
    // 0x803309D8: b           L_80330A4C
    // 0x803309DC: nop

        goto L_80330A4C;
    // 0x803309DC: nop

L_803309E0:
    // 0x803309E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803309E4: jal         0x803303A4
    // 0x803309E8: nop

    func_803303A4_unk_bin_35(rdram, ctx);
        goto after_1;
    // 0x803309E8: nop

    after_1:
    // 0x803309EC: b           L_80330A4C
    // 0x803309F0: nop

        goto L_80330A4C;
    // 0x803309F0: nop

L_803309F4:
    // 0x803309F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803309F8: jal         0x8033050C
    // 0x803309FC: nop

    func_8033050C_unk_bin_35(rdram, ctx);
        goto after_2;
    // 0x803309FC: nop

    after_2:
    // 0x80330A00: b           L_80330A4C
    // 0x80330A04: nop

        goto L_80330A4C;
    // 0x80330A04: nop

L_80330A08:
    // 0x80330A08: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A0C: jal         0x803305F0
    // 0x80330A10: nop

    func_803305F0_unk_bin_35(rdram, ctx);
        goto after_3;
    // 0x80330A10: nop

    after_3:
    // 0x80330A14: b           L_80330A4C
    // 0x80330A18: nop

        goto L_80330A4C;
    // 0x80330A18: nop

L_80330A1C:
    // 0x80330A1C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A20: jal         0x8033074C
    // 0x80330A24: nop

    func_8033074C_unk_bin_35(rdram, ctx);
        goto after_4;
    // 0x80330A24: nop

    after_4:
    // 0x80330A28: b           L_80330A4C
    // 0x80330A2C: nop

        goto L_80330A4C;
    // 0x80330A2C: nop

L_80330A30:
    // 0x80330A30: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A34: jal         0x80330928
    // 0x80330A38: nop

    func_80330928_unk_bin_35(rdram, ctx);
        goto after_5;
    // 0x80330A38: nop

    after_5:
    // 0x80330A3C: b           L_80330A4C
    // 0x80330A40: nop

        goto L_80330A4C;
    // 0x80330A40: nop

L_80330A44:
    // 0x80330A44: b           L_80330A4C
    // 0x80330A48: nop

        goto L_80330A4C;
    // 0x80330A48: nop

L_80330A4C:
    // 0x80330A4C: b           L_80330A54
    // 0x80330A50: nop

        goto L_80330A54;
    // 0x80330A50: nop

L_80330A54:
    // 0x80330A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330A58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330A5C: jr          $ra
    // 0x80330A60: nop

    return;
    // 0x80330A60: nop

;}
RECOMP_FUNC void func_803329E0_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803329E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803329E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803329E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803329EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803329F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803329F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803329F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803329FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332A00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A04: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332A08: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332A0C: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x80332A10: nop

    // 0x80332A14: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80332A18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A20: jal         0x800281A4
    // 0x80332A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x80332A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80332A28: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A2C: jal         0x8002B0E4
    // 0x80332A30: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x80332A30: nop

    after_1:
    // 0x80332A34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A3C: jal         0x8002B0E4
    // 0x80332A40: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x80332A40: nop

    after_2:
    // 0x80332A44: b           L_80332A4C
    // 0x80332A48: nop

        goto L_80332A4C;
    // 0x80332A48: nop

L_80332A4C:
    // 0x80332A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332A50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332A54: jr          $ra
    // 0x80332A58: nop

    return;
    // 0x80332A58: nop

;}
RECOMP_FUNC void func_80331FF4_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332004: jal         0x8002B0E4
    // 0x80332008: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80332008: nop

    after_0:
    // 0x8033200C: b           L_80332014
    // 0x80332010: nop

        goto L_80332014;
    // 0x80332010: nop

L_80332014:
    // 0x80332014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033201C: jr          $ra
    // 0x80332020: nop

    return;
    // 0x80332020: nop

;}
RECOMP_FUNC void func_80332BEC_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332BEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332BF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332BF4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332BF8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332BFC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80332C00: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80332C04: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80332C08: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80332C0C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80332C10: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80332C14: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80332C18: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332C1C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80332C20: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80332C24: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332C28: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80332C2C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332C30: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80332C34: addiu       $a1, $a1, 0x4570
    ctx->r5 = ADD32(ctx->r5, 0X4570);
    // 0x80332C38: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332C3C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80332C40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332C44: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332C48: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80332C4C: jal         0x80027464
    // 0x80332C50: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80332C50: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80332C54: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x80332C58: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80332C5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332C60: beq         $t1, $at, L_80332DCC
    if (ctx->r9 == ctx->r1) {
        // 0x80332C64: nop
    
            goto L_80332DCC;
    }
    // 0x80332C64: nop

    // 0x80332C68: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80332C6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C70: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332C74: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332C78: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332C7C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332C80: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332C84: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332C88: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80332C8C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80332C90: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x80332C94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C98: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332C9C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332CA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332CA4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332CA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332CAC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332CB0: sh          $zero, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = 0;
    // 0x80332CB4: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x80332CB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332CBC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332CC0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332CC4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332CC8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332CCC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332CD0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332CD4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80332CD8: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80332CDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332CE0: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80332CE4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80332CE8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332CEC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80332CF0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332CF4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332CF8: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x80332CFC: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80332D00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332D04: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332D08: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332D0C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332D10: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332D14: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332D18: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332D1C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80332D20: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x80332D24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332D28: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80332D2C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332D30: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332D34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332D38: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332D3C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332D40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332D44: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332D48: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80332D4C: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x80332D50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332D54: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332D58: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332D5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332D60: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332D64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332D68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332D6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332D70: lwc1        $f20, 0xC($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80332D74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332D78: swc1        $f20, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f20.u32l;
    // 0x80332D7C: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80332D80: nop

    // 0x80332D84: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80332D88: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80332D8C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332D90: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80332D94: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332D98: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332D9C: swc1        $f20, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f20.u32l;
    // 0x80332DA0: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x80332DA4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80332DA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332DAC: jal         0x80019448
    // 0x80332DB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80332DB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80332DB4: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x80332DB8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80332DBC: addiu       $a3, $a3, 0x7C94
    ctx->r7 = ADD32(ctx->r7, 0X7C94);
    // 0x80332DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332DC4: jal         0x8001ABF4
    // 0x80332DC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80332DC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80332DCC:
    // 0x80332DCC: b           L_80332DD4
    // 0x80332DD0: nop

        goto L_80332DD4;
    // 0x80332DD0: nop

L_80332DD4:
    // 0x80332DD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332DD8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80332DDC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332DE0: jr          $ra
    // 0x80332DE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80332DE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80332860_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332860: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332864: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332868: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033286C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332870: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332874: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332878: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033287C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332880: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332884: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332888: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033288C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332890: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332894: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332898: nop

    // 0x8033289C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803328A0: nop

    // 0x803328A4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x803328A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803328AC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803328B0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803328B4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803328B8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803328BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803328C0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803328C4: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803328C8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803328CC: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x803328D0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803328D4: nop

    // 0x803328D8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803328DC: nop

    // 0x803328E0: bne         $t7, $zero, L_8033296C
    if (ctx->r15 != 0) {
        // 0x803328E4: nop
    
            goto L_8033296C;
    }
    // 0x803328E4: nop

    // 0x803328E8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803328EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803328F0: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x803328F4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803328F8: nop

    // 0x803328FC: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
    // 0x80332900: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332904: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332908: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033290C: nop

    // 0x80332910: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x80332914: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332918: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033291C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332920: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332924: jal         0x80015538
    // 0x80332928: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80332928: nop

    after_0:
    // 0x8033292C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332930: nop

    // 0x80332934: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x80332938: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033293C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332940: nop

    // 0x80332944: swc1        $f6, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f6.u32l;
    // 0x80332948: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033294C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80332950: addiu       $t5, $t5, 0x730C
    ctx->r13 = ADD32(ctx->r13, 0X730C);
    // 0x80332954: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332958: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8033295C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332960: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80332964: jal         0x8001C0EC
    // 0x80332968: addiu       $a3, $zero, 0x49
    ctx->r7 = ADD32(0, 0X49);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80332968: addiu       $a3, $zero, 0x49
    ctx->r7 = ADD32(0, 0X49);
    after_1:
L_8033296C:
    // 0x8033296C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332970: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332974: jal         0x80029C40
    // 0x80332978: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80332978: nop

    after_2:
    // 0x8033297C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332980: nop

    // 0x80332984: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80332988: nop

    // 0x8033298C: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x80332990: bne         $at, $zero, L_803329B0
    if (ctx->r1 != 0) {
        // 0x80332994: nop
    
            goto L_803329B0;
    }
    // 0x80332994: nop

    // 0x80332998: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033299C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803329A0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803329A4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803329A8: b           L_803329C8
    // 0x803329AC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_803329C8;
    // 0x803329AC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803329B0:
    // 0x803329B0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803329B4: nop

    // 0x803329B8: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x803329BC: nop

    // 0x803329C0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x803329C4: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
L_803329C8:
    // 0x803329C8: b           L_803329D0
    // 0x803329CC: nop

        goto L_803329D0;
    // 0x803329CC: nop

L_803329D0:
    // 0x803329D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803329D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803329D8: jr          $ra
    // 0x803329DC: nop

    return;
    // 0x803329DC: nop

;}
RECOMP_FUNC void func_8033304C_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033304C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333054: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333058: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033305C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333060: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333064: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333068: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033306C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333070: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333074: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333078: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033307C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80333080: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80333084: nop

    // 0x80333088: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033308C: nop

    // 0x80333090: bne         $t1, $zero, L_80333108
    if (ctx->r9 != 0) {
        // 0x80333094: nop
    
            goto L_80333108;
    }
    // 0x80333094: nop

    // 0x80333098: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033309C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803330A0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803330A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803330A8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803330AC: nop

    // 0x803330B0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803330B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803330B8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803330BC: nop

    // 0x803330C0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803330C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330CC: jal         0x8001BB34
    // 0x803330D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803330D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803330D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330DC: jal         0x8001BB04
    // 0x803330E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x803330E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x803330E4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803330E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803330EC: lh          $t7, 0xE4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE4);
    // 0x803330F0: nop

    // 0x803330F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803330F8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803330FC: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x80333100: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333104: sb          $zero, 0x4D90($at)
    MEM_B(0X4D90, ctx->r1) = 0;
L_80333108:
    // 0x80333108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033310C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333110: jal         0x80029C40
    // 0x80333114: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80333114: nop

    after_2:
    // 0x80333118: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033311C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333120: jal         0x80029D04
    // 0x80333124: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80333124: nop

    after_3:
    // 0x80333128: b           L_80333130
    // 0x8033312C: nop

        goto L_80333130;
    // 0x8033312C: nop

L_80333130:
    // 0x80333130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80333138: jr          $ra
    // 0x8033313C: nop

    return;
    // 0x8033313C: nop

;}
RECOMP_FUNC void func_803316B8_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803316BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803316C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316C8: jal         0x8002B0E4
    // 0x803316CC: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803316CC: nop

    after_0:
    // 0x803316D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803316D4: sw          $zero, -0x1EE0($at)
    MEM_W(-0X1EE0, ctx->r1) = 0;
    // 0x803316D8: b           L_803316E0
    // 0x803316DC: nop

        goto L_803316E0;
    // 0x803316DC: nop

L_803316E0:
    // 0x803316E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803316E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803316E8: jr          $ra
    // 0x803316EC: nop

    return;
    // 0x803316EC: nop

;}
RECOMP_FUNC void func_803301FC_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803301FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80330200: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330204: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330208: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033020C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330210: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330214: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330218: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033021C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330220: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330224: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330228: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033022C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330230: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80330234: nop

    // 0x80330238: bne         $t0, $zero, L_80330258
    if (ctx->r8 != 0) {
        // 0x8033023C: nop
    
            goto L_80330258;
    }
    // 0x8033023C: nop

    // 0x80330240: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80330244: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80330248: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8033024C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80330250: b           L_803302AC
    // 0x80330254: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_803302AC;
    // 0x80330254: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80330258:
    // 0x80330258: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033025C: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x80330260: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330264: bne         $t4, $at, L_803302AC
    if (ctx->r12 != ctx->r1) {
        // 0x80330268: nop
    
            goto L_803302AC;
    }
    // 0x80330268: nop

    // 0x8033026C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80330270: nop

    // 0x80330274: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330278: nop

    // 0x8033027C: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x80330280: beq         $at, $zero, L_803302AC
    if (ctx->r1 == 0) {
        // 0x80330284: nop
    
            goto L_803302AC;
    }
    // 0x80330284: nop

    // 0x80330288: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8033028C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80330290: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80330294: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80330298: nop

    // 0x8033029C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x803302A0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803302A4: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x803302A8: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
L_803302AC:
    // 0x803302AC: b           L_803302B4
    // 0x803302B0: nop

        goto L_803302B4;
    // 0x803302B0: nop

L_803302B4:
    // 0x803302B4: jr          $ra
    // 0x803302B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803302B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80330000_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330008: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033000C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330010: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330014: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330018: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033001C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80330020: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330024: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330028: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033002C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330030: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330034: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80330038: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033003C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80330040: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330044: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330048: addiu       $a1, $a1, 0x4528
    ctx->r5 = ADD32(ctx->r5, 0X4528);
    // 0x8033004C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330050: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80330054: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330058: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033005C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330060: jal         0x80027464
    // 0x80330064: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80330064: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80330068: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8033006C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330070: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330074: beq         $t1, $at, L_803300FC
    if (ctx->r9 == ctx->r1) {
        // 0x80330078: nop
    
            goto L_803300FC;
    }
    // 0x80330078: nop

    // 0x8033007C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330080: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330084: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330088: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033008C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330090: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330094: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80330098: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033009C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803300A0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803300A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803300A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803300AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300B0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803300B4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803300B8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803300BC: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803300C0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803300C4: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x803300C8: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x803300CC: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x803300D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300D4: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x803300D8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803300DC: nop

    // 0x803300E0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803300E4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803300E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803300EC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803300F0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803300F4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803300F8: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_803300FC:
    // 0x803300FC: b           L_80330104
    // 0x80330100: nop

        goto L_80330104;
    // 0x80330100: nop

L_80330104:
    // 0x80330104: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330108: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033010C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330110: jr          $ra
    // 0x80330114: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330114: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803312E8_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803312E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803312EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803312F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803312F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803312F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803312FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331300: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331304: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331308: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033130C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331310: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331314: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331318: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033131C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331320: nop

    // 0x80331324: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331328: nop

    // 0x8033132C: bne         $t1, $zero, L_8033138C
    if (ctx->r9 != 0) {
        // 0x80331330: nop
    
            goto L_8033138C;
    }
    // 0x80331330: nop

    // 0x80331334: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331338: nop

    // 0x8033133C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331340: nop

    // 0x80331344: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331348: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033134C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331350: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80331354: addiu       $t5, $t5, -0x7530
    ctx->r13 = ADD32(ctx->r13, -0X7530);
    // 0x80331358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033135C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80331360: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331364: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80331368: jal         0x8001C0EC
    // 0x8033136C: addiu       $a3, $zero, 0x8B
    ctx->r7 = ADD32(0, 0X8B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033136C: addiu       $a3, $zero, 0x8B
    ctx->r7 = ADD32(0, 0X8B);
    after_0:
    // 0x80331370: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331374: nop

    // 0x80331378: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x8033137C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80331380: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80331384: jal         0x8001FB3C
    // 0x80331388: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_1;
    // 0x80331388: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_8033138C:
    // 0x8033138C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331390: nop

    // 0x80331394: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80331398: nop

    // 0x8033139C: bne         $t8, $zero, L_8033140C
    if (ctx->r24 != 0) {
        // 0x803313A0: nop
    
            goto L_8033140C;
    }
    // 0x803313A0: nop

    // 0x803313A4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803313A8: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x803313AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803313B0: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803313B4: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803313B8: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x803313BC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803313C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803313C4: lwc1        $f16, 0x1C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803313C8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803313CC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803313D0: addiu       $a1, $a1, 0x4540
    ctx->r5 = ADD32(ctx->r5, 0X4540);
    // 0x803313D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803313D8: jal         0x80027464
    // 0x803313DC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x803313DC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x803313E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803313EC: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x803313F0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803313F4: jal         0x800175F0
    // 0x803313F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x803313F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x803313FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331400: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x80331404: b           L_80331424
    // 0x80331408: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
        goto L_80331424;
    // 0x80331408: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
L_8033140C:
    // 0x8033140C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331410: nop

    // 0x80331414: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80331418: nop

    // 0x8033141C: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80331420: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_80331424:
    // 0x80331424: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80331428: jal         0x80330E68
    // 0x8033142C: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    func_80330E68_unk_bin_35(rdram, ctx);
        goto after_4;
    // 0x8033142C: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    after_4:
    // 0x80331430: beq         $v0, $zero, L_803314EC
    if (ctx->r2 == 0) {
        // 0x80331434: nop
    
            goto L_803314EC;
    }
    // 0x80331434: nop

    // 0x80331438: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8033143C: lw          $t5, -0x1EE0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1EE0);
    // 0x80331440: nop

    // 0x80331444: bne         $t5, $zero, L_803314E4
    if (ctx->r13 != 0) {
        // 0x80331448: nop
    
            goto L_803314E4;
    }
    // 0x80331448: nop

    // 0x8033144C: addiu       $t6, $zero, 0xC1
    ctx->r14 = ADD32(0, 0XC1);
    // 0x80331450: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331454: sw          $t6, -0x1EE0($at)
    MEM_W(-0X1EE0, ctx->r1) = ctx->r14;
    // 0x80331458: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033145C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80331460: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331464: sw          $t7, -0x1ED8($at)
    MEM_W(-0X1ED8, ctx->r1) = ctx->r15;
    // 0x80331468: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033146C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331470: lwc1        $f18, 0x1C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331474: lwc1        $f7, 0x3488($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3488);
    // 0x80331478: lwc1        $f6, 0x348C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X348C);
    // 0x8033147C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80331480: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80331484: jal         0x80034970
    // 0x80331488: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x80331488: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_5:
    // 0x8033148C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80331490: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331494: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331498: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8033149C: swc1        $f16, -0x1ED0($at)
    MEM_W(-0X1ED0, ctx->r1) = ctx->f16.u32l;
    // 0x803314A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803314A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314A8: swc1        $f18, -0x1EC8($at)
    MEM_W(-0X1EC8, ctx->r1) = ctx->f18.u32l;
    // 0x803314AC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803314B0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803314B4: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803314B8: lwc1        $f9, 0x3490($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3490);
    // 0x803314BC: lwc1        $f8, 0x3494($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3494);
    // 0x803314C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803314C4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803314C8: jal         0x80036570
    // 0x803314CC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_6;
    // 0x803314CC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_6:
    // 0x803314D0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803314D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803314D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314DC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x803314E0: swc1        $f18, -0x1E4C($at)
    MEM_W(-0X1E4C, ctx->r1) = ctx->f18.u32l;
L_803314E4:
    // 0x803314E4: b           L_8033150C
    // 0x803314E8: nop

        goto L_8033150C;
    // 0x803314E8: nop

L_803314EC:
    // 0x803314EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314F0: sw          $zero, -0x1EE0($at)
    MEM_W(-0X1EE0, ctx->r1) = 0;
    // 0x803314F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803314F8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x803314FC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80331500: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331504: nop

    // 0x80331508: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033150C:
    // 0x8033150C: b           L_80331514
    // 0x80331510: nop

        goto L_80331514;
    // 0x80331510: nop

L_80331514:
    // 0x80331514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331518: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033151C: jr          $ra
    // 0x80331520: nop

    return;
    // 0x80331520: nop

;}
RECOMP_FUNC void func_80332FC0_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332FC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332FC4: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80332FC8: nop

    // 0x80332FCC: beq         $t6, $zero, L_80332FE8
    if (ctx->r14 == 0) {
        // 0x80332FD0: nop
    
            goto L_80332FE8;
    }
    // 0x80332FD0: nop

    // 0x80332FD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332FD8: beq         $t6, $at, L_80332FE8
    if (ctx->r14 == ctx->r1) {
        // 0x80332FDC: nop
    
            goto L_80332FE8;
    }
    // 0x80332FDC: nop

    // 0x80332FE0: jr          $ra
    // 0x80332FE4: nop

    return;
    // 0x80332FE4: nop

L_80332FE8:
    // 0x80332FE8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80332FEC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80332FF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332FF4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332FF8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332FFC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333000: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333004: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333008: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033300C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80333010: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80333014: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80333018: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033301C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333020: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333024: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333028: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033302C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333030: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333034: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333038: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033303C: jr          $ra
    // 0x80333040: nop

    return;
    // 0x80333040: nop

    // 0x80333044: jr          $ra
    // 0x80333048: nop

    return;
    // 0x80333048: nop

;}
RECOMP_FUNC void func_803318D8_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803318D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803318DC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x803318E0: nop

    // 0x803318E4: bne         $t6, $zero, L_80331918
    if (ctx->r14 != 0) {
        // 0x803318E8: nop
    
            goto L_80331918;
    }
    // 0x803318E8: nop

    // 0x803318EC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803318F0: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x803318F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803318F8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803318FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331900: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331904: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331908: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033190C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331910: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80331914: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_80331918:
    // 0x80331918: jr          $ra
    // 0x8033191C: nop

    return;
    // 0x8033191C: nop

    // 0x80331920: jr          $ra
    // 0x80331924: nop

    return;
    // 0x80331924: nop

;}
RECOMP_FUNC void func_80331524_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331524: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331528: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033152C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331530: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331534: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331538: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033153C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331548: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033154C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331550: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331554: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331558: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033155C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331560: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331564: nop

    // 0x80331568: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033156C: nop

    // 0x80331570: bne         $t1, $zero, L_803315C4
    if (ctx->r9 != 0) {
        // 0x80331574: nop
    
            goto L_803315C4;
    }
    // 0x80331574: nop

    // 0x80331578: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033157C: nop

    // 0x80331580: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331584: nop

    // 0x80331588: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033158C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331590: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331594: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80331598: addiu       $t5, $t5, -0x7530
    ctx->r13 = ADD32(ctx->r13, -0X7530);
    // 0x8033159C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315A0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803315A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803315A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803315AC: jal         0x8001C0EC
    // 0x803315B0: addiu       $a3, $zero, 0x8B
    ctx->r7 = ADD32(0, 0X8B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803315B0: addiu       $a3, $zero, 0x8B
    ctx->r7 = ADD32(0, 0X8B);
    after_0:
    // 0x803315B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315BC: jal         0x8001B754
    // 0x803315C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x803315C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803315C4:
    // 0x803315C4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803315C8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803315CC: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x803315D0: lwc1        $f9, 0x3498($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3498);
    // 0x803315D4: lwc1        $f8, 0x349C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X349C);
    // 0x803315D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803315DC: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x803315E0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803315E4: swc1        $f16, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f16.u32l;
    // 0x803315E8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803315EC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x803315F0: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x803315F4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x803315F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803315FC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80331600: c.le.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d <= ctx->f6.d;
    // 0x80331604: nop

    // 0x80331608: bc1f        L_80331624
    if (!c1cs) {
        // 0x8033160C: nop
    
            goto L_80331624;
    }
    // 0x8033160C: nop

    // 0x80331610: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80331614: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331618: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033161C: nop

    // 0x80331620: swc1        $f8, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f8.u32l;
L_80331624:
    // 0x80331624: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331628: nop

    // 0x8033162C: lwc1        $f20, 0xC($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80331630: nop

    // 0x80331634: swc1        $f20, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f20.u32l;
    // 0x80331638: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033163C: nop

    // 0x80331640: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
    // 0x80331644: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033164C: jal         0x8001B44C
    // 0x80331650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80331650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331654: beq         $v0, $zero, L_8033169C
    if (ctx->r2 == 0) {
        // 0x80331658: nop
    
            goto L_8033169C;
    }
    // 0x80331658: nop

    // 0x8033165C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331660: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80331664: lwc1        $f10, 0xC($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80331668: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8033166C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331670: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80331674: c.eq.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d == ctx->f18.d;
    // 0x80331678: nop

    // 0x8033167C: bc1f        L_8033169C
    if (!c1cs) {
        // 0x80331680: nop
    
            goto L_8033169C;
    }
    // 0x80331680: nop

    // 0x80331684: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331688: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033168C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80331690: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331694: nop

    // 0x80331698: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_8033169C:
    // 0x8033169C: b           L_803316A4
    // 0x803316A0: nop

        goto L_803316A4;
    // 0x803316A0: nop

L_803316A4:
    // 0x803316A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803316A8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803316AC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803316B0: jr          $ra
    // 0x803316B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803316B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033074C_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033074C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330750: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330754: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80330758: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033075C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330760: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80330764: nop

    // 0x80330768: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033076C: nop

    // 0x80330770: bne         $t7, $zero, L_803307CC
    if (ctx->r15 != 0) {
        // 0x80330774: nop
    
            goto L_803307CC;
    }
    // 0x80330774: nop

    // 0x80330778: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8033077C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80330780: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x80330784: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80330788: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x8033078C: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x80330790: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80330794: nop

    // 0x80330798: sh          $zero, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = 0;
    // 0x8033079C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803307A0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x803307A4: nop

    // 0x803307A8: swc1        $f4, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f4.u32l;
    // 0x803307AC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x803307B0: nop

    // 0x803307B4: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x803307B8: nop

    // 0x803307BC: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x803307C0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x803307C4: nop

    // 0x803307C8: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
L_803307CC:
    // 0x803307CC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x803307D0: nop

    // 0x803307D4: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x803307D8: nop

    // 0x803307DC: bne         $t7, $zero, L_8033081C
    if (ctx->r15 != 0) {
        // 0x803307E0: nop
    
            goto L_8033081C;
    }
    // 0x803307E0: nop

    // 0x803307E4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803307E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803307EC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x803307F0: nop

    // 0x803307F4: swc1        $f6, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f6.u32l;
    // 0x803307F8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803307FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330800: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80330804: nop

    // 0x80330808: swc1        $f8, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f8.u32l;
    // 0x8033080C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80330810: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80330814: b           L_8033083C
    // 0x80330818: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
        goto L_8033083C;
    // 0x80330818: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
L_8033081C:
    // 0x8033081C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330820: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80330824: nop

    // 0x80330828: swc1        $f10, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f10.u32l;
    // 0x8033082C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330830: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80330834: nop

    // 0x80330838: swc1        $f16, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f16.u32l;
L_8033083C:
    // 0x8033083C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330840: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330844: jal         0x80029D04
    // 0x80330848: nop

    func_80029D04(rdram, ctx);
        goto after_0;
    // 0x80330848: nop

    after_0:
    // 0x8033084C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330850: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330854: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330858: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033085C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80330860: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80330864: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330868: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033086C: jal         0x800294F0
    // 0x80330870: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800294F0(rdram, ctx);
        goto after_1;
    // 0x80330870: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80330874: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80330878: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033087C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80330880: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80330884: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330888: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8033088C: c.le.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl <= ctx->f16.fl;
    // 0x80330890: nop

    // 0x80330894: bc1f        L_803308A8
    if (!c1cs) {
        // 0x80330898: nop
    
            goto L_803308A8;
    }
    // 0x80330898: nop

    // 0x8033089C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x803308A0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803308A4: sh          $t5, 0x100($t6)
    MEM_H(0X100, ctx->r14) = ctx->r13;
L_803308A8:
    // 0x803308A8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x803308AC: nop

    // 0x803308B0: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803308B4: nop

    // 0x803308B8: bne         $t8, $zero, L_803308F4
    if (ctx->r24 != 0) {
        // 0x803308BC: nop
    
            goto L_803308F4;
    }
    // 0x803308BC: nop

    // 0x803308C0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x803308C4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803308C8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803308CC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x803308D0: nop

    // 0x803308D4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803308D8: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x803308DC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x803308E0: sh          $t2, 0x100($t3)
    MEM_H(0X100, ctx->r11) = ctx->r10;
    // 0x803308E4: b           L_80330914
    // 0x803308E8: nop

        goto L_80330914;
    // 0x803308E8: nop

    // 0x803308EC: b           L_8033090C
    // 0x803308F0: nop

        goto L_8033090C;
    // 0x803308F0: nop

L_803308F4:
    // 0x803308F4: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x803308F8: nop

    // 0x803308FC: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x80330900: nop

    // 0x80330904: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80330908: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_8033090C:
    // 0x8033090C: b           L_80330914
    // 0x80330910: nop

        goto L_80330914;
    // 0x80330910: nop

L_80330914:
    // 0x80330914: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330918: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033091C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330920: jr          $ra
    // 0x80330924: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80330924: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80331928_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331928: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8033192C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80331930: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80331934: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331938: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8033193C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331940: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331944: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331948: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033194C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331950: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331954: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331958: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033195C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331960: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331964: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80331968: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033196C: nop

    // 0x80331970: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331974: nop

    // 0x80331978: bne         $t1, $zero, L_803319DC
    if (ctx->r9 != 0) {
        // 0x8033197C: nop
    
            goto L_803319DC;
    }
    // 0x8033197C: nop

    // 0x80331980: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80331984: nop

    // 0x80331988: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033198C: nop

    // 0x80331990: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331994: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331998: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8033199C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803319A0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803319A4: nop

    // 0x803319A8: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x803319AC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803319B0: nop

    // 0x803319B4: sh          $zero, 0xB0($t6)
    MEM_H(0XB0, ctx->r14) = 0;
    // 0x803319B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319BC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803319C0: addiu       $t7, $t7, -0x751C
    ctx->r15 = ADD32(ctx->r15, -0X751C);
    // 0x803319C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803319CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803319D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803319D4: jal         0x8001C0EC
    // 0x803319D8: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803319D8: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_0:
L_803319DC:
    // 0x803319DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319E4: jal         0x80028FA0
    // 0x803319E8: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x803319E8: nop

    after_1:
    // 0x803319EC: beq         $v0, $zero, L_80331A10
    if (ctx->r2 == 0) {
        // 0x803319F0: nop
    
            goto L_80331A10;
    }
    // 0x803319F0: nop

    // 0x803319F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319FC: jal         0x80029B60
    // 0x80331A00: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x80331A00: nop

    after_2:
    // 0x80331A04: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80331A08: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80331A0C: sh          $t8, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = ctx->r24;
L_80331A10:
    // 0x80331A10: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80331A14: nop

    // 0x80331A18: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x80331A1C: nop

    // 0x80331A20: bne         $t1, $zero, L_80331A80
    if (ctx->r9 != 0) {
        // 0x80331A24: nop
    
            goto L_80331A80;
    }
    // 0x80331A24: nop

    // 0x80331A28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A30: jal         0x8002A640
    // 0x80331A34: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_3;
    // 0x80331A34: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_3:
    // 0x80331A38: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80331A3C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80331A40: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331A44: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80331A48: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331A4C: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80331A50: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80331A54: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80331A58: jal         0x80015538
    // 0x80331A5C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80331A5C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x80331A60: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80331A64: nop

    // 0x80331A68: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x80331A6C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80331A70: nop

    // 0x80331A74: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80331A78: b           L_80331A98
    // 0x80331A7C: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
        goto L_80331A98;
    // 0x80331A7C: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
L_80331A80:
    // 0x80331A80: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331A84: nop

    // 0x80331A88: lh          $t8, 0xB0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB0);
    // 0x80331A8C: nop

    // 0x80331A90: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80331A94: sh          $t9, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r25;
L_80331A98:
    // 0x80331A98: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331A9C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80331AA0: nop

    // 0x80331AA4: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
    // 0x80331AA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AB0: jal         0x80029C40
    // 0x80331AB4: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x80331AB4: nop

    after_5:
    // 0x80331AB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331ABC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331AC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331ACC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80331AD0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331AD4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80331AD8: jal         0x80029018
    // 0x80331ADC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x80331ADC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x80331AE0: beq         $v0, $zero, L_80331B40
    if (ctx->r2 == 0) {
        // 0x80331AE4: nop
    
            goto L_80331B40;
    }
    // 0x80331AE4: nop

    // 0x80331AE8: jal         0x800297DC
    // 0x80331AEC: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x80331AEC: nop

    after_7:
    // 0x80331AF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80331AFC: jal         0x80029824
    // 0x80331B00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x80331B00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x80331B04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331B08: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80331B0C: nop

    // 0x80331B10: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x80331B14: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331B18: nop

    // 0x80331B1C: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80331B20: nop

    // 0x80331B24: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x80331B28: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80331B2C: nop

    // 0x80331B30: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
    // 0x80331B34: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80331B38: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80331B3C: sh          $t2, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = ctx->r10;
L_80331B40:
    // 0x80331B40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331B44: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331B48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B50: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80331B54: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x80331B58: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331B5C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331B60: jal         0x800295C0
    // 0x80331B64: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_9;
    // 0x80331B64: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x80331B68: beq         $v0, $zero, L_80331B80
    if (ctx->r2 == 0) {
        // 0x80331B6C: nop
    
            goto L_80331B80;
    }
    // 0x80331B6C: nop

    // 0x80331B70: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80331B74: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80331B78: b           L_80331B90
    // 0x80331B7C: swc1        $f10, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f10.u32l;
        goto L_80331B90;
    // 0x80331B7C: swc1        $f10, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f10.u32l;
L_80331B80:
    // 0x80331B80: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80331B84: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80331B88: nop

    // 0x80331B8C: swc1        $f16, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f16.u32l;
L_80331B90:
    // 0x80331B90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B98: jal         0x8002A1FC
    // 0x80331B9C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_10;
    // 0x80331B9C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_10:
    // 0x80331BA0: beq         $v0, $zero, L_80331BC0
    if (ctx->r2 == 0) {
        // 0x80331BA4: nop
    
            goto L_80331BC0;
    }
    // 0x80331BA4: nop

    // 0x80331BA8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331BAC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80331BB0: sh          $t9, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r25;
    // 0x80331BB4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80331BB8: nop

    // 0x80331BBC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331BC0:
    // 0x80331BC0: b           L_80331BC8
    // 0x80331BC4: nop

        goto L_80331BC8;
    // 0x80331BC4: nop

L_80331BC8:
    // 0x80331BC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80331BCC: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80331BD0: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331BD4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80331BD8: jr          $ra
    // 0x80331BDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80331BDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80330DF0_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330DF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330DF4: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80330DF8: nop

    // 0x80330DFC: bne         $t6, $zero, L_80330E58
    if (ctx->r14 != 0) {
        // 0x80330E00: nop
    
            goto L_80330E58;
    }
    // 0x80330E00: nop

    // 0x80330E04: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80330E08: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80330E0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E10: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330E14: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330E18: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330E1C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330E20: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330E24: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330E28: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80330E2C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80330E30: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330E34: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80330E38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E3C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330E40: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330E44: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330E48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330E4C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330E50: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330E54: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80330E58:
    // 0x80330E58: jr          $ra
    // 0x80330E5C: nop

    return;
    // 0x80330E5C: nop

    // 0x80330E60: jr          $ra
    // 0x80330E64: nop

    return;
    // 0x80330E64: nop

;}
RECOMP_FUNC void func_803317C0_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803317C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803317C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803317C8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803317CC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803317D0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803317D4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803317D8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803317DC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803317E0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803317E4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803317E8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803317EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803317F0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803317F4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803317F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803317FC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80331800: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331804: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80331808: addiu       $a1, $a1, 0x454C
    ctx->r5 = ADD32(ctx->r5, 0X454C);
    // 0x8033180C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80331810: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80331814: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331818: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033181C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80331820: jal         0x80027464
    // 0x80331824: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80331824: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80331828: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8033182C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331830: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331834: beq         $t1, $at, L_803318BC
    if (ctx->r9 == ctx->r1) {
        // 0x80331838: nop
    
            goto L_803318BC;
    }
    // 0x80331838: nop

    // 0x8033183C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331840: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331844: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331848: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033184C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331850: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331854: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80331858: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033185C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331860: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331864: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331868: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033186C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331870: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331874: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331878: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033187C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80331880: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331884: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80331888: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x8033188C: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x80331890: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331894: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x80331898: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033189C: nop

    // 0x803318A0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803318A4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803318A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803318AC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803318B0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803318B4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803318B8: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_803318BC:
    // 0x803318BC: b           L_803318C4
    // 0x803318C0: nop

        goto L_803318C4;
    // 0x803318C0: nop

L_803318C4:
    // 0x803318C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803318C8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803318CC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803318D0: jr          $ra
    // 0x803318D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803318D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331054_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331054: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331058: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033105C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331060: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331064: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331068: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033106C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331070: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331074: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331078: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033107C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331080: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331084: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331088: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033108C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331090: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331094: nop

    // 0x80331098: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033109C: nop

    // 0x803310A0: bne         $t1, $zero, L_80331114
    if (ctx->r9 != 0) {
        // 0x803310A4: nop
    
            goto L_80331114;
    }
    // 0x803310A4: nop

    // 0x803310A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803310AC: nop

    // 0x803310B0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803310B4: nop

    // 0x803310B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803310BC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803310C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803310C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803310C8: nop

    // 0x803310CC: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x803310D0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803310D4: nop

    // 0x803310D8: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803310DC: nop

    // 0x803310E0: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x803310E4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803310E8: nop

    // 0x803310EC: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x803310F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310F4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803310F8: addiu       $t8, $t8, -0x7530
    ctx->r24 = ADD32(ctx->r24, -0X7530);
    // 0x803310FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331100: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80331104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033110C: jal         0x8001C0EC
    // 0x80331110: addiu       $a3, $zero, 0x8B
    ctx->r7 = ADD32(0, 0X8B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331110: addiu       $a3, $zero, 0x8B
    ctx->r7 = ADD32(0, 0X8B);
    after_0:
L_80331114:
    // 0x80331114: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80331118: jal         0x80330E68
    // 0x8033111C: addiu       $a1, $zero, 0x258
    ctx->r5 = ADD32(0, 0X258);
    func_80330E68_unk_bin_35(rdram, ctx);
        goto after_1;
    // 0x8033111C: addiu       $a1, $zero, 0x258
    ctx->r5 = ADD32(0, 0X258);
    after_1:
    // 0x80331120: beq         $v0, $zero, L_80331140
    if (ctx->r2 == 0) {
        // 0x80331124: nop
    
            goto L_80331140;
    }
    // 0x80331124: nop

    // 0x80331128: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033112C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80331130: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331134: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331138: nop

    // 0x8033113C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331140:
    // 0x80331140: b           L_80331148
    // 0x80331144: nop

        goto L_80331148;
    // 0x80331144: nop

L_80331148:
    // 0x80331148: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033114C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331150: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331154: jr          $ra
    // 0x80331158: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80331158: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80332024_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80332028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033202C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332030: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332034: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332038: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033203C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332040: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332044: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332048: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033204C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332050: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80332054: nop

    // 0x80332058: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8033205C: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x80332060: beq         $at, $zero, L_803320D4
    if (ctx->r1 == 0) {
        // 0x80332064: nop
    
            goto L_803320D4;
    }
    // 0x80332064: nop

    // 0x80332068: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033206C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332070: addu        $at, $at, $t9
    gpr jr_addend_8033207C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332074: lw          $t9, 0x34B4($at)
    ctx->r25 = ADD32(ctx->r1, 0X34B4);
    // 0x80332078: nop

    // 0x8033207C: jr          $t9
    // 0x80332080: nop

    switch (jr_addend_8033207C >> 2) {
        case 0: goto L_80332084; break;
        case 1: goto L_80332094; break;
        case 2: goto L_803320A4; break;
        case 3: goto L_803320B4; break;
        case 4: goto L_803320C4; break;
        default: switch_error(__func__, 0x8033207C, 0x803334B4);
    }
    // 0x80332080: nop

L_80332084:
    // 0x80332084: jal         0x80331928
    // 0x80332088: nop

    func_80331928_unk_bin_35(rdram, ctx);
        goto after_0;
    // 0x80332088: nop

    after_0:
    // 0x8033208C: b           L_803320DC
    // 0x80332090: nop

        goto L_803320DC;
    // 0x80332090: nop

L_80332094:
    // 0x80332094: jal         0x80331BE0
    // 0x80332098: nop

    func_80331BE0_unk_bin_35(rdram, ctx);
        goto after_1;
    // 0x80332098: nop

    after_1:
    // 0x8033209C: b           L_803320DC
    // 0x803320A0: nop

        goto L_803320DC;
    // 0x803320A0: nop

L_803320A4:
    // 0x803320A4: jal         0x80331CEC
    // 0x803320A8: nop

    func_80331CEC_unk_bin_35(rdram, ctx);
        goto after_2;
    // 0x803320A8: nop

    after_2:
    // 0x803320AC: b           L_803320DC
    // 0x803320B0: nop

        goto L_803320DC;
    // 0x803320B0: nop

L_803320B4:
    // 0x803320B4: jal         0x80331F24
    // 0x803320B8: nop

    func_80331F24_unk_bin_35(rdram, ctx);
        goto after_3;
    // 0x803320B8: nop

    after_3:
    // 0x803320BC: b           L_803320DC
    // 0x803320C0: nop

        goto L_803320DC;
    // 0x803320C0: nop

L_803320C4:
    // 0x803320C4: jal         0x80331FF4
    // 0x803320C8: nop

    func_80331FF4_unk_bin_35(rdram, ctx);
        goto after_4;
    // 0x803320C8: nop

    after_4:
    // 0x803320CC: b           L_803320DC
    // 0x803320D0: nop

        goto L_803320DC;
    // 0x803320D0: nop

L_803320D4:
    // 0x803320D4: b           L_803320DC
    // 0x803320D8: nop

        goto L_803320DC;
    // 0x803320D8: nop

L_803320DC:
    // 0x803320DC: b           L_803320E4
    // 0x803320E0: nop

        goto L_803320E4;
    // 0x803320E0: nop

L_803320E4:
    // 0x803320E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803320E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803320EC: jr          $ra
    // 0x803320F0: nop

    return;
    // 0x803320F0: nop

;}
RECOMP_FUNC void func_80333318_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033331C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333320: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333324: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333328: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033332C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333330: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333334: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333338: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033333C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333340: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333344: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80333348: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033334C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80333350: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80333354: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333358: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033335C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333360: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333364: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333368: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033336C: jal         0x80332DE8
    // 0x80333370: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    func_80332DE8_unk_bin_35(rdram, ctx);
        goto after_0;
    // 0x80333370: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    after_0:
    // 0x80333374: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333378: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033337C: jal         0x8002B0E4
    // 0x80333380: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x80333380: nop

    after_1:
    // 0x80333384: b           L_8033338C
    // 0x80333388: nop

        goto L_8033338C;
    // 0x80333388: nop

L_8033338C:
    // 0x8033338C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80333394: jr          $ra
    // 0x80333398: nop

    return;
    // 0x80333398: nop

;}
RECOMP_FUNC void func_80330E68_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E68: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x80330E6C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80330E70: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x80330E74: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x80330E78: lw          $t6, 0xD8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD8);
    // 0x80330E7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330E80: lw          $a1, 0x1C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1C);
    // 0x80330E84: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x80330E88: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330E8C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80330E90: jal         0x800372A0
    // 0x80330E94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_0;
    // 0x80330E94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80330E98: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x80330E9C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80330EA0: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x80330EA4: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x80330EA8: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x80330EAC: jal         0x80037200
    // 0x80330EB0: nop

    guTranslateF(rdram, ctx);
        goto after_1;
    // 0x80330EB0: nop

    after_1:
    // 0x80330EB4: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x80330EB8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80330EBC: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80330EC0: jal         0x80036400
    // 0x80330EC4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    guMtxCatF(rdram, ctx);
        goto after_2;
    // 0x80330EC4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x80330EC8: addiu       $t9, $sp, 0xD4
    ctx->r25 = ADD32(ctx->r29, 0XD4);
    // 0x80330ECC: addiu       $t0, $sp, 0xB4
    ctx->r8 = ADD32(ctx->r29, 0XB4);
    // 0x80330ED0: addiu       $t1, $sp, 0xD0
    ctx->r9 = ADD32(ctx->r29, 0XD0);
    // 0x80330ED4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80330ED8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80330EDC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80330EE0: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x80330EE4: lui         $a1, 0xC370
    ctx->r5 = S32(0XC370 << 16);
    // 0x80330EE8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330EEC: jal         0x80036360
    // 0x80330EF0: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    guMtxXFMF(rdram, ctx);
        goto after_3;
    // 0x80330EF0: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    after_3:
    // 0x80330EF4: lw          $t2, 0xDC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XDC);
    // 0x80330EF8: addiu       $t3, $sp, 0xCC
    ctx->r11 = ADD32(ctx->r29, 0XCC);
    // 0x80330EFC: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80330F00: addiu       $t4, $sp, 0xB4
    ctx->r12 = ADD32(ctx->r29, 0XB4);
    // 0x80330F04: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330F08: addiu       $t5, $sp, 0xC8
    ctx->r13 = ADD32(ctx->r29, 0XC8);
    // 0x80330F0C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80330F10: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330F14: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80330F18: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80330F1C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x80330F20: lui         $a1, 0xC370
    ctx->r5 = S32(0XC370 << 16);
    // 0x80330F24: jal         0x80036360
    // 0x80330F28: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    guMtxXFMF(rdram, ctx);
        goto after_4;
    // 0x80330F28: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_4:
    // 0x80330F2C: lw          $t6, 0xDC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XDC);
    // 0x80330F30: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x80330F34: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80330F38: addiu       $t8, $sp, 0xB4
    ctx->r24 = ADD32(ctx->r29, 0XB4);
    // 0x80330F3C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330F40: addiu       $t9, $sp, 0xC0
    ctx->r25 = ADD32(ctx->r29, 0XC0);
    // 0x80330F44: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80330F48: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80330F4C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80330F50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330F54: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x80330F58: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    // 0x80330F5C: jal         0x80036360
    // 0x80330F60: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    guMtxXFMF(rdram, ctx);
        goto after_5;
    // 0x80330F60: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_5:
    // 0x80330F64: addiu       $t0, $sp, 0xBC
    ctx->r8 = ADD32(ctx->r29, 0XBC);
    // 0x80330F68: addiu       $t1, $sp, 0xB4
    ctx->r9 = ADD32(ctx->r29, 0XB4);
    // 0x80330F6C: addiu       $t2, $sp, 0xB8
    ctx->r10 = ADD32(ctx->r29, 0XB8);
    // 0x80330F70: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80330F74: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80330F78: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80330F7C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x80330F80: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    // 0x80330F84: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330F88: jal         0x80036360
    // 0x80330F8C: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    guMtxXFMF(rdram, ctx);
        goto after_6;
    // 0x80330F8C: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    after_6:
    // 0x80330F90: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x80330F94: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80330F98: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80330F9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330FA0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80330FA4: lwc1        $f16, 0x4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330FA8: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80330FAC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80330FB0: c.le.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl <= ctx->f10.fl;
    // 0x80330FB4: nop

    // 0x80330FB8: bc1f        L_80331034
    if (!c1cs) {
        // 0x80330FBC: nop
    
            goto L_80331034;
    }
    // 0x80330FBC: nop

    // 0x80330FC0: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80330FC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330FC8: nop

    // 0x80330FCC: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80330FD0: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80330FD4: nop

    // 0x80330FD8: bc1f        L_80331034
    if (!c1cs) {
        // 0x80330FDC: nop
    
            goto L_80331034;
    }
    // 0x80330FDC: nop

    // 0x80330FE0: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80330FE4: lwc1        $f14, 0x8($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80330FE8: lwc1        $f18, 0xCC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80330FEC: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80330FF0: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80330FF4: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80330FF8: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80330FFC: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80331000: lw          $a2, 0xD4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD4);
    // 0x80331004: lw          $a3, 0xD0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD0);
    // 0x80331008: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033100C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80331010: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80331014: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80331018: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8033101C: jal         0x800163AC
    // 0x80331020: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_800163AC(rdram, ctx);
        goto after_7;
    // 0x80331020: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x80331024: beq         $v0, $zero, L_80331034
    if (ctx->r2 == 0) {
        // 0x80331028: nop
    
            goto L_80331034;
    }
    // 0x80331028: nop

    // 0x8033102C: b           L_80331044
    // 0x80331030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80331044;
    // 0x80331030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80331034:
    // 0x80331034: b           L_80331044
    // 0x80331038: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80331044;
    // 0x80331038: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8033103C: b           L_80331044
    // 0x80331040: nop

        goto L_80331044;
    // 0x80331040: nop

L_80331044:
    // 0x80331044: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80331048: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x8033104C: jr          $ra
    // 0x80331050: nop

    return;
    // 0x80331050: nop

;}
RECOMP_FUNC void func_803316F0_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803316F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
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
    // 0x80331718: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033171C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80331720: nop

    // 0x80331724: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80331728: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x8033172C: beq         $at, $zero, L_803317A0
    if (ctx->r1 == 0) {
        // 0x80331730: nop
    
            goto L_803317A0;
    }
    // 0x80331730: nop

    // 0x80331734: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331738: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033173C: addu        $at, $at, $t9
    gpr jr_addend_80331748 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331740: lw          $t9, 0x34A0($at)
    ctx->r25 = ADD32(ctx->r1, 0X34A0);
    // 0x80331744: nop

    // 0x80331748: jr          $t9
    // 0x8033174C: nop

    switch (jr_addend_80331748 >> 2) {
        case 0: goto L_80331750; break;
        case 1: goto L_80331760; break;
        case 2: goto L_80331770; break;
        case 3: goto L_80331780; break;
        case 4: goto L_80331790; break;
        default: switch_error(__func__, 0x80331748, 0x803334A0);
    }
    // 0x8033174C: nop

L_80331750:
    // 0x80331750: jal         0x80331054
    // 0x80331754: nop

    func_80331054_unk_bin_35(rdram, ctx);
        goto after_0;
    // 0x80331754: nop

    after_0:
    // 0x80331758: b           L_803317A8
    // 0x8033175C: nop

        goto L_803317A8;
    // 0x8033175C: nop

L_80331760:
    // 0x80331760: jal         0x8033115C
    // 0x80331764: nop

    func_8033115C_unk_bin_35(rdram, ctx);
        goto after_1;
    // 0x80331764: nop

    after_1:
    // 0x80331768: b           L_803317A8
    // 0x8033176C: nop

        goto L_803317A8;
    // 0x8033176C: nop

L_80331770:
    // 0x80331770: jal         0x803312E8
    // 0x80331774: nop

    func_803312E8_unk_bin_35(rdram, ctx);
        goto after_2;
    // 0x80331774: nop

    after_2:
    // 0x80331778: b           L_803317A8
    // 0x8033177C: nop

        goto L_803317A8;
    // 0x8033177C: nop

L_80331780:
    // 0x80331780: jal         0x80331524
    // 0x80331784: nop

    func_80331524_unk_bin_35(rdram, ctx);
        goto after_3;
    // 0x80331784: nop

    after_3:
    // 0x80331788: b           L_803317A8
    // 0x8033178C: nop

        goto L_803317A8;
    // 0x8033178C: nop

L_80331790:
    // 0x80331790: jal         0x803316B8
    // 0x80331794: nop

    func_803316B8_unk_bin_35(rdram, ctx);
        goto after_4;
    // 0x80331794: nop

    after_4:
    // 0x80331798: b           L_803317A8
    // 0x8033179C: nop

        goto L_803317A8;
    // 0x8033179C: nop

L_803317A0:
    // 0x803317A0: b           L_803317A8
    // 0x803317A4: nop

        goto L_803317A8;
    // 0x803317A4: nop

L_803317A8:
    // 0x803317A8: b           L_803317B0
    // 0x803317AC: nop

        goto L_803317B0;
    // 0x803317AC: nop

L_803317B0:
    // 0x803317B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803317B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803317B8: jr          $ra
    // 0x803317BC: nop

    return;
    // 0x803317BC: nop

;}
RECOMP_FUNC void func_80331F24_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331F28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331F2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331F30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331F34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331F38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331F3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331F44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331F4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331F50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331F54: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331F58: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331F5C: nop

    // 0x80331F60: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331F64: nop

    // 0x80331F68: bne         $t1, $zero, L_80331FAC
    if (ctx->r9 != 0) {
        // 0x80331F6C: nop
    
            goto L_80331FAC;
    }
    // 0x80331F6C: nop

    // 0x80331F70: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331F74: nop

    // 0x80331F78: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331F7C: nop

    // 0x80331F80: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331F84: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331F88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F8C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80331F90: addiu       $t5, $t5, -0x751C
    ctx->r13 = ADD32(ctx->r13, -0X751C);
    // 0x80331F94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F98: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80331F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331FA0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80331FA4: jal         0x8001C0EC
    // 0x80331FA8: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331FA8: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_0:
L_80331FAC:
    // 0x80331FAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FB4: jal         0x8001B4AC
    // 0x80331FB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331FB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331FBC: beq         $v0, $zero, L_80331FDC
    if (ctx->r2 == 0) {
        // 0x80331FC0: nop
    
            goto L_80331FDC;
    }
    // 0x80331FC0: nop

    // 0x80331FC4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331FC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80331FCC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80331FD0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331FD4: nop

    // 0x80331FD8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80331FDC:
    // 0x80331FDC: b           L_80331FE4
    // 0x80331FE0: nop

        goto L_80331FE4;
    // 0x80331FE0: nop

L_80331FE4:
    // 0x80331FE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331FE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331FEC: jr          $ra
    // 0x80331FF0: nop

    return;
    // 0x80331FF0: nop

;}
