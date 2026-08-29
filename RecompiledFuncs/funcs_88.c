#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803300F0_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803300F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803300F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803300F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803300FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330100: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330104: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330108: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033010C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330110: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330114: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330118: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033011C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330120: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330124: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330128: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033012C: nop

    // 0x80330130: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330134: nop

    // 0x80330138: bne         $t1, $zero, L_80330180
    if (ctx->r9 != 0) {
        // 0x8033013C: nop
    
            goto L_80330180;
    }
    // 0x8033013C: nop

    // 0x80330140: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330144: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330148: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033014C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330150: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80330154: addiu       $t4, $t4, 0x6EC0
    ctx->r12 = ADD32(ctx->r12, 0X6EC0);
    // 0x80330158: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033015C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80330160: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330164: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330168: jal         0x8001C0EC
    // 0x8033016C: addiu       $a3, $zero, 0xF7
    ctx->r7 = ADD32(0, 0XF7);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033016C: addiu       $a3, $zero, 0xF7
    ctx->r7 = ADD32(0, 0XF7);
    after_0:
    // 0x80330170: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330174: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330178: jal         0x8001BBDC
    // 0x8033017C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033017C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_80330180:
    // 0x80330180: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330184: nop

    // 0x80330188: lh          $t6, 0xBA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XBA);
    // 0x8033018C: nop

    // 0x80330190: beq         $t6, $zero, L_80330208
    if (ctx->r14 == 0) {
        // 0x80330194: nop
    
            goto L_80330208;
    }
    // 0x80330194: nop

    // 0x80330198: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033019C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803301A0: lh          $s0, 0xBA($t7)
    ctx->r16 = MEM_H(ctx->r15, 0XBA);
    // 0x803301A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803301A8: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x803301AC: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803301B0: sltiu       $t9, $s0, 0x1
    ctx->r25 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803301B4: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x803301B8: jal         0x8001BB34
    // 0x803301BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x803301BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x803301C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803301C4: nop

    // 0x803301C8: lh          $t1, 0xBA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBA);
    // 0x803301CC: nop

    // 0x803301D0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803301D4: sh          $t2, 0xBA($t0)
    MEM_H(0XBA, ctx->r8) = ctx->r10;
    // 0x803301D8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803301DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803301E0: lh          $t4, 0xBA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBA);
    // 0x803301E4: nop

    // 0x803301E8: bne         $t4, $at, L_80330208
    if (ctx->r12 != ctx->r1) {
        // 0x803301EC: nop
    
            goto L_80330208;
    }
    // 0x803301EC: nop

    // 0x803301F0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803301F4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803301F8: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x803301FC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330200: nop

    // 0x80330204: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80330208:
    // 0x80330208: b           L_80330210
    // 0x8033020C: nop

        goto L_80330210;
    // 0x8033020C: nop

L_80330210:
    // 0x80330210: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330214: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80330218: jr          $ra
    // 0x8033021C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033021C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033040C_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033040C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330414: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330418: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033041C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330420: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330424: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330428: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033042C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330430: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330434: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330438: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033043C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330440: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330444: nop

    // 0x80330448: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033044C: nop

    // 0x80330450: bne         $t1, $zero, L_803304D4
    if (ctx->r9 != 0) {
        // 0x80330454: nop
    
            goto L_803304D4;
    }
    // 0x80330454: nop

    // 0x80330458: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033045C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330460: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80330464: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80330468: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033046C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330470: nop

    // 0x80330474: swc1        $f4, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f4.u32l;
    // 0x80330478: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033047C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330480: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330484: lwc1        $f12, 0x40($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X40);
    // 0x80330488: jal         0x80015538
    // 0x8033048C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8033048C: nop

    after_0:
    // 0x80330490: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330494: nop

    // 0x80330498: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
    // 0x8033049C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x803304A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803304A4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803304A8: nop

    // 0x803304AC: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x803304B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803304B4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803304B8: nop

    // 0x803304BC: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x803304C0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803304C4: nop

    // 0x803304C8: lwc1        $f10, 0x44($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X44);
    // 0x803304CC: nop

    // 0x803304D0: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
L_803304D4:
    // 0x803304D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304DC: jal         0x80029D04
    // 0x803304E0: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x803304E0: nop

    after_1:
    // 0x803304E4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803304E8: nop

    // 0x803304EC: lwc1        $f16, 0xD4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x803304F0: lwc1        $f18, 0x48($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X48);
    // 0x803304F4: nop

    // 0x803304F8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803304FC: swc1        $f4, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f4.u32l;
    // 0x80330500: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330504: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330508: lwc1        $f6, 0xD4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x8033050C: nop

    // 0x80330510: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80330514: nop

    // 0x80330518: bc1f        L_80330538
    if (!c1cs) {
        // 0x8033051C: nop
    
            goto L_80330538;
    }
    // 0x8033051C: nop

    // 0x80330520: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330524: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80330528: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x8033052C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330530: nop

    // 0x80330534: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80330538:
    // 0x80330538: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033053C: nop

    // 0x80330540: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80330544: nop

    // 0x80330548: beq         $t6, $zero, L_80330568
    if (ctx->r14 == 0) {
        // 0x8033054C: nop
    
            goto L_80330568;
    }
    // 0x8033054C: nop

    // 0x80330550: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330554: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80330558: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8033055C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330560: nop

    // 0x80330564: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80330568:
    // 0x80330568: b           L_80330570
    // 0x8033056C: nop

        goto L_80330570;
    // 0x8033056C: nop

L_80330570:
    // 0x80330570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330574: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330578: jr          $ra
    // 0x8033057C: nop

    return;
    // 0x8033057C: nop

;}
RECOMP_FUNC void func_80332654_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332658: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033265C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332660: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332664: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332668: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033266C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332670: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332674: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332678: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033267C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332680: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80332684: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332688: bne         $t8, $at, L_803326C4
    if (ctx->r24 != ctx->r1) {
        // 0x8033268C: nop
    
            goto L_803326C4;
    }
    // 0x8033268C: nop

    // 0x80332690: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332694: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033269C: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x803326A0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803326A4: jal         0x800175F0
    // 0x803326A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x803326A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x803326AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326B4: jal         0x8002B0E4
    // 0x803326B8: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x803326B8: nop

    after_1:
    // 0x803326BC: b           L_803326CC
    // 0x803326C0: nop

        goto L_803326CC;
    // 0x803326C0: nop

L_803326C4:
    // 0x803326C4: b           L_803326CC
    // 0x803326C8: nop

        goto L_803326CC;
    // 0x803326C8: nop

L_803326CC:
    // 0x803326CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803326D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803326D4: jr          $ra
    // 0x803326D8: nop

    return;
    // 0x803326D8: nop

;}
RECOMP_FUNC void func_803332D8_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803332D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803332DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803332E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803332E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803332E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803332EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803332F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803332F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803332F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803332FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333300: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333304: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333308: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033330C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333310: nop

    // 0x80333314: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333318: nop

    // 0x8033331C: bne         $t1, $zero, L_80333370
    if (ctx->r9 != 0) {
        // 0x80333320: nop
    
            goto L_80333370;
    }
    // 0x80333320: nop

    // 0x80333324: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333328: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033332C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80333330: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333334: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80333338: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x8033333C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333340: nop

    // 0x80333344: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
    // 0x80333348: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033334C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80333350: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
    // 0x80333354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033335C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333360: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x80333364: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333368: jal         0x800175F0
    // 0x8033336C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x8033336C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_80333370:
    // 0x80333370: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333374: nop

    // 0x80333378: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8033337C: nop

    // 0x80333380: bne         $t0, $zero, L_803333A0
    if (ctx->r8 != 0) {
        // 0x80333384: nop
    
            goto L_803333A0;
    }
    // 0x80333384: nop

    // 0x80333388: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033338C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333390: jal         0x8002B0E4
    // 0x80333394: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x80333394: nop

    after_1:
    // 0x80333398: b           L_803333D4
    // 0x8033339C: nop

        goto L_803333D4;
    // 0x8033339C: nop

L_803333A0:
    // 0x803333A0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803333A4: nop

    // 0x803333A8: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x803333AC: nop

    // 0x803333B0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x803333B4: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x803333B8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803333BC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803333C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803333C4: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x803333C8: nop

    // 0x803333CC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803333D0: swc1        $f8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f8.u32l;
L_803333D4:
    // 0x803333D4: b           L_803333DC
    // 0x803333D8: nop

        goto L_803333DC;
    // 0x803333D8: nop

L_803333DC:
    // 0x803333DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803333E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803333E4: jr          $ra
    // 0x803333E8: nop

    return;
    // 0x803333E8: nop

;}
RECOMP_FUNC void func_80332F2C_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332F2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332F34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332F38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332F3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332F40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332F44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332F4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332F54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332F58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332F5C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332F60: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x80332F64: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
L_80332F68:
    // 0x80332F68: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80332F6C: jal         0x80026E58
    // 0x80332F70: addiu       $a0, $zero, 0x163
    ctx->r4 = ADD32(0, 0X163);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_0;
    // 0x80332F70: addiu       $a0, $zero, 0x163
    ctx->r4 = ADD32(0, 0X163);
    after_0:
    // 0x80332F74: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80332F78: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80332F7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332F80: bne         $t1, $at, L_80332F98
    if (ctx->r9 != ctx->r1) {
        // 0x80332F84: nop
    
            goto L_80332F98;
    }
    // 0x80332F84: nop

    // 0x80332F88: b           L_80332FDC
    // 0x80332F8C: nop

        goto L_80332FDC;
    // 0x80332F8C: nop

    // 0x80332F90: b           L_80332FD4
    // 0x80332F94: nop

        goto L_80332FD4;
    // 0x80332F94: nop

L_80332F98:
    // 0x80332F98: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80332F9C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80332FA0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332FA4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332FA8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332FAC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332FB0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332FB4: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80332FB8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80332FBC: lh          $t6, 0xB6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB6);
    // 0x80332FC0: nop

    // 0x80332FC4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80332FC8: sh          $t7, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r15;
    // 0x80332FCC: b           L_80332FDC
    // 0x80332FD0: nop

        goto L_80332FDC;
    // 0x80332FD0: nop

L_80332FD4:
    // 0x80332FD4: b           L_80332F68
    // 0x80332FD8: nop

        goto L_80332F68;
    // 0x80332FD8: nop

L_80332FDC:
    // 0x80332FDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332FE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332FE4: jal         0x8002B0E4
    // 0x80332FE8: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x80332FE8: nop

    after_1:
    // 0x80332FEC: b           L_80332FF4
    // 0x80332FF0: nop

        goto L_80332FF4;
    // 0x80332FF0: nop

L_80332FF4:
    // 0x80332FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332FF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332FFC: jr          $ra
    // 0x80333000: nop

    return;
    // 0x80333000: nop

;}
RECOMP_FUNC void func_8033148C_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033148C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80331490: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80331494: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331498: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033149C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803314A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803314A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803314A8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803314AC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803314B0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803314B4: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x803314B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803314BC: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x803314C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803314C4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803314C8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803314CC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803314D0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803314D4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803314D8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803314DC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803314E0: jr          $ra
    // 0x803314E4: nop

    return;
    // 0x803314E4: nop

    // 0x803314E8: jr          $ra
    // 0x803314EC: nop

    return;
    // 0x803314EC: nop

;}
RECOMP_FUNC void func_803333EC_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803333EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803333F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803333F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803333F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803333FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333400: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80333404: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033340C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333410: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333414: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333418: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8033341C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80333420: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333424: beq         $s0, $at, L_80333440
    if (ctx->r16 == ctx->r1) {
        // 0x80333428: nop
    
            goto L_80333440;
    }
    // 0x80333428: nop

    // 0x8033342C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80333430: beq         $s0, $at, L_80333450
    if (ctx->r16 == ctx->r1) {
        // 0x80333434: nop
    
            goto L_80333450;
    }
    // 0x80333434: nop

    // 0x80333438: b           L_80333460
    // 0x8033343C: nop

        goto L_80333460;
    // 0x8033343C: nop

L_80333440:
    // 0x80333440: jal         0x80333158
    // 0x80333444: nop

    func_80333158_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x80333444: nop

    after_0:
    // 0x80333448: b           L_80333468
    // 0x8033344C: nop

        goto L_80333468;
    // 0x8033344C: nop

L_80333450:
    // 0x80333450: jal         0x803332D8
    // 0x80333454: nop

    func_803332D8_unk_bin_39(rdram, ctx);
        goto after_1;
    // 0x80333454: nop

    after_1:
    // 0x80333458: b           L_80333468
    // 0x8033345C: nop

        goto L_80333468;
    // 0x8033345C: nop

L_80333460:
    // 0x80333460: b           L_80333468
    // 0x80333464: nop

        goto L_80333468;
    // 0x80333464: nop

L_80333468:
    // 0x80333468: b           L_80333470
    // 0x8033346C: nop

        goto L_80333470;
    // 0x8033346C: nop

L_80333470:
    // 0x80333470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333474: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80333478: jr          $ra
    // 0x8033347C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033347C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80332E28_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332E28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332E2C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80332E30: nop

    // 0x80332E34: bne         $t6, $zero, L_80332EB8
    if (ctx->r14 != 0) {
        // 0x80332E38: nop
    
            goto L_80332EB8;
    }
    // 0x80332E38: nop

    // 0x80332E3C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80332E40: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80332E44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E48: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332E4C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332E50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332E54: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332E58: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332E5C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332E60: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80332E64: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80332E68: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80332E6C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80332E70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E74: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332E78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332E7C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332E80: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332E84: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332E88: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332E8C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80332E90: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80332E94: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80332E98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E9C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332EA0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332EA4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332EA8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332EAC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332EB0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332EB4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80332EB8:
    // 0x80332EB8: jr          $ra
    // 0x80332EBC: nop

    return;
    // 0x80332EBC: nop

    // 0x80332EC0: jr          $ra
    // 0x80332EC4: nop

    return;
    // 0x80332EC4: nop

;}
RECOMP_FUNC void func_80333098_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333098: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033309C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803330A0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803330A4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803330A8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803330AC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803330B0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803330B4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803330B8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803330BC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803330C0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803330C4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803330C8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803330CC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x803330D0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803330D4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803330D8: addiu       $a1, $a1, 0x42B8
    ctx->r5 = ADD32(ctx->r5, 0X42B8);
    // 0x803330DC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803330E0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803330E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803330E8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803330EC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803330F0: jal         0x80027464
    // 0x803330F4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803330F4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803330F8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803330FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333100: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333104: beq         $t1, $at, L_80333130
    if (ctx->r9 == ctx->r1) {
        // 0x80333108: nop
    
            goto L_80333130;
    }
    // 0x80333108: nop

    // 0x8033310C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333110: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333114: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333118: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033311C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333120: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333124: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333128: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033312C: sh          $zero, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = 0;
