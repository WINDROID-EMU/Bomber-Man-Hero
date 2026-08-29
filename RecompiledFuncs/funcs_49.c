#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8007F24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F24C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007F250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007F254: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8007F258: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8007F25C: addiu       $t8, $t7, 0x7E0
    ctx->r24 = ADD32(ctx->r15, 0X7E0);
    // 0x8007F260: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8007F264: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8007F268: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_8007F26C:
    // 0x8007F26C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007F270: nop

    // 0x8007F274: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x8007F278: nop

    // 0x8007F27C: beq         $t0, $zero, L_8007F3B8
    if (ctx->r8 == 0) {
        // 0x8007F280: nop
    
            goto L_8007F3B8;
    }
    // 0x8007F280: nop

    // 0x8007F284: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007F288: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8007F28C: lh          $t2, 0xE4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE4);
    // 0x8007F290: nop

    // 0x8007F294: bne         $t2, $at, L_8007F304
    if (ctx->r10 != ctx->r1) {
        // 0x8007F298: nop
    
            goto L_8007F304;
    }
    // 0x8007F298: nop

    // 0x8007F29C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007F2A0: jal         0x8001B62C
    // 0x8007F2A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8007F2A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8007F2A8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8007F2AC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8007F2B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007F2B4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007F2B8: nop

    // 0x8007F2BC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8007F2C0: nop

    // 0x8007F2C4: bc1f        L_8007F304
    if (!c1cs) {
        // 0x8007F2C8: nop
    
            goto L_8007F304;
    }
    // 0x8007F2C8: nop

    // 0x8007F2CC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8007F2D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007F2D4: nop

    // 0x8007F2D8: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x8007F2DC: nop

    // 0x8007F2E0: bc1f        L_8007F304
    if (!c1cs) {
        // 0x8007F2E4: nop
    
            goto L_8007F304;
    }
    // 0x8007F2E4: nop

    // 0x8007F2E8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8007F2EC: addiu       $a0, $zero, 0x2C8
    ctx->r4 = ADD32(0, 0X2C8);
    // 0x8007F2F0: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    // 0x8007F2F4: lw          $a2, 0x4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X4);
    // 0x8007F2F8: lw          $a3, 0x8($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X8);
    // 0x8007F2FC: jal         0x80081468
    // 0x8007F300: nop

    func_80081468(rdram, ctx);
        goto after_1;
    // 0x8007F300: nop

    after_1:
L_8007F304:
    // 0x8007F304: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007F308: jal         0x8001B62C
    // 0x8007F30C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x8007F30C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8007F310: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8007F314: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x8007F318: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007F31C: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007F320: nop

    // 0x8007F324: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8007F328: nop

    // 0x8007F32C: bc1f        L_8007F370
    if (!c1cs) {
        // 0x8007F330: nop
    
            goto L_8007F370;
    }
    // 0x8007F330: nop

    // 0x8007F334: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8007F338: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007F33C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8007F340: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007F344: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007F348: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007F34C: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8007F350: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8007F354: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8007F358: bgez        $t5, L_8007F368
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8007F35C: sra         $t6, $t5, 2
        ctx->r14 = S32(SIGNED(ctx->r13) >> 2);
            goto L_8007F368;
    }
    // 0x8007F35C: sra         $t6, $t5, 2
    ctx->r14 = S32(SIGNED(ctx->r13) >> 2);
    // 0x8007F360: addiu       $at, $t5, 0x3
    ctx->r1 = ADD32(ctx->r13, 0X3);
    // 0x8007F364: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_8007F368:
    // 0x8007F368: b           L_8007F37C
    // 0x8007F36C: sh          $t6, 0xFE($t7)
    MEM_H(0XFE, ctx->r15) = ctx->r14;
        goto L_8007F37C;
    // 0x8007F36C: sh          $t6, 0xFE($t7)
    MEM_H(0XFE, ctx->r15) = ctx->r14;
L_8007F370:
    // 0x8007F370: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007F374: nop

    // 0x8007F378: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
L_8007F37C:
    // 0x8007F37C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007F380: jal         0x8001B44C
    // 0x8007F384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x8007F384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8007F388: beq         $v0, $zero, L_8007F3AC
    if (ctx->r2 == 0) {
        // 0x8007F38C: nop
    
            goto L_8007F3AC;
    }
    // 0x8007F38C: nop

    // 0x8007F390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007F394: jal         0x8001A928
    // 0x8007F398: nop

    func_8001A928(rdram, ctx);
        goto after_4;
    // 0x8007F398: nop

    after_4:
    // 0x8007F39C: b           L_8007F3D8
    // 0x8007F3A0: nop

        goto L_8007F3D8;
    // 0x8007F3A0: nop

    // 0x8007F3A4: b           L_8007F3B8
    // 0x8007F3A8: nop

        goto L_8007F3B8;
    // 0x8007F3A8: nop

L_8007F3AC:
    // 0x8007F3AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007F3B0: jal         0x8001CD20
    // 0x8007F3B4: nop

    func_8001CD20(rdram, ctx);
        goto after_5;
    // 0x8007F3B4: nop

    after_5:
L_8007F3B8:
    // 0x8007F3B8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8007F3BC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007F3C0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007F3C4: slti        $at, $t0, 0xE
    ctx->r1 = SIGNED(ctx->r8) < 0XE ? 1 : 0;
    // 0x8007F3C8: addiu       $t2, $t1, 0x150
    ctx->r10 = ADD32(ctx->r9, 0X150);
    // 0x8007F3CC: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8007F3D0: bne         $at, $zero, L_8007F26C
    if (ctx->r1 != 0) {
        // 0x8007F3D4: sw          $t0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r8;
            goto L_8007F26C;
    }
    // 0x8007F3D4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_8007F3D8:
    // 0x8007F3D8: b           L_8007F3E0
    // 0x8007F3DC: nop

        goto L_8007F3E0;
    // 0x8007F3DC: nop

L_8007F3E0:
    // 0x8007F3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F3E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007F3E8: jr          $ra
    // 0x8007F3EC: nop

    return;
    // 0x8007F3EC: nop

;}
RECOMP_FUNC void func_800D1EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1EB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D1EB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D1EB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D1EBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D1EC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D1EC4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D1EC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D1ECC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1ED0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D1ED4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1ED8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D1EDC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D1EE0: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D1EE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D1EE8: beq         $s0, $at, L_800D1F04
    if (ctx->r16 == ctx->r1) {
        // 0x800D1EEC: nop
    
            goto L_800D1F04;
    }
    // 0x800D1EEC: nop

    // 0x800D1EF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D1EF4: beq         $s0, $at, L_800D1F14
    if (ctx->r16 == ctx->r1) {
        // 0x800D1EF8: nop
    
            goto L_800D1F14;
    }
    // 0x800D1EF8: nop

    // 0x800D1EFC: b           L_800D1F24
    // 0x800D1F00: nop

        goto L_800D1F24;
    // 0x800D1F00: nop

L_800D1F04:
    // 0x800D1F04: jal         0x800D1D74
    // 0x800D1F08: nop

    func_800D1D74(rdram, ctx);
        goto after_0;
    // 0x800D1F08: nop

    after_0:
    // 0x800D1F0C: b           L_800D1F2C
    // 0x800D1F10: nop

        goto L_800D1F2C;
    // 0x800D1F10: nop

L_800D1F14:
    // 0x800D1F14: jal         0x800D1DE4
    // 0x800D1F18: nop

    func_800D1DE4(rdram, ctx);
        goto after_1;
    // 0x800D1F18: nop

    after_1:
    // 0x800D1F1C: b           L_800D1F2C
    // 0x800D1F20: nop

        goto L_800D1F2C;
    // 0x800D1F20: nop

L_800D1F24:
    // 0x800D1F24: b           L_800D1F2C
    // 0x800D1F28: nop

        goto L_800D1F2C;
    // 0x800D1F28: nop

L_800D1F2C:
    // 0x800D1F2C: b           L_800D1F34
    // 0x800D1F30: nop

        goto L_800D1F34;
    // 0x800D1F30: nop

L_800D1F34:
    // 0x800D1F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1F38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D1F3C: jr          $ra
    // 0x800D1F40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D1F40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800821E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800821E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800821E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800821E8: jal         0x8001D4D0
    // 0x800821EC: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x800821EC: nop

    after_0:
    // 0x800821F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800821F4: lb          $t6, 0x7A20($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7A20);
    // 0x800821F8: nop

    // 0x800821FC: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x80082200: beq         $at, $zero, L_80082268
    if (ctx->r1 == 0) {
        // 0x80082204: nop
    
            goto L_80082268;
    }
    // 0x80082204: nop

    // 0x80082208: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008220C: lbu         $t7, 0x792E($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X792E);
    // 0x80082210: nop

    // 0x80082214: bne         $t7, $zero, L_80082244
    if (ctx->r15 != 0) {
        // 0x80082218: nop
    
            goto L_80082244;
    }
    // 0x80082218: nop

    // 0x8008221C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80082220: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80082224: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80082228: lbu         $a3, 0x7938($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X7938);
    // 0x8008222C: lbu         $a2, 0x7934($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7934);
    // 0x80082230: lbu         $a1, 0x7932($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X7932);
    // 0x80082234: jal         0x8001D638
    // 0x80082238: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x80082238: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8008223C: b           L_80082260
    // 0x80082240: nop

        goto L_80082260;
    // 0x80082240: nop

L_80082244:
    // 0x80082244: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80082248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008224C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80082250: jal         0x8001D638
    // 0x80082254: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    Debug_SetBg(rdram, ctx);
        goto after_2;
    // 0x80082254: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x80082258: jal         0x8006D6F4
    // 0x8008225C: nop

    Skybox_ProcessDraw(rdram, ctx);
        goto after_3;
    // 0x8008225C: nop

    after_3:
L_80082260:
    // 0x80082260: b           L_8008227C
    // 0x80082264: nop

        goto L_8008227C;
    // 0x80082264: nop

L_80082268:
    // 0x80082268: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8008226C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80082270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80082274: jal         0x8001D638
    // 0x80082278: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    Debug_SetBg(rdram, ctx);
        goto after_4;
    // 0x80082278: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
L_8008227C:
    // 0x8008227C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80082280: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80082284: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082288: lwc1        $f6, 0x79C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X79C8);
    // 0x8008228C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80082290: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80082294: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80082298: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x8008229C: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x800822A0: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x800822A4: addiu       $a1, $sp, 0x3E
    ctx->r5 = ADD32(ctx->r29, 0X3E);
    // 0x800822A8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x800822AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800822B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800822B4: jal         0x80036E70
    // 0x800822B8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_5;
    // 0x800822B8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x800822BC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800822C0: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x800822C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800822C8: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x800822CC: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x800822D0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x800822D4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800822D8: lui         $t0, 0xBC00
    ctx->r8 = S32(0XBC00 << 16);
    // 0x800822DC: ori         $t0, $t0, 0xE
    ctx->r8 = ctx->r8 | 0XE;
    // 0x800822E0: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x800822E4: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x800822E8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800822EC: nop

    // 0x800822F0: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x800822F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800822F8: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x800822FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082300: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80082304: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082308: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x8008230C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082310: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80082314: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082318: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x8008231C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082320: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80082324: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80082328: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x8008232C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80082330: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80082334: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80082338: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x8008233C: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80082340: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x80082344: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80082348: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8008234C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80082350: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80082354: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80082358: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8008235C: jal         0x80037188
    // 0x80082360: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_6;
    // 0x80082360: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80082364: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80082368: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8008236C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082370: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80082374: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80082378: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x8008237C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80082380: lui         $t6, 0x103
    ctx->r14 = S32(0X103 << 16);
    // 0x80082384: ori         $t6, $t6, 0x40
    ctx->r14 = ctx->r14 | 0X40;
    // 0x80082388: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8008238C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80082390: lw          $t8, -0x1EFC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1EFC);
    // 0x80082394: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80082398: nop

    // 0x8008239C: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x800823A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800823A4: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x800823A8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800823AC: lb          $t0, 0x7A20($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X7A20);
    // 0x800823B0: nop

    // 0x800823B4: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x800823B8: beq         $at, $zero, L_80082430
    if (ctx->r1 == 0) {
        // 0x800823BC: nop
    
            goto L_80082430;
    }
    // 0x800823BC: nop

    // 0x800823C0: jal         0x80087C58
    // 0x800823C4: nop

    func_80087C58(rdram, ctx);
        goto after_7;
    // 0x800823C4: nop

    after_7:
    // 0x800823C8: jal         0x8007E678
    // 0x800823CC: nop

    func_8007E678(rdram, ctx);
        goto after_8;
    // 0x800823CC: nop

    after_8:
    // 0x800823D0: jal         0x8001C464
    // 0x800823D4: nop

    func_8001C464(rdram, ctx);
        goto after_9;
    // 0x800823D4: nop

    after_9:
    // 0x800823D8: jal         0x8001C70C
    // 0x800823DC: nop

    func_8001C70C(rdram, ctx);
        goto after_10;
    // 0x800823DC: nop

    after_10:
    // 0x800823E0: jal         0x8001C96C
    // 0x800823E4: nop

    func_8001C96C(rdram, ctx);
        goto after_11;
    // 0x800823E4: nop

    after_11:
    // 0x800823E8: jal         0x8006E7CC
    // 0x800823EC: nop

    func_8006E7CC(rdram, ctx);
        goto after_12;
    // 0x800823EC: nop

    after_12:
    // 0x800823F0: jal         0x80087D70
    // 0x800823F4: nop

    func_80087D70(rdram, ctx);
        goto after_13;
    // 0x800823F4: nop

    after_13:
    // 0x800823F8: jal         0x8001C5B8
    // 0x800823FC: nop

    func_8001C5B8(rdram, ctx);
        goto after_14;
    // 0x800823FC: nop

    after_14:
    // 0x80082400: jal         0x8007F3F0
    // 0x80082404: nop

    func_8007F3F0(rdram, ctx);
        goto after_15;
    // 0x80082404: nop

    after_15:
    // 0x80082408: jal         0x800657E8
    // 0x8008240C: nop

    func_800657E8(rdram, ctx);
        goto after_16;
    // 0x8008240C: nop

    after_16:
    // 0x80082410: jal         0x800818CC
    // 0x80082414: nop

    func_800818CC(rdram, ctx);
        goto after_17;
    // 0x80082414: nop

    after_17:
    // 0x80082418: jal         0x80077528
    // 0x8008241C: nop

    func_80077528(rdram, ctx);
        goto after_18;
    // 0x8008241C: nop

    after_18:
    // 0x80082420: jal         0x8008A000
    // 0x80082424: nop

    Cutscene_HandlePrintText(rdram, ctx);
        goto after_19;
    // 0x80082424: nop

    after_19:
    // 0x80082428: b           L_80082440
    // 0x8008242C: nop

        goto L_80082440;
    // 0x8008242C: nop

L_80082430:
    // 0x80082430: jal         0x80087C58
    // 0x80082434: nop

    func_80087C58(rdram, ctx);
        goto after_20;
    // 0x80082434: nop

    after_20:
    // 0x80082438: jal         0x80087D70
    // 0x8008243C: nop

    func_80087D70(rdram, ctx);
        goto after_21;
    // 0x8008243C: nop

    after_21:
L_80082440:
    // 0x80082440: jal         0x80070B1C
    // 0x80082444: nop

    func_80070B1C(rdram, ctx);
        goto after_22;
    // 0x80082444: nop

    after_22:
    // 0x80082448: jal         0x80071240
    // 0x8008244C: nop

    func_80071240(rdram, ctx);
        goto after_23;
    // 0x8008244C: nop

    after_23:
    // 0x80082450: jal         0x8007070C
    // 0x80082454: nop

    func_8007070C(rdram, ctx);
        goto after_24;
    // 0x80082454: nop

    after_24:
    // 0x80082458: jal         0x8006F780
    // 0x8008245C: nop

    func_8006F780(rdram, ctx);
        goto after_25;
    // 0x8008245C: nop

    after_25:
    // 0x80082460: jal         0x80064120
    // 0x80082464: nop

    func_80064120(rdram, ctx);
        goto after_26;
    // 0x80082464: nop

    after_26:
    // 0x80082468: jal         0x800FF7B4
    // 0x8008246C: nop

    func_800FF7B4(rdram, ctx);
        goto after_27;
    // 0x8008246C: nop

    after_27:
    // 0x80082470: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80082474: lb          $t1, -0x1C1C($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1C1C);
    // 0x80082478: nop

    // 0x8008247C: beq         $t1, $zero, L_80082490
    if (ctx->r9 == 0) {
        // 0x80082480: nop
    
            goto L_80082490;
    }
    // 0x80082480: nop

    // 0x80082484: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x80082488: jal         0x8005E6A0
    // 0x8008248C: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    Debug_DrawProfiler(rdram, ctx);
        goto after_28;
    // 0x8008248C: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_28:
L_80082490:
    // 0x80082490: b           L_80082498
    // 0x80082494: nop

        goto L_80082498;
    // 0x80082494: nop

L_80082498:
    // 0x80082498: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8008249C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800824A0: jr          $ra
    // 0x800824A4: nop

    return;
    // 0x800824A4: nop

;}
RECOMP_FUNC void func_800670E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800670E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800670EC: addiu       $t6, $t6, 0x7740
    ctx->r14 = ADD32(ctx->r14, 0X7740);
    // 0x800670F0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800670F4: addiu       $at, $zero, 0xFA
    ctx->r1 = ADD32(0, 0XFA);
    // 0x800670F8: beq         $t7, $at, L_80067110
    if (ctx->r15 == ctx->r1) {
        // 0x800670FC: nop
    
            goto L_80067110;
    }
    // 0x800670FC: nop

    // 0x80067100: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x80067104: addiu       $at, $zero, 0xFA
    ctx->r1 = ADD32(0, 0XFA);
    // 0x80067108: bne         $t8, $at, L_80067228
    if (ctx->r24 != ctx->r1) {
        // 0x8006710C: nop
    
            goto L_80067228;
    }
    // 0x8006710C: nop

L_80067110:
    // 0x80067110: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067114: sb          $zero, 0x76E0($at)
    MEM_B(0X76E0, ctx->r1) = 0;
    // 0x80067118: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006711C: addiu       $t9, $t9, 0x76F0
    ctx->r25 = ADD32(ctx->r25, 0X76F0);
    // 0x80067120: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x80067124: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80067128: addiu       $t1, $t1, 0x7700
    ctx->r9 = ADD32(ctx->r9, 0X7700);
    // 0x8006712C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80067130: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80067134: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80067138: addiu       $t2, $t2, 0x7710
    ctx->r10 = ADD32(ctx->r10, 0X7710);
    // 0x8006713C: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x80067140: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80067144: addiu       $t4, $t4, 0x7720
    ctx->r12 = ADD32(ctx->r12, 0X7720);
    // 0x80067148: addiu       $t3, $zero, -0x7530
    ctx->r11 = ADD32(0, -0X7530);
    // 0x8006714C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80067150: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80067154: addiu       $t7, $t7, 0x7730
    ctx->r15 = ADD32(ctx->r15, 0X7730);
    // 0x80067158: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8006715C: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x80067160: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80067164: lwc1        $f4, 0x4F60($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F60);
    // 0x80067168: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006716C: addiu       $t6, $t6, 0x7760
    ctx->r14 = ADD32(ctx->r14, 0X7760);
    // 0x80067170: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x80067174: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80067178: addiu       $t9, $t9, 0x7740
    ctx->r25 = ADD32(ctx->r25, 0X7740);
    // 0x8006717C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80067180: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80067184: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80067188: addiu       $t0, $t0, 0x7750
    ctx->r8 = ADD32(ctx->r8, 0X7750);
    // 0x8006718C: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80067190: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80067194: addiu       $t2, $t2, 0x7770
    ctx->r10 = ADD32(ctx->r10, 0X7770);
    // 0x80067198: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8006719C: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x800671A0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800671A4: addiu       $t3, $t3, 0x76F0
    ctx->r11 = ADD32(ctx->r11, 0X76F0);
    // 0x800671A8: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x800671AC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800671B0: addiu       $t5, $t5, 0x7700
    ctx->r13 = ADD32(ctx->r13, 0X7700);
    // 0x800671B4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800671B8: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x800671BC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800671C0: addiu       $t7, $t7, 0x7710
    ctx->r15 = ADD32(ctx->r15, 0X7710);
    // 0x800671C4: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x800671C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800671CC: addiu       $t8, $t8, 0x7720
    ctx->r24 = ADD32(ctx->r24, 0X7720);
    // 0x800671D0: addiu       $t6, $zero, 0x7530
    ctx->r14 = ADD32(0, 0X7530);
    // 0x800671D4: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x800671D8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800671DC: addiu       $t0, $t0, 0x7730
    ctx->r8 = ADD32(ctx->r8, 0X7730);
    // 0x800671E0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800671E4: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x800671E8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800671EC: lwc1        $f6, 0x4F64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F64);
    // 0x800671F0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800671F4: addiu       $t1, $t1, 0x7760
    ctx->r9 = ADD32(ctx->r9, 0X7760);
    // 0x800671F8: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
    // 0x800671FC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80067200: addiu       $t3, $t3, 0x7740
    ctx->r11 = ADD32(ctx->r11, 0X7740);
    // 0x80067204: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80067208: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8006720C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80067210: addiu       $t4, $t4, 0x7750
    ctx->r12 = ADD32(ctx->r12, 0X7750);
    // 0x80067214: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x80067218: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006721C: addiu       $t7, $t7, 0x7770
    ctx->r15 = ADD32(ctx->r15, 0X7770);
    // 0x80067220: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80067224: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
