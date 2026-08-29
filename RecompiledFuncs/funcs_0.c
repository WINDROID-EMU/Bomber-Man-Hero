#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void amCreateAudioMgr(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D120: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000D124: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000D128: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8000D12C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8000D130: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8000D134: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
    // 0x8000D138: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D13C: sw          $zero, 0x316C($at)
    MEM_W(0X316C, ctx->r1) = 0;
    // 0x8000D140: sw          $zero, 0x3168($at)
    MEM_W(0X3168, ctx->r1) = 0;
    // 0x8000D144: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D148: sw          $zero, 0x3164($at)
    MEM_W(0X3164, ctx->r1) = 0;
    // 0x8000D14C: sw          $zero, 0x3160($at)
    MEM_W(0X3160, ctx->r1) = 0;
    // 0x8000D150: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D154: sw          $zero, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = 0;
    // 0x8000D158: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D15C: sw          $zero, 0x541C($at)
    MEM_W(0X541C, ctx->r1) = 0;
    // 0x8000D160: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D164: sw          $zero, 0x5418($at)
    MEM_W(0X5418, ctx->r1) = 0;
    // 0x8000D168: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8000D16C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D170: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x8000D174: nop

    // 0x8000D178: sh          $t7, 0x5420($at)
    MEM_H(0X5420, ctx->r1) = ctx->r15;
    // 0x8000D17C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8000D180: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D184: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8000D188: nop

    // 0x8000D18C: sw          $t9, 0x5424($at)
    MEM_W(0X5424, ctx->r1) = ctx->r25;
    // 0x8000D190: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8000D194: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D198: lw          $t1, 0x14($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X14);
    // 0x8000D19C: nop

    // 0x8000D1A0: sw          $t1, 0x5408($at)
    MEM_W(0X5408, ctx->r1) = ctx->r9;
    // 0x8000D1A4: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8000D1A8: lui         $t2, 0x8001
    ctx->r10 = S32(0X8001 << 16);
    // 0x8000D1AC: addiu       $t2, $t2, -0x1F90
    ctx->r10 = ADD32(ctx->r10, -0X1F90);
    // 0x8000D1B0: sw          $t2, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r10;
    // 0x8000D1B4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8000D1B8: nop

    // 0x8000D1BC: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    // 0x8000D1C0: jal         0x80035650
    // 0x8000D1C4: nop

    osAiSetFrequency_recomp(rdram, ctx);
        goto after_0;
    // 0x8000D1C4: nop

    after_0:
    // 0x8000D1C8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8000D1CC: nop

    // 0x8000D1D0: sw          $v0, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r2;
    // 0x8000D1D4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000D1D8: lw          $t6, -0x5D80($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5D80);
    // 0x8000D1DC: nop

    // 0x8000D1E0: bne         $t6, $zero, L_8000D244
    if (ctx->r14 != 0) {
        // 0x8000D1E4: nop
    
            goto L_8000D244;
    }
    // 0x8000D1E4: nop

    // 0x8000D1E8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8000D1EC: nop

    // 0x8000D1F0: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8000D1F4: nop

    // 0x8000D1F8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8000D1FC: bgez        $t8, L_8000D214
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8000D200: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8000D214;
    }
    // 0x8000D200: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000D204: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000D208: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000D20C: nop

    // 0x8000D210: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8000D214:
    // 0x8000D214: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8000D218: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8000D21C: lw          $t0, 0x18($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18);
    // 0x8000D220: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000D224: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8000D228: nop

    // 0x8000D22C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000D230: mul.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8000D234: nop

    // 0x8000D238: div.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8000D23C: b           L_8000D29C
    // 0x8000D240: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
        goto L_8000D29C;
    // 0x8000D240: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
L_8000D244:
    // 0x8000D244: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8000D248: nop

    // 0x8000D24C: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x8000D250: nop

    // 0x8000D254: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8000D258: bgez        $t2, L_8000D270
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8000D25C: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8000D270;
    }
    // 0x8000D25C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000D260: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000D264: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000D268: nop

    // 0x8000D26C: add.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f16.fl;
L_8000D270:
    // 0x8000D270: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8000D274: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8000D278: lw          $t4, 0x18($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X18);
    // 0x8000D27C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000D280: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8000D284: nop

    // 0x8000D288: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8000D28C: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8000D290: nop

    // 0x8000D294: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000D298: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
L_8000D29C:
    // 0x8000D29C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000D2A0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000D2A4: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8000D2A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000D2AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000D2B0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D2B4: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000D2B8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8000D2BC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000D2C0: sw          $t6, 0x5434($at)
    MEM_W(0X5434, ctx->r1) = ctx->r14;
    // 0x8000D2C4: nop

    // 0x8000D2C8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000D2CC: lw          $t7, 0x5434($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5434);
    // 0x8000D2D0: nop

    // 0x8000D2D4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8000D2D8: bgez        $t7, L_8000D2F0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8000D2DC: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8000D2F0;
    }
    // 0x8000D2DC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000D2E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000D2E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000D2E8: nop

    // 0x8000D2EC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8000D2F0:
    // 0x8000D2F0: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000D2F4: nop

    // 0x8000D2F8: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8000D2FC: nop

    // 0x8000D300: bc1f        L_8000D31C
    if (!c1cs) {
        // 0x8000D304: nop
    
            goto L_8000D31C;
    }
    // 0x8000D304: nop

    // 0x8000D308: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000D30C: lw          $t8, 0x5434($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5434);
    // 0x8000D310: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D314: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8000D318: sw          $t9, 0x5434($at)
    MEM_W(0X5434, ctx->r1) = ctx->r25;
L_8000D31C:
    // 0x8000D31C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000D320: lw          $t0, 0x5434($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5434);
    // 0x8000D324: nop

    // 0x8000D328: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x8000D32C: beq         $t1, $zero, L_8000D350
    if (ctx->r9 == 0) {
        // 0x8000D330: nop
    
            goto L_8000D350;
    }
    // 0x8000D330: nop

    // 0x8000D334: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000D338: lw          $t2, 0x5434($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5434);
    // 0x8000D33C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8000D340: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x8000D344: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x8000D348: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D34C: sw          $t4, 0x5434($at)
    MEM_W(0X5434, ctx->r1) = ctx->r12;
L_8000D350:
    // 0x8000D350: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8000D354: lw          $t5, 0x5434($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5434);
    // 0x8000D358: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D35C: addiu       $t6, $t5, -0x10
    ctx->r14 = ADD32(ctx->r13, -0X10);
    // 0x8000D360: sw          $t6, 0x542C($at)
    MEM_W(0X542C, ctx->r1) = ctx->r14;
    // 0x8000D364: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000D368: lw          $t7, 0x5434($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5434);
    // 0x8000D36C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D370: addiu       $t8, $t7, 0x60
    ctx->r24 = ADD32(ctx->r15, 0X60);
    // 0x8000D374: sw          $t8, 0x5430($at)
    MEM_W(0X5430, ctx->r1) = ctx->r24;
    // 0x8000D378: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D37C: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
    // 0x8000D380: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8000D384: jal         0x8003583C
    // 0x8000D388: addiu       $a0, $a0, 0x238
    ctx->r4 = ADD32(ctx->r4, 0X238);
    alInit(rdram, ctx);
        goto after_1;
    // 0x8000D388: addiu       $a0, $a0, 0x238
    ctx->r4 = ADD32(ctx->r4, 0X238);
    after_1:
    // 0x8000D38C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D390: lhu         $a0, 0x5420($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X5420);
    // 0x8000D394: nop

    // 0x8000D398: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8000D39C: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8000D3A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000D3A4: jal         0x8000D84C
    // 0x8000D3A8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    h_alHeapAlloc(rdram, ctx);
        goto after_2;
    // 0x8000D3A8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_2:
    // 0x8000D3AC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8000D3B0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8000D3B4: nop

    // 0x8000D3B8: bne         $t0, $zero, L_8000D3D0
    if (ctx->r8 != 0) {
        // 0x8000D3BC: nop
    
            goto L_8000D3D0;
    }
    // 0x8000D3BC: nop

    // 0x8000D3C0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000D3C4: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
    // 0x8000D3C8: b           L_8000D6F4
    // 0x8000D3CC: nop

        goto L_8000D6F4;
    // 0x8000D3CC: nop

L_8000D3D0:
    // 0x8000D3D0: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000D3D4: lhu         $t3, 0x5420($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X5420);
    // 0x8000D3D8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8000D3DC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000D3E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8000D3E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8000D3E8: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8000D3EC: sw          $zero, -0x14($t5)
    MEM_W(-0X14, ctx->r13) = 0;
    // 0x8000D3F0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000D3F4: lhu         $t7, 0x5420($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X5420);
    // 0x8000D3F8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8000D3FC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000D400: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8000D404: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000D408: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8000D40C: lw          $s0, -0x14($t9)
    ctx->r16 = MEM_W(ctx->r25, -0X14);
    // 0x8000D410: nop

    // 0x8000D414: sw          $s0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r16;
    // 0x8000D418: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8000D41C: nop

    // 0x8000D420: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
    // 0x8000D424: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000D428: lhu         $t1, 0x5420($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X5420);
    // 0x8000D42C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8000D430: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8000D434: blez        $t3, L_8000D4E4
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8000D438: nop
    
            goto L_8000D4E4;
    }
    // 0x8000D438: nop

L_8000D43C:
    // 0x8000D43C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D440: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8000D444: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8000D448: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8000D44C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8000D450: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x8000D454: addiu       $a0, $t7, 0x14
    ctx->r4 = ADD32(ctx->r15, 0X14);
    // 0x8000D458: jal         0x800357E0
    // 0x8000D45C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    alLink(rdram, ctx);
        goto after_3;
    // 0x8000D45C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_3:
    // 0x8000D460: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D464: lw          $a0, 0x5424($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5424);
    // 0x8000D468: jal         0x8000D84C
    // 0x8000D46C: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_4;
    // 0x8000D46C: nop

    after_4:
    // 0x8000D470: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D474: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8000D478: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8000D47C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8000D480: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000D484: addu        $t0, $t8, $t6
    ctx->r8 = ADD32(ctx->r24, ctx->r14);
    // 0x8000D488: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x8000D48C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D490: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8000D494: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8000D498: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8000D49C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000D4A0: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x8000D4A4: lw          $t5, 0x10($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X10);
    // 0x8000D4A8: nop

    // 0x8000D4AC: bne         $t5, $zero, L_8000D4C4
    if (ctx->r13 != 0) {
        // 0x8000D4B0: nop
    
            goto L_8000D4C4;
    }
    // 0x8000D4B0: nop

    // 0x8000D4B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000D4B8: sh          $t7, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r15;
    // 0x8000D4BC: b           L_8000D6F4
    // 0x8000D4C0: nop

        goto L_8000D6F4;
    // 0x8000D4C0: nop

L_8000D4C4:
    // 0x8000D4C4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000D4C8: lhu         $t6, 0x5420($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X5420);
    // 0x8000D4CC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D4D0: addiu       $t0, $t6, -0x1
    ctx->r8 = ADD32(ctx->r14, -0X1);
    // 0x8000D4D4: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8000D4D8: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8000D4DC: bne         $at, $zero, L_8000D43C
    if (ctx->r1 != 0) {
        // 0x8000D4E0: sw          $t8, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r24;
            goto L_8000D43C;
    }
    // 0x8000D4E0: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
L_8000D4E4:
    // 0x8000D4E4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D4E8: lw          $a0, 0x5424($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5424);
    // 0x8000D4EC: jal         0x8000D84C
    // 0x8000D4F0: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_5;
    // 0x8000D4F0: nop

    after_5:
    // 0x8000D4F4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D4F8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8000D4FC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000D500: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8000D504: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000D508: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x8000D50C: sw          $v0, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r2;
    // 0x8000D510: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D514: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8000D518: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8000D51C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8000D520: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000D524: addu        $t6, $t5, $t9
    ctx->r14 = ADD32(ctx->r13, ctx->r25);
    // 0x8000D528: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x8000D52C: nop

    // 0x8000D530: bne         $t8, $zero, L_8000D548
    if (ctx->r24 != 0) {
        // 0x8000D534: nop
    
            goto L_8000D548;
    }
    // 0x8000D534: nop

    // 0x8000D538: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8000D53C: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
    // 0x8000D540: b           L_8000D6F4
    // 0x8000D544: nop

        goto L_8000D6F4;
    // 0x8000D544: nop

L_8000D548:
    // 0x8000D548: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D54C: sw          $zero, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = 0;
    // 0x8000D550: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8000D554: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D558: sw          $t1, 0x5414($at)
    MEM_W(0X5414, ctx->r1) = ctx->r9;
    // 0x8000D55C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8000D560: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D564: lw          $t2, 0xC($t3)
    ctx->r10 = MEM_W(ctx->r11, 0XC);
    // 0x8000D568: nop

    // 0x8000D56C: sw          $t2, 0x5438($at)
    MEM_W(0X5438, ctx->r1) = ctx->r10;
    // 0x8000D570: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_8000D574:
    // 0x8000D574: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D578: lw          $a0, 0x5438($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5438);
    // 0x8000D57C: nop

    // 0x8000D580: sll         $t4, $a0, 3
    ctx->r12 = S32(ctx->r4 << 3);
    // 0x8000D584: jal         0x8000D84C
    // 0x8000D588: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    h_alHeapAlloc(rdram, ctx);
        goto after_6;
    // 0x8000D588: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_6:
    // 0x8000D58C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D590: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D594: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x8000D598: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8000D59C: sw          $v0, 0x3180($at)
    MEM_W(0X3180, ctx->r1) = ctx->r2;
    // 0x8000D5A0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D5A4: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000D5A8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8000D5AC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8000D5B0: lw          $t8, 0x3180($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3180);
    // 0x8000D5B4: nop

    // 0x8000D5B8: bne         $t8, $zero, L_8000D5D0
    if (ctx->r24 != 0) {
        // 0x8000D5BC: nop
    
            goto L_8000D5D0;
    }
    // 0x8000D5BC: nop

    // 0x8000D5C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8000D5C4: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
    // 0x8000D5C8: b           L_8000D6F4
    // 0x8000D5CC: nop

        goto L_8000D6F4;
    // 0x8000D5CC: nop

L_8000D5D0:
    // 0x8000D5D0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D5D4: nop

    // 0x8000D5D8: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8000D5DC: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x8000D5E0: bne         $at, $zero, L_8000D574
    if (ctx->r1 != 0) {
        // 0x8000D5E4: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_8000D574;
    }
    // 0x8000D5E4: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x8000D5E8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_8000D5EC:
    // 0x8000D5EC: jal         0x8000D84C
    // 0x8000D5F0: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    h_alHeapAlloc(rdram, ctx);
        goto after_7;
    // 0x8000D5F0: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_7:
    // 0x8000D5F4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D5F8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D5FC: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8000D600: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8000D604: sw          $v0, 0x3188($at)
    MEM_W(0X3188, ctx->r1) = ctx->r2;
    // 0x8000D608: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D60C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000D610: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x8000D614: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x8000D618: lw          $t9, 0x3188($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3188);
    // 0x8000D61C: nop

    // 0x8000D620: bne         $t9, $zero, L_8000D638
    if (ctx->r25 != 0) {
        // 0x8000D624: nop
    
            goto L_8000D638;
    }
    // 0x8000D624: nop

    // 0x8000D628: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000D62C: sh          $t6, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r14;
    // 0x8000D630: b           L_8000D6F4
    // 0x8000D634: nop

        goto L_8000D6F4;
    // 0x8000D634: nop

L_8000D638:
    // 0x8000D638: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D63C: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000D640: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8000D644: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8000D648: lw          $t3, 0x3188($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3188);
    // 0x8000D64C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8000D650: sh          $t8, 0x70($t3)
    MEM_H(0X70, ctx->r11) = ctx->r24;
    // 0x8000D654: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D658: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000D65C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8000D660: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8000D664: lw          $t7, 0x3188($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3188);
    // 0x8000D668: nop

    // 0x8000D66C: sw          $t7, 0x74($t7)
    MEM_W(0X74, ctx->r15) = ctx->r15;
    // 0x8000D670: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D674: lw          $a0, 0x5430($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5430);
    // 0x8000D678: nop

    // 0x8000D67C: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x8000D680: jal         0x8000D84C
    // 0x8000D684: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    h_alHeapAlloc(rdram, ctx);
        goto after_8;
    // 0x8000D684: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_8:
    // 0x8000D688: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D68C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000D690: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8000D694: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8000D698: lw          $t0, 0x3188($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3188);
    // 0x8000D69C: nop

    // 0x8000D6A0: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x8000D6A4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D6A8: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000D6AC: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x8000D6B0: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x8000D6B4: lw          $t3, 0x3188($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3188);
    // 0x8000D6B8: nop

    // 0x8000D6BC: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x8000D6C0: nop

    // 0x8000D6C4: bne         $t2, $zero, L_8000D6DC
    if (ctx->r10 != 0) {
        // 0x8000D6C8: nop
    
            goto L_8000D6DC;
    }
    // 0x8000D6C8: nop

    // 0x8000D6CC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8000D6D0: sh          $t4, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r12;
    // 0x8000D6D4: b           L_8000D6F4
    // 0x8000D6D8: nop

        goto L_8000D6F4;
    // 0x8000D6D8: nop

L_8000D6DC:
    // 0x8000D6DC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D6E0: nop

    // 0x8000D6E4: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x8000D6E8: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x8000D6EC: bne         $at, $zero, L_8000D5EC
    if (ctx->r1 != 0) {
        // 0x8000D6F0: sw          $t5, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r13;
            goto L_8000D5EC;
    }
    // 0x8000D6F0: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
L_8000D6F4:
    // 0x8000D6F4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000D6F8: addiu       $t9, $t9, 0x3180
    ctx->r25 = ADD32(ctx->r25, 0X3180);
    // 0x8000D6FC: addiu       $a0, $t9, 0x200
    ctx->r4 = ADD32(ctx->r25, 0X200);
    // 0x8000D700: addiu       $a1, $t9, 0x218
    ctx->r5 = ADD32(ctx->r25, 0X218);
    // 0x8000D704: jal         0x800319C0
    // 0x8000D708: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_9;
    // 0x8000D708: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8000D70C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D710: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8000D714: addiu       $a1, $a1, 0x5758
    ctx->r5 = ADD32(ctx->r5, 0X5758);
    // 0x8000D718: addiu       $a0, $a0, 0x5740
    ctx->r4 = ADD32(ctx->r4, 0X5740);
    // 0x8000D71C: jal         0x800319C0
    // 0x8000D720: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_10;
    // 0x8000D720: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_10:
    // 0x8000D724: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8000D728: nop

    // 0x8000D72C: lw          $t0, 0x14($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X14);
    // 0x8000D730: nop

    // 0x8000D734: beq         $t0, $zero, L_8000D790
    if (ctx->r8 == 0) {
        // 0x8000D738: nop
    
            goto L_8000D790;
    }
    // 0x8000D738: nop

    // 0x8000D73C: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000D740: addiu       $t1, $t1, 0x3180
    ctx->r9 = ADD32(ctx->r9, 0X3180);
    // 0x8000D744: addiu       $a0, $t1, 0x1C8
    ctx->r4 = ADD32(ctx->r9, 0X1C8);
    // 0x8000D748: addiu       $a1, $t1, 0x1E0
    ctx->r5 = ADD32(ctx->r9, 0X1E0);
    // 0x8000D74C: jal         0x800319C0
    // 0x8000D750: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_11;
    // 0x8000D750: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x8000D754: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8000D758: nop

    // 0x8000D75C: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x8000D760: jal         0x80001FDC
    // 0x8000D764: nop

    func_80001FDC(rdram, ctx);
        goto after_12;
    // 0x8000D764: nop

    after_12:
    // 0x8000D768: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D76C: sw          $v0, 0x3170($at)
    MEM_W(0X3170, ctx->r1) = ctx->r2;
    // 0x8000D770: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8000D774: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8000D778: addiu       $a2, $a2, 0x3180
    ctx->r6 = ADD32(ctx->r6, 0X3180);
    // 0x8000D77C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8000D780: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    // 0x8000D784: addiu       $a1, $a1, 0x3178
    ctx->r5 = ADD32(ctx->r5, 0X3178);
    // 0x8000D788: jal         0x80001E78
    // 0x8000D78C: addiu       $a2, $a2, 0x1C8
    ctx->r6 = ADD32(ctx->r6, 0X1C8);
    func_80001E78(rdram, ctx);
        goto after_13;
    // 0x8000D78C: addiu       $a2, $a2, 0x1C8
    ctx->r6 = ADD32(ctx->r6, 0X1C8);
    after_13:
L_8000D790:
    // 0x8000D790: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8000D794: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000D798: addiu       $t4, $t4, 0x3408
    ctx->r12 = ADD32(ctx->r12, 0X3408);
    // 0x8000D79C: addiu       $t7, $t4, 0x2000
    ctx->r15 = ADD32(ctx->r12, 0X2000);
    // 0x8000D7A0: lw          $a1, 0x1C($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X1C);
    // 0x8000D7A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8000D7A8: lw          $t5, 0x18($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X18);
    // 0x8000D7AC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D7B0: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
    // 0x8000D7B4: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8000D7B8: addiu       $a2, $a2, -0x2720
    ctx->r6 = ADD32(ctx->r6, -0X2720);
    // 0x8000D7BC: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x8000D7C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8000D7C4: jal         0x800310B0
    // 0x8000D7C8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    osCreateThread_recomp(rdram, ctx);
        goto after_14;
    // 0x8000D7C8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_14:
    // 0x8000D7CC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D7D0: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
    // 0x8000D7D4: jal         0x80031200
    // 0x8000D7D8: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osStartThread_recomp(rdram, ctx);
        goto after_15;
    // 0x8000D7D8: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_15:
    // 0x8000D7DC: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x8000D7E0: b           L_8000D7F0
    // 0x8000D7E4: nop

        goto L_8000D7F0;
    // 0x8000D7E4: nop

    // 0x8000D7E8: b           L_8000D7F0
    // 0x8000D7EC: nop

        goto L_8000D7F0;
    // 0x8000D7EC: nop

L_8000D7F0:
    // 0x8000D7F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000D7F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8000D7F8: jr          $ra
    // 0x8000D7FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000D7FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8000A9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A9B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000A9B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000A9BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000A9C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000A9C4: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000A9C8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000A9CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000A9D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000A9D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000A9D8: lw          $t8, 0x2D84($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D84);
    // 0x8000A9DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000A9E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000A9E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000A9E8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8000A9EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A9F0: nop

    // 0x8000A9F4: lh          $t1, 0x1A($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X1A);
    // 0x8000A9F8: nop

    // 0x8000A9FC: sh          $t1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r9;
    // 0x8000AA00: lh          $t2, 0x18($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X18);
    // 0x8000AA04: nop

    // 0x8000AA08: blez        $t2, L_8000AA9C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8000AA0C: nop
    
            goto L_8000AA9C;
    }
    // 0x8000AA0C: nop

L_8000AA10:
    // 0x8000AA10: lh          $t3, 0x18($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X18);
    // 0x8000AA14: nop

    // 0x8000AA18: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8000AA1C: sh          $t4, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r12;
    // 0x8000AA20: lh          $t6, 0x18($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X18);
    // 0x8000AA24: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000AA28: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8000AA2C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8000AA30: lh          $t9, 0x14($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X14);
    // 0x8000AA34: nop

    // 0x8000AA38: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
    // 0x8000AA3C: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x8000AA40: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000AA44: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000AA48: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8000AA4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000AA50: lw          $t0, 0x2D84($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D84);
    // 0x8000AA54: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8000AA58: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000AA5C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8000AA60: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x8000AA64: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000AA68: nop

    // 0x8000AA6C: beq         $t4, $t6, L_8000AA7C
    if (ctx->r12 == ctx->r14) {
        // 0x8000AA70: nop
    
            goto L_8000AA7C;
    }
    // 0x8000AA70: nop

    // 0x8000AA74: b           L_8000AA8C
    // 0x8000AA78: nop

        goto L_8000AA8C;
    // 0x8000AA78: nop

L_8000AA7C:
    // 0x8000AA7C: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8000AA80: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x8000AA84: jal         0x8000C8CC
    // 0x8000AA88: nop

    func_8000C8CC(rdram, ctx);
        goto after_0;
    // 0x8000AA88: nop

    after_0:
L_8000AA8C:
    // 0x8000AA8C: lh          $t5, 0x18($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X18);
    // 0x8000AA90: nop

    // 0x8000AA94: bgtz        $t5, L_8000AA10
    if (SIGNED(ctx->r13) > 0) {
        // 0x8000AA98: nop
    
            goto L_8000AA10;
    }
    // 0x8000AA98: nop