L_80333130:
    // 0x80333130: b           L_80333138
    // 0x80333134: nop

        goto L_80333138;
    // 0x80333134: nop

L_80333138:
    // 0x80333138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033313C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333140: jr          $ra
    // 0x80333144: nop

    return;
    // 0x80333144: nop

    // 0x80333148: jr          $ra
    // 0x8033314C: nop

    return;
    // 0x8033314C: nop

    // 0x80333150: jr          $ra
    // 0x80333154: nop

    return;
    // 0x80333154: nop

;}
RECOMP_FUNC void func_80332ADC_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332ADC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332AE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332AE4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80332AE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332AEC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332AF0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332AF4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332AF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332AFC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332B00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B04: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332B08: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B0C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B10: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80332B14: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332B18: nop

    // 0x80332B1C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332B20: nop

    // 0x80332B24: bne         $t1, $zero, L_80332B9C
    if (ctx->r9 != 0) {
        // 0x80332B28: nop
    
            goto L_80332B9C;
    }
    // 0x80332B28: nop

    // 0x80332B2C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332B30: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80332B34: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80332B38: jal         0x80014E80
    // 0x80332B3C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80332B3C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x80332B40: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80332B44: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332B48: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332B4C: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
    // 0x80332B50: jal         0x80014E80
    // 0x80332B54: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80332B54: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x80332B58: addiu       $t5, $v0, 0xA
    ctx->r13 = ADD32(ctx->r2, 0XA);
    // 0x80332B5C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80332B60: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332B64: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332B68: swc1        $f10, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f10.u32l;
    // 0x80332B6C: jal         0x80014E80
    // 0x80332B70: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80332B70: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x80332B74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80332B78: addiu       $t7, $s0, 0x20
    ctx->r15 = ADD32(ctx->r16, 0X20);
    // 0x80332B7C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80332B80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B84: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332B88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B8C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x80332B90: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80332B94: jal         0x80029EF8
    // 0x80332B98: nop

    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x80332B98: nop

    after_3:
L_80332B9C:
    // 0x80332B9C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332BA0: nop

    // 0x80332BA4: lwc1        $f18, 0x28($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80332BA8: nop

    // 0x80332BAC: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80332BB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332BB4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332BB8: nop

    // 0x80332BBC: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    // 0x80332BC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332BC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332BC8: jal         0x80029C40
    // 0x80332BCC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80332BCC: nop

    after_4:
    // 0x80332BD0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332BD4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332BD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332BDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332BE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332BE4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80332BE8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332BEC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332BF0: jal         0x80029018
    // 0x80332BF4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80332BF4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80332BF8: beq         $v0, $zero, L_80332C24
    if (ctx->r2 == 0) {
        // 0x80332BFC: nop
    
            goto L_80332C24;
    }
    // 0x80332BFC: nop

    // 0x80332C00: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332C04: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332C08: nop

    // 0x80332C0C: swc1        $f10, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f10.u32l;
    // 0x80332C10: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332C14: nop

    // 0x80332C18: lwc1        $f16, 0x2C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80332C1C: nop

    // 0x80332C20: swc1        $f16, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f16.u32l;
L_80332C24:
    // 0x80332C24: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80332C28: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332C2C: nop

    // 0x80332C30: swc1        $f18, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f18.u32l;
    // 0x80332C34: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332C38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332C3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C44: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80332C48: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332C4C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332C50: jal         0x80029F58
    // 0x80332C54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80029F58(rdram, ctx);
        goto after_6;
    // 0x80332C54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80332C58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332C5C: bne         $v0, $at, L_80332C7C
    if (ctx->r2 != ctx->r1) {
        // 0x80332C60: nop
    
            goto L_80332C7C;
    }
    // 0x80332C60: nop

    // 0x80332C64: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332C68: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80332C6C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332C70: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332C74: nop

    // 0x80332C78: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80332C7C:
    // 0x80332C7C: b           L_80332C84
    // 0x80332C80: nop

        goto L_80332C84;
    // 0x80332C80: nop

L_80332C84:
    // 0x80332C84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332C88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80332C8C: jr          $ra
    // 0x80332C90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80332C90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80332764_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332764: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033276C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332770: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332774: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332778: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033277C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332780: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332784: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332788: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033278C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332790: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332794: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332798: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033279C: nop

    // 0x803327A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803327A4: nop

    // 0x803327A8: bne         $t1, $zero, L_803327E8
    if (ctx->r9 != 0) {
        // 0x803327AC: nop
    
            goto L_803327E8;
    }
    // 0x803327AC: nop

    // 0x803327B0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803327B4: nop

    // 0x803327B8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803327BC: nop

    // 0x803327C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803327C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803327C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803327CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803327D0: jal         0x8001BB34
    // 0x803327D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803327D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803327D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803327DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803327E0: jal         0x8001BB04
    // 0x803327E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x803327E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_803327E8:
    // 0x803327E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803327EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803327F0: jal         0x8002A1FC
    // 0x803327F4: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x803327F4: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_2:
    // 0x803327F8: beq         $v0, $zero, L_80332818
    if (ctx->r2 == 0) {
        // 0x803327FC: nop
    
            goto L_80332818;
    }
    // 0x803327FC: nop

    // 0x80332800: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332804: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80332808: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x8033280C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332810: nop

    // 0x80332814: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80332818:
    // 0x80332818: b           L_80332820
    // 0x8033281C: nop

        goto L_80332820;
    // 0x8033281C: nop

L_80332820:
    // 0x80332820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332824: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332828: jr          $ra
    // 0x8033282C: nop

    return;
    // 0x8033282C: nop

;}
RECOMP_FUNC void func_8033252C_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033252C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332530: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332534: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80332538: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033253C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332540: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332544: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332548: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033254C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332550: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332554: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332558: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033255C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80332560: nop

    // 0x80332564: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80332568: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8033256C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332570: beq         $s0, $at, L_8033258C
    if (ctx->r16 == ctx->r1) {
        // 0x80332574: nop
    
            goto L_8033258C;
    }
    // 0x80332574: nop

    // 0x80332578: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033257C: beq         $s0, $at, L_8033259C
    if (ctx->r16 == ctx->r1) {
        // 0x80332580: nop
    
            goto L_8033259C;
    }
    // 0x80332580: nop

    // 0x80332584: b           L_803325AC
    // 0x80332588: nop

        goto L_803325AC;
    // 0x80332588: nop

L_8033258C:
    // 0x8033258C: jal         0x803322E4
    // 0x80332590: nop

    func_803322E4_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x80332590: nop

    after_0:
    // 0x80332594: b           L_803325B4
    // 0x80332598: nop

        goto L_803325B4;
    // 0x80332598: nop

L_8033259C:
    // 0x8033259C: jal         0x80332394
    // 0x803325A0: nop

    func_80332394_unk_bin_39(rdram, ctx);
        goto after_1;
    // 0x803325A0: nop

    after_1:
    // 0x803325A4: b           L_803325B4
    // 0x803325A8: nop

        goto L_803325B4;
    // 0x803325A8: nop

L_803325AC:
    // 0x803325AC: b           L_803325B4
    // 0x803325B0: nop

        goto L_803325B4;
    // 0x803325B0: nop

L_803325B4:
    // 0x803325B4: b           L_803325BC
    // 0x803325B8: nop

        goto L_803325BC;
    // 0x803325B8: nop

L_803325BC:
    // 0x803325BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803325C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803325C4: jr          $ra
    // 0x803325C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803325C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803312F0_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803312F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803312F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803312F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803312FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80331300: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80331304: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80331308: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x8033130C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331310: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80331314: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80331318: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x8033131C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331320: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331324: lwc1        $f16, 0x3C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80331328: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8033132C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80331330: addiu       $a1, $a1, 0x3AB4
    ctx->r5 = ADD32(ctx->r5, 0X3AB4);
    // 0x80331334: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331338: jal         0x80027464
    // 0x8033133C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033133C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80331340: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80331344: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x80331348: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033134C: beq         $t7, $at, L_80331458
    if (ctx->r15 == ctx->r1) {
        // 0x80331350: nop
    
            goto L_80331458;
    }
    // 0x80331350: nop

    // 0x80331354: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x80331358: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8033135C: jal         0x80026F10
    // 0x80331360: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x80331360: nop

    after_1:
    // 0x80331364: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x80331368: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033136C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331370: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331374: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331378: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033137C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331380: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80331384: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80331388: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8033138C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80331390: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331394: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80331398: nop

    // 0x8033139C: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x803313A0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x803313A4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803313A8: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x803313AC: nop

    // 0x803313B0: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x803313B4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x803313B8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803313BC: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803313C0: nop

    // 0x803313C4: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x803313C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803313CC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803313D0: nop

    // 0x803313D4: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x803313D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803313DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803313E0: nop

    // 0x803313E4: swc1        $f10, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f10.u32l;
    // 0x803313E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803313EC: nop

    // 0x803313F0: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
    // 0x803313F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803313F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803313FC: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80331400: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80331404: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331408: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x8033140C: nop

    // 0x80331410: sh          $t4, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r12;
    // 0x80331414: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80331418: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033141C: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x80331420: nop

    // 0x80331424: sh          $t7, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r15;
    // 0x80331428: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033142C: addiu       $t9, $zero, 0x258
    ctx->r25 = ADD32(0, 0X258);
    // 0x80331430: sh          $t9, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r25;
    // 0x80331434: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331438: nop

    // 0x8033143C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80331440: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80331444: jal         0x80029C40
    // 0x80331448: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80331448: nop

    after_2:
    // 0x8033144C: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80331450: jal         0x80029D04
    // 0x80331454: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80331454: nop

    after_3:
L_80331458:
    // 0x80331458: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x8033145C: b           L_8033146C
    // 0x80331460: nop

        goto L_8033146C;
    // 0x80331460: nop

    // 0x80331464: b           L_8033146C
    // 0x80331468: nop

        goto L_8033146C;
    // 0x80331468: nop

L_8033146C:
    // 0x8033146C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331470: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331474: jr          $ra
    // 0x80331478: nop

    return;
    // 0x80331478: nop

    // 0x8033147C: jr          $ra
    // 0x80331480: nop

    return;
    // 0x80331480: nop

    // 0x80331484: jr          $ra
    // 0x80331488: nop

    return;
    // 0x80331488: nop

;}
RECOMP_FUNC void func_80332830_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332830: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80332834: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332838: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033283C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332840: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332844: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332848: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033284C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332850: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332854: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332858: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033285C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332860: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332864: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332868: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8033286C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332870: nop

    // 0x80332874: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332878: nop

    // 0x8033287C: bne         $t1, $zero, L_803328A8
    if (ctx->r9 != 0) {
        // 0x80332880: nop
    
            goto L_803328A8;
    }
    // 0x80332880: nop

    // 0x80332884: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332888: nop

    // 0x8033288C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332890: nop

    // 0x80332894: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332898: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033289C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803328A0: nop

    // 0x803328A4: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_803328A8:
    // 0x803328A8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803328AC: nop

    // 0x803328B0: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x803328B4: nop

    // 0x803328B8: bne         $t7, $zero, L_803329D4
    if (ctx->r15 != 0) {
        // 0x803328BC: nop
    
            goto L_803329D4;
    }
    // 0x803328BC: nop

    // 0x803328C0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803328C4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803328C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803328CC: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x803328D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803328D4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803328D8: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803328DC: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x803328E0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803328E4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803328E8: addiu       $a1, $a1, 0x4684
    ctx->r5 = ADD32(ctx->r5, 0X4684);
    // 0x803328EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803328F0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x803328F4: jal         0x80027464
    // 0x803328F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803328F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x803328FC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80332900: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80332904: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332908: beq         $t9, $at, L_803329C4
    if (ctx->r25 == ctx->r1) {
        // 0x8033290C: nop
    
            goto L_803329C4;
    }
    // 0x8033290C: nop

    // 0x80332910: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80332914: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80332918: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033291C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332920: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332924: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332928: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033292C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332930: lwc1        $f18, 0x3490($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3490);
    // 0x80332934: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332938: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033293C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332940: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332944: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80332948: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033294C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332950: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80332954: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332958: addu        $t5, $t4, $t2
    ctx->r13 = ADD32(ctx->r12, ctx->r10);
    // 0x8033295C: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
    // 0x80332960: lwc1        $f20, 0x14($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X14);
    // 0x80332964: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332968: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x8033296C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80332970: nop

    // 0x80332974: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332978: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033297C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332980: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332984: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332988: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033298C: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x80332990: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80332994: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80332998: addiu       $a3, $a3, 0x7E48
    ctx->r7 = ADD32(ctx->r7, 0X7E48);
    // 0x8033299C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803329A0: jal         0x8001ABF4
    // 0x803329A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803329A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803329A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803329B4: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x803329B8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803329BC: jal         0x800175F0
    // 0x803329C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x803329C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_803329C4:
    // 0x803329C4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803329C8: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x803329CC: b           L_803329EC
    // 0x803329D0: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
        goto L_803329EC;
    // 0x803329D0: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_803329D4:
    // 0x803329D4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803329D8: nop

    // 0x803329DC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803329E0: nop

    // 0x803329E4: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x803329E8: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_803329EC:
    // 0x803329EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329F4: jal         0x8002A1FC
    // 0x803329F8: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x803329F8: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    after_3:
    // 0x803329FC: bne         $v0, $zero, L_80332A1C
    if (ctx->r2 != 0) {
        // 0x80332A00: nop
    
            goto L_80332A1C;
    }
    // 0x80332A00: nop

    // 0x80332A04: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332A08: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80332A0C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80332A10: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332A14: nop

    // 0x80332A18: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80332A1C:
    // 0x80332A1C: b           L_80332A24
    // 0x80332A20: nop

        goto L_80332A24;
    // 0x80332A20: nop

L_80332A24:
    // 0x80332A24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332A28: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80332A2C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332A30: jr          $ra
    // 0x80332A34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80332A34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803307F8_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803307F8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803307FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330800: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330804: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330808: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033080C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330810: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330814: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330818: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033081C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330820: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330824: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80330828: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033082C: nop

    // 0x80330830: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330834: nop

    // 0x80330838: bne         $t1, $zero, L_80330864
    if (ctx->r9 != 0) {
        // 0x8033083C: nop
    
            goto L_80330864;
    }
    // 0x8033083C: nop

    // 0x80330840: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80330844: nop

    // 0x80330848: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033084C: nop

    // 0x80330850: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330854: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330858: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8033085C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80330860: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
