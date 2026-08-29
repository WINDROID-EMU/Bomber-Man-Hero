#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8028517C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028517C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80285180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285184: jal         0x80022454
    // 0x80285188: nop

    func_80022454(rdram, ctx);
        goto after_0;
    // 0x80285188: nop

    after_0:
    // 0x8028518C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285190: sw          $v0, -0x1CC0($at)
    MEM_W(-0X1CC0, ctx->r1) = ctx->r2;
    // 0x80285194: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285198: lw          $t6, -0x1CC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1CC0);
    // 0x8028519C: nop

    // 0x802851A0: beq         $t6, $zero, L_80285468
    if (ctx->r14 == 0) {
        // 0x802851A4: nop
    
            goto L_80285468;
    }
    // 0x802851A4: nop

    // 0x802851A8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802851AC: lh          $t7, -0x1F00($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1F00);
    // 0x802851B0: nop

    // 0x802851B4: beq         $t7, $zero, L_802851D4
    if (ctx->r15 == 0) {
        // 0x802851B8: nop
    
            goto L_802851D4;
    }
    // 0x802851B8: nop

    // 0x802851BC: jal         0x80284424
    // 0x802851C0: nop

    func_80284424_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802851C0: nop

    after_1:
    // 0x802851C4: jal         0x8007A6DC
    // 0x802851C8: nop

    func_8007A6DC(rdram, ctx);
        goto after_2;
    // 0x802851C8: nop

    after_2:
    // 0x802851CC: b           L_802857C0
    // 0x802851D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802857C0;
    // 0x802851D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802851D4:
    // 0x802851D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802851D8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802851DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802851E0: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x802851E4: nop

    // 0x802851E8: beq         $t9, $at, L_80285214
    if (ctx->r25 == ctx->r1) {
        // 0x802851EC: nop
    
            goto L_80285214;
    }
    // 0x802851EC: nop

    // 0x802851F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802851F4: beq         $t9, $at, L_80285214
    if (ctx->r25 == ctx->r1) {
        // 0x802851F8: nop
    
            goto L_80285214;
    }
    // 0x802851F8: nop

    // 0x802851FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80285200: beq         $t9, $at, L_80285214
    if (ctx->r25 == ctx->r1) {
        // 0x80285204: nop
    
            goto L_80285214;
    }
    // 0x80285204: nop

    // 0x80285208: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8028520C: bne         $t9, $at, L_80285468
    if (ctx->r25 != ctx->r1) {
        // 0x80285210: nop
    
            goto L_80285468;
    }
    // 0x80285210: nop

L_80285214:
    // 0x80285214: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80285218: lw          $t0, -0x1CC0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1CC0);
    // 0x8028521C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80285220: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80285224: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80285228: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8028522C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80285230: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80285234: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80285238: lh          $t2, 0x41F4($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X41F4);
    // 0x8028523C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80285240: bne         $t2, $at, L_80285374
    if (ctx->r10 != ctx->r1) {
        // 0x80285244: nop
    
            goto L_80285374;
    }
    // 0x80285244: nop

    // 0x80285248: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028524C: lh          $t3, -0x1D68($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1D68);
    // 0x80285250: nop

    // 0x80285254: beq         $t3, $zero, L_80285344
    if (ctx->r11 == 0) {
        // 0x80285258: nop
    
            goto L_80285344;
    }
    // 0x80285258: nop

    // 0x8028525C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80285260: lw          $t4, -0x1CC0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1CC0);
    // 0x80285264: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80285268: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8028526C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80285270: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80285274: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80285278: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8028527C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80285280: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80285284: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80285288: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8028528C: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80285290: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80285294: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80285298: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8028529C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802852A0: jal         0x80015634
    // 0x802852A4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_3;
    // 0x802852A4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_3:
    // 0x802852A8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802852AC: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802852B0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802852B4: lwc1        $f12, 0x51D4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x802852B8: jal         0x80015538
    // 0x802852BC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x802852BC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_4:
    // 0x802852C0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802852C4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802852C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802852CC: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802852D0: nop

    // 0x802852D4: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x802852D8: nop

    // 0x802852DC: bc1t        L_80285300
    if (c1cs) {
        // 0x802852E0: nop
    
            goto L_80285300;
    }
    // 0x802852E0: nop

    // 0x802852E4: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802852E8: lwc1        $f4, -0x495C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X495C);
    // 0x802852EC: nop

    // 0x802852F0: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x802852F4: nop

    // 0x802852F8: bc1f        L_8028533C
    if (!c1cs) {
        // 0x802852FC: nop
    
            goto L_8028533C;
    }
    // 0x802852FC: nop

L_80285300:
    // 0x80285300: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80285304: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80285308: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028530C: lwc1        $f6, 0x51D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x80285310: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80285314: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
    // 0x80285318: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028531C: nop

    // 0x80285320: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80285324: nop

    // 0x80285328: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x8028532C: jal         0x8028333C
    // 0x80285330: nop

    func_8028333C_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x80285330: nop

    after_5:
    // 0x80285334: b           L_802857C0
    // 0x80285338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802857C0;
    // 0x80285338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028533C:
    // 0x8028533C: b           L_8028536C
    // 0x80285340: nop

        goto L_8028536C;
    // 0x80285340: nop

L_80285344:
    // 0x80285344: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80285348: lhu         $t1, -0x1C7C($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1C7C);
    // 0x8028534C: nop

    // 0x80285350: andi        $t2, $t1, 0x14
    ctx->r10 = ctx->r9 & 0X14;
    // 0x80285354: beq         $t2, $zero, L_8028536C
    if (ctx->r10 == 0) {
        // 0x80285358: nop
    
            goto L_8028536C;
    }
    // 0x80285358: nop

    // 0x8028535C: jal         0x8028333C
    // 0x80285360: nop

    func_8028333C_code_extra_0(rdram, ctx);
        goto after_6;
    // 0x80285360: nop

    after_6:
    // 0x80285364: b           L_802857C0
    // 0x80285368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802857C0;
    // 0x80285368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028536C:
    // 0x8028536C: b           L_80285468
    // 0x80285370: nop

        goto L_80285468;
    // 0x80285370: nop

L_80285374:
    // 0x80285374: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80285378: lh          $t3, -0x1EF8($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1EF8);
    // 0x8028537C: nop

    // 0x80285380: bne         $t3, $zero, L_80285468
    if (ctx->r11 != 0) {
        // 0x80285384: nop
    
            goto L_80285468;
    }
    // 0x80285384: nop

    // 0x80285388: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028538C: lw          $t4, -0x1CC0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1CC0);
    // 0x80285390: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80285394: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80285398: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8028539C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802853A0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802853A4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802853A8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802853AC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x802853B0: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x802853B4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x802853B8: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802853BC: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x802853C0: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x802853C4: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x802853C8: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x802853CC: jal         0x80015634
    // 0x802853D0: sub.s       $f14, $f16, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f4.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_7;
    // 0x802853D0: sub.s       $f14, $f16, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f4.fl;
    after_7:
    // 0x802853D4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802853D8: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802853DC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802853E0: lwc1        $f12, 0x51D4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x802853E4: jal         0x80015538
    // 0x802853E8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x802853E8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_8:
    // 0x802853EC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802853F0: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802853F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802853F8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802853FC: nop

    // 0x80285400: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80285404: nop

    // 0x80285408: bc1t        L_8028542C
    if (c1cs) {
        // 0x8028540C: nop
    
            goto L_8028542C;
    }
    // 0x8028540C: nop

    // 0x80285410: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80285414: lwc1        $f10, -0x4958($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4958);
    // 0x80285418: nop

    // 0x8028541C: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x80285420: nop

    // 0x80285424: bc1f        L_80285468
    if (!c1cs) {
        // 0x80285428: nop
    
            goto L_80285468;
    }
    // 0x80285428: nop

L_8028542C:
    // 0x8028542C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80285430: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80285434: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80285438: lwc1        $f18, 0x51D4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x8028543C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80285440: swc1        $f18, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f18.u32l;
    // 0x80285444: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80285448: nop

    // 0x8028544C: lwc1        $f16, 0x3C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80285450: nop

    // 0x80285454: swc1        $f16, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f16.u32l;
    // 0x80285458: jal         0x8028333C
    // 0x8028545C: nop

    func_8028333C_code_extra_0(rdram, ctx);
        goto after_9;
    // 0x8028545C: nop

    after_9:
    // 0x80285460: b           L_802857C0
    // 0x80285464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802857C0;
    // 0x80285464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80285468:
    // 0x80285468: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028546C: lhu         $t1, -0x1C7C($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1C7C);
    // 0x80285470: nop

    // 0x80285474: andi        $t2, $t1, 0x14
    ctx->r10 = ctx->r9 & 0X14;
    // 0x80285478: beq         $t2, $zero, L_8028559C
    if (ctx->r10 == 0) {
        // 0x8028547C: nop
    
            goto L_8028559C;
    }
    // 0x8028547C: nop

    // 0x80285480: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80285484: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80285488: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028548C: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x80285490: nop

    // 0x80285494: beq         $t4, $at, L_802854A8
    if (ctx->r12 == ctx->r1) {
        // 0x80285498: nop
    
            goto L_802854A8;
    }
    // 0x80285498: nop

    // 0x8028549C: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x802854A0: bne         $t4, $at, L_80285510
    if (ctx->r12 != ctx->r1) {
        // 0x802854A4: nop
    
            goto L_80285510;
    }
    // 0x802854A4: nop

L_802854A8:
    // 0x802854A8: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x802854AC: lw          $t5, 0x51A4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X51A4);
    // 0x802854B0: nop

    // 0x802854B4: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802854B8: bne         $t6, $zero, L_80285510
    if (ctx->r14 != 0) {
        // 0x802854BC: nop
    
            goto L_80285510;
    }
    // 0x802854BC: nop

    // 0x802854C0: jal         0x80284E9C
    // 0x802854C4: nop

    func_80284E9C_code_extra_0(rdram, ctx);
        goto after_10;
    // 0x802854C4: nop

    after_10:
    // 0x802854C8: bne         $v0, $zero, L_80285508
    if (ctx->r2 != 0) {
        // 0x802854CC: nop
    
            goto L_80285508;
    }
    // 0x802854CC: nop

    // 0x802854D0: jal         0x80284FAC
    // 0x802854D4: nop

    func_80284FAC_code_extra_0(rdram, ctx);
        goto after_11;
    // 0x802854D4: nop

    after_11:
    // 0x802854D8: bne         $v0, $zero, L_80285508
    if (ctx->r2 != 0) {
        // 0x802854DC: nop
    
            goto L_80285508;
    }
    // 0x802854DC: nop

    // 0x802854E0: jal         0x80079DFC
    // 0x802854E4: nop

    func_80079DFC(rdram, ctx);
        goto after_12;
    // 0x802854E4: nop

    after_12:
    // 0x802854E8: bne         $v0, $zero, L_80285508
    if (ctx->r2 != 0) {
        // 0x802854EC: nop
    
            goto L_80285508;
    }
    // 0x802854EC: nop

    // 0x802854F0: jal         0x8007A1E0
    // 0x802854F4: nop

    func_8007A1E0(rdram, ctx);
        goto after_13;
    // 0x802854F4: nop

    after_13:
    // 0x802854F8: jal         0x80282FCC
    // 0x802854FC: nop

    func_80282FCC_code_extra_0(rdram, ctx);
        goto after_14;
    // 0x802854FC: nop

    after_14:
    // 0x80285500: b           L_802857C0
    // 0x80285504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802857C0;
    // 0x80285504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80285508:
    // 0x80285508: b           L_80285594
    // 0x8028550C: nop

        goto L_80285594;
    // 0x8028550C: nop

L_80285510:
    // 0x80285510: jal         0x80284E9C
    // 0x80285514: nop

    func_80284E9C_code_extra_0(rdram, ctx);
        goto after_15;
    // 0x80285514: nop

    after_15:
    // 0x80285518: bne         $v0, $zero, L_80285594
    if (ctx->r2 != 0) {
        // 0x8028551C: nop
    
            goto L_80285594;
    }
    // 0x8028551C: nop

    // 0x80285520: jal         0x80284FAC
    // 0x80285524: nop

    func_80284FAC_code_extra_0(rdram, ctx);
        goto after_16;
    // 0x80285524: nop

    after_16:
    // 0x80285528: bne         $v0, $zero, L_80285594
    if (ctx->r2 != 0) {
        // 0x8028552C: nop
    
            goto L_80285594;
    }
    // 0x8028552C: nop

    // 0x80285530: jal         0x80079DFC
    // 0x80285534: nop

    func_80079DFC(rdram, ctx);
        goto after_17;
    // 0x80285534: nop

    after_17:
    // 0x80285538: bne         $v0, $zero, L_80285594
    if (ctx->r2 != 0) {
        // 0x8028553C: nop
    
            goto L_80285594;
    }
    // 0x8028553C: nop

    // 0x80285540: jal         0x8007A2C0
    // 0x80285544: nop

    func_8007A2C0(rdram, ctx);
        goto after_18;
    // 0x80285544: nop

    after_18:
    // 0x80285548: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028554C: lh          $t7, -0x1F00($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1F00);
    // 0x80285550: nop

    // 0x80285554: beq         $t7, $zero, L_80285594
    if (ctx->r15 == 0) {
        // 0x80285558: nop
    
            goto L_80285594;
    }
    // 0x80285558: nop

    // 0x8028555C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80285560: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x80285564: nop

    // 0x80285568: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8028556C: bne         $t9, $zero, L_80285584
    if (ctx->r25 != 0) {
        // 0x80285570: nop
    
            goto L_80285584;
    }
    // 0x80285570: nop

    // 0x80285574: jal         0x80283024
    // 0x80285578: nop

    func_80283024_code_extra_0(rdram, ctx);
        goto after_19;
    // 0x80285578: nop

    after_19:
    // 0x8028557C: b           L_8028558C
    // 0x80285580: nop

        goto L_8028558C;
    // 0x80285580: nop

L_80285584:
    // 0x80285584: jal         0x802832B8
    // 0x80285588: nop

    func_802832B8_code_extra_0(rdram, ctx);
        goto after_20;
    // 0x80285588: nop

    after_20:
L_8028558C:
    // 0x8028558C: b           L_802857C0
    // 0x80285590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802857C0;
    // 0x80285590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80285594:
    // 0x80285594: b           L_802857B0
    // 0x80285598: nop

        goto L_802857B0;
    // 0x80285598: nop

L_8028559C:
    // 0x8028559C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802855A0: lhu         $t0, -0x1C82($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C82);
    // 0x802855A4: nop

    // 0x802855A8: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x802855AC: beq         $t1, $zero, L_80285700
    if (ctx->r9 == 0) {
        // 0x802855B0: nop
    
            goto L_80285700;
    }
    // 0x802855B0: nop

    // 0x802855B4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802855B8: lh          $t2, -0x1F00($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1F00);
    // 0x802855BC: nop

    // 0x802855C0: bne         $t2, $zero, L_80285660
    if (ctx->r10 != 0) {
        // 0x802855C4: nop
    
            goto L_80285660;
    }
    // 0x802855C4: nop

    // 0x802855C8: jal         0x80284E9C
    // 0x802855CC: nop

    func_80284E9C_code_extra_0(rdram, ctx);
        goto after_21;
    // 0x802855CC: nop

    after_21:
    // 0x802855D0: bne         $v0, $zero, L_80285658
    if (ctx->r2 != 0) {
        // 0x802855D4: nop
    
            goto L_80285658;
    }
    // 0x802855D4: nop

    // 0x802855D8: jal         0x80284FAC
    // 0x802855DC: nop

    func_80284FAC_code_extra_0(rdram, ctx);
        goto after_22;
    // 0x802855DC: nop

    after_22:
    // 0x802855E0: bne         $v0, $zero, L_80285658
    if (ctx->r2 != 0) {
        // 0x802855E4: nop
    
            goto L_80285658;
    }
    // 0x802855E4: nop

    // 0x802855E8: jal         0x80079DFC
    // 0x802855EC: nop

    func_80079DFC(rdram, ctx);
        goto after_23;
    // 0x802855EC: nop

    after_23:
    // 0x802855F0: bne         $v0, $zero, L_80285658
    if (ctx->r2 != 0) {
        // 0x802855F4: nop
    
            goto L_80285658;
    }
    // 0x802855F4: nop

    // 0x802855F8: jal         0x8007A024
    // 0x802855FC: nop

    func_8007A024(rdram, ctx);
        goto after_24;
    // 0x802855FC: nop

    after_24:
    // 0x80285600: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80285604: lh          $t3, -0x1F00($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F00);
    // 0x80285608: nop

    // 0x8028560C: beq         $t3, $zero, L_80285658
    if (ctx->r11 == 0) {
        // 0x80285610: nop
    
            goto L_80285658;
    }
    // 0x80285610: nop

    // 0x80285614: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80285618: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028561C: lui         $t9, 0x8029
    ctx->r25 = S32(0X8029 << 16);
    // 0x80285620: lh          $t5, 0xA4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA4);
    // 0x80285624: nop

    // 0x80285628: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8028562C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80285630: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80285634: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80285638: lw          $t9, -0x4DFC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4DFC);
    // 0x8028563C: nop

    // 0x80285640: jalr        $t9
    // 0x80285644: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x80285644: nop

    after_25:
    // 0x80285648: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028564C: sh          $zero, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = 0;
    // 0x80285650: b           L_802857C0
    // 0x80285654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802857C0;
    // 0x80285654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80285658:
    // 0x80285658: b           L_802856F8
    // 0x8028565C: nop

        goto L_802856F8;
    // 0x8028565C: nop

L_80285660:
    // 0x80285660: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80285664: lh          $t7, -0x1D18($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D18);
    // 0x80285668: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028566C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80285670: sh          $t8, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = ctx->r24;
    // 0x80285674: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80285678: lh          $t0, -0x1D18($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1D18);
    // 0x8028567C: nop

    // 0x80285680: slti        $at, $t0, 0x3C
    ctx->r1 = SIGNED(ctx->r8) < 0X3C ? 1 : 0;
    // 0x80285684: bne         $at, $zero, L_802856F8
    if (ctx->r1 != 0) {
        // 0x80285688: nop
    
            goto L_802856F8;
    }
    // 0x80285688: nop

    // 0x8028568C: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x80285690: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285694: sh          $t1, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = ctx->r9;
    // 0x80285698: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028569C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802856A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802856A4: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x802856A8: nop

    // 0x802856AC: beq         $t3, $at, L_802856D8
    if (ctx->r11 == ctx->r1) {
        // 0x802856B0: nop
    
            goto L_802856D8;
    }
    // 0x802856B0: nop

    // 0x802856B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802856B8: beq         $t3, $at, L_802856D8
    if (ctx->r11 == ctx->r1) {
        // 0x802856BC: nop
    
            goto L_802856D8;
    }
    // 0x802856BC: nop

    // 0x802856C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802856C4: beq         $t3, $at, L_802856D8
    if (ctx->r11 == ctx->r1) {
        // 0x802856C8: nop
    
            goto L_802856D8;
    }
    // 0x802856C8: nop

    // 0x802856CC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802856D0: bne         $t3, $at, L_802856F8
    if (ctx->r11 != ctx->r1) {
        // 0x802856D4: nop
    
            goto L_802856F8;
    }
    // 0x802856D4: nop