L_8000AA9C:
    // 0x8000AA9C: b           L_8000AAA4
    // 0x8000AAA0: nop

        goto L_8000AAA4;
    // 0x8000AAA0: nop

L_8000AAA4:
    // 0x8000AAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000AAA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000AAAC: jr          $ra
    // 0x8000AAB0: nop

    return;
    // 0x8000AAB0: nop

;}
RECOMP_FUNC void alSeqpSetVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800346A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800346A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800346A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800346AC: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x800346B0: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800346B4: sh          $t7, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r15;
    // 0x800346B8: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x800346BC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800346C0: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x800346C4: jal         0x8003E80C
    // 0x800346C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x800346C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800346CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800346D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800346D4: jr          $ra
    // 0x800346D8: nop

    return;
    // 0x800346D8: nop

;}
RECOMP_FUNC void DecompressFile(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EA68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001EA6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001EA70: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001EA74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001EA78: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001EA7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001EA80: lw          $t6, 0x76D4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X76D4);
    // 0x8001EA84: nop

    // 0x8001EA88: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8001EA8C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8001EA90: nop

    // 0x8001EA94: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8001EA98: beq         $t8, $zero, L_8001EAC0
    if (ctx->r24 == 0) {
        // 0x8001EA9C: nop
    
            goto L_8001EAC0;
    }
    // 0x8001EA9C: nop

    // 0x8001EAA0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8001EAA4: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8001EAA8: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x8001EAAC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8001EAB0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8001EAB4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8001EAB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EABC: sw          $t2, 0x76D4($at)
    MEM_W(0X76D4, ctx->r1) = ctx->r10;
L_8001EAC0:
    // 0x8001EAC0: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8001EAC4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EAC8: nop

    // 0x8001EACC: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8001EAD0: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8001EAD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001EAD8: jal         0x8002FC34
    // 0x8001EADC: nop

    malloc_game(rdram, ctx);
        goto after_0;
    // 0x8001EADC: nop

    after_0:
    // 0x8001EAE0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8001EAE4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EAE8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8001EAEC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8001EAF0: jal         0x8000068C
    // 0x8001EAF4: nop

    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x8001EAF4: nop

    after_1:
    // 0x8001EAF8: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001EAFC: lw          $a1, 0x76D4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X76D4);
    // 0x8001EB00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001EB04: jal         0x80014BA0
    // 0x8001EB08: nop

    Decode(rdram, ctx);
        goto after_2;
    // 0x8001EB08: nop

    after_2:
    // 0x8001EB0C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8001EB10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001EB14: jal         0x800309D0
    // 0x8001EB18: nop

    free_game(rdram, ctx);
        goto after_3;
    // 0x8001EB18: nop

    after_3:
    // 0x8001EB1C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8001EB20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001EB24: lw          $t6, 0x76D4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X76D4);
    // 0x8001EB28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EB2C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8001EB30: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001EB34: sw          $t6, -0x3560($at)
    MEM_W(-0X3560, ctx->r1) = ctx->r14;
    // 0x8001EB38: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001EB3C: lw          $t9, 0x76D4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X76D4);
    // 0x8001EB40: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001EB44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EB48: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8001EB4C: sw          $t1, 0x76D4($at)
    MEM_W(0X76D4, ctx->r1) = ctx->r9;
    // 0x8001EB50: b           L_8001EB58
    // 0x8001EB54: nop

        goto L_8001EB58;
    // 0x8001EB54: nop

L_8001EB58:
    // 0x8001EB58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001EB5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001EB60: jr          $ra
    // 0x8001EB64: nop

    return;
    // 0x8001EB64: nop

;}
RECOMP_FUNC void Math_CalcAngle2D(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800155A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800155AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800155B0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x800155B4: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x800155B8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800155BC: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800155C0: jal         0x80014F50
    // 0x800155C4: nop

    Math_Atan2f(rdram, ctx);
        goto after_0;
    // 0x800155C4: nop

    after_0:
    // 0x800155C8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800155CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800155D0: nop

    // 0x800155D4: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x800155D8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x800155DC: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800155E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800155E4: nop

    // 0x800155E8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800155EC: nop

    // 0x800155F0: bc1f        L_80015610
    if (!c1cs) {
        // 0x800155F4: nop
    
            goto L_80015610;
    }
    // 0x800155F4: nop

    // 0x800155F8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800155FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80015600: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015604: nop

    // 0x80015608: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8001560C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
L_80015610:
    // 0x80015610: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015614: b           L_80015624
    // 0x80015618: nop

        goto L_80015624;
    // 0x80015618: nop

    // 0x8001561C: b           L_80015624
    // 0x80015620: nop

        goto L_80015624;
    // 0x80015620: nop

L_80015624:
    // 0x80015624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001562C: jr          $ra
    // 0x80015630: nop

    return;
    // 0x80015630: nop

;}
RECOMP_FUNC void func_80001120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001128: lui         $t6, 0x17
    ctx->r14 = S32(0X17 << 16);
    // 0x8000112C: lui         $t7, 0x17
    ctx->r15 = S32(0X17 << 16);
    // 0x80001130: addiu       $t7, $t7, 0x5420
    ctx->r15 = ADD32(ctx->r15, 0X5420);
    // 0x80001134: addiu       $t6, $t6, -0x29B0
    ctx->r14 = ADD32(ctx->r14, -0X29B0);
    // 0x80001138: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000113C: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001140: jal         0x8000068C
    // 0x80001144: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001144: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001148: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x8000114C: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x80001150: addiu       $t9, $t9, -0x66C0
    ctx->r25 = ADD32(ctx->r25, -0X66C0);
    // 0x80001154: addiu       $t8, $t8, -0x6F30
    ctx->r24 = ADD32(ctx->r24, -0X6F30);
    // 0x80001158: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x8000115C: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x80001160: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80001164: jal         0x8000068C
    // 0x80001168: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80001168: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x8000116C: b           L_80001174
    // 0x80001170: nop

        goto L_80001174;
    // 0x80001170: nop

L_80001174:
    // 0x80001174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000117C: jr          $ra
    // 0x80001180: nop

    return;
    // 0x80001180: nop

;}
RECOMP_FUNC void func_80002890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002890: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80002894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002898: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000289C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800028A0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800028A4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800028A8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800028AC: nop

    // 0x800028B0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x800028B4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800028B8: nop

    // 0x800028BC: lw          $t8, 0x268($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X268);
    // 0x800028C0: nop

    // 0x800028C4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800028C8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800028CC: nop

    // 0x800028D0: lw          $t0, 0x264($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X264);
    // 0x800028D4: nop

    // 0x800028D8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x800028DC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800028E0: nop

    // 0x800028E4: lw          $t2, 0x280($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X280);
    // 0x800028E8: nop

    // 0x800028EC: beq         $t2, $zero, L_800029C4
    if (ctx->r10 == 0) {
        // 0x800028F0: nop
    
            goto L_800029C4;
    }
    // 0x800028F0: nop

    // 0x800028F4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800028F8: nop

    // 0x800028FC: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x80002900: beq         $t4, $zero, L_800029C4
    if (ctx->r12 == 0) {
        // 0x80002904: nop
    
            goto L_800029C4;
    }
    // 0x80002904: nop

    // 0x80002908: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8000290C: nop

    // 0x80002910: beq         $t5, $zero, L_80002950
    if (ctx->r13 == 0) {
        // 0x80002914: nop
    
            goto L_80002950;
    }
    // 0x80002914: nop

    // 0x80002918: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8000291C: nop

    // 0x80002920: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x80002924: beq         $t7, $zero, L_80002950
    if (ctx->r15 == 0) {
        // 0x80002928: nop
    
            goto L_80002950;
    }
    // 0x80002928: nop

    // 0x8000292C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80002930: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80002934: nop

    // 0x80002938: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8000293C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80002940: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80002944: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80002948: b           L_800029BC
    // 0x8000294C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
        goto L_800029BC;
    // 0x8000294C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80002950:
    // 0x80002950: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80002954: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80002958: nop

    // 0x8000295C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80002960: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80002964: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80002968: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8000296C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80002970: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80002974: nop

    // 0x80002978: sw          $zero, 0x280($t6)
    MEM_W(0X280, ctx->r14) = 0;
    // 0x8000297C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80002980: nop

    // 0x80002984: lw          $t8, 0x264($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X264);
    // 0x80002988: nop

    // 0x8000298C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80002990: nop

    // 0x80002994: sw          $t9, 0x264($t7)
    MEM_W(0X264, ctx->r15) = ctx->r25;
    // 0x80002998: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8000299C: nop

    // 0x800029A0: lw          $t1, 0x264($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X264);
    // 0x800029A4: nop

    // 0x800029A8: bne         $t1, $zero, L_800029BC
    if (ctx->r9 != 0) {
        // 0x800029AC: nop
    
            goto L_800029BC;
    }
    // 0x800029AC: nop

    // 0x800029B0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800029B4: nop

    // 0x800029B8: sw          $zero, 0x26C($t2)
    MEM_W(0X26C, ctx->r10) = 0;
L_800029BC:
    // 0x800029BC: b           L_80002C78
    // 0x800029C0: nop

        goto L_80002C78;
    // 0x800029C0: nop

L_800029C4:
    // 0x800029C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800029C8: jal         0x800024F4
    // 0x800029CC: nop

    func_800024F4(rdram, ctx);
        goto after_0;
    // 0x800029CC: nop

    after_0:
    // 0x800029D0: beq         $v0, $zero, L_80002C78
    if (ctx->r2 == 0) {
        // 0x800029D4: nop
    
            goto L_80002C78;
    }
    // 0x800029D4: nop

    // 0x800029D8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800029DC: nop

    // 0x800029E0: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x800029E4: nop

    // 0x800029E8: andi        $t5, $t4, 0x7
    ctx->r13 = ctx->r12 & 0X7;
    // 0x800029EC: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800029F0: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x800029F4: beq         $at, $zero, L_80002C70
    if (ctx->r1 == 0) {
        // 0x800029F8: nop
    
            goto L_80002C70;
    }
    // 0x800029F8: nop

    // 0x800029FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80002A00: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002A04: addu        $at, $at, $t6
    gpr jr_addend_80002A10 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80002A08: lw          $t6, -0x4560($at)
    ctx->r14 = ADD32(ctx->r1, -0X4560);
    // 0x80002A0C: nop

    // 0x80002A10: jr          $t6
    // 0x80002A14: nop

    switch (jr_addend_80002A10 >> 2) {
        case 0: goto L_80002C70; break;
        case 1: goto L_80002B80; break;
        case 2: goto L_80002A18; break;
        case 3: goto L_80002C70; break;
        case 4: goto L_80002C70; break;
        case 5: goto L_80002B80; break;
        case 6: goto L_80002B80; break;
        default: switch_error(__func__, 0x80002A10, 0x8004BAA0);
    }
    // 0x80002A14: nop

L_80002A18:
    // 0x80002A18: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80002A1C: nop

    // 0x80002A20: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80002A24: nop

    // 0x80002A28: andi        $t7, $t9, 0x20
    ctx->r15 = ctx->r25 & 0X20;
    // 0x80002A2C: beq         $t7, $zero, L_80002AF4
    if (ctx->r15 == 0) {
        // 0x80002A30: nop
    
            goto L_80002AF4;
    }
    // 0x80002A30: nop

    // 0x80002A34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80002A38: nop

    // 0x80002A3C: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x80002A40: beq         $t1, $zero, L_80002AEC
    if (ctx->r9 == 0) {
        // 0x80002A44: nop
    
            goto L_80002AEC;
    }
    // 0x80002A44: nop

    // 0x80002A48: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80002A4C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80002A50: nop

    // 0x80002A54: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80002A58: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80002A5C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80002A60: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80002A64: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80002A68: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80002A6C: nop

    // 0x80002A70: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x80002A74: nop

    // 0x80002A78: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80002A7C: beq         $t9, $zero, L_80002AAC
    if (ctx->r25 == 0) {
        // 0x80002A80: nop
    
            goto L_80002AAC;
    }
    // 0x80002A80: nop

    // 0x80002A84: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80002A88: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80002A8C: nop

    // 0x80002A90: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80002A94: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80002A98: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80002A9C: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x80002AA0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80002AA4: b           L_80002AAC
    // 0x80002AA8: nop

        goto L_80002AAC;
    // 0x80002AA8: nop

L_80002AAC:
    // 0x80002AAC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80002AB0: nop

    // 0x80002AB4: lw          $t4, 0x268($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X268);
    // 0x80002AB8: nop

    // 0x80002ABC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80002AC0: nop

    // 0x80002AC4: sw          $t5, 0x268($t3)
    MEM_W(0X268, ctx->r11) = ctx->r13;
    // 0x80002AC8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80002ACC: nop

    // 0x80002AD0: lw          $t8, 0x268($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X268);
    // 0x80002AD4: nop

    // 0x80002AD8: bne         $t8, $zero, L_80002AEC
    if (ctx->r24 != 0) {
        // 0x80002ADC: nop
    
            goto L_80002AEC;
    }
    // 0x80002ADC: nop

    // 0x80002AE0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80002AE4: nop

    // 0x80002AE8: sw          $zero, 0x270($t9)
    MEM_W(0X270, ctx->r25) = 0;
L_80002AEC:
    // 0x80002AEC: b           L_80002B78
    // 0x80002AF0: nop

        goto L_80002B78;
    // 0x80002AF0: nop

L_80002AF4:
    // 0x80002AF4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80002AF8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80002AFC: bne         $t7, $at, L_80002B78
    if (ctx->r15 != ctx->r1) {
        // 0x80002B00: nop
    
            goto L_80002B78;
    }
    // 0x80002B00: nop

    // 0x80002B04: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80002B08: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80002B0C: nop

    // 0x80002B10: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80002B14: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80002B18: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80002B1C: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80002B20: nop

    // 0x80002B24: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80002B28: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80002B2C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80002B30: and         $t6, $t3, $at
    ctx->r14 = ctx->r11 & ctx->r1;
    // 0x80002B34: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80002B38: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80002B3C: nop

    // 0x80002B40: lw          $t9, 0x268($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X268);
    // 0x80002B44: nop

    // 0x80002B48: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80002B4C: nop

    // 0x80002B50: sw          $t7, 0x268($t8)
    MEM_W(0X268, ctx->r24) = ctx->r15;
    // 0x80002B54: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80002B58: nop

    // 0x80002B5C: lw          $t1, 0x268($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X268);
    // 0x80002B60: nop

    // 0x80002B64: bne         $t1, $zero, L_80002B78
    if (ctx->r9 != 0) {
        // 0x80002B68: nop
    
            goto L_80002B78;
    }
    // 0x80002B68: nop

    // 0x80002B6C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80002B70: nop

    // 0x80002B74: sw          $zero, 0x270($t2)
    MEM_W(0X270, ctx->r10) = 0;
L_80002B78:
    // 0x80002B78: b           L_80002C78
    // 0x80002B7C: nop

        goto L_80002C78;
    // 0x80002B7C: nop

L_80002B80:
    // 0x80002B80: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80002B84: nop

    // 0x80002B88: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80002B8C: nop

    // 0x80002B90: andi        $t3, $t5, 0x2
    ctx->r11 = ctx->r13 & 0X2;
    // 0x80002B94: beq         $t3, $zero, L_80002BD8
    if (ctx->r11 == 0) {
        // 0x80002B98: nop
    
            goto L_80002BD8;
    }
    // 0x80002B98: nop

    // 0x80002B9C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80002BA0: nop

    // 0x80002BA4: andi        $t9, $t6, 0x2
    ctx->r25 = ctx->r14 & 0X2;
    // 0x80002BA8: beq         $t9, $zero, L_80002BD0
    if (ctx->r25 == 0) {
        // 0x80002BAC: nop
    
            goto L_80002BD0;
    }
    // 0x80002BAC: nop

    // 0x80002BB0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80002BB4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80002BB8: nop

    // 0x80002BBC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80002BC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80002BC4: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80002BC8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80002BCC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80002BD0:
    // 0x80002BD0: b           L_80002C68
    // 0x80002BD4: nop

        goto L_80002C68;
    // 0x80002BD4: nop

L_80002BD8:
    // 0x80002BD8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80002BDC: nop

    // 0x80002BE0: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x80002BE4: nop

    // 0x80002BE8: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80002BEC: beq         $t5, $zero, L_80002C68
    if (ctx->r13 == 0) {
        // 0x80002BF0: nop
    
            goto L_80002C68;
    }
    // 0x80002BF0: nop

    // 0x80002BF4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80002BF8: nop

    // 0x80002BFC: andi        $t6, $t3, 0x1
    ctx->r14 = ctx->r11 & 0X1;
    // 0x80002C00: beq         $t6, $zero, L_80002C68
    if (ctx->r14 == 0) {
        // 0x80002C04: nop
    
            goto L_80002C68;
    }
    // 0x80002C04: nop

    // 0x80002C08: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80002C0C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80002C10: nop

    // 0x80002C14: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x80002C18: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80002C1C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80002C20: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x80002C24: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80002C28: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80002C2C: nop

    // 0x80002C30: lw          $t2, 0x268($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X268);
    // 0x80002C34: nop

    // 0x80002C38: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80002C3C: nop

    // 0x80002C40: sw          $t4, 0x268($t1)
    MEM_W(0X268, ctx->r9) = ctx->r12;
    // 0x80002C44: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80002C48: nop

    // 0x80002C4C: lw          $t3, 0x268($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X268);
    // 0x80002C50: nop

    // 0x80002C54: bne         $t3, $zero, L_80002C68
    if (ctx->r11 != 0) {
        // 0x80002C58: nop
    
            goto L_80002C68;
    }
    // 0x80002C58: nop

    // 0x80002C5C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80002C60: nop

    // 0x80002C64: sw          $zero, 0x270($t6)
    MEM_W(0X270, ctx->r14) = 0;
L_80002C68:
    // 0x80002C68: b           L_80002C78
    // 0x80002C6C: nop

        goto L_80002C78;
    // 0x80002C6C: nop

L_80002C70:
    // 0x80002C70: b           L_80002C78
    // 0x80002C74: nop

        goto L_80002C78;
    // 0x80002C74: nop

L_80002C78:
    // 0x80002C78: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80002C7C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80002C80: nop

    // 0x80002C84: beq         $t9, $t7, L_80002CA8
    if (ctx->r25 == ctx->r15) {
        // 0x80002C88: nop
    
            goto L_80002CA8;
    }
    // 0x80002C88: nop

    // 0x80002C8C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80002C90: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80002C94: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80002C98: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80002C9C: jal         0x80002890
    // 0x80002CA0: nop

    func_80002890(rdram, ctx);
        goto after_1;
    // 0x80002CA0: nop

    after_1:
    // 0x80002CA4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80002CA8:
    // 0x80002CA8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80002CAC: b           L_80002CBC
    // 0x80002CB0: nop

        goto L_80002CBC;
    // 0x80002CB0: nop

    // 0x80002CB4: b           L_80002CBC
    // 0x80002CB8: nop

        goto L_80002CBC;
    // 0x80002CB8: nop

L_80002CBC:
    // 0x80002CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002CC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80002CC4: jr          $ra
    // 0x80002CC8: nop

    return;
    // 0x80002CC8: nop

;}
RECOMP_FUNC void func_800261BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800261BC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800261C0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800261C4: lbu         $v0, 0x5118($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5118);
    // 0x800261C8: nop

    // 0x800261CC: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x800261D0: jr          $ra
    // 0x800261D4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x800261D4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800261D8: jr          $ra
    // 0x800261DC: nop

    return;
    // 0x800261DC: nop

    // 0x800261E0: jr          $ra
    // 0x800261E4: nop

    return;
    // 0x800261E4: nop

;}
RECOMP_FUNC void func_8000A8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A8B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000A8B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000A8BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000A8C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000A8C4: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000A8C8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000A8CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000A8D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000A8D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000A8D8: lw          $t8, 0x2D84($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D84);
    // 0x8000A8DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000A8E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000A8E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000A8E8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8000A8EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A8F0: nop

    // 0x8000A8F4: lh          $t1, 0x1A($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X1A);
    // 0x8000A8F8: nop

    // 0x8000A8FC: sh          $t1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r9;
    // 0x8000A900: lh          $t2, 0x18($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X18);
    // 0x8000A904: nop

    // 0x8000A908: blez        $t2, L_8000A99C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8000A90C: nop
    
            goto L_8000A99C;
    }
    // 0x8000A90C: nop

L_8000A910:
    // 0x8000A910: lh          $t3, 0x18($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X18);
    // 0x8000A914: nop

    // 0x8000A918: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8000A91C: sh          $t4, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r12;
    // 0x8000A920: lh          $t6, 0x18($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X18);
    // 0x8000A924: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A928: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8000A92C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8000A930: lh          $t9, 0x14($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X14);
    // 0x8000A934: nop

    // 0x8000A938: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
    // 0x8000A93C: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x8000A940: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000A944: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000A948: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8000A94C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000A950: lw          $t0, 0x2D84($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D84);
    // 0x8000A954: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8000A958: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000A95C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8000A960: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x8000A964: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000A968: nop

    // 0x8000A96C: beq         $t4, $t6, L_8000A97C
    if (ctx->r12 == ctx->r14) {
        // 0x8000A970: nop
    
            goto L_8000A97C;
    }
    // 0x8000A970: nop

    // 0x8000A974: b           L_8000A98C
    // 0x8000A978: nop

        goto L_8000A98C;
    // 0x8000A978: nop

L_8000A97C:
    // 0x8000A97C: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8000A980: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x8000A984: jal         0x8000C7D4
    // 0x8000A988: nop

    func_8000C7D4(rdram, ctx);
        goto after_0;
    // 0x8000A988: nop

    after_0:
L_8000A98C:
    // 0x8000A98C: lh          $t5, 0x18($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X18);
    // 0x8000A990: nop

    // 0x8000A994: bgtz        $t5, L_8000A910
    if (SIGNED(ctx->r13) > 0) {
        // 0x8000A998: nop
    
            goto L_8000A910;
    }
    // 0x8000A998: nop

L_8000A99C:
    // 0x8000A99C: b           L_8000A9A4
    // 0x8000A9A0: nop

        goto L_8000A9A4;
    // 0x8000A9A0: nop

L_8000A9A4:
    // 0x8000A9A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000A9A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000A9AC: jr          $ra
    // 0x8000A9B0: nop

    return;
    // 0x8000A9B0: nop

;}
RECOMP_FUNC void func_8001DCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DCD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DCD8: sb          $a0, 0x7708($at)
    MEM_B(0X7708, ctx->r1) = ctx->r4;
    // 0x8001DCDC: jr          $ra
    // 0x8001DCE0: nop

    return;
    // 0x8001DCE0: nop

    // 0x8001DCE4: jr          $ra
    // 0x8001DCE8: nop

    return;
    // 0x8001DCE8: nop

;}
RECOMP_FUNC void func_80029018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029018: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002901C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80029020: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80029024: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80029028: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8002902C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80029030: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80029034: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80029038: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8002903C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80029040: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029044: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80029048: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002904C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80029050: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80029054: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80029058: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8002905C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80029060: nop

    // 0x80029064: sltiu       $at, $t0, 0x6
    ctx->r1 = ctx->r8 < 0X6 ? 1 : 0;
    // 0x80029068: beq         $at, $zero, L_8002930C
    if (ctx->r1 == 0) {
        // 0x8002906C: nop
    
            goto L_8002930C;
    }
    // 0x8002906C: nop

    // 0x80029070: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80029074: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80029078: addu        $at, $at, $t0
    gpr jr_addend_80029084 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8002907C: lw          $t0, -0x4220($at)
    ctx->r8 = ADD32(ctx->r1, -0X4220);
    // 0x80029080: nop

    // 0x80029084: jr          $t0
    // 0x80029088: nop

    switch (jr_addend_80029084 >> 2) {
        case 0: goto L_8002908C; break;
        case 1: goto L_80029140; break;
        case 2: goto L_80029184; break;
        case 3: goto L_8002923C; break;
        case 4: goto L_80029284; break;
        case 5: goto L_800292CC; break;
        default: switch_error(__func__, 0x80029084, 0x8004BDE0);
    }
    // 0x80029088: nop