L_80330864:
    // 0x80330864: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330868: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8033086C: nop

    // 0x80330870: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x80330874: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80330878: nop

    // 0x8033087C: lwc1        $f12, 0x2C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80330880: nop

    // 0x80330884: swc1        $f12, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f12.u32l;
    // 0x80330888: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8033088C: nop

    // 0x80330890: swc1        $f12, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f12.u32l;
    // 0x80330894: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80330898: nop

    // 0x8033089C: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x803308A0: nop

    // 0x803308A4: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x803308A8: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
    // 0x803308AC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x803308B0: nop

    // 0x803308B4: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x803308B8: nop

    // 0x803308BC: blez        $t2, L_803308D4
    if (SIGNED(ctx->r10) <= 0) {
        // 0x803308C0: nop
    
            goto L_803308D4;
    }
    // 0x803308C0: nop

    // 0x803308C4: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x803308C8: nop

    // 0x803308CC: beq         $t5, $zero, L_803308EC
    if (ctx->r13 == 0) {
        // 0x803308D0: nop
    
            goto L_803308EC;
    }
    // 0x803308D0: nop

L_803308D4:
    // 0x803308D4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x803308D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803308DC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x803308E0: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x803308E4: nop

    // 0x803308E8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_803308EC:
    // 0x803308EC: b           L_803308F4
    // 0x803308F0: nop

        goto L_803308F4;
    // 0x803308F0: nop

L_803308F4:
    // 0x803308F4: jr          $ra
    // 0x803308F8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803308F8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80332ACC_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332ACC: jr          $ra
    // 0x80332AD0: nop

    return;
    // 0x80332AD0: nop

    // 0x80332AD4: jr          $ra
    // 0x80332AD8: nop

    return;
    // 0x80332AD8: nop

;}
RECOMP_FUNC void func_80330F08_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330F08: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80330F0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330F10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330F14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330F18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330F1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330F24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330F2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330F30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330F34: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80330F38: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80330F3C: nop

    // 0x80330F40: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330F44: nop

    // 0x80330F48: bne         $t1, $zero, L_80330F74
    if (ctx->r9 != 0) {
        // 0x80330F4C: nop
    
            goto L_80330F74;
    }
    // 0x80330F4C: nop

    // 0x80330F50: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80330F54: nop

    // 0x80330F58: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330F5C: nop

    // 0x80330F60: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330F64: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330F68: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80330F6C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80330F70: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
L_80330F74:
    // 0x80330F74: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80330F78: nop

    // 0x80330F7C: lh          $t8, 0xBA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XBA);
    // 0x80330F80: nop

    // 0x80330F84: blez        $t8, L_80330FC0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80330F88: nop
    
            goto L_80330FC0;
    }
    // 0x80330F88: nop

    // 0x80330F8C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80330F90: nop

    // 0x80330F94: lh          $t0, 0xBA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBA);
    // 0x80330F98: nop

    // 0x80330F9C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80330FA0: sh          $t1, 0xBA($t9)
    MEM_H(0XBA, ctx->r25) = ctx->r9;
    // 0x80330FA4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80330FA8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80330FAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330FB0: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80330FB4: nop

    // 0x80330FB8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330FBC: swc1        $f8, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f8.u32l;
L_80330FC0:
    // 0x80330FC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330FC4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80330FC8: nop

    // 0x80330FCC: swc1        $f10, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f10.u32l;
    // 0x80330FD0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80330FD4: nop

    // 0x80330FD8: lwc1        $f12, 0x2C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80330FDC: nop

    // 0x80330FE0: swc1        $f12, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f12.u32l;
    // 0x80330FE4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80330FE8: nop

    // 0x80330FEC: swc1        $f12, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f12.u32l;
    // 0x80330FF0: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80330FF4: nop

    // 0x80330FF8: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x80330FFC: nop

    // 0x80331000: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80331004: sh          $t8, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r24;
    // 0x80331008: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033100C: nop

    // 0x80331010: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80331014: nop

    // 0x80331018: blez        $t1, L_80331030
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8033101C: nop
    
            goto L_80331030;
    }
    // 0x8033101C: nop

    // 0x80331020: lh          $t9, 0xA6($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XA6);
    // 0x80331024: nop

    // 0x80331028: beq         $t9, $zero, L_80331048
    if (ctx->r25 == 0) {
        // 0x8033102C: nop
    
            goto L_80331048;
    }
    // 0x8033102C: nop

L_80331030:
    // 0x80331030: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80331034: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80331038: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033103C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80331040: nop

    // 0x80331044: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80331048:
    // 0x80331048: b           L_80331050
    // 0x8033104C: nop

        goto L_80331050;
    // 0x8033104C: nop

L_80331050:
    // 0x80331050: jr          $ra
    // 0x80331054: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80331054: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80332EC8_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332EC8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80332ECC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332ED0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332ED4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332ED8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332EDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332EE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332EE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332EE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332EEC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332EF0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332EF4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80332EF8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80332EFC: nop

    // 0x80332F00: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332F04: nop

    // 0x80332F08: bne         $t1, $zero, L_80332F1C
    if (ctx->r9 != 0) {
        // 0x80332F0C: nop
    
            goto L_80332F1C;
    }
    // 0x80332F0C: nop

    // 0x80332F10: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80332F14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80332F18: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_80332F1C:
    // 0x80332F1C: b           L_80332F24
    // 0x80332F20: nop

        goto L_80332F24;
    // 0x80332F20: nop

L_80332F24:
    // 0x80332F24: jr          $ra
    // 0x80332F28: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80332F28: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_803325CC_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803325CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803325D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803325D4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803325D8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803325DC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803325E0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803325E4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803325E8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803325EC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803325F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803325F4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803325F8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803325FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332600: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80332604: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332608: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033260C: addiu       $a1, $a1, 0x3A60
    ctx->r5 = ADD32(ctx->r5, 0X3A60);
    // 0x80332610: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332614: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80332618: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033261C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332620: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80332624: jal         0x80027464
    // 0x80332628: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80332628: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033262C: b           L_80332634
    // 0x80332630: nop

        goto L_80332634;
    // 0x80332630: nop

L_80332634:
    // 0x80332634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332638: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033263C: jr          $ra
    // 0x80332640: nop

    return;
    // 0x80332640: nop

    // 0x80332644: jr          $ra
    // 0x80332648: nop

    return;
    // 0x80332648: nop

    // 0x8033264C: jr          $ra
    // 0x80332650: nop

    return;
    // 0x80332650: nop

;}
RECOMP_FUNC void func_80332D1C_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332D1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332D20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332D24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80332D28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332D2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332D30: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80332D34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332D38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332D3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332D40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332D44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332D48: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80332D4C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80332D50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332D54: beq         $s0, $at, L_80332D70
    if (ctx->r16 == ctx->r1) {
        // 0x80332D58: nop
    
            goto L_80332D70;
    }
    // 0x80332D58: nop

    // 0x80332D5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332D60: beq         $s0, $at, L_80332D80
    if (ctx->r16 == ctx->r1) {
        // 0x80332D64: nop
    
            goto L_80332D80;
    }
    // 0x80332D64: nop

    // 0x80332D68: b           L_80332D90
    // 0x80332D6C: nop

        goto L_80332D90;
    // 0x80332D6C: nop

L_80332D70:
    // 0x80332D70: jal         0x80332ADC
    // 0x80332D74: nop

    func_80332ADC_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x80332D74: nop

    after_0:
    // 0x80332D78: b           L_80332D98
    // 0x80332D7C: nop

        goto L_80332D98;
    // 0x80332D7C: nop

L_80332D80:
    // 0x80332D80: jal         0x80332C94
    // 0x80332D84: nop

    func_80332C94_unk_bin_39(rdram, ctx);
        goto after_1;
    // 0x80332D84: nop

    after_1:
    // 0x80332D88: b           L_80332D98
    // 0x80332D8C: nop

        goto L_80332D98;
    // 0x80332D8C: nop

L_80332D90:
    // 0x80332D90: b           L_80332D98
    // 0x80332D94: nop

        goto L_80332D98;
    // 0x80332D94: nop

L_80332D98:
    // 0x80332D98: b           L_80332DA0
    // 0x80332D9C: nop

        goto L_80332DA0;
    // 0x80332D9C: nop

L_80332DA0:
    // 0x80332DA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332DA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80332DA8: jr          $ra
    // 0x80332DAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80332DAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80330220_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330220: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330228: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033022C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330230: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330234: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330238: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033023C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330240: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330244: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330248: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033024C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330250: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330254: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330258: nop

    // 0x8033025C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330260: nop

    // 0x80330264: bne         $t1, $zero, L_80330288
    if (ctx->r9 != 0) {
        // 0x80330268: nop
    
            goto L_80330288;
    }
    // 0x80330268: nop

    // 0x8033026C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330270: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330274: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80330278: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033027C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330280: jal         0x8001BBDC
    // 0x80330284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80330284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_80330288:
    // 0x80330288: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033028C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330290: jal         0x8001B44C
    // 0x80330294: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x80330294: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80330298: beq         $v0, $zero, L_803302B0
    if (ctx->r2 == 0) {
        // 0x8033029C: nop
    
            goto L_803302B0;
    }
    // 0x8033029C: nop

    // 0x803302A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803302A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803302A8: jal         0x8002B0E4
    // 0x803302AC: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x803302AC: nop

    after_2:
L_803302B0:
    // 0x803302B0: b           L_803302B8
    // 0x803302B4: nop

        goto L_803302B8;
    // 0x803302B4: nop

L_803302B8:
    // 0x803302B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803302BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803302C0: jr          $ra
    // 0x803302C4: nop

    return;
    // 0x803302C4: nop

;}
RECOMP_FUNC void func_80330A84_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330A84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330A88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330A8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330A90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330A94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330A98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330A9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330AA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330AA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330AA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330AAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330AB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330AB4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330AB8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330ABC: nop

    // 0x80330AC0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330AC4: nop

    // 0x80330AC8: bne         $t1, $zero, L_80330B4C
    if (ctx->r9 != 0) {
        // 0x80330ACC: nop
    
            goto L_80330B4C;
    }
    // 0x80330ACC: nop

    // 0x80330AD0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AD4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330AD8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80330ADC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80330AE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330AE4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AE8: nop

    // 0x80330AEC: swc1        $f4, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f4.u32l;
    // 0x80330AF0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AF4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330AF8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330AFC: lwc1        $f12, 0x40($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X40);
    // 0x80330B00: jal         0x80015538
    // 0x80330B04: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80330B04: nop

    after_0:
    // 0x80330B08: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B0C: nop

    // 0x80330B10: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
    // 0x80330B14: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80330B18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330B1C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B20: nop

    // 0x80330B24: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x80330B28: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330B2C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B30: nop

    // 0x80330B34: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x80330B38: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B3C: nop

    // 0x80330B40: lwc1        $f10, 0x44($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80330B44: nop

    // 0x80330B48: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
L_80330B4C:
    // 0x80330B4C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B50: nop

    // 0x80330B54: lh          $t1, 0xBA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBA);
    // 0x80330B58: nop

    // 0x80330B5C: blez        $t1, L_80330B98
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80330B60: nop
    
            goto L_80330B98;
    }
    // 0x80330B60: nop

    // 0x80330B64: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B68: nop

    // 0x80330B6C: lh          $t3, 0xBA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XBA);
    // 0x80330B70: nop

    // 0x80330B74: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80330B78: sh          $t4, 0xBA($t2)
    MEM_H(0XBA, ctx->r10) = ctx->r12;
    // 0x80330B7C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B80: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80330B84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330B88: lwc1        $f16, 0x8($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80330B8C: nop

    // 0x80330B90: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330B94: swc1        $f4, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f4.u32l;
L_80330B98:
    // 0x80330B98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BA0: jal         0x80029D04
    // 0x80330BA4: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80330BA4: nop

    after_1:
    // 0x80330BA8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BAC: nop

    // 0x80330BB0: lwc1        $f6, 0xD4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x80330BB4: lwc1        $f8, 0x48($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X48);
    // 0x80330BB8: nop

    // 0x80330BBC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80330BC0: swc1        $f10, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f10.u32l;
    // 0x80330BC4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BC8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330BCC: lwc1        $f16, 0xD4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0XD4);
    // 0x80330BD0: nop

    // 0x80330BD4: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80330BD8: nop

    // 0x80330BDC: bc1f        L_80330BFC
    if (!c1cs) {
        // 0x80330BE0: nop
    
            goto L_80330BFC;
    }
    // 0x80330BE0: nop

    // 0x80330BE4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BE8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80330BEC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330BF0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BF4: nop

    // 0x80330BF8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330BFC:
    // 0x80330BFC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C00: nop

    // 0x80330C04: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x80330C08: nop

    // 0x80330C0C: beq         $t3, $zero, L_80330C2C
    if (ctx->r11 == 0) {
        // 0x80330C10: nop
    
            goto L_80330C2C;
    }
    // 0x80330C10: nop

    // 0x80330C14: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C18: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80330C1C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80330C20: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C24: nop

    // 0x80330C28: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80330C2C:
    // 0x80330C2C: b           L_80330C34
    // 0x80330C30: nop

        goto L_80330C34;
    // 0x80330C30: nop

L_80330C34:
    // 0x80330C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330C38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330C3C: jr          $ra
    // 0x80330C40: nop

    return;
    // 0x80330C40: nop

;}
RECOMP_FUNC void func_80332064_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332064: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033206C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80332070: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80332074: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80332078: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033207C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80332080: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80332084: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80332088: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033208C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80332090: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80332094: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332098: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033209C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803320A0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803320A4: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x803320A8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803320AC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803320B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803320B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803320B8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803320BC: jal         0x80027464
    // 0x803320C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803320C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803320C4: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x803320C8: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x803320CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803320D0: beq         $t1, $at, L_80332218
    if (ctx->r9 == ctx->r1) {
        // 0x803320D4: nop
    
            goto L_80332218;
    }
    // 0x803320D4: nop

    // 0x803320D8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x803320DC: lw          $a0, 0x519C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X519C);
    // 0x803320E0: jal         0x80026260
    // 0x803320E4: nop

    func_80026260(rdram, ctx);
        goto after_1;
    // 0x803320E4: nop

    after_1:
    // 0x803320E8: bne         $v0, $zero, L_80332140
    if (ctx->r2 != 0) {
        // 0x803320EC: nop
    
            goto L_80332140;
    }
    // 0x803320EC: nop

    // 0x803320F0: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x803320F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803320F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803320FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332100: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332104: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332108: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033210C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332110: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80332114: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80332118: lb          $t5, 0x27($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X27);
    // 0x8033211C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332120: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332124: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332128: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033212C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332130: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332134: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332138: b           L_80332190
    // 0x8033213C: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
        goto L_80332190;
    // 0x8033213C: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