L_802856D8:
    // 0x802856D8: jal         0x8007A1A8
    // 0x802856DC: nop

    func_8007A1A8(rdram, ctx);
        goto after_26;
    // 0x802856DC: nop

    after_26:
    // 0x802856E0: jal         0x802833AC
    // 0x802856E4: nop

    func_802833AC_code_extra_0(rdram, ctx);
        goto after_27;
    // 0x802856E4: nop

    after_27:
    // 0x802856E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802856EC: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x802856F0: b           L_802857C0
    // 0x802856F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802857C0;
    // 0x802856F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802856F8:
    // 0x802856F8: b           L_802857B0
    // 0x802856FC: nop

        goto L_802857B0;
    // 0x802856FC: nop

L_80285700:
    // 0x80285700: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80285704: lhu         $t4, -0x1C82($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C82);
    // 0x80285708: nop

    // 0x8028570C: andi        $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 & 0X4000;
    // 0x80285710: bne         $t5, $zero, L_802857B0
    if (ctx->r13 != 0) {
        // 0x80285714: nop
    
            goto L_802857B0;
    }
    // 0x80285714: nop

    // 0x80285718: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028571C: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x80285720: nop

    // 0x80285724: beq         $t6, $zero, L_802857B0
    if (ctx->r14 == 0) {
        // 0x80285728: nop
    
            goto L_802857B0;
    }
    // 0x80285728: nop

    // 0x8028572C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80285730: lh          $t9, -0x1F00($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1F00);
    // 0x80285734: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80285738: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8028573C: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80285740: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80285744: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80285748: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8028574C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80285750: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80285754: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x80285758: beq         $t8, $at, L_802857B0
    if (ctx->r24 == ctx->r1) {
        // 0x8028575C: nop
    
            goto L_802857B0;
    }
    // 0x8028575C: nop

    // 0x80285760: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x80285764: beq         $t8, $at, L_802857B0
    if (ctx->r24 == ctx->r1) {
        // 0x80285768: nop
    
            goto L_802857B0;
    }
    // 0x80285768: nop

    // 0x8028576C: jal         0x8007A120
    // 0x80285770: nop

    func_8007A120(rdram, ctx);
        goto after_28;
    // 0x80285770: nop

    after_28:
    // 0x80285774: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80285778: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028577C: lui         $t9, 0x8029
    ctx->r25 = S32(0X8029 << 16);
    // 0x80285780: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80285784: nop

    // 0x80285788: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8028578C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80285790: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80285794: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80285798: lw          $t9, -0x4DF8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4DF8);
    // 0x8028579C: nop

    // 0x802857A0: jalr        $t9
    // 0x802857A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x802857A4: nop

    after_29:
    // 0x802857A8: b           L_802857C0
    // 0x802857AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802857C0;
    // 0x802857AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802857B0:
    // 0x802857B0: b           L_802857C0
    // 0x802857B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802857C0;
    // 0x802857B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802857B8: b           L_802857C0
    // 0x802857BC: nop

        goto L_802857C0;
    // 0x802857BC: nop

L_802857C0:
    // 0x802857C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802857C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802857C8: jr          $ra
    // 0x802857CC: nop

    return;
    // 0x802857CC: nop

;}
RECOMP_FUNC void func_80286AAC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286AAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80286AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80286AB4: jal         0x802858D8
    // 0x80286AB8: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80286AB8: nop

    after_0:
    // 0x80286ABC: beq         $v0, $zero, L_80286ACC
    if (ctx->r2 == 0) {
        // 0x80286AC0: nop
    
            goto L_80286ACC;
    }
    // 0x80286AC0: nop

    // 0x80286AC4: b           L_80286C40
    // 0x80286AC8: nop

        goto L_80286C40;
    // 0x80286AC8: nop

L_80286ACC:
    // 0x80286ACC: jal         0x80085D54
    // 0x80286AD0: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80286AD0: nop

    after_1:
    // 0x80286AD4: beq         $v0, $zero, L_80286AE4
    if (ctx->r2 == 0) {
        // 0x80286AD8: nop
    
            goto L_80286AE4;
    }
    // 0x80286AD8: nop

    // 0x80286ADC: b           L_80286C40
    // 0x80286AE0: nop

        goto L_80286C40;
    // 0x80286AE0: nop

L_80286AE4:
    // 0x80286AE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286AE8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80286AEC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80286AF0: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80286AF4: nop

    // 0x80286AF8: beq         $t7, $at, L_80286B18
    if (ctx->r15 == ctx->r1) {
        // 0x80286AFC: nop
    
            goto L_80286B18;
    }
    // 0x80286AFC: nop

    // 0x80286B00: jal         0x80285F4C
    // 0x80286B04: nop

    func_80285F4C_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80286B04: nop

    after_2:
    // 0x80286B08: beq         $v0, $zero, L_80286B18
    if (ctx->r2 == 0) {
        // 0x80286B0C: nop
    
            goto L_80286B18;
    }
    // 0x80286B0C: nop

    // 0x80286B10: b           L_80286C40
    // 0x80286B14: nop

        goto L_80286C40;
    // 0x80286B14: nop

L_80286B18:
    // 0x80286B18: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80286B1C: lw          $t8, -0x1DA8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1DA8);
    // 0x80286B20: nop

    // 0x80286B24: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80286B28: bne         $t9, $zero, L_80286B40
    if (ctx->r25 != 0) {
        // 0x80286B2C: nop
    
            goto L_80286B40;
    }
    // 0x80286B2C: nop

    // 0x80286B30: jal         0x80282AC4
    // 0x80286B34: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80286B34: nop

    after_3:
    // 0x80286B38: b           L_80286C40
    // 0x80286B3C: nop

        goto L_80286C40;
    // 0x80286B3C: nop

L_80286B40:
    // 0x80286B40: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80286B44: lhu         $t0, -0x1C7C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C7C);
    // 0x80286B48: nop

    // 0x80286B4C: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80286B50: beq         $t1, $zero, L_80286B68
    if (ctx->r9 == 0) {
        // 0x80286B54: nop
    
            goto L_80286B68;
    }
    // 0x80286B54: nop

    // 0x80286B58: jal         0x802828C0
    // 0x80286B5C: nop

    func_802828C0_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80286B5C: nop

    after_4:
    // 0x80286B60: b           L_80286C40
    // 0x80286B64: nop

        goto L_80286C40;
    // 0x80286B64: nop

L_80286B68:
    // 0x80286B68: jal         0x8028517C
    // 0x80286B6C: nop

    func_8028517C_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x80286B6C: nop

    after_5:
    // 0x80286B70: beq         $v0, $zero, L_80286B80
    if (ctx->r2 == 0) {
        // 0x80286B74: nop
    
            goto L_80286B80;
    }
    // 0x80286B74: nop

    // 0x80286B78: b           L_80286C40
    // 0x80286B7C: nop

        goto L_80286C40;
    // 0x80286B7C: nop

L_80286B80:
    // 0x80286B80: jal         0x80285EB4
    // 0x80286B84: nop

    func_80285EB4_code_extra_0(rdram, ctx);
        goto after_6;
    // 0x80286B84: nop

    after_6:
    // 0x80286B88: beq         $v0, $zero, L_80286B98
    if (ctx->r2 == 0) {
        // 0x80286B8C: nop
    
            goto L_80286B98;
    }
    // 0x80286B8C: nop

    // 0x80286B90: b           L_80286C40
    // 0x80286B94: nop

        goto L_80286C40;
    // 0x80286B94: nop

L_80286B98:
    // 0x80286B98: jal         0x802869FC
    // 0x80286B9C: nop

    func_802869FC_code_extra_0(rdram, ctx);
        goto after_7;
    // 0x80286B9C: nop

    after_7:
    // 0x80286BA0: beq         $v0, $zero, L_80286BB0
    if (ctx->r2 == 0) {
        // 0x80286BA4: nop
    
            goto L_80286BB0;
    }
    // 0x80286BA4: nop

    // 0x80286BA8: b           L_80286C40
    // 0x80286BAC: nop

        goto L_80286C40;
    // 0x80286BAC: nop

L_80286BB0:
    // 0x80286BB0: jal         0x802867FC
    // 0x80286BB4: nop

    func_802867FC_code_extra_0(rdram, ctx);
        goto after_8;
    // 0x80286BB4: nop

    after_8:
    // 0x80286BB8: beq         $v0, $zero, L_80286BD0
    if (ctx->r2 == 0) {
        // 0x80286BBC: nop
    
            goto L_80286BD0;
    }
    // 0x80286BBC: nop

    // 0x80286BC0: jal         0x802843CC
    // 0x80286BC4: nop

    func_802843CC_code_extra_0(rdram, ctx);
        goto after_9;
    // 0x80286BC4: nop

    after_9:
    // 0x80286BC8: b           L_80286C40
    // 0x80286BCC: nop

        goto L_80286C40;
    // 0x80286BCC: nop

L_80286BD0:
    // 0x80286BD0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80286BD4: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80286BD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80286BDC: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x80286BE0: nop

    // 0x80286BE4: bne         $t3, $at, L_80286C28
    if (ctx->r11 != ctx->r1) {
        // 0x80286BE8: nop
    
            goto L_80286C28;
    }
    // 0x80286BE8: nop

    // 0x80286BEC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80286BF0: lw          $t4, -0x1EE8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1EE8);
    // 0x80286BF4: nop

    // 0x80286BF8: slti        $at, $t4, 0xF0
    ctx->r1 = SIGNED(ctx->r12) < 0XF0 ? 1 : 0;
    // 0x80286BFC: bne         $at, $zero, L_80286C28
    if (ctx->r1 != 0) {
        // 0x80286C00: nop
    
            goto L_80286C28;
    }
    // 0x80286C00: nop

    // 0x80286C04: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80286C08: lh          $t5, -0x1F00($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1F00);
    // 0x80286C0C: nop

    // 0x80286C10: bne         $t5, $zero, L_80286C28
    if (ctx->r13 != 0) {
        // 0x80286C14: nop
    
            goto L_80286C28;
    }
    // 0x80286C14: nop

    // 0x80286C18: jal         0x80284C70
    // 0x80286C1C: nop

    func_80284C70_code_extra_0(rdram, ctx);
        goto after_10;
    // 0x80286C1C: nop

    after_10:
    // 0x80286C20: b           L_80286C40
    // 0x80286C24: nop

        goto L_80286C40;
    // 0x80286C24: nop

L_80286C28:
    // 0x80286C28: jal         0x8028236C
    // 0x80286C2C: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_11;
    // 0x80286C2C: nop

    after_11:
    // 0x80286C30: b           L_80286C40
    // 0x80286C34: nop

        goto L_80286C40;
    // 0x80286C34: nop

    // 0x80286C38: b           L_80286C40
    // 0x80286C3C: nop

        goto L_80286C40;
    // 0x80286C3C: nop

L_80286C40:
    // 0x80286C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80286C44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80286C48: jr          $ra
    // 0x80286C4C: nop

    return;
    // 0x80286C4C: nop

;}
RECOMP_FUNC void func_8028A160_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A160: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028A164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028A168: jal         0x80281638
    // 0x8028A16C: nop

    func_80281638_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x8028A16C: nop

    after_0:
    // 0x8028A170: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8028A174: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028A178: jal         0x80280F18
    // 0x8028A17C: nop

    func_80280F18_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x8028A17C: nop

    after_1:
    // 0x8028A180: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8028A184: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028A188: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028A18C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028A190: nop

    // 0x8028A194: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8028A198: nop

    // 0x8028A19C: bc1t        L_8028A1B8
    if (c1cs) {
        // 0x8028A1A0: nop
    
            goto L_8028A1B8;
    }
    // 0x8028A1A0: nop

    // 0x8028A1A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A1A8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028A1AC: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028A1B0: nop

    // 0x8028A1B4: swc1        $f8, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f8.u32l;
L_8028A1B8:
    // 0x8028A1B8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A1BC: lh          $t7, -0x1D68($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D68);
    // 0x8028A1C0: nop

    // 0x8028A1C4: beq         $t7, $zero, L_8028A1DC
    if (ctx->r15 == 0) {
        // 0x8028A1C8: nop
    
            goto L_8028A1DC;
    }
    // 0x8028A1C8: nop

    // 0x8028A1CC: jal         0x80281BA4
    // 0x8028A1D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x8028A1D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8028A1D4: b           L_8028A1F0
    // 0x8028A1D8: nop

        goto L_8028A1F0;
    // 0x8028A1D8: nop

L_8028A1DC:
    // 0x8028A1DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028A1E0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028A1E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028A1E8: nop

    // 0x8028A1EC: swc1        $f10, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f10.u32l;
L_8028A1F0:
    // 0x8028A1F0: b           L_8028A1F8
    // 0x8028A1F4: nop

        goto L_8028A1F8;
    // 0x8028A1F4: nop

L_8028A1F8:
    // 0x8028A1F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028A1FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028A200: jr          $ra
    // 0x8028A204: nop

    return;
    // 0x8028A204: nop

;}
RECOMP_FUNC void func_80287394_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028739C: jal         0x802858D8
    // 0x802873A0: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802873A0: nop

    after_0:
    // 0x802873A4: beq         $v0, $zero, L_802873B4
    if (ctx->r2 == 0) {
        // 0x802873A8: nop
    
            goto L_802873B4;
    }
    // 0x802873A8: nop

    // 0x802873AC: b           L_802873F8
    // 0x802873B0: nop

        goto L_802873F8;
    // 0x802873B0: nop

L_802873B4:
    // 0x802873B4: jal         0x80085D54
    // 0x802873B8: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802873B8: nop

    after_1:
    // 0x802873BC: beq         $v0, $zero, L_802873CC
    if (ctx->r2 == 0) {
        // 0x802873C0: nop
    
            goto L_802873CC;
    }
    // 0x802873C0: nop

    // 0x802873C4: b           L_802873F8
    // 0x802873C8: nop

        goto L_802873F8;
    // 0x802873C8: nop

L_802873CC:
    // 0x802873CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802873D0: jal         0x8001B44C
    // 0x802873D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x802873D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802873D8: beq         $v0, $zero, L_802873F0
    if (ctx->r2 == 0) {
        // 0x802873DC: nop
    
            goto L_802873F0;
    }
    // 0x802873DC: nop

    // 0x802873E0: jal         0x8028236C
    // 0x802873E4: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802873E4: nop

    after_3:
    // 0x802873E8: b           L_802873F8
    // 0x802873EC: nop

        goto L_802873F8;
    // 0x802873EC: nop

L_802873F0:
    // 0x802873F0: b           L_802873F8
    // 0x802873F4: nop

        goto L_802873F8;
    // 0x802873F4: nop

L_802873F8:
    // 0x802873F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802873FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80287400: jr          $ra
    // 0x80287404: nop

    return;
    // 0x80287404: nop

;}
RECOMP_FUNC void func_80287674_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028767C: jal         0x802858D8
    // 0x80287680: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287680: nop

    after_0:
    // 0x80287684: beq         $v0, $zero, L_80287694
    if (ctx->r2 == 0) {
        // 0x80287688: nop
    
            goto L_80287694;
    }
    // 0x80287688: nop

    // 0x8028768C: b           L_802876D8
    // 0x80287690: nop

        goto L_802876D8;
    // 0x80287690: nop

L_80287694:
    // 0x80287694: jal         0x80085D54
    // 0x80287698: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80287698: nop

    after_1:
    // 0x8028769C: beq         $v0, $zero, L_802876AC
    if (ctx->r2 == 0) {
        // 0x802876A0: nop
    
            goto L_802876AC;
    }
    // 0x802876A0: nop

    // 0x802876A4: b           L_802876D8
    // 0x802876A8: nop

        goto L_802876D8;
    // 0x802876A8: nop

L_802876AC:
    // 0x802876AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802876B0: jal         0x8001B44C
    // 0x802876B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x802876B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802876B8: beq         $v0, $zero, L_802876D0
    if (ctx->r2 == 0) {
        // 0x802876BC: nop
    
            goto L_802876D0;
    }
    // 0x802876BC: nop

    // 0x802876C0: jal         0x8028236C
    // 0x802876C4: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802876C4: nop

    after_3:
    // 0x802876C8: b           L_802876D8
    // 0x802876CC: nop

        goto L_802876D8;
    // 0x802876CC: nop

L_802876D0:
    // 0x802876D0: b           L_802876D8
    // 0x802876D4: nop

        goto L_802876D8;
    // 0x802876D4: nop

L_802876D8:
    // 0x802876D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802876DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802876E0: jr          $ra
    // 0x802876E4: nop

    return;
    // 0x802876E4: nop

;}
RECOMP_FUNC void func_8028ADB0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028ADB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8028ADB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028ADB8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8028ADBC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8028ADC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028ADC4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028ADC8: nop

    // 0x8028ADCC: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8028ADD0: nop

    // 0x8028ADD4: bne         $t7, $zero, L_8028AF0C
    if (ctx->r15 != 0) {
        // 0x8028ADD8: nop
    
            goto L_8028AF0C;
    }
    // 0x8028ADD8: nop

    // 0x8028ADDC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028ADE0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028ADE4: nop

    // 0x8028ADE8: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8028ADEC: nop

    // 0x8028ADF0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8028ADF4: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8028ADF8: jal         0x8001819C
    // 0x8028ADFC: nop

    Reset_LightSettings(rdram, ctx);
        goto after_0;
    // 0x8028ADFC: nop

    after_0:
    // 0x8028AE00: jal         0x8001A928
    // 0x8028AE04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x8028AE04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8028AE08: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028AE0C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028AE10: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8028AE14: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x8028AE18: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028AE1C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028AE20: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028AE24: nop

    // 0x8028AE28: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x8028AE2C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028AE30: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028AE34: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028AE38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028AE3C: nop

    // 0x8028AE40: swc1        $f6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f6.u32l;
    // 0x8028AE44: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028AE48: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028AE4C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028AE50: nop

    // 0x8028AE54: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x8028AE58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028AE5C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028AE60: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028AE64: nop

    // 0x8028AE68: swc1        $f10, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f10.u32l;
    // 0x8028AE6C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028AE70: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028AE74: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028AE78: nop

    // 0x8028AE7C: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x8028AE80: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028AE84: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028AE88: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028AE8C: nop

    // 0x8028AE90: swc1        $f18, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f18.u32l;
    // 0x8028AE94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028AE98: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028AE9C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028AEA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028AEA4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028AEA8: swc1        $f4, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f4.u32l;
    // 0x8028AEAC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028AEB0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028AEB4: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8028AEB8: nop

    // 0x8028AEBC: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x8028AEC0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028AEC4: nop

    // 0x8028AEC8: swc1        $f20, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f20.u32l;
    // 0x8028AECC: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8028AED0: addiu       $t2, $t2, 0x5808
    ctx->r10 = ADD32(ctx->r10, 0X5808);
    // 0x8028AED4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8028AED8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028AEDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028AEE0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8028AEE4: jal         0x8001C0EC
    // 0x8028AEE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x8028AEE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8028AEEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028AEF0: jal         0x8001B754
    // 0x8028AEF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x8028AEF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8028AEF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028AEFC: jal         0x8001BBDC
    // 0x8028AF00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x8028AF00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8028AF04: jal         0x80280000
    // 0x8028AF08: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x8028AF08: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