L_80067228:
    // 0x80067228: jr          $ra
    // 0x8006722C: nop

    return;
    // 0x8006722C: nop

    // 0x80067230: jr          $ra
    // 0x80067234: nop

    return;
    // 0x80067234: nop

;}
RECOMP_FUNC void func_800D8958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D8958: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D895C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D8960: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D8964: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D8968: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D896C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D8970: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D8974: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D8978: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D897C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D8980: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D8984: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D8988: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D898C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D8990: nop

    // 0x800D8994: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D8998: nop

    // 0x800D899C: bne         $t1, $zero, L_800D89F0
    if (ctx->r9 != 0) {
        // 0x800D89A0: nop
    
            goto L_800D89F0;
    }
    // 0x800D89A0: nop

    // 0x800D89A4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D89A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D89AC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D89B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D89B4: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800D89B8: addiu       $t4, $t4, -0x75A0
    ctx->r12 = ADD32(ctx->r12, -0X75A0);
    // 0x800D89BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D89C0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800D89C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D89C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D89CC: jal         0x8001C0EC
    // 0x800D89D0: addiu       $a3, $zero, 0x172
    ctx->r7 = ADD32(0, 0X172);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D89D0: addiu       $a3, $zero, 0x172
    ctx->r7 = ADD32(0, 0X172);
    after_0:
    // 0x800D89D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D89D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D89DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D89E0: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800D89E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800D89E8: jal         0x800175F0
    // 0x800D89EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800D89EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800D89F0:
    // 0x800D89F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D89F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D89F8: jal         0x8001B44C
    // 0x800D89FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x800D89FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800D8A00: beq         $v0, $zero, L_800D8A18
    if (ctx->r2 == 0) {
        // 0x800D8A04: nop
    
            goto L_800D8A18;
    }
    // 0x800D8A04: nop

    // 0x800D8A08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D8A0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D8A10: jal         0x8002B0E4
    // 0x800D8A14: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x800D8A14: nop

    after_3:
L_800D8A18:
    // 0x800D8A18: b           L_800D8A20
    // 0x800D8A1C: nop

        goto L_800D8A20;
    // 0x800D8A1C: nop

L_800D8A20:
    // 0x800D8A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8A24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D8A28: jr          $ra
    // 0x800D8A2C: nop

    return;
    // 0x800D8A2C: nop

;}
RECOMP_FUNC void func_800C4F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4F64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C4F68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C4F6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C4F70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C4F74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C4F78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C4F7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4F80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C4F84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4F88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C4F8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C4F90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C4F94: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800C4F98: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C4F9C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C4FA0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C4FA4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C4FA8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C4FAC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C4FB0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C4FB4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C4FB8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C4FBC: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C4FC0: nop

    // 0x800C4FC4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x800C4FC8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C4FCC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C4FD0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C4FD4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C4FD8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C4FDC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C4FE0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C4FE4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C4FE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C4FEC: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C4FF0: nop

    // 0x800C4FF4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x800C4FF8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4FFC: nop

    // 0x800C5000: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800C5004: nop

    // 0x800C5008: bne         $t7, $zero, L_800C50E4
    if (ctx->r15 != 0) {
        // 0x800C500C: nop
    
            goto L_800C50E4;
    }
    // 0x800C500C: nop

    // 0x800C5010: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5014: nop

    // 0x800C5018: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800C501C: nop

    // 0x800C5020: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C5024: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800C5028: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800C502C: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x800C5030: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x800C5034: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C5038: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800C503C: addiu       $t3, $t3, -0x7EF8
    ctx->r11 = ADD32(ctx->r11, -0X7EF8);
    // 0x800C5040: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C5044: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800C5048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C504C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C5050: jal         0x8001C0EC
    // 0x800C5054: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C5054: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x800C5058: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C505C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C5060: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C5064: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C5068: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C506C: jal         0x8001ABF4
    // 0x800C5070: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C5070: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800C5074: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800C5078: addiu       $t4, $t4, -0x7EF8
    ctx->r12 = ADD32(ctx->r12, -0X7EF8);
    // 0x800C507C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800C5080: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800C5084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C5088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C508C: jal         0x8001C0EC
    // 0x800C5090: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800C5090: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_2:
    // 0x800C5094: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800C5098: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C509C: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C50A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C50A4: jal         0x8001ABF4
    // 0x800C50A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800C50A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800C50AC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800C50B0: addiu       $t5, $t5, -0x7EF8
    ctx->r13 = ADD32(ctx->r13, -0X7EF8);
    // 0x800C50B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800C50B8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800C50BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C50C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C50C4: jal         0x8001C0EC
    // 0x800C50C8: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800C50C8: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_4:
    // 0x800C50CC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800C50D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C50D4: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C50D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C50DC: jal         0x8001ABF4
    // 0x800C50E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800C50E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_800C50E4:
    // 0x800C50E4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C50E8: nop

    // 0x800C50EC: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800C50F0: nop

    // 0x800C50F4: bne         $t7, $zero, L_800C5118
    if (ctx->r15 != 0) {
        // 0x800C50F8: nop
    
            goto L_800C5118;
    }
    // 0x800C50F8: nop

    // 0x800C50FC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5100: nop

    // 0x800C5104: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800C5108: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800C510C: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x800C5110: b           L_800C5130
    // 0x800C5114: sh          $t0, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r8;
        goto L_800C5130;
    // 0x800C5114: sh          $t0, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r8;
L_800C5118:
    // 0x800C5118: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800C511C: nop

    // 0x800C5120: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800C5124: nop

    // 0x800C5128: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800C512C: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
L_800C5130:
    // 0x800C5130: b           L_800C5138
    // 0x800C5134: nop

        goto L_800C5138;
    // 0x800C5134: nop

L_800C5138:
    // 0x800C5138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C513C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C5140: jr          $ra
    // 0x800C5144: nop

    return;
    // 0x800C5144: nop

;}
RECOMP_FUNC void func_8006E160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E168: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8006E16C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8006E170: ori         $at, $zero, 0xBA60
    ctx->r1 = 0 | 0XBA60;
    // 0x8006E174: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8006E178: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E17C: sw          $t7, 0x7594($at)
    MEM_W(0X7594, ctx->r1) = ctx->r15;
    // 0x8006E180: jal         0x8001A928
    // 0x8006E184: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8006E184: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    after_0:
    // 0x8006E188: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    // 0x8006E18C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006E190: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006E194: jal         0x80019448
    // 0x8006E198: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x8006E198: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8006E19C: b           L_8006E1A4
    // 0x8006E1A0: nop

        goto L_8006E1A4;
    // 0x8006E1A0: nop

L_8006E1A4:
    // 0x8006E1A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E1A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006E1AC: jr          $ra
    // 0x8006E1B0: nop

    return;
    // 0x8006E1B0: nop

;}
RECOMP_FUNC void func_800744D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800744D8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800744DC: lb          $t6, 0x523E($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X523E);
    // 0x800744E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800744E4: bne         $t6, $at, L_80074500
    if (ctx->r14 != ctx->r1) {
        // 0x800744E8: nop
    
            goto L_80074500;
    }
    // 0x800744E8: nop

    // 0x800744EC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800744F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800744F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800744F8: b           L_80074510
    // 0x800744FC: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
        goto L_80074510;
    // 0x800744FC: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
L_80074500:
    // 0x80074500: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80074504: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80074508: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007450C: swc1        $f6, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f6.u32l;
L_80074510:
    // 0x80074510: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80074514: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074518: swc1        $f8, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f8.u32l;
    // 0x8007451C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80074520: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074524: swc1        $f10, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f10.u32l;
    // 0x80074528: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007452C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074530: swc1        $f16, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f16.u32l;
    // 0x80074534: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80074538: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007453C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074540: swc1        $f18, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f18.u32l;
    // 0x80074544: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80074548: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007454C: swc1        $f4, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f4.u32l;
    // 0x80074550: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80074554: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80074558: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007455C: swc1        $f6, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f6.u32l;
    // 0x80074560: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80074564: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80074568: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007456C: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80074570: nop

    // 0x80074574: swc1        $f8, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f8.u32l;
    // 0x80074578: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007457C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80074580: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80074584: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80074588: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8007458C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074590: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80074594: swc1        $f18, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f18.u32l;
    // 0x80074598: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007459C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x800745A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800745A4: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800745A8: nop

    // 0x800745AC: swc1        $f4, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f4.u32l;
    // 0x800745B0: jr          $ra
    // 0x800745B4: nop

    return;
    // 0x800745B4: nop

    // 0x800745B8: jr          $ra
    // 0x800745BC: nop

    return;
    // 0x800745BC: nop

;}
RECOMP_FUNC void func_800FD408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FD408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FD40C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FD410: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD414: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD418: jal         0x8002B0E4
    // 0x800FD41C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800FD41C: nop

    after_0:
    // 0x800FD420: b           L_800FD430
    // 0x800FD424: nop

        goto L_800FD430;
    // 0x800FD424: nop

    // 0x800FD428: b           L_800FD430
    // 0x800FD42C: nop

        goto L_800FD430;
    // 0x800FD42C: nop

L_800FD430:
    // 0x800FD430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FD434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FD438: jr          $ra
    // 0x800FD43C: nop

    return;
    // 0x800FD43C: nop

;}
RECOMP_FUNC void func_800BA1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA1E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BA1E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA1EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BA1F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BA1F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BA1F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BA1FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA200: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BA204: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA208: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BA20C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BA210: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BA214: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800BA218: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800BA21C: nop

    // 0x800BA220: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BA224: nop

    // 0x800BA228: bne         $t1, $zero, L_800BA284
    if (ctx->r9 != 0) {
        // 0x800BA22C: nop
    
            goto L_800BA284;
    }
    // 0x800BA22C: nop

    // 0x800BA230: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800BA234: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BA238: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BA23C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BA240: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800BA244: nop

    // 0x800BA248: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BA24C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800BA250: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800BA254: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800BA258: nop

    // 0x800BA25C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BA260: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800BA264: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800BA268: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800BA26C: nop

    // 0x800BA270: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800BA274: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA278: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA27C: jal         0x8001BB34
    // 0x800BA280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800BA280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800BA284:
    // 0x800BA284: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA288: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA28C: jal         0x80029C40
    // 0x800BA290: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800BA290: nop

    after_1:
    // 0x800BA294: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA298: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA29C: jal         0x80029D04
    // 0x800BA2A0: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800BA2A0: nop

    after_2:
    // 0x800BA2A4: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x800BA2A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800BA2AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800BA2B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA2B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA2B8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800BA2BC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800BA2C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800BA2C4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BA2C8: jal         0x800295C0
    // 0x800BA2CC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x800BA2CC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x800BA2D0: beq         $v0, $zero, L_800BA31C
    if (ctx->r2 == 0) {
        // 0x800BA2D4: nop
    
            goto L_800BA31C;
    }
    // 0x800BA2D4: nop

    // 0x800BA2D8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800BA2DC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800BA2E0: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800BA2E4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800BA2E8: nop

    // 0x800BA2EC: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800BA2F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA2F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA2F8: jal         0x8001BBDC
    // 0x800BA2FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x800BA2FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800BA300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA308: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BA30C: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x800BA310: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800BA314: jal         0x800175F0
    // 0x800BA318: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x800BA318: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_800BA31C:
    // 0x800BA31C: b           L_800BA324
    // 0x800BA320: nop

        goto L_800BA324;
    // 0x800BA320: nop

L_800BA324:
    // 0x800BA324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA328: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800BA32C: jr          $ra
    // 0x800BA330: nop

    return;
    // 0x800BA330: nop

;}
RECOMP_FUNC void func_800CB834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB834: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800CB838: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CB83C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800CB840: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CB844: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800CB848: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800CB84C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800CB850: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CB854: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800CB858: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x800CB85C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800CB860: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800CB864: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CB868: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800CB86C: nop

    // 0x800CB870: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x800CB874: nop

    // 0x800CB878: bc1f        L_800CB8A0
    if (!c1cs) {
        // 0x800CB87C: nop
    
            goto L_800CB8A0;
    }
    // 0x800CB87C: nop

    // 0x800CB880: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800CB884: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800CB888: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CB88C: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800CB890: nop

    // 0x800CB894: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800CB898: b           L_800CB8BC
    // 0x800CB89C: swc1        $f16, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f16.u32l;
        goto L_800CB8BC;
    // 0x800CB89C: swc1        $f16, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f16.u32l;
L_800CB8A0:
    // 0x800CB8A0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800CB8A4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800CB8A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CB8AC: lwc1        $f18, 0x3C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800CB8B0: nop

    // 0x800CB8B4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800CB8B8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
L_800CB8BC:
    // 0x800CB8BC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800CB8C0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800CB8C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CB8C8: lwc1        $f8, 0x3C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800CB8CC: nop

    // 0x800CB8D0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800CB8D4: nop

    // 0x800CB8D8: bc1f        L_800CB900
    if (!c1cs) {
        // 0x800CB8DC: nop
    
            goto L_800CB900;
    }
    // 0x800CB8DC: nop

    // 0x800CB8E0: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800CB8E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800CB8E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CB8EC: lwc1        $f18, 0x20($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X20);
    // 0x800CB8F0: nop

    // 0x800CB8F4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800CB8F8: b           L_800CB940
    // 0x800CB8FC: swc1        $f4, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f4.u32l;
        goto L_800CB940;
    // 0x800CB8FC: swc1        $f4, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f4.u32l;
L_800CB900:
    // 0x800CB900: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800CB904: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800CB908: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800CB90C: lwc1        $f6, 0x3C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800CB910: nop

    // 0x800CB914: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800CB918: nop

    // 0x800CB91C: bc1f        L_800CB940
    if (!c1cs) {
        // 0x800CB920: nop
    
            goto L_800CB940;
    }
    // 0x800CB920: nop

    // 0x800CB924: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800CB928: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800CB92C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CB930: lwc1        $f16, 0x18($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X18);
    // 0x800CB934: nop

    // 0x800CB938: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800CB93C: swc1        $f18, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f18.u32l;
L_800CB940:
    // 0x800CB940: b           L_800CB948
    // 0x800CB944: nop

        goto L_800CB948;
    // 0x800CB944: nop

L_800CB948:
    // 0x800CB948: jr          $ra
    // 0x800CB94C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800CB94C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8009B97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B97C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009B980: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009B984: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009B988: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009B98C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009B990: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009B994: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009B998: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009B99C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009B9A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009B9A4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009B9A8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009B9AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009B9B0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009B9B4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009B9B8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009B9BC: addiu       $a1, $a1, 0x3538
    ctx->r5 = ADD32(ctx->r5, 0X3538);
    // 0x8009B9C0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009B9C4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009B9C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009B9CC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009B9D0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009B9D4: jal         0x80027464
    // 0x8009B9D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009B9D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009B9DC: b           L_8009B9E4
    // 0x8009B9E0: nop

        goto L_8009B9E4;
    // 0x8009B9E0: nop

L_8009B9E4:
    // 0x8009B9E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B9E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009B9EC: jr          $ra
    // 0x8009B9F0: nop

    return;
    // 0x8009B9F0: nop

;}
RECOMP_FUNC void func_8009E7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E7E0: jr          $ra
    // 0x8009E7E4: nop

    return;
    // 0x8009E7E4: nop

    // 0x8009E7E8: jr          $ra
    // 0x8009E7EC: nop

    return;
    // 0x8009E7EC: nop

;}
RECOMP_FUNC void func_800AB308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB308: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AB30C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AB310: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AB314: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AB318: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AB31C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AB320: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AB324: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AB328: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AB32C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AB330: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AB334: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AB338: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AB33C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AB340: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AB344: nop

    // 0x800AB348: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AB34C: nop

    // 0x800AB350: bne         $t1, $zero, L_800AB3A0
    if (ctx->r9 != 0) {
        // 0x800AB354: nop
    
            goto L_800AB3A0;
    }
    // 0x800AB354: nop

    // 0x800AB358: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AB35C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AB360: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AB364: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AB368: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AB36C: nop

    // 0x800AB370: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AB374: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AB378: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AB37C: nop

    // 0x800AB380: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AB384: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AB388: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800AB38C: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800AB390: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB394: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB398: jal         0x8001BBDC
    // 0x800AB39C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800AB39C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_800AB3A0:
    // 0x800AB3A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB3A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB3A8: jal         0x80029C40
    // 0x800AB3AC: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800AB3AC: nop

    after_1:
    // 0x800AB3B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB3B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB3B8: jal         0x80029D04
    // 0x800AB3BC: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800AB3BC: nop

    after_2:
    // 0x800AB3C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AB3C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB3C8: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x800AB3CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB3D0: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x800AB3D4: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800AB3D8: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800AB3DC: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800AB3E0: jal         0x8001BB34
    // 0x800AB3E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800AB3E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800AB3E8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AB3EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AB3F0: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x800AB3F4: nop

    // 0x800AB3F8: bne         $t2, $at, L_800AB438
    if (ctx->r10 != ctx->r1) {
        // 0x800AB3FC: nop
    
            goto L_800AB438;
    }
    // 0x800AB3FC: nop

    // 0x800AB400: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AB404: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800AB408: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800AB40C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AB410: nop

    // 0x800AB414: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800AB418: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB41C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB420: jal         0x8001BB34
    // 0x800AB424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x800AB424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800AB428: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB42C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB430: jal         0x8001BBDC
    // 0x800AB434: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800AB434: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_800AB438:
    // 0x800AB438: b           L_800AB440
    // 0x800AB43C: nop

        goto L_800AB440;
    // 0x800AB43C: nop

L_800AB440:
    // 0x800AB440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AB444: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AB448: jr          $ra
    // 0x800AB44C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800AB44C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80076720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076720: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80076724: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076728: lh          $t6, 0x792A($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X792A);
    // 0x8007672C: nop

    // 0x80076730: beq         $t6, $zero, L_8007676C
    if (ctx->r14 == 0) {
        // 0x80076734: nop
    
            goto L_8007676C;
    }
    // 0x80076734: nop

    // 0x80076738: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007673C: lh          $t7, 0x792A($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X792A);
    // 0x80076740: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076744: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80076748: sh          $t8, 0x792A($at)
    MEM_H(0X792A, ctx->r1) = ctx->r24;
    // 0x8007674C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80076750: lh          $t9, 0x792A($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X792A);
    // 0x80076754: nop

    // 0x80076758: bne         $t9, $zero, L_8007676C
    if (ctx->r25 != 0) {
        // 0x8007675C: nop
    
            goto L_8007676C;
    }
    // 0x8007675C: nop

    // 0x80076760: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80076764: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076768: sb          $t0, 0x790A($at)
    MEM_B(0X790A, ctx->r1) = ctx->r8;
L_8007676C:
    // 0x8007676C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80076770: lb          $t1, 0x790A($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X790A);
    // 0x80076774: nop

    // 0x80076778: bne         $t1, $zero, L_80076788
    if (ctx->r9 != 0) {
        // 0x8007677C: nop
    
            goto L_80076788;
    }
    // 0x8007677C: nop

    // 0x80076780: b           L_80076888
    // 0x80076784: nop

        goto L_80076888;
    // 0x80076784: nop

L_80076788:
    // 0x80076788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007678C: lb          $a0, 0x790E($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X790E);
    // 0x80076790: nop

    // 0x80076794: beq         $a0, $zero, L_800767B0
    if (ctx->r4 == 0) {
        // 0x80076798: nop
    
            goto L_800767B0;
    }
    // 0x80076798: nop

    // 0x8007679C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800767A0: beq         $a0, $at, L_800767FC
    if (ctx->r4 == ctx->r1) {
        // 0x800767A4: nop
    
            goto L_800767FC;
    }
    // 0x800767A4: nop

    // 0x800767A8: b           L_80076880
    // 0x800767AC: nop

        goto L_80076880;
    // 0x800767AC: nop

L_800767B0:
    // 0x800767B0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800767B4: lb          $t2, 0x7916($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7916);
    // 0x800767B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800767BC: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x800767C0: sb          $t3, 0x7916($at)
    MEM_B(0X7916, ctx->r1) = ctx->r11;
    // 0x800767C4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800767C8: lb          $t4, 0x7916($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7916);
    // 0x800767CC: nop

    // 0x800767D0: slti        $at, $t4, 0x28
    ctx->r1 = SIGNED(ctx->r12) < 0X28 ? 1 : 0;
    // 0x800767D4: bne         $at, $zero, L_800767F4
    if (ctx->r1 != 0) {
        // 0x800767D8: nop
    
            goto L_800767F4;
    }
    // 0x800767D8: nop

    // 0x800767DC: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x800767E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800767E4: sb          $t5, 0x7916($at)
    MEM_B(0X7916, ctx->r1) = ctx->r13;
    // 0x800767E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800767EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800767F0: sb          $t6, 0x790E($at)
    MEM_B(0X790E, ctx->r1) = ctx->r14;
L_800767F4:
    // 0x800767F4: b           L_80076880
    // 0x800767F8: nop

        goto L_80076880;
    // 0x800767F8: nop

L_800767FC:
    // 0x800767FC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80076800: lbu         $t7, 0x791A($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X791A);
    // 0x80076804: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076808: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8007680C: sb          $t8, 0x791A($at)
    MEM_B(0X791A, ctx->r1) = ctx->r24;
    // 0x80076810: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80076814: lhu         $t9, -0x1C7C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C7C);
    // 0x80076818: nop

    // 0x8007681C: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80076820: beq         $t0, $zero, L_80076878
    if (ctx->r8 == 0) {
        // 0x80076824: nop
    
            goto L_80076878;
    }
    // 0x80076824: nop

    // 0x80076828: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007682C: lhu         $t1, -0x1C82($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1C82);
    // 0x80076830: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80076834: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x80076838: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x8007683C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076840: sh          $t2, -0x1C82($at)
    MEM_H(-0X1C82, ctx->r1) = ctx->r10;
    // 0x80076844: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80076848: lhu         $t3, -0x1C7C($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X1C7C);
    // 0x8007684C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80076850: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x80076854: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x80076858: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007685C: sh          $t4, -0x1C7C($at)
    MEM_H(-0X1C7C, ctx->r1) = ctx->r12;
    // 0x80076860: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076864: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80076868: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8007686C: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x80076870: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076874: sb          $zero, 0x790A($at)
    MEM_B(0X790A, ctx->r1) = 0;