L_80332140:
    // 0x80332140: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x80332144: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332148: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033214C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80332150: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332154: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80332158: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033215C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332160: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80332164: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80332168: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x8033216C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332170: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332174: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332178: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033217C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332180: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332184: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332188: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033218C: sh          $t0, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r8;
L_80332190:
    // 0x80332190: lb          $t5, 0x27($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X27);
    // 0x80332194: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80332198: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033219C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803321A0: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x803321A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803321A8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803321AC: lh          $t4, 0xA($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XA);
    // 0x803321B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803321B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803321B8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803321BC: sh          $t4, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r12;
    // 0x803321C0: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x803321C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803321C8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x803321CC: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x803321D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803321D4: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x803321D8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803321DC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803321E0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803321E4: lb          $t6, 0x27($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X27);
    // 0x803321E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803321EC: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x803321F0: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x803321F4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803321F8: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x803321FC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332200: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332204: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332208: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x8033220C: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80332210: jal         0x8001BBDC
    // 0x80332214: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80332214: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80332218:
    // 0x80332218: b           L_80332220
    // 0x8033221C: nop

        goto L_80332220;
    // 0x8033221C: nop

L_80332220:
    // 0x80332220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332224: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332228: jr          $ra
    // 0x8033222C: nop

    return;
    // 0x8033222C: nop

;}
RECOMP_FUNC void func_803314F0_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803314F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803314F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803314F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803314FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331500: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331504: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331508: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033150C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331510: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331514: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331518: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033151C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331520: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331524: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331528: nop

    // 0x8033152C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331530: nop

    // 0x80331534: bne         $t1, $zero, L_803315E8
    if (ctx->r9 != 0) {
        // 0x80331538: nop
    
            goto L_803315E8;
    }
    // 0x80331538: nop

    // 0x8033153C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331540: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331544: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331548: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033154C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331550: nop

    // 0x80331554: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80331558: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033155C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331560: nop

    // 0x80331564: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80331568: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033156C: nop

    // 0x80331570: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
    // 0x80331574: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331578: nop

    // 0x8033157C: sh          $zero, 0x108($t7)
    MEM_H(0X108, ctx->r15) = 0;
    // 0x80331580: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331584: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331588: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x8033158C: nop

    // 0x80331590: bne         $t9, $at, L_803315A4
    if (ctx->r25 != ctx->r1) {
        // 0x80331594: nop
    
            goto L_803315A4;
    }
    // 0x80331594: nop

    // 0x80331598: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033159C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803315A0: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
L_803315A4:
    // 0x803315A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803315A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315AC: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x803315B0: addiu       $t3, $t3, 0x7CB4
    ctx->r11 = ADD32(ctx->r11, 0X7CB4);
    // 0x803315B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315B8: lh          $a2, 0xA8($t2)
    ctx->r6 = MEM_H(ctx->r10, 0XA8);
    // 0x803315BC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803315C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803315C4: jal         0x8001C0EC
    // 0x803315C8: addiu       $a3, $zero, 0xF1
    ctx->r7 = ADD32(0, 0XF1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803315C8: addiu       $a3, $zero, 0xF1
    ctx->r7 = ADD32(0, 0XF1);
    after_0:
    // 0x803315CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315D4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803315D8: addiu       $a3, $a3, 0x7D6C
    ctx->r7 = ADD32(ctx->r7, 0X7D6C);
    // 0x803315DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803315E0: jal         0x8001ABF4
    // 0x803315E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803315E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_803315E8:
    // 0x803315E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315F0: jal         0x80029C40
    // 0x803315F4: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x803315F4: nop

    after_2:
    // 0x803315F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331600: jal         0x80029D04
    // 0x80331604: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80331604: nop

    after_3:
    // 0x80331608: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033160C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331610: jal         0x8001B44C
    // 0x80331614: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x80331614: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80331618: beq         $v0, $zero, L_8033195C
    if (ctx->r2 == 0) {
        // 0x8033161C: nop
    
            goto L_8033195C;
    }
    // 0x8033161C: nop

    // 0x80331620: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331624: nop

    // 0x80331628: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x8033162C: nop

    // 0x80331630: bne         $t5, $zero, L_80331650
    if (ctx->r13 != 0) {
        // 0x80331634: nop
    
            goto L_80331650;
    }
    // 0x80331634: nop

    // 0x80331638: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033163C: nop

    // 0x80331640: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x80331644: nop

    // 0x80331648: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8033164C: sh          $t8, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r24;
L_80331650:
    // 0x80331650: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331654: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331658: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x8033165C: nop

    // 0x80331660: bne         $t0, $at, L_8033195C
    if (ctx->r8 != ctx->r1) {
        // 0x80331664: nop
    
            goto L_8033195C;
    }
    // 0x80331664: nop

    // 0x80331668: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033166C: nop

    // 0x80331670: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x80331674: nop

    // 0x80331678: bne         $t2, $zero, L_803317A4
    if (ctx->r10 != 0) {
        // 0x8033167C: nop
    
            goto L_803317A4;
    }
    // 0x8033167C: nop

    // 0x80331680: jal         0x80026DBC
    // 0x80331684: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    Get_ObjIdx_ById(rdram, ctx);
        goto after_5;
    // 0x80331684: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    after_5:
    // 0x80331688: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8033168C: lh          $t3, 0x22($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X22);
    // 0x80331690: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331694: beq         $t3, $at, L_803316F4
    if (ctx->r11 == ctx->r1) {
        // 0x80331698: nop
    
            goto L_803316F4;
    }
    // 0x80331698: nop

    // 0x8033169C: lh          $t4, 0x22($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X22);
    // 0x803316A0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803316A4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803316A8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803316AC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803316B0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803316B4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803316B8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803316BC: lh          $t7, 0x420A($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X420A);
    // 0x803316C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803316C4: bne         $t7, $at, L_803316F4
    if (ctx->r15 != ctx->r1) {
        // 0x803316C8: nop
    
            goto L_803316F4;
    }
    // 0x803316C8: nop

    // 0x803316CC: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x803316D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803316D4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x803316D8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x803316DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803316E0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x803316E4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803316E8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803316EC: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x803316F0: sh          $t8, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r24;
L_803316F4:
    // 0x803316F4: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x803316F8: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
L_803316FC:
    // 0x803316FC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x80331700: jal         0x80026E58
    // 0x80331704: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_6;
    // 0x80331704: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    after_6:
    // 0x80331708: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8033170C: lh          $t1, 0x22($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X22);
    // 0x80331710: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331714: beq         $t1, $at, L_8033177C
    if (ctx->r9 == ctx->r1) {
        // 0x80331718: nop
    
            goto L_8033177C;
    }
    // 0x80331718: nop

    // 0x8033171C: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x80331720: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331724: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331728: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033172C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331730: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331734: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331738: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033173C: lh          $t4, 0x4208($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4208);
    // 0x80331740: nop

    // 0x80331744: bne         $t4, $zero, L_80331774
    if (ctx->r12 != 0) {
        // 0x80331748: nop
    
            goto L_80331774;
    }
    // 0x80331748: nop

    // 0x8033174C: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x80331750: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331754: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80331758: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x8033175C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331760: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80331764: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331768: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033176C: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x80331770: sh          $t5, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r13;
L_80331774:
    // 0x80331774: b           L_80331784
    // 0x80331778: nop

        goto L_80331784;
    // 0x80331778: nop

L_8033177C:
    // 0x8033177C: b           L_8033179C
    // 0x80331780: nop

        goto L_8033179C;
    // 0x80331780: nop

L_80331784:
    // 0x80331784: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x80331788: nop

    // 0x8033178C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80331790: sh          $t9, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r25;
    // 0x80331794: b           L_803316FC
    // 0x80331798: nop

        goto L_803316FC;
    // 0x80331798: nop

L_8033179C:
    // 0x8033179C: b           L_803318EC
    // 0x803317A0: nop

        goto L_803318EC;
    // 0x803317A0: nop

L_803317A4:
    // 0x803317A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803317A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803317AC: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x803317B0: nop

    // 0x803317B4: bne         $t1, $at, L_803318EC
    if (ctx->r9 != ctx->r1) {
        // 0x803317B8: nop
    
            goto L_803318EC;
    }
    // 0x803317B8: nop

    // 0x803317BC: jal         0x80026DBC
    // 0x803317C0: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    Get_ObjIdx_ById(rdram, ctx);
        goto after_7;
    // 0x803317C0: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_7:
    // 0x803317C4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x803317C8: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x803317CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803317D0: beq         $t2, $at, L_80331800
    if (ctx->r10 == ctx->r1) {
        // 0x803317D4: nop
    
            goto L_80331800;
    }
    // 0x803317D4: nop

    // 0x803317D8: lh          $t4, 0x22($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X22);
    // 0x803317DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803317E0: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x803317E4: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x803317E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803317EC: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x803317F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803317F4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803317F8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803317FC: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
L_80331800:
    // 0x80331800: addiu       $t5, $zero, 0xE
    ctx->r13 = ADD32(0, 0XE);
    // 0x80331804: sh          $t5, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r13;
L_80331808:
    // 0x80331808: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8033180C: jal         0x80026E58
    // 0x80331810: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_8;
    // 0x80331810: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    after_8:
    // 0x80331814: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80331818: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8033181C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331820: beq         $t6, $at, L_80331888
    if (ctx->r14 == ctx->r1) {
        // 0x80331824: nop
    
            goto L_80331888;
    }
    // 0x80331824: nop

    // 0x80331828: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x8033182C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331830: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331834: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331838: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033183C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331840: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331844: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331848: lh          $t0, 0x4208($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4208);
    // 0x8033184C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331850: bne         $t0, $at, L_80331880
    if (ctx->r8 != ctx->r1) {
        // 0x80331854: nop
    
            goto L_80331880;
    }
    // 0x80331854: nop

    // 0x80331858: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x8033185C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331860: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80331864: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80331868: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033186C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80331870: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331874: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331878: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x8033187C: sh          $t1, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r9;
L_80331880:
    // 0x80331880: b           L_80331890
    // 0x80331884: nop

        goto L_80331890;
    // 0x80331884: nop

L_80331888:
    // 0x80331888: b           L_803318A8
    // 0x8033188C: nop

        goto L_803318A8;
    // 0x8033188C: nop

L_80331890:
    // 0x80331890: lh          $t3, 0x22($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X22);
    // 0x80331894: nop

    // 0x80331898: addiu       $t7, $t3, 0x1
    ctx->r15 = ADD32(ctx->r11, 0X1);
    // 0x8033189C: sh          $t7, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r15;
    // 0x803318A0: b           L_80331808
    // 0x803318A4: nop

        goto L_80331808;
    // 0x803318A4: nop

L_803318A8:
    // 0x803318A8: jal         0x80026DBC
    // 0x803318AC: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    Get_ObjIdx_ById(rdram, ctx);
        goto after_9;
    // 0x803318AC: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    after_9:
    // 0x803318B0: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x803318B4: lh          $t5, 0x22($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X22);
    // 0x803318B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803318BC: beq         $t5, $at, L_803318EC
    if (ctx->r13 == ctx->r1) {
        // 0x803318C0: nop
    
            goto L_803318EC;
    }
    // 0x803318C0: nop

    // 0x803318C4: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x803318C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803318CC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803318D0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803318D4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803318D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803318DC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803318E0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803318E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803318E8: sh          $t6, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r14;
L_803318EC:
    // 0x803318EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803318F0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803318F4: sh          $t0, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r8;
    // 0x803318F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803318FC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80331900: sb          $t1, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r9;
    // 0x80331904: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033190C: lh          $t7, 0xA8($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XA8);
    // 0x80331910: nop

    // 0x80331914: bne         $t7, $at, L_80331934
    if (ctx->r15 != ctx->r1) {
        // 0x80331918: nop
    
            goto L_80331934;
    }
    // 0x80331918: nop

    // 0x8033191C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331920: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80331924: sh          $t5, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r13;
    // 0x80331928: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033192C: nop

    // 0x80331930: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80331934:
    // 0x80331934: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331938: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033193C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80331940: addiu       $t0, $t0, 0x7CB4
    ctx->r8 = ADD32(ctx->r8, 0X7CB4);
    // 0x80331944: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331948: lh          $a2, 0xA8($t9)
    ctx->r6 = MEM_H(ctx->r25, 0XA8);
    // 0x8033194C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80331950: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331954: jal         0x8001C0EC
    // 0x80331958: addiu       $a3, $zero, 0xF1
    ctx->r7 = ADD32(0, 0XF1);
    func_8001C0EC(rdram, ctx);
        goto after_10;
    // 0x80331958: addiu       $a3, $zero, 0xF1
    ctx->r7 = ADD32(0, 0XF1);
    after_10:
L_8033195C:
    // 0x8033195C: b           L_80331964
    // 0x80331960: nop

        goto L_80331964;
    // 0x80331960: nop

L_80331964:
    // 0x80331964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331968: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033196C: jr          $ra
    // 0x80331970: nop

    return;
    // 0x80331970: nop

;}
RECOMP_FUNC void func_80332A38_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332A38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332A3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332A40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80332A44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332A48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332A4C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80332A50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332A54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332A5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332A64: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80332A68: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80332A6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332A70: beq         $s0, $at, L_80332A8C
    if (ctx->r16 == ctx->r1) {
        // 0x80332A74: nop
    
            goto L_80332A8C;
    }
    // 0x80332A74: nop

    // 0x80332A78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332A7C: beq         $s0, $at, L_80332A9C
    if (ctx->r16 == ctx->r1) {
        // 0x80332A80: nop
    
            goto L_80332A9C;
    }
    // 0x80332A80: nop

    // 0x80332A84: b           L_80332AAC
    // 0x80332A88: nop

        goto L_80332AAC;
    // 0x80332A88: nop

L_80332A8C:
    // 0x80332A8C: jal         0x80332764
    // 0x80332A90: nop

    func_80332764_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x80332A90: nop

    after_0:
    // 0x80332A94: b           L_80332AB4
    // 0x80332A98: nop

        goto L_80332AB4;
    // 0x80332A98: nop

L_80332A9C:
    // 0x80332A9C: jal         0x80332830
    // 0x80332AA0: nop

    func_80332830_unk_bin_39(rdram, ctx);
        goto after_1;
    // 0x80332AA0: nop

    after_1:
    // 0x80332AA4: b           L_80332AB4
    // 0x80332AA8: nop

        goto L_80332AB4;
    // 0x80332AA8: nop