L_8028AF0C:
    // 0x8028AF0C: jal         0x8001CD20
    // 0x8028AF10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_6;
    // 0x8028AF10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x8028AF14: jal         0x8001AD6C
    // 0x8028AF18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_7;
    // 0x8028AF18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x8028AF1C: b           L_8028AF24
    // 0x8028AF20: nop

        goto L_8028AF24;
    // 0x8028AF20: nop

L_8028AF24:
    // 0x8028AF24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8028AF28: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8028AF2C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028AF30: jr          $ra
    // 0x8028AF34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8028AF34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80284424_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284424: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284428: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028442C: jal         0x8001A928
    // 0x80284430: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80284430: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80284434: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80284438: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8028443C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x80284440: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80284444: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80284448: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x8028444C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80284450: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284458: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    // 0x8028445C: jal         0x8001C0EC
    // 0x80284460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80284460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80284464: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284468: jal         0x8001B754
    // 0x8028446C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x8028446C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80284470: jal         0x80280000
    // 0x80284474: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80284474: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80284478: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028447C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80284480: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80284484: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80284488: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8028448C: jal         0x80015538
    // 0x80284490: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80284490: nop

    after_4:
    // 0x80284494: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80284498: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028449C: nop

    // 0x802844A0: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x802844A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802844A8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802844AC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802844B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802844B4: nop

    // 0x802844B8: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x802844BC: b           L_802844C4
    // 0x802844C0: nop

        goto L_802844C4;
    // 0x802844C0: nop

L_802844C4:
    // 0x802844C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802844C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802844CC: jr          $ra
    // 0x802844D0: nop

    return;
    // 0x802844D0: nop

;}
RECOMP_FUNC void func_80282CD0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282CD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80282CD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282CD8: jal         0x8001A928
    // 0x80282CDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80282CDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80282CE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282CE4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282CE8: nop

    // 0x80282CEC: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80282CF0: nop

    // 0x80282CF4: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x80282CF8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282CFC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282D00: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x80282D04: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80282D08: nop

    // 0x80282D0C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80282D10: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80282D14: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80282D18: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80282D1C: lb          $t1, -0x4DF4($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X4DF4);
    // 0x80282D20: nop

    // 0x80282D24: bne         $t1, $zero, L_80282D64
    if (ctx->r9 != 0) {
        // 0x80282D28: nop
    
            goto L_80282D64;
    }
    // 0x80282D28: nop

    // 0x80282D2C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80282D30: sh          $t2, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r10;
    // 0x80282D34: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80282D38: lh          $t3, -0x1F00($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F00);
    // 0x80282D3C: nop

    // 0x80282D40: bne         $t3, $zero, L_80282D54
    if (ctx->r11 != 0) {
        // 0x80282D44: nop
    
            goto L_80282D54;
    }
    // 0x80282D44: nop

    // 0x80282D48: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x80282D4C: b           L_80282D5C
    // 0x80282D50: sh          $t4, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r12;
        goto L_80282D5C;
    // 0x80282D50: sh          $t4, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r12;
L_80282D54:
    // 0x80282D54: addiu       $t5, $zero, 0x16
    ctx->r13 = ADD32(0, 0X16);
    // 0x80282D58: sh          $t5, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r13;
L_80282D5C:
    // 0x80282D5C: b           L_80282D94
    // 0x80282D60: nop

        goto L_80282D94;
    // 0x80282D60: nop

L_80282D64:
    // 0x80282D64: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80282D68: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    // 0x80282D6C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282D70: lh          $t7, -0x1F00($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1F00);
    // 0x80282D74: nop

    // 0x80282D78: bne         $t7, $zero, L_80282D8C
    if (ctx->r15 != 0) {
        // 0x80282D7C: nop
    
            goto L_80282D8C;
    }
    // 0x80282D7C: nop

    // 0x80282D80: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x80282D84: b           L_80282D94
    // 0x80282D88: sh          $t8, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r24;
        goto L_80282D94;
    // 0x80282D88: sh          $t8, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r24;
L_80282D8C:
    // 0x80282D8C: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x80282D90: sh          $t9, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r25;
L_80282D94:
    // 0x80282D94: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80282D98: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80282D9C: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x80282DA0: nop

    // 0x80282DA4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80282DA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282DAC: jal         0x8001B62C
    // 0x80282DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80282DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80282DB4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80282DB8: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80282DBC: addiu       $t2, $t2, 0x5808
    ctx->r10 = ADD32(ctx->r10, 0X5808);
    // 0x80282DC0: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x80282DC4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80282DC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282DD0: jal         0x8001C0EC
    // 0x80282DD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80282DD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80282DD8: jal         0x80280000
    // 0x80282DDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80282DDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80282DE0: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x80282DE4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80282DE8: beq         $t3, $at, L_80282DFC
    if (ctx->r11 == ctx->r1) {
        // 0x80282DEC: nop
    
            goto L_80282DFC;
    }
    // 0x80282DEC: nop

    // 0x80282DF0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80282DF4: bne         $t3, $at, L_80282E14
    if (ctx->r11 != ctx->r1) {
        // 0x80282DF8: nop
    
            goto L_80282E14;
    }
    // 0x80282DF8: nop

L_80282DFC:
    // 0x80282DFC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282E00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282E04: jal         0x8001B6BC
    // 0x80282E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_4;
    // 0x80282E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80282E0C: b           L_80282E2C
    // 0x80282E10: nop

        goto L_80282E2C;
    // 0x80282E10: nop

L_80282E14:
    // 0x80282E14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282E18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282E1C: addiu       $a2, $zero, 0x49
    ctx->r6 = ADD32(0, 0X49);
    // 0x80282E20: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282E24: jal         0x800178D4
    // 0x80282E28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80282E28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_80282E2C:
    // 0x80282E2C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80282E30: lw          $t4, 0x51A4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X51A4);
    // 0x80282E34: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282E38: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80282E3C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282E40: sw          $t5, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r13;
    // 0x80282E44: b           L_80282E4C
    // 0x80282E48: nop

        goto L_80282E4C;
    // 0x80282E48: nop

L_80282E4C:
    // 0x80282E4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282E50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80282E54: jr          $ra
    // 0x80282E58: nop

    return;
    // 0x80282E58: nop

;}
RECOMP_FUNC void func_80282AC4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282AC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80282AC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282ACC: jal         0x8001A928
    // 0x80282AD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80282AD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80282AD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282AD8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282ADC: nop

    // 0x80282AE0: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80282AE4: nop

    // 0x80282AE8: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x80282AEC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80282AF0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282AF4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282AF8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80282AFC: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80282B00: nop

    // 0x80282B04: beq         $t9, $at, L_80282B18
    if (ctx->r25 == ctx->r1) {
        // 0x80282B08: nop
    
            goto L_80282B18;
    }
    // 0x80282B08: nop

    // 0x80282B0C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80282B10: bne         $t9, $at, L_80282B24
    if (ctx->r25 != ctx->r1) {
        // 0x80282B14: nop
    
            goto L_80282B24;
    }
    // 0x80282B14: nop

L_80282B18:
    // 0x80282B18: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80282B1C: b           L_80282B5C
    // 0x80282B20: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
        goto L_80282B5C;
    // 0x80282B20: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_80282B24:
    // 0x80282B24: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80282B28: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80282B2C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80282B30: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x80282B34: nop

    // 0x80282B38: bne         $t2, $at, L_80282B5C
    if (ctx->r10 != ctx->r1) {
        // 0x80282B3C: nop
    
            goto L_80282B5C;
    }
    // 0x80282B3C: nop

    // 0x80282B40: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80282B44: lh          $t3, -0x1D68($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1D68);
    // 0x80282B48: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80282B4C: bne         $t3, $at, L_80282B5C
    if (ctx->r11 != ctx->r1) {
        // 0x80282B50: nop
    
            goto L_80282B5C;
    }
    // 0x80282B50: nop

    // 0x80282B54: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80282B58: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
L_80282B5C:
    // 0x80282B5C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80282B60: nop

    // 0x80282B64: beq         $t5, $zero, L_80282BA4
    if (ctx->r13 == 0) {
        // 0x80282B68: nop
    
            goto L_80282BA4;
    }
    // 0x80282B68: nop

    // 0x80282B6C: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80282B70: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    // 0x80282B74: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282B78: lh          $t7, -0x1F00($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1F00);
    // 0x80282B7C: nop

    // 0x80282B80: bne         $t7, $zero, L_80282B94
    if (ctx->r15 != 0) {
        // 0x80282B84: nop
    
            goto L_80282B94;
    }
    // 0x80282B84: nop

    // 0x80282B88: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80282B8C: b           L_80282B9C
    // 0x80282B90: sh          $t8, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r24;
        goto L_80282B9C;
    // 0x80282B90: sh          $t8, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r24;
L_80282B94:
    // 0x80282B94: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x80282B98: sh          $t9, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r25;
L_80282B9C:
    // 0x80282B9C: b           L_80282BD4
    // 0x80282BA0: nop

        goto L_80282BD4;
    // 0x80282BA0: nop

L_80282BA4:
    // 0x80282BA4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80282BA8: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
    // 0x80282BAC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80282BB0: lh          $t1, -0x1F00($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1F00);
    // 0x80282BB4: nop

    // 0x80282BB8: bne         $t1, $zero, L_80282BCC
    if (ctx->r9 != 0) {
        // 0x80282BBC: nop
    
            goto L_80282BCC;
    }
    // 0x80282BBC: nop

    // 0x80282BC0: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80282BC4: b           L_80282BD4
    // 0x80282BC8: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
        goto L_80282BD4;
    // 0x80282BC8: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
L_80282BCC:
    // 0x80282BCC: addiu       $t3, $zero, 0x15
    ctx->r11 = ADD32(0, 0X15);
    // 0x80282BD0: sh          $t3, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r11;
L_80282BD4:
    // 0x80282BD4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80282BD8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80282BDC: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80282BE0: nop

    // 0x80282BE4: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80282BE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282BEC: jal         0x8001B62C
    // 0x80282BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80282BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80282BF4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80282BF8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80282BFC: addiu       $t6, $t6, 0x5808
    ctx->r14 = ADD32(ctx->r14, 0X5808);
    // 0x80282C00: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x80282C04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80282C08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282C10: jal         0x8001C0EC
    // 0x80282C14: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80282C14: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80282C18: jal         0x80280000
    // 0x80282C1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80282C1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80282C20: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x80282C24: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80282C28: beq         $t7, $at, L_80282C3C
    if (ctx->r15 == ctx->r1) {
        // 0x80282C2C: nop
    
            goto L_80282C3C;
    }
    // 0x80282C2C: nop

    // 0x80282C30: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80282C34: bne         $t7, $at, L_80282C54
    if (ctx->r15 != ctx->r1) {
        // 0x80282C38: nop
    
            goto L_80282C54;
    }
    // 0x80282C38: nop

L_80282C3C:
    // 0x80282C3C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282C40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282C44: jal         0x8001B6BC
    // 0x80282C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_4;
    // 0x80282C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80282C4C: b           L_80282CAC
    // 0x80282C50: nop

        goto L_80282CAC;
    // 0x80282C50: nop

L_80282C54:
    // 0x80282C54: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x80282C58: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80282C5C: beq         $t8, $at, L_80282CAC
    if (ctx->r24 == ctx->r1) {
        // 0x80282C60: nop
    
            goto L_80282CAC;
    }
    // 0x80282C60: nop

    // 0x80282C64: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80282C68: beq         $t8, $at, L_80282CAC
    if (ctx->r24 == ctx->r1) {
        // 0x80282C6C: nop
    
            goto L_80282CAC;
    }
    // 0x80282C6C: nop

    // 0x80282C70: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80282C74: beq         $t8, $at, L_80282CAC
    if (ctx->r24 == ctx->r1) {
        // 0x80282C78: nop
    
            goto L_80282CAC;
    }
    // 0x80282C78: nop

    // 0x80282C7C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80282C80: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80282C84: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282C88: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80282C8C: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x80282C90: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80282C94: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80282C98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80282C9C: nop

    // 0x80282CA0: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x80282CA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282CA8: sb          $zero, -0x1DB8($at)
    MEM_B(-0X1DB8, ctx->r1) = 0;
L_80282CAC:
    // 0x80282CAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282CB0: jal         0x8001B754
    // 0x80282CB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_5;
    // 0x80282CB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80282CB8: b           L_80282CC0
    // 0x80282CBC: nop

        goto L_80282CC0;
    // 0x80282CBC: nop

L_80282CC0:
    // 0x80282CC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282CC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80282CC8: jr          $ra
    // 0x80282CCC: nop

    return;
    // 0x80282CCC: nop

;}
RECOMP_FUNC void func_802828C0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802828C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802828C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802828C8: jal         0x8001A928
    // 0x802828CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x802828CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802828D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802828D4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802828D8: nop

    // 0x802828DC: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x802828E0: nop

    // 0x802828E4: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x802828E8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802828EC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802828F0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802828F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802828F8: lwc1        $f4, 0x44($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X44);
    // 0x802828FC: nop

    // 0x80282900: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80282904: nop

    // 0x80282908: bc1f        L_80282948
    if (!c1cs) {
        // 0x8028290C: nop
    
            goto L_80282948;
    }
    // 0x8028290C: nop

    // 0x80282910: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80282914: sh          $t9, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r25;
    // 0x80282918: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028291C: lh          $t0, -0x1F00($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1F00);
    // 0x80282920: nop

    // 0x80282924: bne         $t0, $zero, L_80282938
    if (ctx->r8 != 0) {
        // 0x80282928: nop
    
            goto L_80282938;
    }
    // 0x80282928: nop

    // 0x8028292C: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80282930: b           L_80282940
    // 0x80282934: sh          $t1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r9;
        goto L_80282940;
    // 0x80282934: sh          $t1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r9;
L_80282938:
    // 0x80282938: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x8028293C: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
L_80282940:
    // 0x80282940: b           L_80282978
    // 0x80282944: nop

        goto L_80282978;
    // 0x80282944: nop

L_80282948:
    // 0x80282948: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x8028294C: sh          $t3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r11;
    // 0x80282950: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80282954: lh          $t4, -0x1F00($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1F00);
    // 0x80282958: nop

    // 0x8028295C: bne         $t4, $zero, L_80282970
    if (ctx->r12 != 0) {
        // 0x80282960: nop
    
            goto L_80282970;
    }
    // 0x80282960: nop

    // 0x80282964: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x80282968: b           L_80282978
    // 0x8028296C: sh          $t5, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r13;
        goto L_80282978;
    // 0x8028296C: sh          $t5, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r13;
L_80282970:
    // 0x80282970: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x80282974: sh          $t6, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r14;
L_80282978:
    // 0x80282978: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028297C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282980: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x80282984: nop

    // 0x80282988: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8028298C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282990: jal         0x8001B62C
    // 0x80282994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80282994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80282998: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8028299C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802829A0: addiu       $t9, $t9, 0x5808
    ctx->r25 = ADD32(ctx->r25, 0X5808);
    // 0x802829A4: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x802829A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802829AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802829B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802829B4: jal         0x8001C0EC
    // 0x802829B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x802829B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x802829BC: jal         0x80280000
    // 0x802829C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802829C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802829C4: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x802829C8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802829CC: beq         $t0, $at, L_802829E0
    if (ctx->r8 == ctx->r1) {
        // 0x802829D0: nop
    
            goto L_802829E0;
    }
    // 0x802829D0: nop

    // 0x802829D4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802829D8: bne         $t0, $at, L_802829F8
    if (ctx->r8 != ctx->r1) {
        // 0x802829DC: nop
    
            goto L_802829F8;
    }
    // 0x802829DC: nop

L_802829E0:
    // 0x802829E0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802829E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802829E8: jal         0x8001B6BC
    // 0x802829EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_4;
    // 0x802829EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802829F0: b           L_80282A54
    // 0x802829F4: nop

        goto L_80282A54;
    // 0x802829F4: nop

L_802829F8:
    // 0x802829F8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x802829FC: lw          $t1, 0x51A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51A4);
    // 0x80282A00: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282A04: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x80282A08: sw          $t2, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r10;
    // 0x80282A0C: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80282A10: lw          $t3, 0x51A4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X51A4);
    // 0x80282A14: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80282A18: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x80282A1C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282A20: sw          $t4, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r12;
    // 0x80282A24: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80282A28: lw          $t5, 0x51A4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X51A4);
    // 0x80282A2C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282A30: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x80282A34: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282A38: sw          $t6, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r14;
    // 0x80282A3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282A44: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80282A48: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282A4C: jal         0x800178D4
    // 0x80282A50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80282A50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_80282A54:
    // 0x80282A54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282A58: jal         0x8001B754
    // 0x80282A5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_6;
    // 0x80282A5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80282A60: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80282A64: addiu       $t7, $t7, 0x51D8
    ctx->r15 = ADD32(ctx->r15, 0X51D8);
    // 0x80282A68: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80282A6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80282A70: lwc1        $f8, 0xC($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80282A74: nop

    // 0x80282A78: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80282A7C: nop

    // 0x80282A80: bc1f        L_80282AA0
    if (!c1cs) {
        // 0x80282A84: nop
    
            goto L_80282AA0;
    }
    // 0x80282A84: nop

    // 0x80282A88: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80282A8C: addiu       $t8, $t8, 0x51D8
    ctx->r24 = ADD32(ctx->r24, 0X51D8);
    // 0x80282A90: lwc1        $f16, 0xC($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0XC);
    // 0x80282A94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282A98: b           L_80282AAC
    // 0x80282A9C: swc1        $f16, -0x1DA0($at)
    MEM_W(-0X1DA0, ctx->r1) = ctx->f16.u32l;
        goto L_80282AAC;
    // 0x80282A9C: swc1        $f16, -0x1DA0($at)
    MEM_W(-0X1DA0, ctx->r1) = ctx->f16.u32l;
L_80282AA0:
    // 0x80282AA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80282AA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282AA8: swc1        $f18, -0x1DA0($at)
    MEM_W(-0X1DA0, ctx->r1) = ctx->f18.u32l;
L_80282AAC:
    // 0x80282AAC: b           L_80282AB4
    // 0x80282AB0: nop

        goto L_80282AB4;
    // 0x80282AB0: nop

L_80282AB4:
    // 0x80282AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282AB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80282ABC: jr          $ra
    // 0x80282AC0: nop

    return;
    // 0x80282AC0: nop

;}
RECOMP_FUNC void func_80287518_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287518: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028751C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287520: jal         0x802858D8
    // 0x80287524: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287524: nop

    after_0:
    // 0x80287528: beq         $v0, $zero, L_80287538
    if (ctx->r2 == 0) {
        // 0x8028752C: nop
    
            goto L_80287538;
    }
    // 0x8028752C: nop

    // 0x80287530: b           L_8028757C
    // 0x80287534: nop

        goto L_8028757C;
    // 0x80287534: nop