L_80076878:
    // 0x80076878: b           L_80076880
    // 0x8007687C: nop

        goto L_80076880;
    // 0x8007687C: nop

L_80076880:
    // 0x80076880: b           L_80076888
    // 0x80076884: nop

        goto L_80076888;
    // 0x80076884: nop

L_80076888:
    // 0x80076888: jr          $ra
    // 0x8007688C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007688C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8005FBA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FBA4: jr          $ra
    // 0x8005FBA8: nop

    return;
    // 0x8005FBA8: nop

    // 0x8005FBAC: jr          $ra
    // 0x8005FBB0: nop

    return;
    // 0x8005FBB0: nop

;}
RECOMP_FUNC void func_800A1DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1DAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A1DB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A1DB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A1DB8: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x800A1DBC: jal         0x800A1C40
    // 0x800A1DC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A1C40(rdram, ctx);
        goto after_0;
    // 0x800A1DC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800A1DC4: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x800A1DC8: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x800A1DCC: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800A1DD0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800A1DD4: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x800A1DD8: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
    // 0x800A1DDC: jal         0x800A1C40
    // 0x800A1DE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A1C40(rdram, ctx);
        goto after_1;
    // 0x800A1DE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800A1DE4: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x800A1DE8: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x800A1DEC: sra         $t9, $s0, 16
    ctx->r25 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800A1DF0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800A1DF4: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x800A1DF8: sh          $t1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r9;
    // 0x800A1DFC: jal         0x800A1C40
    // 0x800A1E00: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800A1C40(rdram, ctx);
        goto after_2;
    // 0x800A1E00: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x800A1E04: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x800A1E08: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800A1E0C: sra         $t2, $s0, 16
    ctx->r10 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800A1E10: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800A1E14: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x800A1E18: sh          $t4, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r12;
    // 0x800A1E1C: lh          $v0, 0x26($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X26);
    // 0x800A1E20: b           L_800A1E30
    // 0x800A1E24: nop

        goto L_800A1E30;
    // 0x800A1E24: nop

    // 0x800A1E28: b           L_800A1E30
    // 0x800A1E2C: nop

        goto L_800A1E30;
    // 0x800A1E2C: nop

L_800A1E30:
    // 0x800A1E30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1E34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A1E38: jr          $ra
    // 0x800A1E3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A1E3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800623E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800623E0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800623E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800623E8: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x800623EC: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x800623F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800623F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800623F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800623FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80062400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80062404: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80062408: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8006240C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80062410: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x80062414: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80062418: nop

    // 0x8006241C: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80062420: nop

    // 0x80062424: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x80062428: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8006242C: nop

    // 0x80062430: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80062434: nop

    // 0x80062438: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x8006243C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x80062440: nop

    // 0x80062444: lwc1        $f8, 0xD4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x80062448: nop

    // 0x8006244C: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x80062450: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80062454: nop

    // 0x80062458: lwc1        $f10, 0xD8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XD8);
    // 0x8006245C: nop

    // 0x80062460: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x80062464: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80062468: nop

    // 0x8006246C: lwc1        $f16, 0xC($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XC);
    // 0x80062470: nop

    // 0x80062474: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x80062478: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8006247C: nop

    // 0x80062480: lwc1        $f18, 0x10($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X10);
    // 0x80062484: nop

    // 0x80062488: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x8006248C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80062490: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80062494: lwc1        $f9, 0x3D00($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3D00);
    // 0x80062498: lwc1        $f8, 0x3D04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3D04);
    // 0x8006249C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800624A0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x800624A4: nop

    // 0x800624A8: bc1f        L_800624C0
    if (!c1cs) {
        // 0x800624AC: nop
    
            goto L_800624C0;
    }
    // 0x800624AC: nop

    // 0x800624B0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800624B4: lwc1        $f10, 0x3D08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3D08);
    // 0x800624B8: nop

    // 0x800624BC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
L_800624C0:
    // 0x800624C0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800624C4: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800624C8: lwc1        $f5, 0x3D10($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X3D10);
    // 0x800624CC: lwc1        $f4, 0x3D14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3D14);
    // 0x800624D0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800624D4: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x800624D8: nop

    // 0x800624DC: bc1f        L_800624F4
    if (!c1cs) {
        // 0x800624E0: nop
    
            goto L_800624F4;
    }
    // 0x800624E0: nop

    // 0x800624E4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800624E8: lwc1        $f6, 0x3D18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3D18);
    // 0x800624EC: nop

    // 0x800624F0: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
L_800624F4:
    // 0x800624F4: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x800624F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800624FC: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80062500: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80062504: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80062508: nop

    // 0x8006250C: div.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80062510: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x80062514: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x80062518: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006251C: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80062520: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80062524: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80062528: nop

    // 0x8006252C: div.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80062530: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x80062534: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80062538: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8006253C: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80062540: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80062544: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80062548: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x8006254C: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80062550: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80062554: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80062558: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8006255C: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80062560: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x80062564: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x80062568: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8006256C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80062570: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80062574: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80062578: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006257C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80062580: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80062584: lh          $t8, 0x4298($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4298);
    // 0x80062588: nop

    // 0x8006258C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80062590: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80062594: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80062598: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8006259C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800625A0: lw          $t1, -0x3D68($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3D68);
    // 0x800625A4: nop

    // 0x800625A8: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x800625AC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800625B0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800625B4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x800625B8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800625BC: lbu         $t4, -0x3D63($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3D63);
    // 0x800625C0: nop

    // 0x800625C4: sb          $t4, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r12;
    // 0x800625C8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800625CC: nop

    // 0x800625D0: lh          $t6, 0x14($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X14);
    // 0x800625D4: nop

    // 0x800625D8: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x800625DC: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800625E0: lbu         $t9, 0x3F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3F);
    // 0x800625E4: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x800625E8: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x800625EC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800625F0: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x800625F4: lw          $t3, 0xC($t7)
    ctx->r11 = MEM_W(ctx->r15, 0XC);
    // 0x800625F8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800625FC: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x80062600: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80062604: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80062608: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x8006260C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80062610: lw          $t9, -0x3560($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3560);
    // 0x80062614: nop

    // 0x80062618: addu        $t0, $t5, $t9
    ctx->r8 = ADD32(ctx->r13, ctx->r25);
    // 0x8006261C: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x80062620: nop

    // 0x80062624: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x80062628: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8006262C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80062630: bne         $t7, $at, L_80062690
    if (ctx->r15 != ctx->r1) {
        // 0x80062634: nop
    
            goto L_80062690;
    }
    // 0x80062634: nop

    // 0x80062638: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8006263C: sh          $t3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r11;
    // 0x80062640: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80062644: lbu         $t6, 0x3F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3F);
    // 0x80062648: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x8006264C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80062650: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x80062654: lbu         $t5, 0x0($t8)
    ctx->r13 = MEM_BU(ctx->r24, 0X0);
    // 0x80062658: lw          $t0, 0xC($t2)
    ctx->r8 = MEM_W(ctx->r10, 0XC);
    // 0x8006265C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80062660: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x80062664: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80062668: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8006266C: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x80062670: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x80062674: lw          $t6, -0x3560($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3560);
    // 0x80062678: nop

    // 0x8006267C: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80062680: addiu       $t5, $t8, 0x10
    ctx->r13 = ADD32(ctx->r24, 0X10);
    // 0x80062684: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x80062688: b           L_800627B4
    // 0x8006268C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
        goto L_800627B4;
    // 0x8006268C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_80062690:
    // 0x80062690: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80062694: lbu         $t9, 0x3F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3F);
    // 0x80062698: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x8006269C: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x800626A0: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x800626A4: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x800626A8: lw          $t7, 0xC($t2)
    ctx->r15 = MEM_W(ctx->r10, 0XC);
    // 0x800626AC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800626B0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800626B4: addiu       $t9, $t9, -0x3560
    ctx->r25 = ADD32(ctx->r25, -0X3560);
    // 0x800626B8: sll         $t0, $t5, 3
    ctx->r8 = S32(ctx->r13 << 3);
    // 0x800626BC: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x800626C0: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x800626C4: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x800626C8: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x800626CC: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x800626D0: addu        $t2, $t8, $t3
    ctx->r10 = ADD32(ctx->r24, ctx->r11);
    // 0x800626D4: lbu         $t7, 0x5($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X5);
    // 0x800626D8: addu        $t5, $t6, $t8
    ctx->r13 = ADD32(ctx->r14, ctx->r24);
    // 0x800626DC: lbu         $t0, 0x4($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X4);
    // 0x800626E0: sll         $t4, $t7, 8
    ctx->r12 = S32(ctx->r15 << 8);
    // 0x800626E4: or          $t9, $t4, $t0
    ctx->r25 = ctx->r12 | ctx->r8;
    // 0x800626E8: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x800626EC: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x800626F0: nop

    // 0x800626F4: slti        $at, $t3, 0x12
    ctx->r1 = SIGNED(ctx->r11) < 0X12 ? 1 : 0;
    // 0x800626F8: bne         $at, $zero, L_8006270C
    if (ctx->r1 != 0) {
        // 0x800626FC: nop
    
            goto L_8006270C;
    }
    // 0x800626FC: nop

    // 0x80062700: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80062704: b           L_80062710
    // 0x80062708: sh          $t2, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r10;
        goto L_80062710;
    // 0x80062708: sh          $t2, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r10;
L_8006270C:
    // 0x8006270C: sh          $zero, 0x36($sp)
    MEM_H(0X36, ctx->r29) = 0;
L_80062710:
    // 0x80062710: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80062714: lbu         $t6, 0x3F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3F);
    // 0x80062718: lw          $t1, 0x4($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X4);
    // 0x8006271C: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x80062720: addu        $t8, $t1, $t6
    ctx->r24 = ADD32(ctx->r9, ctx->r14);
    // 0x80062724: lbu         $t5, 0x0($t8)
    ctx->r13 = MEM_BU(ctx->r24, 0X0);
    // 0x80062728: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x8006272C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80062730: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x80062734: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80062738: sll         $t1, $t2, 3
    ctx->r9 = S32(ctx->r10 << 3);
    // 0x8006273C: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x80062740: addu        $t9, $t0, $t4
    ctx->r25 = ADD32(ctx->r8, ctx->r12);
    // 0x80062744: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x80062748: lw          $t6, -0x3560($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3560);
    // 0x8006274C: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x80062750: addiu       $t0, $t7, 0x7
    ctx->r8 = ADD32(ctx->r15, 0X7);
    // 0x80062754: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80062758: and         $t4, $t0, $at
    ctx->r12 = ctx->r8 & ctx->r1;
    // 0x8006275C: addu        $t8, $t3, $t6
    ctx->r24 = ADD32(ctx->r11, ctx->r14);
    // 0x80062760: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x80062764: addiu       $t2, $t9, 0x10
    ctx->r10 = ADD32(ctx->r25, 0X10);
    // 0x80062768: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x8006276C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80062770: lbu         $t6, 0x3F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3F);
    // 0x80062774: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x80062778: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x8006277C: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x80062780: lbu         $t7, 0x0($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X0);
    // 0x80062784: lw          $t8, 0xC($t1)
    ctx->r24 = MEM_W(ctx->r9, 0XC);
    // 0x80062788: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006278C: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80062790: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80062794: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x80062798: addu        $t4, $t8, $t0
    ctx->r12 = ADD32(ctx->r24, ctx->r8);
    // 0x8006279C: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x800627A0: lw          $t6, -0x3560($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3560);
    // 0x800627A4: nop

    // 0x800627A8: addu        $t5, $t9, $t6
    ctx->r13 = ADD32(ctx->r25, ctx->r14);
    // 0x800627AC: addiu       $t7, $t5, 0x10
    ctx->r15 = ADD32(ctx->r13, 0X10);
    // 0x800627B0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_800627B4:
    // 0x800627B4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800627B8: lbu         $t0, 0x3F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3F);
    // 0x800627BC: lw          $t8, 0x4($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X4);
    // 0x800627C0: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x800627C4: addu        $t4, $t8, $t0
    ctx->r12 = ADD32(ctx->r24, ctx->r8);
    // 0x800627C8: lbu         $t2, 0x0($t4)
    ctx->r10 = MEM_BU(ctx->r12, 0X0);
    // 0x800627CC: lw          $t9, 0xC($t1)
    ctx->r25 = MEM_W(ctx->r9, 0XC);
    // 0x800627D0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800627D4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800627D8: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x800627DC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800627E0: addu        $t6, $t9, $t3
    ctx->r14 = ADD32(ctx->r25, ctx->r11);
    // 0x800627E4: lw          $t5, 0x0($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X0);
    // 0x800627E8: addu        $t4, $t8, $t0
    ctx->r12 = ADD32(ctx->r24, ctx->r8);
    // 0x800627EC: lw          $t2, 0x0($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X0);
    // 0x800627F0: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x800627F4: addu        $t1, $t5, $t2
    ctx->r9 = ADD32(ctx->r13, ctx->r10);
    // 0x800627F8: lbu         $t9, 0x9($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X9);
    // 0x800627FC: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x80062800: lbu         $t8, 0x8($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X8);
    // 0x80062804: sll         $t3, $t9, 8
    ctx->r11 = S32(ctx->r25 << 8);
    // 0x80062808: or          $t0, $t3, $t8
    ctx->r8 = ctx->r11 | ctx->r24;
    // 0x8006280C: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x80062810: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80062814: lbu         $t9, 0x3F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3F);
    // 0x80062818: lw          $t1, 0x4($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X4);
    // 0x8006281C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80062820: addu        $t4, $t1, $t9
    ctx->r12 = ADD32(ctx->r9, ctx->r25);
    // 0x80062824: lbu         $t6, 0x0($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X0);
    // 0x80062828: lw          $t7, 0xC($t2)
    ctx->r15 = MEM_W(ctx->r10, 0XC);
    // 0x8006282C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80062830: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80062834: addiu       $t9, $t9, -0x3560
    ctx->r25 = ADD32(ctx->r25, -0X3560);
    // 0x80062838: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8006283C: addu        $t3, $t7, $t5
    ctx->r11 = ADD32(ctx->r15, ctx->r13);
    // 0x80062840: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x80062844: addu        $t4, $t1, $t9
    ctx->r12 = ADD32(ctx->r9, ctx->r25);
    // 0x80062848: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x8006284C: lw          $t3, 0x0($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X0);
    // 0x80062850: addu        $t2, $t8, $t6
    ctx->r10 = ADD32(ctx->r24, ctx->r14);
    // 0x80062854: lbu         $t7, 0xD($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0XD);
    // 0x80062858: addu        $t0, $t3, $t8
    ctx->r8 = ADD32(ctx->r11, ctx->r24);
    // 0x8006285C: lbu         $t1, 0xC($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XC);
    // 0x80062860: sll         $t5, $t7, 8
    ctx->r13 = S32(ctx->r15 << 8);
    // 0x80062864: or          $t9, $t5, $t1
    ctx->r25 = ctx->r13 | ctx->r9;
    // 0x80062868: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x8006286C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80062870: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80062874: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80062878: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8006287C: lh          $t7, 0x36($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X36);
    // 0x80062880: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80062884: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80062888: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x8006288C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x80062890: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80062894: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80062898: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8006289C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800628A0: jal         0x80060F00
    // 0x800628A4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_80060F00(rdram, ctx);
        goto after_0;
    // 0x800628A4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x800628A8: b           L_800628B0
    // 0x800628AC: nop

        goto L_800628B0;
    // 0x800628AC: nop

L_800628B0:
    // 0x800628B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800628B4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x800628B8: jr          $ra
    // 0x800628BC: nop

    return;
    // 0x800628BC: nop

;}
RECOMP_FUNC void func_800E9AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9AFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E9B00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E9B04: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E9B08: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E9B0C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E9B10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E9B14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E9B18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E9B1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E9B20: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E9B24: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E9B28: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E9B2C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800E9B30: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E9B34: nop

    // 0x800E9B38: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E9B3C: nop

    // 0x800E9B40: bne         $t1, $zero, L_800E9BE4
    if (ctx->r9 != 0) {
        // 0x800E9B44: nop
    
            goto L_800E9BE4;
    }
    // 0x800E9B44: nop

    // 0x800E9B48: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E9B4C: nop

    // 0x800E9B50: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E9B54: nop

    // 0x800E9B58: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E9B5C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E9B60: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E9B64: nop

    // 0x800E9B68: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E9B6C: nop

    // 0x800E9B70: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E9B74: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800E9B78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E9B7C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E9B80: nop

    // 0x800E9B84: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x800E9B88: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x800E9B8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E9B90: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E9B94: nop

    // 0x800E9B98: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800E9B9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E9BA0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800E9BA4: addiu       $t9, $t9, -0x6714
    ctx->r25 = ADD32(ctx->r25, -0X6714);
    // 0x800E9BA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E9BAC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800E9BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E9BB4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800E9BB8: jal         0x8001C0EC
    // 0x800E9BBC: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E9BBC: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    after_0:
    // 0x800E9BC0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E9BC4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800E9BC8: addiu       $t1, $t1, -0x66F4
    ctx->r9 = ADD32(ctx->r9, -0X66F4);
    // 0x800E9BCC: lh          $a0, 0xEC($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XEC);
    // 0x800E9BD0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800E9BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E9BD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E9BDC: jal         0x8001C0EC
    // 0x800E9BE0: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800E9BE0: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    after_1:
L_800E9BE4:
    // 0x800E9BE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E9BE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E9BEC: jal         0x80029C40
    // 0x800E9BF0: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800E9BF0: nop

    after_2:
    // 0x800E9BF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E9BF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E9BFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E9C00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E9C04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E9C08: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800E9C0C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E9C10: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800E9C14: jal         0x80029018
    // 0x800E9C18: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800E9C18: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x800E9C1C: beq         $v0, $zero, L_800E9C48
    if (ctx->r2 == 0) {
        // 0x800E9C20: nop
    
            goto L_800E9C48;
    }
    // 0x800E9C20: nop

    // 0x800E9C24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E9C28: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E9C2C: nop

    // 0x800E9C30: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
    // 0x800E9C34: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E9C38: nop

    // 0x800E9C3C: lwc1        $f18, 0x2C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800E9C40: nop

    // 0x800E9C44: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
L_800E9C48:
    // 0x800E9C48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E9C4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E9C50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E9C54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E9C58: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800E9C5C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800E9C60: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E9C64: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800E9C68: jal         0x800295C0
    // 0x800E9C6C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800E9C6C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800E9C70: beq         $v0, $zero, L_800E9C88
    if (ctx->r2 == 0) {
        // 0x800E9C74: nop
    
            goto L_800E9C88;
    }
    // 0x800E9C74: nop

    // 0x800E9C78: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E9C7C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E9C80: b           L_800E9C98
    // 0x800E9C84: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
        goto L_800E9C98;
    // 0x800E9C84: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
L_800E9C88:
    // 0x800E9C88: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800E9C8C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E9C90: nop

    // 0x800E9C94: swc1        $f10, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f10.u32l;