L_8002908C:
    // 0x8002908C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80029090: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80029094: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80029098: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8002909C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800290A0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800290A4: jal         0x80028260
    // 0x800290A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80028260(rdram, ctx);
        goto after_0;
    // 0x800290A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800290AC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800290B0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800290B4: nop

    // 0x800290B8: beq         $t1, $zero, L_800290CC
    if (ctx->r9 == 0) {
        // 0x800290BC: nop
    
            goto L_800290CC;
    }
    // 0x800290BC: nop

    // 0x800290C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800290C4: b           L_80029138
    // 0x800290C8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
        goto L_80029138;
    // 0x800290C8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_800290CC:
    // 0x800290CC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800290D0: nop

    // 0x800290D4: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800290D8: lwc1        $f8, 0x24($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X24);
    // 0x800290DC: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800290E0: lwc1        $f4, 0x2C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800290E4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800290E8: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800290EC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800290F0: lwc1        $f16, 0x28($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800290F4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800290F8: jal         0x80067748
    // 0x800290FC: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    func_80067748(rdram, ctx);
        goto after_1;
    // 0x800290FC: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    after_1:
    // 0x80029100: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80029104: addiu       $t4, $t4, 0x76F0
    ctx->r12 = ADD32(ctx->r12, 0X76F0);
    // 0x80029108: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8002910C: nop

    // 0x80029110: bne         $t5, $zero, L_80029130
    if (ctx->r13 != 0) {
        // 0x80029114: nop
    
            goto L_80029130;
    }
    // 0x80029114: nop

    // 0x80029118: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002911C: addiu       $t6, $t6, 0x7710
    ctx->r14 = ADD32(ctx->r14, 0X7710);
    // 0x80029120: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80029124: nop

    // 0x80029128: beq         $t7, $zero, L_80029138
    if (ctx->r15 == 0) {
        // 0x8002912C: nop
    
            goto L_80029138;
    }
    // 0x8002912C: nop

L_80029130:
    // 0x80029130: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80029134: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80029138:
    // 0x80029138: b           L_80029314
    // 0x8002913C: nop

        goto L_80029314;
    // 0x8002913C: nop

L_80029140:
    // 0x80029140: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80029144: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80029148: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8002914C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80029150: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80029154: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80029158: jal         0x80028260
    // 0x8002915C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80028260(rdram, ctx);
        goto after_2;
    // 0x8002915C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80029160: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80029164: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80029168: nop

    // 0x8002916C: beq         $t9, $zero, L_8002917C
    if (ctx->r25 == 0) {
        // 0x80029170: nop
    
            goto L_8002917C;
    }
    // 0x80029170: nop

    // 0x80029174: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80029178: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8002917C:
    // 0x8002917C: b           L_80029314
    // 0x80029180: nop

        goto L_80029314;
    // 0x80029180: nop

L_80029184:
    // 0x80029184: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80029188: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8002918C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80029190: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80029194: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80029198: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8002919C: jal         0x80028260
    // 0x800291A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80028260(rdram, ctx);
        goto after_3;
    // 0x800291A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x800291A4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800291A8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800291AC: nop

    // 0x800291B0: andi        $t2, $t1, 0x7
    ctx->r10 = ctx->r9 & 0X7;
    // 0x800291B4: beq         $t2, $zero, L_800291C8
    if (ctx->r10 == 0) {
        // 0x800291B8: nop
    
            goto L_800291C8;
    }
    // 0x800291B8: nop

    // 0x800291BC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800291C0: b           L_80029234
    // 0x800291C4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
        goto L_80029234;
    // 0x800291C4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_800291C8:
    // 0x800291C8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800291CC: nop

    // 0x800291D0: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800291D4: lwc1        $f18, 0x24($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X24);
    // 0x800291D8: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x800291DC: lwc1        $f10, 0x2C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800291E0: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800291E4: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800291E8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800291EC: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800291F0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800291F4: jal         0x80067748
    // 0x800291F8: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_80067748(rdram, ctx);
        goto after_4;
    // 0x800291F8: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_4:
    // 0x800291FC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80029200: addiu       $t5, $t5, 0x76F0
    ctx->r13 = ADD32(ctx->r13, 0X76F0);
    // 0x80029204: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80029208: nop

    // 0x8002920C: bne         $t6, $zero, L_8002922C
    if (ctx->r14 != 0) {
        // 0x80029210: nop
    
            goto L_8002922C;
    }
    // 0x80029210: nop

    // 0x80029214: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80029218: addiu       $t7, $t7, 0x7710
    ctx->r15 = ADD32(ctx->r15, 0X7710);
    // 0x8002921C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80029220: nop

    // 0x80029224: beq         $t8, $zero, L_80029234
    if (ctx->r24 == 0) {
        // 0x80029228: nop
    
            goto L_80029234;
    }
    // 0x80029228: nop

L_8002922C:
    // 0x8002922C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80029230: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80029234:
    // 0x80029234: b           L_80029314
    // 0x80029238: nop

        goto L_80029314;
    // 0x80029238: nop

L_8002923C:
    // 0x8002923C: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80029240: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80029244: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80029248: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8002924C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80029250: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80029254: jal         0x80028260
    // 0x80029258: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80028260(rdram, ctx);
        goto after_5;
    // 0x80029258: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x8002925C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80029260: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80029264: nop

    // 0x80029268: andi        $t1, $t0, 0x7
    ctx->r9 = ctx->r8 & 0X7;
    // 0x8002926C: beq         $t1, $zero, L_8002927C
    if (ctx->r9 == 0) {
        // 0x80029270: nop
    
            goto L_8002927C;
    }
    // 0x80029270: nop

    // 0x80029274: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80029278: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_8002927C:
    // 0x8002927C: b           L_80029314
    // 0x80029280: nop

        goto L_80029314;
    // 0x80029280: nop

L_80029284:
    // 0x80029284: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80029288: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8002928C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80029290: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80029294: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80029298: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8002929C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800292A0: jal         0x80028260
    // 0x800292A4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80028260(rdram, ctx);
        goto after_6;
    // 0x800292A4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x800292A8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800292AC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800292B0: nop

    // 0x800292B4: beq         $t4, $zero, L_800292C4
    if (ctx->r12 == 0) {
        // 0x800292B8: nop
    
            goto L_800292C4;
    }
    // 0x800292B8: nop

    // 0x800292BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800292C0: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_800292C4:
    // 0x800292C4: b           L_80029314
    // 0x800292C8: nop

        goto L_80029314;
    // 0x800292C8: nop

L_800292CC:
    // 0x800292CC: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800292D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800292D4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800292D8: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800292DC: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800292E0: jal         0x8002894C
    // 0x800292E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8002894C(rdram, ctx);
        goto after_7;
    // 0x800292E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x800292E8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800292EC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800292F0: nop

    // 0x800292F4: beq         $t6, $zero, L_80029304
    if (ctx->r14 == 0) {
        // 0x800292F8: nop
    
            goto L_80029304;
    }
    // 0x800292F8: nop

    // 0x800292FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80029300: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80029304:
    // 0x80029304: b           L_80029314
    // 0x80029308: nop

        goto L_80029314;
    // 0x80029308: nop

L_8002930C:
    // 0x8002930C: b           L_80029314
    // 0x80029310: nop

        goto L_80029314;
    // 0x80029310: nop

L_80029314:
    // 0x80029314: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80029318: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002931C: sh          $t8, 0x51A0($at)
    MEM_H(0X51A0, ctx->r1) = ctx->r24;
    // 0x80029320: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80029324: jal         0x80028E60
    // 0x80029328: nop

    func_80028E60(rdram, ctx);
        goto after_8;
    // 0x80029328: nop

    after_8:
    // 0x8002932C: beq         $v0, $zero, L_80029350
    if (ctx->r2 == 0) {
        // 0x80029330: nop
    
            goto L_80029350;
    }
    // 0x80029330: nop

    // 0x80029334: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80029338: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8002933C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80029340: lh          $t0, 0x51A0($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X51A0);
    // 0x80029344: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80029348: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x8002934C: sh          $t1, 0x51A0($at)
    MEM_H(0X51A0, ctx->r1) = ctx->r9;
L_80029350:
    // 0x80029350: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80029354: nop

    // 0x80029358: bne         $t2, $zero, L_80029368
    if (ctx->r10 != 0) {
        // 0x8002935C: nop
    
            goto L_80029368;
    }
    // 0x8002935C: nop

    // 0x80029360: b           L_800293A8
    // 0x80029364: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800293A8;
    // 0x80029364: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029368:
    // 0x80029368: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002936C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80029370: nop

    // 0x80029374: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
    // 0x80029378: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002937C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80029380: nop

    // 0x80029384: swc1        $f10, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f10.u32l;
    // 0x80029388: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002938C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80029390: nop

    // 0x80029394: swc1        $f16, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f16.u32l;
    // 0x80029398: b           L_800293A8
    // 0x8002939C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800293A8;
    // 0x8002939C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800293A0: b           L_800293A8
    // 0x800293A4: nop

        goto L_800293A8;
    // 0x800293A4: nop

L_800293A8:
    // 0x800293A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800293AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800293B0: jr          $ra
    // 0x800293B4: nop

    return;
    // 0x800293B4: nop

;}
RECOMP_FUNC void alSynDelete(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F170: jr          $ra
    // 0x8003F174: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x8003F174: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800100E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800100E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800100EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800100F0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800100F4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800100F8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800100FC: lw          $t6, 0x5D4C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5D4C);
    // 0x80010100: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80010104: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80010108: sw          $t7, 0x5D4C($at)
    MEM_W(0X5D4C, ctx->r1) = ctx->r15;
    // 0x8001010C: jal         0x8002FC34
    // 0x80010110: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    malloc_game(rdram, ctx);
        goto after_0;
    // 0x80010110: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_0:
    // 0x80010114: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80010118: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8001011C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80010120: nop

    // 0x80010124: sw          $t8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r24;
    // 0x80010128: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8001012C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80010130: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80010134: lw          $t0, 0x5D50($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5D50);
    // 0x80010138: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8001013C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80010140: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80010144: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80010148: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8001014C: nop

    // 0x80010150: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80010154: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80010158: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8001015C: nop

    // 0x80010160: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80010164: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80010168: jal         0x8000FF44
    // 0x8001016C: nop

    func_8000FF44(rdram, ctx);
        goto after_1;
    // 0x8001016C: nop

    after_1:
    // 0x80010170: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80010174: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80010178: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8001017C: lw          $t8, 0x5D50($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5D50);
    // 0x80010180: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x80010184: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80010188: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x8001018C: lw          $t2, 0x2C($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X2C);
    // 0x80010190: nop

    // 0x80010194: beq         $t2, $zero, L_80010314
    if (ctx->r10 == 0) {
        // 0x80010198: nop
    
            goto L_80010314;
    }
    // 0x80010198: nop

    // 0x8001019C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800101A0: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x800101A4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800101A8: lw          $t3, 0x5D50($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5D50);
    // 0x800101AC: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800101B0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800101B4: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x800101B8: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x800101BC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800101C0: addu        $t9, $t7, $t4
    ctx->r25 = ADD32(ctx->r15, ctx->r12);
    // 0x800101C4: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800101C8: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x800101CC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800101D0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800101D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800101D8: addu        $t0, $t3, $t1
    ctx->r8 = ADD32(ctx->r11, ctx->r9);
    // 0x800101DC: lw          $t2, 0x28($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X28);
    // 0x800101E0: nop

    // 0x800101E4: beq         $t2, $zero, L_80010240
    if (ctx->r10 == 0) {
        // 0x800101E8: nop
    
            goto L_80010240;
    }
    // 0x800101E8: nop

L_800101EC:
    // 0x800101EC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800101F0: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800101F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800101F8: lw          $t5, 0x5D50($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5D50);
    // 0x800101FC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80010200: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80010204: addu        $t4, $t5, $t7
    ctx->r12 = ADD32(ctx->r13, ctx->r15);
    // 0x80010208: lw          $t8, 0x28($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X28);
    // 0x8001020C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80010210: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80010214: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80010218: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8001021C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80010220: addiu       $t1, $t3, 0x1
    ctx->r9 = ADD32(ctx->r11, 0X1);
    // 0x80010224: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80010228: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8001022C: addu        $t2, $t5, $t0
    ctx->r10 = ADD32(ctx->r13, ctx->r8);
    // 0x80010230: lw          $t7, 0x28($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X28);
    // 0x80010234: nop

    // 0x80010238: bne         $t7, $zero, L_800101EC
    if (ctx->r15 != 0) {
        // 0x8001023C: nop
    
            goto L_800101EC;
    }
    // 0x8001023C: nop

L_80010240:
    // 0x80010240: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80010244: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80010248: nop

    // 0x8001024C: sw          $t4, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r12;
    // 0x80010250: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80010254: nop

    // 0x80010258: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8001025C: jal         0x8002FC34
    // 0x80010260: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    malloc_game(rdram, ctx);
        goto after_2;
    // 0x80010260: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x80010264: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80010268: nop

    // 0x8001026C: sw          $v0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r2;
    // 0x80010270: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80010274: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80010278: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x8001027C: lw          $t1, 0x5D50($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5D50);
    // 0x80010280: subu        $t5, $t5, $t9
    ctx->r13 = SUB32(ctx->r13, ctx->r25);
    // 0x80010284: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80010288: addu        $t0, $t1, $t5
    ctx->r8 = ADD32(ctx->r9, ctx->r13);
    // 0x8001028C: lw          $t2, 0x2C($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X2C);
    // 0x80010290: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80010294: addu        $t7, $t2, $t9
    ctx->r15 = ADD32(ctx->r10, ctx->r25);
    // 0x80010298: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8001029C: blez        $t4, L_8001030C
    if (SIGNED(ctx->r12) <= 0) {
        // 0x800102A0: sw          $zero, 0x20($sp)
        MEM_W(0X20, ctx->r29) = 0;
            goto L_8001030C;
    }
    // 0x800102A0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_800102A4:
    // 0x800102A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800102A8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800102AC: jal         0x800100E8
    // 0x800102B0: nop

    func_800100E8(rdram, ctx);
        goto after_3;
    // 0x800102B0: nop

    after_3:
    // 0x800102B4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800102B8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800102BC: lw          $t8, 0xC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC);
    // 0x800102C0: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x800102C4: addu        $t5, $t8, $t1
    ctx->r13 = ADD32(ctx->r24, ctx->r9);
    // 0x800102C8: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x800102CC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800102D0: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800102D4: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x800102D8: lw          $t0, 0x5D50($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5D50);
    // 0x800102DC: subu        $t9, $t9, $t2
    ctx->r25 = SUB32(ctx->r25, ctx->r10);
    // 0x800102E0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800102E4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800102E8: addu        $t7, $t0, $t9
    ctx->r15 = ADD32(ctx->r8, ctx->r25);
    // 0x800102EC: lw          $t4, 0x28($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X28);
    // 0x800102F0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800102F4: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x800102F8: addu        $t6, $t2, $t4
    ctx->r14 = ADD32(ctx->r10, ctx->r12);
    // 0x800102FC: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80010300: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80010304: bne         $at, $zero, L_800102A4
    if (ctx->r1 != 0) {
        // 0x80010308: sw          $t8, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r24;
            goto L_800102A4;
    }
    // 0x80010308: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
L_8001030C:
    // 0x8001030C: b           L_8001032C
    // 0x80010310: nop

        goto L_8001032C;
    // 0x80010310: nop

L_80010314:
    // 0x80010314: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80010318: nop

    // 0x8001031C: sw          $zero, 0x10($t5)
    MEM_W(0X10, ctx->r13) = 0;
    // 0x80010320: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80010324: nop

    // 0x80010328: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
L_8001032C:
    // 0x8001032C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80010330: b           L_80010340
    // 0x80010334: nop

        goto L_80010340;
    // 0x80010334: nop

    // 0x80010338: b           L_80010340
    // 0x8001033C: nop

        goto L_80010340;
    // 0x8001033C: nop

L_80010340:
    // 0x80010340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80010348: jr          $ra
    // 0x8001034C: nop

    return;
    // 0x8001034C: nop

;}
RECOMP_FUNC void alSynAllocFX(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003FA10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003FA14: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x8003FA18: sra         $t6, $t0, 16
    ctx->r14 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8003FA1C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003FA20: sll         $s1, $t6, 2
    ctx->r17 = S32(ctx->r14 << 2);
    // 0x8003FA24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003FA28: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003FA2C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003FA30: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
    // 0x8003FA34: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x8003FA38: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x8003FA3C: subu        $s1, $s1, $t6
    ctx->r17 = SUB32(ctx->r17, ctx->r14);
    // 0x8003FA40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8003FA44: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x8003FA48: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8003FA4C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    // 0x8003FA50: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x8003FA54: jal         0x8003F5D0
    // 0x8003FA58: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    alFxNew(rdram, ctx);
        goto after_0;
    // 0x8003FA58: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x8003FA5C: lw          $t8, 0x34($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X34);
    // 0x8003FA60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003FA64: addu        $a2, $t8, $s1
    ctx->r6 = ADD32(ctx->r24, ctx->r17);
    // 0x8003FA68: jal         0x80046D14
    // 0x8003FA6C: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    alFxParam(rdram, ctx);
        goto after_1;
    // 0x8003FA6C: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    after_1:
    // 0x8003FA70: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x8003FA74: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x8003FA78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8003FA7C: addu        $a2, $t9, $s1
    ctx->r6 = ADD32(ctx->r25, ctx->r17);
    // 0x8003FA80: jal         0x8003FAB0
    // 0x8003FA84: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    alMainBusParam(rdram, ctx);
        goto after_2;
    // 0x8003FA84: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    after_2:
    // 0x8003FA88: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x8003FA8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003FA90: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003FA94: addu        $v0, $t2, $s1
    ctx->r2 = ADD32(ctx->r10, ctx->r17);
    // 0x8003FA98: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003FA9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003FAA0: jr          $ra
    // 0x8003FAA4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    return;
    // 0x8003FAA4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
;}
RECOMP_FUNC void func_80010098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001009C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800100A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800100A4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800100A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800100AC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800100B0: nop

    // 0x800100B4: bne         $t7, $at, L_800100D0
    if (ctx->r15 != ctx->r1) {
        // 0x800100B8: nop
    
            goto L_800100D0;
    }
    // 0x800100B8: nop

    // 0x800100BC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800100C0: nop

    // 0x800100C4: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    // 0x800100C8: jal         0x8001000C
    // 0x800100CC: nop

    func_8001000C(rdram, ctx);
        goto after_0;
    // 0x800100CC: nop

    after_0:
L_800100D0:
    // 0x800100D0: b           L_800100D8
    // 0x800100D4: nop

        goto L_800100D8;
    // 0x800100D4: nop

L_800100D8:
    // 0x800100D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800100DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800100E0: jr          $ra
    // 0x800100E4: nop

    return;
    // 0x800100E4: nop

;}
RECOMP_FUNC void func_80004240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004240: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80004244: lw          $t6, -0x5CC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CC0);
    // 0x80004248: nop

    // 0x8000424C: bne         $t6, $zero, L_8000425C
    if (ctx->r14 != 0) {
        // 0x80004250: nop
    
            goto L_8000425C;
    }
    // 0x80004250: nop

    // 0x80004254: jr          $ra
    // 0x80004258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80004258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000425C:
    // 0x8000425C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80004260: lw          $t7, 0x2EB0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2EB0);
    // 0x80004264: nop

    // 0x80004268: lh          $v0, 0x2($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X2);
    // 0x8000426C: jr          $ra
    // 0x80004270: nop

    return;
    // 0x80004270: nop

    // 0x80004274: jr          $ra
    // 0x80004278: nop

    return;
    // 0x80004278: nop

    // 0x8000427C: jr          $ra
    // 0x80004280: nop

    return;
    // 0x80004280: nop

;}
RECOMP_FUNC void func_8001EFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EFD0: sll         $t7, $a1, 5
    ctx->r15 = S32(ctx->r5 << 5);
    // 0x8001EFD4: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8001EFD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001EFDC: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8001EFE0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8001EFE4: sw          $t6, 0x68($t8)
    MEM_W(0X68, ctx->r24) = ctx->r14;
    // 0x8001EFE8: sll         $t0, $a1, 5
    ctx->r8 = S32(ctx->r5 << 5);
    // 0x8001EFEC: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x8001EFF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8001EFF4: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x8001EFF8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8001EFFC: sw          $t9, 0x6C($t1)
    MEM_W(0X6C, ctx->r9) = ctx->r25;
    // 0x8001F000: sll         $t3, $a1, 5
    ctx->r11 = S32(ctx->r5 << 5);
    // 0x8001F004: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x8001F008: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001F00C: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8001F010: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8001F014: sw          $t2, 0x70($t4)
    MEM_W(0X70, ctx->r12) = ctx->r10;
    // 0x8001F018: sll         $t7, $a1, 5
    ctx->r15 = S32(ctx->r5 << 5);
    // 0x8001F01C: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8001F020: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001F024: addu        $t6, $a0, $t7
    ctx->r14 = ADD32(ctx->r4, ctx->r15);
    // 0x8001F028: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8001F02C: sw          $t5, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->r13;
    // 0x8001F030: sll         $t0, $a1, 5
    ctx->r8 = S32(ctx->r5 << 5);
    // 0x8001F034: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x8001F038: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8001F03C: addu        $t9, $a0, $t0
    ctx->r25 = ADD32(ctx->r4, ctx->r8);
    // 0x8001F040: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8001F044: sw          $t8, 0x7C($t9)
    MEM_W(0X7C, ctx->r25) = ctx->r24;
    // 0x8001F048: sll         $t3, $a1, 5
    ctx->r11 = S32(ctx->r5 << 5);
    // 0x8001F04C: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x8001F050: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001F054: addu        $t2, $a0, $t3
    ctx->r10 = ADD32(ctx->r4, ctx->r11);
    // 0x8001F058: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8001F05C: sw          $t1, 0x80($t2)
    MEM_W(0X80, ctx->r10) = ctx->r9;
    // 0x8001F060: sll         $t7, $a1, 5
    ctx->r15 = S32(ctx->r5 << 5);
    // 0x8001F064: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8001F068: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001F06C: addu        $t5, $a0, $t7
    ctx->r13 = ADD32(ctx->r4, ctx->r15);
    // 0x8001F070: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8001F074: sw          $t4, 0x74($t5)
    MEM_W(0X74, ctx->r13) = ctx->r12;
    // 0x8001F078: jr          $ra
    // 0x8001F07C: nop

    return;
    // 0x8001F07C: nop

    // 0x8001F080: jr          $ra
    // 0x8001F084: nop

    return;
    // 0x8001F084: nop

;}
RECOMP_FUNC void updateOsc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004EE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80004EE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80004EE8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80004EEC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80004EF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80004EF4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80004EF8: nop

    // 0x80004EFC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80004F00: addiu       $t7, $zero, 0x3E80
    ctx->r15 = ADD32(0, 0X3E80);
    // 0x80004F04: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80004F08: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80004F0C: nop

    // 0x80004F10: lbu         $s0, 0x4($t8)
    ctx->r16 = MEM_BU(ctx->r24, 0X4);
    // 0x80004F14: nop

    // 0x80004F18: slti        $at, $s0, 0x81
    ctx->r1 = SIGNED(ctx->r16) < 0X81 ? 1 : 0;
    // 0x80004F1C: bne         $at, $zero, L_80004F5C
    if (ctx->r1 != 0) {
        // 0x80004F20: nop
    
            goto L_80004F5C;
    }
    // 0x80004F20: nop

    // 0x80004F24: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x80004F28: beq         $s0, $at, L_800054F8
    if (ctx->r16 == ctx->r1) {
        // 0x80004F2C: nop
    
            goto L_800054F8;
    }
    // 0x80004F2C: nop

    // 0x80004F30: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x80004F34: beq         $s0, $at, L_80005578
    if (ctx->r16 == ctx->r1) {
        // 0x80004F38: nop
    
            goto L_80005578;
    }
    // 0x80004F38: nop

    // 0x80004F3C: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x80004F40: beq         $s0, $at, L_800056A0
    if (ctx->r16 == ctx->r1) {
        // 0x80004F44: nop
    
            goto L_800056A0;
    }
    // 0x80004F44: nop

    // 0x80004F48: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x80004F4C: beq         $s0, $at, L_800057C8
    if (ctx->r16 == ctx->r1) {
        // 0x80004F50: nop
    
            goto L_800057C8;
    }
    // 0x80004F50: nop

    // 0x80004F54: b           L_80005A34
    // 0x80004F58: nop

        goto L_80005A34;
    // 0x80004F58: nop

L_80004F5C:
    // 0x80004F5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80004F60: beq         $s0, $at, L_80004FA0
    if (ctx->r16 == ctx->r1) {
        // 0x80004F64: nop
    
            goto L_80004FA0;
    }
    // 0x80004F64: nop

    // 0x80004F68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80004F6C: beq         $s0, $at, L_800050E4
    if (ctx->r16 == ctx->r1) {
        // 0x80004F70: nop
    
            goto L_800050E4;
    }
    // 0x80004F70: nop

    // 0x80004F74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80004F78: beq         $s0, $at, L_800051B0
    if (ctx->r16 == ctx->r1) {
        // 0x80004F7C: nop
    
            goto L_800051B0;
    }
    // 0x80004F7C: nop

    // 0x80004F80: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80004F84: beq         $s0, $at, L_800052C8
    if (ctx->r16 == ctx->r1) {
        // 0x80004F88: nop
    
            goto L_800052C8;
    }
    // 0x80004F88: nop

    // 0x80004F8C: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80004F90: beq         $s0, $at, L_800053E0
    if (ctx->r16 == ctx->r1) {
        // 0x80004F94: nop
    
            goto L_800053E0;
    }
    // 0x80004F94: nop

    // 0x80004F98: b           L_80005A34
    // 0x80004F9C: nop

        goto L_80005A34;
    // 0x80004F9C: nop