L_80287538:
    // 0x80287538: jal         0x80085D54
    // 0x8028753C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x8028753C: nop

    after_1:
    // 0x80287540: beq         $v0, $zero, L_80287550
    if (ctx->r2 == 0) {
        // 0x80287544: nop
    
            goto L_80287550;
    }
    // 0x80287544: nop

    // 0x80287548: b           L_8028757C
    // 0x8028754C: nop

        goto L_8028757C;
    // 0x8028754C: nop

L_80287550:
    // 0x80287550: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80287554: jal         0x8001B44C
    // 0x80287558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80287558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8028755C: beq         $v0, $zero, L_80287574
    if (ctx->r2 == 0) {
        // 0x80287560: nop
    
            goto L_80287574;
    }
    // 0x80287560: nop

    // 0x80287564: jal         0x8028236C
    // 0x80287568: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80287568: nop

    after_3:
    // 0x8028756C: b           L_8028757C
    // 0x80287570: nop

        goto L_8028757C;
    // 0x80287570: nop

L_80287574:
    // 0x80287574: b           L_8028757C
    // 0x80287578: nop

        goto L_8028757C;
    // 0x80287578: nop

L_8028757C:
    // 0x8028757C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80287584: jr          $ra
    // 0x80287588: nop

    return;
    // 0x80287588: nop

;}
RECOMP_FUNC void func_80286DA8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80286DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80286DB0: jal         0x802858D8
    // 0x80286DB4: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80286DB4: nop

    after_0:
    // 0x80286DB8: beq         $v0, $zero, L_80286DC8
    if (ctx->r2 == 0) {
        // 0x80286DBC: nop
    
            goto L_80286DC8;
    }
    // 0x80286DBC: nop

    // 0x80286DC0: b           L_80286EB8
    // 0x80286DC4: nop

        goto L_80286EB8;
    // 0x80286DC4: nop

L_80286DC8:
    // 0x80286DC8: jal         0x80085D54
    // 0x80286DCC: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80286DCC: nop

    after_1:
    // 0x80286DD0: beq         $v0, $zero, L_80286DE0
    if (ctx->r2 == 0) {
        // 0x80286DD4: nop
    
            goto L_80286DE0;
    }
    // 0x80286DD4: nop

    // 0x80286DD8: b           L_80286EB8
    // 0x80286DDC: nop

        goto L_80286EB8;
    // 0x80286DDC: nop

L_80286DE0:
    // 0x80286DE0: jal         0x80285F4C
    // 0x80286DE4: nop

    func_80285F4C_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80286DE4: nop

    after_2:
    // 0x80286DE8: beq         $v0, $zero, L_80286DF8
    if (ctx->r2 == 0) {
        // 0x80286DEC: nop
    
            goto L_80286DF8;
    }
    // 0x80286DEC: nop

    // 0x80286DF0: b           L_80286EB8
    // 0x80286DF4: nop

        goto L_80286EB8;
    // 0x80286DF4: nop

L_80286DF8:
    // 0x80286DF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286DFC: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80286E00: nop

    // 0x80286E04: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80286E08: bne         $t7, $zero, L_80286E20
    if (ctx->r15 != 0) {
        // 0x80286E0C: nop
    
            goto L_80286E20;
    }
    // 0x80286E0C: nop

    // 0x80286E10: jal         0x80282AC4
    // 0x80286E14: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80286E14: nop

    after_3:
    // 0x80286E18: b           L_80286EB8
    // 0x80286E1C: nop

        goto L_80286EB8;
    // 0x80286E1C: nop

L_80286E20:
    // 0x80286E20: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80286E24: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80286E28: nop

    // 0x80286E2C: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80286E30: beq         $t9, $zero, L_80286E48
    if (ctx->r25 == 0) {
        // 0x80286E34: nop
    
            goto L_80286E48;
    }
    // 0x80286E34: nop

    // 0x80286E38: jal         0x802828C0
    // 0x80286E3C: nop

    func_802828C0_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80286E3C: nop

    after_4:
    // 0x80286E40: b           L_80286EB8
    // 0x80286E44: nop

        goto L_80286EB8;
    // 0x80286E44: nop

L_80286E48:
    // 0x80286E48: jal         0x80285EB4
    // 0x80286E4C: nop

    func_80285EB4_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x80286E4C: nop

    after_5:
    // 0x80286E50: beq         $v0, $zero, L_80286E60
    if (ctx->r2 == 0) {
        // 0x80286E54: nop
    
            goto L_80286E60;
    }
    // 0x80286E54: nop

    // 0x80286E58: b           L_80286EB8
    // 0x80286E5C: nop

        goto L_80286EB8;
    // 0x80286E5C: nop

L_80286E60:
    // 0x80286E60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80286E64: jal         0x8001B44C
    // 0x80286E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x80286E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80286E6C: beq         $v0, $zero, L_80286EB0
    if (ctx->r2 == 0) {
        // 0x80286E70: nop
    
            goto L_80286EB0;
    }
    // 0x80286E70: nop

    // 0x80286E74: jal         0x8028236C
    // 0x80286E78: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_7;
    // 0x80286E78: nop

    after_7:
    // 0x80286E7C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80286E80: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80286E84: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80286E88: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80286E8C: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80286E90: jal         0x80015538
    // 0x80286E94: nop

    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x80286E94: nop

    after_8:
    // 0x80286E98: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80286E9C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80286EA0: nop

    // 0x80286EA4: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x80286EA8: b           L_80286EB8
    // 0x80286EAC: nop

        goto L_80286EB8;
    // 0x80286EAC: nop

L_80286EB0:
    // 0x80286EB0: b           L_80286EB8
    // 0x80286EB4: nop

        goto L_80286EB8;
    // 0x80286EB4: nop

L_80286EB8:
    // 0x80286EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80286EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80286EC0: jr          $ra
    // 0x80286EC4: nop

    return;
    // 0x80286EC4: nop

;}
RECOMP_FUNC void func_802867FC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802867FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80286800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80286804: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286808: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028680C: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x80286810: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80286814: nop

    // 0x80286818: bne         $t7, $at, L_80286830
    if (ctx->r15 != ctx->r1) {
        // 0x8028681C: nop
    
            goto L_80286830;
    }
    // 0x8028681C: nop

    // 0x80286820: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80286824: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80286828: b           L_80286840
    // 0x8028682C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
        goto L_80286840;
    // 0x8028682C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
L_80286830:
    // 0x80286830: lui         $at, 0x422C
    ctx->r1 = S32(0X422C << 16);
    // 0x80286834: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80286838: nop

    // 0x8028683C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_80286840:
    // 0x80286840: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80286844: lh          $t8, -0x1F64($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F64);
    // 0x80286848: nop

    // 0x8028684C: beq         $t8, $zero, L_802869DC
    if (ctx->r24 == 0) {
        // 0x80286850: nop
    
            goto L_802869DC;
    }
    // 0x80286850: nop

    // 0x80286854: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80286858: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8028685C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80286860: lh          $t0, -0x1F5C($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1F5C);
    // 0x80286864: nop

    // 0x80286868: beq         $t0, $zero, L_802868E0
    if (ctx->r8 == 0) {
        // 0x8028686C: nop
    
            goto L_802868E0;
    }
    // 0x8028686C: nop

    // 0x80286870: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80286874:
    // 0x80286874: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80286878: lh          $t1, -0x1F5C($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1F5C);
    // 0x8028687C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80286880: nop

    // 0x80286884: srav        $t3, $t1, $t2
    ctx->r11 = S32(SIGNED(ctx->r9) >> (ctx->r10 & 31));
    // 0x80286888: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8028688C: beq         $t4, $zero, L_802868C8
    if (ctx->r12 == 0) {
        // 0x80286890: nop
    
            goto L_802868C8;
    }
    // 0x80286890: nop

    // 0x80286894: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80286898: lui         $t6, 0x8029
    ctx->r14 = S32(0X8029 << 16);
    // 0x8028689C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x802868A0: lb          $t6, -0x4E14($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X4E14);
    // 0x802868A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802868A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802868AC: lbu         $t7, 0x791C($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X791C);
    // 0x802868B0: nop

    // 0x802868B4: beq         $t7, $zero, L_802868C8
    if (ctx->r15 == 0) {
        // 0x802868B8: nop
    
            goto L_802868C8;
    }
    // 0x802868B8: nop

    // 0x802868BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802868C0: b           L_802868E0
    // 0x802868C4: nop

        goto L_802868E0;
    // 0x802868C4: nop

L_802868C8:
    // 0x802868C8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x802868CC: nop

    // 0x802868D0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802868D4: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x802868D8: bne         $at, $zero, L_80286874
    if (ctx->r1 != 0) {
        // 0x802868DC: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_80286874;
    }
    // 0x802868DC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_802868E0:
    // 0x802868E0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x802868E4: nop

    // 0x802868E8: beq         $t0, $zero, L_802869DC
    if (ctx->r8 == 0) {
        // 0x802868EC: nop
    
            goto L_802869DC;
    }
    // 0x802868EC: nop

    // 0x802868F0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802868F4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802868F8: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802868FC: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80286900: lwc1        $f17, -0x4950($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4950);
    // 0x80286904: lwc1        $f16, -0x494C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X494C);
    // 0x80286908: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8028690C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80286910: jal         0x80034970
    // 0x80286914: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80286914: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_0:
    // 0x80286918: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8028691C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80286920: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80286924: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80286928: nop

    // 0x8028692C: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80286930: nop

    // 0x80286934: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80286938: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8028693C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80286940: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80286944: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80286948: lwc1        $f16, 0x3C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8028694C: lwc1        $f5, -0x4948($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4948);
    // 0x80286950: lwc1        $f4, -0x4944($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4944);
    // 0x80286954: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80286958: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8028695C: jal         0x80036570
    // 0x80286960: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80286960: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_1:
    // 0x80286964: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80286968: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028696C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80286970: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80286974: nop

    // 0x80286978: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8028697C: nop

    // 0x80286980: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80286984: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80286988: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028698C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80286990: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80286994: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80286998: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8028699C: nop

    // 0x802869A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802869A4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x802869A8: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802869AC: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802869B0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802869B4: jal         0x800843CC
    // 0x802869B8: nop

    func_800843CC(rdram, ctx);
        goto after_2;
    // 0x802869B8: nop

    after_2:
    // 0x802869BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802869C0: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x802869C4: nop

    // 0x802869C8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802869CC: beq         $t7, $zero, L_802869DC
    if (ctx->r15 == 0) {
        // 0x802869D0: nop
    
            goto L_802869DC;
    }
    // 0x802869D0: nop

    // 0x802869D4: b           L_802869EC
    // 0x802869D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802869EC;
    // 0x802869D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802869DC:
    // 0x802869DC: b           L_802869EC
    // 0x802869E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802869EC;
    // 0x802869E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802869E4: b           L_802869EC
    // 0x802869E8: nop

        goto L_802869EC;
    // 0x802869E8: nop

L_802869EC:
    // 0x802869EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802869F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802869F4: jr          $ra
    // 0x802869F8: nop

    return;
    // 0x802869F8: nop

;}
RECOMP_FUNC void func_80289170_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289178: jal         0x80281638
    // 0x8028917C: nop

    func_80281638_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x8028917C: nop

    after_0:
    // 0x80289180: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289184: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289188: nop

    // 0x8028918C: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80289190: nop

    // 0x80289194: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80289198: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8028919C: lh          $a0, -0x1D68($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D68);
    // 0x802891A0: jal         0x80281BA4
    // 0x802891A4: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802891A4: nop

    after_1:
    // 0x802891A8: b           L_802891B0
    // 0x802891AC: nop

        goto L_802891B0;
    // 0x802891AC: nop

L_802891B0:
    // 0x802891B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802891B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802891B8: jr          $ra
    // 0x802891BC: nop

    return;
    // 0x802891BC: nop

;}
RECOMP_FUNC void func_80289644_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028964C: jal         0x80281E50
    // 0x80289650: nop

    func_80281E50_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289650: nop

    after_0:
    // 0x80289654: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289658: lh          $t6, -0x1D68($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D68);
    // 0x8028965C: nop

    // 0x80289660: beq         $t6, $zero, L_80289670
    if (ctx->r14 == 0) {
        // 0x80289664: nop
    
            goto L_80289670;
    }
    // 0x80289664: nop

    // 0x80289668: jal         0x80282250
    // 0x8028966C: nop

    func_80282250_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x8028966C: nop

    after_1:
L_80289670:
    // 0x80289670: b           L_80289678
    // 0x80289674: nop

        goto L_80289678;
    // 0x80289674: nop

L_80289678:
    // 0x80289678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028967C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80289680: jr          $ra
    // 0x80289684: nop

    return;
    // 0x80289684: nop

;}
RECOMP_FUNC void func_80287408_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028740C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287410: jal         0x802858D8
    // 0x80287414: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287414: nop

    after_0:
    // 0x80287418: beq         $v0, $zero, L_80287428
    if (ctx->r2 == 0) {
        // 0x8028741C: nop
    
            goto L_80287428;
    }
    // 0x8028741C: nop

    // 0x80287420: b           L_80287494
    // 0x80287424: nop

        goto L_80287494;
    // 0x80287424: nop

L_80287428:
    // 0x80287428: jal         0x80085D54
    // 0x8028742C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x8028742C: nop

    after_1:
    // 0x80287430: beq         $v0, $zero, L_80287440
    if (ctx->r2 == 0) {
        // 0x80287434: nop
    
            goto L_80287440;
    }
    // 0x80287434: nop

    // 0x80287438: b           L_80287494
    // 0x8028743C: nop

        goto L_80287494;
    // 0x8028743C: nop

L_80287440:
    // 0x80287440: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287444: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80287448: nop

    // 0x8028744C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80287450: bne         $t7, $zero, L_80287468
    if (ctx->r15 != 0) {
        // 0x80287454: nop
    
            goto L_80287468;
    }
    // 0x80287454: nop

    // 0x80287458: jal         0x802832B8
    // 0x8028745C: nop

    func_802832B8_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x8028745C: nop

    after_2:
    // 0x80287460: b           L_80287494
    // 0x80287464: nop

        goto L_80287494;
    // 0x80287464: nop

L_80287468:
    // 0x80287468: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028746C: lh          $t8, -0x1F00($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F00);
    // 0x80287470: nop

    // 0x80287474: bne         $t8, $zero, L_8028748C
    if (ctx->r24 != 0) {
        // 0x80287478: nop
    
            goto L_8028748C;
    }
    // 0x80287478: nop

    // 0x8028747C: jal         0x8028236C
    // 0x80287480: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80287480: nop

    after_3:
    // 0x80287484: b           L_80287494
    // 0x80287488: nop

        goto L_80287494;
    // 0x80287488: nop

L_8028748C:
    // 0x8028748C: b           L_80287494
    // 0x80287490: nop

        goto L_80287494;
    // 0x80287490: nop

L_80287494:
    // 0x80287494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028749C: jr          $ra
    // 0x802874A0: nop

    return;
    // 0x802874A0: nop

;}
RECOMP_FUNC void func_8028333C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028333C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283340: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283344: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283348: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028334C: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x80283350: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283354: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283358: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x8028335C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283360: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283368: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x8028336C: jal         0x8001C0EC
    // 0x80283370: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283370: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283374: jal         0x80280000
    // 0x80283378: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80283378: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8028337C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283384: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80283388: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028338C: jal         0x800178D4
    // 0x80283390: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80283390: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80283394: b           L_8028339C
    // 0x80283398: nop

        goto L_8028339C;
    // 0x80283398: nop

L_8028339C:
    // 0x8028339C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802833A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802833A4: jr          $ra
    // 0x802833A8: nop

    return;
    // 0x802833A8: nop

;}
RECOMP_FUNC void func_80282ECC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282ECC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80282ED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282ED4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282ED8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282EDC: nop

    // 0x80282EE0: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80282EE4: nop

    // 0x80282EE8: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x80282EEC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282EF0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282EF4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80282EF8: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80282EFC: nop

    // 0x80282F00: beq         $t9, $at, L_80282F14
    if (ctx->r25 == ctx->r1) {
        // 0x80282F04: nop
    
            goto L_80282F14;
    }
    // 0x80282F04: nop

    // 0x80282F08: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80282F0C: bne         $t9, $at, L_80282F20
    if (ctx->r25 != ctx->r1) {
        // 0x80282F10: nop
    
            goto L_80282F20;
    }
    // 0x80282F10: nop

L_80282F14:
    // 0x80282F14: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x80282F18: b           L_80282F28
    // 0x80282F1C: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
        goto L_80282F28;
    // 0x80282F1C: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
L_80282F20:
    // 0x80282F20: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80282F24: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
L_80282F28:
    // 0x80282F28: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80282F2C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80282F30: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x80282F34: nop

    // 0x80282F38: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80282F3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282F40: jal         0x8001B62C
    // 0x80282F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80282F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282F48: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80282F4C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80282F50: addiu       $t4, $t4, 0x5808
    ctx->r12 = ADD32(ctx->r12, 0X5808);
    // 0x80282F54: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80282F58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282F5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282F60: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x80282F64: jal         0x8001C0EC
    // 0x80282F68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80282F68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80282F6C: jal         0x80280000
    // 0x80282F70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80282F70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80282F74: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x80282F78: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80282F7C: bne         $t5, $at, L_80282F9C
    if (ctx->r13 != ctx->r1) {
        // 0x80282F80: nop
    
            goto L_80282F9C;
    }
    // 0x80282F80: nop

    // 0x80282F84: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282F88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282F8C: jal         0x8001B6BC
    // 0x80282F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_3;
    // 0x80282F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80282F94: b           L_80282FB4
    // 0x80282F98: nop

        goto L_80282FB4;
    // 0x80282F98: nop

L_80282F9C:
    // 0x80282F9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282FA4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80282FA8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282FAC: jal         0x800178D4
    // 0x80282FB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80282FB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_80282FB4:
    // 0x80282FB4: b           L_80282FBC
    // 0x80282FB8: nop

        goto L_80282FBC;
    // 0x80282FB8: nop

L_80282FBC:
    // 0x80282FBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282FC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80282FC4: jr          $ra
    // 0x80282FC8: nop

    return;
    // 0x80282FC8: nop