L_800E9C98:
    // 0x800E9C98: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_800E9C9C:
    // 0x800E9C9C: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x800E9CA0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E9CA4: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800E9CA8: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x800E9CAC: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x800E9CB0: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800E9CB4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800E9CB8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800E9CBC: lwc1        $f18, 0x24($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X24);
    // 0x800E9CC0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800E9CC4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800E9CC8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800E9CCC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800E9CD0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9CD4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800E9CD8: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x800E9CDC: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800E9CE0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E9CE4: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x800E9CE8: addu        $t6, $t3, $t2
    ctx->r14 = ADD32(ctx->r11, ctx->r10);
    // 0x800E9CEC: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x800E9CF0: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800E9CF4: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x800E9CF8: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800E9CFC: lwc1        $f8, 0x28($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800E9D00: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E9D04: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800E9D08: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800E9D0C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E9D10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9D14: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800E9D18: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x800E9D1C: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x800E9D20: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E9D24: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800E9D28: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800E9D2C: lh          $t4, 0xE8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XE8);
    // 0x800E9D30: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800E9D34: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x800E9D38: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800E9D3C: lwc1        $f18, 0x2C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800E9D40: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800E9D44: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800E9D48: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800E9D4C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800E9D50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9D54: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800E9D58: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x800E9D5C: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x800E9D60: nop

    // 0x800E9D64: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x800E9D68: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800E9D6C: sra         $t5, $t7, 16
    ctx->r13 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800E9D70: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x800E9D74: bne         $at, $zero, L_800E9C9C
    if (ctx->r1 != 0) {
        // 0x800E9D78: sh          $t6, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r14;
            goto L_800E9C9C;
    }
    // 0x800E9D78: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    // 0x800E9D7C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E9D80: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800E9D84: lh          $t8, 0xE8($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XE8);
    // 0x800E9D88: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800E9D8C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800E9D90: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800E9D94: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800E9D98: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800E9D9C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800E9DA0: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x800E9DA4: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800E9DA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E9DAC: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800E9DB0: nop

    // 0x800E9DB4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800E9DB8: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
    // 0x800E9DBC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E9DC0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800E9DC4: lh          $t2, 0xEA($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XEA);
    // 0x800E9DC8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800E9DCC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800E9DD0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800E9DD4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E9DD8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800E9DDC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800E9DE0: addu        $t5, $t6, $t7
    ctx->r13 = ADD32(ctx->r14, ctx->r15);
    // 0x800E9DE4: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800E9DE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800E9DEC: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800E9DF0: nop

    // 0x800E9DF4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800E9DF8: swc1        $f4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f4.u32l;
    // 0x800E9DFC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E9E00: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800E9E04: lh          $t8, 0xEC($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XEC);
    // 0x800E9E08: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800E9E0C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800E9E10: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800E9E14: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800E9E18: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800E9E1C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800E9E20: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x800E9E24: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E9E28: lwc1        $f8, 0x554C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X554C);
    // 0x800E9E2C: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800E9E30: nop

    // 0x800E9E34: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800E9E38: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
    // 0x800E9E3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E9E40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E9E44: jal         0x8002A2EC
    // 0x800E9E48: lui         $a1, 0x4443
    ctx->r5 = S32(0X4443 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_5;
    // 0x800E9E48: lui         $a1, 0x4443
    ctx->r5 = S32(0X4443 << 16);
    after_5:
    // 0x800E9E4C: bne         $v0, $zero, L_800E9E6C
    if (ctx->r2 != 0) {
        // 0x800E9E50: nop
    
            goto L_800E9E6C;
    }
    // 0x800E9E50: nop

    // 0x800E9E54: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E9E58: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800E9E5C: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
    // 0x800E9E60: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E9E64: nop

    // 0x800E9E68: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800E9E6C:
    // 0x800E9E6C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E9E70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E9E74: lh          $t5, 0xA6($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XA6);
    // 0x800E9E78: nop

    // 0x800E9E7C: beq         $t5, $at, L_800E9E90
    if (ctx->r13 == ctx->r1) {
        // 0x800E9E80: nop
    
            goto L_800E9E90;
    }
    // 0x800E9E80: nop

    // 0x800E9E84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800E9E88: bne         $t5, $at, L_800E9EF4
    if (ctx->r13 != ctx->r1) {
        // 0x800E9E8C: nop
    
            goto L_800E9EF4;
    }
    // 0x800E9E8C: nop

L_800E9E90:
    // 0x800E9E90: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E9E94: nop

    // 0x800E9E98: lh          $t8, 0xA8($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XA8);
    // 0x800E9E9C: nop

    // 0x800E9EA0: bne         $t8, $zero, L_800E9EDC
    if (ctx->r24 != 0) {
        // 0x800E9EA4: nop
    
            goto L_800E9EDC;
    }
    // 0x800E9EA4: nop

    // 0x800E9EA8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E9EAC: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x800E9EB0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800E9EB4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E9EB8: nop

    // 0x800E9EBC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800E9EC0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E9EC4: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x800E9EC8: sh          $t3, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r11;
    // 0x800E9ECC: b           L_800EA184
    // 0x800E9ED0: nop

        goto L_800EA184;
    // 0x800E9ED0: nop

    // 0x800E9ED4: b           L_800E9EF4
    // 0x800E9ED8: nop

        goto L_800E9EF4;
    // 0x800E9ED8: nop

L_800E9EDC:
    // 0x800E9EDC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E9EE0: nop

    // 0x800E9EE4: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800E9EE8: nop

    // 0x800E9EEC: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x800E9EF0: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
L_800E9EF4:
    // 0x800E9EF4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E9EF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9EFC: lh          $t8, 0xEA($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XEA);
    // 0x800E9F00: nop

    // 0x800E9F04: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800E9F08: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800E9F0C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800E9F10: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800E9F14: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800E9F18: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800E9F1C: lwc1        $f16, 0x4170($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x800E9F20: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800E9F24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800E9F28: nop

    // 0x800E9F2C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800E9F30: nop

    // 0x800E9F34: bc1f        L_800E9F80
    if (!c1cs) {
        // 0x800E9F38: nop
    
            goto L_800E9F80;
    }
    // 0x800E9F38: nop

    // 0x800E9F3C: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x800E9F40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E9F44: nop

    // 0x800E9F48: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x800E9F4C: nop

    // 0x800E9F50: bc1f        L_800E9F80
    if (!c1cs) {
        // 0x800E9F54: nop
    
            goto L_800E9F80;
    }
    // 0x800E9F54: nop

    // 0x800E9F58: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E9F5C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800E9F60: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x800E9F64: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E9F68: nop

    // 0x800E9F6C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800E9F70: b           L_800EA184
    // 0x800E9F74: nop

        goto L_800EA184;
    // 0x800E9F74: nop

    // 0x800E9F78: b           L_800EA09C
    // 0x800E9F7C: nop

        goto L_800EA09C;
    // 0x800E9F7C: nop

L_800E9F80:
    // 0x800E9F80: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E9F84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9F88: lh          $t7, 0xEA($t2)
    ctx->r15 = MEM_H(ctx->r10, 0XEA);
    // 0x800E9F8C: nop

    // 0x800E9F90: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x800E9F94: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800E9F98: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E9F9C: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800E9FA0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E9FA4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800E9FA8: lwc1        $f6, 0x4170($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x800E9FAC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800E9FB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E9FB4: nop

    // 0x800E9FB8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800E9FBC: nop

    // 0x800E9FC0: bc1f        L_800EA00C
    if (!c1cs) {
        // 0x800E9FC4: nop
    
            goto L_800EA00C;
    }
    // 0x800E9FC4: nop

    // 0x800E9FC8: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x800E9FCC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E9FD0: nop

    // 0x800E9FD4: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x800E9FD8: nop

    // 0x800E9FDC: bc1f        L_800EA00C
    if (!c1cs) {
        // 0x800E9FE0: nop
    
            goto L_800EA00C;
    }
    // 0x800E9FE0: nop

    // 0x800E9FE4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E9FE8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800E9FEC: sh          $t6, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r14;
    // 0x800E9FF0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E9FF4: nop

    // 0x800E9FF8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800E9FFC: b           L_800EA184
    // 0x800EA000: nop

        goto L_800EA184;
    // 0x800EA000: nop

    // 0x800EA004: b           L_800EA09C
    // 0x800EA008: nop

        goto L_800EA09C;
    // 0x800EA008: nop

L_800EA00C:
    // 0x800EA00C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EA010: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EA014: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x800EA018: nop

    // 0x800EA01C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800EA020: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800EA024: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800EA028: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800EA02C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800EA030: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800EA034: lwc1        $f18, 0x4170($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x800EA038: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800EA03C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800EA040: nop

    // 0x800EA044: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x800EA048: nop

    // 0x800EA04C: bc1f        L_800EA09C
    if (!c1cs) {
        // 0x800EA050: nop
    
            goto L_800EA09C;
    }
    // 0x800EA050: nop

    // 0x800EA054: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x800EA058: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EA05C: nop

    // 0x800EA060: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800EA064: nop

    // 0x800EA068: bc1f        L_800EA09C
    if (!c1cs) {
        // 0x800EA06C: nop
    
            goto L_800EA09C;
    }
    // 0x800EA06C: nop

    // 0x800EA070: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EA074: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800EA078: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
    // 0x800EA07C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EA080: nop

    // 0x800EA084: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800EA088: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EA08C: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x800EA090: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
    // 0x800EA094: b           L_800EA184
    // 0x800EA098: nop

        goto L_800EA184;
    // 0x800EA098: nop

L_800EA09C:
    // 0x800EA09C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EA0A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800EA0A4: lh          $t8, 0xA6($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XA6);
    // 0x800EA0A8: nop

    // 0x800EA0AC: bne         $t8, $at, L_800EA17C
    if (ctx->r24 != ctx->r1) {
        // 0x800EA0B0: nop
    
            goto L_800EA17C;
    }
    // 0x800EA0B0: nop

    // 0x800EA0B4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EA0B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EA0BC: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x800EA0C0: nop

    // 0x800EA0C4: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800EA0C8: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800EA0CC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800EA0D0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800EA0D4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800EA0D8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800EA0DC: lwc1        $f8, 0x4170($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x800EA0E0: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x800EA0E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EA0E8: nop

    // 0x800EA0EC: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x800EA0F0: nop

    // 0x800EA0F4: bc1f        L_800EA17C
    if (!c1cs) {
        // 0x800EA0F8: nop
    
            goto L_800EA17C;
    }
    // 0x800EA0F8: nop

    // 0x800EA0FC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EA100: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x800EA104: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
    // 0x800EA108: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EA10C: nop

    // 0x800EA110: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800EA114: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EA118: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x800EA11C: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x800EA120: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_800EA124:
    // 0x800EA124: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x800EA128: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EA12C: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800EA130: addu        $t4, $t8, $t1
    ctx->r12 = ADD32(ctx->r24, ctx->r9);
    // 0x800EA134: lh          $t3, 0xE8($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XE8);
    // 0x800EA138: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EA13C: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800EA140: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800EA144: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800EA148: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800EA14C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800EA150: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800EA154: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800EA158: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
    // 0x800EA15C: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x800EA160: nop

    // 0x800EA164: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x800EA168: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x800EA16C: sra         $t0, $t6, 16
    ctx->r8 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800EA170: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x800EA174: bne         $at, $zero, L_800EA124
    if (ctx->r1 != 0) {
        // 0x800EA178: sh          $t5, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r13;
            goto L_800EA124;
    }
    // 0x800EA178: sh          $t5, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r13;
L_800EA17C:
    // 0x800EA17C: b           L_800EA184
    // 0x800EA180: nop

        goto L_800EA184;
    // 0x800EA180: nop

L_800EA184:
    // 0x800EA184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EA188: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800EA18C: jr          $ra
    // 0x800EA190: nop

    return;
    // 0x800EA190: nop

;}
RECOMP_FUNC void func_80088094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088094: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80088098: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8008809C: sb          $t6, 0x5243($at)
    MEM_B(0X5243, ctx->r1) = ctx->r14;
    // 0x800880A0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800880A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800880A8: sb          $t7, 0x5245($at)
    MEM_B(0X5245, ctx->r1) = ctx->r15;
    // 0x800880AC: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800880B0: lb          $t8, 0x5245($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X5245);
    // 0x800880B4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800880B8: sb          $t8, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r24;
    // 0x800880BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800880C0: sb          $zero, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = 0;
    // 0x800880C4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800880C8: sb          $zero, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = 0;
    // 0x800880CC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800880D0: sb          $zero, 0x5241($at)
    MEM_B(0X5241, ctx->r1) = 0;
    // 0x800880D4: jr          $ra
    // 0x800880D8: nop

    return;
    // 0x800880D8: nop

    // 0x800880DC: jr          $ra
    // 0x800880E0: nop

    return;
    // 0x800880E0: nop

;}
RECOMP_FUNC void func_80094990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094990: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80094994: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80094998: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8009499C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800949A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800949A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800949A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800949AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800949B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800949B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800949B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800949BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800949C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800949C4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800949C8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800949CC: nop

    // 0x800949D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800949D4: nop

    // 0x800949D8: bne         $t1, $zero, L_80094A30
    if (ctx->r9 != 0) {
        // 0x800949DC: nop
    
            goto L_80094A30;
    }
    // 0x800949DC: nop

    // 0x800949E0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800949E4: nop

    // 0x800949E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800949EC: nop

    // 0x800949F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800949F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800949F8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800949FC: nop

    // 0x80094A00: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x80094A04: jal         0x80014E80
    // 0x80094A08: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80094A08: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x80094A0C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80094A10: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80094A14: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80094A18: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x80094A1C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80094A20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80094A24: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80094A28: nop

    // 0x80094A2C: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
L_80094A30:
    // 0x80094A30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094A34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094A38: jal         0x80028FA0
    // 0x80094A3C: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80094A3C: nop

    after_1:
    // 0x80094A40: beq         $v0, $zero, L_80094A58
    if (ctx->r2 == 0) {
        // 0x80094A44: nop
    
            goto L_80094A58;
    }
    // 0x80094A44: nop

    // 0x80094A48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094A4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094A50: jal         0x80029B60
    // 0x80094A54: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x80094A54: nop

    after_2:
L_80094A58:
    // 0x80094A58: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80094A5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80094A60: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80094A64: nop

    // 0x80094A68: bne         $t9, $at, L_80094A90
    if (ctx->r25 != ctx->r1) {
        // 0x80094A6C: nop
    
            goto L_80094A90;
    }
    // 0x80094A6C: nop

    // 0x80094A70: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80094A74: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80094A78: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x80094A7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094A80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094A84: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80094A88: jal         0x80029EF8
    // 0x80094A8C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x80094A8C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
L_80094A90:
    // 0x80094A90: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80094A94: nop

    // 0x80094A98: lwc1        $f10, 0x28($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80094A9C: nop

    // 0x80094AA0: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80094AA4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80094AA8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80094AAC: nop

    // 0x80094AB0: swc1        $f16, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f16.u32l;
    // 0x80094AB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094AB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094ABC: jal         0x80029C40
    // 0x80094AC0: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80094AC0: nop

    after_4:
    // 0x80094AC4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80094AC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80094ACC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094AD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094AD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80094AD8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80094ADC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80094AE0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80094AE4: jal         0x80029018
    // 0x80094AE8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80094AE8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80094AEC: beq         $v0, $zero, L_80094B10
    if (ctx->r2 == 0) {
        // 0x80094AF0: nop
    
            goto L_80094B10;
    }
    // 0x80094AF0: nop

    // 0x80094AF4: jal         0x800297DC
    // 0x80094AF8: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x80094AF8: nop

    after_6:
    // 0x80094AFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094B00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094B04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80094B08: jal         0x80029824
    // 0x80094B0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x80094B0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_80094B10:
    // 0x80094B10: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80094B14: lh          $t2, 0x51A0($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X51A0);
    // 0x80094B18: nop

    // 0x80094B1C: andi        $t5, $t2, 0x40
    ctx->r13 = ctx->r10 & 0X40;
    // 0x80094B20: beq         $t5, $zero, L_80094B34
    if (ctx->r13 == 0) {
        // 0x80094B24: nop
    
            goto L_80094B34;
    }
    // 0x80094B24: nop

    // 0x80094B28: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80094B2C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80094B30: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_80094B34:
    // 0x80094B34: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80094B38: nop

    // 0x80094B3C: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80094B40: nop

    // 0x80094B44: bne         $t9, $zero, L_80094BA4
    if (ctx->r25 != 0) {
        // 0x80094B48: nop
    
            goto L_80094BA4;
    }
    // 0x80094B48: nop

    // 0x80094B4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80094B50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80094B54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094B58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094B5C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80094B60: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80094B64: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80094B68: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80094B6C: jal         0x800295C0
    // 0x80094B70: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x80094B70: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80094B74: beq         $v0, $zero, L_80094B8C
    if (ctx->r2 == 0) {
        // 0x80094B78: nop
    
            goto L_80094B8C;
    }
    // 0x80094B78: nop

    // 0x80094B7C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80094B80: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80094B84: b           L_80094B9C
    // 0x80094B88: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
        goto L_80094B9C;
    // 0x80094B88: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
L_80094B8C:
    // 0x80094B8C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80094B90: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80094B94: nop

    // 0x80094B98: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
L_80094B9C:
    // 0x80094B9C: b           L_80094C08
    // 0x80094BA0: nop

        goto L_80094C08;
    // 0x80094BA0: nop

L_80094BA4:
    // 0x80094BA4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80094BA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80094BAC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80094BB0: nop

    // 0x80094BB4: bne         $t4, $at, L_80094C08
    if (ctx->r12 != ctx->r1) {
        // 0x80094BB8: nop
    
            goto L_80094C08;
    }
    // 0x80094BB8: nop

    // 0x80094BBC: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80094BC0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80094BC4: nop

    // 0x80094BC8: swc1        $f18, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f18.u32l;
    // 0x80094BCC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80094BD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80094BD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094BD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094BDC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80094BE0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80094BE4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80094BE8: jal         0x80029F58
    // 0x80094BEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80029F58(rdram, ctx);
        goto after_9;
    // 0x80094BEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x80094BF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80094BF4: bne         $v0, $at, L_80094C08
    if (ctx->r2 != ctx->r1) {
        // 0x80094BF8: nop
    
            goto L_80094C08;
    }
    // 0x80094BF8: nop

    // 0x80094BFC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80094C00: nop

    // 0x80094C04: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_80094C08:
    // 0x80094C08: b           L_80094C10
    // 0x80094C0C: nop

        goto L_80094C10;
    // 0x80094C0C: nop

L_80094C10:
    // 0x80094C10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80094C14: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80094C18: jr          $ra
    // 0x80094C1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80094C1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800F4FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F4FC4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800F4FC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F4FCC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F4FD0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F4FD4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F4FD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F4FDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4FE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F4FE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4FE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F4FEC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F4FF0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F4FF4: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x800F4FF8: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800F4FFC: nop

    // 0x800F5000: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F5004: nop

    // 0x800F5008: bne         $t1, $zero, L_800F51C0
    if (ctx->r9 != 0) {
        // 0x800F500C: nop
    
            goto L_800F51C0;
    }
    // 0x800F500C: nop

    // 0x800F5010: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800F5014: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F5018: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F501C: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800F5020: nop

    // 0x800F5024: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800F5028: lh          $t6, 0xA8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XA8);
    // 0x800F502C: nop

    // 0x800F5030: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800F5034: mflo        $t7
    ctx->r15 = lo;
    // 0x800F5038: sh          $t7, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r15;
    // 0x800F503C: nop

    // 0x800F5040: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800F5044: nop

    // 0x800F5048: sh          $zero, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = 0;
    // 0x800F504C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800F5050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F5054: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800F5058: nop

    // 0x800F505C: swc1        $f4, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->f4.u32l;
    // 0x800F5060: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F5064: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F5068: jal         0x8001BB34
    // 0x800F506C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800F506C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800F5070: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800F5074: sh          $zero, 0x44($sp)
    MEM_H(0X44, ctx->r29) = 0;
    // 0x800F5078: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800F507C: nop

    // 0x800F5080: blez        $t1, L_800F51C0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x800F5084: nop
    
            goto L_800F51C0;
    }
    // 0x800F5084: nop

L_800F5088:
    // 0x800F5088: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800F508C: sh          $zero, 0x46($sp)
    MEM_H(0X46, ctx->r29) = 0;
    // 0x800F5090: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800F5094: nop

    // 0x800F5098: blez        $t3, L_800F5198
    if (SIGNED(ctx->r11) <= 0) {
        // 0x800F509C: nop
    
            goto L_800F5198;
    }
    // 0x800F509C: nop

L_800F50A0:
    // 0x800F50A0: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800F50A4: lh          $t5, 0x44($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X44);
    // 0x800F50A8: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800F50AC: lh          $t8, 0x46($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X46);
    // 0x800F50B0: multu       $t5, $t7
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800F50B4: lh          $t0, 0xB0($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XB0);
    // 0x800F50B8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800F50BC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800F50C0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800F50C4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800F50C8: subu        $t2, $t1, $t0
    ctx->r10 = SUB32(ctx->r9, ctx->r8);
    // 0x800F50CC: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x800F50D0: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x800F50D4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800F50D8: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800F50DC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F50E0: mflo        $t4
    ctx->r12 = lo;
    // 0x800F50E4: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    // 0x800F50E8: addiu       $t4, $t7, 0x78
    ctx->r12 = ADD32(ctx->r15, 0X78);
    // 0x800F50EC: multu       $t9, $t2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800F50F0: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x800F50F4: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800F50F8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F50FC: lwc1        $f18, 0x4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800F5100: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800F5104: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F5108: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F510C: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x800F5110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F5114: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F5118: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x800F511C: mflo        $t3
    ctx->r11 = lo;
    // 0x800F5120: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800F5124: addiu       $a2, $a2, 0x3718
    ctx->r6 = ADD32(ctx->r6, 0X3718);
    // 0x800F5128: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800F512C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F5130: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F5134: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800F5138: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800F513C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800F5140: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800F5144: mflo        $t8
    ctx->r24 = lo;
    // 0x800F5148: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800F514C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F5150: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F5154: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800F5158: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F515C: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x800F5160: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x800F5164: jal         0x80027C00
    // 0x800F5168: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027C00(rdram, ctx);
        goto after_1;
    // 0x800F5168: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x800F516C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x800F5170: lh          $t2, 0x46($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X46);
    // 0x800F5174: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800F5178: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800F517C: sh          $t3, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r11;
    // 0x800F5180: lh          $t9, 0xA6($t4)
    ctx->r25 = MEM_H(ctx->r12, 0XA6);
    // 0x800F5184: sll         $t5, $t3, 16
    ctx->r13 = S32(ctx->r11 << 16);
    // 0x800F5188: sra         $t7, $t5, 16
    ctx->r15 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800F518C: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800F5190: bne         $at, $zero, L_800F50A0
    if (ctx->r1 != 0) {
        // 0x800F5194: nop
    
            goto L_800F50A0;
    }
    // 0x800F5194: nop

L_800F5198:
    // 0x800F5198: lh          $t8, 0x44($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X44);
    // 0x800F519C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800F51A0: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x800F51A4: sh          $t6, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r14;
    // 0x800F51A8: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800F51AC: sll         $t0, $t6, 16
    ctx->r8 = S32(ctx->r14 << 16);
    // 0x800F51B0: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800F51B4: slt         $at, $t1, $t3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800F51B8: bne         $at, $zero, L_800F5088
    if (ctx->r1 != 0) {
        // 0x800F51BC: nop
    
            goto L_800F5088;
    }
    // 0x800F51BC: nop