L_80004FA0:
    // 0x80004FA0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80004FA4: nop

    // 0x80004FA8: lhu         $t0, 0x8($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X8);
    // 0x80004FAC: nop

    // 0x80004FB0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80004FB4: sh          $t1, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r9;
    // 0x80004FB8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80004FBC: nop

    // 0x80004FC0: lhu         $t3, 0x8($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X8);
    // 0x80004FC4: lhu         $t4, 0x6($t2)
    ctx->r12 = MEM_HU(ctx->r10, 0X6);
    // 0x80004FC8: nop

    // 0x80004FCC: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80004FD0: bne         $at, $zero, L_80004FE4
    if (ctx->r1 != 0) {
        // 0x80004FD4: nop
    
            goto L_80004FE4;
    }
    // 0x80004FD4: nop

    // 0x80004FD8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80004FDC: nop

    // 0x80004FE0: sh          $zero, 0x8($t5)
    MEM_H(0X8, ctx->r13) = 0;
L_80004FE4:
    // 0x80004FE4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80004FE8: nop

    // 0x80004FEC: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x80004FF0: nop

    // 0x80004FF4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80004FF8: bgez        $t7, L_80005010
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80004FFC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80005010;
    }
    // 0x80004FFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80005000: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005004: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80005008: nop

    // 0x8000500C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80005010:
    // 0x80005010: lhu         $t8, 0x6($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X6);
    // 0x80005014: nop

    // 0x80005018: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8000501C: bgez        $t8, L_80005034
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80005020: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80005034;
    }
    // 0x80005020: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80005024: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005028: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000502C: nop

    // 0x80005030: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80005034:
    // 0x80005034: nop

    // 0x80005038: div.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8000503C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80005040: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005044: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005048: lwc1        $f19, -0x4538($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4538);
    // 0x8000504C: lwc1        $f18, -0x4534($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4534);
    // 0x80005050: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80005054: mul.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80005058: jal         0x80034970
    // 0x8000505C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8000505C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_0:
    // 0x80005060: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80005064: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80005068: nop

    // 0x8000506C: lbu         $t1, 0xC($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XC);
    // 0x80005070: nop

    // 0x80005074: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80005078: bgez        $t1, L_80005090
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8000507C: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80005090;
    }
    // 0x8000507C: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005080: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005084: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80005088: nop

    // 0x8000508C: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_80005090:
    // 0x80005090: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005094: nop

    // 0x80005098: mul.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8000509C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x800050A0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800050A4: nop

    // 0x800050A8: lbu         $t2, 0xD($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0XD);
    // 0x800050AC: nop

    // 0x800050B0: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800050B4: bgez        $t2, L_800050CC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800050B8: cvt.s.w     $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800050CC;
    }
    // 0x800050B8: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800050BC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800050C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800050C4: nop

    // 0x800050C8: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_800050CC:
    // 0x800050CC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800050D0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800050D4: add.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800050D8: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
    // 0x800050DC: b           L_80005A34
    // 0x800050E0: nop

        goto L_80005A34;
    // 0x800050E0: nop

L_800050E4:
    // 0x800050E4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800050E8: nop

    // 0x800050EC: lbu         $t5, 0x5($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X5);
    // 0x800050F0: nop

    // 0x800050F4: bne         $t5, $zero, L_80005144
    if (ctx->r13 != 0) {
        // 0x800050F8: nop
    
            goto L_80005144;
    }
    // 0x800050F8: nop

    // 0x800050FC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80005100: nop

    // 0x80005104: lbu         $t6, 0xE($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0XE);
    // 0x80005108: nop

    // 0x8000510C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80005110: bgez        $t6, L_80005128
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80005114: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80005128;
    }
    // 0x80005114: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80005118: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000511C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80005120: nop

    // 0x80005124: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80005128:
    // 0x80005128: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8000512C: nop

    // 0x80005130: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
    // 0x80005134: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80005138: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8000513C: b           L_80005188
    // 0x80005140: sb          $t0, 0x5($t1)
    MEM_B(0X5, ctx->r9) = ctx->r8;
        goto L_80005188;
    // 0x80005140: sb          $t0, 0x5($t1)
    MEM_B(0X5, ctx->r9) = ctx->r8;
L_80005144:
    // 0x80005144: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80005148: nop

    // 0x8000514C: lbu         $t2, 0xD($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0XD);
    // 0x80005150: nop

    // 0x80005154: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80005158: bgez        $t2, L_80005170
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8000515C: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80005170;
    }
    // 0x8000515C: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005160: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005164: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80005168: nop

    // 0x8000516C: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_80005170:
    // 0x80005170: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80005174: nop

    // 0x80005178: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x8000517C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80005180: nop

    // 0x80005184: sb          $zero, 0x5($t4)
    MEM_B(0X5, ctx->r12) = 0;
L_80005188:
    // 0x80005188: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8000518C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80005190: lhu         $t6, 0x6($t7)
    ctx->r14 = MEM_HU(ctx->r15, 0X6);
    // 0x80005194: nop

    // 0x80005198: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000519C: mflo        $t8
    ctx->r24 = lo;
    // 0x800051A0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800051A4: nop

    // 0x800051A8: b           L_80005A34
    // 0x800051AC: nop

        goto L_80005A34;
    // 0x800051AC: nop

L_800051B0:
    // 0x800051B0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800051B4: nop

    // 0x800051B8: lhu         $t1, 0x8($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X8);
    // 0x800051BC: nop

    // 0x800051C0: addiu       $t9, $t1, 0x1
    ctx->r25 = ADD32(ctx->r9, 0X1);
    // 0x800051C4: sh          $t9, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r25;
    // 0x800051C8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800051CC: nop

    // 0x800051D0: lhu         $t3, 0x8($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X8);
    // 0x800051D4: lhu         $t4, 0x6($t2)
    ctx->r12 = MEM_HU(ctx->r10, 0X6);
    // 0x800051D8: nop

    // 0x800051DC: slt         $at, $t4, $t3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800051E0: beq         $at, $zero, L_800051F4
    if (ctx->r1 == 0) {
        // 0x800051E4: nop
    
            goto L_800051F4;
    }
    // 0x800051E4: nop

    // 0x800051E8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800051EC: nop

    // 0x800051F0: sh          $zero, 0x8($t7)
    MEM_H(0X8, ctx->r15) = 0;
L_800051F4:
    // 0x800051F4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800051F8: nop

    // 0x800051FC: lhu         $t6, 0x8($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X8);
    // 0x80005200: nop

    // 0x80005204: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80005208: bgez        $t6, L_80005220
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8000520C: cvt.s.w     $f8, $f18
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80005220;
    }
    // 0x8000520C: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80005210: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005214: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80005218: nop

    // 0x8000521C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80005220:
    // 0x80005220: lhu         $t8, 0x6($t5)
    ctx->r24 = MEM_HU(ctx->r13, 0X6);
    // 0x80005224: nop

    // 0x80005228: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8000522C: bgez        $t8, L_80005244
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80005230: cvt.s.w     $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80005244;
    }
    // 0x80005230: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005234: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005238: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000523C: nop

    // 0x80005240: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_80005244:
    // 0x80005244: nop

    // 0x80005248: div.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000524C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80005250: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80005254: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005258: lbu         $t9, 0xD($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0XD);
    // 0x8000525C: nop

    // 0x80005260: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80005264: bgez        $t9, L_8000527C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80005268: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8000527C;
    }
    // 0x80005268: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8000526C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005270: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80005274: nop

    // 0x80005278: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_8000527C:
    // 0x8000527C: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80005280: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80005284: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80005288: nop

    // 0x8000528C: lbu         $t2, 0xC($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0XC);
    // 0x80005290: nop

    // 0x80005294: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x80005298: bgez        $t2, L_800052B0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8000529C: cvt.s.w     $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
            goto L_800052B0;
    }
    // 0x8000529C: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800052A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800052A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800052A8: nop

    // 0x800052AC: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_800052B0:
    // 0x800052B0: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800052B4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800052B8: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x800052BC: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x800052C0: b           L_80005A34
    // 0x800052C4: nop

        goto L_80005A34;
    // 0x800052C4: nop

L_800052C8:
    // 0x800052C8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800052CC: nop

    // 0x800052D0: lhu         $t7, 0x8($t4)
    ctx->r15 = MEM_HU(ctx->r12, 0X8);
    // 0x800052D4: nop

    // 0x800052D8: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x800052DC: sh          $t6, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r14;
    // 0x800052E0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800052E4: nop

    // 0x800052E8: lhu         $t8, 0x8($t5)
    ctx->r24 = MEM_HU(ctx->r13, 0X8);
    // 0x800052EC: lhu         $t1, 0x6($t5)
    ctx->r9 = MEM_HU(ctx->r13, 0X6);
    // 0x800052F0: nop

    // 0x800052F4: slt         $at, $t1, $t8
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800052F8: beq         $at, $zero, L_8000530C
    if (ctx->r1 == 0) {
        // 0x800052FC: nop
    
            goto L_8000530C;
    }
    // 0x800052FC: nop

    // 0x80005300: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80005304: nop

    // 0x80005308: sh          $zero, 0x8($t9)
    MEM_H(0X8, ctx->r25) = 0;
L_8000530C:
    // 0x8000530C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80005310: nop

    // 0x80005314: lhu         $t2, 0x8($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X8);
    // 0x80005318: nop

    // 0x8000531C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80005320: bgez        $t2, L_80005338
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80005324: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80005338;
    }
    // 0x80005324: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80005328: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000532C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80005330: nop

    // 0x80005334: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_80005338:
    // 0x80005338: lhu         $t3, 0x6($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X6);
    // 0x8000533C: nop

    // 0x80005340: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80005344: bgez        $t3, L_8000535C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80005348: cvt.s.w     $f6, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8000535C;
    }
    // 0x80005348: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8000534C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005350: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80005354: nop

    // 0x80005358: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_8000535C:
    // 0x8000535C: nop

    // 0x80005360: div.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80005364: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80005368: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8000536C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005370: lbu         $t6, 0xD($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0XD);
    // 0x80005374: nop

    // 0x80005378: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8000537C: bgez        $t6, L_80005394
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80005380: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80005394;
    }
    // 0x80005380: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005384: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005388: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000538C: nop

    // 0x80005390: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_80005394:
    // 0x80005394: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80005398: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8000539C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800053A0: nop

    // 0x800053A4: lbu         $t5, 0xC($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XC);
    // 0x800053A8: nop

    // 0x800053AC: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x800053B0: bgez        $t5, L_800053C8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800053B4: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800053C8;
    }
    // 0x800053B4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800053B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800053BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800053C0: nop

    // 0x800053C4: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_800053C8:
    // 0x800053C8: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800053CC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800053D0: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x800053D4: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x800053D8: b           L_80005A34
    // 0x800053DC: nop

        goto L_80005A34;
    // 0x800053DC: nop

L_800053E0:
    // 0x800053E0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800053E4: nop

    // 0x800053E8: lhu         $t9, 0x8($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X8);
    // 0x800053EC: nop

    // 0x800053F0: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x800053F4: sh          $t2, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r10;
    // 0x800053F8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800053FC: nop

    // 0x80005400: lhu         $t3, 0x8($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X8);
    // 0x80005404: lhu         $t7, 0x6($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X6);
    // 0x80005408: nop

    // 0x8000540C: slt         $at, $t3, $t7
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80005410: bne         $at, $zero, L_80005424
    if (ctx->r1 != 0) {
        // 0x80005414: nop
    
            goto L_80005424;
    }
    // 0x80005414: nop

    // 0x80005418: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8000541C: nop

    // 0x80005420: sh          $zero, 0x8($t6)
    MEM_H(0X8, ctx->r14) = 0;
L_80005424:
    // 0x80005424: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80005428: nop

    // 0x8000542C: lhu         $t5, 0x8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8);
    // 0x80005430: nop

    // 0x80005434: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x80005438: bgez        $t5, L_80005450
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8000543C: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80005450;
    }
    // 0x8000543C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80005440: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005444: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80005448: nop

    // 0x8000544C: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_80005450:
    // 0x80005450: lhu         $t8, 0x6($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0X6);
    // 0x80005454: nop

    // 0x80005458: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8000545C: bgez        $t8, L_80005474
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80005460: cvt.s.w     $f8, $f16
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80005474;
    }
    // 0x80005460: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005464: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005468: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000546C: nop

    // 0x80005470: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_80005474:
    // 0x80005474: nop

    // 0x80005478: div.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000547C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80005480: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005484: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005488: lwc1        $f5, -0x4530($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4530);
    // 0x8000548C: lwc1        $f4, -0x452C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X452C);
    // 0x80005490: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x80005494: mul.d       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x80005498: jal         0x80034970
    // 0x8000549C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x8000549C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x800054A0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800054A4: nop

    // 0x800054A8: lwc1        $f8, 0xC($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800054AC: nop

    // 0x800054B0: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800054B4: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x800054B8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800054BC: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800054C0: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800054C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800054C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800054CC: nop

    // 0x800054D0: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800054D4: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x800054D8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800054DC: jal         0x80034920
    // 0x800054E0: nop

    alCents2Ratio(rdram, ctx);
        goto after_2;
    // 0x800054E0: nop

    after_2:
    // 0x800054E4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800054E8: nop

    // 0x800054EC: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x800054F0: b           L_80005A34
    // 0x800054F4: nop

        goto L_80005A34;
    // 0x800054F4: nop

L_800054F8:
    // 0x800054F8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800054FC: nop

    // 0x80005500: lbu         $t3, 0x5($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X5);
    // 0x80005504: nop

    // 0x80005508: bne         $t3, $zero, L_80005530
    if (ctx->r11 != 0) {
        // 0x8000550C: nop
    
            goto L_80005530;
    }
    // 0x8000550C: nop

    // 0x80005510: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80005514: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80005518: sb          $t7, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r15;
    // 0x8000551C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80005520: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80005524: lwc1        $f4, 0xC($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XC);
    // 0x80005528: b           L_80005550
    // 0x8000552C: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
        goto L_80005550;
    // 0x8000552C: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
L_80005530:
    // 0x80005530: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80005534: nop

    // 0x80005538: sb          $zero, 0x5($t8)
    MEM_B(0X5, ctx->r24) = 0;
    // 0x8000553C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80005540: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80005544: lwc1        $f10, 0x10($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X10);
    // 0x80005548: nop

    // 0x8000554C: swc1        $f10, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f10.u32l;
L_80005550:
    // 0x80005550: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80005554: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80005558: lhu         $t3, 0x6($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X6);
    // 0x8000555C: nop

    // 0x80005560: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80005564: mflo        $t7
    ctx->r15 = lo;
    // 0x80005568: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8000556C: nop

    // 0x80005570: b           L_80005A34
    // 0x80005574: nop

        goto L_80005A34;
    // 0x80005574: nop

L_80005578:
    // 0x80005578: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8000557C: nop

    // 0x80005580: lhu         $t5, 0x8($t6)
    ctx->r13 = MEM_HU(ctx->r14, 0X8);
    // 0x80005584: nop

    // 0x80005588: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x8000558C: sh          $t4, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r12;
    // 0x80005590: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80005594: nop

    // 0x80005598: lhu         $t9, 0x8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8);
    // 0x8000559C: lhu         $t2, 0x6($t8)
    ctx->r10 = MEM_HU(ctx->r24, 0X6);
    // 0x800055A0: nop

    // 0x800055A4: slt         $at, $t2, $t9
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800055A8: beq         $at, $zero, L_800055BC
    if (ctx->r1 == 0) {
        // 0x800055AC: nop
    
            goto L_800055BC;
    }
    // 0x800055AC: nop

    // 0x800055B0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800055B4: nop

    // 0x800055B8: sh          $zero, 0x8($t0)
    MEM_H(0X8, ctx->r8) = 0;
L_800055BC:
    // 0x800055BC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800055C0: nop

    // 0x800055C4: lhu         $t3, 0x8($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X8);
    // 0x800055C8: nop

    // 0x800055CC: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800055D0: bgez        $t3, L_800055E8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800055D4: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_800055E8;
    }
    // 0x800055D4: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800055D8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800055DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800055E0: nop

    // 0x800055E4: add.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f18.fl;
L_800055E8:
    // 0x800055E8: lhu         $t7, 0x6($t1)
    ctx->r15 = MEM_HU(ctx->r9, 0X6);
    // 0x800055EC: nop

    // 0x800055F0: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800055F4: bgez        $t7, L_8000560C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800055F8: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8000560C;
    }
    // 0x800055F8: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800055FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005600: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80005604: nop

    // 0x80005608: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_8000560C:
    // 0x8000560C: nop

    // 0x80005610: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80005614: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80005618: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8000561C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005620: lw          $t4, 0x10($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X10);
    // 0x80005624: nop

    // 0x80005628: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8000562C: nop

    // 0x80005630: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005634: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80005638: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8000563C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80005640: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005644: lw          $t8, 0xC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC);
    // 0x80005648: nop

    // 0x8000564C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80005650: nop

    // 0x80005654: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80005658: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8000565C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80005660: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80005664: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005668: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000566C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80005670: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80005674: nop

    // 0x80005678: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000567C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80005680: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80005684: jal         0x80034920
    // 0x80005688: nop

    alCents2Ratio(rdram, ctx);
        goto after_3;
    // 0x80005688: nop

    after_3:
    // 0x8000568C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80005690: nop

    // 0x80005694: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x80005698: b           L_80005A34
    // 0x8000569C: nop

        goto L_80005A34;
    // 0x8000569C: nop

L_800056A0:
    // 0x800056A0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800056A4: nop

    // 0x800056A8: lhu         $t3, 0x8($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X8);
    // 0x800056AC: nop

    // 0x800056B0: addiu       $t1, $t3, 0x1
    ctx->r9 = ADD32(ctx->r11, 0X1);
    // 0x800056B4: sh          $t1, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r9;
    // 0x800056B8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800056BC: nop

    // 0x800056C0: lhu         $t5, 0x8($t7)
    ctx->r13 = MEM_HU(ctx->r15, 0X8);
    // 0x800056C4: lhu         $t4, 0x6($t7)
    ctx->r12 = MEM_HU(ctx->r15, 0X6);
    // 0x800056C8: nop

    // 0x800056CC: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800056D0: beq         $at, $zero, L_800056E4
    if (ctx->r1 == 0) {
        // 0x800056D4: nop
    
            goto L_800056E4;
    }
    // 0x800056D4: nop

    // 0x800056D8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800056DC: nop

    // 0x800056E0: sh          $zero, 0x8($t6)
    MEM_H(0X8, ctx->r14) = 0;
L_800056E4:
    // 0x800056E4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800056E8: nop

    // 0x800056EC: lhu         $t9, 0x8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8);
    // 0x800056F0: nop

    // 0x800056F4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800056F8: bgez        $t9, L_80005710
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800056FC: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80005710;
    }
    // 0x800056FC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80005700: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005704: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80005708: nop

    // 0x8000570C: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
L_80005710:
    // 0x80005710: lhu         $t2, 0x6($t8)
    ctx->r10 = MEM_HU(ctx->r24, 0X6);
    // 0x80005714: nop

    // 0x80005718: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8000571C: bgez        $t2, L_80005734
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80005720: cvt.s.w     $f10, $f18
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80005734;
    }
    // 0x80005720: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80005724: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005728: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000572C: nop

    // 0x80005730: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_80005734:
    // 0x80005734: nop

    // 0x80005738: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000573C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80005740: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80005744: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005748: lw          $t1, 0x10($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X10);
    // 0x8000574C: nop

    // 0x80005750: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80005754: nop

    // 0x80005758: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8000575C: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x80005760: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80005764: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80005768: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000576C: lw          $t7, 0xC($t0)
    ctx->r15 = MEM_W(ctx->r8, 0XC);
    // 0x80005770: nop

    // 0x80005774: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80005778: nop

    // 0x8000577C: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80005780: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80005784: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80005788: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000578C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005790: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80005794: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80005798: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000579C: nop

    // 0x800057A0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800057A4: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x800057A8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800057AC: jal         0x80034920
    // 0x800057B0: nop

    alCents2Ratio(rdram, ctx);
        goto after_4;
    // 0x800057B0: nop

    after_4:
    // 0x800057B4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800057B8: nop

    // 0x800057BC: swc1        $f0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f0.u32l;
    // 0x800057C0: b           L_80005A34
    // 0x800057C4: nop

        goto L_80005A34;
    // 0x800057C4: nop

L_800057C8:
    // 0x800057C8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800057CC: nop

    // 0x800057D0: lhu         $t9, 0x8($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X8);
    // 0x800057D4: nop

    // 0x800057D8: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x800057DC: sh          $t8, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r24;
    // 0x800057E0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800057E4: nop

    // 0x800057E8: lhu         $t3, 0x8($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X8);
    // 0x800057EC: lhu         $t1, 0x6($t2)
    ctx->r9 = MEM_HU(ctx->r10, 0X6);
    // 0x800057F0: nop

    // 0x800057F4: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800057F8: bne         $at, $zero, L_8000580C
    if (ctx->r1 != 0) {
        // 0x800057FC: nop
    
            goto L_8000580C;
    }
    // 0x800057FC: nop

    // 0x80005800: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80005804: nop

    // 0x80005808: sh          $zero, 0x8($t0)
    MEM_H(0X8, ctx->r8) = 0;
L_8000580C:
    // 0x8000580C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80005810: nop

    // 0x80005814: lbu         $t5, 0x5($t7)
    ctx->r13 = MEM_BU(ctx->r15, 0X5);
    // 0x80005818: nop

    // 0x8000581C: beq         $t5, $zero, L_80005960
    if (ctx->r13 == 0) {
        // 0x80005820: nop
    
            goto L_80005960;
    }
    // 0x80005820: nop

    // 0x80005824: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80005828: nop

    // 0x8000582C: lhu         $t9, 0x8($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X8);
    // 0x80005830: nop

    // 0x80005834: bne         $t9, $zero, L_8000589C
    if (ctx->r25 != 0) {
        // 0x80005838: nop
    
            goto L_8000589C;
    }
    // 0x80005838: nop

    // 0x8000583C: jal         0x80005A80
    // 0x80005840: addiu       $a0, $zero, 0x61
    ctx->r4 = ADD32(0, 0X61);
    _depth2Cents(rdram, ctx);
        goto after_5;
    // 0x80005840: addiu       $a0, $zero, 0x61
    ctx->r4 = ADD32(0, 0X61);
    after_5:
    // 0x80005844: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80005848: nop

    // 0x8000584C: swc1        $f0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f0.u32l;
    // 0x80005850: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80005854: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80005858: sh          $t6, 0x6($t2)
    MEM_H(0X6, ctx->r10) = ctx->r14;
    // 0x8000585C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80005860: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80005864: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80005868: nop

    // 0x8000586C: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x80005870: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80005874: nop

    // 0x80005878: lbu         $t0, 0x5($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X5);
    // 0x8000587C: nop

    // 0x80005880: sll         $t7, $t0, 14
    ctx->r15 = S32(ctx->r8 << 14);
    // 0x80005884: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80005888: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8000588C: nop

    // 0x80005890: sb          $zero, 0x5($t5)
    MEM_B(0X5, ctx->r13) = 0;
    // 0x80005894: b           L_80005A34
    // 0x80005898: nop

        goto L_80005A34;
    // 0x80005898: nop