L_80332AAC:
    // 0x80332AAC: b           L_80332AB4
    // 0x80332AB0: nop

        goto L_80332AB4;
    // 0x80332AB0: nop

L_80332AB4:
    // 0x80332AB4: b           L_80332ABC
    // 0x80332AB8: nop

        goto L_80332ABC;
    // 0x80332AB8: nop

L_80332ABC:
    // 0x80332ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80332AC4: jr          $ra
    // 0x80332AC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80332AC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80332DB0_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332DB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332DB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332DB8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80332DBC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80332DC0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80332DC4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80332DC8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80332DCC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80332DD0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80332DD4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332DD8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80332DDC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80332DE0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332DE4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80332DE8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332DEC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80332DF0: addiu       $a1, $a1, 0x42AC
    ctx->r5 = ADD32(ctx->r5, 0X42AC);
    // 0x80332DF4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332DF8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80332DFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332E00: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332E04: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80332E08: jal         0x80027464
    // 0x80332E0C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80332E0C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80332E10: b           L_80332E18
    // 0x80332E14: nop

        goto L_80332E18;
    // 0x80332E14: nop

L_80332E18:
    // 0x80332E18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332E1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332E20: jr          $ra
    // 0x80332E24: nop

    return;
    // 0x80332E24: nop

;}
RECOMP_FUNC void func_8033035C_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033035C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330364: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330368: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033036C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330370: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330374: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80330378: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033037C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330380: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80330384: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330388: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033038C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80330390: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330394: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80330398: addiu       $a1, $a1, 0x3814
    ctx->r5 = ADD32(ctx->r5, 0X3814);
    // 0x8033039C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803303A0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803303A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803303A8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803303AC: jal         0x80027464
    // 0x803303B0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803303B0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x803303B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803303B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803303BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803303C0: beq         $t0, $at, L_803303F4
    if (ctx->r8 == ctx->r1) {
        // 0x803303C4: nop
    
            goto L_803303F4;
    }
    // 0x803303C4: nop

    // 0x803303C8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803303CC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803303D0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803303D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803303D8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803303DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803303E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803303E4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803303E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803303F0: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
L_803303F4:
    // 0x803303F4: b           L_803303FC
    // 0x803303F8: nop

        goto L_803303FC;
    // 0x803303F8: nop

L_803303FC:
    // 0x803303FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330400: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330404: jr          $ra
    // 0x80330408: nop

    return;
    // 0x80330408: nop

;}
RECOMP_FUNC void func_80331108_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331108: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033110C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331110: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80331114: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80331118: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033111C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80331120: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80331124: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80331128: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033112C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331130: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80331134: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80331138: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033113C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80331140: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331144: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80331148: addiu       $a1, $a1, 0x424C
    ctx->r5 = ADD32(ctx->r5, 0X424C);
    // 0x8033114C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80331150: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80331154: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331158: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033115C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80331160: jal         0x80027464
    // 0x80331164: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80331164: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80331168: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033116C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331170: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331174: beq         $t1, $at, L_803311A0
    if (ctx->r9 == ctx->r1) {
        // 0x80331178: nop
    
            goto L_803311A0;
    }
    // 0x80331178: nop

    // 0x8033117C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331180: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331184: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331188: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033118C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331190: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331194: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331198: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033119C: sh          $zero, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = 0;
L_803311A0:
    // 0x803311A0: b           L_803311A8
    // 0x803311A4: nop

        goto L_803311A8;
    // 0x803311A4: nop

L_803311A8:
    // 0x803311A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803311AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803311B0: jr          $ra
    // 0x803311B4: nop

    return;
    // 0x803311B4: nop

    // 0x803311B8: jr          $ra
    // 0x803311BC: nop

    return;
    // 0x803311BC: nop

    // 0x803311C0: jr          $ra
    // 0x803311C4: nop

    return;
    // 0x803311C4: nop

;}
RECOMP_FUNC void func_80331A94_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331A98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331A9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331AA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331AA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331AA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331AAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331AB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331AB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331AB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331ABC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331AC0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331AC4: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x80331AC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331ACC: bne         $t8, $at, L_80331B44
    if (ctx->r24 != ctx->r1) {
        // 0x80331AD0: nop
    
            goto L_80331B44;
    }
    // 0x80331AD0: nop

    // 0x80331AD4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80331AD8: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80331ADC: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80331AE0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331AE4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331AE8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331AEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331AF0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331AF4: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80331AF8: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80331AFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331B00: beq         $s0, $at, L_80331B1C
    if (ctx->r16 == ctx->r1) {
        // 0x80331B04: nop
    
            goto L_80331B1C;
    }
    // 0x80331B04: nop

    // 0x80331B08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331B0C: beq         $s0, $at, L_80331B2C
    if (ctx->r16 == ctx->r1) {
        // 0x80331B10: nop
    
            goto L_80331B2C;
    }
    // 0x80331B10: nop

    // 0x80331B14: b           L_80331B3C
    // 0x80331B18: nop

        goto L_80331B3C;
    // 0x80331B18: nop

L_80331B1C:
    // 0x80331B1C: jal         0x803314F0
    // 0x80331B20: nop

    func_803314F0_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x80331B20: nop

    after_0:
    // 0x80331B24: b           L_80331B44
    // 0x80331B28: nop

        goto L_80331B44;
    // 0x80331B28: nop

L_80331B2C:
    // 0x80331B2C: jal         0x80331974
    // 0x80331B30: nop

    func_80331974_unk_bin_39(rdram, ctx);
        goto after_1;
    // 0x80331B30: nop

    after_1:
    // 0x80331B34: b           L_80331B44
    // 0x80331B38: nop

        goto L_80331B44;
    // 0x80331B38: nop

L_80331B3C:
    // 0x80331B3C: b           L_80331B44
    // 0x80331B40: nop

        goto L_80331B44;
    // 0x80331B40: nop

L_80331B44:
    // 0x80331B44: b           L_80331B4C
    // 0x80331B48: nop

        goto L_80331B4C;
    // 0x80331B48: nop

L_80331B4C:
    // 0x80331B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80331B54: jr          $ra
    // 0x80331B58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80331B58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80330C44_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330C48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330C4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330C50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330C54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330C58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330C5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330C70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330C74: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330C78: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C7C: nop

    // 0x80330C80: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330C84: nop

    // 0x80330C88: bne         $t1, $zero, L_80330D14
    if (ctx->r9 != 0) {
        // 0x80330C8C: nop
    
            goto L_80330D14;
    }
    // 0x80330C8C: nop

    // 0x80330C90: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C94: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330C98: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80330C9C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CA0: nop

    // 0x80330CA4: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80330CA8: nop

    // 0x80330CAC: swc1        $f4, 0xD8($t4)
    MEM_W(0XD8, ctx->r12) = ctx->f4.u32l;
    // 0x80330CB0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CB4: nop

    // 0x80330CB8: lwc1        $f6, 0x48($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X48);
    // 0x80330CBC: nop

    // 0x80330CC0: swc1        $f6, 0xDC($t5)
    MEM_W(0XDC, ctx->r13) = ctx->f6.u32l;
    // 0x80330CC4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80330CC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330CCC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CD0: nop

    // 0x80330CD4: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x80330CD8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CDC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80330CE0: sh          $t7, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r15;
    // 0x80330CE4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CE8: nop

    // 0x80330CEC: sh          $zero, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = 0;
    // 0x80330CF0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330CF4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CF8: nop

    // 0x80330CFC: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
    // 0x80330D00: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D04: nop

    // 0x80330D08: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80330D0C: nop

    // 0x80330D10: swc1        $f16, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f16.u32l;
L_80330D14:
    // 0x80330D14: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D18: nop

    // 0x80330D1C: lh          $t3, 0xBA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XBA);
    // 0x80330D20: nop

    // 0x80330D24: blez        $t3, L_80330D60
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80330D28: nop
    
            goto L_80330D60;
    }
    // 0x80330D28: nop

    // 0x80330D2C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D30: nop

    // 0x80330D34: lh          $t5, 0xBA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XBA);
    // 0x80330D38: nop

    // 0x80330D3C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80330D40: sh          $t6, 0xBA($t4)
    MEM_H(0XBA, ctx->r12) = ctx->r14;
    // 0x80330D44: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D48: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80330D4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330D50: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80330D54: nop

    // 0x80330D58: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330D5C: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
L_80330D60:
    // 0x80330D60: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D64: nop

    // 0x80330D68: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80330D6C: nop

    // 0x80330D70: bne         $t9, $zero, L_80330DBC
    if (ctx->r25 != 0) {
        // 0x80330D74: nop
    
            goto L_80330DBC;
    }
    // 0x80330D74: nop

    // 0x80330D78: lh          $t0, 0xAC($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XAC);
    // 0x80330D7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330D80: bne         $t0, $at, L_80330DBC
    if (ctx->r8 != ctx->r1) {
        // 0x80330D84: nop
    
            goto L_80330DBC;
    }
    // 0x80330D84: nop

    // 0x80330D88: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80330D8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330D90: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D94: nop

    // 0x80330D98: swc1        $f8, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f8.u32l;
    // 0x80330D9C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80330DA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330DA4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DA8: nop

    // 0x80330DAC: swc1        $f10, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f10.u32l;
    // 0x80330DB0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DB4: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80330DB8: sh          $t3, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r11;
L_80330DBC:
    // 0x80330DBC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DC0: nop

    // 0x80330DC4: lh          $t4, 0xA6($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XA6);
    // 0x80330DC8: nop

    // 0x80330DCC: beq         $t4, $zero, L_80330E18
    if (ctx->r12 == 0) {
        // 0x80330DD0: nop
    
            goto L_80330E18;
    }
    // 0x80330DD0: nop

    // 0x80330DD4: lh          $t7, 0xAC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAC);
    // 0x80330DD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330DDC: bne         $t7, $at, L_80330E18
    if (ctx->r15 != ctx->r1) {
        // 0x80330DE0: nop
    
            goto L_80330E18;
    }
    // 0x80330DE0: nop

    // 0x80330DE4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80330DE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330DEC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DF0: nop

    // 0x80330DF4: swc1        $f16, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f16.u32l;
    // 0x80330DF8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80330DFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330E00: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E04: nop

    // 0x80330E08: swc1        $f18, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f18.u32l;
    // 0x80330E0C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E10: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80330E14: sh          $t0, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = ctx->r8;
L_80330E18:
    // 0x80330E18: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E1C: nop

    // 0x80330E20: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80330E24: nop

    // 0x80330E28: beq         $t3, $zero, L_80330E3C
    if (ctx->r11 == 0) {
        // 0x80330E2C: nop
    
            goto L_80330E3C;
    }
    // 0x80330E2C: nop

    // 0x80330E30: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E34: nop

    // 0x80330E38: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_80330E3C:
    // 0x80330E3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E44: jal         0x80029D04
    // 0x80330E48: nop

    func_80029D04(rdram, ctx);
        goto after_0;
    // 0x80330E48: nop

    after_0:
    // 0x80330E4C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E50: nop

    // 0x80330E54: lh          $t6, 0xAC($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XAC);
    // 0x80330E58: lh          $t7, 0xAA($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XAA);
    // 0x80330E5C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80330E60: lwc1        $f4, 0x48($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X48);
    // 0x80330E64: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330E68: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80330E6C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80330E70: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330E74: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x80330E78: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80330E7C: nop

    // 0x80330E80: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80330E84: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330E88: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330E8C: nop

    // 0x80330E90: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80330E94: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80330E98: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80330E9C: sh          $t8, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r24;
    // 0x80330EA0: nop

    // 0x80330EA4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330EA8: nop

    // 0x80330EAC: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80330EB0: nop

    // 0x80330EB4: bne         $t1, $zero, L_80330EF0
    if (ctx->r9 != 0) {
        // 0x80330EB8: nop
    
            goto L_80330EF0;
    }
    // 0x80330EB8: nop

    // 0x80330EBC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330EC0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330EC4: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80330EC8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330ECC: nop

    // 0x80330ED0: lwc1        $f8, 0xD8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0XD8);
    // 0x80330ED4: nop

    // 0x80330ED8: swc1        $f8, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f8.u32l;
    // 0x80330EDC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330EE0: nop

    // 0x80330EE4: lwc1        $f16, 0xDC($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0XDC);
    // 0x80330EE8: nop

    // 0x80330EEC: swc1        $f16, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f16.u32l;
L_80330EF0:
    // 0x80330EF0: b           L_80330EF8
    // 0x80330EF4: nop

        goto L_80330EF8;
    // 0x80330EF4: nop

L_80330EF8:
    // 0x80330EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330EFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330F00: jr          $ra
    // 0x80330F04: nop

    return;
    // 0x80330F04: nop

;}
RECOMP_FUNC void func_80332230_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332230: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332234: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80332238: nop

    // 0x8033223C: beq         $t6, $zero, L_80332258
    if (ctx->r14 == 0) {
        // 0x80332240: nop
    
            goto L_80332258;
    }
    // 0x80332240: nop

    // 0x80332244: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332248: beq         $t6, $at, L_80332258
    if (ctx->r14 == ctx->r1) {
        // 0x8033224C: nop
    
            goto L_80332258;
    }
    // 0x8033224C: nop

    // 0x80332250: jr          $ra
    // 0x80332254: nop

    return;
    // 0x80332254: nop

L_80332258:
    // 0x80332258: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033225C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80332260: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332264: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332268: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033226C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332270: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332274: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332278: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033227C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80332280: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80332284: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80332288: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033228C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332290: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332294: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332298: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033229C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803322A0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803322A4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803322A8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803322AC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803322B0: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x803322B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322B8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803322BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803322C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803322C4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803322C8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803322CC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803322D0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803322D4: jr          $ra
    // 0x803322D8: nop

    return;
    // 0x803322D8: nop

    // 0x803322DC: jr          $ra
    // 0x803322E0: nop

    return;
    // 0x803322E0: nop

;}
RECOMP_FUNC void func_80331058_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331058: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033105C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331060: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331064: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331068: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033106C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
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
    // 0x80331084: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80331088: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8033108C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331090: beq         $s0, $at, L_803310B8
    if (ctx->r16 == ctx->r1) {
        // 0x80331094: nop
    
            goto L_803310B8;
    }
    // 0x80331094: nop

    // 0x80331098: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033109C: beq         $s0, $at, L_803310C8
    if (ctx->r16 == ctx->r1) {
        // 0x803310A0: nop
    
            goto L_803310C8;
    }
    // 0x803310A0: nop

    // 0x803310A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803310A8: beq         $s0, $at, L_803310D8
    if (ctx->r16 == ctx->r1) {
        // 0x803310AC: nop
    
            goto L_803310D8;
    }
    // 0x803310AC: nop

    // 0x803310B0: b           L_803310E8
    // 0x803310B4: nop

        goto L_803310E8;
    // 0x803310B4: nop