L_800F51C0:
    // 0x800F51C0: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800F51C4: nop

    // 0x800F51C8: lh          $t4, 0xB2($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XB2);
    // 0x800F51CC: nop

    // 0x800F51D0: beq         $t4, $zero, L_800F5280
    if (ctx->r12 == 0) {
        // 0x800F51D4: nop
    
            goto L_800F5280;
    }
    // 0x800F51D4: nop

    // 0x800F51D8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800F51DC: nop

    // 0x800F51E0: lh          $t9, 0xB2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XB2);
    // 0x800F51E4: nop

    // 0x800F51E8: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x800F51EC: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800F51F0: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800F51F4: nop

    // 0x800F51F8: lh          $t0, 0xB2($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XB2);
    // 0x800F51FC: nop

    // 0x800F5200: bne         $t0, $zero, L_800F5280
    if (ctx->r8 != 0) {
        // 0x800F5204: nop
    
            goto L_800F5280;
    }
    // 0x800F5204: nop

    // 0x800F5208: sh          $zero, 0x42($sp)
    MEM_H(0X42, ctx->r29) = 0;
L_800F520C:
    // 0x800F520C: lh          $t1, 0x42($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X42);
    // 0x800F5210: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800F5214: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x800F5218: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x800F521C: lh          $t4, 0xE8($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XE8);
    // 0x800F5220: nop

    // 0x800F5224: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x800F5228: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800F522C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F5230: beq         $t9, $at, L_800F5260
    if (ctx->r25 == ctx->r1) {
        // 0x800F5234: nop
    
            goto L_800F5260;
    }
    // 0x800F5234: nop

    // 0x800F5238: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x800F523C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F5240: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800F5244: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x800F5248: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F524C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x800F5250: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F5254: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F5258: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800F525C: sh          $t8, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r24;
L_800F5260:
    // 0x800F5260: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x800F5264: nop

    // 0x800F5268: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800F526C: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x800F5270: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800F5274: slti        $at, $t3, 0xA
    ctx->r1 = SIGNED(ctx->r11) < 0XA ? 1 : 0;
    // 0x800F5278: bne         $at, $zero, L_800F520C
    if (ctx->r1 != 0) {
        // 0x800F527C: sh          $t1, 0x42($sp)
        MEM_H(0X42, ctx->r29) = ctx->r9;
            goto L_800F520C;
    }
    // 0x800F527C: sh          $t1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r9;
L_800F5280:
    // 0x800F5280: b           L_800F5288
    // 0x800F5284: nop

        goto L_800F5288;
    // 0x800F5284: nop

L_800F5288:
    // 0x800F5288: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F528C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800F5290: jr          $ra
    // 0x800F5294: nop

    return;
    // 0x800F5294: nop

;}
RECOMP_FUNC void func_80095A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095A20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80095A24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80095A28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80095A2C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80095A30: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80095A34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80095A38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80095A3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80095A40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80095A44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095A48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80095A4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095A50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80095A54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80095A58: lbu         $t8, 0x4282($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X4282);
    // 0x80095A5C: nop

    // 0x80095A60: bne         $t8, $zero, L_80095AC0
    if (ctx->r24 != 0) {
        // 0x80095A64: nop
    
            goto L_80095AC0;
    }
    // 0x80095A64: nop

    // 0x80095A68: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80095A6C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80095A70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095A74: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80095A78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80095A7C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80095A80: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80095A84: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80095A88: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80095A8C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80095A90: sb          $t9, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r25;
    // 0x80095A94: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80095A98: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80095A9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095AA0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80095AA4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80095AA8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80095AAC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80095AB0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80095AB4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80095AB8: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x80095ABC: sh          $t2, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r10;
L_80095AC0:
    // 0x80095AC0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80095AC4: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80095AC8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80095ACC: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80095AD0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80095AD4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80095AD8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80095ADC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80095AE0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80095AE4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80095AE8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80095AEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80095AF0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80095AF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095AF8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80095AFC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80095B00: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80095B04: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80095B08: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80095B0C: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80095B10: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x80095B14: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80095B18: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80095B1C: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x80095B20: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80095B24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095B28: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80095B2C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80095B30: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80095B34: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80095B38: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80095B3C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80095B40: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80095B44: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80095B48: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80095B4C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80095B50: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80095B54: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80095B58: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80095B5C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80095B60: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80095B64: addu        $s0, $s0, $t4
    ctx->r16 = ADD32(ctx->r16, ctx->r12);
    // 0x80095B68: lh          $s0, 0x4258($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4258);
    // 0x80095B6C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80095B70: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x80095B74: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80095B78: sltiu       $t6, $s0, 0x1
    ctx->r14 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80095B7C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80095B80: jal         0x8001BB34
    // 0x80095B84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80095B84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80095B88: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80095B8C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80095B90: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80095B94: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80095B98: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80095B9C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80095BA0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80095BA4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80095BA8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80095BAC: lh          $t0, 0x4258($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4258);
    // 0x80095BB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80095BB4: bne         $t0, $at, L_80095C10
    if (ctx->r8 != ctx->r1) {
        // 0x80095BB8: nop
    
            goto L_80095C10;
    }
    // 0x80095BB8: nop

    // 0x80095BBC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80095BC0: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80095BC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095BC8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80095BCC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80095BD0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80095BD4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80095BD8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80095BDC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80095BE0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80095BE4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80095BE8: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80095BEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095BF0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80095BF4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80095BF8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80095BFC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80095C00: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80095C04: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80095C08: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80095C0C: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
L_80095C10:
    // 0x80095C10: b           L_80095C18
    // 0x80095C14: nop

        goto L_80095C18;
    // 0x80095C14: nop

L_80095C18:
    // 0x80095C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80095C1C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80095C20: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80095C24: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80095C28: jr          $ra
    // 0x80095C2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80095C2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CF6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF6F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CF6F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CF6FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CF700: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CF704: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CF708: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800CF70C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CF710: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF714: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CF718: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF71C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CF720: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800CF724: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800CF728: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CF72C: beq         $s0, $at, L_800CF748
    if (ctx->r16 == ctx->r1) {
        // 0x800CF730: nop
    
            goto L_800CF748;
    }
    // 0x800CF730: nop

    // 0x800CF734: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CF738: beq         $s0, $at, L_800CF758
    if (ctx->r16 == ctx->r1) {
        // 0x800CF73C: nop
    
            goto L_800CF758;
    }
    // 0x800CF73C: nop

    // 0x800CF740: b           L_800CF768
    // 0x800CF744: nop

        goto L_800CF768;
    // 0x800CF744: nop

L_800CF748:
    // 0x800CF748: jal         0x800CF580
    // 0x800CF74C: nop

    func_800CF580(rdram, ctx);
        goto after_0;
    // 0x800CF74C: nop

    after_0:
    // 0x800CF750: b           L_800CF770
    // 0x800CF754: nop

        goto L_800CF770;
    // 0x800CF754: nop

L_800CF758:
    // 0x800CF758: jal         0x800CF60C
    // 0x800CF75C: nop

    func_800CF60C(rdram, ctx);
        goto after_1;
    // 0x800CF75C: nop

    after_1:
    // 0x800CF760: b           L_800CF770
    // 0x800CF764: nop

        goto L_800CF770;
    // 0x800CF764: nop

L_800CF768:
    // 0x800CF768: b           L_800CF770
    // 0x800CF76C: nop

        goto L_800CF770;
    // 0x800CF76C: nop

L_800CF770:
    // 0x800CF770: b           L_800CF778
    // 0x800CF774: nop

        goto L_800CF778;
    // 0x800CF774: nop

L_800CF778:
    // 0x800CF778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CF77C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CF780: jr          $ra
    // 0x800CF784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800CF784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80077580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077580: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80077584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077588: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007758C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80077590: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80077594: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80077598: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007759C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800775A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800775A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800775A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800775AC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800775B0: lbu         $t8, 0x4289($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X4289);
    // 0x800775B4: nop

    // 0x800775B8: bne         $t8, $zero, L_800775CC
    if (ctx->r24 != 0) {
        // 0x800775BC: nop
    
            goto L_800775CC;
    }
    // 0x800775BC: nop

    // 0x800775C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800775C4: jal         0x80019050
    // 0x800775C8: nop

    func_80019050(rdram, ctx);
        goto after_0;
    // 0x800775C8: nop

    after_0:
L_800775CC:
    // 0x800775CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800775D0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800775D4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800775D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800775DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800775E0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800775E4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800775E8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800775EC: lbu         $t1, 0x4289($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X4289);
    // 0x800775F0: nop

    // 0x800775F4: bne         $t1, $zero, L_80077608
    if (ctx->r9 != 0) {
        // 0x800775F8: nop
    
            goto L_80077608;
    }
    // 0x800775F8: nop

    // 0x800775FC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80077600: jal         0x80019050
    // 0x80077604: nop

    func_80019050(rdram, ctx);
        goto after_1;
    // 0x80077604: nop

    after_1:
L_80077608:
    // 0x80077608: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8007760C:
    // 0x8007760C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80077610:
    // 0x80077610: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80077614: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80077618: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8007761C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80077620: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80077624: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80077628: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007762C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80077630: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x80077634: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80077638: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007763C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80077640: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80077644: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80077648: lwc1        $f4, 0x41B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X41B4);
    // 0x8007764C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077650: addu        $t0, $t5, $t8
    ctx->r8 = ADD32(ctx->r13, ctx->r24);
    // 0x80077654: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80077658: swc1        $f4, 0x4B68($at)
    MEM_W(0X4B68, ctx->r1) = ctx->f4.u32l;
    // 0x8007765C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80077660: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80077664: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80077668: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8007766C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80077670: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80077674: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80077678: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8007767C: sll         $t3, $t4, 4
    ctx->r11 = S32(ctx->r12 << 4);
    // 0x80077680: addu        $t7, $t2, $t3
    ctx->r15 = ADD32(ctx->r10, ctx->r11);
    // 0x80077684: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80077688: addu        $t5, $t7, $t9
    ctx->r13 = ADD32(ctx->r15, ctx->r25);
    // 0x8007768C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80077690: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80077694: lwc1        $f6, 0x41B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X41B4);
    // 0x80077698: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8007769C: addu        $t8, $t3, $t9
    ctx->r24 = ADD32(ctx->r11, ctx->r25);
    // 0x800776A0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800776A4: swc1        $f6, 0x4BA8($at)
    MEM_W(0X4BA8, ctx->r1) = ctx->f6.u32l;
    // 0x800776A8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800776AC: nop

    // 0x800776B0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800776B4: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x800776B8: bne         $at, $zero, L_80077610
    if (ctx->r1 != 0) {
        // 0x800776BC: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_80077610;
    }
    // 0x800776BC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800776C0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800776C4: nop

    // 0x800776C8: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x800776CC: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x800776D0: bne         $at, $zero, L_8007760C
    if (ctx->r1 != 0) {
        // 0x800776D4: sw          $t2, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r10;
            goto L_8007760C;
    }
    // 0x800776D4: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x800776D8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800776DC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800776E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800776E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800776E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800776EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800776F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800776F4: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800776F8: addu        $t3, $t7, $t5
    ctx->r11 = ADD32(ctx->r15, ctx->r13);
    // 0x800776FC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80077700: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80077704: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80077708: lwc1        $f8, 0xC($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC);
    // 0x8007770C: lwc1        $f10, 0x10($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X10);
    // 0x80077710: lwc1        $f18, 0x14($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X14);
    // 0x80077714: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80077718: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007771C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80077720: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077724: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80077728: swc1        $f8, 0x4BE8($at)
    MEM_W(0X4BE8, ctx->r1) = ctx->f8.u32l;
    // 0x8007772C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80077730: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80077734: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80077738: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8007773C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80077740: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80077744: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80077748: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8007774C: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x80077750: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80077754: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80077758: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007775C: lwc1        $f10, 0xC($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XC);
    // 0x80077760: lwc1        $f16, 0x10($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X10);
    // 0x80077764: lwc1        $f4, 0x14($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X14);
    // 0x80077768: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8007776C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80077770: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80077774: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077778: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007777C: swc1        $f10, 0x4BEC($at)
    MEM_W(0X4BEC, ctx->r1) = ctx->f10.u32l;
    // 0x80077780: b           L_80077788
    // 0x80077784: nop

        goto L_80077788;
    // 0x80077784: nop

L_80077788:
    // 0x80077788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007778C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80077790: jr          $ra
    // 0x80077794: nop

    return;
    // 0x80077794: nop

;}
RECOMP_FUNC void func_800C4358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4358: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C435C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C4360: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C4364: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C4368: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C436C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C4370: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4374: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C4378: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C437C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C4380: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C4384: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C4388: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800C438C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C4390: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C4394: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C4398: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C439C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C43A0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C43A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C43A8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C43AC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C43B0: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C43B4: nop

    // 0x800C43B8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x800C43BC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C43C0: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C43C4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C43C8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C43CC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C43D0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C43D4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C43D8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C43DC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C43E0: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C43E4: nop

    // 0x800C43E8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x800C43EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C43F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C43F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C43F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C43FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4400: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C4404: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4408: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C440C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C4410: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C4414: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800C4418: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C441C: nop

    // 0x800C4420: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C4424: nop

    // 0x800C4428: bne         $t1, $zero, L_800C4554
    if (ctx->r9 != 0) {
        // 0x800C442C: nop
    
            goto L_800C4554;
    }
    // 0x800C442C: nop

    // 0x800C4430: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4434: nop

    // 0x800C4438: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C443C: nop

    // 0x800C4440: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C4444: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C4448: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C444C: nop

    // 0x800C4450: sh          $zero, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = 0;
    // 0x800C4454: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800C4458: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C445C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C4460: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C4464: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C4468: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C446C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C4470: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800C4474: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C4478: sh          $t6, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = ctx->r14;
    // 0x800C447C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C4480: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4484: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C4488: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C448C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C4490: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C4494: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C4498: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C449C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800C44A0: sh          $t9, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = ctx->r25;
    // 0x800C44A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C44A8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800C44AC: addiu       $t3, $t3, -0x7EF8
    ctx->r11 = ADD32(ctx->r11, -0X7EF8);
    // 0x800C44B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C44B4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800C44B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C44BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C44C0: jal         0x8001C0EC
    // 0x800C44C4: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C44C4: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x800C44C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C44CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C44D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C44D4: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C44D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C44DC: jal         0x8001ABF4
    // 0x800C44E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C44E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800C44E4: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800C44E8: addiu       $t4, $t4, -0x7EF8
    ctx->r12 = ADD32(ctx->r12, -0X7EF8);
    // 0x800C44EC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800C44F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800C44F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C44F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C44FC: jal         0x8001C0EC
    // 0x800C4500: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800C4500: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_2:
    // 0x800C4504: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800C4508: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C450C: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C4510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C4514: jal         0x8001ABF4
    // 0x800C4518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800C4518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800C451C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800C4520: addiu       $t2, $t2, -0x7EF8
    ctx->r10 = ADD32(ctx->r10, -0X7EF8);
    // 0x800C4524: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800C4528: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800C452C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C4530: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C4534: jal         0x8001C0EC
    // 0x800C4538: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800C4538: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_4:
    // 0x800C453C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800C4540: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C4544: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C4548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C454C: jal         0x8001ABF4
    // 0x800C4550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800C4550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_800C4554:
    // 0x800C4554: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4558: nop

    // 0x800C455C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800C4560: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4564: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800C4568: sh          $t7, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r15;
    // 0x800C456C: b           L_800C4574
    // 0x800C4570: nop

        goto L_800C4574;
    // 0x800C4570: nop

L_800C4574:
    // 0x800C4574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C4578: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C457C: jr          $ra
    // 0x800C4580: nop

    return;
    // 0x800C4580: nop

;}
RECOMP_FUNC void func_800BCB04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCB04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BCB08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BCB0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BCB10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BCB14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BCB18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BCB1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BCB20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BCB24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BCB28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BCB2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BCB30: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BCB34: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800BCB38: nop

    // 0x800BCB3C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800BCB40: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800BCB44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BCB48: beq         $s0, $at, L_800BCB70
    if (ctx->r16 == ctx->r1) {
        // 0x800BCB4C: nop
    
            goto L_800BCB70;
    }
    // 0x800BCB4C: nop

    // 0x800BCB50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800BCB54: beq         $s0, $at, L_800BCB80
    if (ctx->r16 == ctx->r1) {
        // 0x800BCB58: nop
    
            goto L_800BCB80;
    }
    // 0x800BCB58: nop

    // 0x800BCB5C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800BCB60: beq         $s0, $at, L_800BCB90
    if (ctx->r16 == ctx->r1) {
        // 0x800BCB64: nop
    
            goto L_800BCB90;
    }
    // 0x800BCB64: nop

    // 0x800BCB68: b           L_800BCBA0
    // 0x800BCB6C: nop

        goto L_800BCBA0;
    // 0x800BCB6C: nop

L_800BCB70:
    // 0x800BCB70: jal         0x800BC148
    // 0x800BCB74: nop

    func_800BC148(rdram, ctx);
        goto after_0;
    // 0x800BCB74: nop

    after_0:
    // 0x800BCB78: b           L_800BCBA8
    // 0x800BCB7C: nop

        goto L_800BCBA8;
    // 0x800BCB7C: nop

L_800BCB80:
    // 0x800BCB80: jal         0x800BC2C8
    // 0x800BCB84: nop

    func_800BC2C8(rdram, ctx);
        goto after_1;
    // 0x800BCB84: nop

    after_1:
    // 0x800BCB88: b           L_800BCBA8
    // 0x800BCB8C: nop

        goto L_800BCBA8;
    // 0x800BCB8C: nop

L_800BCB90:
    // 0x800BCB90: jal         0x800BC684
    // 0x800BCB94: nop

    func_800BC684(rdram, ctx);
        goto after_2;
    // 0x800BCB94: nop

    after_2:
    // 0x800BCB98: b           L_800BCBA8
    // 0x800BCB9C: nop

        goto L_800BCBA8;
    // 0x800BCB9C: nop

L_800BCBA0:
    // 0x800BCBA0: b           L_800BCBA8
    // 0x800BCBA4: nop

        goto L_800BCBA8;
    // 0x800BCBA4: nop

L_800BCBA8:
    // 0x800BCBA8: b           L_800BCBB0
    // 0x800BCBAC: nop

        goto L_800BCBB0;
    // 0x800BCBAC: nop

L_800BCBB0:
    // 0x800BCBB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCBB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BCBB8: jr          $ra
    // 0x800BCBBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BCBBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80096FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096FF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80096FFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097000: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80097004: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80097008: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009700C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80097010: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80097014: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80097018: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009701C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80097020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80097024: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80097028: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009702C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80097030: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80097034: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80097038: nop

    // 0x8009703C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80097040: nop

    // 0x80097044: bne         $t1, $zero, L_80097078
    if (ctx->r9 != 0) {
        // 0x80097048: nop
    
            goto L_80097078;
    }
    // 0x80097048: nop

    // 0x8009704C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80097050: nop

    // 0x80097054: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80097058: nop

    // 0x8009705C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80097060: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80097064: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80097068: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009706C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80097070: nop

    // 0x80097074: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
L_80097078:
    // 0x80097078: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8009707C: nop

    // 0x80097080: lh          $t7, 0xAC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAC);
    // 0x80097084: nop

    // 0x80097088: bne         $t7, $zero, L_800970C0
    if (ctx->r15 != 0) {
        // 0x8009708C: nop
    
            goto L_800970C0;
    }
    // 0x8009708C: nop

    // 0x80097090: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80097094: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80097098: nop

    // 0x8009709C: swc1        $f6, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f6.u32l;
    // 0x800970A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800970A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800970A8: jal         0x80029D8C
    // 0x800970AC: nop

    func_80029D8C(rdram, ctx);
        goto after_0;
    // 0x800970AC: nop

    after_0:
    // 0x800970B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800970B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800970B8: b           L_8009714C
    // 0x800970BC: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
        goto L_8009714C;
    // 0x800970BC: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
L_800970C0:
    // 0x800970C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800970C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800970C8: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x800970CC: nop

    // 0x800970D0: bne         $t1, $at, L_8009711C
    if (ctx->r9 != ctx->r1) {
        // 0x800970D4: nop
    
            goto L_8009711C;
    }
    // 0x800970D4: nop

    // 0x800970D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800970DC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800970E0: nop

    // 0x800970E4: swc1        $f10, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f10.u32l;
    // 0x800970E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800970EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800970F0: jal         0x80029D8C
    // 0x800970F4: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x800970F4: nop

    after_1:
    // 0x800970F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800970FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80097100: nop

    // 0x80097104: swc1        $f16, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f16.u32l;
    // 0x80097108: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009710C: nop

    // 0x80097110: lwc1        $f18, 0x2C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80097114: b           L_8009714C
    // 0x80097118: swc1        $f18, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f18.u32l;
        goto L_8009714C;
    // 0x80097118: swc1        $f18, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f18.u32l;
L_8009711C:
    // 0x8009711C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80097120: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80097124: nop

    // 0x80097128: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x8009712C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80097130: nop

    // 0x80097134: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80097138: nop

    // 0x8009713C: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80097140: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80097144: nop

    // 0x80097148: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