L_8000589C:
    // 0x8000589C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800058A0: nop

    // 0x800058A4: lhu         $t9, 0x8($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X8);
    // 0x800058A8: nop

    // 0x800058AC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800058B0: bgez        $t9, L_800058C8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800058B4: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800058C8;
    }
    // 0x800058B4: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800058B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800058BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800058C0: nop

    // 0x800058C4: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_800058C8:
    // 0x800058C8: lhu         $t8, 0x6($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0X6);
    // 0x800058CC: nop

    // 0x800058D0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800058D4: bgez        $t8, L_800058EC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800058D8: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800058EC;
    }
    // 0x800058D8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800058DC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800058E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800058E4: nop

    // 0x800058E8: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_800058EC:
    // 0x800058EC: nop

    // 0x800058F0: div.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
    // 0x800058F4: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x800058F8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800058FC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005900: lwc1        $f6, 0xC($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XC);
    // 0x80005904: nop

    // 0x80005908: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8000590C: sub.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80005910: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80005914: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80005918: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000591C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80005920: nop

    // 0x80005924: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80005928: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8000592C: nop

    // 0x80005930: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80005934: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80005938: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000593C: nop

    // 0x80005940: cvt.w.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80005944: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80005948: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8000594C: jal         0x80034920
    // 0x80005950: nop

    alCents2Ratio(rdram, ctx);
        goto after_6;
    // 0x80005950: nop

    after_6:
    // 0x80005954: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80005958: b           L_80005A2C
    // 0x8000595C: swc1        $f0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f0.u32l;
        goto L_80005A2C;
    // 0x8000595C: swc1        $f0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f0.u32l;
L_80005960:
    // 0x80005960: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80005964: nop

    // 0x80005968: lhu         $t0, 0x8($t1)
    ctx->r8 = MEM_HU(ctx->r9, 0X8);
    // 0x8000596C: nop

    // 0x80005970: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80005974: bgez        $t0, L_8000598C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80005978: cvt.s.w     $f18, $f4
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8000598C;
    }
    // 0x80005978: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000597C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80005980: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80005984: nop

    // 0x80005988: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_8000598C:
    // 0x8000598C: lhu         $t7, 0x6($t1)
    ctx->r15 = MEM_HU(ctx->r9, 0X6);
    // 0x80005990: nop

    // 0x80005994: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80005998: bgez        $t7, L_800059B0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8000599C: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800059B0;
    }
    // 0x8000599C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800059A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800059A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800059A8: nop

    // 0x800059AC: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_800059B0:
    // 0x800059B0: nop

    // 0x800059B4: div.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f16.fl);
    // 0x800059B8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x800059BC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800059C0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800059C4: lwc1        $f7, -0x4528($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4528);
    // 0x800059C8: lwc1        $f6, -0x4524($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4524);
    // 0x800059CC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800059D0: mul.d       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x800059D4: jal         0x80034970
    // 0x800059D8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x800059D8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_7:
    // 0x800059DC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800059E0: nop

    // 0x800059E4: lwc1        $f16, 0xC($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0XC);
    // 0x800059E8: nop

    // 0x800059EC: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800059F0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x800059F4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800059F8: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800059FC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80005A00: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80005A04: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80005A08: nop

    // 0x80005A0C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80005A10: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80005A14: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80005A18: jal         0x80034920
    // 0x80005A1C: nop

    alCents2Ratio(rdram, ctx);
        goto after_8;
    // 0x80005A1C: nop

    after_8:
    // 0x80005A20: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80005A24: nop

    // 0x80005A28: swc1        $f0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f0.u32l;
L_80005A2C:
    // 0x80005A2C: b           L_80005A34
    // 0x80005A30: nop

        goto L_80005A34;
    // 0x80005A30: nop

L_80005A34:
    // 0x80005A34: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80005A38: b           L_80005A48
    // 0x80005A3C: nop

        goto L_80005A48;
    // 0x80005A3C: nop

    // 0x80005A40: b           L_80005A48
    // 0x80005A44: nop

        goto L_80005A48;
    // 0x80005A44: nop

L_80005A48:
    // 0x80005A48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80005A4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80005A50: jr          $ra
    // 0x80005A54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80005A54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alCSeqSetLoc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033C00: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80033C04: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80033C08: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80033C0C: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x80033C10: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80033C14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80033C18: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80033C1C: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x80033C20: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x80033C24: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80033C28: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x80033C2C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_80033C30:
    // 0x80033C30: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    // 0x80033C34: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80033C38: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80033C3C: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x80033C40: lw          $t1, 0x4C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4C);
    // 0x80033C44: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80033C48: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80033C4C: sw          $t1, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r9;
    // 0x80033C50: lbu         $t2, 0x8C($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X8C);
    // 0x80033C54: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80033C58: sb          $t2, 0x96($a3)
    MEM_B(0X96, ctx->r7) = ctx->r10;
    // 0x80033C5C: lbu         $t3, 0x9A($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X9A);
    // 0x80033C60: sb          $t3, 0xA6($a3)
    MEM_B(0XA6, ctx->r7) = ctx->r11;
    // 0x80033C64: lw          $t4, 0xA4($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XA4);
    // 0x80033C68: sw          $t4, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->r12;
    // 0x80033C6C: lw          $t5, 0x8($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X8);
    // 0x80033C70: sw          $t5, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r13;
    // 0x80033C74: lw          $t6, 0x48($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X48);
    // 0x80033C78: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
    // 0x80033C7C: lbu         $t7, 0x8B($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X8B);
    // 0x80033C80: sb          $t7, 0x97($a3)
    MEM_B(0X97, ctx->r7) = ctx->r15;
    // 0x80033C84: lbu         $t8, 0x9B($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X9B);
    // 0x80033C88: sb          $t8, 0xA7($a3)
    MEM_B(0XA7, ctx->r7) = ctx->r24;
    // 0x80033C8C: lw          $t9, 0xA8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XA8);
    // 0x80033C90: bne         $v0, $a0, L_80033C30
    if (ctx->r2 != ctx->r4) {
        // 0x80033C94: sw          $t9, 0xB4($v1)
        MEM_W(0XB4, ctx->r3) = ctx->r25;
            goto L_80033C30;
    }
    // 0x80033C94: sw          $t9, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r25;
    // 0x80033C98: jr          $ra
    // 0x80033C9C: nop

    return;
    // 0x80033C9C: nop

;}
RECOMP_FUNC void func_80017B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017B3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80017B40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017B44: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80017B48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80017B4C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80017B50: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80017B54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80017B58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80017B5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017B60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80017B64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80017B68: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80017B6C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80017B70: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80017B74: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80017B78: lh          $t1, 0x428C($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X428C);
    // 0x80017B7C: nop

    // 0x80017B80: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    // 0x80017B84: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80017B88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017B8C: beq         $t2, $at, L_80017BD4
    if (ctx->r10 == ctx->r1) {
        // 0x80017B90: nop
    
            goto L_80017BD4;
    }
    // 0x80017B90: nop

    // 0x80017B94: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80017B98: jal         0x8000B738
    // 0x80017B9C: nop

    func_8000B738(rdram, ctx);
        goto after_0;
    // 0x80017B9C: nop

    after_0:
    // 0x80017BA0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80017BA4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80017BA8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80017BAC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80017BB0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80017BB4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80017BB8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80017BBC: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80017BC0: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x80017BC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80017BC8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80017BCC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80017BD0: sh          $t3, 0x428C($at)
    MEM_H(0X428C, ctx->r1) = ctx->r11;
L_80017BD4:
    // 0x80017BD4: b           L_80017BDC
    // 0x80017BD8: nop

        goto L_80017BDC;
    // 0x80017BD8: nop

L_80017BDC:
    // 0x80017BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017BE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80017BE4: jr          $ra
    // 0x80017BE8: nop

    return;
    // 0x80017BE8: nop

;}
RECOMP_FUNC void UpdateControllers(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E560: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8001E564: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8001E568:
    // 0x8001E568: lhu         $t6, 0x6($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E56C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001E570: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8001E574: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001E578: lhu         $t8, -0x1D00($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1D00);
    // 0x8001E57C: nop

    // 0x8001E580: beq         $t8, $zero, L_8001E70C
    if (ctx->r24 == 0) {
        // 0x8001E584: nop
    
            goto L_8001E70C;
    }
    // 0x8001E584: nop

    // 0x8001E588: lhu         $t9, 0x6($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E58C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001E590: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8001E594: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001E598: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8001E59C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001E5A0: lhu         $t1, -0x1CF0($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1CF0);
    // 0x8001E5A4: lhu         $t2, -0x1CE0($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1CE0);
    // 0x8001E5A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E5AC: xor         $t3, $t1, $t2
    ctx->r11 = ctx->r9 ^ ctx->r10;
    // 0x8001E5B0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001E5B4: and         $t4, $t1, $t3
    ctx->r12 = ctx->r9 & ctx->r11;
    // 0x8001E5B8: sh          $t4, -0x1CD0($at)
    MEM_H(-0X1CD0, ctx->r1) = ctx->r12;
    // 0x8001E5BC: lhu         $t5, 0x6($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E5C0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001E5C4: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8001E5C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001E5CC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8001E5D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001E5D4: lhu         $t7, -0x1CB0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1CB0);
    // 0x8001E5D8: lhu         $t8, -0x1CA0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1CA0);
    // 0x8001E5DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E5E0: xor         $t9, $t7, $t8
    ctx->r25 = ctx->r15 ^ ctx->r24;
    // 0x8001E5E4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001E5E8: and         $t2, $t7, $t9
    ctx->r10 = ctx->r15 & ctx->r25;
    // 0x8001E5EC: sh          $t2, -0x1C90($at)
    MEM_H(-0X1C90, ctx->r1) = ctx->r10;
    // 0x8001E5F0: lhu         $t1, 0x6($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E5F4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001E5F8: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x8001E5FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001E600: lhu         $t4, -0x1D00($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1D00);
    // 0x8001E604: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E608: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001E60C: sh          $t4, -0x1D80($at)
    MEM_H(-0X1D80, ctx->r1) = ctx->r12;
    // 0x8001E610: lhu         $t0, 0x6($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E614: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001E618: sll         $t5, $t0, 1
    ctx->r13 = S32(ctx->r8 << 1);
    // 0x8001E61C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8001E620: lhu         $t8, -0x1CE0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1CE0);
    // 0x8001E624: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E628: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8001E62C: sh          $t8, -0x1D60($at)
    MEM_H(-0X1D60, ctx->r1) = ctx->r24;
    // 0x8001E630: lhu         $t7, 0x6($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E634: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001E638: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8001E63C: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x8001E640: lhu         $t2, -0x1CF0($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1CF0);
    // 0x8001E644: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E648: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001E64C: sh          $t2, -0x1D70($at)
    MEM_H(-0X1D70, ctx->r1) = ctx->r10;
    // 0x8001E650: lhu         $t6, 0x6($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E654: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001E658: sll         $t1, $t6, 1
    ctx->r9 = S32(ctx->r14 << 1);
    // 0x8001E65C: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8001E660: lhu         $t4, -0x1CD0($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1CD0);
    // 0x8001E664: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E668: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8001E66C: sh          $t4, -0x1D50($at)
    MEM_H(-0X1D50, ctx->r1) = ctx->r12;
    // 0x8001E670: lhu         $t3, 0x6($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E674: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001E678: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x8001E67C: lb          $t0, -0x1CC4($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1CC4);
    // 0x8001E680: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E684: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001E688: sb          $t0, -0x1D44($at)
    MEM_B(-0X1D44, ctx->r1) = ctx->r8;
    // 0x8001E68C: lhu         $t8, 0x6($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E690: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001E694: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8001E698: lb          $t5, -0x1CBC($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1CBC);
    // 0x8001E69C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E6A0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001E6A4: sb          $t5, -0x1D3C($at)
    MEM_B(-0X1D3C, ctx->r1) = ctx->r13;
    // 0x8001E6A8: lhu         $t7, 0x6($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E6AC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001E6B0: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x8001E6B4: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x8001E6B8: lhu         $t9, -0x1CA0($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1CA0);
    // 0x8001E6BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E6C0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001E6C4: sh          $t9, -0x1D20($at)
    MEM_H(-0X1D20, ctx->r1) = ctx->r25;
    // 0x8001E6C8: lhu         $t6, 0x6($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E6CC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001E6D0: sll         $t4, $t6, 1
    ctx->r12 = S32(ctx->r14 << 1);
    // 0x8001E6D4: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x8001E6D8: lhu         $t1, -0x1CB0($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1CB0);
    // 0x8001E6DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E6E0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8001E6E4: sh          $t1, -0x1D30($at)
    MEM_H(-0X1D30, ctx->r1) = ctx->r9;
    // 0x8001E6E8: lhu         $t0, 0x6($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E6EC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001E6F0: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x8001E6F4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8001E6F8: lhu         $t5, -0x1C90($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X1C90);
    // 0x8001E6FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E700: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001E704: b           L_8001E7E0
    // 0x8001E708: sh          $t5, -0x1D10($at)
    MEM_H(-0X1D10, ctx->r1) = ctx->r13;
        goto L_8001E7E0;
    // 0x8001E708: sh          $t5, -0x1D10($at)
    MEM_H(-0X1D10, ctx->r1) = ctx->r13;
L_8001E70C:
    // 0x8001E70C: lhu         $t8, 0x6($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E710: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E714: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x8001E718: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8001E71C: sh          $zero, -0x1CD0($at)
    MEM_H(-0X1CD0, ctx->r1) = 0;
    // 0x8001E720: lhu         $t9, 0x6($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E724: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E728: sll         $t2, $t9, 1
    ctx->r10 = S32(ctx->r25 << 1);
    // 0x8001E72C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001E730: sh          $zero, -0x1C90($at)
    MEM_H(-0X1C90, ctx->r1) = 0;
    // 0x8001E734: lhu         $t6, 0x6($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E738: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E73C: sll         $t1, $t6, 1
    ctx->r9 = S32(ctx->r14 << 1);
    // 0x8001E740: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8001E744: sh          $zero, -0x1D80($at)
    MEM_H(-0X1D80, ctx->r1) = 0;
    // 0x8001E748: lhu         $t4, 0x6($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E74C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E750: sll         $t0, $t4, 1
    ctx->r8 = S32(ctx->r12 << 1);
    // 0x8001E754: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001E758: sh          $zero, -0x1D60($at)
    MEM_H(-0X1D60, ctx->r1) = 0;
    // 0x8001E75C: lhu         $t5, 0x6($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E760: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E764: sll         $t3, $t5, 1
    ctx->r11 = S32(ctx->r13 << 1);
    // 0x8001E768: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001E76C: sh          $zero, -0x1D70($at)
    MEM_H(-0X1D70, ctx->r1) = 0;
    // 0x8001E770: lhu         $t8, 0x6($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E774: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E778: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x8001E77C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8001E780: sh          $zero, -0x1D50($at)
    MEM_H(-0X1D50, ctx->r1) = 0;
    // 0x8001E784: lhu         $t9, 0x6($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E788: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E78C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001E790: sb          $zero, -0x1D44($at)
    MEM_B(-0X1D44, ctx->r1) = 0;
    // 0x8001E794: lhu         $t2, 0x6($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E798: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E79C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001E7A0: sb          $zero, -0x1D3C($at)
    MEM_B(-0X1D3C, ctx->r1) = 0;
    // 0x8001E7A4: lhu         $t6, 0x6($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E7A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E7AC: sll         $t1, $t6, 1
    ctx->r9 = S32(ctx->r14 << 1);
    // 0x8001E7B0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8001E7B4: sh          $zero, -0x1D20($at)
    MEM_H(-0X1D20, ctx->r1) = 0;
    // 0x8001E7B8: lhu         $t4, 0x6($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E7BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E7C0: sll         $t0, $t4, 1
    ctx->r8 = S32(ctx->r12 << 1);
    // 0x8001E7C4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001E7C8: sh          $zero, -0x1D30($at)
    MEM_H(-0X1D30, ctx->r1) = 0;
    // 0x8001E7CC: lhu         $t5, 0x6($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E7D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E7D4: sll         $t3, $t5, 1
    ctx->r11 = S32(ctx->r13 << 1);
    // 0x8001E7D8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001E7DC: sh          $zero, -0x1D10($at)
    MEM_H(-0X1D10, ctx->r1) = 0;
L_8001E7E0:
    // 0x8001E7E0: lhu         $t8, 0x6($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6);
    // 0x8001E7E4: nop

    // 0x8001E7E8: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8001E7EC: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x8001E7F0: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8001E7F4: bne         $at, $zero, L_8001E568
    if (ctx->r1 != 0) {
        // 0x8001E7F8: sh          $t7, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r15;
            goto L_8001E568;
    }
    // 0x8001E7F8: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
    // 0x8001E7FC: b           L_8001E804
    // 0x8001E800: nop

        goto L_8001E804;
    // 0x8001E800: nop

L_8001E804:
    // 0x8001E804: jr          $ra
    // 0x8001E808: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8001E808: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80010E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010E0C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80010E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80010E14: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80010E18: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80010E1C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80010E20: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80010E24: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80010E28: jal         0x80010C88
    // 0x80010E2C: nop

    func_80010C88(rdram, ctx);
        goto after_0;
    // 0x80010E2C: nop

    after_0:
    // 0x80010E30: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80010E34: nop

    // 0x80010E38: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80010E3C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80010E40: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80010E44: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80010E48: lw          $t7, 0x5D54($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5D54);
    // 0x80010E4C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80010E50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80010E54: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80010E58: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80010E5C: nop

    // 0x80010E60: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80010E64: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80010E68: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80010E6C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80010E70: lw          $t2, 0x5D54($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5D54);
    // 0x80010E74: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80010E78: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80010E7C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80010E80: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x80010E84: nop

    // 0x80010E88: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80010E8C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80010E90: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80010E94: blez        $t8, L_8001106C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80010E98: nop
    
            goto L_8001106C;
    }
    // 0x80010E98: nop

L_80010E9C:
    // 0x80010E9C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80010EA0: nop

    // 0x80010EA4: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80010EA8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80010EAC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80010EB0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80010EB4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80010EB8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80010EBC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80010EC0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80010EC4: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80010EC8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80010ECC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80010ED0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80010ED4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80010ED8: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80010EDC: nop

    // 0x80010EE0: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x80010EE4: bne         $at, $zero, L_80010F44
    if (ctx->r1 != 0) {
        // 0x80010EE8: nop
    
            goto L_80010F44;
    }
    // 0x80010EE8: nop

L_80010EEC:
    // 0x80010EEC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80010EF0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80010EF4: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80010EF8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80010EFC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80010F00: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80010F04: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80010F08: lw          $t4, 0x8($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X8);
    // 0x80010F0C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80010F10: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x80010F14: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80010F18: nop

    // 0x80010F1C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80010F20: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80010F24: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80010F28: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80010F2C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80010F30: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80010F34: nop

    // 0x80010F38: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80010F3C: bne         $at, $zero, L_80010EEC
    if (ctx->r1 != 0) {
        // 0x80010F40: nop
    
            goto L_80010EEC;
    }
    // 0x80010F40: nop

L_80010F44:
    // 0x80010F44: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x80010F48: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80010F4C: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x80010F50: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80010F54: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80010F58: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x80010F5C: addiu       $t5, $t3, 0x18
    ctx->r13 = ADD32(ctx->r11, 0X18);
    // 0x80010F60: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80010F64: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80010F68: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80010F6C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80010F70: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x80010F74: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80010F78: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x80010F7C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80010F80: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x80010F84: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x80010F88: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80010F8C: nop

    // 0x80010F90: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80010F94: lw          $t4, 0xC($t0)
    ctx->r12 = MEM_W(ctx->r8, 0XC);
    // 0x80010F98: nop

    // 0x80010F9C: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x80010FA0: lw          $at, 0x10($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X10);
    // 0x80010FA4: nop

    // 0x80010FA8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80010FAC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80010FB0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80010FB4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80010FB8: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x80010FBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80010FC0: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x80010FC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80010FC8: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80010FCC: lw          $at, 0x14($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X14);
    // 0x80010FD0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80010FD4: nop

    // 0x80010FD8: sw          $at, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r1;
    // 0x80010FDC: lw          $t6, 0x18($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X18);
    // 0x80010FE0: nop

    // 0x80010FE4: sw          $t6, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r14;
    // 0x80010FE8: lw          $at, 0x1C($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X1C);
    // 0x80010FEC: nop

    // 0x80010FF0: sw          $at, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r1;
    // 0x80010FF4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80010FF8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80010FFC: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80011000: subu        $t5, $t5, $t9
    ctx->r13 = SUB32(ctx->r13, ctx->r25);
    // 0x80011004: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80011008: subu        $t5, $t5, $t9
    ctx->r13 = SUB32(ctx->r13, ctx->r25);
    // 0x8001100C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80011010: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x80011014: lw          $at, 0x20($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X20);
    // 0x80011018: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001101C: nop

    // 0x80011020: sw          $at, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r1;
    // 0x80011024: lw          $t3, 0x24($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X24);
    // 0x80011028: nop

    // 0x8001102C: sw          $t3, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r11;
    // 0x80011030: lw          $at, 0x28($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X28);
    // 0x80011034: nop

    // 0x80011038: sw          $at, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r1;
    // 0x8001103C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80011040: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80011044: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80011048: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001104C: addu        $t5, $t6, $t4
    ctx->r13 = ADD32(ctx->r14, ctx->r12);
    // 0x80011050: sw          $t8, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r24;
    // 0x80011054: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80011058: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8001105C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80011060: slt         $at, $t2, $t0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80011064: bne         $at, $zero, L_80010E9C
    if (ctx->r1 != 0) {
        // 0x80011068: sw          $t2, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r10;
            goto L_80010E9C;
    }
    // 0x80011068: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
L_8001106C:
    // 0x8001106C: b           L_80011074
    // 0x80011070: nop

        goto L_80011074;
    // 0x80011070: nop

L_80011074:
    // 0x80011074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80011078: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001107C: jr          $ra
    // 0x80011080: nop

    return;
    // 0x80011080: nop

;}
RECOMP_FUNC void func_8001FB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FB3C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001FB40: lw          $t6, 0x6DF8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DF8);
    // 0x8001FB44: nop

    // 0x8001FB48: beq         $t6, $zero, L_8001FB58
    if (ctx->r14 == 0) {
        // 0x8001FB4C: nop
    
            goto L_8001FB58;
    }
    // 0x8001FB4C: nop

    // 0x8001FB50: jr          $ra
    // 0x8001FB54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8001FB54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001FB58:
    // 0x8001FB58: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8001FB5C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FB60: sw          $t7, 0x6DFC($at)
    MEM_W(0X6DFC, ctx->r1) = ctx->r15;
    // 0x8001FB64: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FB68: sw          $a0, 0x6E00($at)
    MEM_W(0X6E00, ctx->r1) = ctx->r4;
    // 0x8001FB6C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FB70: sw          $a1, 0x6E08($at)
    MEM_W(0X6E08, ctx->r1) = ctx->r5;
    // 0x8001FB74: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8001FB78: lw          $t8, 0x6E08($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6E08);
    // 0x8001FB7C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FB80: sw          $t8, 0x6E10($at)
    MEM_W(0X6E10, ctx->r1) = ctx->r24;
    // 0x8001FB84: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FB88: sw          $a2, 0x6E0C($at)
    MEM_W(0X6E0C, ctx->r1) = ctx->r6;
    // 0x8001FB8C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FB90: sw          $zero, 0x6E04($at)
    MEM_W(0X6E04, ctx->r1) = 0;
    // 0x8001FB94: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FB98: sw          $zero, 0x6E14($at)
    MEM_W(0X6E14, ctx->r1) = 0;
    // 0x8001FB9C: jr          $ra
    // 0x8001FBA0: nop

    return;
    // 0x8001FBA0: nop

    // 0x8001FBA4: jr          $ra
    // 0x8001FBA8: nop

    return;
    // 0x8001FBA8: nop