L_803310B8:
    // 0x803310B8: jal         0x80330A84
    // 0x803310BC: nop

    func_80330A84_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x803310BC: nop

    after_0:
    // 0x803310C0: b           L_803310F0
    // 0x803310C4: nop

        goto L_803310F0;
    // 0x803310C4: nop

L_803310C8:
    // 0x803310C8: jal         0x80330C44
    // 0x803310CC: nop

    func_80330C44_unk_bin_39(rdram, ctx);
        goto after_1;
    // 0x803310CC: nop

    after_1:
    // 0x803310D0: b           L_803310F0
    // 0x803310D4: nop

        goto L_803310F0;
    // 0x803310D4: nop

L_803310D8:
    // 0x803310D8: jal         0x80330F08
    // 0x803310DC: nop

    func_80330F08_unk_bin_39(rdram, ctx);
        goto after_2;
    // 0x803310DC: nop

    after_2:
    // 0x803310E0: b           L_803310F0
    // 0x803310E4: nop

        goto L_803310F0;
    // 0x803310E4: nop

L_803310E8:
    // 0x803310E8: b           L_803310F0
    // 0x803310EC: nop

        goto L_803310F0;
    // 0x803310EC: nop

L_803310F0:
    // 0x803310F0: b           L_803310F8
    // 0x803310F4: nop

        goto L_803310F8;
    // 0x803310F4: nop

L_803310F8:
    // 0x803310F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803310FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80331100: jr          $ra
    // 0x80331104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80331104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803309AC_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803309AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803309B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803309B4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803309B8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803309BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803309C0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803309C4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803309C8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803309CC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803309D0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803309D4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803309D8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803309DC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803309E0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803309E4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803309E8: addiu       $a1, $a1, 0x3820
    ctx->r5 = ADD32(ctx->r5, 0X3820);
    // 0x803309EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803309F0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803309F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803309F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803309FC: jal         0x80027464
    // 0x80330A00: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80330A00: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80330A04: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80330A08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330A0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330A10: beq         $t0, $at, L_80330A6C
    if (ctx->r8 == ctx->r1) {
        // 0x80330A14: nop
    
            goto L_80330A6C;
    }
    // 0x80330A14: nop

    // 0x80330A18: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330A1C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80330A20: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330A24: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330A28: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330A2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330A30: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330A34: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330A38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A3C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330A40: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x80330A44: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330A48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A4C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330A50: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330A54: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330A58: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330A5C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330A60: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330A64: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80330A68: sh          $t3, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r11;
L_80330A6C:
    // 0x80330A6C: b           L_80330A74
    // 0x80330A70: nop

        goto L_80330A74;
    // 0x80330A70: nop

L_80330A74:
    // 0x80330A74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330A7C: jr          $ra
    // 0x80330A80: nop

    return;
    // 0x80330A80: nop

;}
RECOMP_FUNC void func_80332C94_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80332CCC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332CD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332CD4: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80332CD8: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80332CDC: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80332CE0: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80332CE4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80332CE8: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    // 0x80332CEC: jal         0x8002AE38
    // 0x80332CF0: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8002AE38(rdram, ctx);
        goto after_0;
    // 0x80332CF0: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x80332CF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CFC: jal         0x8002B114
    // 0x80332D00: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80332D00: nop

    after_1:
    // 0x80332D04: b           L_80332D0C
    // 0x80332D08: nop

        goto L_80332D0C;
    // 0x80332D08: nop

L_80332D0C:
    // 0x80332D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332D10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332D14: jr          $ra
    // 0x80332D18: nop

    return;
    // 0x80332D18: nop

;}
RECOMP_FUNC void func_80331F9C_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331FA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331FA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331FA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331FAC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331FB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331FB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331FB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331FBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331FC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331FC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331FC8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331FCC: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x80331FD0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331FD4: bne         $t8, $at, L_8033204C
    if (ctx->r24 != ctx->r1) {
        // 0x80331FD8: nop
    
            goto L_8033204C;
    }
    // 0x80331FD8: nop

    // 0x80331FDC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80331FE0: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80331FE4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80331FE8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331FEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331FF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331FF4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331FF8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331FFC: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80332000: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80332004: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332008: beq         $s0, $at, L_80332024
    if (ctx->r16 == ctx->r1) {
        // 0x8033200C: nop
    
            goto L_80332024;
    }
    // 0x8033200C: nop

    // 0x80332010: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332014: beq         $s0, $at, L_80332034
    if (ctx->r16 == ctx->r1) {
        // 0x80332018: nop
    
            goto L_80332034;
    }
    // 0x80332018: nop

    // 0x8033201C: b           L_80332044
    // 0x80332020: nop

        goto L_80332044;
    // 0x80332020: nop

L_80332024:
    // 0x80332024: jal         0x80331DAC
    // 0x80332028: nop

    func_80331DAC_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x80332028: nop

    after_0:
    // 0x8033202C: b           L_8033204C
    // 0x80332030: nop

        goto L_8033204C;
    // 0x80332030: nop

L_80332034:
    // 0x80332034: jal         0x80331EEC
    // 0x80332038: nop

    func_80331EEC_unk_bin_39(rdram, ctx);
        goto after_1;
    // 0x80332038: nop

    after_1:
    // 0x8033203C: b           L_8033204C
    // 0x80332040: nop

        goto L_8033204C;
    // 0x80332040: nop

L_80332044:
    // 0x80332044: b           L_8033204C
    // 0x80332048: nop

        goto L_8033204C;
    // 0x80332048: nop

L_8033204C:
    // 0x8033204C: b           L_80332054
    // 0x80332050: nop

        goto L_80332054;
    // 0x80332050: nop

L_80332054:
    // 0x80332054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332058: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033205C: jr          $ra
    // 0x80332060: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80332060: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803308FC_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803308FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330900: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330904: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80330908: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033090C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330910: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
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
    // 0x80330928: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8033092C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80330930: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330934: beq         $s0, $at, L_8033095C
    if (ctx->r16 == ctx->r1) {
        // 0x80330938: nop
    
            goto L_8033095C;
    }
    // 0x80330938: nop

    // 0x8033093C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330940: beq         $s0, $at, L_8033096C
    if (ctx->r16 == ctx->r1) {
        // 0x80330944: nop
    
            goto L_8033096C;
    }
    // 0x80330944: nop

    // 0x80330948: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033094C: beq         $s0, $at, L_8033097C
    if (ctx->r16 == ctx->r1) {
        // 0x80330950: nop
    
            goto L_8033097C;
    }
    // 0x80330950: nop

    // 0x80330954: b           L_8033098C
    // 0x80330958: nop

        goto L_8033098C;
    // 0x80330958: nop

L_8033095C:
    // 0x8033095C: jal         0x8033040C
    // 0x80330960: nop

    func_8033040C_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x80330960: nop

    after_0:
    // 0x80330964: b           L_80330994
    // 0x80330968: nop

        goto L_80330994;
    // 0x80330968: nop

L_8033096C:
    // 0x8033096C: jal         0x80330580
    // 0x80330970: nop

    func_80330580_unk_bin_39(rdram, ctx);
        goto after_1;
    // 0x80330970: nop

    after_1:
    // 0x80330974: b           L_80330994
    // 0x80330978: nop

        goto L_80330994;
    // 0x80330978: nop

L_8033097C:
    // 0x8033097C: jal         0x803307F8
    // 0x80330980: nop

    func_803307F8_unk_bin_39(rdram, ctx);
        goto after_2;
    // 0x80330980: nop

    after_2:
    // 0x80330984: b           L_80330994
    // 0x80330988: nop

        goto L_80330994;
    // 0x80330988: nop

L_8033098C:
    // 0x8033098C: b           L_80330994
    // 0x80330990: nop

        goto L_80330994;
    // 0x80330990: nop

L_80330994:
    // 0x80330994: b           L_8033099C
    // 0x80330998: nop

        goto L_8033099C;
    // 0x80330998: nop

L_8033099C:
    // 0x8033099C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803309A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803309A4: jr          $ra
    // 0x803309A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803309A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80333004_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333004: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333008: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033300C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80333010: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333014: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333018: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033301C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333024: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333028: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033302C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333030: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80333034: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80333038: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033303C: beq         $s0, $at, L_80333058
    if (ctx->r16 == ctx->r1) {
        // 0x80333040: nop
    
            goto L_80333058;
    }
    // 0x80333040: nop

    // 0x80333044: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80333048: beq         $s0, $at, L_80333068
    if (ctx->r16 == ctx->r1) {
        // 0x8033304C: nop
    
            goto L_80333068;
    }
    // 0x8033304C: nop

    // 0x80333050: b           L_80333078
    // 0x80333054: nop

        goto L_80333078;
    // 0x80333054: nop

L_80333058:
    // 0x80333058: jal         0x80332EC8
    // 0x8033305C: nop

    func_80332EC8_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x8033305C: nop

    after_0:
    // 0x80333060: b           L_80333080
    // 0x80333064: nop

        goto L_80333080;
    // 0x80333064: nop

L_80333068:
    // 0x80333068: jal         0x80332F2C
    // 0x8033306C: nop

    func_80332F2C_unk_bin_39(rdram, ctx);
        goto after_1;
    // 0x8033306C: nop

    after_1:
    // 0x80333070: b           L_80333080
    // 0x80333074: nop

        goto L_80333080;
    // 0x80333074: nop

L_80333078:
    // 0x80333078: b           L_80333080
    // 0x8033307C: nop

        goto L_80333080;
    // 0x8033307C: nop

L_80333080:
    // 0x80333080: b           L_80333088
    // 0x80333084: nop

        goto L_80333088;
    // 0x80333084: nop

L_80333088:
    // 0x80333088: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033308C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80333090: jr          $ra
    // 0x80333094: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80333094: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80330580_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330580: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330588: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033058C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330590: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330594: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330598: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033059C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803305A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803305A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803305AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803305B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803305B4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803305B8: nop

    // 0x803305BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803305C0: nop

    // 0x803305C4: bne         $t1, $zero, L_80330650
    if (ctx->r9 != 0) {
        // 0x803305C8: nop
    
            goto L_80330650;
    }
    // 0x803305C8: nop

    // 0x803305CC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803305D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803305D4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803305D8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803305DC: nop

    // 0x803305E0: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x803305E4: nop

    // 0x803305E8: swc1        $f4, 0xD8($t4)
    MEM_W(0XD8, ctx->r12) = ctx->f4.u32l;
    // 0x803305EC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803305F0: nop

    // 0x803305F4: lwc1        $f6, 0x48($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X48);
    // 0x803305F8: nop

    // 0x803305FC: swc1        $f6, 0xDC($t5)
    MEM_W(0XDC, ctx->r13) = ctx->f6.u32l;
    // 0x80330600: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80330604: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330608: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033060C: nop

    // 0x80330610: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x80330614: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330618: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8033061C: sh          $t7, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r15;
    // 0x80330620: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330624: nop

    // 0x80330628: sh          $zero, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = 0;
    // 0x8033062C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330630: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330634: nop

    // 0x80330638: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
    // 0x8033063C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330640: nop

    // 0x80330644: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80330648: nop

    // 0x8033064C: swc1        $f16, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f16.u32l;
L_80330650:
    // 0x80330650: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330654: nop

    // 0x80330658: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x8033065C: nop

    // 0x80330660: bne         $t3, $zero, L_803306AC
    if (ctx->r11 != 0) {
        // 0x80330664: nop
    
            goto L_803306AC;
    }
    // 0x80330664: nop

    // 0x80330668: lh          $t4, 0xAC($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XAC);
    // 0x8033066C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330670: bne         $t4, $at, L_803306AC
    if (ctx->r12 != ctx->r1) {
        // 0x80330674: nop
    
            goto L_803306AC;
    }
    // 0x80330674: nop

    // 0x80330678: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033067C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330680: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330684: nop

    // 0x80330688: swc1        $f18, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f18.u32l;
    // 0x8033068C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80330690: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330694: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330698: nop

    // 0x8033069C: swc1        $f4, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f4.u32l;
    // 0x803306A0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803306A4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x803306A8: sh          $t7, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r15;
L_803306AC:
    // 0x803306AC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803306B0: nop

    // 0x803306B4: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803306B8: nop

    // 0x803306BC: beq         $t0, $zero, L_80330708
    if (ctx->r8 == 0) {
        // 0x803306C0: nop
    
            goto L_80330708;
    }
    // 0x803306C0: nop

    // 0x803306C4: lh          $t1, 0xAC($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XAC);
    // 0x803306C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803306CC: bne         $t1, $at, L_80330708
    if (ctx->r9 != ctx->r1) {
        // 0x803306D0: nop
    
            goto L_80330708;
    }
    // 0x803306D0: nop

    // 0x803306D4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803306D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803306DC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803306E0: nop

    // 0x803306E4: swc1        $f6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f6.u32l;
    // 0x803306E8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x803306EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803306F0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803306F4: nop

    // 0x803306F8: swc1        $f8, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f8.u32l;
    // 0x803306FC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330700: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80330704: sh          $t4, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r12;
L_80330708:
    // 0x80330708: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033070C: nop

    // 0x80330710: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80330714: nop

    // 0x80330718: beq         $t7, $zero, L_8033072C
    if (ctx->r15 == 0) {
        // 0x8033071C: nop
    
            goto L_8033072C;
    }
    // 0x8033071C: nop

    // 0x80330720: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330724: nop

    // 0x80330728: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_8033072C:
    // 0x8033072C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330730: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330734: jal         0x80029D04
    // 0x80330738: nop

    func_80029D04(rdram, ctx);
        goto after_0;
    // 0x80330738: nop

    after_0:
    // 0x8033073C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330740: nop

    // 0x80330744: lh          $t9, 0xAC($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XAC);
    // 0x80330748: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x8033074C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80330750: lwc1        $f10, 0x48($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X48);
    // 0x80330754: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330758: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8033075C: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80330760: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330764: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80330768: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8033076C: nop

    // 0x80330770: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80330774: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330778: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033077C: nop

    // 0x80330780: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80330784: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80330788: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8033078C: sh          $t2, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r10;
    // 0x80330790: nop

    // 0x80330794: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330798: nop

    // 0x8033079C: lh          $t5, 0xAA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAA);
    // 0x803307A0: nop

    // 0x803307A4: bne         $t5, $zero, L_803307E0
    if (ctx->r13 != 0) {
        // 0x803307A8: nop
    
            goto L_803307E0;
    }
    // 0x803307A8: nop

    // 0x803307AC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803307B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803307B4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x803307B8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803307BC: nop

    // 0x803307C0: lwc1        $f18, 0xD8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0XD8);
    // 0x803307C4: nop

    // 0x803307C8: swc1        $f18, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f18.u32l;
    // 0x803307CC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803307D0: nop

    // 0x803307D4: lwc1        $f6, 0xDC($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0XDC);
    // 0x803307D8: nop

    // 0x803307DC: swc1        $f6, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f6.u32l;