L_8009714C:
    // 0x8009714C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80097150: nop

    // 0x80097154: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x80097158: nop

    // 0x8009715C: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x80097160: beq         $at, $zero, L_80097228
    if (ctx->r1 == 0) {
        // 0x80097164: nop
    
            goto L_80097228;
    }
    // 0x80097164: nop

    // 0x80097168: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009716C: nop

    // 0x80097170: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80097174: lwc1        $f10, 0x44($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80097178: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8009717C: nop

    // 0x80097180: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80097184: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80097188: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8009718C: nop

    // 0x80097190: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80097194: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80097198: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8009719C: nop

    // 0x800971A0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800971A4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x800971A8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800971AC: sh          $t4, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r12;
    // 0x800971B0: nop

    // 0x800971B4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800971B8: nop

    // 0x800971BC: lh          $t5, 0xA8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA8);
    // 0x800971C0: nop

    // 0x800971C4: bgtz        $t5, L_80097228
    if (SIGNED(ctx->r13) > 0) {
        // 0x800971C8: nop
    
            goto L_80097228;
    }
    // 0x800971C8: nop

    // 0x800971CC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800971D0: nop

    // 0x800971D4: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800971D8: nop

    // 0x800971DC: sh          $t7, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r15;
    // 0x800971E0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800971E4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800971E8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800971EC: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800971F0: jal         0x80015538
    // 0x800971F4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800971F4: nop

    after_2:
    // 0x800971F8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800971FC: nop

    // 0x80097200: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x80097204: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80097208: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009720C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80097210: lwc1        $f12, 0x40($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X40);
    // 0x80097214: jal         0x80015538
    // 0x80097218: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80097218: nop

    after_3:
    // 0x8009721C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80097220: nop

    // 0x80097224: swc1        $f0, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f0.u32l;
L_80097228:
    // 0x80097228: b           L_80097230
    // 0x8009722C: nop

        goto L_80097230;
    // 0x8009722C: nop

L_80097230:
    // 0x80097230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097234: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80097238: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8009723C: jr          $ra
    // 0x80097240: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80097240: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C6B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6B8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C6B90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C6B94: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C6B98: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C6B9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C6BA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C6BA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C6BA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C6BAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C6BB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C6BB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C6BB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C6BBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C6BC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C6BC4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C6BC8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C6BCC: nop

    // 0x800C6BD0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C6BD4: nop

    // 0x800C6BD8: bne         $t1, $zero, L_800C6D14
    if (ctx->r9 != 0) {
        // 0x800C6BDC: nop
    
            goto L_800C6D14;
    }
    // 0x800C6BDC: nop

    // 0x800C6BE0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C6BE4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C6BE8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800C6BEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C6BF0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C6BF4: nop

    // 0x800C6BF8: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800C6BFC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C6C00: nop

    // 0x800C6C04: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800C6C08: nop

    // 0x800C6C0C: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800C6C10: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C6C14: nop

    // 0x800C6C18: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800C6C1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6C20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6C24: jal         0x8002A46C
    // 0x800C6C28: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800C6C28: nop

    after_0:
    // 0x800C6C2C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800C6C30: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C6C34: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800C6C38: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C6C3C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C6C40: nop

    // 0x800C6C44: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800C6C48: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800C6C4C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800C6C50: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800C6C54: nop

    // 0x800C6C58: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C6C5C: nop

    // 0x800C6C60: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800C6C64: nop

    // 0x800C6C68: addiu       $t2, $t1, -0xB4
    ctx->r10 = ADD32(ctx->r9, -0XB4);
    // 0x800C6C6C: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x800C6C70: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C6C74: nop

    // 0x800C6C78: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800C6C7C: nop

    // 0x800C6C80: bgez        $t4, L_800C6CA0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800C6C84: nop
    
            goto L_800C6CA0;
    }
    // 0x800C6C84: nop

    // 0x800C6C88: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C6C8C: nop

    // 0x800C6C90: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800C6C94: nop

    // 0x800C6C98: addiu       $t7, $t6, 0x168
    ctx->r15 = ADD32(ctx->r14, 0X168);
    // 0x800C6C9C: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
L_800C6CA0:
    // 0x800C6CA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6CA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6CA8: jal         0x8002A640
    // 0x800C6CAC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_1;
    // 0x800C6CAC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_1:
    // 0x800C6CB0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C6CB4: nop

    // 0x800C6CB8: sh          $v0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r2;
    // 0x800C6CBC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C6CC0: nop

    // 0x800C6CC4: lh          $t1, 0xA8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA8);
    // 0x800C6CC8: nop

    // 0x800C6CCC: bne         $t1, $zero, L_800C6CE4
    if (ctx->r9 != 0) {
        // 0x800C6CD0: nop
    
            goto L_800C6CE4;
    }
    // 0x800C6CD0: nop

    // 0x800C6CD4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C6CD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C6CDC: b           L_800C6CF0
    // 0x800C6CE0: sh          $t2, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r10;
        goto L_800C6CF0;
    // 0x800C6CE0: sh          $t2, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r10;
L_800C6CE4:
    // 0x800C6CE4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C6CE8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800C6CEC: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
L_800C6CF0:
    // 0x800C6CF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6CF4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800C6CF8: addiu       $t6, $t6, -0x7E90
    ctx->r14 = ADD32(ctx->r14, -0X7E90);
    // 0x800C6CFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6D00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C6D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C6D08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C6D0C: jal         0x8001C0EC
    // 0x800C6D10: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800C6D10: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    after_2:
L_800C6D14:
    // 0x800C6D14: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C6D18: nop

    // 0x800C6D1C: lh          $t5, 0xA6($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XA6);
    // 0x800C6D20: lwc1        $f14, 0x1C($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800C6D24: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x800C6D28: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x800C6D2C: jal         0x80015538
    // 0x800C6D30: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800C6D30: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_3:
    // 0x800C6D34: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x800C6D38: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C6D3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800C6D40: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C6D44: nop

    // 0x800C6D48: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x800C6D4C: nop

    // 0x800C6D50: bc1t        L_800C6D74
    if (c1cs) {
        // 0x800C6D54: nop
    
            goto L_800C6D74;
    }
    // 0x800C6D54: nop

    // 0x800C6D58: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x800C6D5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C6D60: nop

    // 0x800C6D64: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x800C6D68: nop

    // 0x800C6D6C: bc1f        L_800C6D8C
    if (!c1cs) {
        // 0x800C6D70: nop
    
            goto L_800C6D8C;
    }
    // 0x800C6D70: nop

L_800C6D74:
    // 0x800C6D74: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C6D78: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x800C6D7C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800C6D80: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C6D84: b           L_800C6DD4
    // 0x800C6D88: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_800C6DD4;
    // 0x800C6D88: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800C6D8C:
    // 0x800C6D8C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C6D90: nop

    // 0x800C6D94: lh          $t0, 0xA8($t2)
    ctx->r8 = MEM_H(ctx->r10, 0XA8);
    // 0x800C6D98: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x800C6D9C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800C6DA0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800C6DA4: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x800C6DA8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800C6DAC: jal         0x80015538
    // 0x800C6DB0: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800C6DB0: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x800C6DB4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C6DB8: nop

    // 0x800C6DBC: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x800C6DC0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C6DC4: nop

    // 0x800C6DC8: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800C6DCC: nop

    // 0x800C6DD0: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
L_800C6DD4:
    // 0x800C6DD4: b           L_800C6DDC
    // 0x800C6DD8: nop

        goto L_800C6DDC;
    // 0x800C6DD8: nop

L_800C6DDC:
    // 0x800C6DDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C6DE0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C6DE4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C6DE8: jr          $ra
    // 0x800C6DEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C6DEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80060450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80060454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060458: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006045C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80060460: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80060464: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80060468: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006046C: lw          $t6, 0x4994($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4994);
    // 0x80060470: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80060474: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80060478: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8006047C: lw          $a3, 0x10($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X10);
    // 0x80060480: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80060484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80060488: jal         0x8001ABF4
    // 0x8006048C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x8006048C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80060490: b           L_80060498
    // 0x80060494: nop

        goto L_80060498;
    // 0x80060494: nop

L_80060498:
    // 0x80060498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006049C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800604A0: jr          $ra
    // 0x800604A4: nop

    return;
    // 0x800604A4: nop

;}
RECOMP_FUNC void func_800959F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800959F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800959F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800959F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800959FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095A00: jal         0x8002B0E4
    // 0x80095A04: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80095A04: nop

    after_0:
    // 0x80095A08: b           L_80095A10
    // 0x80095A0C: nop

        goto L_80095A10;
    // 0x80095A0C: nop

L_80095A10:
    // 0x80095A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80095A14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80095A18: jr          $ra
    // 0x80095A1C: nop

    return;
    // 0x80095A1C: nop

;}
RECOMP_FUNC void func_800923DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800923DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800923E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800923E4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800923E8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800923EC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800923F0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800923F4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800923F8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800923FC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092400: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092404: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092408: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009240C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092410: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092414: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092418: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009241C: addiu       $a1, $a1, 0x16A8
    ctx->r5 = ADD32(ctx->r5, 0X16A8);
    // 0x80092420: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092424: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092428: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009242C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092430: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092434: jal         0x80027464
    // 0x80092438: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092438: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009243C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092440: b           L_80092448
    // 0x80092444: nop

        goto L_80092448;
    // 0x80092444: nop

L_80092448:
    // 0x80092448: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009244C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092450: jr          $ra
    // 0x80092454: nop

    return;
    // 0x80092454: nop

;}
RECOMP_FUNC void func_800AA404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA404: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AA408: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800AA40C: nop

    // 0x800AA410: bne         $t6, $zero, L_800AA448
    if (ctx->r14 != 0) {
        // 0x800AA414: nop
    
            goto L_800AA448;
    }
    // 0x800AA414: nop

    // 0x800AA418: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800AA41C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800AA420: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AA424: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800AA428: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AA42C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800AA430: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AA434: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800AA438: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800AA43C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800AA440: b           L_800AA494
    // 0x800AA444: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_800AA494;
    // 0x800AA444: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800AA448:
    // 0x800AA448: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800AA44C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800AA450: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AA454: bne         $t0, $at, L_800AA48C
    if (ctx->r8 != ctx->r1) {
        // 0x800AA458: nop
    
            goto L_800AA48C;
    }
    // 0x800AA458: nop

    // 0x800AA45C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800AA460: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800AA464: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AA468: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800AA46C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AA470: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800AA474: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AA478: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800AA47C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800AA480: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800AA484: b           L_800AA494
    // 0x800AA488: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
        goto L_800AA494;
    // 0x800AA488: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_800AA48C:
    // 0x800AA48C: jr          $ra
    // 0x800AA490: nop

    return;
    // 0x800AA490: nop

L_800AA494:
    // 0x800AA494: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800AA498: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x800AA49C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AA4A0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800AA4A4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AA4A8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800AA4AC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AA4B0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800AA4B4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800AA4B8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800AA4BC: jr          $ra
    // 0x800AA4C0: nop

    return;
    // 0x800AA4C0: nop

    // 0x800AA4C4: jr          $ra
    // 0x800AA4C8: nop

    return;
    // 0x800AA4C8: nop

;}
RECOMP_FUNC void func_800D7704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D7704: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800D7708: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D770C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800D7710: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800D7714: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D7718: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D771C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D7720: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D7724: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D7728: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D772C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D7730: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D7734: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D7738: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D773C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D7740: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D7744: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x800D7748: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800D774C: nop

    // 0x800D7750: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D7754: nop

    // 0x800D7758: bne         $t1, $zero, L_800D77F0
    if (ctx->r9 != 0) {
        // 0x800D775C: nop
    
            goto L_800D77F0;
    }
    // 0x800D775C: nop

    // 0x800D7760: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7764: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D7768: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D776C: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7770: nop

    // 0x800D7774: sh          $zero, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = 0;
    // 0x800D7778: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D777C: nop

    // 0x800D7780: lh          $s0, 0xB6($t5)
    ctx->r16 = MEM_H(ctx->r13, 0XB6);
    // 0x800D7784: nop

    // 0x800D7788: sh          $s0, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r16;
    // 0x800D778C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7790: nop

    // 0x800D7794: sh          $s0, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r16;
    // 0x800D7798: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D779C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800D77A0: nop

    // 0x800D77A4: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800D77A8: jal         0x80014E80
    // 0x800D77AC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800D77AC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x800D77B0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800D77B4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D77B8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D77BC: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
    // 0x800D77C0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D77C4: nop

    // 0x800D77C8: lwc1        $f10, 0x3C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800D77CC: nop

    // 0x800D77D0: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x800D77D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D77D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D77DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D77E0: addiu       $a2, $zero, 0x59
    ctx->r6 = ADD32(0, 0X59);
    // 0x800D77E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800D77E8: jal         0x80017664
    // 0x800D77EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_1;
    // 0x800D77EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800D77F0:
    // 0x800D77F0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800D77F4: nop

    // 0x800D77F8: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x800D77FC: nop

    // 0x800D7800: bne         $t1, $zero, L_800D7890
    if (ctx->r9 != 0) {
        // 0x800D7804: nop
    
            goto L_800D7890;
    }
    // 0x800D7804: nop

    // 0x800D7808: lh          $t2, 0xA6($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA6);
    // 0x800D780C: nop

    // 0x800D7810: bne         $t2, $zero, L_800D7890
    if (ctx->r10 != 0) {
        // 0x800D7814: nop
    
            goto L_800D7890;
    }
    // 0x800D7814: nop

    // 0x800D7818: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D781C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7820: jal         0x80028FA0
    // 0x800D7824: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800D7824: nop

    after_2:
    // 0x800D7828: beq         $v0, $zero, L_800D7890
    if (ctx->r2 == 0) {
        // 0x800D782C: nop
    
            goto L_800D7890;
    }
    // 0x800D782C: nop

    // 0x800D7830: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7834: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800D7838: sh          $t3, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r11;
    // 0x800D783C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800D7840: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7844: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800D7848: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D784C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D7850: lwc1        $f16, 0x3C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800D7854: nop

    // 0x800D7858: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800D785C: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x800D7860: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800D7864: sh          $t7, 0xB8($t5)
    MEM_H(0XB8, ctx->r13) = ctx->r15;
    // 0x800D7868: nop

    // 0x800D786C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800D7870: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D7874: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7878: nop

    // 0x800D787C: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x800D7880: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7884: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7888: jal         0x80029B60
    // 0x800D788C: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800D788C: nop

    after_3:
L_800D7890:
    // 0x800D7890: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7894: nop

    // 0x800D7898: lh          $t1, 0xB6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XB6);
    // 0x800D789C: nop

    // 0x800D78A0: beq         $t1, $zero, L_800D79E0
    if (ctx->r9 == 0) {
        // 0x800D78A4: nop
    
            goto L_800D79E0;
    }
    // 0x800D78A4: nop

    // 0x800D78A8: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800D78AC: nop

    // 0x800D78B0: lh          $t2, 0xB6($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XB6);
    // 0x800D78B4: nop

    // 0x800D78B8: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800D78BC: sh          $t3, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = ctx->r11;
    // 0x800D78C0: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D78C4: nop

    // 0x800D78C8: lh          $t6, 0xB6($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XB6);
    // 0x800D78CC: nop

    // 0x800D78D0: bne         $t6, $zero, L_800D79E0
    if (ctx->r14 != 0) {
        // 0x800D78D4: nop
    
            goto L_800D79E0;
    }
    // 0x800D78D4: nop

    // 0x800D78D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D78DC: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800D78E0: nop

    // 0x800D78E4: swc1        $f6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f6.u32l;
    // 0x800D78E8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D78EC: nop

    // 0x800D78F0: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800D78F4: nop

    // 0x800D78F8: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
    // 0x800D78FC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7900: nop

    // 0x800D7904: swc1        $f20, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f20.u32l;
    // 0x800D7908: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D790C: nop

    // 0x800D7910: lh          $t1, 0xB8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XB8);
    // 0x800D7914: nop

    // 0x800D7918: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800D791C: nop

    // 0x800D7920: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D7924: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
    // 0x800D7928: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800D792C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D7930: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800D7934: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7938: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D793C: jal         0x8002A46C
    // 0x800D7940: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x800D7940: nop

    after_4:
    // 0x800D7944: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800D7948: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800D794C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800D7950: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D7954: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D7958: nop

    // 0x800D795C: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D7960: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x800D7964: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800D7968: sh          $t4, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r12;
    // 0x800D796C: nop

    // 0x800D7970: jal         0x80014E80
    // 0x800D7974: addiu       $a0, $zero, -0xF
    ctx->r4 = ADD32(0, -0XF);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x800D7974: addiu       $a0, $zero, -0xF
    ctx->r4 = ADD32(0, -0XF);
    after_5:
    // 0x800D7978: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800D797C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800D7980: lh          $t5, 0xA8($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XA8);
    // 0x800D7984: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x800D7988: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800D798C: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D7990: jal         0x80015538
    // 0x800D7994: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x800D7994: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_6:
    // 0x800D7998: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800D799C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D79A0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800D79A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D79A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D79AC: nop

    // 0x800D79B0: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D79B4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x800D79B8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800D79BC: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
    // 0x800D79C0: nop

    // 0x800D79C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D79C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D79CC: jal         0x8002A640
    // 0x800D79D0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_7;
    // 0x800D79D0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_7:
    // 0x800D79D4: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800D79D8: nop

    // 0x800D79DC: sh          $v0, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r2;
L_800D79E0:
    // 0x800D79E0: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800D79E4: nop

    // 0x800D79E8: lh          $t0, 0xA6($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XA6);
    // 0x800D79EC: nop

    // 0x800D79F0: beq         $t0, $zero, L_800D7AE4
    if (ctx->r8 == 0) {
        // 0x800D79F4: nop
    
            goto L_800D7AE4;
    }
    // 0x800D79F4: nop

    // 0x800D79F8: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D79FC: nop

    // 0x800D7A00: lh          $t6, 0xAA($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XAA);
    // 0x800D7A04: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800D7A08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D7A0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D7A10: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x800D7A14: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800D7A18: jal         0x80015538
    // 0x800D7A1C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x800D7A1C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_8:
    // 0x800D7A20: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7A24: nop

    // 0x800D7A28: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x800D7A2C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7A30: nop

    // 0x800D7A34: lwc1        $f10, 0x3C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800D7A38: nop

    // 0x800D7A3C: swc1        $f10, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f10.u32l;
    // 0x800D7A40: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7A44: nop

    // 0x800D7A48: lh          $t9, 0xA8($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XA8);
    // 0x800D7A4C: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800D7A50: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800D7A54: nop

    // 0x800D7A58: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D7A5C: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x800D7A60: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800D7A64: nop

    // 0x800D7A68: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800D7A6C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D7A70: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D7A74: nop

    // 0x800D7A78: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800D7A7C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x800D7A80: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800D7A84: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x800D7A88: nop

    // 0x800D7A8C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800D7A90: nop

    // 0x800D7A94: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x800D7A98: beq         $at, $zero, L_800D7AB8
    if (ctx->r1 == 0) {
        // 0x800D7A9C: nop
    
            goto L_800D7AB8;
    }
    // 0x800D7A9C: nop

    // 0x800D7AA0: slti        $at, $t0, -0xA
    ctx->r1 = SIGNED(ctx->r8) < -0XA ? 1 : 0;
    // 0x800D7AA4: bne         $at, $zero, L_800D7AB8
    if (ctx->r1 != 0) {
        // 0x800D7AA8: nop
    
            goto L_800D7AB8;
    }
    // 0x800D7AA8: nop

    // 0x800D7AAC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7AB0: b           L_800D7ADC
    // 0x800D7AB4: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
        goto L_800D7ADC;
    // 0x800D7AB4: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
L_800D7AB8:
    // 0x800D7AB8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7ABC: nop

    // 0x800D7AC0: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800D7AC4: nop

    // 0x800D7AC8: bne         $t7, $zero, L_800D7ADC
    if (ctx->r15 != 0) {
        // 0x800D7ACC: nop
    
            goto L_800D7ADC;
    }
    // 0x800D7ACC: nop

    // 0x800D7AD0: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7AD4: nop

    // 0x800D7AD8: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_800D7ADC:
    // 0x800D7ADC: b           L_800D7CAC
    // 0x800D7AE0: nop

        goto L_800D7CAC;
    // 0x800D7AE0: nop

L_800D7AE4:
    // 0x800D7AE4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7AE8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800D7AEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D7AF0: lwc1        $f10, 0x44($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X44);
    // 0x800D7AF4: nop

    // 0x800D7AF8: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x800D7AFC: nop

    // 0x800D7B00: bc1f        L_800D7B2C
    if (!c1cs) {
        // 0x800D7B04: nop
    
            goto L_800D7B2C;
    }
    // 0x800D7B04: nop

    // 0x800D7B08: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7B0C: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x800D7B10: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x800D7B14: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800D7B18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D7B1C: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x800D7B20: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800D7B24: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800D7B28: swc1        $f10, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f10.u32l;
L_800D7B2C:
    // 0x800D7B2C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D7B30: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7B34: nop

    // 0x800D7B38: swc1        $f18, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f18.u32l;
    // 0x800D7B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7B44: jal         0x80029C40
    // 0x800D7B48: nop

    func_80029C40(rdram, ctx);
        goto after_9;
    // 0x800D7B48: nop

    after_9:
    // 0x800D7B4C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7B50: nop

    // 0x800D7B54: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800D7B58: nop

    // 0x800D7B5C: bne         $t3, $zero, L_800D7CAC
    if (ctx->r11 != 0) {
        // 0x800D7B60: nop
    
            goto L_800D7CAC;
    }
    // 0x800D7B60: nop

    // 0x800D7B64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D7B68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D7B6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7B70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800D7B78: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800D7B7C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D7B80: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800D7B84: jal         0x80029018
    // 0x800D7B88: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_10;
    // 0x800D7B88: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x800D7B8C: beq         $v0, $zero, L_800D7C5C
    if (ctx->r2 == 0) {
        // 0x800D7B90: nop
    
            goto L_800D7C5C;
    }
    // 0x800D7B90: nop

    // 0x800D7B94: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D7B98: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7B9C: nop

    // 0x800D7BA0: swc1        $f6, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f6.u32l;
    // 0x800D7BA4: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7BA8: nop

    // 0x800D7BAC: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800D7BB0: nop

    // 0x800D7BB4: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800D7BB8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7BBC: nop

    // 0x800D7BC0: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800D7BC4: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7BC8: nop

    // 0x800D7BCC: lh          $t5, 0xB6($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XB6);
    // 0x800D7BD0: nop

    // 0x800D7BD4: bne         $t5, $zero, L_800D7C50
    if (ctx->r13 != 0) {
        // 0x800D7BD8: nop
    
            goto L_800D7C50;
    }
    // 0x800D7BD8: nop

    // 0x800D7BDC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7BE0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x800D7BE4: sh          $t8, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r24;
    // 0x800D7BE8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800D7BEC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7BF0: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800D7BF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D7BF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D7BFC: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800D7C00: nop

    // 0x800D7C04: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800D7C08: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x800D7C0C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800D7C10: sh          $t3, 0xB8($t9)
    MEM_H(0XB8, ctx->r25) = ctx->r11;
    // 0x800D7C14: nop

    // 0x800D7C18: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800D7C1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D7C20: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7C24: nop

    // 0x800D7C28: swc1        $f18, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f18.u32l;
    // 0x800D7C2C: jal         0x800297DC
    // 0x800D7C30: nop

    func_800297DC(rdram, ctx);
        goto after_11;
    // 0x800D7C30: nop

    after_11:
    // 0x800D7C34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7C38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7C3C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800D7C40: jal         0x80029824
    // 0x800D7C44: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80029824(rdram, ctx);
        goto after_12;
    // 0x800D7C44: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x800D7C48: b           L_800D7C5C
    // 0x800D7C4C: nop

        goto L_800D7C5C;
    // 0x800D7C4C: nop