;}
RECOMP_FUNC void func_8002BE04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BE04: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002BE08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002BE0C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8002BE10: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_8002BE14:
    // 0x8002BE14: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8002BE18: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8002BE1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002BE20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002BE24: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002BE28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002BE2C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8002BE30: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002BE34: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8002BE38: nop

    // 0x8002BE3C: beq         $t9, $zero, L_8002C114
    if (ctx->r25 == 0) {
        // 0x8002BE40: nop
    
            goto L_8002C114;
    }
    // 0x8002BE40: nop

    // 0x8002BE44: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8002BE48: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8002BE4C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002BE50: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002BE54: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8002BE58: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002BE5C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8002BE60: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8002BE64: lh          $t2, 0x4236($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4236);
    // 0x8002BE68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002BE6C: bne         $t2, $at, L_8002BFE8
    if (ctx->r10 != ctx->r1) {
        // 0x8002BE70: nop
    
            goto L_8002BFE8;
    }
    // 0x8002BE70: nop

    // 0x8002BE74: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8002BE78: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8002BE7C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8002BE80: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8002BE84: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8002BE88: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8002BE8C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8002BE90: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002BE94: lh          $t5, 0x4234($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4234);
    // 0x8002BE98: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8002BE9C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002BEA0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8002BEA4: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x8002BEA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002BEAC: lw          $t7, 0x4DD0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4DD0);
    // 0x8002BEB0: nop

    // 0x8002BEB4: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8002BEB8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8002BEBC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8002BEC0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002BEC4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002BEC8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002BECC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002BED0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8002BED4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8002BED8: lh          $t0, 0x4234($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4234);
    // 0x8002BEDC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8002BEE0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002BEE4: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8002BEE8: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x8002BEEC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8002BEF0: lw          $t2, 0x4DC8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4DC8);
    // 0x8002BEF4: nop

    // 0x8002BEF8: lb          $t3, 0x0($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X0);
    // 0x8002BEFC: nop

    // 0x8002BF00: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8002BF04: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8002BF08: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8002BF0C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8002BF10: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002BF14: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8002BF18: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002BF1C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8002BF20: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002BF24: lh          $t6, 0x4234($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4234);
    // 0x8002BF28: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8002BF2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002BF30: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8002BF34: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x8002BF38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002BF3C: lw          $t8, 0x4DC8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4DC8);
    // 0x8002BF40: nop

    // 0x8002BF44: lh          $t9, 0x4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X4);
    // 0x8002BF48: nop

    // 0x8002BF4C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x8002BF50: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8002BF54: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8002BF58: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002BF5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002BF60: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8002BF64: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002BF68: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8002BF6C: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8002BF70: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8002BF74: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8002BF78: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002BF7C: lh          $t5, 0x4290($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4290);
    // 0x8002BF80: nop

    // 0x8002BF84: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8002BF88: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002BF8C: jal         0x8001A488
    // 0x8002BF90: nop

    func_8001A488(rdram, ctx);
        goto after_0;
    // 0x8002BF90: nop

    after_0:
    // 0x8002BF94: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8002BF98: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8002BF9C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8002BFA0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8002BFA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002BFA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002BFAC: lw          $t8, 0x52B0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X52B0);
    // 0x8002BFB0: nop

    // 0x8002BFB4: bne         $t8, $zero, L_8002BFE8
    if (ctx->r24 != 0) {
        // 0x8002BFB8: nop
    
            goto L_8002BFE8;
    }
    // 0x8002BFB8: nop

    // 0x8002BFBC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8002BFC0: nop

    // 0x8002BFC4: beq         $t9, $zero, L_8002BFE8
    if (ctx->r25 == 0) {
        // 0x8002BFC8: nop
    
            goto L_8002BFE8;
    }
    // 0x8002BFC8: nop

    // 0x8002BFCC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8002BFD0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8002BFD4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8002BFD8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8002BFDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002BFE0: jal         0x8001C0EC
    // 0x8002BFE4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8002BFE4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_1:
L_8002BFE8:
    // 0x8002BFE8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8002BFEC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8002BFF0: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x8002BFF4: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8002BFF8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8002BFFC: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8002C000: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8002C004: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8002C008: lh          $t3, 0x4236($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4236);
    // 0x8002C00C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002C010: bne         $t3, $at, L_8002C0FC
    if (ctx->r11 != ctx->r1) {
        // 0x8002C014: nop
    
            goto L_8002C0FC;
    }
    // 0x8002C014: nop

    // 0x8002C018: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8002C01C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8002C020: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8002C024: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002C028: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8002C02C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002C030: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8002C034: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002C038: lh          $t6, 0x4298($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4298);
    // 0x8002C03C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002C040: bne         $t6, $at, L_8002C0FC
    if (ctx->r14 != ctx->r1) {
        // 0x8002C044: nop
    
            goto L_8002C0FC;
    }
    // 0x8002C044: nop

    // 0x8002C048: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8002C04C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8002C050: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002C054: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002C058: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002C05C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002C060: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8002C064: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002C068: lh          $t9, 0x4234($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4234);
    // 0x8002C06C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8002C070: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8002C074: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8002C078: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x8002C07C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8002C080: lw          $t2, 0x4DD4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4DD4);
    // 0x8002C084: nop

    // 0x8002C088: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8002C08C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8002C090: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8002C094: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8002C098: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8002C09C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8002C0A0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8002C0A4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8002C0A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8002C0AC: lh          $t4, 0x4234($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4234);
    // 0x8002C0B0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002C0B4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8002C0B8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8002C0BC: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x8002C0C0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002C0C4: lw          $t6, 0x4DC8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4DC8);
    // 0x8002C0C8: nop

    // 0x8002C0CC: lb          $t7, 0x0($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X0);
    // 0x8002C0D0: nop

    // 0x8002C0D4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8002C0D8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8002C0DC: nop

    // 0x8002C0E0: beq         $t8, $zero, L_8002C0FC
    if (ctx->r24 == 0) {
        // 0x8002C0E4: nop
    
            goto L_8002C0FC;
    }
    // 0x8002C0E4: nop

    // 0x8002C0E8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8002C0EC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8002C0F0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8002C0F4: jal         0x8001ABF4
    // 0x8002C0F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8002C0F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_8002C0FC:
    // 0x8002C0FC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8002C100: jal         0x8001CD20
    // 0x8002C104: nop

    func_8001CD20(rdram, ctx);
        goto after_3;
    // 0x8002C104: nop

    after_3:
    // 0x8002C108: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8002C10C: jal         0x8001AD6C
    // 0x8002C110: nop

    func_8001AD6C(rdram, ctx);
        goto after_4;
    // 0x8002C110: nop

    after_4:
L_8002C114:
    // 0x8002C114: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8002C118: nop

    // 0x8002C11C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8002C120: slti        $at, $t0, 0x4E
    ctx->r1 = SIGNED(ctx->r8) < 0X4E ? 1 : 0;
    // 0x8002C124: bne         $at, $zero, L_8002BE14
    if (ctx->r1 != 0) {
        // 0x8002C128: sw          $t0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r8;
            goto L_8002BE14;
    }
    // 0x8002C128: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x8002C12C: b           L_8002C134
    // 0x8002C130: nop

        goto L_8002C134;
    // 0x8002C130: nop

L_8002C134:
    // 0x8002C134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C138: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002C13C: jr          $ra
    // 0x8002C140: nop

    return;
    // 0x8002C140: nop

;}
RECOMP_FUNC void func_8001D2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D2FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D300: lb          $t6, -0x1EE4($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1EE4);
    // 0x8001D304: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001D308: beq         $t6, $at, L_8001D31C
    if (ctx->r14 == ctx->r1) {
        // 0x8001D30C: nop
    
            goto L_8001D31C;
    }
    // 0x8001D30C: nop

    // 0x8001D310: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001D314: bne         $t6, $at, L_8001D3BC
    if (ctx->r14 != ctx->r1) {
        // 0x8001D318: nop
    
            goto L_8001D3BC;
    }
    // 0x8001D318: nop

L_8001D31C:
    // 0x8001D31C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001D320: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001D324: lb          $t8, -0x1EE4($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1EE4);
    // 0x8001D328: lbu         $t7, -0x1ED4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1ED4);
    // 0x8001D32C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001D330: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001D334: lh          $t0, -0x1EDC($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1EDC);
    // 0x8001D338: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D33C: mflo        $t9
    ctx->r25 = lo;
    // 0x8001D340: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8001D344: sh          $t1, -0x1EDC($at)
    MEM_H(-0X1EDC, ctx->r1) = ctx->r9;
    // 0x8001D348: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001D34C: lb          $t2, -0x1EE4($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X1EE4);
    // 0x8001D350: nop

    // 0x8001D354: bgez        $t2, L_8001D38C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8001D358: nop
    
            goto L_8001D38C;
    }
    // 0x8001D358: nop

    // 0x8001D35C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001D360: lh          $t3, -0x1EDC($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1EDC);
    // 0x8001D364: nop

    // 0x8001D368: bgtz        $t3, L_8001D384
    if (SIGNED(ctx->r11) > 0) {
        // 0x8001D36C: nop
    
            goto L_8001D384;
    }
    // 0x8001D36C: nop

    // 0x8001D370: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D374: sh          $zero, -0x1EDC($at)
    MEM_H(-0X1EDC, ctx->r1) = 0;
    // 0x8001D378: addiu       $t4, $zero, -0x2
    ctx->r12 = ADD32(0, -0X2);
    // 0x8001D37C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D380: sb          $t4, -0x1EE4($at)
    MEM_B(-0X1EE4, ctx->r1) = ctx->r12;
L_8001D384:
    // 0x8001D384: b           L_8001D3BC
    // 0x8001D388: nop

        goto L_8001D3BC;
    // 0x8001D388: nop

L_8001D38C:
    // 0x8001D38C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001D390: lh          $t5, -0x1EDC($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1EDC);
    // 0x8001D394: nop

    // 0x8001D398: slti        $at, $t5, 0xFF
    ctx->r1 = SIGNED(ctx->r13) < 0XFF ? 1 : 0;
    // 0x8001D39C: bne         $at, $zero, L_8001D3BC
    if (ctx->r1 != 0) {
        // 0x8001D3A0: nop
    
            goto L_8001D3BC;
    }
    // 0x8001D3A0: nop

    // 0x8001D3A4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8001D3A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D3AC: sh          $t6, -0x1EDC($at)
    MEM_H(-0X1EDC, ctx->r1) = ctx->r14;
    // 0x8001D3B0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8001D3B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D3B8: sb          $t7, -0x1EE4($at)
    MEM_B(-0X1EE4, ctx->r1) = ctx->r15;
L_8001D3BC:
    // 0x8001D3BC: jr          $ra
    // 0x8001D3C0: nop

    return;
    // 0x8001D3C0: nop

    // 0x8001D3C4: jr          $ra
    // 0x8001D3C8: nop

    return;
    // 0x8001D3C8: nop

;}
RECOMP_FUNC void func_8001A738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A738: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A73C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A740: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001A744: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001A748: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001A74C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001A750: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001A754: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001A758: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001A75C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001A760: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001A764: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001A768: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8001A76C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8001A770: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001A774: lh          $t1, 0x4290($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4290);
    // 0x8001A778: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001A77C: beq         $t1, $at, L_8001A7D0
    if (ctx->r9 == ctx->r1) {
        // 0x8001A780: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_8001A7D0;
    }
    // 0x8001A780: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8001A784: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A788: jal         0x8001A5F8
    // 0x8001A78C: nop

    func_8001A5F8(rdram, ctx);
        goto after_0;
    // 0x8001A78C: nop

    after_0:
    // 0x8001A790: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A794: jal         0x80019BC8
    // 0x8001A798: nop

    func_80019BC8(rdram, ctx);
        goto after_1;
    // 0x8001A798: nop

    after_1:
    // 0x8001A79C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8001A7A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8001A7A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8001A7A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001A7AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001A7B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001A7B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8001A7B8: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8001A7BC: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x8001A7C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8001A7C4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001A7C8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8001A7CC: sh          $t2, 0x4290($at)
    MEM_H(0X4290, ctx->r1) = ctx->r10;
L_8001A7D0:
    // 0x8001A7D0: b           L_8001A7D8
    // 0x8001A7D4: nop

        goto L_8001A7D8;
    // 0x8001A7D4: nop

L_8001A7D8:
    // 0x8001A7D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A7DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A7E0: jr          $ra
    // 0x8001A7E4: nop

    return;
    // 0x8001A7E4: nop

;}
RECOMP_FUNC void strlen_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A86C: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8003A870: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8003A874: beq         $t6, $zero, L_8003A88C
    if (ctx->r14 == 0) {
        // 0x8003A878: nop
    
            goto L_8003A88C;
    }
    // 0x8003A878: nop

    // 0x8003A87C: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
L_8003A880:
    // 0x8003A880: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003A884: bnel        $t7, $zero, L_8003A880
    if (ctx->r15 != 0) {
        // 0x8003A888: lbu         $t7, 0x1($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X1);
            goto L_8003A880;
    }
    goto skip_0;
    // 0x8003A888: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
    skip_0:
L_8003A88C:
    // 0x8003A88C: jr          $ra
    // 0x8003A890: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    return;
    // 0x8003A890: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
;}
RECOMP_FUNC void alLoadNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F3E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003F3E8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8003F3EC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8003F3F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003F3F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8003F3F8: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x8003F3FC: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x8003F400: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8003F404: addiu       $a1, $a1, 0x2AC
    ctx->r5 = ADD32(ctx->r5, 0X2AC);
    // 0x8003F408: addiu       $a2, $a2, -0x400
    ctx->r6 = ADD32(ctx->r6, -0X400);
    // 0x8003F40C: jal         0x80046400
    // 0x8003F410: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8003F410: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8003F414: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8003F418: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8003F41C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F420: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F424: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8003F428: jal         0x80035870
    // 0x8003F42C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8003F42C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8003F430: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8003F434: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x8003F438: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8003F43C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8003F440: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F448: jal         0x80035870
    // 0x8003F44C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8003F44C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8003F450: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8003F454: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8003F458: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8003F45C: jalr        $t9
    // 0x8003F460: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x8003F460: nop

    after_3:
    // 0x8003F464: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8003F468: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x8003F46C: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x8003F470: sw          $t8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r24;
    // 0x8003F474: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8003F478: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003F47C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003F480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003F484: jr          $ra
    // 0x8003F488: nop

    return;
    // 0x8003F488: nop

;}
RECOMP_FUNC void func_8002BAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BAC8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8002BACC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002BAD0: lh          $t6, 0x76A2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X76A2);
    // 0x8002BAD4: nop

    // 0x8002BAD8: beq         $t6, $zero, L_8002BAF4
    if (ctx->r14 == 0) {
        // 0x8002BADC: nop
    
            goto L_8002BAF4;
    }
    // 0x8002BADC: nop

    // 0x8002BAE0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8002BAE4: lh          $t7, 0x76A2($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X76A2);
    // 0x8002BAE8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BAEC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8002BAF0: sh          $t8, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r24;
L_8002BAF4:
    // 0x8002BAF4: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
    // 0x8002BAF8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002BAFC: lh          $t9, 0x76A2($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X76A2);
    // 0x8002BB00: nop

    // 0x8002BB04: bne         $t9, $zero, L_8002BC30
    if (ctx->r25 != 0) {
        // 0x8002BB08: nop
    
            goto L_8002BC30;
    }
    // 0x8002BB08: nop

    // 0x8002BB0C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002BB10: lhu         $t0, -0x1C7C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C7C);
    // 0x8002BB14: nop

    // 0x8002BB18: andi        $t1, $t0, 0x100
    ctx->r9 = ctx->r8 & 0X100;
    // 0x8002BB1C: beq         $t1, $zero, L_8002BB3C
    if (ctx->r9 == 0) {
        // 0x8002BB20: nop
    
            goto L_8002BB3C;
    }
    // 0x8002BB20: nop

    // 0x8002BB24: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x8002BB28: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BB2C: sh          $t2, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r10;
    // 0x8002BB30: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x8002BB34: b           L_8002BC28
    // 0x8002BB38: sh          $t3, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r11;
        goto L_8002BC28;
    // 0x8002BB38: sh          $t3, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r11;
L_8002BB3C:
    // 0x8002BB3C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002BB40: lhu         $t4, -0x1C7C($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C7C);
    // 0x8002BB44: nop

    // 0x8002BB48: andi        $t5, $t4, 0x200
    ctx->r13 = ctx->r12 & 0X200;
    // 0x8002BB4C: beq         $t5, $zero, L_8002BB6C
    if (ctx->r13 == 0) {
        // 0x8002BB50: nop
    
            goto L_8002BB6C;
    }
    // 0x8002BB50: nop

    // 0x8002BB54: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x8002BB58: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BB5C: sh          $t6, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r14;
    // 0x8002BB60: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x8002BB64: b           L_8002BC28
    // 0x8002BB68: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
        goto L_8002BC28;
    // 0x8002BB68: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
L_8002BB6C:
    // 0x8002BB6C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002BB70: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x8002BB74: nop

    // 0x8002BB78: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x8002BB7C: beq         $t9, $zero, L_8002BB9C
    if (ctx->r25 == 0) {
        // 0x8002BB80: nop
    
            goto L_8002BB9C;
    }
    // 0x8002BB80: nop

    // 0x8002BB84: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x8002BB88: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BB8C: sh          $t0, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r8;
    // 0x8002BB90: addiu       $t1, $zero, 0x800
    ctx->r9 = ADD32(0, 0X800);
    // 0x8002BB94: b           L_8002BC28
    // 0x8002BB98: sh          $t1, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r9;
        goto L_8002BC28;
    // 0x8002BB98: sh          $t1, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r9;
L_8002BB9C:
    // 0x8002BB9C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002BBA0: lhu         $t2, -0x1C7C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1C7C);
    // 0x8002BBA4: nop

    // 0x8002BBA8: andi        $t3, $t2, 0x400
    ctx->r11 = ctx->r10 & 0X400;
    // 0x8002BBAC: beq         $t3, $zero, L_8002BBCC
    if (ctx->r11 == 0) {
        // 0x8002BBB0: nop
    
            goto L_8002BBCC;
    }
    // 0x8002BBB0: nop

    // 0x8002BBB4: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x8002BBB8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BBBC: sh          $t4, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r12;
    // 0x8002BBC0: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x8002BBC4: b           L_8002BC28
    // 0x8002BBC8: sh          $t5, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r13;
        goto L_8002BC28;
    // 0x8002BBC8: sh          $t5, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r13;
L_8002BBCC:
    // 0x8002BBCC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002BBD0: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x8002BBD4: nop

    // 0x8002BBD8: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8002BBDC: beq         $t7, $zero, L_8002BBFC
    if (ctx->r15 == 0) {
        // 0x8002BBE0: nop
    
            goto L_8002BBFC;
    }
    // 0x8002BBE0: nop

    // 0x8002BBE4: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x8002BBE8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BBEC: sh          $t8, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r24;
    // 0x8002BBF0: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x8002BBF4: b           L_8002BC28
    // 0x8002BBF8: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
        goto L_8002BC28;
    // 0x8002BBF8: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
L_8002BBFC:
    // 0x8002BBFC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002BC00: lhu         $t0, -0x1C7C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C7C);
    // 0x8002BC04: nop

    // 0x8002BC08: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x8002BC0C: beq         $t1, $zero, L_8002BC28
    if (ctx->r9 == 0) {
        // 0x8002BC10: nop
    
            goto L_8002BC28;
    }
    // 0x8002BC10: nop

    // 0x8002BC14: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x8002BC18: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BC1C: sh          $t2, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r10;
    // 0x8002BC20: addiu       $t3, $zero, 0x4000
    ctx->r11 = ADD32(0, 0X4000);
    // 0x8002BC24: sh          $t3, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r11;
L_8002BC28:
    // 0x8002BC28: b           L_8002BDE8
    // 0x8002BC2C: nop

        goto L_8002BDE8;
    // 0x8002BC2C: nop

L_8002BC30:
    // 0x8002BC30: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002BC34: lhu         $t4, -0x1C82($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C82);
    // 0x8002BC38: nop

    // 0x8002BC3C: andi        $t5, $t4, 0x100
    ctx->r13 = ctx->r12 & 0X100;
    // 0x8002BC40: beq         $t5, $zero, L_8002BC78
    if (ctx->r13 == 0) {
        // 0x8002BC44: nop
    
            goto L_8002BC78;
    }
    // 0x8002BC44: nop

    // 0x8002BC48: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002BC4C: lh          $t6, 0x76A2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X76A2);
    // 0x8002BC50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002BC54: bne         $t6, $at, L_8002BC70
    if (ctx->r14 != ctx->r1) {
        // 0x8002BC58: nop
    
            goto L_8002BC70;
    }
    // 0x8002BC58: nop

    // 0x8002BC5C: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x8002BC60: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
    // 0x8002BC64: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8002BC68: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BC6C: sh          $t8, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r24;
L_8002BC70:
    // 0x8002BC70: b           L_8002BDE8
    // 0x8002BC74: nop

        goto L_8002BDE8;
    // 0x8002BC74: nop

L_8002BC78:
    // 0x8002BC78: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002BC7C: lhu         $t9, -0x1C82($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C82);
    // 0x8002BC80: nop

    // 0x8002BC84: andi        $t0, $t9, 0x200
    ctx->r8 = ctx->r25 & 0X200;
    // 0x8002BC88: beq         $t0, $zero, L_8002BCC0
    if (ctx->r8 == 0) {
        // 0x8002BC8C: nop
    
            goto L_8002BCC0;
    }
    // 0x8002BC8C: nop

    // 0x8002BC90: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002BC94: lh          $t1, 0x76A2($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X76A2);
    // 0x8002BC98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002BC9C: bne         $t1, $at, L_8002BCB8
    if (ctx->r9 != ctx->r1) {
        // 0x8002BCA0: nop
    
            goto L_8002BCB8;
    }
    // 0x8002BCA0: nop

    // 0x8002BCA4: addiu       $t2, $zero, 0x200
    ctx->r10 = ADD32(0, 0X200);
    // 0x8002BCA8: sh          $t2, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r10;
    // 0x8002BCAC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8002BCB0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BCB4: sh          $t3, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r11;
L_8002BCB8:
    // 0x8002BCB8: b           L_8002BDE8
    // 0x8002BCBC: nop

        goto L_8002BDE8;
    // 0x8002BCBC: nop

L_8002BCC0:
    // 0x8002BCC0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002BCC4: lhu         $t4, -0x1C82($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C82);
    // 0x8002BCC8: nop

    // 0x8002BCCC: andi        $t5, $t4, 0x800
    ctx->r13 = ctx->r12 & 0X800;
    // 0x8002BCD0: beq         $t5, $zero, L_8002BD08
    if (ctx->r13 == 0) {
        // 0x8002BCD4: nop
    
            goto L_8002BD08;
    }
    // 0x8002BCD4: nop

    // 0x8002BCD8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002BCDC: lh          $t6, 0x76A2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X76A2);
    // 0x8002BCE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002BCE4: bne         $t6, $at, L_8002BD00
    if (ctx->r14 != ctx->r1) {
        // 0x8002BCE8: nop
    
            goto L_8002BD00;
    }
    // 0x8002BCE8: nop

    // 0x8002BCEC: addiu       $t7, $zero, 0x800
    ctx->r15 = ADD32(0, 0X800);
    // 0x8002BCF0: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
    // 0x8002BCF4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8002BCF8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BCFC: sh          $t8, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r24;
L_8002BD00:
    // 0x8002BD00: b           L_8002BDE8
    // 0x8002BD04: nop

        goto L_8002BDE8;
    // 0x8002BD04: nop

L_8002BD08:
    // 0x8002BD08: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002BD0C: lhu         $t9, -0x1C82($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C82);
    // 0x8002BD10: nop

    // 0x8002BD14: andi        $t0, $t9, 0x400
    ctx->r8 = ctx->r25 & 0X400;
    // 0x8002BD18: beq         $t0, $zero, L_8002BD50
    if (ctx->r8 == 0) {
        // 0x8002BD1C: nop
    
            goto L_8002BD50;
    }
    // 0x8002BD1C: nop

    // 0x8002BD20: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002BD24: lh          $t1, 0x76A2($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X76A2);
    // 0x8002BD28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002BD2C: bne         $t1, $at, L_8002BD48
    if (ctx->r9 != ctx->r1) {
        // 0x8002BD30: nop
    
            goto L_8002BD48;
    }
    // 0x8002BD30: nop

    // 0x8002BD34: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x8002BD38: sh          $t2, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r10;
    // 0x8002BD3C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8002BD40: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BD44: sh          $t3, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r11;
L_8002BD48:
    // 0x8002BD48: b           L_8002BDE8
    // 0x8002BD4C: nop

        goto L_8002BDE8;
    // 0x8002BD4C: nop

L_8002BD50:
    // 0x8002BD50: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002BD54: lhu         $t4, -0x1C82($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C82);
    // 0x8002BD58: nop

    // 0x8002BD5C: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x8002BD60: beq         $t5, $zero, L_8002BD98
    if (ctx->r13 == 0) {
        // 0x8002BD64: nop
    
            goto L_8002BD98;
    }
    // 0x8002BD64: nop

    // 0x8002BD68: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002BD6C: lh          $t6, 0x76A2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X76A2);
    // 0x8002BD70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002BD74: bne         $t6, $at, L_8002BD90
    if (ctx->r14 != ctx->r1) {
        // 0x8002BD78: nop
    
            goto L_8002BD90;
    }
    // 0x8002BD78: nop

    // 0x8002BD7C: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x8002BD80: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
    // 0x8002BD84: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8002BD88: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BD8C: sh          $t8, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r24;
L_8002BD90:
    // 0x8002BD90: b           L_8002BDE8
    // 0x8002BD94: nop

        goto L_8002BDE8;
    // 0x8002BD94: nop