L_803307E0:
    // 0x803307E0: b           L_803307E8
    // 0x803307E4: nop

        goto L_803307E8;
    // 0x803307E4: nop

L_803307E8:
    // 0x803307E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803307EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803307F0: jr          $ra
    // 0x803307F4: nop

    return;
    // 0x803307F4: nop

;}
RECOMP_FUNC void func_803311C8_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803311C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803311CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803311D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803311D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803311D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803311DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803311E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803311E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803311F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803311F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803311F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803311FC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331200: nop

    // 0x80331204: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331208: nop

    // 0x8033120C: bne         $t1, $zero, L_8033123C
    if (ctx->r9 != 0) {
        // 0x80331210: nop
    
            goto L_8033123C;
    }
    // 0x80331210: nop

    // 0x80331214: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80331218: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033121C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331220: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331224: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331228: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033122C: addiu       $a3, $a3, -0x75BC
    ctx->r7 = ADD32(ctx->r7, -0X75BC);
    // 0x80331230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331234: jal         0x8001ABF4
    // 0x80331238: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80331238: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_8033123C:
    // 0x8033123C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331240: nop

    // 0x80331244: lh          $t5, 0xBA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XBA);
    // 0x80331248: nop

    // 0x8033124C: beq         $t5, $zero, L_80331264
    if (ctx->r13 == 0) {
        // 0x80331250: nop
    
            goto L_80331264;
    }
    // 0x80331250: nop

    // 0x80331254: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033125C: jal         0x8002B0E4
    // 0x80331260: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x80331260: nop

    after_1:
L_80331264:
    // 0x80331264: b           L_8033126C
    // 0x80331268: nop

        goto L_8033126C;
    // 0x80331268: nop

L_8033126C:
    // 0x8033126C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331274: jr          $ra
    // 0x80331278: nop

    return;
    // 0x80331278: nop

;}
RECOMP_FUNC void func_80331B5C_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331B60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331B64: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80331B68: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80331B6C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80331B70: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80331B74: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80331B78: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80331B7C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80331B80: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80331B84: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80331B88: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80331B8C: addiu       $a1, $a1, 0x3AC0
    ctx->r5 = ADD32(ctx->r5, 0X3AC0);
    // 0x80331B90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331B94: jal         0x80027464
    // 0x80331B98: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80331B98: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80331B9C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80331BA0: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x80331BA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331BA8: beq         $t7, $at, L_80331D68
    if (ctx->r15 == ctx->r1) {
        // 0x80331BAC: nop
    
            goto L_80331D68;
    }
    // 0x80331BAC: nop

    // 0x80331BB0: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x80331BB4: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x80331BB8: jal         0x80026F10
    // 0x80331BBC: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x80331BBC: nop

    after_1:
    // 0x80331BC0: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80331BC4: jal         0x8001BB34
    // 0x80331BC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80331BC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80331BCC: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80331BD0: jal         0x8001BBDC
    // 0x80331BD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80331BD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80331BD8: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x80331BDC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331BE0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331BE4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331BE8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331BEC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331BF0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331BF4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80331BF8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80331BFC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80331C00: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80331C04: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C08: lwc1        $f8, 0x3C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80331C0C: lwc1        $f17, 0x3480($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3480);
    // 0x80331C10: lwc1        $f16, 0x3484($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3484);
    // 0x80331C14: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80331C18: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80331C1C: jal         0x80034970
    // 0x80331C20: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x80331C20: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_4:
    // 0x80331C24: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80331C28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331C2C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331C30: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80331C34: swc1        $f6, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f6.u32l;
    // 0x80331C38: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80331C3C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C40: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80331C44: lwc1        $f17, 0x3488($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3488);
    // 0x80331C48: lwc1        $f16, 0x348C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X348C);
    // 0x80331C4C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80331C50: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80331C54: jal         0x80036570
    // 0x80331C58: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_5;
    // 0x80331C58: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_5:
    // 0x80331C5C: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80331C60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331C64: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331C68: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80331C6C: swc1        $f6, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f6.u32l;
    // 0x80331C70: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80331C74: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331C78: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80331C7C: lwc1        $f10, 0x24($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80331C80: nop

    // 0x80331C84: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80331C88: swc1        $f16, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f16.u32l;
    // 0x80331C8C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80331C90: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80331C94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331C98: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80331C9C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331CA0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80331CA4: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x80331CA8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80331CAC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331CB0: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80331CB4: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80331CB8: nop

    // 0x80331CBC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80331CC0: swc1        $f16, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f16.u32l;
    // 0x80331CC4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80331CC8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331CCC: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80331CD0: nop

    // 0x80331CD4: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x80331CD8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80331CDC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331CE0: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80331CE4: nop

    // 0x80331CE8: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x80331CEC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80331CF0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331CF4: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80331CF8: nop

    // 0x80331CFC: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x80331D00: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331D04: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331D08: nop

    // 0x80331D0C: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x80331D10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331D14: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331D18: nop

    // 0x80331D1C: swc1        $f10, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f10.u32l;
    // 0x80331D20: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331D24: nop

    // 0x80331D28: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
    // 0x80331D2C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331D30: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80331D34: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80331D38: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331D3C: addiu       $t3, $zero, 0x258
    ctx->r11 = ADD32(0, 0X258);
    // 0x80331D40: sh          $t3, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = ctx->r11;
    // 0x80331D44: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331D48: nop

    // 0x80331D4C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80331D50: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80331D54: jal         0x80029C40
    // 0x80331D58: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x80331D58: nop

    after_6:
    // 0x80331D5C: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80331D60: jal         0x80029D04
    // 0x80331D64: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x80331D64: nop

    after_7:
L_80331D68:
    // 0x80331D68: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x80331D6C: b           L_80331D7C
    // 0x80331D70: nop

        goto L_80331D7C;
    // 0x80331D70: nop

    // 0x80331D74: b           L_80331D7C
    // 0x80331D78: nop

        goto L_80331D7C;
    // 0x80331D78: nop

L_80331D7C:
    // 0x80331D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331D84: jr          $ra
    // 0x80331D88: nop

    return;
    // 0x80331D88: nop

    // 0x80331D8C: jr          $ra
    // 0x80331D90: nop

    return;
    // 0x80331D90: nop

    // 0x80331D94: jr          $ra
    // 0x80331D98: nop

    return;
    // 0x80331D98: nop

    // 0x80331D9C: jr          $ra
    // 0x80331DA0: nop

    return;
    // 0x80331DA0: nop

    // 0x80331DA4: jr          $ra
    // 0x80331DA8: nop

    return;
    // 0x80331DA8: nop

;}
RECOMP_FUNC void func_80331974_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331974: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033197C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331980: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331984: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331988: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033198C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331990: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331994: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331998: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033199C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803319A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803319A4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803319A8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803319AC: nop

    // 0x803319B0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803319B4: nop

    // 0x803319B8: bne         $t1, $zero, L_803319EC
    if (ctx->r9 != 0) {
        // 0x803319BC: nop
    
            goto L_803319EC;
    }
    // 0x803319BC: nop

    // 0x803319C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803319C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803319C8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803319CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803319D0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803319D4: nop

    // 0x803319D8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803319DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803319E0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803319E4: nop

    // 0x803319E8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_803319EC:
    // 0x803319EC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803319F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803319F4: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803319F8: nop

    // 0x803319FC: bne         $t7, $at, L_80331A5C
    if (ctx->r15 != ctx->r1) {
        // 0x80331A00: nop
    
            goto L_80331A5C;
    }
    // 0x80331A00: nop

    // 0x80331A04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A0C: jal         0x8001B62C
    // 0x80331A10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80331A10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80331A14: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80331A18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331A1C: nop

    // 0x80331A20: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80331A24: nop

    // 0x80331A28: bc1f        L_80331A5C
    if (!c1cs) {
        // 0x80331A2C: nop
    
            goto L_80331A5C;
    }
    // 0x80331A2C: nop

    // 0x80331A30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A38: jal         0x8001BBDC
    // 0x80331A3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80331A3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80331A40: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A44: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80331A48: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x80331A4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A54: jal         0x800272E8
    // 0x80331A58: nop

    func_800272E8(rdram, ctx);
        goto after_2;
    // 0x80331A58: nop

    after_2:
L_80331A5C:
    // 0x80331A5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A64: jal         0x80029C40
    // 0x80331A68: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x80331A68: nop

    after_3:
    // 0x80331A6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A74: jal         0x80029D04
    // 0x80331A78: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x80331A78: nop

    after_4:
    // 0x80331A7C: b           L_80331A84
    // 0x80331A80: nop

        goto L_80331A84;
    // 0x80331A80: nop

L_80331A84:
    // 0x80331A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331A88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331A8C: jr          $ra
    // 0x80331A90: nop

    return;
    // 0x80331A90: nop

;}
RECOMP_FUNC void func_803322E4_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803322E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803322E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803322EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803322F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803322F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803322F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803322FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332300: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332304: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332308: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033230C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332310: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332314: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332318: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033231C: nop

    // 0x80332320: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332324: nop

    // 0x80332328: bne         $t1, $zero, L_8033235C
    if (ctx->r9 != 0) {
        // 0x8033232C: nop
    
            goto L_8033235C;
    }
    // 0x8033232C: nop

    // 0x80332330: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332334: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80332338: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033233C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332340: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80332344: nop

    // 0x80332348: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033234C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332350: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332354: nop

    // 0x80332358: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_8033235C:
    // 0x8033235C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332364: jal         0x80029C40
    // 0x80332368: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80332368: nop

    after_0:
    // 0x8033236C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332370: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332374: jal         0x80029D04
    // 0x80332378: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80332378: nop

    after_1:
    // 0x8033237C: b           L_80332384
    // 0x80332380: nop

        goto L_80332384;
    // 0x80332380: nop

L_80332384:
    // 0x80332384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033238C: jr          $ra
    // 0x80332390: nop

    return;
    // 0x80332390: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330010: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
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
    // 0x80330040: addiu       $a1, $a1, 0x3580
    ctx->r5 = ADD32(ctx->r5, 0X3580);
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
    // 0x80330068: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033006C: beq         $t1, $at, L_803300C8
    if (ctx->r9 == ctx->r1) {
        // 0x80330070: nop
    
            goto L_803300C8;
    }
    // 0x80330070: nop

    // 0x80330074: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330078: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8033007C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330080: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330084: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80330088: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033008C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330090: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80330094: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330098: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033009C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803300A0: sh          $t3, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = ctx->r11;
    // 0x803300A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803300A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803300B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803300B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300BC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803300C0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803300C4: sh          $zero, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = 0;
L_803300C8:
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

    // 0x803300E0: jr          $ra
    // 0x803300E4: nop

    return;
    // 0x803300E4: nop

    // 0x803300E8: jr          $ra
    // 0x803300EC: nop

    return;
    // 0x803300EC: nop

;}
RECOMP_FUNC void func_80333158_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333158: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033315C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333160: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333164: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333168: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033316C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333170: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333174: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033317C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333180: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333184: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333188: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033318C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333190: nop

    // 0x80333194: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333198: nop

    // 0x8033319C: bne         $t1, $zero, L_803331F8
    if (ctx->r9 != 0) {
        // 0x803331A0: nop
    
            goto L_803331F8;
    }
    // 0x803331A0: nop

    // 0x803331A4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803331A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803331AC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803331B0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803331B4: nop

    // 0x803331B8: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x803331BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803331C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803331C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803331C8: addiu       $a3, $a3, -0x72D8
    ctx->r7 = ADD32(ctx->r7, -0X72D8);
    // 0x803331CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803331D0: jal         0x8001ABF4
    // 0x803331D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x803331D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803331D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803331DC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803331E0: addiu       $a3, $a3, -0x72D8
    ctx->r7 = ADD32(ctx->r7, -0X72D8);
    // 0x803331E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803331E8: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803331EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803331F0: jal         0x8001ABF4
    // 0x803331F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803331F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_803331F8:
    // 0x803331F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803331FC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80333200: lh          $t6, 0xB6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB6);
    // 0x80333204: nop

    // 0x80333208: bne         $t6, $at, L_803332C0
    if (ctx->r14 != ctx->r1) {
        // 0x8033320C: nop
    
            goto L_803332C0;
    }
    // 0x8033320C: nop

    // 0x80333210: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333214: nop

    // 0x80333218: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033321C: nop

    // 0x80333220: bne         $t8, $zero, L_80333290
    if (ctx->r24 != 0) {
        // 0x80333224: nop
    
            goto L_80333290;
    }
    // 0x80333224: nop

    // 0x80333228: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033322C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333230: addiu       $a3, $a3, -0x72D8
    ctx->r7 = ADD32(ctx->r7, -0X72D8);
    // 0x80333234: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333238: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8033323C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333240: jal         0x8001ABF4
    // 0x80333244: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80333244: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80333248: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033324C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333250: addiu       $a3, $a3, -0x72D8
    ctx->r7 = ADD32(ctx->r7, -0X72D8);
    // 0x80333254: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333258: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8033325C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333260: jal         0x8001ABF4
    // 0x80333264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80333264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80333268: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033326C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333274: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x80333278: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033327C: jal         0x800175F0
    // 0x80333280: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x80333280: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80333284: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333288: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033328C: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_80333290:
    // 0x80333290: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333294: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333298: jal         0x8002A1FC
    // 0x8033329C: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x8033329C: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_5:
    // 0x803332A0: beq         $v0, $zero, L_803332C0
    if (ctx->r2 == 0) {
        // 0x803332A4: nop
    
            goto L_803332C0;
    }
    // 0x803332A4: nop

    // 0x803332A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803332AC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803332B0: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x803332B4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803332B8: nop

    // 0x803332BC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_803332C0:
    // 0x803332C0: b           L_803332C8
    // 0x803332C4: nop

        goto L_803332C8;
    // 0x803332C4: nop