L_800D7C50:
    // 0x800D7C50: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7C54: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800D7C58: sh          $t4, 0xB6($t6)
    MEM_H(0XB6, ctx->r14) = ctx->r12;
L_800D7C5C:
    // 0x800D7C5C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D7C60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D7C64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7C68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7C6C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x800D7C70: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x800D7C74: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D7C78: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800D7C7C: jal         0x800295C0
    // 0x800D7C80: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_13;
    // 0x800D7C80: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_13:
    // 0x800D7C84: beq         $v0, $zero, L_800D7C9C
    if (ctx->r2 == 0) {
        // 0x800D7C88: nop
    
            goto L_800D7C9C;
    }
    // 0x800D7C88: nop

    // 0x800D7C8C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800D7C90: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7C94: b           L_800D7CAC
    // 0x800D7C98: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
        goto L_800D7CAC;
    // 0x800D7C98: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
L_800D7C9C:
    // 0x800D7C9C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800D7CA0: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D7CA4: nop

    // 0x800D7CA8: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
L_800D7CAC:
    // 0x800D7CAC: b           L_800D7CB4
    // 0x800D7CB0: nop

        goto L_800D7CB4;
    // 0x800D7CB0: nop

L_800D7CB4:
    // 0x800D7CB4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D7CB8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D7CBC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D7CC0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800D7CC4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800D7CC8: jr          $ra
    // 0x800D7CCC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800D7CCC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80098208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098208: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009820C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098210: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80098214: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80098218: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009821C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80098220: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80098224: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80098228: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009822C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80098230: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80098234: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80098238: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009823C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80098240: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80098244: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80098248: addiu       $a1, $a1, 0x3664
    ctx->r5 = ADD32(ctx->r5, 0X3664);
    // 0x8009824C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80098250: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80098254: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80098258: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009825C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80098260: jal         0x80027464
    // 0x80098264: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80098264: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80098268: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009826C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80098270: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80098274: beq         $t1, $at, L_800982AC
    if (ctx->r9 == ctx->r1) {
        // 0x80098278: nop
    
            goto L_800982AC;
    }
    // 0x80098278: nop

    // 0x8009827C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80098280: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80098284: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80098288: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009828C: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80098290: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80098294: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80098298: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x8009829C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800982A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800982A4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800982A8: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
L_800982AC:
    // 0x800982AC: b           L_800982B4
    // 0x800982B0: nop

        goto L_800982B4;
    // 0x800982B0: nop

L_800982B4:
    // 0x800982B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800982B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800982BC: jr          $ra
    // 0x800982C0: nop

    return;
    // 0x800982C0: nop

;}
RECOMP_FUNC void func_800F310C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F310C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F3110: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F3114: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F3118: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F311C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F3120: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F3124: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F3128: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F312C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F3130: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F3134: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F3138: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F313C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F3140: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800F3144: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F3148: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F314C: addiu       $a1, $a1, 0x4504
    ctx->r5 = ADD32(ctx->r5, 0X4504);
    // 0x800F3150: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F3154: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F3158: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F315C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F3160: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F3164: jal         0x80027464
    // 0x800F3168: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F3168: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800F316C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800F3170: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3174: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F3178: beq         $t1, $at, L_800F3230
    if (ctx->r9 == ctx->r1) {
        // 0x800F317C: nop
    
            goto L_800F3230;
    }
    // 0x800F317C: nop

    // 0x800F3180: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F3184: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F3188: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800F318C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800F3190: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800F3194: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F3198: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800F319C: jal         0x800295C0
    // 0x800F31A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x800F31A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x800F31A4: beq         $v0, $zero, L_800F31D8
    if (ctx->r2 == 0) {
        // 0x800F31A8: nop
    
            goto L_800F31D8;
    }
    // 0x800F31A8: nop

    // 0x800F31AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F31B0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F31B4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F31B8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F31BC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F31C0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F31C4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F31C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F31CC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800F31D0: b           L_800F3200
    // 0x800F31D4: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_800F3200;
    // 0x800F31D4: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_800F31D8:
    // 0x800F31D8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F31DC: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800F31E0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800F31E4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F31E8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F31EC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F31F0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F31F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F31F8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F31FC: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
L_800F3200:
    // 0x800F3200: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3204: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800F3208: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800F320C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800F3210: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800F3214: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F3218: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800F321C: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x800F3220: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F3224: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F3228: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F322C: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
L_800F3230:
    // 0x800F3230: b           L_800F3238
    // 0x800F3234: nop

        goto L_800F3238;
    // 0x800F3234: nop

L_800F3238:
    // 0x800F3238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F323C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F3240: jr          $ra
    // 0x800F3244: nop

    return;
    // 0x800F3244: nop

;}
RECOMP_FUNC void func_800D1C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1C84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D1C88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D1C8C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D1C90: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D1C94: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D1C98: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D1C9C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D1CA0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D1CA4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D1CA8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D1CAC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D1CB0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D1CB4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D1CB8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D1CBC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D1CC0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D1CC4: addiu       $a1, $a1, 0x40E4
    ctx->r5 = ADD32(ctx->r5, 0X40E4);
    // 0x800D1CC8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D1CCC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D1CD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D1CD4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D1CD8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D1CDC: jal         0x80027464
    // 0x800D1CE0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D1CE0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D1CE4: b           L_800D1CEC
    // 0x800D1CE8: nop

        goto L_800D1CEC;
    // 0x800D1CE8: nop

L_800D1CEC:
    // 0x800D1CEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1CF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D1CF4: jr          $ra
    // 0x800D1CF8: nop

    return;
    // 0x800D1CF8: nop

;}
RECOMP_FUNC void func_800D0F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0F98: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800D0F9C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D0FA0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800D0FA4: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D0FA8: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800D0FAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D0FB0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D0FB4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D0FB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D0FBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D0FC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D0FC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D0FC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D0FCC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D0FD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D0FD4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800D0FD8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0FDC: nop

    // 0x800D0FE0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D0FE4: nop

    // 0x800D0FE8: bne         $t1, $zero, L_800D1088
    if (ctx->r9 != 0) {
        // 0x800D0FEC: nop
    
            goto L_800D1088;
    }
    // 0x800D0FEC: nop

    // 0x800D0FF0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0FF4: nop

    // 0x800D0FF8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D0FFC: nop

    // 0x800D1000: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D1004: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D1008: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800D100C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D1010: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1014: nop

    // 0x800D1018: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800D101C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1020: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800D1024: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800D1028: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D102C: nop

    // 0x800D1030: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x800D1034: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D1038: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D103C: nop

    // 0x800D1040: swc1        $f6, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f6.u32l;
    // 0x800D1044: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1048: nop

    // 0x800D104C: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800D1050: nop

    // 0x800D1054: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x800D1058: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D105C: nop

    // 0x800D1060: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x800D1064: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1068: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800D106C: addiu       $t3, $t3, -0x7AD8
    ctx->r11 = ADD32(ctx->r11, -0X7AD8);
    // 0x800D1070: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1074: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800D1078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D107C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800D1080: jal         0x8001C0EC
    // 0x800D1084: addiu       $a3, $zero, 0x93
    ctx->r7 = ADD32(0, 0X93);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D1084: addiu       $a3, $zero, 0x93
    ctx->r7 = ADD32(0, 0X93);
    after_0:
L_800D1088:
    // 0x800D1088: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D108C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1090: jal         0x80028FA0
    // 0x800D1094: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800D1094: nop

    after_1:
    // 0x800D1098: beq         $v0, $zero, L_800D10C4
    if (ctx->r2 == 0) {
        // 0x800D109C: nop
    
            goto L_800D10C4;
    }
    // 0x800D109C: nop

    // 0x800D10A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D10A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D10A8: jal         0x80029B60
    // 0x800D10AC: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800D10AC: nop

    after_2:
    // 0x800D10B0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D10B4: nop

    // 0x800D10B8: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800D10BC: nop

    // 0x800D10C0: swc1        $f8, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f8.u32l;
L_800D10C4:
    // 0x800D10C4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D10C8: nop

    // 0x800D10CC: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800D10D0: nop

    // 0x800D10D4: beq         $t5, $zero, L_800D1150
    if (ctx->r13 == 0) {
        // 0x800D10D8: nop
    
            goto L_800D1150;
    }
    // 0x800D10D8: nop

    // 0x800D10DC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D10E0: nop

    // 0x800D10E4: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800D10E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D10EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D10F0: lui         $a2, 0x3F0B
    ctx->r6 = S32(0X3F0B << 16);
    // 0x800D10F4: ori         $a2, $a2, 0xA2F0
    ctx->r6 = ctx->r6 | 0XA2F0;
    // 0x800D10F8: jal         0x80029EF8
    // 0x800D10FC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800D10FC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x800D1100: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1104: nop

    // 0x800D1108: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800D110C: nop

    // 0x800D1110: bne         $t8, $zero, L_800D1150
    if (ctx->r24 != 0) {
        // 0x800D1114: nop
    
            goto L_800D1150;
    }
    // 0x800D1114: nop

    // 0x800D1118: jal         0x80014E80
    // 0x800D111C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x800D111C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_4:
    // 0x800D1120: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800D1124: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1128: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800D112C: swc1        $f16, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f16.u32l;
    // 0x800D1130: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1134: nop

    // 0x800D1138: lwc1        $f18, 0x3C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800D113C: nop

    // 0x800D1140: swc1        $f18, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f18.u32l;
    // 0x800D1144: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1148: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800D114C: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
L_800D1150:
    // 0x800D1150: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1154: nop

    // 0x800D1158: lwc1        $f4, 0x28($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800D115C: nop

    // 0x800D1160: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x800D1164: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D1168: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D116C: nop

    // 0x800D1170: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
    // 0x800D1174: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1178: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D117C: jal         0x80029C40
    // 0x800D1180: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800D1180: nop

    after_5:
    // 0x800D1184: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D1188: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D118C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1190: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1194: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800D1198: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800D119C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D11A0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800D11A4: jal         0x80029018
    // 0x800D11A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800D11A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x800D11AC: beq         $v0, $zero, L_800D11E4
    if (ctx->r2 == 0) {
        // 0x800D11B0: nop
    
            goto L_800D11E4;
    }
    // 0x800D11B0: nop

    // 0x800D11B4: jal         0x800297DC
    // 0x800D11B8: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800D11B8: nop

    after_7:
    // 0x800D11BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D11C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D11C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D11C8: jal         0x80029824
    // 0x800D11CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800D11CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800D11D0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D11D4: nop

    // 0x800D11D8: lwc1        $f16, 0x3C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800D11DC: nop

    // 0x800D11E0: swc1        $f16, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f16.u32l;
L_800D11E4:
    // 0x800D11E4: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800D11E8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D11EC: nop

    // 0x800D11F0: swc1        $f18, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f18.u32l;
    // 0x800D11F4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800D11F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D11FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1200: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1204: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D1208: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800D120C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D1210: jal         0x80029F58
    // 0x800D1214: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80029F58(rdram, ctx);
        goto after_9;
    // 0x800D1214: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x800D1218: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D121C: bne         $v0, $at, L_800D1248
    if (ctx->r2 != ctx->r1) {
        // 0x800D1220: nop
    
            goto L_800D1248;
    }
    // 0x800D1220: nop

    // 0x800D1224: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1228: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800D122C: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800D1230: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1234: nop

    // 0x800D1238: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800D123C: nop

    // 0x800D1240: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800D1244: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
L_800D1248:
    // 0x800D1248: b           L_800D1250
    // 0x800D124C: nop

        goto L_800D1250;
    // 0x800D124C: nop

L_800D1250:
    // 0x800D1250: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D1254: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800D1258: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800D125C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800D1260: jr          $ra
    // 0x800D1264: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800D1264: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8006031C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006031C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80060320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060324: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80060328: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8006032C:
    // 0x8006032C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80060330: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80060334: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80060338: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006033C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80060340: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80060344: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80060348: nop

    // 0x8006034C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80060350: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80060354: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80060358: bne         $t1, $at, L_80060368
    if (ctx->r9 != ctx->r1) {
        // 0x8006035C: nop
    
            goto L_80060368;
    }
    // 0x8006035C: nop

    // 0x80060360: b           L_80060438
    // 0x80060364: nop

        goto L_80060438;
    // 0x80060364: nop

L_80060368:
    // 0x80060368: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8006036C: lui         $t2, 0x8032
    ctx->r10 = S32(0X8032 << 16);
    // 0x80060370: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80060374: lw          $t2, 0x4994($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4994);
    // 0x80060378: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006037C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80060380: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80060384: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x80060388: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006038C: sll         $t6, $t7, 3
    ctx->r14 = S32(ctx->r15 << 3);
    // 0x80060390: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80060394: lw          $t8, -0x3560($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3560);
    // 0x80060398: nop

    // 0x8006039C: bne         $t8, $zero, L_80060424
    if (ctx->r24 != 0) {
        // 0x800603A0: nop
    
            goto L_80060424;
    }
    // 0x800603A0: nop

    // 0x800603A4: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x800603A8: lw          $t0, 0x4994($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4994);
    // 0x800603AC: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x800603B0: addiu       $t9, $t9, 0x1428
    ctx->r25 = ADD32(ctx->r25, 0X1428);
    // 0x800603B4: beq         $t9, $t0, L_800603F4
    if (ctx->r25 == ctx->r8) {
        // 0x800603B8: nop
    
            goto L_800603F4;
    }
    // 0x800603B8: nop

    // 0x800603BC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800603C0: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x800603C4: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800603C8: lw          $t1, 0x4994($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4994);
    // 0x800603CC: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800603D0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800603D4: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x800603D8: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x800603DC: lw          $a1, 0x4($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X4);
    // 0x800603E0: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x800603E4: jal         0x8001EA68
    // 0x800603E8: nop

    DecompressFile(rdram, ctx);
        goto after_0;
    // 0x800603E8: nop

    after_0:
    // 0x800603EC: b           L_80060424
    // 0x800603F0: nop

        goto L_80060424;
    // 0x800603F0: nop

L_800603F4:
    // 0x800603F4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800603F8: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x800603FC: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80060400: lw          $t5, 0x4994($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4994);
    // 0x80060404: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80060408: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006040C: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80060410: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80060414: lw          $a1, 0x4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X4);
    // 0x80060418: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x8006041C: jal         0x8001E98C
    // 0x80060420: nop

    LoadFile(rdram, ctx);
        goto after_1;
    // 0x80060420: nop

    after_1:
L_80060424:
    // 0x80060424: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80060428: nop

    // 0x8006042C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80060430: b           L_8006032C
    // 0x80060434: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_8006032C;
    // 0x80060434: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_80060438:
    // 0x80060438: b           L_80060440
    // 0x8006043C: nop

        goto L_80060440;
    // 0x8006043C: nop

L_80060440:
    // 0x80060440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80060448: jr          $ra
    // 0x8006044C: nop

    return;
    // 0x8006044C: nop

;}
RECOMP_FUNC void func_800977EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800977EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800977F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800977F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800977F8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800977FC: nop

    // 0x80097800: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80097804: nop

    // 0x80097808: bne         $t7, $zero, L_80097828
    if (ctx->r15 != 0) {
        // 0x8009780C: nop
    
            goto L_80097828;
    }
    // 0x8009780C: nop

    // 0x80097810: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80097814: nop

    // 0x80097818: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8009781C: nop

    // 0x80097820: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80097824: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
L_80097828:
    // 0x80097828: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009782C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097830: jal         0x8002A1FC
    // 0x80097834: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_0;
    // 0x80097834: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_0:
    // 0x80097838: beq         $v0, $zero, L_80097870
    if (ctx->r2 == 0) {
        // 0x8009783C: nop
    
            goto L_80097870;
    }
    // 0x8009783C: nop

    // 0x80097840: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80097844: nop

    // 0x80097848: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x8009784C: nop

    // 0x80097850: beq         $t2, $zero, L_80097870
    if (ctx->r10 == 0) {
        // 0x80097854: nop
    
            goto L_80097870;
    }
    // 0x80097854: nop

    // 0x80097858: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8009785C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80097860: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80097864: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80097868: nop

    // 0x8009786C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80097870:
    // 0x80097870: b           L_80097878
    // 0x80097874: nop

        goto L_80097878;
    // 0x80097874: nop

L_80097878:
    // 0x80097878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009787C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80097880: jr          $ra
    // 0x80097884: nop

    return;
    // 0x80097884: nop