L_8002BD98:
    // 0x8002BD98: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002BD9C: lhu         $t9, -0x1C82($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C82);
    // 0x8002BDA0: nop

    // 0x8002BDA4: andi        $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 & 0X4000;
    // 0x8002BDA8: beq         $t0, $zero, L_8002BDE0
    if (ctx->r8 == 0) {
        // 0x8002BDAC: nop
    
            goto L_8002BDE0;
    }
    // 0x8002BDAC: nop

    // 0x8002BDB0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002BDB4: lh          $t1, 0x76A2($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X76A2);
    // 0x8002BDB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002BDBC: bne         $t1, $at, L_8002BDD8
    if (ctx->r9 != ctx->r1) {
        // 0x8002BDC0: nop
    
            goto L_8002BDD8;
    }
    // 0x8002BDC0: nop

    // 0x8002BDC4: addiu       $t2, $zero, 0x4000
    ctx->r10 = ADD32(0, 0X4000);
    // 0x8002BDC8: sh          $t2, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r10;
    // 0x8002BDCC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8002BDD0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BDD4: sh          $t3, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = ctx->r11;
L_8002BDD8:
    // 0x8002BDD8: b           L_8002BDE8
    // 0x8002BDDC: nop

        goto L_8002BDE8;
    // 0x8002BDDC: nop

L_8002BDE0:
    // 0x8002BDE0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BDE4: sh          $zero, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = 0;
L_8002BDE8:
    // 0x8002BDE8: lhu         $t4, 0x6($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X6);
    // 0x8002BDEC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002BDF0: sh          $t4, 0x76A0($at)
    MEM_H(0X76A0, ctx->r1) = ctx->r12;
    // 0x8002BDF4: b           L_8002BDFC
    // 0x8002BDF8: nop

        goto L_8002BDFC;
    // 0x8002BDF8: nop

L_8002BDFC:
    // 0x8002BDFC: jr          $ra
    // 0x8002BE00: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8002BE00: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80006FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006FD4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80006FD8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80006FDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80006FE0: sh          $zero, 0xC($sp)
    MEM_H(0XC, ctx->r29) = 0;
    // 0x80006FE4: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x80006FE8: nop

    // 0x80006FEC: sh          $t6, 0xA($sp)
    MEM_H(0XA, ctx->r29) = ctx->r14;
    // 0x80006FF0: lh          $t7, 0xA($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XA);
    // 0x80006FF4: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x80006FF8: blez        $t7, L_80007128
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80006FFC: nop
    
            goto L_80007128;
    }
    // 0x80006FFC: nop

L_80007000:
    // 0x80007000: lh          $t8, 0x12($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X12);
    // 0x80007004: nop

    // 0x80007008: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8000700C: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x80007010: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80007014: nop

    // 0x80007018: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8000701C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80007020: nop

    // 0x80007024: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80007028: nop

    // 0x8000702C: sh          $t3, 0x8($sp)
    MEM_H(0X8, ctx->r29) = ctx->r11;
    // 0x80007030: lh          $t4, 0x8($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X8);
    // 0x80007034: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x80007038: blez        $t4, L_80007108
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8000703C: nop
    
            goto L_80007108;
    }
    // 0x8000703C: nop

L_80007040:
    // 0x80007040: lh          $t6, 0x10($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X10);
    // 0x80007044: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80007048: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000704C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80007050: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80007054: nop

    // 0x80007058: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8000705C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80007060: nop

    // 0x80007064: lh          $t1, 0xE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE);
    // 0x80007068: nop

    // 0x8000706C: sh          $t1, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r9;
    // 0x80007070: lh          $t2, 0x6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6);
    // 0x80007074: sh          $zero, 0xE($sp)
    MEM_H(0XE, ctx->r29) = 0;
    // 0x80007078: blez        $t2, L_800070E8
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8000707C: nop
    
            goto L_800070E8;
    }
    // 0x8000707C: nop

L_80007080:
    // 0x80007080: lh          $t4, 0xE($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XE);
    // 0x80007084: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80007088: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8000708C: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x80007090: lw          $t7, 0x10($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X10);
    // 0x80007094: nop

    // 0x80007098: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8000709C: lh          $t8, 0xC($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XC);
    // 0x800070A0: nop

    // 0x800070A4: bne         $t8, $a1, L_800070B8
    if (ctx->r24 != ctx->r5) {
        // 0x800070A8: nop
    
            goto L_800070B8;
    }
    // 0x800070A8: nop

    // 0x800070AC: lw          $v0, 0x14($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14);
    // 0x800070B0: b           L_80007138
    // 0x800070B4: nop

        goto L_80007138;
    // 0x800070B4: nop

L_800070B8:
    // 0x800070B8: lh          $t9, 0xC($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XC);
    // 0x800070BC: nop

    // 0x800070C0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800070C4: sh          $t0, 0xC($sp)
    MEM_H(0XC, ctx->r29) = ctx->r8;
    // 0x800070C8: lh          $t1, 0xE($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XE);
    // 0x800070CC: lh          $t6, 0x6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6);
    // 0x800070D0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800070D4: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x800070D8: sra         $t3, $t4, 16
    ctx->r11 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800070DC: slt         $at, $t3, $t6
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800070E0: bne         $at, $zero, L_80007080
    if (ctx->r1 != 0) {
        // 0x800070E4: sh          $t2, 0xE($sp)
        MEM_H(0XE, ctx->r29) = ctx->r10;
            goto L_80007080;
    }
    // 0x800070E4: sh          $t2, 0xE($sp)
    MEM_H(0XE, ctx->r29) = ctx->r10;
L_800070E8:
    // 0x800070E8: lh          $t5, 0x10($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X10);
    // 0x800070EC: lh          $t0, 0x8($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X8);
    // 0x800070F0: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x800070F4: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x800070F8: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800070FC: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80007100: bne         $at, $zero, L_80007040
    if (ctx->r1 != 0) {
        // 0x80007104: sh          $t7, 0x10($sp)
        MEM_H(0X10, ctx->r29) = ctx->r15;
            goto L_80007040;
    }
    // 0x80007104: sh          $t7, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r15;
L_80007108:
    // 0x80007108: lh          $t1, 0x12($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X12);
    // 0x8000710C: lh          $t6, 0xA($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XA);
    // 0x80007110: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80007114: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x80007118: sra         $t3, $t4, 16
    ctx->r11 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8000711C: slt         $at, $t3, $t6
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80007120: bne         $at, $zero, L_80007000
    if (ctx->r1 != 0) {
        // 0x80007124: sh          $t2, 0x12($sp)
        MEM_H(0X12, ctx->r29) = ctx->r10;
            goto L_80007000;
    }
    // 0x80007124: sh          $t2, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r10;
L_80007128:
    // 0x80007128: b           L_80007138
    // 0x8000712C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80007138;
    // 0x8000712C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80007130: b           L_80007138
    // 0x80007134: nop

        goto L_80007138;
    // 0x80007134: nop

L_80007138:
    // 0x80007138: jr          $ra
    // 0x8000713C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8000713C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void Debug_ShockTest_Menu(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020F18: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80020F1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80020F20: jal         0x8001D4D0
    // 0x80020F24: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x80020F24: nop

    after_0:
    // 0x80020F28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80020F2C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80020F30: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80020F34: jal         0x8001D638
    // 0x80020F38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x80020F38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80020F3C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80020F40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80020F44: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x80020F48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80020F4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80020F50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80020F54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020F58: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80020F5C: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80020F60: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80020F64: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x80020F68: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80020F6C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80020F70: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80020F74: jal         0x80036E70
    // 0x80020F78: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x80020F78: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80020F7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80020F80: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80020F84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020F88: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80020F8C: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80020F90: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80020F94: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80020F98: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80020F9C: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x80020FA0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80020FA4: lhu         $t0, 0x46($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X46);
    // 0x80020FA8: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80020FAC: nop

    // 0x80020FB0: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80020FB4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020FB8: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80020FBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020FC0: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80020FC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020FC8: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80020FCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020FD0: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80020FD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020FD8: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x80020FDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020FE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020FE4: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80020FE8: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x80020FEC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80020FF0: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80020FF4: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80020FF8: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x80020FFC: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80021000: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x80021004: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80021008: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8002100C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80021010: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80021014: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80021018: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8002101C: jal         0x80037188
    // 0x80021020: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x80021020: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80021024: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80021028: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8002102C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80021030: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80021034: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80021038: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x8002103C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80021040: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x80021044: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x80021048: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8002104C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80021050: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x80021054: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80021058: nop

    // 0x8002105C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80021060: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80021064: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x80021068: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8002106C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80021070: jal         0x8005F96C
    // 0x80021074: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    Debug_SetTextColor(rdram, ctx);
        goto after_4;
    // 0x80021074: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x80021078: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002107C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80021080: addiu       $a1, $a1, -0x4300
    ctx->r5 = ADD32(ctx->r5, -0X4300);
    // 0x80021084: jal         0x80036BE4
    // 0x80021088: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x80021088: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_5:
    // 0x8002108C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80021090: jal         0x8005F9EC
    // 0x80021094: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_6;
    // 0x80021094: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_6:
    // 0x80021098: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8002109C: lw          $a2, -0x59D0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X59D0);
    // 0x800210A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800210A4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800210A8: addiu       $a1, $a1, -0x42F4
    ctx->r5 = ADD32(ctx->r5, -0X42F4);
    // 0x800210AC: jal         0x80036BE4
    // 0x800210B0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x800210B0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_7:
    // 0x800210B4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800210B8: jal         0x8005F9EC
    // 0x800210BC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    Debug_PrintXY(rdram, ctx);
        goto after_8;
    // 0x800210BC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_8:
    // 0x800210C0: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x800210C4: lw          $a2, -0x59CC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X59CC);
    // 0x800210C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800210CC: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800210D0: addiu       $a1, $a1, -0x42E4
    ctx->r5 = ADD32(ctx->r5, -0X42E4);
    // 0x800210D4: jal         0x80036BE4
    // 0x800210D8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x800210D8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_9:
    // 0x800210DC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800210E0: jal         0x8005F9EC
    // 0x800210E4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    Debug_PrintXY(rdram, ctx);
        goto after_10;
    // 0x800210E4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_10:
    // 0x800210E8: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x800210EC: lw          $a2, -0x59C8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X59C8);
    // 0x800210F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800210F4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800210F8: addiu       $a1, $a1, -0x42D4
    ctx->r5 = ADD32(ctx->r5, -0X42D4);
    // 0x800210FC: jal         0x80036BE4
    // 0x80021100: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x80021100: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_11:
    // 0x80021104: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80021108: jal         0x8005F9EC
    // 0x8002110C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    Debug_PrintXY(rdram, ctx);
        goto after_12;
    // 0x8002110C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_12:
    // 0x80021110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80021114: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80021118: addiu       $a1, $a1, -0x42C4
    ctx->r5 = ADD32(ctx->r5, -0X42C4);
    // 0x8002111C: jal         0x80036BE4
    // 0x80021120: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_13;
    // 0x80021120: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_13:
    // 0x80021124: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80021128: lw          $a1, -0x59C4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X59C4);
    // 0x8002112C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80021130: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x80021134: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80021138: jal         0x8005F9EC
    // 0x8002113C: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    Debug_PrintXY(rdram, ctx);
        goto after_14;
    // 0x8002113C: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_14:
    // 0x80021140: b           L_80021148
    // 0x80021144: nop

        goto L_80021148;
    // 0x80021144: nop

L_80021148:
    // 0x80021148: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8002114C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80021150: jr          $ra
    // 0x80021154: nop

    return;
    // 0x80021154: nop

;}
RECOMP_FUNC void func_8002598C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002598C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80025990: b           L_80025998
    // 0x80025994: nop

        goto L_80025998;
    // 0x80025994: nop

L_80025998:
    // 0x80025998: jr          $ra
    // 0x8002599C: nop

    return;
    // 0x8002599C: nop

;}
RECOMP_FUNC void func_8000B404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B404: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8000B408: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8000B40C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8000B410: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000B414: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x8000B418: sh          $zero, 0x2($sp)
    MEM_H(0X2, ctx->r29) = 0;
    // 0x8000B41C: blez        $t6, L_8000B4B4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8000B420: nop
    
            goto L_8000B4B4;
    }
    // 0x8000B420: nop

L_8000B424:
    // 0x8000B424: lh          $t7, 0x2($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2);
    // 0x8000B428: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000B42C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000B430: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000B434: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000B438: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000B43C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000B440: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000B444: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8000B448: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8000B44C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8000B450: nop

    // 0x8000B454: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8000B458: nop

    // 0x8000B45C: bne         $t2, $zero, L_8000B46C
    if (ctx->r10 != 0) {
        // 0x8000B460: nop
    
            goto L_8000B46C;
    }
    // 0x8000B460: nop

    // 0x8000B464: b           L_8000B490
    // 0x8000B468: nop

        goto L_8000B490;
    // 0x8000B468: nop

L_8000B46C:
    // 0x8000B46C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8000B470: nop

    // 0x8000B474: lh          $t4, 0x14($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X14);
    // 0x8000B478: nop

    // 0x8000B47C: bne         $t4, $a0, L_8000B490
    if (ctx->r12 != ctx->r4) {
        // 0x8000B480: nop
    
            goto L_8000B490;
    }
    // 0x8000B480: nop

    // 0x8000B484: lh          $v0, 0x2($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2);
    // 0x8000B488: b           L_8000B4C4
    // 0x8000B48C: nop

        goto L_8000B4C4;
    // 0x8000B48C: nop

L_8000B490:
    // 0x8000B490: lh          $t5, 0x2($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2);
    // 0x8000B494: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000B498: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8000B49C: lw          $t9, -0x5CF4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5CF4);
    // 0x8000B4A0: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8000B4A4: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8000B4A8: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8000B4AC: bne         $at, $zero, L_8000B424
    if (ctx->r1 != 0) {
        // 0x8000B4B0: sh          $t6, 0x2($sp)
        MEM_H(0X2, ctx->r29) = ctx->r14;
            goto L_8000B424;
    }
    // 0x8000B4B0: sh          $t6, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r14;
L_8000B4B4:
    // 0x8000B4B4: b           L_8000B4C4
    // 0x8000B4B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000B4C4;
    // 0x8000B4B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8000B4BC: b           L_8000B4C4
    // 0x8000B4C0: nop

        goto L_8000B4C4;
    // 0x8000B4C0: nop

L_8000B4C4:
    // 0x8000B4C4: jr          $ra
    // 0x8000B4C8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8000B4C8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Math_ComparePlanes(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001608C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80016090: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80016094: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80016098: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8001609C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800160A0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800160A4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800160A8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800160AC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x800160B0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800160B4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800160B8: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800160BC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800160C0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800160C4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800160C8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800160CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800160D0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800160D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800160D8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800160DC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800160E0: jal         0x80015D2C
    // 0x800160E4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    Math_SolvePlaneY(rdram, ctx);
        goto after_0;
    // 0x800160E4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x800160E8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800160EC: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x800160F0: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x800160F4: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x800160F8: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x800160FC: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x80016100: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x80016104: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80016108: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8001610C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80016110: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x80016114: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80016118: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8001611C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80016120: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80016124: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80016128: jal         0x80015D2C
    // 0x8001612C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    Math_SolvePlaneY(rdram, ctx);
        goto after_1;
    // 0x8001612C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_1:
    // 0x80016130: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80016134: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80016138: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001613C: nop

    // 0x80016140: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80016144: nop

    // 0x80016148: bc1t        L_80016158
    if (c1cs) {
        // 0x8001614C: nop
    
            goto L_80016158;
    }
    // 0x8001614C: nop

    // 0x80016150: b           L_800162E0
    // 0x80016154: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800162E0;
    // 0x80016154: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80016158:
    // 0x80016158: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8001615C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80016160: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80016164: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80016168: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8001616C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80016170: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80016174: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80016178: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8001617C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80016180: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80016184: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80016188: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8001618C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80016190: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80016194: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80016198: jal         0x80015D2C
    // 0x8001619C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    Math_SolvePlaneY(rdram, ctx);
        goto after_2;
    // 0x8001619C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_2:
    // 0x800161A0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800161A4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800161A8: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x800161AC: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x800161B0: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x800161B4: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x800161B8: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x800161BC: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x800161C0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800161C4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800161C8: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x800161CC: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x800161D0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800161D4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800161D8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800161DC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800161E0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800161E4: jal         0x80015D2C
    // 0x800161E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    Math_SolvePlaneY(rdram, ctx);
        goto after_3;
    // 0x800161E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_3:
    // 0x800161EC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800161F0: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800161F4: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800161F8: nop

    // 0x800161FC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80016200: nop

    // 0x80016204: bc1t        L_80016214
    if (c1cs) {
        // 0x80016208: nop
    
            goto L_80016214;
    }
    // 0x80016208: nop

    // 0x8001620C: b           L_800162E0
    // 0x80016210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800162E0;
    // 0x80016210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80016214:
    // 0x80016214: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80016218: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8001621C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x80016220: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80016224: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80016228: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x8001622C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80016230: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80016234: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80016238: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x8001623C: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80016240: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80016244: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80016248: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8001624C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80016250: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80016254: jal         0x80015D2C
    // 0x80016258: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    Math_SolvePlaneY(rdram, ctx);
        goto after_4;
    // 0x80016258: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    after_4:
    // 0x8001625C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80016260: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80016264: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x80016268: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8001626C: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80016270: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80016274: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x80016278: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8001627C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80016280: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80016284: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80016288: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x8001628C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80016290: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80016294: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80016298: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8001629C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800162A0: jal         0x80015D2C
    // 0x800162A4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    Math_SolvePlaneY(rdram, ctx);
        goto after_5;
    // 0x800162A4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_5:
    // 0x800162A8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800162AC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800162B0: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800162B4: nop

    // 0x800162B8: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x800162BC: nop

    // 0x800162C0: bc1t        L_800162D0
    if (c1cs) {
        // 0x800162C4: nop
    
            goto L_800162D0;
    }
    // 0x800162C4: nop

    // 0x800162C8: b           L_800162E0
    // 0x800162CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800162E0;
    // 0x800162CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800162D0:
    // 0x800162D0: b           L_800162E0
    // 0x800162D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800162E0;
    // 0x800162D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800162D8: b           L_800162E0
    // 0x800162DC: nop

        goto L_800162E0;
    // 0x800162DC: nop

L_800162E0:
    // 0x800162E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800162E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800162E8: jr          $ra
    // 0x800162EC: nop

    return;
    // 0x800162EC: nop

;}
RECOMP_FUNC void Reset_LightSettings(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001819C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800181A0: addiu       $t7, $t7, -0x5A70
    ctx->r15 = ADD32(ctx->r15, -0X5A70);
    // 0x800181A4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800181A8: addiu       $t6, $t6, -0x5A48
    ctx->r14 = ADD32(ctx->r14, -0X5A48);
    // 0x800181AC: addiu       $t0, $t7, 0x24
    ctx->r8 = ADD32(ctx->r15, 0X24);
L_800181B0:
    // 0x800181B0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800181B4: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x800181B8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x800181BC: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x800181C0: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x800181C4: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x800181C8: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x800181CC: bne         $t7, $t0, L_800181B0
    if (ctx->r15 != ctx->r8) {
        // 0x800181D0: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_800181B0;
    }
    // 0x800181D0: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x800181D4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800181D8: nop

    // 0x800181DC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x800181E0: jr          $ra
    // 0x800181E4: nop

    return;
    // 0x800181E4: nop

    // 0x800181E8: jr          $ra
    // 0x800181EC: nop

    return;
    // 0x800181EC: nop

;}
RECOMP_FUNC void func_800260E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800260E0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800260E4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x800260E8: sb          $zero, 0x5118($at)
    MEM_B(0X5118, ctx->r1) = 0;
    // 0x800260EC: jr          $ra
    // 0x800260F0: nop

    return;
    // 0x800260F0: nop

    // 0x800260F4: jr          $ra
    // 0x800260F8: nop

    return;
    // 0x800260F8: nop

;}
RECOMP_FUNC void alSeqpDelete(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034758: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8003475C: jal         0x8003F040
    // 0x80034760: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    alSynRemovePlayer(rdram, ctx);
        goto after_0;
    // 0x80034760: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x80034764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003476C: jr          $ra
    // 0x80034770: nop

    return;
    // 0x80034770: nop

;}
RECOMP_FUNC void func_8002BA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BA34: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8002BA38: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8002BA3C:
    // 0x8002BA3C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8002BA40: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002BA44: addiu       $t8, $t8, 0x76A8
    ctx->r24 = ADD32(ctx->r24, 0X76A8);
    // 0x8002BA48: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8002BA4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002BA50: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x8002BA54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002BA58: beq         $t0, $at, L_8002BA98
    if (ctx->r8 == ctx->r1) {
        // 0x8002BA5C: nop
    
            goto L_8002BA98;
    }
    // 0x8002BA5C: nop

    // 0x8002BA60: lh          $t1, 0x2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X2);
    // 0x8002BA64: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002BA68: beq         $t1, $at, L_8002BA98
    if (ctx->r9 == ctx->r1) {
        // 0x8002BA6C: nop
    
            goto L_8002BA98;
    }
    // 0x8002BA6C: nop

    // 0x8002BA70: lh          $t2, 0x4($t9)
    ctx->r10 = MEM_H(ctx->r25, 0X4);
    // 0x8002BA74: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002BA78: beq         $t2, $at, L_8002BA98
    if (ctx->r10 == ctx->r1) {
        // 0x8002BA7C: nop
    
            goto L_8002BA98;
    }
    // 0x8002BA7C: nop

    // 0x8002BA80: lh          $t3, 0x6($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X6);
    // 0x8002BA84: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002BA88: beq         $t3, $at, L_8002BA98
    if (ctx->r11 == ctx->r1) {
        // 0x8002BA8C: nop
    
            goto L_8002BA98;
    }
    // 0x8002BA8C: nop

    // 0x8002BA90: b           L_8002BAC0
    // 0x8002BA94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002BAC0;
    // 0x8002BA94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002BA98:
    // 0x8002BA98: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8002BA9C: nop

    // 0x8002BAA0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8002BAA4: slti        $at, $t5, 0x80
    ctx->r1 = SIGNED(ctx->r13) < 0X80 ? 1 : 0;
    // 0x8002BAA8: bne         $at, $zero, L_8002BA3C
    if (ctx->r1 != 0) {
        // 0x8002BAAC: sw          $t5, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r13;
            goto L_8002BA3C;
    }
    // 0x8002BAAC: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x8002BAB0: b           L_8002BAC0
    // 0x8002BAB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002BAC0;
    // 0x8002BAB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002BAB8: b           L_8002BAC0
    // 0x8002BABC: nop

        goto L_8002BAC0;
    // 0x8002BABC: nop

L_8002BAC0:
    // 0x8002BAC0: jr          $ra
    // 0x8002BAC4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8002BAC4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void alSeqpSetSeq(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034660: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80034664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034668: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x8003466C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80034670: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80034674: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80034678: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x8003467C: jal         0x8003E80C
    // 0x80034680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x80034680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80034684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034688: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003468C: jr          $ra
    // 0x80034690: nop

    return;
    // 0x80034690: nop