;}
RECOMP_FUNC void func_80280000_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8028000C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280010: lb          $t6, 0x7638($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7638);
    // 0x80280014: nop

    // 0x80280018: bne         $t6, $zero, L_802801C8
    if (ctx->r14 != 0) {
        // 0x8028001C: nop
    
            goto L_802801C8;
    }
    // 0x8028001C: nop

    // 0x80280020: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80280024: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80280028: bne         $t7, $at, L_802800B8
    if (ctx->r15 != ctx->r1) {
        // 0x8028002C: nop
    
            goto L_802800B8;
    }
    // 0x8028002C: nop

    // 0x80280030: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80280034: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80280038: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8028003C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80280040: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80280044: addiu       $t0, $t0, 0x5A78
    ctx->r8 = ADD32(ctx->r8, 0X5A78);
    // 0x80280048: addu        $a3, $t9, $t0
    ctx->r7 = ADD32(ctx->r25, ctx->r8);
    // 0x8028004C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280054: jal         0x8001ABF4
    // 0x80280058: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80280058: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8028005C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80280060: addiu       $a3, $a3, 0x5A78
    ctx->r7 = ADD32(ctx->r7, 0X5A78);
    // 0x80280064: addiu       $a3, $a3, 0x150
    ctx->r7 = ADD32(ctx->r7, 0X150);
    // 0x80280068: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80280070: jal         0x8001ABF4
    // 0x80280074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80280074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80280078: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8028007C: addiu       $a3, $a3, 0x5A78
    ctx->r7 = ADD32(ctx->r7, 0X5A78);
    // 0x80280080: addiu       $a3, $a3, 0x16C
    ctx->r7 = ADD32(ctx->r7, 0X16C);
    // 0x80280084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280088: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028008C: jal         0x8001ABF4
    // 0x80280090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80280090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80280094: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80280098: addiu       $a3, $a3, 0x5A78
    ctx->r7 = ADD32(ctx->r7, 0X5A78);
    // 0x8028009C: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x802800A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802800A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802800A8: jal         0x8001ABF4
    // 0x802800AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x802800AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802800B0: b           L_802801C0
    // 0x802800B4: nop

        goto L_802801C0;
    // 0x802800B4: nop

L_802800B8:
    // 0x802800B8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x802800BC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x802800C0: bne         $t1, $at, L_80280140
    if (ctx->r9 != ctx->r1) {
        // 0x802800C4: nop
    
            goto L_80280140;
    }
    // 0x802800C4: nop

    // 0x802800C8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802800CC: addiu       $a3, $a3, 0x5A78
    ctx->r7 = ADD32(ctx->r7, 0X5A78);
    // 0x802800D0: addiu       $a3, $a3, 0x1A4
    ctx->r7 = ADD32(ctx->r7, 0X1A4);
    // 0x802800D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802800D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802800DC: jal         0x8001ABF4
    // 0x802800E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x802800E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x802800E4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802800E8: addiu       $a3, $a3, 0x5A78
    ctx->r7 = ADD32(ctx->r7, 0X5A78);
    // 0x802800EC: addiu       $a3, $a3, 0x1C0
    ctx->r7 = ADD32(ctx->r7, 0X1C0);
    // 0x802800F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802800F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802800F8: jal         0x8001ABF4
    // 0x802800FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x802800FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80280100: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80280104: addiu       $a3, $a3, 0x5A78
    ctx->r7 = ADD32(ctx->r7, 0X5A78);
    // 0x80280108: addiu       $a3, $a3, 0x1DC
    ctx->r7 = ADD32(ctx->r7, 0X1DC);
    // 0x8028010C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280110: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80280114: jal         0x8001ABF4
    // 0x80280118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x80280118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8028011C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80280120: addiu       $a3, $a3, 0x5A78
    ctx->r7 = ADD32(ctx->r7, 0X5A78);
    // 0x80280124: addiu       $a3, $a3, 0x1F8
    ctx->r7 = ADD32(ctx->r7, 0X1F8);
    // 0x80280128: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028012C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80280130: jal         0x8001ABF4
    // 0x80280134: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x80280134: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80280138: b           L_802801C0
    // 0x8028013C: nop

        goto L_802801C0;
    // 0x8028013C: nop

L_80280140:
    // 0x80280140: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80280144: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80280148: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8028014C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80280150: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80280154: addiu       $t4, $t4, 0x5A78
    ctx->r12 = ADD32(ctx->r12, 0X5A78);
    // 0x80280158: addu        $a3, $t3, $t4
    ctx->r7 = ADD32(ctx->r11, ctx->r12);
    // 0x8028015C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280164: jal         0x8001ABF4
    // 0x80280168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x80280168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8028016C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80280170: addiu       $a3, $a3, 0x5A78
    ctx->r7 = ADD32(ctx->r7, 0X5A78);
    // 0x80280174: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x80280178: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028017C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80280180: jal         0x8001ABF4
    // 0x80280184: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x80280184: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80280188: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8028018C: addiu       $a3, $a3, 0x5A78
    ctx->r7 = ADD32(ctx->r7, 0X5A78);
    // 0x80280190: addiu       $a3, $a3, 0x118
    ctx->r7 = ADD32(ctx->r7, 0X118);
    // 0x80280194: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280198: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028019C: jal         0x8001ABF4
    // 0x802801A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x802801A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x802801A4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802801A8: addiu       $a3, $a3, 0x5A78
    ctx->r7 = ADD32(ctx->r7, 0X5A78);
    // 0x802801AC: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x802801B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802801B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802801B8: jal         0x8001ABF4
    // 0x802801BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x802801BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
L_802801C0:
    // 0x802801C0: b           L_8028026C
    // 0x802801C4: nop

        goto L_8028026C;
    // 0x802801C4: nop

L_802801C8:
    // 0x802801C8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x802801CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802801D0: beq         $t5, $at, L_802801E4
    if (ctx->r13 == ctx->r1) {
        // 0x802801D4: nop
    
            goto L_802801E4;
    }
    // 0x802801D4: nop

    // 0x802801D8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802801DC: bne         $t5, $at, L_80280208
    if (ctx->r13 != ctx->r1) {
        // 0x802801E0: nop
    
            goto L_80280208;
    }
    // 0x802801E0: nop

L_802801E4:
    // 0x802801E4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802801E8: addiu       $a3, $a3, 0x5CA4
    ctx->r7 = ADD32(ctx->r7, 0X5CA4);
    // 0x802801EC: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x802801F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802801F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802801F8: jal         0x8001ABF4
    // 0x802801FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_12;
    // 0x802801FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80280200: b           L_8028026C
    // 0x80280204: nop

        goto L_8028026C;
    // 0x80280204: nop

L_80280208:
    // 0x80280208: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8028020C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80280210: beq         $t6, $at, L_80280230
    if (ctx->r14 == ctx->r1) {
        // 0x80280214: nop
    
            goto L_80280230;
    }
    // 0x80280214: nop

    // 0x80280218: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8028021C: beq         $t6, $at, L_80280230
    if (ctx->r14 == ctx->r1) {
        // 0x80280220: nop
    
            goto L_80280230;
    }
    // 0x80280220: nop

    // 0x80280224: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80280228: bne         $t6, $at, L_80280254
    if (ctx->r14 != ctx->r1) {
        // 0x8028022C: nop
    
            goto L_80280254;
    }
    // 0x8028022C: nop

L_80280230:
    // 0x80280230: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80280234: addiu       $a3, $a3, 0x5CA4
    ctx->r7 = ADD32(ctx->r7, 0X5CA4);
    // 0x80280238: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8028023C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280244: jal         0x8001ABF4
    // 0x80280248: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_13;
    // 0x80280248: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x8028024C: b           L_8028026C
    // 0x80280250: nop

        goto L_8028026C;
    // 0x80280250: nop

L_80280254:
    // 0x80280254: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80280258: addiu       $a3, $a3, 0x5CA4
    ctx->r7 = ADD32(ctx->r7, 0X5CA4);
    // 0x8028025C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280264: jal         0x8001ABF4
    // 0x80280268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_14;
    // 0x80280268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
L_8028026C:
    // 0x8028026C: b           L_80280274
    // 0x80280270: nop

        goto L_80280274;
    // 0x80280270: nop

L_80280274:
    // 0x80280274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028027C: jr          $ra
    // 0x80280280: nop

    return;
    // 0x80280280: nop

;}
RECOMP_FUNC void func_802895EC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802895EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802895F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802895F4: jal         0x80281BA4
    // 0x802895F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802895F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802895FC: b           L_80289604
    // 0x80289600: nop

        goto L_80289604;
    // 0x80289600: nop

L_80289604:
    // 0x80289604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028960C: jr          $ra
    // 0x80289610: nop

    return;
    // 0x80289610: nop

;}
RECOMP_FUNC void func_80287254_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028725C: jal         0x802858D8
    // 0x80287260: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287260: nop

    after_0:
    // 0x80287264: beq         $v0, $zero, L_80287274
    if (ctx->r2 == 0) {
        // 0x80287268: nop
    
            goto L_80287274;
    }
    // 0x80287268: nop

    // 0x8028726C: b           L_802872E0
    // 0x80287270: nop

        goto L_802872E0;
    // 0x80287270: nop

L_80287274:
    // 0x80287274: jal         0x80085D54
    // 0x80287278: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80287278: nop

    after_1:
    // 0x8028727C: beq         $v0, $zero, L_8028728C
    if (ctx->r2 == 0) {
        // 0x80287280: nop
    
            goto L_8028728C;
    }
    // 0x80287280: nop

    // 0x80287284: b           L_802872E0
    // 0x80287288: nop

        goto L_802872E0;
    // 0x80287288: nop

L_8028728C:
    // 0x8028728C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287290: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80287294: nop

    // 0x80287298: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8028729C: bne         $t7, $zero, L_802872B4
    if (ctx->r15 != 0) {
        // 0x802872A0: nop
    
            goto L_802872B4;
    }
    // 0x802872A0: nop

    // 0x802872A4: jal         0x80282ECC
    // 0x802872A8: nop

    func_80282ECC_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802872A8: nop

    after_2:
    // 0x802872AC: b           L_802872E0
    // 0x802872B0: nop

        goto L_802872E0;
    // 0x802872B0: nop

L_802872B4:
    // 0x802872B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802872B8: jal         0x8001B44C
    // 0x802872BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x802872BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802872C0: beq         $v0, $zero, L_802872D8
    if (ctx->r2 == 0) {
        // 0x802872C4: nop
    
            goto L_802872D8;
    }
    // 0x802872C4: nop

    // 0x802872C8: jal         0x8028236C
    // 0x802872CC: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x802872CC: nop

    after_4:
    // 0x802872D0: b           L_802872E0
    // 0x802872D4: nop

        goto L_802872E0;
    // 0x802872D4: nop

L_802872D8:
    // 0x802872D8: b           L_802872E0
    // 0x802872DC: nop

        goto L_802872E0;
    // 0x802872DC: nop

L_802872E0:
    // 0x802872E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802872E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802872E8: jr          $ra
    // 0x802872EC: nop

    return;
    // 0x802872EC: nop

;}
RECOMP_FUNC void func_80288178_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028817C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80288180: jal         0x802858D8
    // 0x80288184: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80288184: nop

    after_0:
    // 0x80288188: beq         $v0, $zero, L_802881B0
    if (ctx->r2 == 0) {
        // 0x8028818C: nop
    
            goto L_802881B0;
    }
    // 0x8028818C: nop

    // 0x80288190: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80288194: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288198: sh          $t6, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r14;
    // 0x8028819C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802881A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802881A4: sh          $t7, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r15;
    // 0x802881A8: b           L_80288224
    // 0x802881AC: nop

        goto L_80288224;
    // 0x802881AC: nop

L_802881B0:
    // 0x802881B0: jal         0x80085D54
    // 0x802881B4: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802881B4: nop

    after_1:
    // 0x802881B8: beq         $v0, $zero, L_802881E0
    if (ctx->r2 == 0) {
        // 0x802881BC: nop
    
            goto L_802881E0;
    }
    // 0x802881BC: nop

    // 0x802881C0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802881C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802881C8: sh          $t8, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r24;
    // 0x802881CC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802881D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802881D4: sh          $t9, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r25;
    // 0x802881D8: b           L_80288224
    // 0x802881DC: nop

        goto L_80288224;
    // 0x802881DC: nop

L_802881E0:
    // 0x802881E0: jal         0x80286748
    // 0x802881E4: nop

    func_80286748_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802881E4: nop

    after_2:
    // 0x802881E8: beq         $v0, $zero, L_802881F8
    if (ctx->r2 == 0) {
        // 0x802881EC: nop
    
            goto L_802881F8;
    }
    // 0x802881EC: nop

    // 0x802881F0: b           L_80288224
    // 0x802881F4: nop

        goto L_80288224;
    // 0x802881F4: nop

L_802881F8:
    // 0x802881F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802881FC: jal         0x8001B44C
    // 0x80288200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80288200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80288204: beq         $v0, $zero, L_8028821C
    if (ctx->r2 == 0) {
        // 0x80288208: nop
    
            goto L_8028821C;
    }
    // 0x80288208: nop

    // 0x8028820C: jal         0x802842B0
    // 0x80288210: nop

    func_802842B0_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80288210: nop

    after_4:
    // 0x80288214: b           L_80288224
    // 0x80288218: nop

        goto L_80288224;
    // 0x80288218: nop

L_8028821C:
    // 0x8028821C: b           L_80288224
    // 0x80288220: nop

        goto L_80288224;
    // 0x80288220: nop

L_80288224:
    // 0x80288224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80288228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028822C: jr          $ra
    // 0x80288230: nop

    return;
    // 0x80288230: nop

;}
RECOMP_FUNC void func_80283D5C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283D5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283D60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283D64: jal         0x8001A928
    // 0x80283D68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80283D68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80283D6C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283D70: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80283D74: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80283D78: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283D7C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283D80: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80283D84: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283D88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283D90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80283D94: jal         0x8001C0EC
    // 0x80283D98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80283D98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80283D9C: jal         0x80280000
    // 0x80283DA0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80283DA0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x80283DA4: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80283DA8: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80283DAC: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x80283DB0: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80283DB4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283DB8: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x80283DBC: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80283DC0: lw          $t1, 0x51A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51A4);
    // 0x80283DC4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283DC8: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x80283DCC: sw          $t2, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r10;
    // 0x80283DD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80283DD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80283DD8: jal         0x8001FB3C
    // 0x80283DDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x80283DDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80283DE0: b           L_80283DE8
    // 0x80283DE4: nop

        goto L_80283DE8;
    // 0x80283DE4: nop

L_80283DE8:
    // 0x80283DE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283DF0: jr          $ra
    // 0x80283DF4: nop

    return;
    // 0x80283DF4: nop

;}
RECOMP_FUNC void func_802838FC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802838FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283900: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283904: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80283908: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8028390C: addiu       $t6, $zero, 0x1A
    ctx->r14 = ADD32(0, 0X1A);
    // 0x80283910: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283914: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283918: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x8028391C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283920: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283928: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x8028392C: jal         0x8001C0EC
    // 0x80283930: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283930: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283934: jal         0x80280000
    // 0x80283938: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80283938: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8028393C: b           L_80283944
    // 0x80283940: nop

        goto L_80283944;
    // 0x80283940: nop

L_80283944:
    // 0x80283944: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283948: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028394C: jr          $ra
    // 0x80283950: nop

    return;
    // 0x80283950: nop

;}
RECOMP_FUNC void func_8028A13C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A13C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A140: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028A144: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028A148: nop

    // 0x8028A14C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x8028A150: jr          $ra
    // 0x8028A154: nop

    return;
    // 0x8028A154: nop

    // 0x8028A158: jr          $ra
    // 0x8028A15C: nop

    return;
    // 0x8028A15C: nop

;}
RECOMP_FUNC void func_80289CB8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289CC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80289CC4: lh          $a0, -0x1D68($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D68);
    // 0x80289CC8: jal         0x80281BA4
    // 0x80289CCC: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289CCC: nop

    after_0:
    // 0x80289CD0: b           L_80289CD8
    // 0x80289CD4: nop

        goto L_80289CD8;
    // 0x80289CD4: nop

L_80289CD8:
    // 0x80289CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80289CE0: jr          $ra
    // 0x80289CE4: nop

    return;
    // 0x80289CE4: nop

;}
RECOMP_FUNC void func_80282FCC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282FCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80282FD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282FD4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282FD8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80282FDC: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80282FE0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80282FE4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80282FE8: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80282FEC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80282FF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282FF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282FF8: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x80282FFC: jal         0x8001C0EC
    // 0x80283000: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283000: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283004: jal         0x80280000
    // 0x80283008: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80283008: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8028300C: b           L_80283014
    // 0x80283010: nop

        goto L_80283014;
    // 0x80283010: nop

L_80283014:
    // 0x80283014: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283018: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028301C: jr          $ra
    // 0x80283020: nop

    return;
    // 0x80283020: nop

;}
RECOMP_FUNC void func_80281E50_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281E50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281E54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281E58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281E5C: lh          $t6, -0x1D68($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D68);
    // 0x80281E60: nop

    // 0x80281E64: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80281E68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80281E6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281E70: nop

    // 0x80281E74: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80281E78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80281E7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281E80: nop

    // 0x80281E84: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80281E88: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281E8C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281E90: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80281E94: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80281E98: nop

    // 0x80281E9C: beq         $t8, $at, L_80281EC8
    if (ctx->r24 == ctx->r1) {
        // 0x80281EA0: nop
    
            goto L_80281EC8;
    }
    // 0x80281EA0: nop

    // 0x80281EA4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80281EA8: beq         $t8, $at, L_80281EC8
    if (ctx->r24 == ctx->r1) {
        // 0x80281EAC: nop
    
            goto L_80281EC8;
    }
    // 0x80281EAC: nop

    // 0x80281EB0: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x80281EB4: beq         $t8, $at, L_80281EC8
    if (ctx->r24 == ctx->r1) {
        // 0x80281EB8: nop
    
            goto L_80281EC8;
    }
    // 0x80281EB8: nop

    // 0x80281EBC: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x80281EC0: bne         $t8, $at, L_80281F00
    if (ctx->r24 != ctx->r1) {
        // 0x80281EC4: nop
    
            goto L_80281F00;
    }
    // 0x80281EC4: nop

L_80281EC8:
    // 0x80281EC8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80281ECC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281ED0: nop

    // 0x80281ED4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80281ED8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281EDC: lh          $t9, -0x1D68($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1D68);
    // 0x80281EE0: nop

    // 0x80281EE4: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x80281EE8: bne         $at, $zero, L_80281EF8
    if (ctx->r1 != 0) {
        // 0x80281EEC: nop
    
            goto L_80281EF8;
    }
    // 0x80281EEC: nop

    // 0x80281EF0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80281EF4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80281EF8:
    // 0x80281EF8: b           L_80281F78
    // 0x80281EFC: nop

        goto L_80281F78;
    // 0x80281EFC: nop

L_80281F00:
    // 0x80281F00: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281F04: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281F08: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80281F0C: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x80281F10: nop

    // 0x80281F14: beq         $t2, $at, L_80281F28
    if (ctx->r10 == ctx->r1) {
        // 0x80281F18: nop
    
            goto L_80281F28;
    }
    // 0x80281F18: nop

    // 0x80281F1C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80281F20: bne         $t2, $at, L_80281F30
    if (ctx->r10 != ctx->r1) {
        // 0x80281F24: nop
    
            goto L_80281F30;
    }
    // 0x80281F24: nop