L_803332C8:
    // 0x803332C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803332CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803332D0: jr          $ra
    // 0x803332D4: nop

    return;
    // 0x803332D4: nop

;}
RECOMP_FUNC void func_80332394_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332394: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332398: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033239C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803323A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803323A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803323A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803323AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803323B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803323B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803323B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803323BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803323C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803323C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803323C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803323CC: nop

    // 0x803323D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803323D4: nop

    // 0x803323D8: bne         $t1, $zero, L_80332468
    if (ctx->r9 != 0) {
        // 0x803323DC: nop
    
            goto L_80332468;
    }
    // 0x803323DC: nop

    // 0x803323E0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803323E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803323E8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803323EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803323F0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803323F4: nop

    // 0x803323F8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803323FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332400: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332404: nop

    // 0x80332408: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8033240C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332410: nop

    // 0x80332414: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x80332418: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033241C: addiu       $t7, $zero, 0x258
    ctx->r15 = ADD32(0, 0X258);
    // 0x80332420: sh          $t7, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r15;
    // 0x80332424: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332428: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8033242C: addiu       $t9, $t9, 0x7CB0
    ctx->r25 = ADD32(ctx->r25, 0X7CB0);
    // 0x80332430: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332434: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80332438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033243C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332440: jal         0x8001C0EC
    // 0x80332444: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332444: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_0:
    // 0x80332448: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033244C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332450: jal         0x8001BBDC
    // 0x80332454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80332454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332458: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033245C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332460: jal         0x800261E8
    // 0x80332464: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800261E8(rdram, ctx);
        goto after_2;
    // 0x80332464: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80332468:
    // 0x80332468: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033246C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332470: jal         0x80029C40
    // 0x80332474: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x80332474: nop

    after_3:
    // 0x80332478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033247C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332480: jal         0x80029D04
    // 0x80332484: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x80332484: nop

    after_4:
    // 0x80332488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033248C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332490: jal         0x8001B44C
    // 0x80332494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x80332494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80332498: beq         $v0, $zero, L_803324FC
    if (ctx->r2 == 0) {
        // 0x8033249C: nop
    
            goto L_803324FC;
    }
    // 0x8033249C: nop

    // 0x803324A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803324A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803324A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803324AC: nop

    // 0x803324B0: bne         $t1, $at, L_803324FC
    if (ctx->r9 != ctx->r1) {
        // 0x803324B4: nop
    
            goto L_803324FC;
    }
    // 0x803324B4: nop

    // 0x803324B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803324BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803324C0: jal         0x8001BBDC
    // 0x803324C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x803324C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x803324C8: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x803324CC: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x803324D0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803324D4: jal         0x803312F0
    // 0x803324D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_803312F0_unk_bin_39(rdram, ctx);
        goto after_7;
    // 0x803324D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x803324DC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x803324E0: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x803324E4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803324E8: jal         0x80331B5C
    // 0x803324EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80331B5C_unk_bin_39(rdram, ctx);
        goto after_8;
    // 0x803324EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x803324F0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803324F4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803324F8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_803324FC:
    // 0x803324FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332500: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332504: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80332508: nop

    // 0x8033250C: bne         $t5, $at, L_80332514
    if (ctx->r13 != ctx->r1) {
        // 0x80332510: nop
    
            goto L_80332514;
    }
    // 0x80332510: nop

L_80332514:
    // 0x80332514: b           L_8033251C
    // 0x80332518: nop

        goto L_8033251C;
    // 0x80332518: nop

L_8033251C:
    // 0x8033251C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332524: jr          $ra
    // 0x80332528: nop

    return;
    // 0x80332528: nop

;}
RECOMP_FUNC void func_803326DC_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803326DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803326E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803326E4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803326E8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803326EC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803326F0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803326F4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803326F8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803326FC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80332700: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332704: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80332708: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033270C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332710: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80332714: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332718: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033271C: addiu       $a1, $a1, 0x4678
    ctx->r5 = ADD32(ctx->r5, 0X4678);
    // 0x80332720: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332724: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80332728: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033272C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332730: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80332734: jal         0x80027464
    // 0x80332738: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80332738: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033273C: b           L_80332744
    // 0x80332740: nop

        goto L_80332744;
    // 0x80332740: nop

L_80332744:
    // 0x80332744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033274C: jr          $ra
    // 0x80332750: nop

    return;
    // 0x80332750: nop

    // 0x80332754: jr          $ra
    // 0x80332758: nop

    return;
    // 0x80332758: nop

    // 0x8033275C: jr          $ra
    // 0x80332760: nop

    return;
    // 0x80332760: nop

;}
RECOMP_FUNC void func_80331DAC_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331DAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331DB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331DB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331DB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331DBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331DC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331DC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331DC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331DCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331DD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331DD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331DD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331DDC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331DE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331DE4: nop

    // 0x80331DE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331DEC: nop

    // 0x80331DF0: bne         $t1, $zero, L_80331E64
    if (ctx->r9 != 0) {
        // 0x80331DF4: nop
    
            goto L_80331E64;
    }
    // 0x80331DF4: nop

    // 0x80331DF8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331DFC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331E00: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331E04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331E08: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331E0C: nop

    // 0x80331E10: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80331E14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331E18: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331E1C: nop

    // 0x80331E20: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80331E24: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331E28: nop

    // 0x80331E2C: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x80331E30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E34: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80331E38: addiu       $t7, $t7, 0x7D88
    ctx->r15 = ADD32(ctx->r15, 0X7D88);
    // 0x80331E3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331E44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331E48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331E4C: jal         0x8001C0EC
    // 0x80331E50: addiu       $a3, $zero, 0xF2
    ctx->r7 = ADD32(0, 0XF2);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331E50: addiu       $a3, $zero, 0xF2
    ctx->r7 = ADD32(0, 0XF2);
    after_0:
    // 0x80331E54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E5C: jal         0x800272E8
    // 0x80331E60: nop

    func_800272E8(rdram, ctx);
        goto after_1;
    // 0x80331E60: nop

    after_1:
L_80331E64:
    // 0x80331E64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E6C: jal         0x80029C40
    // 0x80331E70: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80331E70: nop

    after_2:
    // 0x80331E74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E7C: jal         0x80029D04
    // 0x80331E80: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80331E80: nop

    after_3:
    // 0x80331E84: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331E88: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x80331E8C: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80331E90: nop

    // 0x80331E94: bne         $t9, $at, L_80331EBC
    if (ctx->r25 != ctx->r1) {
        // 0x80331E98: nop
    
            goto L_80331EBC;
    }
    // 0x80331E98: nop

    // 0x80331E9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EA4: jal         0x8001BB34
    // 0x80331EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80331EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80331EAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EB4: jal         0x8001BBDC
    // 0x80331EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x80331EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_80331EBC:
    // 0x80331EBC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331EC0: nop

    // 0x80331EC4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80331EC8: nop

    // 0x80331ECC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80331ED0: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x80331ED4: b           L_80331EDC
    // 0x80331ED8: nop

        goto L_80331EDC;
    // 0x80331ED8: nop

L_80331EDC:
    // 0x80331EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331EE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331EE4: jr          $ra
    // 0x80331EE8: nop

    return;
    // 0x80331EE8: nop

;}
RECOMP_FUNC void func_80331EEC_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331EEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331EF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331EF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331EF8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331EFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331F00: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331F04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331F0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F10: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331F14: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331F18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331F1C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331F20: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F24: nop

    // 0x80331F28: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331F2C: nop

    // 0x80331F30: bne         $t1, $zero, L_80331F64
    if (ctx->r9 != 0) {
        // 0x80331F34: nop
    
            goto L_80331F64;
    }
    // 0x80331F34: nop

    // 0x80331F38: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F3C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331F40: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331F44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331F48: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F4C: nop

    // 0x80331F50: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80331F54: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331F58: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F5C: nop

    // 0x80331F60: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_80331F64:
    // 0x80331F64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F6C: jal         0x80029C40
    // 0x80331F70: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80331F70: nop

    after_0:
    // 0x80331F74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F7C: jal         0x80029D04
    // 0x80331F80: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80331F80: nop

    after_1:
    // 0x80331F84: b           L_80331F8C
    // 0x80331F88: nop

        goto L_80331F8C;
    // 0x80331F88: nop

L_80331F8C:
    // 0x80331F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331F90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331F94: jr          $ra
    // 0x80331F98: nop

    return;
    // 0x80331F98: nop

;}
RECOMP_FUNC void func_80330DB4_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330DB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330DB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330DBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330DC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330DC4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330DC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330DCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330DD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330DD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330DD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330DDC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330DE0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330DE4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330DE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330DEC: nop

    // 0x80330DF0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330DF4: nop

    // 0x80330DF8: bne         $t1, $zero, L_80330E58
    if (ctx->r9 != 0) {
        // 0x80330DFC: nop
    
            goto L_80330E58;
    }
    // 0x80330DFC: nop

    // 0x80330E00: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330E04: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330E08: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80330E0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330E10: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330E14: nop

    // 0x80330E18: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80330E1C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330E20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330E24: nop

    // 0x80330E28: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80330E2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330E30: nop

    // 0x80330E34: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x80330E38: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330E3C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80330E40: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
    // 0x80330E44: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330E48: nop

    // 0x80330E4C: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80330E50: nop

    // 0x80330E54: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
L_80330E58:
    // 0x80330E58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E60: jal         0x80029C40
    // 0x80330E64: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80330E64: nop

    after_0:
    // 0x80330E68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E70: jal         0x80029D04
    // 0x80330E74: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80330E74: nop

    after_1:
    // 0x80330E78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330E7C: nop

    // 0x80330E80: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80330E84: nop

    // 0x80330E88: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80330E8C: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x80330E90: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330E94: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80330E98: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80330E9C: nop

    // 0x80330EA0: bne         $t4, $at, L_80330ECC
    if (ctx->r12 != ctx->r1) {
        // 0x80330EA4: nop
    
            goto L_80330ECC;
    }
    // 0x80330EA4: nop

    // 0x80330EA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330EAC: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80330EB0: addiu       $t5, $t5, 0x7030
    ctx->r13 = ADD32(ctx->r13, 0X7030);
    // 0x80330EB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330EB8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80330EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330EC0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80330EC4: jal         0x8001C0EC
    // 0x80330EC8: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80330EC8: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_2:
L_80330ECC:
    // 0x80330ECC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330ED0: nop

    // 0x80330ED4: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80330ED8: nop

    // 0x80330EDC: slti        $at, $t7, 0x23
    ctx->r1 = SIGNED(ctx->r15) < 0X23 ? 1 : 0;
    // 0x80330EE0: bne         $at, $zero, L_80330F18
    if (ctx->r1 != 0) {
        // 0x80330EE4: nop
    
            goto L_80330F18;
    }
    // 0x80330EE4: nop

    // 0x80330EE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330EEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330EF0: jal         0x8002A1FC
    // 0x80330EF4: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x80330EF4: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_3:
    // 0x80330EF8: beq         $v0, $zero, L_80330F18
    if (ctx->r2 == 0) {
        // 0x80330EFC: nop
    
            goto L_80330F18;
    }
    // 0x80330EFC: nop

    // 0x80330F00: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330F04: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80330F08: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330F0C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330F10: nop

    // 0x80330F14: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330F18:
    // 0x80330F18: b           L_80330F20
    // 0x80330F1C: nop

        goto L_80330F20;
    // 0x80330F1C: nop

L_80330F20:
    // 0x80330F20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330F28: jr          $ra
    // 0x80330F2C: nop

    return;
    // 0x80330F2C: nop

;}
RECOMP_FUNC void func_80332CDC_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332CDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332CE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332CE4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80332CE8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80332CEC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80332CF0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80332CF4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80332CF8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80332CFC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80332D00: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332D04: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80332D08: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80332D0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332D10: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80332D14: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332D18: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80332D1C: addiu       $a1, $a1, 0x4690
    ctx->r5 = ADD32(ctx->r5, 0X4690);
    // 0x80332D20: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332D24: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80332D28: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80332D2C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332D30: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80332D34: jal         0x80027464
    // 0x80332D38: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80332D38: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80332D3C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80332D40: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332D44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332D48: beq         $t1, $at, L_80332E94
    if (ctx->r9 == ctx->r1) {
        // 0x80332D4C: nop
    
            goto L_80332E94;
    }
    // 0x80332D4C: nop

    // 0x80332D50: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80332D54: addiu       $t2, $t2, -0x7250
    ctx->r10 = ADD32(ctx->r10, -0X7250);
    // 0x80332D58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80332D5C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80332D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332D68: jal         0x8001C0EC
    // 0x80332D6C: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80332D6C: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    after_1:
    // 0x80332D70: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332D74: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80332D78: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332D7C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332D80: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332D84: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332D88: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332D8C: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80332D90: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80332D94: addiu       $t5, $t5, -0x723C
    ctx->r13 = ADD32(ctx->r13, -0X723C);
    // 0x80332D98: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x80332D9C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80332DA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332DA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332DA8: jal         0x8001C0EC
    // 0x80332DAC: addiu       $a3, $zero, 0x4A
    ctx->r7 = ADD32(0, 0X4A);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80332DAC: addiu       $a3, $zero, 0x4A
    ctx->r7 = ADD32(0, 0X4A);
    after_2:
    // 0x80332DB0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332DB4: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80332DB8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80332DBC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332DC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332DC4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332DC8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332DCC: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80332DD0: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x80332DD4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332DD8: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x80332DDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332DE0: jal         0x8001ABF4
    // 0x80332DE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80332DE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80332DE8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332DEC: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80332DF0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80332DF4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80332DF8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332DFC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80332E00: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332E04: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80332E08: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332E0C: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x80332E10: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x80332E14: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80332E18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332E1C: jal         0x8001ABF4
    // 0x80332E20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80332E20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80332E24: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332E28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E2C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332E30: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332E34: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332E38: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332E3C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332E40: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332E44: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80332E48: sb          $t0, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r8;
    // 0x80332E4C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332E50: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80332E54: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332E58: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332E5C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332E60: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332E64: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332E68: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80332E6C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80332E70: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80332E74: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80332E78: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80332E7C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80332E80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332E84: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80332E88: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332E8C: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80332E90: sb          $t3, 0x13A($t1)
    MEM_B(0X13A, ctx->r9) = ctx->r11;
L_80332E94:
    // 0x80332E94: b           L_80332E9C
    // 0x80332E98: nop

        goto L_80332E9C;
    // 0x80332E98: nop

L_80332E9C:
    // 0x80332E9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332EA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332EA4: jr          $ra
    // 0x80332EA8: nop

    return;
    // 0x80332EA8: nop

;}