;}
RECOMP_FUNC void alEvtqFlush(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E79C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003E7A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003E7A4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8003E7A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003E7AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003E7B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003E7B4: jal         0x80031F70
    // 0x8003E7B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8003E7B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8003E7BC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8003E7C0: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x8003E7C4: beq         $s0, $zero, L_8003E7EC
    if (ctx->r16 == 0) {
        // 0x8003E7C8: nop
    
            goto L_8003E7EC;
    }
    // 0x8003E7C8: nop

L_8003E7CC:
    // 0x8003E7CC: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8003E7D0: jal         0x800357B0
    // 0x8003E7D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x8003E7D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8003E7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003E7DC: jal         0x800357E0
    // 0x8003E7E0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x8003E7E0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8003E7E4: bne         $s1, $zero, L_8003E7CC
    if (ctx->r17 != 0) {
        // 0x8003E7E8: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8003E7CC;
    }
    // 0x8003E7E8: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8003E7EC:
    // 0x8003E7EC: jal         0x80031F70
    // 0x8003E7F0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x8003E7F0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x8003E7F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003E7F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003E7FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E800: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003E804: jr          $ra
    // 0x8003E808: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8003E808: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8002536C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002536C: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x80025370: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80025374: sll         $a3, $a3, 24
    ctx->r7 = S32(ctx->r7 << 24);
    // 0x80025378: sra         $a3, $a3, 24
    ctx->r7 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8002537C: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80025380: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80025384: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80025388: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8002538C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80025390: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80025394: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80025398: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8002539C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800253A0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800253A4: sb          $a1, 0x7490($at)
    MEM_B(0X7490, ctx->r1) = ctx->r5;
    // 0x800253A8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800253AC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800253B0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800253B4: sb          $a2, 0x7491($at)
    MEM_B(0X7491, ctx->r1) = ctx->r6;
    // 0x800253B8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800253BC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800253C0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800253C4: sb          $a3, 0x7492($at)
    MEM_B(0X7492, ctx->r1) = ctx->r7;
    // 0x800253C8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800253CC: lb          $t0, 0x1B($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X1B);
    // 0x800253D0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800253D4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800253D8: sb          $t0, 0x7493($at)
    MEM_B(0X7493, ctx->r1) = ctx->r8;
    // 0x800253DC: b           L_800253E4
    // 0x800253E0: nop

        goto L_800253E4;
    // 0x800253E0: nop

L_800253E4:
    // 0x800253E4: jr          $ra
    // 0x800253E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800253E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001EED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EED8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001EEDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001EEE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001EEE4: jal         0x80037D10
    // 0x8001EEE8: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    osContStartQuery_recomp(rdram, ctx);
        goto after_0;
    // 0x8001EEE8: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    after_0:
    // 0x8001EEEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001EEF0: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x8001EEF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001EEF8: jal         0x80031880
    // 0x8001EEFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8001EEFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8001EF00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001EF04: jal         0x80037D94
    // 0x8001EF08: addiu       $a0, $a0, 0x7650
    ctx->r4 = ADD32(ctx->r4, 0X7650);
    osContGetQuery_recomp(rdram, ctx);
        goto after_2;
    // 0x8001EF08: addiu       $a0, $a0, 0x7650
    ctx->r4 = ADD32(ctx->r4, 0X7650);
    after_2:
    // 0x8001EF0C: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_8001EF10:
    // 0x8001EF10: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8001EF14: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001EF18: addiu       $t8, $t8, 0x7650
    ctx->r24 = ADD32(ctx->r24, 0X7650);
    // 0x8001EF1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001EF20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001EF24: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x8001EF28: nop

    // 0x8001EF2C: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x8001EF30: beq         $t1, $zero, L_8001EF78
    if (ctx->r9 == 0) {
        // 0x8001EF34: nop
    
            goto L_8001EF78;
    }
    // 0x8001EF34: nop

    // 0x8001EF38: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x8001EF3C: beq         $t2, $zero, L_8001EF78
    if (ctx->r10 == 0) {
        // 0x8001EF40: nop
    
            goto L_8001EF78;
    }
    // 0x8001EF40: nop

    // 0x8001EF44: lbu         $t3, 0x3($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X3);
    // 0x8001EF48: nop

    // 0x8001EF4C: bne         $t3, $zero, L_8001EF78
    if (ctx->r11 != 0) {
        // 0x8001EF50: nop
    
            goto L_8001EF78;
    }
    // 0x8001EF50: nop

    // 0x8001EF54: lbu         $t5, 0x1F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1F);
    // 0x8001EF58: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001EF5C: lbu         $t4, -0x1D84($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1D84);
    // 0x8001EF60: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001EF64: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x8001EF68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EF6C: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x8001EF70: b           L_8001EF9C
    // 0x8001EF74: sb          $t8, -0x1D84($at)
    MEM_B(-0X1D84, ctx->r1) = ctx->r24;
        goto L_8001EF9C;
    // 0x8001EF74: sb          $t8, -0x1D84($at)
    MEM_B(-0X1D84, ctx->r1) = ctx->r24;
L_8001EF78:
    // 0x8001EF78: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x8001EF7C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001EF80: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8001EF84: lbu         $t1, -0x1D84($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1D84);
    // 0x8001EF88: sllv        $t9, $t2, $t0
    ctx->r25 = S32(ctx->r10 << (ctx->r8 & 31));
    // 0x8001EF8C: nor         $t3, $t9, $zero
    ctx->r11 = ~(ctx->r25 | 0);
    // 0x8001EF90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EF94: and         $t6, $t1, $t3
    ctx->r14 = ctx->r9 & ctx->r11;
    // 0x8001EF98: sb          $t6, -0x1D84($at)
    MEM_B(-0X1D84, ctx->r1) = ctx->r14;
L_8001EF9C:
    // 0x8001EF9C: lbu         $t5, 0x1F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1F);
    // 0x8001EFA0: nop

    // 0x8001EFA4: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x8001EFA8: andi        $t7, $t4, 0xFF
    ctx->r15 = ctx->r12 & 0XFF;
    // 0x8001EFAC: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x8001EFB0: bne         $at, $zero, L_8001EF10
    if (ctx->r1 != 0) {
        // 0x8001EFB4: sb          $t4, 0x1F($sp)
        MEM_B(0X1F, ctx->r29) = ctx->r12;
            goto L_8001EF10;
    }
    // 0x8001EFB4: sb          $t4, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r12;
    // 0x8001EFB8: b           L_8001EFC0
    // 0x8001EFBC: nop

        goto L_8001EFC0;
    // 0x8001EFBC: nop

L_8001EFC0:
    // 0x8001EFC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001EFC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001EFC8: jr          $ra
    // 0x8001EFCC: nop

    return;
    // 0x8001EFCC: nop

;}
RECOMP_FUNC void func_8001A7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A7E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A7EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A7F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001A7F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001A7F8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001A7FC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001A800: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001A804: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001A808: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001A80C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001A810: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001A814: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001A818: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8001A81C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8001A820: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001A824: lh          $t1, 0x4298($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4298);
    // 0x8001A828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001A82C: beq         $t1, $at, L_8001A874
    if (ctx->r9 == ctx->r1) {
        // 0x8001A830: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_8001A874;
    }
    // 0x8001A830: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8001A834: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A838: jal         0x80019CCC
    // 0x8001A83C: nop

    func_80019CCC(rdram, ctx);
        goto after_0;
    // 0x8001A83C: nop

    after_0:
    // 0x8001A840: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8001A844: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8001A848: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8001A84C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001A850: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001A854: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001A858: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8001A85C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8001A860: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x8001A864: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8001A868: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001A86C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8001A870: sh          $t2, 0x4298($at)
    MEM_H(0X4298, ctx->r1) = ctx->r10;
L_8001A874:
    // 0x8001A874: b           L_8001A87C
    // 0x8001A878: nop

        goto L_8001A87C;
    // 0x8001A878: nop

L_8001A87C:
    // 0x8001A87C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A880: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A884: jr          $ra
    // 0x8001A888: nop

    return;
    // 0x8001A888: nop

;}
RECOMP_FUNC void func_80016A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016A80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80016A84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80016A88: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80016A8C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80016A90: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80016A94: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80016A98: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80016A9C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80016AA0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80016AA4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80016AA8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80016AAC: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80016AB0: jal         0x8003687C
    // 0x80016AB4: nop

    __ll_to_f_recomp(rdram, ctx);
        goto after_0;
    // 0x80016AB4: nop

    after_0:
    // 0x80016AB8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80016ABC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80016AC0: jal         0x8003687C
    // 0x80016AC4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    __ll_to_f_recomp(rdram, ctx);
        goto after_1;
    // 0x80016AC4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_1:
    // 0x80016AC8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80016ACC: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x80016AD0: jal         0x80014F50
    // 0x80016AD4: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    Math_Atan2f(rdram, ctx);
        goto after_2;
    // 0x80016AD4: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_2:
    // 0x80016AD8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80016ADC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80016AE0: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80016AE4: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80016AE8: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x80016AEC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80016AF0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80016AF4: jal         0x8003687C
    // 0x80016AF8: nop

    __ll_to_f_recomp(rdram, ctx);
        goto after_3;
    // 0x80016AF8: nop

    after_3:
    // 0x80016AFC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80016B00: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80016B04: jal         0x8003687C
    // 0x80016B08: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    __ll_to_f_recomp(rdram, ctx);
        goto after_4;
    // 0x80016B08: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_4:
    // 0x80016B0C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80016B10: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x80016B14: jal         0x80014F50
    // 0x80016B18: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    Math_Atan2f(rdram, ctx);
        goto after_5;
    // 0x80016B18: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_5:
    // 0x80016B1C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80016B20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80016B24: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80016B28: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80016B2C: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x80016B30: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80016B34: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80016B38: nop

    // 0x80016B3C: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
    // 0x80016B40: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80016B44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80016B48: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80016B4C: nop

    // 0x80016B50: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80016B54: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x80016B58: bc1f        L_80016B70
    if (!c1cs) {
        // 0x80016B5C: nop
    
            goto L_80016B70;
    }
    // 0x80016B5C: nop

    // 0x80016B60: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80016B64: nop

    // 0x80016B68: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80016B6C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
L_80016B70:
    // 0x80016B70: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80016B74: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80016B78: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80016B7C: nop

    // 0x80016B80: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80016B84: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80016B88: bc1f        L_80016BA0
    if (!c1cs) {
        // 0x80016B8C: nop
    
            goto L_80016BA0;
    }
    // 0x80016B8C: nop

    // 0x80016B90: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80016B94: nop

    // 0x80016B98: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80016B9C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_80016BA0:
    // 0x80016BA0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80016BA4: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80016BA8: nop

    // 0x80016BAC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80016BB0: nop

    // 0x80016BB4: bc1f        L_80016BC8
    if (!c1cs) {
        // 0x80016BB8: nop
    
            goto L_80016BC8;
    }
    // 0x80016BB8: nop

    // 0x80016BBC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80016BC0: nop

    // 0x80016BC4: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
L_80016BC8:
    // 0x80016BC8: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x80016BCC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80016BD0: lwc1        $f16, 0x0($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80016BD4: nop

    // 0x80016BD8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80016BDC: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80016BE0: bc1f        L_80016BF8
    if (!c1cs) {
        // 0x80016BE4: nop
    
            goto L_80016BF8;
    }
    // 0x80016BE4: nop

    // 0x80016BE8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80016BEC: nop

    // 0x80016BF0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80016BF4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_80016BF8:
    // 0x80016BF8: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80016BFC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80016C00: nop

    // 0x80016C04: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80016C08: nop

    // 0x80016C0C: bc1f        L_80016C20
    if (!c1cs) {
        // 0x80016C10: nop
    
            goto L_80016C20;
    }
    // 0x80016C10: nop

    // 0x80016C14: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80016C18: nop

    // 0x80016C1C: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
L_80016C20:
    // 0x80016C20: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80016C24: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x80016C28: nop

    // 0x80016C2C: swc1        $f18, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f18.u32l;
    // 0x80016C30: b           L_80016C38
    // 0x80016C34: nop

        goto L_80016C38;
    // 0x80016C34: nop

L_80016C38:
    // 0x80016C38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80016C3C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80016C40: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80016C44: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80016C48: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80016C4C: jr          $ra
    // 0x80016C50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80016C50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void alSynRemovePlayer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003F044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F048: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8003F04C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8003F050: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003F054: beql        $t6, $zero, L_8003F0D0
    if (ctx->r14 == 0) {
        // 0x8003F058: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003F0D0;
    }
    goto skip_0;
    // 0x8003F058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003F05C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003F060: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8003F064: jal         0x80031F70
    // 0x8003F068: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8003F068: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x8003F06C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8003F070: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8003F074: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8003F078: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8003F07C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003F080: beq         $v1, $zero, L_8003F0C4
    if (ctx->r3 == 0) {
        // 0x8003F084: nop
    
            goto L_8003F0C4;
    }
    // 0x8003F084: nop

L_8003F088:
    // 0x8003F088: bnel        $v1, $a1, L_8003F0B8
    if (ctx->r3 != ctx->r5) {
        // 0x8003F08C: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_8003F0B8;
    }
    goto skip_1;
    // 0x8003F08C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    skip_1:
    // 0x8003F090: beql        $a2, $zero, L_8003F0A8
    if (ctx->r6 == 0) {
        // 0x8003F094: lw          $t8, 0x0($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X0);
            goto L_8003F0A8;
    }
    goto skip_2;
    // 0x8003F094: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x8003F098: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8003F09C: b           L_8003F0AC
    // 0x8003F0A0: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
        goto L_8003F0AC;
    // 0x8003F0A0: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8003F0A4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
L_8003F0A8:
    // 0x8003F0A8: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
L_8003F0AC:
    // 0x8003F0AC: b           L_8003F0C4
    // 0x8003F0B0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
        goto L_8003F0C4;
    // 0x8003F0B0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8003F0B4: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_8003F0B8:
    // 0x8003F0B8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8003F0BC: bne         $v1, $zero, L_8003F088
    if (ctx->r3 != 0) {
        // 0x8003F0C0: nop
    
            goto L_8003F088;
    }
    // 0x8003F0C0: nop

L_8003F0C4:
    // 0x8003F0C4: jal         0x80031F70
    // 0x8003F0C8: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x8003F0C8: nop

    after_1:
    // 0x8003F0CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003F0D0:
    // 0x8003F0D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003F0D4: jr          $ra
    // 0x8003F0D8: nop

    return;
    // 0x8003F0D8: nop

;}
RECOMP_FUNC void func_8000FEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FEB0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000FEB4: addiu       $t6, $t6, -0x5C60
    ctx->r14 = ADD32(ctx->r14, -0X5C60);
    // 0x8000FEB8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8000FEBC: nop

    // 0x8000FEC0: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x8000FEC4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8000FEC8: nop

    // 0x8000FECC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x8000FED0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8000FED4: nop

    // 0x8000FED8: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x8000FEDC: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000FEE0: addiu       $t0, $t0, -0x5C54
    ctx->r8 = ADD32(ctx->r8, -0X5C54);
    // 0x8000FEE4: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8000FEE8: nop

    // 0x8000FEEC: sw          $at, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r1;
    // 0x8000FEF0: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8000FEF4: nop

    // 0x8000FEF8: sw          $t3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r11;
    // 0x8000FEFC: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x8000FF00: nop

    // 0x8000FF04: sw          $at, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r1;
    // 0x8000FF08: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000FF0C: addiu       $t4, $t4, -0x5C48
    ctx->r12 = ADD32(ctx->r12, -0X5C48);
    // 0x8000FF10: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x8000FF14: nop

    // 0x8000FF18: sw          $at, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r1;
    // 0x8000FF1C: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x8000FF20: nop

    // 0x8000FF24: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x8000FF28: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x8000FF2C: nop

    // 0x8000FF30: sw          $at, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r1;
    // 0x8000FF34: jr          $ra
    // 0x8000FF38: nop

    return;
    // 0x8000FF38: nop

    // 0x8000FF3C: jr          $ra
    // 0x8000FF40: nop

    return;
    // 0x8000FF40: nop

;}
RECOMP_FUNC void lldiv_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047DD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80047DD4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80047DD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047DDC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80047DE0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80047DE4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80047DE8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80047DEC: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80047DF0: jal         0x80036A0C
    // 0x80047DF4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    __ll_div_recomp(rdram, ctx);
        goto after_0;
    // 0x80047DF4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x80047DF8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80047DFC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80047E00: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80047E04: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80047E08: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80047E0C: jal         0x80036A68
    // 0x80047E10: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    __ll_mul_recomp(rdram, ctx);
        goto after_1;
    // 0x80047E10: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_1:
    // 0x80047E14: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80047E18: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80047E1C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80047E20: subu        $t8, $t6, $v0
    ctx->r24 = SUB32(ctx->r14, ctx->r2);
    // 0x80047E24: sltu        $at, $t7, $v1
    ctx->r1 = ctx->r15 < ctx->r3 ? 1 : 0;
    // 0x80047E28: subu        $t8, $t8, $at
    ctx->r24 = SUB32(ctx->r24, ctx->r1);
    // 0x80047E2C: subu        $t9, $t7, $v1
    ctx->r25 = SUB32(ctx->r15, ctx->r3);
    // 0x80047E30: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80047E34: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80047E38: bgtz        $t0, L_80047E98
    if (SIGNED(ctx->r8) > 0) {
        // 0x80047E3C: lw          $t1, 0x24($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X24);
            goto L_80047E98;
    }
    // 0x80047E3C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80047E40: bltz        $t0, L_80047E50
    if (SIGNED(ctx->r8) < 0) {
        // 0x80047E44: nop
    
            goto L_80047E50;
    }
    // 0x80047E44: nop

    // 0x80047E48: b           L_80047E9C
    // 0x80047E4C: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
        goto L_80047E9C;
    // 0x80047E4C: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
L_80047E50:
    // 0x80047E50: bltzl       $t8, L_80047E9C
    if (SIGNED(ctx->r24) < 0) {
        // 0x80047E54: addiu       $t0, $sp, 0x20
        ctx->r8 = ADD32(ctx->r29, 0X20);
            goto L_80047E9C;
    }
    goto skip_0;
    // 0x80047E54: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    skip_0:
    // 0x80047E58: bgtz        $t8, L_80047E68
    if (SIGNED(ctx->r24) > 0) {
        // 0x80047E5C: addiu       $t3, $t1, 0x1
        ctx->r11 = ADD32(ctx->r9, 0X1);
            goto L_80047E68;
    }
    // 0x80047E5C: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80047E60: beql        $t9, $zero, L_80047E9C
    if (ctx->r25 == 0) {
        // 0x80047E64: addiu       $t0, $sp, 0x20
        ctx->r8 = ADD32(ctx->r29, 0X20);
            goto L_80047E9C;
    }
    goto skip_1;
    // 0x80047E64: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    skip_1:
L_80047E68:
    // 0x80047E68: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80047E6C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80047E70: sltiu       $at, $t3, 0x1
    ctx->r1 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x80047E74: addu        $t2, $t0, $at
    ctx->r10 = ADD32(ctx->r8, ctx->r1);
    // 0x80047E78: subu        $t6, $t8, $t4
    ctx->r14 = SUB32(ctx->r24, ctx->r12);
    // 0x80047E7C: sltu        $at, $t9, $t5
    ctx->r1 = ctx->r25 < ctx->r13 ? 1 : 0;
    // 0x80047E80: subu        $t6, $t6, $at
    ctx->r14 = SUB32(ctx->r14, ctx->r1);
    // 0x80047E84: subu        $t7, $t9, $t5
    ctx->r15 = SUB32(ctx->r25, ctx->r13);
    // 0x80047E88: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80047E8C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80047E90: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80047E94: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_80047E98:
    // 0x80047E98: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
L_80047E9C:
    // 0x80047E9C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80047EA0: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80047EA4: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x80047EA8: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x80047EAC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80047EB0: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x80047EB4: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x80047EB8: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x80047EBC: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x80047EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047EC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80047EC8: jr          $ra
    // 0x80047ECC: nop

    return;
    // 0x80047ECC: nop

;}
RECOMP_FUNC void alEnvmixerNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F48C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003F490: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003F494: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003F498: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x8003F49C: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x8003F4A0: addiu       $a2, $a2, 0xB64
    ctx->r6 = ADD32(ctx->r6, 0XB64);
    // 0x8003F4A4: addiu       $a1, $a1, 0x115C
    ctx->r5 = ADD32(ctx->r5, 0X115C);
    // 0x8003F4A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003F4AC: jal         0x80046400
    // 0x8003F4B0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8003F4B0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x8003F4B4: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x8003F4B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8003F4BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F4C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F4C4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8003F4C8: jal         0x80035870
    // 0x8003F4CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8003F4CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8003F4D0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8003F4D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003F4D8: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x8003F4DC: sw          $v1, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r3;
    // 0x8003F4E0: sw          $zero, 0x48($t0)
    MEM_W(0X48, ctx->r8) = 0;
    // 0x8003F4E4: sh          $v1, 0x1A($t0)
    MEM_H(0X1A, ctx->r8) = ctx->r3;
    // 0x8003F4E8: sh          $v1, 0x28($t0)
    MEM_H(0X28, ctx->r8) = ctx->r3;
    // 0x8003F4EC: sh          $v1, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r3;
    // 0x8003F4F0: sh          $v1, 0x1C($t0)
    MEM_H(0X1C, ctx->r8) = ctx->r3;
    // 0x8003F4F4: sh          $v1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r3;
    // 0x8003F4F8: sh          $zero, 0x20($t0)
    MEM_H(0X20, ctx->r8) = 0;
    // 0x8003F4FC: sh          $zero, 0x22($t0)
    MEM_H(0X22, ctx->r8) = 0;
    // 0x8003F500: sh          $v1, 0x26($t0)
    MEM_H(0X26, ctx->r8) = ctx->r3;
    // 0x8003F504: sh          $zero, 0x24($t0)
    MEM_H(0X24, ctx->r8) = 0;
    // 0x8003F508: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x8003F50C: sw          $zero, 0x34($t0)
    MEM_W(0X34, ctx->r8) = 0;
    // 0x8003F510: sh          $zero, 0x18($t0)
    MEM_H(0X18, ctx->r8) = 0;
    // 0x8003F514: sw          $zero, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = 0;
    // 0x8003F518: sw          $zero, 0x40($t0)
    MEM_W(0X40, ctx->r8) = 0;
    // 0x8003F51C: sw          $zero, 0x44($t0)
    MEM_W(0X44, ctx->r8) = 0;
    // 0x8003F520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003F528: jr          $ra
    // 0x8003F52C: nop

    return;
    // 0x8003F52C: nop

;}
RECOMP_FUNC void func_800010BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800010BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800010C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800010C4: lui         $t6, 0x16
    ctx->r14 = S32(0X16 << 16);
    // 0x800010C8: lui         $t7, 0x17
    ctx->r15 = S32(0X17 << 16);
    // 0x800010CC: addiu       $t7, $t7, -0x29B0
    ctx->r15 = ADD32(ctx->r15, -0X29B0);
    // 0x800010D0: addiu       $t6, $t6, 0x7950
    ctx->r14 = ADD32(ctx->r14, 0X7950);
    // 0x800010D4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800010D8: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800010DC: jal         0x8000068C
    // 0x800010E0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800010E0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x800010E4: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x800010E8: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x800010EC: addiu       $t9, $t9, -0x6F30
    ctx->r25 = ADD32(ctx->r25, -0X6F30);
    // 0x800010F0: addiu       $t8, $t8, -0x7CE0
    ctx->r24 = ADD32(ctx->r24, -0X7CE0);
    // 0x800010F4: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x800010F8: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x800010FC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80001100: jal         0x8000068C
    // 0x80001104: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80001104: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x80001108: b           L_80001110
    // 0x8000110C: nop

        goto L_80001110;
    // 0x8000110C: nop

L_80001110:
    // 0x80001110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001118: jr          $ra
    // 0x8000111C: nop

    return;
    // 0x8000111C: nop

;}
RECOMP_FUNC void Get_ObjIdx_ByPos(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026E58: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80026E5C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80026E60: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80026E64: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x80026E68: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80026E6C: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80026E70: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80026E74: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x80026E78: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80026E7C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80026E80: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80026E84: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80026E88: slti        $at, $t9, 0x4E
    ctx->r1 = SIGNED(ctx->r25) < 0X4E ? 1 : 0;
    // 0x80026E8C: beq         $at, $zero, L_80026EDC
    if (ctx->r1 == 0) {
        // 0x80026E90: sw          $t8, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r24;
            goto L_80026EDC;
    }
    // 0x80026E90: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
L_80026E94:
    // 0x80026E94: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x80026E98: nop

    // 0x80026E9C: lh          $t1, 0xE4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE4);
    // 0x80026EA0: nop

    // 0x80026EA4: bne         $t1, $a0, L_80026EBC
    if (ctx->r9 != ctx->r4) {
        // 0x80026EA8: nop
    
            goto L_80026EBC;
    }
    // 0x80026EA8: nop

    // 0x80026EAC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80026EB0: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x80026EB4: b           L_80026EDC
    // 0x80026EB8: nop

        goto L_80026EDC;
    // 0x80026EB8: nop

L_80026EBC:
    // 0x80026EBC: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x80026EC0: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x80026EC4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80026EC8: slti        $at, $t4, 0x4E
    ctx->r1 = SIGNED(ctx->r12) < 0X4E ? 1 : 0;
    // 0x80026ECC: addiu       $t6, $t5, 0x150
    ctx->r14 = ADD32(ctx->r13, 0X150);
    // 0x80026ED0: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x80026ED4: bne         $at, $zero, L_80026E94
    if (ctx->r1 != 0) {
        // 0x80026ED8: sw          $t4, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r12;
            goto L_80026E94;
    }
    // 0x80026ED8: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
L_80026EDC:
    // 0x80026EDC: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80026EE0: nop

    // 0x80026EE4: beq         $t7, $zero, L_80026EF8
    if (ctx->r15 == 0) {
        // 0x80026EE8: nop
    
            goto L_80026EF8;
    }
    // 0x80026EE8: nop

    // 0x80026EEC: lw          $v0, 0xC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC);
    // 0x80026EF0: b           L_80026F08
    // 0x80026EF4: nop

        goto L_80026F08;
    // 0x80026EF4: nop

L_80026EF8:
    // 0x80026EF8: b           L_80026F08
    // 0x80026EFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80026F08;
    // 0x80026EFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80026F00: b           L_80026F08
    // 0x80026F04: nop

        goto L_80026F08;
    // 0x80026F04: nop

L_80026F08:
    // 0x80026F08: jr          $ra
    // 0x80026F0C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80026F0C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