;}
RECOMP_FUNC void func_8009E40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E40C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009E410: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009E414: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009E418: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009E41C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009E420: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009E424: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E428: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009E42C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E430: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009E434: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009E438: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009E43C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009E440: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009E444: nop

    // 0x8009E448: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009E44C: nop

    // 0x8009E450: bne         $t1, $zero, L_8009E4A4
    if (ctx->r9 != 0) {
        // 0x8009E454: nop
    
            goto L_8009E4A4;
    }
    // 0x8009E454: nop

    // 0x8009E458: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8009E45C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009E460: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8009E464: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009E468: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8009E46C: addiu       $t4, $t4, 0x6AF4
    ctx->r12 = ADD32(ctx->r12, 0X6AF4);
    // 0x8009E470: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009E474: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8009E478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009E47C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009E480: jal         0x8001C0EC
    // 0x8009E484: addiu       $a3, $zero, 0x12F
    ctx->r7 = ADD32(0, 0X12F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8009E484: addiu       $a3, $zero, 0x12F
    ctx->r7 = ADD32(0, 0X12F);
    after_0:
    // 0x8009E488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009E48C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009E490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009E494: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x8009E498: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009E49C: jal         0x800175F0
    // 0x8009E4A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8009E4A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8009E4A4:
    // 0x8009E4A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009E4A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009E4AC: jal         0x8001B44C
    // 0x8009E4B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x8009E4B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8009E4B4: beq         $v0, $zero, L_8009E4D8
    if (ctx->r2 == 0) {
        // 0x8009E4B8: nop
    
            goto L_8009E4D8;
    }
    // 0x8009E4B8: nop

    // 0x8009E4BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009E4C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009E4C4: jal         0x8002B0E4
    // 0x8009E4C8: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x8009E4C8: nop

    after_3:
    // 0x8009E4CC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8009E4D0: nop

    // 0x8009E4D4: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
L_8009E4D8:
    // 0x8009E4D8: b           L_8009E4E0
    // 0x8009E4DC: nop

        goto L_8009E4E0;
    // 0x8009E4DC: nop

L_8009E4E0:
    // 0x8009E4E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E4E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009E4E8: jr          $ra
    // 0x8009E4EC: nop

    return;
    // 0x8009E4EC: nop

;}
RECOMP_FUNC void func_800C7BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7BD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C7BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7BE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C7BE4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C7BE8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C7BEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C7BF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C7BF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C7BF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C7BFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C7C00: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C7C04: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C7C08: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C7C0C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C7C10: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C7C14: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C7C18: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C7C1C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C7C20: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C7C24: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C7C28: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C7C2C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C7C30: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C7C34: nop

    // 0x800C7C38: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800C7C3C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C7C40: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C7C44: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C7C48: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C7C4C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C7C50: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C7C54: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C7C58: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C7C5C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C7C60: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C7C64: nop

    // 0x800C7C68: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800C7C6C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C7C70: nop

    // 0x800C7C74: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800C7C78: nop

    // 0x800C7C7C: bne         $t7, $zero, L_800C7D14
    if (ctx->r15 != 0) {
        // 0x800C7C80: nop
    
            goto L_800C7D14;
    }
    // 0x800C7C80: nop

    // 0x800C7C84: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C7C88: nop

    // 0x800C7C8C: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800C7C90: nop

    // 0x800C7C94: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C7C98: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800C7C9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7CA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7CA4: jal         0x8001BBDC
    // 0x800C7CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C7CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800C7CAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800C7CB0: jal         0x8001BBDC
    // 0x800C7CB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800C7CB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800C7CB8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7CBC: jal         0x8001BBDC
    // 0x800C7CC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800C7CC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800C7CC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7CC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7CCC: jal         0x8001BB34
    // 0x800C7CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800C7CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800C7CD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800C7CD8: jal         0x8001BB34
    // 0x800C7CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x800C7CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800C7CE0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7CE4: jal         0x8001BB34
    // 0x800C7CE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x800C7CE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800C7CEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7CF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7CF4: jal         0x8001BB04
    // 0x800C7CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_6;
    // 0x800C7CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800C7CFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800C7D00: jal         0x8001BB04
    // 0x800C7D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_7;
    // 0x800C7D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800C7D08: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7D0C: jal         0x8001BB04
    // 0x800C7D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_8;
    // 0x800C7D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_800C7D14:
    // 0x800C7D14: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C7D18: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7D1C: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x800C7D20: lwc1        $f9, 0x4E88($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4E88);
    // 0x800C7D24: lwc1        $f8, 0x4E8C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E8C);
    // 0x800C7D28: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800C7D2C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800C7D30: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800C7D34: swc1        $f16, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f16.u32l;
    // 0x800C7D38: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C7D3C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7D40: lwc1        $f18, 0x10($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X10);
    // 0x800C7D44: lwc1        $f7, 0x4E90($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4E90);
    // 0x800C7D48: lwc1        $f6, 0x4E94($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4E94);
    // 0x800C7D4C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800C7D50: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800C7D54: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800C7D58: swc1        $f10, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f10.u32l;
    // 0x800C7D5C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C7D60: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7D64: lwc1        $f16, 0x14($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X14);
    // 0x800C7D68: lwc1        $f5, 0x4E98($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4E98);
    // 0x800C7D6C: lwc1        $f4, 0x4E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4E9C);
    // 0x800C7D70: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800C7D74: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800C7D78: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800C7D7C: swc1        $f8, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f8.u32l;
    // 0x800C7D80: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800C7D84: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800C7D88: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C7D8C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C7D90: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C7D94: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C7D98: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C7D9C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800C7DA0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800C7DA4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7DA8: lwc1        $f10, 0xC($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0XC);
    // 0x800C7DAC: lwc1        $f19, 0x4EA0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4EA0);
    // 0x800C7DB0: lwc1        $f18, 0x4EA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4EA4);
    // 0x800C7DB4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800C7DB8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800C7DBC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800C7DC0: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    // 0x800C7DC4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800C7DC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C7DCC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800C7DD0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C7DD4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C7DD8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C7DDC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C7DE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C7DE4: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x800C7DE8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7DEC: lwc1        $f8, 0x10($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X10);
    // 0x800C7DF0: lwc1        $f17, 0x4EA8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4EA8);
    // 0x800C7DF4: lwc1        $f16, 0x4EAC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4EAC);
    // 0x800C7DF8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800C7DFC: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800C7E00: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800C7E04: swc1        $f4, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f4.u32l;
    // 0x800C7E08: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800C7E0C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800C7E10: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C7E14: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C7E18: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C7E1C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C7E20: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C7E24: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800C7E28: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800C7E2C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7E30: lwc1        $f6, 0x14($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X14);
    // 0x800C7E34: lwc1        $f11, 0x4EB0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4EB0);
    // 0x800C7E38: lwc1        $f10, 0x4EB4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4EB4);
    // 0x800C7E3C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800C7E40: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x800C7E44: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800C7E48: swc1        $f18, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f18.u32l;
    // 0x800C7E4C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7E50: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800C7E54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C7E58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C7E5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C7E60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C7E64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C7E68: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800C7E6C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800C7E70: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7E74: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800C7E78: lwc1        $f9, 0x4EB8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4EB8);
    // 0x800C7E7C: lwc1        $f8, 0x4EBC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4EBC);
    // 0x800C7E80: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800C7E84: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800C7E88: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800C7E8C: swc1        $f16, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f16.u32l;
    // 0x800C7E90: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7E94: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C7E98: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x800C7E9C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C7EA0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C7EA4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C7EA8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C7EAC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800C7EB0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800C7EB4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7EB8: lwc1        $f18, 0x10($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X10);
    // 0x800C7EBC: lwc1        $f7, 0x4EC0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4EC0);
    // 0x800C7EC0: lwc1        $f6, 0x4EC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4EC4);
    // 0x800C7EC4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800C7EC8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800C7ECC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800C7ED0: swc1        $f10, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f10.u32l;
    // 0x800C7ED4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7ED8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800C7EDC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C7EE0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C7EE4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C7EE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C7EEC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C7EF0: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800C7EF4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800C7EF8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7EFC: lwc1        $f16, 0x14($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X14);
    // 0x800C7F00: lwc1        $f5, 0x4EC8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4EC8);
    // 0x800C7F04: lwc1        $f4, 0x4ECC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4ECC);
    // 0x800C7F08: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800C7F0C: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800C7F10: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800C7F14: swc1        $f8, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f8.u32l;
    // 0x800C7F18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7F1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7F20: jal         0x8001B44C
    // 0x800C7F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_9;
    // 0x800C7F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x800C7F28: beq         $v0, $zero, L_800C7FCC
    if (ctx->r2 == 0) {
        // 0x800C7F2C: nop
    
            goto L_800C7FCC;
    }
    // 0x800C7F2C: nop

    // 0x800C7F30: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C7F34: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800C7F38: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800C7F3C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C7F40: nop

    // 0x800C7F44: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800C7F48: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C7F4C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C7F50: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x800C7F54: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800C7F58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C7F5C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C7F60: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C7F64: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C7F68: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C7F6C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C7F70: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C7F74: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800C7F78: sh          $t3, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r11;
    // 0x800C7F7C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7F80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C7F84: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800C7F88: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C7F8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C7F90: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C7F94: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C7F98: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C7F9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C7FA0: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
    // 0x800C7FA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7FA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7FAC: jal         0x8001BBDC
    // 0x800C7FB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x800C7FB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x800C7FB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800C7FB8: jal         0x8001BBDC
    // 0x800C7FBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x800C7FBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x800C7FC0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7FC4: jal         0x8001BBDC
    // 0x800C7FC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_12;
    // 0x800C7FC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_800C7FCC:
    // 0x800C7FCC: b           L_800C7FD4
    // 0x800C7FD0: nop

        goto L_800C7FD4;
    // 0x800C7FD0: nop

L_800C7FD4:
    // 0x800C7FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C7FD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C7FDC: jr          $ra
    // 0x800C7FE0: nop

    return;
    // 0x800C7FE0: nop

;}
RECOMP_FUNC void func_800DD690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DD690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DD694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DD698: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD69C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD6A0: jal         0x8002B0E4
    // 0x800DD6A4: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800DD6A4: nop

    after_0:
    // 0x800DD6A8: b           L_800DD6B0
    // 0x800DD6AC: nop

        goto L_800DD6B0;
    // 0x800DD6AC: nop

L_800DD6B0:
    // 0x800DD6B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DD6B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DD6B8: jr          $ra
    // 0x800DD6BC: nop

    return;
    // 0x800DD6BC: nop

;}
RECOMP_FUNC void func_800EBEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBEA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EBEA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EBEA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EBEAC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EBEB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EBEB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EBEB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EBEBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EBEC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EBEC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EBEC8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EBECC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EBED0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800EBED4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800EBED8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EBEDC: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800EBEE0: nop

    // 0x800EBEE4: bne         $t1, $at, L_800EBF04
    if (ctx->r9 != ctx->r1) {
        // 0x800EBEE8: nop
    
            goto L_800EBF04;
    }
    // 0x800EBEE8: nop

    // 0x800EBEEC: b           L_800EBEF4
    // 0x800EBEF0: nop

        goto L_800EBEF4;
    // 0x800EBEF0: nop

L_800EBEF4:
    // 0x800EBEF4: jal         0x800EBC88
    // 0x800EBEF8: nop

    func_800EBC88(rdram, ctx);
        goto after_0;
    // 0x800EBEF8: nop

    after_0:
    // 0x800EBEFC: b           L_800EBF0C
    // 0x800EBF00: nop

        goto L_800EBF0C;
    // 0x800EBF00: nop

L_800EBF04:
    // 0x800EBF04: b           L_800EBF0C
    // 0x800EBF08: nop

        goto L_800EBF0C;
    // 0x800EBF08: nop

L_800EBF0C:
    // 0x800EBF0C: b           L_800EBF14
    // 0x800EBF10: nop

        goto L_800EBF14;
    // 0x800EBF10: nop

L_800EBF14:
    // 0x800EBF14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EBF18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EBF1C: jr          $ra
    // 0x800EBF20: nop

    return;
    // 0x800EBF20: nop

;}
RECOMP_FUNC void func_80096454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096454: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80096458: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8009645C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80096460: bne         $t6, $at, L_800964BC
    if (ctx->r14 != ctx->r1) {
        // 0x80096464: nop
    
            goto L_800964BC;
    }
    // 0x80096464: nop

    // 0x80096468: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8009646C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80096470: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096474: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80096478: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009647C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80096480: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80096484: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80096488: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8009648C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80096490: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80096494: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80096498: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8009649C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800964A0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800964A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800964A8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800964AC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800964B0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800964B4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800964B8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800964BC:
    // 0x800964BC: jr          $ra
    // 0x800964C0: nop

    return;
    // 0x800964C0: nop

    // 0x800964C4: jr          $ra
    // 0x800964C8: nop

    return;
    // 0x800964C8: nop

;}
RECOMP_FUNC void func_800766B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800766B4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800766B8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800766BC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800766C0: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800766C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800766C8: sb          $a0, 0x7920($at)
    MEM_B(0X7920, ctx->r1) = ctx->r4;
    // 0x800766CC: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x800766D0: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x800766D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800766D8: lw          $t9, 0x6CFC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6CFC);
    // 0x800766DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800766E0: sw          $t9, 0x7924($at)
    MEM_W(0X7924, ctx->r1) = ctx->r25;
    // 0x800766E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800766E8: sb          $zero, 0x790E($at)
    MEM_B(0X790E, ctx->r1) = 0;
    // 0x800766EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800766F0: sb          $zero, 0x7912($at)
    MEM_B(0X7912, ctx->r1) = 0;
    // 0x800766F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800766F8: sb          $zero, 0x7916($at)
    MEM_B(0X7916, ctx->r1) = 0;
    // 0x800766FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076700: sb          $zero, 0x791A($at)
    MEM_B(0X791A, ctx->r1) = 0;
    // 0x80076704: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80076708: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007670C: sh          $t0, 0x792A($at)
    MEM_H(0X792A, ctx->r1) = ctx->r8;
    // 0x80076710: jr          $ra
    // 0x80076714: nop

    return;
    // 0x80076714: nop

    // 0x80076718: jr          $ra
    // 0x8007671C: nop

    return;
    // 0x8007671C: nop

;}
RECOMP_FUNC void func_800C238C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C238C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C2390: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C2394: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C2398: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C239C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C23A0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C23A4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C23A8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C23AC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C23B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C23B4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C23B8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C23BC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C23C0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C23C4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C23C8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C23CC: addiu       $a1, $a1, 0x3EEC
    ctx->r5 = ADD32(ctx->r5, 0X3EEC);
    // 0x800C23D0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C23D4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C23D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C23DC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C23E0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C23E4: jal         0x80027464
    // 0x800C23E8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C23E8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C23EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800C23F0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C23F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C23F8: beq         $t1, $at, L_800C2484
    if (ctx->r9 == ctx->r1) {
        // 0x800C23FC: nop
    
            goto L_800C2484;
    }
    // 0x800C23FC: nop

    // 0x800C2400: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C2404: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800C2408: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C240C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C2410: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C2414: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C2418: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C241C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C2420: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C2424: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C2428: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800C242C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C2430: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800C2434: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C2438: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C243C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C2440: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C2444: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C2448: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C244C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C2450: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C2454: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x800C2458: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C245C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800C2460: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C2464: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C2468: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C246C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C2470: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C2474: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C2478: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C247C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800C2480: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_800C2484:
    // 0x800C2484: b           L_800C248C
    // 0x800C2488: nop

        goto L_800C248C;
    // 0x800C2488: nop

L_800C248C:
    // 0x800C248C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C2490: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C2494: jr          $ra
    // 0x800C2498: nop

    return;
    // 0x800C2498: nop

;}
RECOMP_FUNC void func_800D613C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D613C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D6140: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D6144: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D6148: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D614C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D6150: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D6154: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D6158: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D615C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D6160: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D6164: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D6168: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D616C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800D6170: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6174: nop

    // 0x800D6178: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D617C: nop

    // 0x800D6180: bne         $t1, $zero, L_800D6248
    if (ctx->r9 != 0) {
        // 0x800D6184: nop
    
            goto L_800D6248;
    }
    // 0x800D6184: nop

    // 0x800D6188: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D618C: nop

    // 0x800D6190: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D6194: nop

    // 0x800D6198: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D619C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D61A0: jal         0x80014E80
    // 0x800D61A4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800D61A4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x800D61A8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D61AC: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x800D61B0: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800D61B4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800D61B8: nop

    // 0x800D61BC: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800D61C0: nop

    // 0x800D61C4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800D61C8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800D61CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D61D0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800D61D4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D61D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D61DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D61E0: addiu       $t0, $t9, 0x5A
    ctx->r8 = ADD32(ctx->r25, 0X5A);
    // 0x800D61E4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800D61E8: nop

    // 0x800D61EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D61F0: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x800D61F4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800D61F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D61FC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6200: nop

    // 0x800D6204: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
    // 0x800D6208: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D620C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800D6210: addiu       $t3, $t3, -0x7798
    ctx->r11 = ADD32(ctx->r11, -0X7798);
    // 0x800D6214: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6218: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800D621C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D6220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D6224: jal         0x8001C0EC
    // 0x800D6228: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800D6228: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_1:
    // 0x800D622C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6230: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6234: jal         0x8001BBDC
    // 0x800D6238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800D6238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800D623C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6240: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800D6244: sh          $t4, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r12;
L_800D6248:
    // 0x800D6248: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D624C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6250: nop

    // 0x800D6254: swc1        $f10, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f10.u32l;
    // 0x800D6258: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D625C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6260: jal         0x80029C40
    // 0x800D6264: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800D6264: nop

    after_3:
    // 0x800D6268: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D626C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D6270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6278: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800D627C: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x800D6280: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D6284: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800D6288: jal         0x80029018
    // 0x800D628C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800D628C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x800D6290: beq         $v0, $zero, L_800D62E4
    if (ctx->r2 == 0) {
        // 0x800D6294: nop
    
            goto L_800D62E4;
    }
    // 0x800D6294: nop

    // 0x800D6298: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D629C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800D62A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D62A4: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800D62A8: nop

    // 0x800D62AC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800D62B0: nop

    // 0x800D62B4: bc1f        L_800D62D0
    if (!c1cs) {
        // 0x800D62B8: nop
    
            goto L_800D62D0;
    }
    // 0x800D62B8: nop

    // 0x800D62BC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800D62C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D62C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800D62C8: b           L_800D62E4
    // 0x800D62CC: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
        goto L_800D62E4;
    // 0x800D62CC: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
L_800D62D0:
    // 0x800D62D0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800D62D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D62D8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800D62DC: nop

    // 0x800D62E0: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
L_800D62E4:
    // 0x800D62E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D62E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D62EC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D62F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D62F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D62F8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800D62FC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800D6300: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D6304: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800D6308: jal         0x800295C0
    // 0x800D630C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x800D630C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x800D6310: beq         $v0, $zero, L_800D6328
    if (ctx->r2 == 0) {
        // 0x800D6314: nop
    
            goto L_800D6328;
    }
    // 0x800D6314: nop

    // 0x800D6318: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800D631C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6320: b           L_800D6338
    // 0x800D6324: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
        goto L_800D6338;
    // 0x800D6324: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
L_800D6328:
    // 0x800D6328: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800D632C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6330: nop

    // 0x800D6334: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
L_800D6338:
    // 0x800D6338: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D633C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D6340: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D6344: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800D6348: nop

    // 0x800D634C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800D6350: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
    // 0x800D6354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D635C: jal         0x8001B44C
    // 0x800D6360: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800D6360: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800D6364: beq         $v0, $zero, L_800D63AC
    if (ctx->r2 == 0) {
        // 0x800D6368: nop
    
            goto L_800D63AC;
    }
    // 0x800D6368: nop

    // 0x800D636C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6370: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6374: jal         0x8002A2EC
    // 0x800D6378: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x800D6378: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_7:
    // 0x800D637C: beq         $v0, $zero, L_800D63AC
    if (ctx->r2 == 0) {
        // 0x800D6380: nop
    
            goto L_800D63AC;
    }
    // 0x800D6380: nop

    // 0x800D6384: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6388: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D638C: jal         0x8001BBDC
    // 0x800D6390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x800D6390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x800D6394: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6398: nop

    // 0x800D639C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800D63A0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D63A4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800D63A8: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
L_800D63AC:
    // 0x800D63AC: b           L_800D63B4
    // 0x800D63B0: nop

        goto L_800D63B4;
    // 0x800D63B0: nop

L_800D63B4:
    // 0x800D63B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D63B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800D63BC: jr          $ra
    // 0x800D63C0: nop

    return;
    // 0x800D63C0: nop

;}
RECOMP_FUNC void func_800A3BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3BCC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A3BD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A3BD4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A3BD8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800A3BDC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A3BE0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A3BE4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A3BE8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A3BEC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A3BF0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A3BF4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A3BF8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A3BFC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A3C00: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A3C04: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A3C08: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800A3C0C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3C10: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A3C14: addiu       $a1, $a1, 0x38BC
    ctx->r5 = ADD32(ctx->r5, 0X38BC);
    // 0x800A3C18: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A3C1C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A3C20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A3C24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A3C28: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A3C2C: jal         0x80027464
    // 0x800A3C30: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A3C30: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A3C34: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x800A3C38: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3C3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A3C40: beq         $t1, $at, L_800A3D64
    if (ctx->r9 == ctx->r1) {
        // 0x800A3C44: nop
    
            goto L_800A3D64;
    }
    // 0x800A3C44: nop

    // 0x800A3C48: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3C4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3C50: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A3C54: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A3C58: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A3C5C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A3C60: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A3C64: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A3C68: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A3C6C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800A3C70: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3C74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3C78: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A3C7C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A3C80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A3C84: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A3C88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A3C8C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A3C90: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A3C94: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3C98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3C9C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800A3CA0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A3CA4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A3CA8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A3CAC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A3CB0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A3CB4: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x800A3CB8: sh          $t8, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r24;
    // 0x800A3CBC: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3CC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3CC4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800A3CC8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A3CCC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A3CD0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A3CD4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A3CD8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A3CDC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800A3CE0: sh          $t0, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r8;
    // 0x800A3CE4: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3CE8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800A3CEC: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A3CF0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A3CF4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A3CF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A3CFC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A3D00: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A3D04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3D08: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A3D0C: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800A3D10: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3D14: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800A3D18: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A3D1C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A3D20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A3D24: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A3D28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A3D2C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800A3D30: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x800A3D34: lwc1        $f20, 0xC($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800A3D38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3D3C: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x800A3D40: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3D44: nop

    // 0x800A3D48: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x800A3D4C: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800A3D50: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A3D54: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800A3D58: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A3D5C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A3D60: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
L_800A3D64:
    // 0x800A3D64: b           L_800A3D6C
    // 0x800A3D68: nop

        goto L_800A3D6C;
    // 0x800A3D68: nop

L_800A3D6C:
    // 0x800A3D6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A3D70: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800A3D74: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A3D78: jr          $ra
    // 0x800A3D7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A3D7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CA930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA930: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CA934: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CA938: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CA93C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CA940: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CA944: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CA948: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CA94C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA950: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CA954: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA958: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CA95C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CA960: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800CA964: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CA968: bne         $t8, $at, L_800CA9E0
    if (ctx->r24 != ctx->r1) {
        // 0x800CA96C: nop
    
            goto L_800CA9E0;
    }
    // 0x800CA96C: nop

    // 0x800CA970: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800CA974: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800CA978: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800CA97C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800CA980: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CA984: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800CA988: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CA98C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800CA990: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800CA994: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800CA998: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CA99C: beq         $s0, $at, L_800CA9B8
    if (ctx->r16 == ctx->r1) {
        // 0x800CA9A0: nop
    
            goto L_800CA9B8;
    }
    // 0x800CA9A0: nop

    // 0x800CA9A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CA9A8: beq         $s0, $at, L_800CA9C8
    if (ctx->r16 == ctx->r1) {
        // 0x800CA9AC: nop
    
            goto L_800CA9C8;
    }
    // 0x800CA9AC: nop

    // 0x800CA9B0: b           L_800CA9D8
    // 0x800CA9B4: nop

        goto L_800CA9D8;
    // 0x800CA9B4: nop

L_800CA9B8:
    // 0x800CA9B8: jal         0x800CA6DC
    // 0x800CA9BC: nop

    func_800CA6DC(rdram, ctx);
        goto after_0;
    // 0x800CA9BC: nop

    after_0:
    // 0x800CA9C0: b           L_800CA9E0
    // 0x800CA9C4: nop

        goto L_800CA9E0;
    // 0x800CA9C4: nop

L_800CA9C8:
    // 0x800CA9C8: jal         0x800CA890
    // 0x800CA9CC: nop

    func_800CA890(rdram, ctx);
        goto after_1;
    // 0x800CA9CC: nop

    after_1:
    // 0x800CA9D0: b           L_800CA9E0
    // 0x800CA9D4: nop

        goto L_800CA9E0;
    // 0x800CA9D4: nop

L_800CA9D8:
    // 0x800CA9D8: b           L_800CA9E0
    // 0x800CA9DC: nop

        goto L_800CA9E0;
    // 0x800CA9DC: nop

L_800CA9E0:
    // 0x800CA9E0: b           L_800CA9E8
    // 0x800CA9E4: nop

        goto L_800CA9E8;
    // 0x800CA9E4: nop

L_800CA9E8:
    // 0x800CA9E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA9EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CA9F0: jr          $ra
    // 0x800CA9F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800CA9F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