L_80281F28:
    // 0x80281F28: b           L_80281F78
    // 0x80281F2C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_80281F78;
    // 0x80281F2C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80281F30:
    // 0x80281F30: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80281F34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281F38: nop

    // 0x80281F3C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80281F40: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80281F44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281F48: nop

    // 0x80281F4C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80281F50: jal         0x802813EC
    // 0x80281F54: nop

    func_802813EC_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80281F54: nop

    after_0:
    // 0x80281F58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80281F5C: bne         $v0, $at, L_80281F78
    if (ctx->r2 != ctx->r1) {
        // 0x80281F60: nop
    
            goto L_80281F78;
    }
    // 0x80281F60: nop

    // 0x80281F64: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80281F68: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281F6C: nop

    // 0x80281F70: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80281F74: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80281F78:
    // 0x80281F78: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281F7C: lh          $t3, -0x1D68($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1D68);
    // 0x80281F80: nop

    // 0x80281F84: beq         $t3, $zero, L_80282010
    if (ctx->r11 == 0) {
        // 0x80281F88: nop
    
            goto L_80282010;
    }
    // 0x80281F88: nop

    // 0x80281F8C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281F90: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281F94: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281F98: lwc1        $f14, 0x51D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x80281F9C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80281FA0: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80281FA4: jal         0x800157EC
    // 0x80281FA8: nop

    func_800157EC(rdram, ctx);
        goto after_1;
    // 0x80281FA8: nop

    after_1:
    // 0x80281FAC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80281FB0: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80281FB4: nop

    // 0x80281FB8: bne         $t5, $zero, L_80281FD8
    if (ctx->r13 != 0) {
        // 0x80281FBC: nop
    
            goto L_80281FD8;
    }
    // 0x80281FBC: nop

    // 0x80281FC0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281FC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281FC8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281FCC: lwc1        $f4, 0x51D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x80281FD0: b           L_80282010
    // 0x80281FD4: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
        goto L_80282010;
    // 0x80281FD4: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
L_80281FD8:
    // 0x80281FD8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80281FDC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281FE0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80281FE4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281FE8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80281FEC: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281FF0: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80281FF4: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80281FF8: jal         0x80015538
    // 0x80281FFC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80281FFC: nop

    after_2:
    // 0x80282000: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282004: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282008: nop

    // 0x8028200C: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
L_80282010:
    // 0x80282010: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80282014: jal         0x80281BA4
    // 0x80282018: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80282018: nop

    after_3:
    // 0x8028201C: b           L_80282024
    // 0x80282020: nop

        goto L_80282024;
    // 0x80282020: nop

L_80282024:
    // 0x80282024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8028202C: jr          $ra
    // 0x80282030: nop

    return;
    // 0x80282030: nop

;}
RECOMP_FUNC void func_8028180C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028180C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281814: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80281818: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8028181C: addiu       $t6, $t6, 0x51D8
    ctx->r14 = ADD32(ctx->r14, 0X51D8);
    // 0x80281820: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x80281824: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281828: nop

    // 0x8028182C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80281830: nop

    // 0x80281834: bc1t        L_802818C8
    if (c1cs) {
        // 0x80281838: nop
    
            goto L_802818C8;
    }
    // 0x80281838: nop

    // 0x8028183C: jal         0x80281248
    // 0x80281840: nop

    func_80281248_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80281840: nop

    after_0:
    // 0x80281844: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80281848: bne         $v0, $at, L_8028185C
    if (ctx->r2 != ctx->r1) {
        // 0x8028184C: nop
    
            goto L_8028185C;
    }
    // 0x8028184C: nop

    // 0x80281850: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80281854: b           L_802818C8
    // 0x80281858: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_802818C8;
    // 0x80281858: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8028185C:
    // 0x8028185C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281860: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281864: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281868: lwc1        $f8, 0x44($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X44);
    // 0x8028186C: nop

    // 0x80281870: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80281874: nop

    // 0x80281878: bc1f        L_802818AC
    if (!c1cs) {
        // 0x8028187C: nop
    
            goto L_802818AC;
    }
    // 0x8028187C: nop

    // 0x80281880: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281884: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281888: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028188C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281890: lwc1        $f12, 0x3C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80281894: jal         0x80015538
    // 0x80281898: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80281898: nop

    after_1:
    // 0x8028189C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802818A0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802818A4: b           L_802818C8
    // 0x802818A8: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
        goto L_802818C8;
    // 0x802818A8: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
L_802818AC:
    // 0x802818AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802818B0: lwc1        $f16, -0x1D90($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1D90);
    // 0x802818B4: nop

    // 0x802818B8: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x802818BC: swc1        $f18, -0x1D90($at)
    MEM_W(-0X1D90, ctx->r1) = ctx->f18.u32l;
    // 0x802818C0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802818C4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_802818C8:
    // 0x802818C8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x802818CC: nop

    // 0x802818D0: beq         $t2, $zero, L_80281A20
    if (ctx->r10 == 0) {
        // 0x802818D4: nop
    
            goto L_80281A20;
    }
    // 0x802818D4: nop

    // 0x802818D8: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x802818DC: addiu       $t3, $t3, 0x51D8
    ctx->r11 = ADD32(ctx->r11, 0X51D8);
    // 0x802818E0: lwc1        $f4, 0xC($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XC);
    // 0x802818E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802818E8: nop

    // 0x802818EC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802818F0: nop

    // 0x802818F4: bc1t        L_80281A20
    if (c1cs) {
        // 0x802818F8: nop
    
            goto L_80281A20;
    }
    // 0x802818F8: nop

    // 0x802818FC: jal         0x802811A8
    // 0x80281900: nop

    func_802811A8_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80281900: nop

    after_2:
    // 0x80281904: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80281908: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028190C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281910: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80281914: lwc1        $f10, 0x3C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80281918: nop

    // 0x8028191C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80281920: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80281924: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281928: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028192C: nop

    // 0x80281930: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80281934: nop

    // 0x80281938: bc1f        L_80281958
    if (!c1cs) {
        // 0x8028193C: nop
    
            goto L_80281958;
    }
    // 0x8028193C: nop

    // 0x80281940: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80281944: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281948: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028194C: nop

    // 0x80281950: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80281954: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
L_80281958:
    // 0x80281958: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028195C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281960: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281964: nop

    // 0x80281968: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8028196C: nop

    // 0x80281970: bc1t        L_80281994
    if (c1cs) {
        // 0x80281974: nop
    
            goto L_80281994;
    }
    // 0x80281974: nop

    // 0x80281978: lui         $at, 0x43B2
    ctx->r1 = S32(0X43B2 << 16);
    // 0x8028197C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281980: nop

    // 0x80281984: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80281988: nop

    // 0x8028198C: bc1f        L_802819A8
    if (!c1cs) {
        // 0x80281990: nop
    
            goto L_802819A8;
    }
    // 0x80281990: nop

L_80281994:
    // 0x80281994: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281998: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028199C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802819A0: b           L_80281A20
    // 0x802819A4: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
        goto L_80281A20;
    // 0x802819A4: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
L_802819A8:
    // 0x802819A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802819AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802819B0: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802819B4: nop

    // 0x802819B8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802819BC: nop

    // 0x802819C0: bc1f        L_802819F4
    if (!c1cs) {
        // 0x802819C4: nop
    
            goto L_802819F4;
    }
    // 0x802819C4: nop

    // 0x802819C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802819CC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802819D0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802819D4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802819D8: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x802819DC: jal         0x80015538
    // 0x802819E0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x802819E0: nop

    after_3:
    // 0x802819E4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802819E8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802819EC: b           L_80281A20
    // 0x802819F0: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
        goto L_80281A20;
    // 0x802819F0: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
L_802819F4:
    // 0x802819F4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802819F8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802819FC: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80281A00: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281A04: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80281A08: jal         0x80015538
    // 0x80281A0C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80281A0C: nop

    after_4:
    // 0x80281A10: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281A14: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281A18: nop

    // 0x80281A1C: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
L_80281A20:
    // 0x80281A20: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281A24: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281A28: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80281A2C: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80281A30: nop

    // 0x80281A34: bne         $t1, $at, L_80281A54
    if (ctx->r9 != ctx->r1) {
        // 0x80281A38: nop
    
            goto L_80281A54;
    }
    // 0x80281A38: nop

    // 0x80281A3C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281A40: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281A44: nop

    // 0x80281A48: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80281A4C: b           L_80281A74
    // 0x80281A50: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
        goto L_80281A74;
    // 0x80281A50: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_80281A54:
    // 0x80281A54: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281A58: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281A5C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281A60: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281A64: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80281A68: jal         0x80015538
    // 0x80281A6C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80281A6C: nop

    after_5:
    // 0x80281A70: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_80281A74:
    // 0x80281A74: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281A78: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281A7C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80281A80: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80281A84: nop

    // 0x80281A88: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80281A8C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80281A90: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281A94: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281A98: nop

    // 0x80281A9C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80281AA0: nop

    // 0x80281AA4: bc1f        L_80281AC4
    if (!c1cs) {
        // 0x80281AA8: nop
    
            goto L_80281AC4;
    }
    // 0x80281AA8: nop

    // 0x80281AAC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80281AB0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281AB4: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281AB8: nop

    // 0x80281ABC: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80281AC0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
L_80281AC4:
    // 0x80281AC4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80281AC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281ACC: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281AD0: nop

    // 0x80281AD4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80281AD8: nop

    // 0x80281ADC: bc1t        L_80281B00
    if (c1cs) {
        // 0x80281AE0: nop
    
            goto L_80281B00;
    }
    // 0x80281AE0: nop

    // 0x80281AE4: lui         $at, 0x43B2
    ctx->r1 = S32(0X43B2 << 16);
    // 0x80281AE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281AEC: nop

    // 0x80281AF0: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x80281AF4: nop

    // 0x80281AF8: bc1f        L_80281B14
    if (!c1cs) {
        // 0x80281AFC: nop
    
            goto L_80281B14;
    }
    // 0x80281AFC: nop

L_80281B00:
    // 0x80281B00: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281B04: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281B08: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80281B0C: b           L_80281B8C
    // 0x80281B10: swc1        $f18, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f18.u32l;
        goto L_80281B8C;
    // 0x80281B10: swc1        $f18, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f18.u32l;
L_80281B14:
    // 0x80281B14: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281B18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281B1C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281B20: nop

    // 0x80281B24: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x80281B28: nop

    // 0x80281B2C: bc1f        L_80281B60
    if (!c1cs) {
        // 0x80281B30: nop
    
            goto L_80281B60;
    }
    // 0x80281B30: nop

    // 0x80281B34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281B38: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281B3C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80281B40: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281B44: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80281B48: jal         0x80015538
    // 0x80281B4C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80281B4C: nop

    after_6:
    // 0x80281B50: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281B54: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281B58: b           L_80281B8C
    // 0x80281B5C: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
        goto L_80281B8C;
    // 0x80281B5C: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
L_80281B60:
    // 0x80281B60: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281B64: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281B68: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80281B6C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281B70: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80281B74: jal         0x80015538
    // 0x80281B78: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80281B78: nop

    after_7:
    // 0x80281B7C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281B80: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281B84: nop

    // 0x80281B88: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
L_80281B8C:
    // 0x80281B8C: b           L_80281B94
    // 0x80281B90: nop

        goto L_80281B94;
    // 0x80281B90: nop

L_80281B94:
    // 0x80281B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281B98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281B9C: jr          $ra
    // 0x80281BA0: nop

    return;
    // 0x80281BA0: nop

;}
RECOMP_FUNC void func_802857D0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802857D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802857D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802857D8: jal         0x80022454
    // 0x802857DC: nop

    func_80022454(rdram, ctx);
        goto after_0;
    // 0x802857DC: nop

    after_0:
    // 0x802857E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802857E4: sw          $v0, -0x1CC0($at)
    MEM_W(-0X1CC0, ctx->r1) = ctx->r2;
    // 0x802857E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802857EC: lw          $t6, -0x1CC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1CC0);
    // 0x802857F0: nop

    // 0x802857F4: beq         $t6, $zero, L_8028580C
    if (ctx->r14 == 0) {
        // 0x802857F8: nop
    
            goto L_8028580C;
    }
    // 0x802857F8: nop

    // 0x802857FC: jal         0x80284424
    // 0x80285800: nop

    func_80284424_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80285800: nop

    after_1:
    // 0x80285804: b           L_802858C8
    // 0x80285808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802858C8;
    // 0x80285808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028580C:
    // 0x8028580C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80285810: lhu         $t7, -0x1C82($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1C82);
    // 0x80285814: nop

    // 0x80285818: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x8028581C: beq         $t8, $zero, L_80285864
    if (ctx->r24 == 0) {
        // 0x80285820: nop
    
            goto L_80285864;
    }
    // 0x80285820: nop

    // 0x80285824: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80285828: lh          $t9, -0x1D08($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1D08);
    // 0x8028582C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285830: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80285834: sh          $t0, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r8;
    // 0x80285838: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028583C: lh          $t1, -0x1D08($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1D08);
    // 0x80285840: nop

    // 0x80285844: slti        $at, $t1, 0x12C
    ctx->r1 = SIGNED(ctx->r9) < 0X12C ? 1 : 0;
    // 0x80285848: bne         $at, $zero, L_8028585C
    if (ctx->r1 != 0) {
        // 0x8028584C: nop
    
            goto L_8028585C;
    }
    // 0x8028584C: nop

    // 0x80285850: addiu       $t2, $zero, 0x10E
    ctx->r10 = ADD32(0, 0X10E);
    // 0x80285854: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285858: sh          $t2, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r10;
L_8028585C:
    // 0x8028585C: b           L_802858B8
    // 0x80285860: nop

        goto L_802858B8;
    // 0x80285860: nop

L_80285864:
    // 0x80285864: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80285868: lh          $t3, -0x1D08($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1D08);
    // 0x8028586C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80285870: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x80285874: mflo        $t4
    ctx->r12 = lo;
    // 0x80285878: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8028587C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80285880: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80285884: nop

    // 0x80285888: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x8028588C: bne         $at, $zero, L_8028589C
    if (ctx->r1 != 0) {
        // 0x80285890: nop
    
            goto L_8028589C;
    }
    // 0x80285890: nop

    // 0x80285894: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80285898: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_8028589C:
    // 0x8028589C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802858A0: jal         0x8007A620
    // 0x802858A4: nop

    func_8007A620(rdram, ctx);
        goto after_2;
    // 0x802858A4: nop

    after_2:
    // 0x802858A8: jal         0x8028368C
    // 0x802858AC: nop

    func_8028368C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802858AC: nop

    after_3:
    // 0x802858B0: b           L_802858C8
    // 0x802858B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802858C8;
    // 0x802858B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802858B8:
    // 0x802858B8: b           L_802858C8
    // 0x802858BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802858C8;
    // 0x802858BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802858C0: b           L_802858C8
    // 0x802858C4: nop

        goto L_802858C8;
    // 0x802858C4: nop

L_802858C8:
    // 0x802858C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802858CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802858D0: jr          $ra
    // 0x802858D4: nop

    return;
    // 0x802858D4: nop

;}
RECOMP_FUNC void func_80284A94_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284A94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284A98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284A9C: jal         0x8001A928
    // 0x80284AA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80284AA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80284AA4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284AA8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284AAC: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x80284AB0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80284AB4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80284AB8: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80284ABC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80284AC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284AC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284AC8: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    // 0x80284ACC: jal         0x8001C0EC
    // 0x80284AD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80284AD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80284AD4: jal         0x80280000
    // 0x80284AD8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80284AD8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x80284ADC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80284AE0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80284AE4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80284AE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80284AEC: nop

    // 0x80284AF0: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    // 0x80284AF4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80284AF8: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80284AFC: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x80284B00: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80284B04: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80284B08: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80284B0C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80284B10: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x80284B14: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80284B18: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x80284B1C: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
    // 0x80284B20: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80284B24: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80284B28: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80284B2C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80284B30: lwc1        $f12, 0x128($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X128);
    // 0x80284B34: jal         0x80015538
    // 0x80284B38: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80284B38: nop

    after_3:
    // 0x80284B3C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80284B40: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80284B44: nop

    // 0x80284B48: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x80284B4C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80284B50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284B54: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80284B58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80284B5C: nop

    // 0x80284B60: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
    // 0x80284B64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284B6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80284B70: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80284B74: jal         0x800178D4
    // 0x80284B78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80284B78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80284B7C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80284B80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80284B84: jal         0x8001FB3C
    // 0x80284B88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_5;
    // 0x80284B88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
    // 0x80284B8C: b           L_80284B94
    // 0x80284B90: nop

        goto L_80284B94;
    // 0x80284B90: nop

L_80284B94:
    // 0x80284B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284B98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284B9C: jr          $ra
    // 0x80284BA0: nop

    return;
    // 0x80284BA0: nop

;}
RECOMP_FUNC void func_802836EC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802836EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802836F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802836F4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x802836F8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x802836FC: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x80283700: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283704: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283708: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x8028370C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283710: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283718: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x8028371C: jal         0x8001C0EC
    // 0x80283720: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283720: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283724: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283728: jal         0x8001B754
    // 0x8028372C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x8028372C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80283730: jal         0x80280000
    // 0x80283734: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80283734: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80283738: jal         0x802811A8
    // 0x8028373C: nop

    func_802811A8_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x8028373C: nop

    after_3:
    // 0x80283740: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283744: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283748: nop

    // 0x8028374C: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x80283750: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283754: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283758: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8028375C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283760: jal         0x800178D4
    // 0x80283764: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80283764: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80283768: jal         0x8001A928
    // 0x8028376C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_5;
    // 0x8028376C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80283770: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283774: lh          $t0, -0x1F00($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1F00);
    // 0x80283778: nop

    // 0x8028377C: beq         $t0, $zero, L_80283798
    if (ctx->r8 == 0) {
        // 0x80283780: nop
    
            goto L_80283798;
    }
    // 0x80283780: nop

    // 0x80283784: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80283788: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028378C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80283790: jal         0x8007A7B4
    // 0x80283794: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8007A7B4(rdram, ctx);
        goto after_6;
    // 0x80283794: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_6:
L_80283798:
    // 0x80283798: b           L_802837A0
    // 0x8028379C: nop

        goto L_802837A0;
    // 0x8028379C: nop

L_802837A0:
    // 0x802837A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802837A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802837A8: jr          $ra
    // 0x802837AC: nop

    return;
    // 0x802837AC: nop

;}
RECOMP_FUNC void func_80288884_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288884: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80288888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028888C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288890: lh          $t6, -0x1CE8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1CE8);
    // 0x80288894: nop

    // 0x80288898: slti        $at, $t6, 0x1F
    ctx->r1 = SIGNED(ctx->r14) < 0X1F ? 1 : 0;
    // 0x8028889C: bne         $at, $zero, L_802888B4
    if (ctx->r1 != 0) {
        // 0x802888A0: nop
    
            goto L_802888B4;
    }
    // 0x802888A0: nop

    // 0x802888A4: jal         0x80284668
    // 0x802888A8: nop

    func_80284668_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802888A8: nop

    after_0:
    // 0x802888AC: b           L_802888C8
    // 0x802888B0: nop

        goto L_802888C8;
    // 0x802888B0: nop

L_802888B4:
    // 0x802888B4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802888B8: lh          $t7, -0x1CE8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1CE8);
    // 0x802888BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802888C0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802888C4: sh          $t8, -0x1CE8($at)
    MEM_H(-0X1CE8, ctx->r1) = ctx->r24;
L_802888C8:
    // 0x802888C8: b           L_802888D0
    // 0x802888CC: nop

        goto L_802888D0;
    // 0x802888CC: nop

L_802888D0:
    // 0x802888D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802888D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802888D8: jr          $ra
    // 0x802888DC: nop

    return;
    // 0x802888DC: nop

;}
RECOMP_FUNC void func_80289130_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289130: jr          $ra
    // 0x80289134: nop

    return;
    // 0x80289134: nop

    // 0x80289138: jr          $ra
    // 0x8028913C: nop

    return;
    // 0x8028913C: nop

;}
RECOMP_FUNC void func_80288D74_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80288D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80288D7C: jal         0x80085D54
    // 0x80288D80: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80288D80: nop

    after_0:
    // 0x80288D84: beq         $v0, $zero, L_80288D94
    if (ctx->r2 == 0) {
        // 0x80288D88: nop
    
            goto L_80288D94;
    }
    // 0x80288D88: nop

    // 0x80288D8C: b           L_80288DC4
    // 0x80288D90: nop

        goto L_80288DC4;
    // 0x80288D90: nop

L_80288D94:
    // 0x80288D94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288D98: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80288D9C: nop

    // 0x80288DA0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80288DA4: beq         $t7, $zero, L_80288DBC
    if (ctx->r15 == 0) {
        // 0x80288DA8: nop
    
            goto L_80288DBC;
    }
    // 0x80288DA8: nop

    // 0x80288DAC: jal         0x80283C28
    // 0x80288DB0: nop

    func_80283C28_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80288DB0: nop

    after_1:
    // 0x80288DB4: b           L_80288DC4
    // 0x80288DB8: nop

        goto L_80288DC4;
    // 0x80288DB8: nop

L_80288DBC:
    // 0x80288DBC: b           L_80288DC4
    // 0x80288DC0: nop

        goto L_80288DC4;
    // 0x80288DC0: nop

L_80288DC4:
    // 0x80288DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80288DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80288DCC: jr          $ra
    // 0x80288DD0: nop

    return;
    // 0x80288DD0: nop

;}
RECOMP_FUNC void func_802837B0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802837B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802837B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802837B8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x802837BC: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x802837C0: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x802837C4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802837C8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802837CC: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x802837D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802837D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802837D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802837DC: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x802837E0: jal         0x8001C0EC
    // 0x802837E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802837E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802837E8: jal         0x80280000
    // 0x802837EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802837EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802837F0: b           L_802837F8
    // 0x802837F4: nop

        goto L_802837F8;
    // 0x802837F4: nop

L_802837F8:
    // 0x802837F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802837FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283800: jr          $ra
    // 0x80283804: nop

    return;
    // 0x80283804: nop

;}
RECOMP_FUNC void func_802899D8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802899D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802899DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802899E0: jal         0x8028180C
    // 0x802899E4: nop

    func_8028180C_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802899E4: nop

    after_0:
    // 0x802899E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x802899EC: lh          $a0, -0x1D68($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D68);
    // 0x802899F0: jal         0x80281BA4
    // 0x802899F4: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802899F4: nop

    after_1:
    // 0x802899F8: b           L_80289A00
    // 0x802899FC: nop

        goto L_80289A00;
    // 0x802899FC: nop

L_80289A00:
    // 0x80289A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80289A08: jr          $ra
    // 0x80289A0C: nop

    return;
    // 0x80289A0C: nop

;}
RECOMP_FUNC void func_8028A85C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A85C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028A860: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028A864: jal         0x80281638
    // 0x8028A868: nop

    func_80281638_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x8028A868: nop

    after_0:
    // 0x8028A86C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8028A870: lh          $a0, -0x1D68($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D68);
    // 0x8028A874: jal         0x80281BA4
    // 0x8028A878: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x8028A878: nop

    after_1:
    // 0x8028A87C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A880: lb          $t6, -0x1DD8($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1DD8);
    // 0x8028A884: nop

    // 0x8028A888: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x8028A88C: bne         $t7, $zero, L_8028A8B4
    if (ctx->r15 != 0) {
        // 0x8028A890: nop
    
            goto L_8028A8B4;
    }
    // 0x8028A890: nop

    // 0x8028A894: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028A898: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028A89C: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    // 0x8028A8A0: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x8028A8A4: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x8028A8A8: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x8028A8AC: jal         0x80081468
    // 0x8028A8B0: nop

    func_80081468(rdram, ctx);
        goto after_2;
    // 0x8028A8B0: nop

    after_2:
L_8028A8B4:
    // 0x8028A8B4: b           L_8028A8BC
    // 0x8028A8B8: nop

        goto L_8028A8BC;
    // 0x8028A8B8: nop

L_8028A8BC:
    // 0x8028A8BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028A8C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028A8C4: jr          $ra
    // 0x8028A8C8: nop

    return;
    // 0x8028A8C8: nop

;}
RECOMP_FUNC void func_802887C4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802887C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802887C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802887CC: jal         0x802858D8
    // 0x802887D0: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802887D0: nop

    after_0:
    // 0x802887D4: beq         $v0, $zero, L_802887E4
    if (ctx->r2 == 0) {
        // 0x802887D8: nop
    
            goto L_802887E4;
    }
    // 0x802887D8: nop

    // 0x802887DC: b           L_80288874
    // 0x802887E0: nop

        goto L_80288874;
    // 0x802887E0: nop

L_802887E4:
    // 0x802887E4: jal         0x80085D54
    // 0x802887E8: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802887E8: nop

    after_1:
    // 0x802887EC: beq         $v0, $zero, L_802887FC
    if (ctx->r2 == 0) {
        // 0x802887F0: nop
    
            goto L_802887FC;
    }
    // 0x802887F0: nop

    // 0x802887F4: b           L_80288874
    // 0x802887F8: nop

        goto L_80288874;
    // 0x802887F8: nop

L_802887FC:
    // 0x802887FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288800: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80288804: nop

    // 0x80288808: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8028880C: beq         $t7, $zero, L_80288824
    if (ctx->r15 == 0) {
        // 0x80288810: nop
    
            goto L_80288824;
    }
    // 0x80288810: nop

    // 0x80288814: jal         0x8028236C
    // 0x80288818: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80288818: nop

    after_2:
    // 0x8028881C: b           L_80288874
    // 0x80288820: nop

        goto L_80288874;
    // 0x80288820: nop

L_80288824:
    // 0x80288824: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80288828: lh          $t8, -0x1F64($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F64);
    // 0x8028882C: nop

    // 0x80288830: beq         $t8, $zero, L_80288840
    if (ctx->r24 == 0) {
        // 0x80288834: nop
    
            goto L_80288840;
    }
    // 0x80288834: nop

    // 0x80288838: jal         0x80282AC4
    // 0x8028883C: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x8028883C: nop

    after_3:
L_80288840:
    // 0x80288840: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80288844: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80288848: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028884C: lwc1        $f4, 0x44($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80288850: nop

    // 0x80288854: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80288858: nop

    // 0x8028885C: bc1f        L_8028886C
    if (!c1cs) {
        // 0x80288860: nop
    
            goto L_8028886C;
    }
    // 0x80288860: nop

    // 0x80288864: jal         0x80282AC4
    // 0x80288868: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80288868: nop

    after_4:
L_8028886C:
    // 0x8028886C: b           L_80288874
    // 0x80288870: nop

        goto L_80288874;
    // 0x80288870: nop

L_80288874:
    // 0x80288874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80288878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028887C: jr          $ra
    // 0x80288880: nop

    return;
    // 0x80288880: nop

;}
RECOMP_FUNC void func_802833AC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802833AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802833B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802833B4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802833B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802833BC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802833C0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802833C4: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x802833C8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802833CC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802833D0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802833D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802833D8: lwc1        $f4, 0x44($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X44);
    // 0x802833DC: nop

    // 0x802833E0: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x802833E4: nop

    // 0x802833E8: bc1f        L_802833FC
    if (!c1cs) {
        // 0x802833EC: nop
    
            goto L_802833FC;
    }
    // 0x802833EC: nop

    // 0x802833F0: addiu       $t9, $zero, 0x1A
    ctx->r25 = ADD32(0, 0X1A);
    // 0x802833F4: b           L_80283438
    // 0x802833F8: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
        goto L_80283438;
    // 0x802833F8: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
L_802833FC:
    // 0x802833FC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283400: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80283404: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80283408: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028340C: lwc1        $f8, 0x44($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80283410: nop

    // 0x80283414: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80283418: nop

    // 0x8028341C: bc1f        L_80283430
    if (!c1cs) {
        // 0x80283420: nop
    
            goto L_80283430;
    }
    // 0x80283420: nop

    // 0x80283424: addiu       $t1, $zero, 0x1B
    ctx->r9 = ADD32(0, 0X1B);
    // 0x80283428: b           L_80283438
    // 0x8028342C: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
        goto L_80283438;
    // 0x8028342C: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
L_80283430:
    // 0x80283430: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x80283434: sh          $t2, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r10;
L_80283438:
    // 0x80283438: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028343C: jal         0x8001B880
    // 0x80283440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80283440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80283444: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80283448: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028344C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80283450: nop

    // 0x80283454: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80283458: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8028345C: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x80283460: beq         $t3, $at, L_80283480
    if (ctx->r11 == ctx->r1) {
        // 0x80283464: nop
    
            goto L_80283480;
    }
    // 0x80283464: nop

    // 0x80283468: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x8028346C: beq         $t3, $at, L_80283480
    if (ctx->r11 == ctx->r1) {
        // 0x80283470: nop
    
            goto L_80283480;
    }
    // 0x80283470: nop

    // 0x80283474: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x80283478: bne         $t3, $at, L_802834BC
    if (ctx->r11 != ctx->r1) {
        // 0x8028347C: nop
    
            goto L_802834BC;
    }
    // 0x8028347C: nop

L_80283480:
    // 0x80283480: lh          $t4, 0x36($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X36);
    // 0x80283484: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80283488: nop

    // 0x8028348C: beq         $t4, $t5, L_802834BC
    if (ctx->r12 == ctx->r13) {
        // 0x80283490: nop
    
            goto L_802834BC;
    }
    // 0x80283490: nop

    // 0x80283494: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283498: jal         0x8001B62C
    // 0x8028349C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x8028349C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802834A0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802834A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802834A8: jal         0x8001B580
    // 0x802834AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_2;
    // 0x802834AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802834B0: nop

    // 0x802834B4: div.s       $f18, $f20, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802834B8: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
L_802834BC:
    // 0x802834BC: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x802834C0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x802834C4: nop

    // 0x802834C8: beq         $t6, $t7, L_802834F8
    if (ctx->r14 == ctx->r15) {
        // 0x802834CC: nop
    
            goto L_802834F8;
    }
    // 0x802834CC: nop

    // 0x802834D0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802834D4: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x802834D8: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x802834DC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802834E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802834E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802834E8: jal         0x8001C0EC
    // 0x802834EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x802834EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x802834F0: jal         0x80280000
    // 0x802834F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x802834F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
L_802834F8:
    // 0x802834F8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802834FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283500: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80283504: nop

    // 0x80283508: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8028350C: nop

    // 0x80283510: bc1t        L_80283588
    if (c1cs) {
        // 0x80283514: nop
    
            goto L_80283588;
    }
    // 0x80283514: nop

    // 0x80283518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028351C: jal         0x8001B580
    // 0x80283520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_5;
    // 0x80283520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80283524: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80283528: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8028352C: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80283530: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283538: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8028353C: nop

    // 0x80283540: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80283544: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80283548: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8028354C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80283550: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80283554: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x80283558: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8028355C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283560: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80283564: bgez        $t1, L_8028357C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80283568: cvt.s.w     $f18, $f18
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8028357C;
    }
    // 0x80283568: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8028356C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80283570: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80283574: nop

    // 0x80283578: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8028357C:
    // 0x8028357C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80283580: jal         0x8001B6BC
    // 0x80283584: nop

    func_8001B6BC(rdram, ctx);
        goto after_6;
    // 0x80283584: nop

    after_6:
L_80283588:
    // 0x80283588: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028358C: lw          $t2, 0x7544($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7544);
    // 0x80283590: nop

    // 0x80283594: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x80283598: nop

    // 0x8028359C: bne         $t3, $zero, L_8028364C
    if (ctx->r11 != 0) {
        // 0x802835A0: nop
    
            goto L_8028364C;
    }
    // 0x802835A0: nop

    // 0x802835A4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802835A8: lb          $t4, 0x7638($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7638);
    // 0x802835AC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802835B0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802835B4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802835B8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x802835BC: addiu       $t7, $t7, -0x3560
    ctx->r15 = ADD32(ctx->r15, -0X3560);
    // 0x802835C0: lw          $t8, 0x20($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X20);
    // 0x802835C4: lw          $t6, 0x62F0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X62F0);
    // 0x802835C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802835CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802835D0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x802835D4: jal         0x8001BD44
    // 0x802835D8: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    func_8001BD44(rdram, ctx);
        goto after_7;
    // 0x802835D8: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    after_7:
    // 0x802835DC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802835E0: addiu       $t9, $t9, 0x62F8
    ctx->r25 = ADD32(ctx->r25, 0X62F8);
    // 0x802835E4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802835E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802835EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802835F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802835F4: jal         0x8001C0EC
    // 0x802835F8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x802835F8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_8:
    // 0x802835FC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283600: lb          $t0, 0x5250($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X5250);
    // 0x80283604: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80283608: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8028360C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80283610: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80283614: addiu       $t2, $t2, 0x6330
    ctx->r10 = ADD32(ctx->r10, 0X6330);
    // 0x80283618: addu        $a3, $t1, $t2
    ctx->r7 = ADD32(ctx->r9, ctx->r10);
    // 0x8028361C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80283620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283624: jal         0x8001ABF4
    // 0x80283628: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x80283628: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_9:
    // 0x8028362C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80283630: lw          $t4, 0x7544($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7544);
    // 0x80283634: addiu       $t3, $zero, 0x2AA
    ctx->r11 = ADD32(0, 0X2AA);
    // 0x80283638: sh          $t3, 0xE4($t4)
    MEM_H(0XE4, ctx->r12) = ctx->r11;
    // 0x8028363C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283640: lw          $t7, 0x7544($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7544);
    // 0x80283644: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80283648: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
L_8028364C:
    // 0x8028364C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80283650: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80283654: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80283658: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x8028365C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283660: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
    // 0x80283664: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80283668: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028366C: swc1        $f6, -0x1DA0($at)
    MEM_W(-0X1DA0, ctx->r1) = ctx->f6.u32l;
    // 0x80283670: b           L_80283678
    // 0x80283674: nop

        goto L_80283678;
    // 0x80283674: nop

L_80283678:
    // 0x80283678: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8028367C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80283680: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80283684: jr          $ra
    // 0x80283688: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80283688: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802870AC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802870AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802870B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802870B4: jal         0x802858D8
    // 0x802870B8: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802870B8: nop

    after_0:
    // 0x802870BC: beq         $v0, $zero, L_802870CC
    if (ctx->r2 == 0) {
        // 0x802870C0: nop
    
            goto L_802870CC;
    }
    // 0x802870C0: nop

    // 0x802870C4: b           L_80287244
    // 0x802870C8: nop

        goto L_80287244;
    // 0x802870C8: nop

L_802870CC:
    // 0x802870CC: jal         0x80085D54
    // 0x802870D0: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802870D0: nop

    after_1:
    // 0x802870D4: beq         $v0, $zero, L_802870E4
    if (ctx->r2 == 0) {
        // 0x802870D8: nop
    
            goto L_802870E4;
    }
    // 0x802870D8: nop

    // 0x802870DC: b           L_80287244
    // 0x802870E0: nop

        goto L_80287244;
    // 0x802870E0: nop

L_802870E4:
    // 0x802870E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802870E8: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x802870EC: nop

    // 0x802870F0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802870F4: bne         $t7, $zero, L_8028710C
    if (ctx->r15 != 0) {
        // 0x802870F8: nop
    
            goto L_8028710C;
    }
    // 0x802870F8: nop

    // 0x802870FC: jal         0x80282AC4
    // 0x80287100: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80287100: nop

    after_2:
    // 0x80287104: b           L_80287244
    // 0x80287108: nop

        goto L_80287244;
    // 0x80287108: nop

L_8028710C:
    // 0x8028710C: jal         0x80285F30
    // 0x80287110: nop

    func_80285F30_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80287110: nop

    after_3:
    // 0x80287114: beq         $v0, $zero, L_80287124
    if (ctx->r2 == 0) {
        // 0x80287118: nop
    
            goto L_80287124;
    }
    // 0x80287118: nop

    // 0x8028711C: b           L_80287244
    // 0x80287120: nop

        goto L_80287244;
    // 0x80287120: nop

L_80287124:
    // 0x80287124: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80287128: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028712C: lb          $t8, -0x1DB8($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1DB8);
    // 0x80287130: nop

    // 0x80287134: beq         $t8, $zero, L_80287164
    if (ctx->r24 == 0) {
        // 0x80287138: nop
    
            goto L_80287164;
    }
    // 0x80287138: nop

    // 0x8028713C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80287140: lhu         $t9, -0x1C82($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C82);
    // 0x80287144: nop

    // 0x80287148: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x8028714C: beq         $t0, $zero, L_8028715C
    if (ctx->r8 == 0) {
        // 0x80287150: nop
    
            goto L_8028715C;
    }
    // 0x80287150: nop

    // 0x80287154: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80287158: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_8028715C:
    // 0x8028715C: b           L_80287184
    // 0x80287160: nop

        goto L_80287184;
    // 0x80287160: nop

L_80287164:
    // 0x80287164: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80287168: lhu         $t2, -0x1C7C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1C7C);
    // 0x8028716C: nop

    // 0x80287170: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x80287174: beq         $t3, $zero, L_80287184
    if (ctx->r11 == 0) {
        // 0x80287178: nop
    
            goto L_80287184;
    }
    // 0x80287178: nop

    // 0x8028717C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80287180: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_80287184:
    // 0x80287184: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80287188: nop

    // 0x8028718C: beq         $t5, $zero, L_802871AC
    if (ctx->r13 == 0) {
        // 0x80287190: nop
    
            goto L_802871AC;
    }
    // 0x80287190: nop

    // 0x80287194: jal         0x802828C0
    // 0x80287198: nop

    func_802828C0_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80287198: nop

    after_4:
    // 0x8028719C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802871A0: sb          $zero, -0x1DB8($at)
    MEM_B(-0X1DB8, ctx->r1) = 0;
    // 0x802871A4: b           L_80287244
    // 0x802871A8: nop

        goto L_80287244;
    // 0x802871A8: nop

L_802871AC:
    // 0x802871AC: jal         0x802869FC
    // 0x802871B0: nop

    func_802869FC_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x802871B0: nop

    after_5:
    // 0x802871B4: beq         $v0, $zero, L_802871C4
    if (ctx->r2 == 0) {
        // 0x802871B8: nop
    
            goto L_802871C4;
    }
    // 0x802871B8: nop

    // 0x802871BC: b           L_80287244
    // 0x802871C0: nop

        goto L_80287244;
    // 0x802871C0: nop

L_802871C4:
    // 0x802871C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802871C8: jal         0x8001B44C
    // 0x802871CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x802871CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x802871D0: beq         $v0, $zero, L_80287224
    if (ctx->r2 == 0) {
        // 0x802871D4: nop
    
            goto L_80287224;
    }
    // 0x802871D4: nop

    // 0x802871D8: jal         0x8028236C
    // 0x802871DC: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_7;
    // 0x802871DC: nop

    after_7:
    // 0x802871E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802871E4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802871E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802871EC: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x802871F0: nop

    // 0x802871F4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802871F8: nop

    // 0x802871FC: bc1f        L_8028721C
    if (!c1cs) {
        // 0x80287200: nop
    
            goto L_8028721C;
    }
    // 0x80287200: nop

    // 0x80287204: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80287208: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028720C: nop

    // 0x80287210: lwc1        $f8, 0x1C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80287214: nop

    // 0x80287218: swc1        $f8, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f8.u32l;
L_8028721C:
    // 0x8028721C: b           L_80287244
    // 0x80287220: nop

        goto L_80287244;
    // 0x80287220: nop

L_80287224:
    // 0x80287224: jal         0x8028517C
    // 0x80287228: nop

    func_8028517C_code_extra_0(rdram, ctx);
        goto after_8;
    // 0x80287228: nop

    after_8:
    // 0x8028722C: beq         $v0, $zero, L_8028723C
    if (ctx->r2 == 0) {
        // 0x80287230: nop
    
            goto L_8028723C;
    }
    // 0x80287230: nop

    // 0x80287234: b           L_80287244
    // 0x80287238: nop

        goto L_80287244;
    // 0x80287238: nop

L_8028723C:
    // 0x8028723C: b           L_80287244
    // 0x80287240: nop

        goto L_80287244;
    // 0x80287240: nop

L_80287244:
    // 0x80287244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028724C: jr          $ra
    // 0x80287250: nop

    return;
    // 0x80287250: nop

;}
RECOMP_FUNC void func_80283954_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283954: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283958: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028395C: jal         0x8001A928
    // 0x80283960: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80283960: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80283964: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80283968: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8028396C: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x80283970: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283974: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283978: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x8028397C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283980: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283988: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    // 0x8028398C: jal         0x8001C0EC
    // 0x80283990: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80283990: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80283994: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283998: jal         0x8001B754
    // 0x8028399C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x8028399C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802839A0: jal         0x80280000
    // 0x802839A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802839A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_3:
    // 0x802839A8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802839AC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802839B0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802839B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802839B8: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x802839BC: jal         0x80015538
    // 0x802839C0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x802839C0: nop

    after_4:
    // 0x802839C4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802839C8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802839CC: nop

    // 0x802839D0: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x802839D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802839D8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802839DC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802839E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802839E4: nop

    // 0x802839E8: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x802839EC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802839F0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802839F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802839F8: nop

    // 0x802839FC: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
    // 0x80283A00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283A04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283A08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80283A0C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283A10: jal         0x800178D4
    // 0x80283A14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80283A14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80283A18: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80283A1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80283A20: jal         0x8001FB3C
    // 0x80283A24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_6;
    // 0x80283A24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x80283A28: b           L_80283A30
    // 0x80283A2C: nop

        goto L_80283A30;
    // 0x80283A2C: nop

L_80283A30:
    // 0x80283A30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283A34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283A38: jr          $ra
    // 0x80283A3C: nop

    return;
    // 0x80283A3C: nop

;}
RECOMP_FUNC void func_802841B8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802841B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802841BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802841C0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802841C4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802841C8: addiu       $t6, $zero, 0x26
    ctx->r14 = ADD32(0, 0X26);
    // 0x802841CC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802841D0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802841D4: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x802841D8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802841DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802841E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802841E4: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x802841E8: jal         0x8001C0EC
    // 0x802841EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802841EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802841F0: jal         0x80280000
    // 0x802841F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802841F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_1:
    // 0x802841F8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802841FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80284200: jal         0x8001FB3C
    // 0x80284204: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x80284204: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80284208: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028420C: sb          $zero, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = 0;
    // 0x80284210: b           L_80284218
    // 0x80284214: nop

        goto L_80284218;
    // 0x80284214: nop

L_80284218:
    // 0x80284218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028421C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284220: jr          $ra
    // 0x80284224: nop

    return;
    // 0x80284224: nop

;}
RECOMP_FUNC void func_80289614_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028961C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80289620: lh          $a0, -0x1D68($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D68);
    // 0x80289624: jal         0x80281BA4
    // 0x80289628: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289628: nop

    after_0:
    // 0x8028962C: b           L_80289634
    // 0x80289630: nop

        goto L_80289634;
    // 0x80289630: nop

L_80289634:
    // 0x80289634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028963C: jr          $ra
    // 0x80289640: nop

    return;
    // 0x80289640: nop

;}
RECOMP_FUNC void func_8028A2CC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A2CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028A2D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028A2D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A2D8: lh          $t6, -0x1D68($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D68);
    // 0x8028A2DC: nop

    // 0x8028A2E0: beq         $t6, $zero, L_8028A34C
    if (ctx->r14 == 0) {
        // 0x8028A2E4: nop
    
            goto L_8028A34C;
    }
    // 0x8028A2E4: nop

    // 0x8028A2E8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A2EC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028A2F0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028A2F4: lwc1        $f14, 0x51D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x8028A2F8: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x8028A2FC: jal         0x80084120
    // 0x8028A300: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80084120(rdram, ctx);
        goto after_0;
    // 0x8028A300: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x8028A304: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8028A308: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8028A30C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8028A310: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8028A314: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8028A318: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8028A31C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028A320: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028A324: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8028A328: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028A32C: nop

    // 0x8028A330: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8028A334: jal         0x80015538
    // 0x8028A338: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8028A338: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x8028A33C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028A340: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028A344: nop

    // 0x8028A348: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
L_8028A34C:
    // 0x8028A34C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028A350: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028A354: nop

    // 0x8028A358: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8028A35C: nop

    // 0x8028A360: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    // 0x8028A364: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028A368: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028A36C: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028A370: lwc1        $f18, 0x44($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8028A374: lwc1        $f7, -0x4920($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4920);
    // 0x8028A378: lwc1        $f6, -0x491C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X491C);
    // 0x8028A37C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8028A380: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x8028A384: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8028A388: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
    // 0x8028A38C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028A390: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028A394: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028A398: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x8028A39C: nop

    // 0x8028A3A0: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x8028A3A4: nop

    // 0x8028A3A8: bc1f        L_8028A3C4
    if (!c1cs) {
        // 0x8028A3AC: nop
    
            goto L_8028A3C4;
    }
    // 0x8028A3AC: nop

    // 0x8028A3B0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028A3B4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028A3B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028A3BC: nop

    // 0x8028A3C0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
L_8028A3C4:
    // 0x8028A3C4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028A3C8: lb          $t5, -0x1DD8($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1DD8);
    // 0x8028A3CC: nop

    // 0x8028A3D0: andi        $t6, $t5, 0x3
    ctx->r14 = ctx->r13 & 0X3;
    // 0x8028A3D4: bne         $t6, $zero, L_8028A3FC
    if (ctx->r14 != 0) {
        // 0x8028A3D8: nop
    
            goto L_8028A3FC;
    }
    // 0x8028A3D8: nop

    // 0x8028A3DC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A3E0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028A3E4: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    // 0x8028A3E8: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x8028A3EC: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x8028A3F0: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x8028A3F4: jal         0x80081468
    // 0x8028A3F8: nop

    func_80081468(rdram, ctx);
        goto after_2;
    // 0x8028A3F8: nop

    after_2:
L_8028A3FC:
    // 0x8028A3FC: b           L_8028A404
    // 0x8028A400: nop

        goto L_8028A404;
    // 0x8028A400: nop

L_8028A404:
    // 0x8028A404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028A408: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028A40C: jr          $ra
    // 0x8028A410: nop

    return;
    // 0x8028A410: nop

;}
RECOMP_FUNC void func_80289E80_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289E80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80289E84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80289E88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289E8C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289E90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80289E94: nop

    // 0x80289E98: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80289E9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289EA0: jal         0x8001B62C
    // 0x80289EA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80289EA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80289EA8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80289EAC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80289EB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80289EB4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80289EB8: nop

    // 0x80289EBC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80289EC0: nop

    // 0x80289EC4: bc1f        L_80289EE8
    if (!c1cs) {
        // 0x80289EC8: nop
    
            goto L_80289EE8;
    }
    // 0x80289EC8: nop

    // 0x80289ECC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80289ED0: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x80289ED4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80289ED8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80289EDC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80289EE0: b           L_80289F34
    // 0x80289EE4: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
        goto L_80289F34;
    // 0x80289EE4: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
L_80289EE8:
    // 0x80289EE8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80289EEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80289EF0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80289EF4: nop

    // 0x80289EF8: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80289EFC: nop

    // 0x80289F00: bc1f        L_80289F20
    if (!c1cs) {
        // 0x80289F04: nop
    
            goto L_80289F20;
    }
    // 0x80289F04: nop

    // 0x80289F08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80289F10: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80289F14: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80289F18: jal         0x800178D4
    // 0x80289F1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80289F1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80289F20:
    // 0x80289F20: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80289F24: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80289F28: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80289F2C: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80289F30: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
L_80289F34:
    // 0x80289F34: b           L_80289F3C
    // 0x80289F38: nop

        goto L_80289F3C;
    // 0x80289F38: nop

L_80289F3C:
    // 0x80289F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80289F40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80289F44: jr          $ra
    // 0x80289F48: nop

    return;
    // 0x80289F48: nop

;}
RECOMP_FUNC void func_80287B44_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287B4C: jal         0x80285D4C
    // 0x80287B50: nop

    func_80285D4C_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287B50: nop

    after_0:
    // 0x80287B54: beq         $v0, $zero, L_80287B64
    if (ctx->r2 == 0) {
        // 0x80287B58: nop
    
            goto L_80287B64;
    }
    // 0x80287B58: nop

    // 0x80287B5C: b           L_80287C58
    // 0x80287B60: nop

        goto L_80287C58;
    // 0x80287B60: nop

L_80287B64:
    // 0x80287B64: jal         0x80085D54
    // 0x80287B68: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80287B68: nop

    after_1:
    // 0x80287B6C: beq         $v0, $zero, L_80287B7C
    if (ctx->r2 == 0) {
        // 0x80287B70: nop
    
            goto L_80287B7C;
    }
    // 0x80287B70: nop

    // 0x80287B74: b           L_80287C58
    // 0x80287B78: nop

        goto L_80287C58;
    // 0x80287B78: nop

L_80287B7C:
    // 0x80287B7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287B80: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80287B84: nop

    // 0x80287B88: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80287B8C: bne         $t7, $zero, L_80287BC0
    if (ctx->r15 != 0) {
        // 0x80287B90: nop
    
            goto L_80287BC0;
    }
    // 0x80287B90: nop

    // 0x80287B94: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80287B98: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x80287B9C: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x80287BA0: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80287BA4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80287BA8: sw          $t9, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r25;
    // 0x80287BAC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80287BB0: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80287BB4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80287BB8: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80287BBC: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
L_80287BC0:
    // 0x80287BC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80287BC4: jal         0x8001B44C
    // 0x80287BC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80287BC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80287BCC: beq         $v0, $zero, L_80287C50
    if (ctx->r2 == 0) {
        // 0x80287BD0: nop
    
            goto L_80287C50;
    }
    // 0x80287BD0: nop

    // 0x80287BD4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80287BD8: lw          $t2, -0x1DA8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1DA8);
    // 0x80287BDC: nop

    // 0x80287BE0: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x80287BE4: beq         $t3, $zero, L_80287C50
    if (ctx->r11 == 0) {
        // 0x80287BE8: nop
    
            goto L_80287C50;
    }
    // 0x80287BE8: nop

    // 0x80287BEC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80287BF0: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80287BF4: nop

    // 0x80287BF8: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x80287BFC: nop

    // 0x80287C00: bne         $t5, $zero, L_80287C18
    if (ctx->r13 != 0) {
        // 0x80287C04: nop
    
            goto L_80287C18;
    }
    // 0x80287C04: nop

    // 0x80287C08: jal         0x80283F9C
    // 0x80287C0C: nop

    func_80283F9C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80287C0C: nop

    after_3:
    // 0x80287C10: b           L_80287C48
    // 0x80287C14: nop

        goto L_80287C48;
    // 0x80287C14: nop

L_80287C18:
    // 0x80287C18: jal         0x8028236C
    // 0x80287C1C: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80287C1C: nop

    after_4:
    // 0x80287C20: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80287C24: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80287C28: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80287C2C: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x80287C30: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80287C34: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80287C38: nop

    // 0x80287C3C: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80287C40: nop

    // 0x80287C44: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
L_80287C48:
    // 0x80287C48: b           L_80287C58
    // 0x80287C4C: nop

        goto L_80287C58;
    // 0x80287C4C: nop

L_80287C50:
    // 0x80287C50: b           L_80287C58
    // 0x80287C54: nop

        goto L_80287C58;
    // 0x80287C54: nop

L_80287C58:
    // 0x80287C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80287C60: jr          $ra
    // 0x80287C64: nop

    return;
    // 0x80287C64: nop

;}
RECOMP_FUNC void func_802804CC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802804CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802804D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802804D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802804D8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802804DC: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802804E0: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x802804E4: lwc1        $f9, -0x49B0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X49B0);
    // 0x802804E8: lwc1        $f8, -0x49AC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X49AC);
    // 0x802804EC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802804F0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802804F4: jal         0x80034970
    // 0x802804F8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x802804F8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x802804FC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280500: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280504: nop

    // 0x80280508: lwc1        $f16, 0x44($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X44);
    // 0x8028050C: nop

    // 0x80280510: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80280514: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x80280518: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028051C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280520: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80280524: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80280528: lwc1        $f9, -0x49A8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X49A8);
    // 0x8028052C: lwc1        $f8, -0x49A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X49A4);
    // 0x80280530: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280534: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80280538: jal         0x80036570
    // 0x8028053C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8028053C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80280540: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280544: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280548: nop

    // 0x8028054C: lwc1        $f16, 0x44($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80280550: nop

    // 0x80280554: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80280558: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x8028055C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280560: lb          $t0, -0x1CD8($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1CD8);
    // 0x80280564: nop

    // 0x80280568: beq         $t0, $zero, L_802805B0
    if (ctx->r8 == 0) {
        // 0x8028056C: nop
    
            goto L_802805B0;
    }
    // 0x8028056C: nop

    // 0x80280570: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280574: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280578: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028057C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280580: lwc1        $f4, 0x24($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X24);
    // 0x80280584: nop

    // 0x80280588: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028058C: swc1        $f8, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f8.u32l;
    // 0x80280590: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280594: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280598: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028059C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802805A0: lwc1        $f10, 0x2C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x802805A4: nop

    // 0x802805A8: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802805AC: swc1        $f18, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f18.u32l;
L_802805B0:
    // 0x802805B0: b           L_802805B8
    // 0x802805B4: nop

        goto L_802805B8;
    // 0x802805B4: nop

L_802805B8:
    // 0x802805B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802805BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802805C0: jr          $ra
    // 0x802805C4: nop

    return;
    // 0x802805C4: nop

;}
RECOMP_FUNC void func_802899B0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802899B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802899B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802899B8: jal         0x80281BA4
    // 0x802899BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802899BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802899C0: b           L_802899C8
    // 0x802899C4: nop

        goto L_802899C8;
    // 0x802899C4: nop

L_802899C8:
    // 0x802899C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802899CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802899D0: jr          $ra
    // 0x802899D4: nop

    return;
    // 0x802899D4: nop

;}
RECOMP_FUNC void func_80289D0C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289D0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80289D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289D14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289D18: jal         0x8001B880
    // 0x80289D1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80289D1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80289D20: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80289D24: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80289D28: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x80289D2C: bne         $t6, $at, L_80289E20
    if (ctx->r14 != ctx->r1) {
        // 0x80289D30: nop
    
            goto L_80289E20;
    }
    // 0x80289D30: nop

    // 0x80289D34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289D38: jal         0x8001B62C
    // 0x80289D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80289D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80289D40: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80289D44: lui         $at, 0x4268
    ctx->r1 = S32(0X4268 << 16);
    // 0x80289D48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80289D4C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289D50: nop

    // 0x80289D54: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80289D58: nop

    // 0x80289D5C: bc1f        L_80289DA4
    if (!c1cs) {
        // 0x80289D60: nop
    
            goto L_80289DA4;
    }
    // 0x80289D60: nop

    // 0x80289D64: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80289D68: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x80289D6C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80289D70: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x80289D74: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
    // 0x80289D78: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80289D7C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80289D80: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80289D84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80289D88: nop

    // 0x80289D8C: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
    // 0x80289D90: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80289D94: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80289D98: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80289D9C: b           L_80289E20
    // 0x80289DA0: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
        goto L_80289E20;
    // 0x80289DA0: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
L_80289DA4:
    // 0x80289DA4: lui         $at, 0x4268
    ctx->r1 = S32(0X4268 << 16);
    // 0x80289DA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80289DAC: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289DB0: nop

    // 0x80289DB4: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80289DB8: nop

    // 0x80289DBC: bc1f        L_80289DF4
    if (!c1cs) {
        // 0x80289DC0: nop
    
            goto L_80289DF4;
    }
    // 0x80289DC0: nop

    // 0x80289DC4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80289DC8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80289DCC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80289DD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80289DD4: nop

    // 0x80289DD8: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x80289DDC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80289DE0: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x80289DE4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80289DE8: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x80289DEC: b           L_80289E18
    // 0x80289DF0: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
        goto L_80289E18;
    // 0x80289DF0: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
L_80289DF4:
    // 0x80289DF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289DF8: jal         0x8001B4AC
    // 0x80289DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80289DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80289E00: beq         $v0, $zero, L_80289E18
    if (ctx->r2 == 0) {
        // 0x80289E04: nop
    
            goto L_80289E18;
    }
    // 0x80289E04: nop

    // 0x80289E08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80289E0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80289E10: jal         0x8001B6BC
    // 0x80289E14: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_3;
    // 0x80289E14: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    after_3:
L_80289E18:
    // 0x80289E18: jal         0x80281E50
    // 0x80289E1C: nop

    func_80281E50_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80289E1C: nop

    after_4:
L_80289E20:
    // 0x80289E20: b           L_80289E28
    // 0x80289E24: nop

        goto L_80289E28;
    // 0x80289E24: nop

L_80289E28:
    // 0x80289E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289E2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80289E30: jr          $ra
    // 0x80289E34: nop

    return;
    // 0x80289E34: nop

;}
